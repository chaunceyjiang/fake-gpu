# Makefile for building CUDA hook

# Default values
CUDA_ARCHITECTURE := 86 # a: (Tesla P100: 60, GTX1080Ti: 61, Tesla V100: 70, RTX2080Ti: 75, NVIDIA A100: 80, RTX3080Ti / RTX3090 / RTX A6000: 86, RTX4090: 89, NVIDIA H100: 90)
BUILD_TYPE := Debug # t: (Debug, Release)
VERBOSE_MAKEFILE := OFF # b: (ON, OFF)
WORK_PATH := $(dir $(abspath $(firstword $(MAKEFILE_LIST))))
OUTPUT_DIR := $(WORK_PATH)/output
BUILD_DIR := $(WORK_PATH)/build

# Target: all
.PHONY: all
all: build

# Clean up build and output directories
.PHONY: clean
clean:
	@echo "========== build enter =========="
	@rm -rf $(BUILD_DIR) $(OUTPUT_DIR)
	@mkdir -p $(BUILD_DIR)

# Build the project
.PHONY: build
build: clean
	@echo "========== build cuda_hook =========="
	@echo "Running cmake..."
	@cd $(BUILD_DIR) && cmake -DCMAKE_CUDA_ARCHITECTURES=$(CUDA_ARCHITECTURE) \
		-DCMAKE_BUILD_TYPE=$(BUILD_TYPE) -DHOOK_VERBOSE_MAKEFILE=$(VERBOSE_MAKEFILE) \
		-DCMAKE_INSTALL_PREFIX=$(OUTPUT_DIR) -DCMAKE_SKIP_RPATH=ON $(WORK_PATH)
	@echo "Running make..."
	@cd $(BUILD_DIR) && make -j$(shell nproc --ignore=2)
	@make install -C $(BUILD_DIR)

# Capture version and build details
.PHONY: version
version:
	@BRANCH=$(shell git rev-parse --abbrev-ref HEAD) && \
	COMMIT=$(shell git rev-parse HEAD) && \
	GCC_VERSION=$(shell gcc -dumpversion) && \
	COMPILE_TIME=$(shell date "+%H:%M:%S %Y-%m-%d") && \
	echo "branch: $$BRANCH" >> $(OUTPUT_DIR)/hook_version && \
	echo "commit: $$COMMIT" >> $(OUTPUT_DIR)/hook_version && \
	echo "gcc_version: $$GCC_VERSION" >> $(OUTPUT_DIR)/hook_version && \
	echo "compile_time: $$COMPILE_TIME" >> $(OUTPUT_DIR)/hook_version

# Default target
.PHONY: default
default: all version

.PHONY: docker-build
docker-build:
	docker build -t fake-gpu -f Dockerfile .
	docker run --rm -v $(WORK_PATH):/mnt fake-gpu cp /fake-gpu/output/lib64/libfake_gpu.so /mnt/libfake_gpu.so

