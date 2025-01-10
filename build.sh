echo "========== build enter =========="

WORK_PATH=$(cd $(dirname $0) && pwd) && cd $WORK_PATH

CUDA_ARCHITECTURE=86 # a: (Tesla P100: 60, GTX1080Ti: 61, Tesla V100: 70, RTX2080Ti: 75, NVIDIA A100: 80, RTX3080Ti / RTX3090 / RTX A6000: 86, RTX4090: 89, NVIDIA H100: 90)
BUILD_TYPE=Debug # t: (Debug, Release)
VERBOSE_MAKEFILE=OFF # b: (ON, OFF)

while getopts ":a:t:s:b:" opt
do
    case $opt in
        a)
        CUDA_ARCHITECTURE=$OPTARG
        echo "CUDA_ARCHITECTURE: $CUDA_ARCHITECTURE"
        ;;
        t)
        BUILD_TYPE=$OPTARG
        echo "BUILD_TYPE: $BUILD_TYPE"
        ;;
        b)
        VERBOSE_MAKEFILE=$OPTARG
        echo "VERBOSE_MAKEFILE: $VERBOSE_MAKEFILE"
        ;;
        ?)
        echo "invalid param: $OPTARG"
        exit 1
        ;;
    esac
done

echo_cmd() {
    echo $1
    $1
}

echo "========== build cuda_hook =========="

echo_cmd "rm -rf build output"
echo_cmd "mkdir build"

echo_cmd "cd build"
echo_cmd "cmake -DCMAKE_CUDA_ARCHITECTURES=$CUDA_ARCHITECTURE -DCMAKE_BUILD_TYPE=$BUILD_TYPE -DHOOK_VERBOSE_MAKEFILE=$VERBOSE_MAKEFILE -DCMAKE_INSTALL_PREFIX=$WORK_PATH/output -DCMAKE_SKIP_RPATH=ON .."
echo_cmd "make -j$(nproc --ignore=2)"
echo_cmd "make install"

BRANCH=`git rev-parse --abbrev-ref HEAD`
COMMIT=`git rev-parse HEAD`
GCC_VERSION=`gcc -dumpversion`
COMPILE_TIME=$(date "+%H:%M:%S %Y-%m-%d")

echo "branch: $BRANCH" >> $WORK_PATH/output/hook_version
echo "commit: $COMMIT" >> $WORK_PATH/output/hook_version
echo "gcc_version: $GCC_VERSION" >> $WORK_PATH/output/hook_version
echo "compile_time: $COMPILE_TIME" >> $WORK_PATH/output/hook_version

echo "========== build exit =========="
