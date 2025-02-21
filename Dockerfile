FROM ubuntu:18.04 AS build
WORKDIR /fake-gpu
COPY . .
ENV DEBIAN_FRONTEND=noninteractive
ARG BUILD_TYPE
# RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list
# RUN sed -i 's/security.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list
# Update the package list and install essential tools
RUN apt-get update && apt-get install -y \
    build-essential \
    ninja-build \
    git \
    wget
# Install CMake
RUN wget -q https://github.com/Kitware/CMake/releases/download/v3.22.0/cmake-3.22.0-Linux-x86_64.tar.gz && \
    tar -zxvf cmake-3.22.0-Linux-x86_64.tar.gz && \
    cp -r cmake-3.22.0-linux-x86_64/* /usr && \
    rm -rf cmake-3.22.0-linux-x86_64


RUN make build BUILD_TYPE=${BUILD_TYPE}

FROM golang:1.22.5-bullseye AS gobuild
WORKDIR /go/src/github.com/chaunceyjiang/fake-gpu
COPY . .
RUN make build-cmd

FROM ubuntu:20.04
WORKDIR /fake-gpu
COPY --from=build /fake-gpu/output/lib64/libfakegpu.so /fake-gpu/libfakegpu.so
COPY --from=gobuild /go/src/github.com/chaunceyjiang/fake-gpu/output/bin/device-injector /fake-gpu/device-injector
COPY --from=gobuild /go/src/github.com/chaunceyjiang/fake-gpu/output/bin/nvidia-smi /fake-gpu/nvidia-smi
COPY ./conf/fake-gpu.yaml /fake-gpu/fake-gpu.yaml
COPY ./entrypoint.sh /fake-gpu/entrypoint.sh
ENTRYPOINT ["/fake-gpu/entrypoint.sh"]