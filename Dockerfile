FROM golang:1.22.12-bookworm AS build
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y --no-install-recommends cmake g++ libyaml-cpp-dev && rm -rf /var/lib/apt/lists/*
WORKDIR /src
COPY . .
RUN cmake -S . -B build -DCMAKE_BUILD_TYPE=Release && cmake --build build --target fakegpu -j2
RUN go test -mod=vendor ./pkg/... && go build -mod=vendor -o /out/prepare-config ./cmd/prepare-config && go build -mod=vendor -o /out/device-injector ./cmd/device-injector && go build -mod=vendor -o /out/nvidia-smi ./cmd/nvidia-smi

FROM debian:bookworm-slim
RUN apt-get update && apt-get install -y --no-install-recommends libyaml-cpp0.7 libstdc++6 && rm -rf /var/lib/apt/lists/*
WORKDIR /fake-gpu
COPY --from=build /src/build/libfakegpu.so /fake-gpu/libfakegpu.so
COPY --from=build /out/ /fake-gpu/
COPY conf/fake-gpu.yaml entrypoint.sh /fake-gpu/
ENTRYPOINT ["/fake-gpu/entrypoint.sh"]
