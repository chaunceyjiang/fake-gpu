# fake-gpu

## Project Overview

The `fake-gpu` project is designed to simulate GPU information, making it easier to test scenarios where a GPU is not available. This can be particularly useful for development and testing purposes in environments that lack physical GPU hardware.

## Features
- Simulates GPU information
- Test GPU-related functions without GPU hardware.
- Non-intrusive, no need to modify application code.
- Supports CUDA Driver, CUDA Runtime, NVML API
- Supports nvidia-smi

## Requirements
- containerd >= 1.7.0

## Usage

To use the fake GPU, follow these steps:

You should have a Kubernetes cluster running with containerd as the container runtime.
You should have already deployed [nvidia-device-plugin](https://github.com/NVIDIA/k8s-device-plugin) or [HAMi](https://github.com/Project-HAMi/HAMi).

### Option 1: Deploy the [nvidia-device-plugin](https://github.com/NVIDIA/k8s-device-plugin)
``` shell
 kubectl create -f https://raw.githubusercontent.com/NVIDIA/k8s-device-plugin/v0.17.0/deployments/static/nvidia-device-plugin.yml
```
### Option 2: Deploy the [HAMi](https://github.com/Project-HAMi/HAMi)
``` shell
helm repo add hami-charts https://project-hami.github.io/HAMi/
helm install hami hami-charts/hami  -n kube-system

```

### Deploy the fake GPU 
1. Download the latest release of the fake GPU.
``` shell
wget https://github.com/chaunceyjiang/fake-gpu/releases/download/v0.2.0/fake-gpu-helm-chart-v0.2.0.tgz
```
2. Deploy the fake GPU to your Kubernetes cluster.
``` shell
helm install fake-gpu fake-gpu-helm-chart-v0.2.0.tgz
```
3. Configure your application to use the GPU.
``` shell 
cat <<EOF > fake-gpu.yaml
apiVersion: v1
kind: Pod
metadata:
  name: fake-gpu
spec:
   containers:
   - name: fake-gpu
     image: nginx
     resources:
       limits:
         nvidia.com/gpu: 1
EOF
kubectl apply -f fake-gpu.yaml
```
4. Run your application as you would with a real GPU.
``` shell
kubectl exec -it fake-gpu -- nvidia-smi
+---------------------------------------------------------------------------------------+
| NVIDIA-SMI 470.129.06           Driver Version: 440.33.01          CUDA Version: 12.2 |
+-----------------------------------------+----------------------+----------------------+
| GPU  Name        Persistence-M          | Bus-Id        Disp.A | Volatile Uncorr. ECC |
| Fan  Temp  Perf  Pwr:Usage/Cap          |         Memory-Usage | GPU-Util  Compute M. |
|                                         |                      |               MIG M. |
+-----------------------------------------+----------------------+----------------------+
|   1  NVIDIA Tesla P4                Off |                  Off |                  Off |
| N/A   33C    P8    11W /  70W           |      0MiB / 15411MiB |       0%     Default |
|                                         |                      |                  N/A |
+-----------------------------------------+----------------------+----------------------+

+---------------------------------------------------------------------------------------+
| Processes:                                                                            |
|  GPU   GI   CI        PID   Type   Process name                            GPU Memory |
|        ID   ID                                                             Usage      |
+---------------------------------------------------------------------------------------+
|    1   N/A  N/A       19       G   /usr/local/nginx                           3200MiB |
+---------------------------------------------------------------------------------------+
```


## Compilation

To compile the project, follow these steps:

``` shell
make docker-build IMAGE_VERSION=v0.2.0
helm template charts/fake-gpu --set imag.repository=chaunceyjiang/fake-gpu  --set image.tag=v0.2.0 --set nri.runtime.patchConfig=false > install.yaml
kubectl apply -f install.yaml
```

## Contributing

We welcome contributions to the `fake-gpu` project. To contribute, follow these guidelines:

1. Fork the repository.
2. Create a new branch for your feature or bugfix.
3. Make your changes and commit them with descriptive commit messages.
4. Push your changes to your forked repository.
5. Create a pull request to the main repository.

Please ensure your code follows the project's coding standards and includes appropriate tests.
