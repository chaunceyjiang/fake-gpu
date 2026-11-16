# CPU Kubernetes validation — 2026-11-16

Validated on macOS ARM64 with OrbStack Linux aarch64, Docker 29.8.2, kind 0.31.0,
Kubernetes 1.34.0, containerd 2.1.3, NVIDIA Device Plugin 0.17.0 and Volcano 1.15.0.
All cluster resources were created in a disposable local cluster. No GPU hardware
or CUDA model computation was used.

## Results

- Seven Go tests passed: CSV formats, complete inventory columns, invalid fields,
  compute-process fields, CSV escaping/empty processes, node-scoped canonical
  UUIDs and invalid configuration.
- Five real-container CLI smoke checks passed against the native ARM64 image:
  eight-column numeric inventory, empty compute process output, unknown GPU
  field rejection, unknown process field rejection, and conflicting queries.
- The real NVIDIA device plugin registered four synthetic GPUs with kubelet.
  A Pod received exactly one device and consumed real CPU (approximately 0.2 core
  under a 200m limit). A four-device request remained Pending while one device
  was allocated and started after the first Pod was deleted.
- A real Pod scheduled by Volcano, with PodGroup and PriorityClass, served
  synthetic chat JSON and SSE through a Kubernetes Service. The test engine was
  an independent CPU fixture, not a model included in this project.
- An unchanged external host observer discovered four healthy canonical GPU UUIDs,
  resolved the running Pod's exact device, rejected release while the process
  was running, and confirmed process exit and release of that same device after
  normal Pod deletion. The idle test configuration used zero static memory and
  utilization values. No observer checks were disabled.
- Graceful Helm uninstall removed the optional host wrapper and fake control
  devices. Reinstallation restored the device discovery stack.
- Helm lint, shell syntax and Git whitespace checks passed.

## Reproduction

See [CPU node integration](cpu-kubernetes-nodes.md). The checked-in Go tests and
`tests/cli_smoke.py` are runnable independently of the consuming platform. The
cluster integration used the consuming platform's unmodified host observer and
a separately supplied fake HTTP engine fixture.

## Limits

This proves the fake machine contracts and selected real Kubernetes operations.
It does not prove a consuming product's browser/login, IAM, asset database,
model catalog, billing or complete deployment workflow. GPU drivers, actual
CUDA execution, model correctness/performance, HAMi, MIG and RDMA were not
validated. Native ARM64 was exercised locally; the added GitHub workflow builds
and tests amd64 when Actions is enabled. CI results must be recorded separately.
