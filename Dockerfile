FROM nvidia/cuda:12.2.0-devel-ubuntu20.04 AS build
WORKDIR /fake-gpu
ADD . .
ENV DEBIAN_FRONTEND=noninteractive
RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list
RUN sed -i 's/security.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list
RUN apt-get -y update; apt-get -y install cmake git
RUN make
