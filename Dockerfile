FROM ubuntu:22.04 AS build
WORKDIR /fake-gpu
COPY . .
ENV DEBIAN_FRONTEND=noninteractive
RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list
RUN sed -i 's/security.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list
# Update the package list and install essential tools
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    ninja-build \
    git \
    wget
RUN make build

FROM golang:1.22.5-bullseye AS gobuild
WORKDIR /go/src/github.com/chaunceyjiang/fake-gpu
COPY . .
RUN make build-cmd

FROM ubuntu:22.04
WORKDIR /fake-gpu
COPY --from=build /fake-gpu/output/lib64/libfakegpu.so /fake-gpu/libfakegpu.so
COPY --from=gobuild /go/src/github.com/chaunceyjiang/fake-gpu/output/bin/device-injector /fake-gpu/device-injector
COPY --from=gobuild /go/src/github.com/chaunceyjiang/fake-gpu/output/bin/nvidia-smi /fake-gpu/nvidia-smi
COPY ./conf/fake-gpu.yaml /fake-gpu/fake-gpu.yaml
COPY ./entrypoint.sh /fake-gpu/entrypoint.sh
ENTRYPOINT ["/fake-gpu/entrypoint.sh"]