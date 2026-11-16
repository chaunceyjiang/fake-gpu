# Fake GPU on real CPU Kubernetes nodes

The kubelet, Pods, processes, CPU, memory, networking and storage are real. GPU
information is synthetic; this project does not execute CUDA kernels or perform
model inference. A model service still needs an independently supplied CPU or
fake inference server image. GPU scheduling alone does not make vLLM run.

Use dedicated disposable CPU test nodes. Do not install alongside a real GPU
driver. The DaemonSet creates fake device nodes and integrates with containerd
NRI. CPU and memory requests must fit the real machine.

## Install from source

The source Chart now contains a default GPU configuration; no packaging step is
required before `helm install`. Override the complete configuration with
`--set-file gpuConfig=/path/to/fake-gpu.yaml`. For idle devices, set both
`utilization.gpu` and `utilization.memory` to zero in that file. Nonzero values
remain static simulated observations, including after a workload terminates.

```sh
docker build -t fake-gpu:node-compat .
# Load this image into your test cluster's container runtime before installing.
helm upgrade --install fake-gpu ./charts/fake-gpu -n kube-system \
  --set image.repository=fake-gpu --set image.tag=node-compat \
  --set nri.runtime.patchConfig=false \
  --set hostIntegration.enabled=true \
  --set-file gpuConfig=/path/to/fake-gpu.yaml
```

`nri.runtime.patchConfig=false` requires NRI to be enabled beforehand. For a
kind cluster, include this in the cluster configuration:

```yaml
containerdConfigPatches:
- |-
  [plugins."io.containerd.nri.v1.nri"]
    disable = false
```

Install either the upstream NVIDIA Device Plugin or the existing platform's
supported device plugin. Do not run competing plugins for the same resource.
The real kubelet then advertises and allocates `nvidia.com/gpu`. Keep the
platform's normal scheduler, queues, admission and release checks.

## Optional host observer integration

`hostIntegration.enabled` defaults to `false`. When enabled, the DaemonSet mounts
host `/usr/local/bin`, installs a marked `nvidia-smi` wrapper, and points it at the
node's existing `/usr/local/fake-gpu` configuration and library. This supports
agents that use `nsenter` into the host rather than executing inside a GPU Pod.
The wrapper refuses to overwrite an unrelated existing utility and is removed
on graceful DaemonSet termination. No CUDA driver is installed.

The installer prepares stable, node-scoped canonical GPU UUIDs and creates the
standard NVIDIA control-device paths required by UUID-specific device plugins.
Host and Pod observers read the same prepared configuration.

The fake library and executable must match the node architecture. The Dockerfile
builds natively on Linux amd64 and arm64 and no longer downloads x86-only CMake.

The CLI supports CSV GPU inventory including `utilization.gpu`, `pci.bus_id`,
`memory.free`, and `nounits`, and compute queries for `pid`, `gpu_uuid` and
`used_memory` / `used_gpu_memory`. Unknown fields fail explicitly. Compute
process queries return an empty result: no CUDA computation is taking place.
The library no longer reports the container's PID 1 as a fabricated GPU process.
Resource allocation must be checked through kubelet assignments and real
container/process lifecycle, rather than treating an empty process query alone
as proof that a device has been released.

## Verification

```sh
go test -mod=vendor ./pkg/...
helm lint charts/fake-gpu
sh -n entrypoint.sh
docker build -t fake-gpu:node-compat .
python3 tests/cli_smoke.py fake-gpu:node-compat
```

The CLI smoke test uses the built fake NVML library in real CPU containers and
requires no GPU or network access in those containers. Kubernetes scheduling,
node observer discovery and release must additionally be exercised in an
isolated cluster. Simulation does not validate real GPU drivers, kernel
execution, device isolation or model quality/performance.
