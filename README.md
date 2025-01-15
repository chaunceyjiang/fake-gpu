# fake-gpu

## Project Overview

The `fake-gpu` project is designed to simulate GPU information, making it easier to test scenarios where a GPU is not available. This can be particularly useful for development and testing purposes in environments that lack physical GPU hardware.

## Usage

To use the fake GPU, follow these steps:

1. Deploy the fake GPU to your Kubernetes cluster.
``` shell
helm template charts/fake-gpu --set imag.repository=chaunceyjiang/fake-gpu  --set image.tag=v1.0.0 --set nri.runtime.patchConfig=false > install.yaml
kubectl apply -f install.yaml
```
2. Configure your application to use the GPU.
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
3. Run your application as you would with a real GPU.
``` shell
kubectl exec -it fake-gpu -- nvidia-smi

```

kube
## Compilation

To compile the project, follow these steps:

``` shell
make docker-build IMAGE_VERSION=v1.0.0
helm template charts/fake-gpu --set imag.repository=chaunceyjiang/fake-gpu  --set image.tag=v1.0.0 --set nri.runtime.patchConfig=false > install.yaml
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
