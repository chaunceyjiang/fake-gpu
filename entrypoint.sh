#!/bin/sh
echo "create fake gpu device"
# count the number of gpu
gpu_num=`grep -c cuda_version /fake-gpu/fake-gpu.yaml`
if [ "$gpu_num" -eq 0 ]; then
    echo "fake GPU configuration has no devices" >&2
    exit 1
fi
for i in $(seq 0 $((gpu_num - 1)))
do
  test -e /host-dev/nvidia$i || mknod /host-dev/nvidia$i c 195 $i
  chmod 666 /host-dev/nvidia$i
done
# cp cp /fake-gpu/* files to /etc/fake-gpu directory, if md5sum is different, then copy
# Source directory
SOURCE_DIR="/fake-gpu/"

# Destination directory from the argument
DEST_DIR="/etc/fake-gpu/"


# Check if the destination directory exists, create it if it doesn't
if [ ! -d "$DEST_DIR" ]; then
    mkdir -p "$DEST_DIR"
fi

# Traverse all files in the source directory
find "$SOURCE_DIR" -type f | while read -r source_file; do
    # Get the relative path of the source file
    relative_path="${source_file#$SOURCE_DIR}"

    # Construct the destination file path
    dest_file="$DEST_DIR$relative_path"

    # If the destination file doesn't exist, copy the source file
    if [ ! -f "$dest_file" ]; then
        # Create the parent directory of the destination file if it doesn't exist
        mkdir -p "$(dirname "$dest_file")"
        
        # Copy the file from source to destination
        cp "$source_file" "$dest_file.new"
        mv "$dest_file.new" "$dest_file"
        echo "Copied: $source_file -> $dest_file"
    else
        # Compare MD5 values of source and destination files
        source_md5=$(md5sum "$source_file" | cut -d ' ' -f 1)
        dest_md5=$(md5sum "$dest_file" | cut -d ' ' -f 1)

        # If MD5 values are different, copy the file
        if [ "$source_md5" != "$dest_md5" ]; then
            cp "$source_file" "$dest_file.new"
            mv "$dest_file.new" "$dest_file"
            echo "Copied: $source_file -> $dest_file"
        else
            echo "Skipped (same MD5): $source_file"
        fi
    fi
done

# Prepare node-scoped, canonical GPU UUIDs once; host and Pods share this file.
/fake-gpu/prepare-config /fake-gpu/fake-gpu.yaml /etc/fake-gpu/fake-gpu.yaml "$NODE_NAME" || exit 1
# Standard control device paths used by UUID-specific device plugins.
test -e /host-dev/nvidiactl || mknod /host-dev/nvidiactl c 195 255
test -e /host-dev/nvidia-uvm || mknod /host-dev/nvidia-uvm c 511 0
chmod 666 /host-dev/nvidiactl /host-dev/nvidia-uvm

# Opt-in host entrypoint. The libraries stay under our existing host directory.
# Never replace an unrelated node utility.
if [ "${FAKE_GPU_INSTALL_HOST:-false}" = "true" ]; then
    if [ -e /host-bin/nvidia-smi ] && ! grep -q '# fake-gpu host wrapper' /host-bin/nvidia-smi; then
        echo "refusing to replace existing host nvidia-smi" >&2
        exit 1
    fi
    ln -sf libfakegpu.so /etc/fake-gpu/libnvidia-ml.so.1
    cat > /host-bin/.fake-gpu-nvidia-smi <<EOF_HOST
#!/bin/sh
# fake-gpu host wrapper
export FAKE_GPU_CONFIG=/usr/local/fake-gpu/fake-gpu.yaml
unset FAKE_GPU_SUFFIX
export LD_LIBRARY_PATH="/usr/local/fake-gpu:\${LD_LIBRARY_PATH:-}"
exec /usr/local/fake-gpu/nvidia-smi "\$@"
EOF_HOST
    chmod 755 /host-bin/.fake-gpu-nvidia-smi
    mv /host-bin/.fake-gpu-nvidia-smi /host-bin/nvidia-smi
fi

# Function to handle termination signals
cleanup() {
    echo "Received termination signal, stopping device-injector..."
    kill -TERM "$device_injector_pid" 2>/dev/null
    wait "$device_injector_pid"
    echo "device-injector stopped."
    rm -f /run/nvidia/validations/toolkit-ready
    rm -f /run/nvidia/validations/driver-ready
    for i in $(seq 0 $((gpu_num - 1)))
    do
        rm -f /host-dev/nvidia$i
    done
    if [ "${FAKE_GPU_INSTALL_HOST:-false}" = "true" ] && grep -q '# fake-gpu host wrapper' /host-bin/nvidia-smi; then
        rm -f /host-bin/nvidia-smi
    fi
    rm -f /host-dev/nvidiactl /host-dev/nvidia-uvm
    echo "Cleanup complete."
    exit 0
}

# Trap termination signals
trap cleanup TERM INT

echo "start fake gpu device"
echo "params: $@"
/fake-gpu/device-injector "$@" &
device_injector_pid=$!
# Create the toolkit-ready file to indicate that the toolkit is ready
mkdir -p /run/nvidia/validations
touch /run/nvidia/validations/toolkit-ready
# Create the driver-ready file to indicate that the driver is ready
touch /run/nvidia/validations/driver-ready
# Wait for the device-injector process to finish
wait "$device_injector_pid"