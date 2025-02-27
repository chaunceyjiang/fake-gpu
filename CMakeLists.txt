cmake_minimum_required (VERSION 3.12)

project (fakegpu LANGUAGES C CXX)

set (CMAKE_VERBOSE_MAKEFILE ${HOOK_VERBOSE_MAKEFILE})

set (CMAKE_C_VISIBILITY_PRESET hidden)
set (CMAKE_CXX_VISIBILITY_PRESET hidden)
set (CMAKE_POSITION_INDEPENDENT_CODE ON)

set (CMAKE_C_FLAGS "-std=c11")
set (CMAKE_C_FLAGS_DEBUG "$ENV{CFLAGS} -O0 -g2 -ggdb -DHOOK_BUILD_DEBUG")
set (CMAKE_C_FLAGS_RELEASE "$ENV{CFLAGS} -O3")

set (CMAKE_CXX_FLAGS "-std=c++11")
set (CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -g2 -ggdb -DHOOK_BUILD_DEBUG")
set (CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3")

set (CMAKE_SHARED_LINKER_FLAGS "-s -Wl,--exclude-libs,ALL")
set (CMAKE_EXE_LINKER_FLAGS "-Wl,--as-needed")

add_compile_options (
    -Wall
    -Werror
    -Wextra
    -Wswitch-default
    -Wfloat-equal
    -Wshadow
    -Wcast-qual
    -Wno-unused-parameter
    -Wno-error=switch-default
    -Wno-switch-default
)
include(FetchContent)

FetchContent_Declare(
  yaml-cpp
  GIT_REPOSITORY https://github.com/jbeder/yaml-cpp.git
  GIT_TAG 0.8.0 
)
FetchContent_MakeAvailable(yaml-cpp)

include_directories (
    ${PROJECT_SOURCE_DIR}/src/common
    ${PROJECT_SOURCE_DIR}/src/cuda
    ${PROJECT_SOURCE_DIR}/src/nvml
    ${PROJECT_SOURCE_DIR}/src/cudart
)

file (GLOB HOOK_SRCS 
    ${PROJECT_SOURCE_DIR}/src/*/*.cpp
)

# libfakegpu.so
add_library (fakegpu SHARED ${HOOK_SRCS})
target_link_libraries (fakegpu PRIVATE yaml-cpp -ldl)
install (TARGETS fakegpu LIBRARY DESTINATION lib64)

# libfakegpu.a
add_library (fakegpu_static STATIC ${HOOK_SRCS})
target_link_libraries (fakegpu_static PRIVATE yaml-cpp -ldl)
set_target_properties (fakegpu_static PROPERTIES OUTPUT_NAME fakegpu)

install (TARGETS fakegpu_static ARCHIVE DESTINATION lib64)
