FROM nvidia/cuda:12.2.0-devel-ubuntu20.04 AS build
WORKDIR /fake-gpu
ADD . .
ENV DEBIAN_FRONTEND=noninteractive
RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list
RUN sed -i 's/security.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list
RUN apt-get -y update; apt-get -y install cmake git
RUN make build

FROM golang:1.22.5-bullseye AS gobuild
WORKDIR /go/src/github.com/chaunceyjiang/fake-gpu
COPY . .
RUN go mod download
RUN make build-cmd

FROM alpine:3.15
WORKDIR /fake-gpu
COPY --from=build /fake-gpu/output/lib64/libfakegpu.so /fake-gpu/libfakegpu.so
COPY --from=gobuild /go/src/github.com/chaunceyjiang/fake-gpu/output/device-injector /fake-gpu/device-injector
COPY --from=gobuild /go/src/github.com/chaunceyjiang/fake-gpu/output/nvidia-smi /fake-gpu/nvidia-smi
COPY ./conf/fake-gpu.yaml /fake-gpu/fake-gpu.yaml
COPY ./entrypoint.sh /fake-gpu/entrypoint.sh
CMD ["/fake-gpu/entrypoint.sh"]