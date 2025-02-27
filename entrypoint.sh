#!/bin/sh
echo "create fake gpu device"
# count the number of gpu
gpu_num=`cat /fake-gpu/fake-gpu.yaml |grep cuda_version | wc -l`
for i in `seq 0 $gpu_num`
do
  mknod /host-dev/nvidia$i c 195 $i
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
        cp "$source_file" "$dest_file"
        echo "Copied: $source_file -> $dest_file"
    else
        # Compare MD5 values of source and destination files
        source_md5=$(md5sum "$source_file" | cut -d ' ' -f 1)
        dest_md5=$(md5sum "$dest_file" | cut -d ' ' -f 1)

        # If MD5 values are different, copy the file
        if [ "$source_md5" != "$dest_md5" ]; then
            cp "$source_file" "$dest_file"
            echo "Copied: $source_file -> $dest_file"
        else
            echo "Skipped (same MD5): $source_file"
        fi
    fi
done

# Function to handle termination signals
cleanup() {
    echo "Received termination signal, stopping device-injector..."
    kill -TERM "$device_injector_pid" 2>/dev/null
    wait "$device_injector_pid"
    echo "device-injector stopped."
    rm -f /run/nvidia/validations/toolkit-ready
    rm -f /run/nvidia/validations/driver-ready
    for i in `seq 0 $gpu_num`
    do
        rm -f /host-dev/nvidia$i
    done
    echo "Cleanup complete."
    exit 0
}

# Trap termination signals
trap cleanup TERM INT

echo "start fake gpu device"
echo "params: -gpu-uuid-suffix $NODE_NAME $@"
/fake-gpu/device-injector -gpu-uuid-suffix $NODE_NAME $@ &
device_injector_pid=$!
# Create the toolkit-ready file to indicate that the toolkit is ready
mkdir -p /run/nvidia/validations
touch /run/nvidia/validations/toolkit-ready
# Create the driver-ready file to indicate that the driver is ready
touch /run/nvidia/validations/driver-ready
# Wait for the device-injector process to finish
wait "$device_injector_pid"