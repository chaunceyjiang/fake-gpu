package main

import (
	"context"
	"flag"
	"fmt"
	"os"
	"strings"

	"github.com/containerd/nri/pkg/api"
	"github.com/containerd/nri/pkg/stub"
	"github.com/sirupsen/logrus"
	"sigs.k8s.io/yaml"
)

var (
	log            *logrus.Logger
	verbose        bool
	sourceHostPath string
	confPath       string
	gpusuffix      string
	mountOption    = []string{"rbind", "ro", "rprivate"}
)

type InjectGPUType int

const (
	injectGPUTypeNone InjectGPUType = iota
	injectGPUTypevGPU
	injectGPUTypeGPU
)

// an annotated mount
type mount struct {
	Source      string   `json:"source"`
	Destination string   `json:"destination"`
	Type        string   `json:"type"`
	Options     []string `json:"options"`
}

// our injector plugin
type plugin struct {
	stub stub.Stub
}

// CreateContainer handles container creation requests.
func (p *plugin) CreateContainer(_ context.Context, pod *api.PodSandbox, ctr *api.Container) (*api.ContainerAdjustment, []*api.ContainerUpdate, error) {
	if verbose {
		dump("CreateContainer", "pod", pod, "container", ctr)
	}

	adjust := &api.ContainerAdjustment{}

	if err := injectMounts(pod, ctr, adjust); err != nil {
		return nil, nil, err
	}

	if verbose {
		dump(containerName(pod, ctr), "ContainerAdjustment", adjust)
	}

	return adjust, nil, nil
}

func findEnvWithName(name string, env []string) bool {
	for _, e := range env {
		if strings.HasPrefix(e, name+"=") {
			return true
		}
	}
	return false
}

func findEnvWithNameAndValue(name string, env []string) (string, bool) {
	for _, e := range env {
		if strings.HasPrefix(e, name+"=") {
			e = strings.TrimPrefix(e, name+"=")
			return e, true
		}
	}
	return "", false
}

func injectMounts(pod *api.PodSandbox, ctr *api.Container, a *api.ContainerAdjustment) error {
	var mounts []mount
	injectGPU := injectGPUTypeNone
	visibleAllDevice := false
	switch {
	case findEnvWithName("NVIDIA_VISIBLE_DEVICES", ctr.Env):
		if env, ok := findEnvWithNameAndValue("NVIDIA_VISIBLE_DEVICES", ctr.Env); ok && env != "void" {
			injectGPU = injectGPUTypeGPU
			if verbose {
				log.Infof("%s: injecting GPU...", containerName(pod, ctr))
			}
		}
		if env, ok := findEnvWithNameAndValue("NVIDIA_VISIBLE_DEVICES", ctr.Env); ok && env == "all" {
			visibleAllDevice = true
		}
	case findEnvWithName("NVIDIA_REQUIRE_CUDA", ctr.Env) && findEnvWithName("CUDA_VERSION", ctr.Env):
		injectGPU = injectGPUTypeGPU
		visibleAllDevice = true
		if verbose {
			log.Infof("%s: injecting GPU...", containerName(pod, ctr))
		}
	}
	filenames := []string{
		"libcuda.so.1",
		"libnvidia-ml.so.1",
		"libcudart.so"}
	librarySearchPaths := []string{
		"/lib",
		"/usr/lib64",
		"/usr/lib/x86_64-linux-gnu",
		"/usr/lib/aarch64-linux-gnu",
		"/lib64",
		"/lib/x86_64-linux-gnu",
		"/lib/aarch64-linux-gnu",
	}
	if injectGPU != injectGPUTypeNone {
		for _, filename := range filenames {
			for _, path := range librarySearchPaths {
				mounts = append(mounts, mount{
					Source:      fmt.Sprintf("%s/libfakegpu.so", sourceHostPath),
					Destination: fmt.Sprintf("%s/%s", path, filename),
					Type:        "bind",
					Options:     mountOption,
				})
			}
		}
		mounts = append(mounts, mount{
			Source:      fmt.Sprintf("%s/nvidia-smi", sourceHostPath),
			Destination: "/usr/bin/nvidia-smi",
			Type:        "bind",
			Options:     mountOption,
		})
		mounts = append(mounts, mount{
			Source:      fmt.Sprintf("%s/fake-gpu.yaml", sourceHostPath),
			Destination: "/usr/local/fake-gpu/fake-gpu.yaml",
			Type:        "bind",
			Options:     mountOption,
		})
	}

	if len(mounts) == 0 {
		log.Debugf("%s: no mounts annotated...", containerName(pod, ctr))
		return nil
	}

	if verbose {
		dump(containerName(pod, ctr), "annotated mounts", mounts)
	}

	for _, m := range mounts {
		a.AddMount(m.toNRI())
		if !verbose {
			log.Infof("%s: injected mount %q -> %q...", containerName(pod, ctr),
				m.Source, m.Destination)
		}
	}

	a.AddEnv("FAKE_GPU_CONFIG", "/usr/local/fake-gpu/fake-gpu.yaml")
	if len(gpusuffix) > 0 {
		a.AddEnv("FAKE_GPU_SUFFIX", gpusuffix)
	}
	if !verbose {
		log.Infof("%s: injected env %q -> %q...", containerName(pod, ctr),
			"FAKE_GPU_CONFIG", "/usr/local/fake-gpu/fake-gpu.yaml")
		if visibleAllDevice {
			log.Infof("%s: injected env %q -> %q...", containerName(pod, ctr),
				"FAKE_GPU_SUFFIX", gpusuffix)
		}
	}
	return nil
}

// Convert a device to the NRI API representation.
func (m *mount) toNRI() *api.Mount {
	apiMnt := &api.Mount{
		Source:      m.Source,
		Destination: m.Destination,
		Type:        m.Type,
		Options:     m.Options,
	}
	return apiMnt
}

// Construct a container name for log messages.
func containerName(pod *api.PodSandbox, container *api.Container) string {
	if pod != nil {
		return pod.Name + "/" + container.Name
	}
	return container.Name
}

// Dump one or more objects, with an optional global prefix and per-object tags.
func dump(args ...interface{}) {
	var (
		prefix string
		idx    int
	)

	if len(args)&0x1 == 1 {
		prefix = args[0].(string)
		idx++
	}

	for ; idx < len(args)-1; idx += 2 {
		tag, obj := args[idx], args[idx+1]
		msg, err := yaml.Marshal(obj)
		if err != nil {
			log.Infof("%s: %s: failed to dump object: %v", prefix, tag, err)
			continue
		}

		if prefix != "" {
			log.Infof("%s: %s:", prefix, tag)
			for _, line := range strings.Split(strings.TrimSpace(string(msg)), "\n") {
				log.Infof("%s:    %s", prefix, line)
			}
		} else {
			log.Infof("%s:", tag)
			for _, line := range strings.Split(strings.TrimSpace(string(msg)), "\n") {
				log.Infof("  %s", line)
			}
		}
	}
}

func main() {
	var (
		pluginName string
		pluginIdx  string
		opts       []stub.Option
		err        error
	)

	log = logrus.StandardLogger()
	log.SetFormatter(&logrus.TextFormatter{
		PadLevelText: true,
	})

	flag.StringVar(&pluginName, "name", "", "plugin name to register to NRI")
	flag.StringVar(&pluginIdx, "idx", "", "plugin index to register to NRI")
	flag.BoolVar(&verbose, "verbose", false, "enable (more) verbose logging")
	flag.StringVar(&sourceHostPath, "source-path", "/usr/local/fake-gpu", "source host path for mounts")
	flag.StringVar(&gpusuffix, "gpu-uuid-suffix", "", "gpu uuid suffix for fake gpu")
	flag.StringVar(&confPath, "conf", "", "fake gpu config file path")
	flag.Parse()

	if pluginName != "" {
		opts = append(opts, stub.WithPluginName(pluginName))
	}
	if pluginIdx != "" {
		opts = append(opts, stub.WithPluginIdx(pluginIdx))
	}

	p := &plugin{}
	if p.stub, err = stub.New(p, opts...); err != nil {
		log.Fatalf("failed to create plugin stub: %v", err)
	}
	err = p.stub.Run(context.Background())
	if err != nil {
		log.Errorf("plugin exited with error %v", err)
		os.Exit(1)
	}
}
