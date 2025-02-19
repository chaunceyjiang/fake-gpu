package query

import (
	"errors"
	"fmt"
	"strings"

	"github.com/NVIDIA/go-nvml/pkg/nvml"

	"github.com/chaunceyjiang/fake-gpu/pkg/nvidia/common"
)

func Query(ops common.Opstion) error {
	if ops.Format == nil {
		return errors.New(`"--format=" switch is missing. Please run 'nvidia-smi -h' for help`)
	}
	noheader := false
	for _, format := range ops.Format {
		if format == "noheader" {
			noheader = true
			break
		}
	}
	nvml.Init()
	defer nvml.Shutdown()
	var gpus []common.GPU
	count, ret := nvml.DeviceGetCount()
	if ret != nvml.SUCCESS {
		return errors.New("failed to get device count")
	}

	for i := 0; i < count; i++ {
		gpu := common.GPU{}
		device, ret := nvml.DeviceGetHandleByIndex(i)
		if ret != nvml.SUCCESS {
			return errors.New("failed to get device handle")
		}
		gpu.Idx = int(i)
		uuid, ret := device.GetUUID()
		if ret != nvml.SUCCESS {
			return errors.New("failed to get device UUID")
		}
		gpu.UUID = uuid
		name, ret := device.GetName()
		if ret != nvml.SUCCESS {
			return errors.New("failed to get device name")
		}
		gpu.Name = name
		mem, ret := device.GetMemoryInfo_v2()
		if ret != nvml.SUCCESS {
			return errors.New("failed to get device memory info")
		}
		gpu.TotalMem = mem.Total
		gpu.UsedMem = mem.Used
		gpus = append(gpus, gpu)
	}
	if !noheader {
		fmt.Println(strings.Join(ops.Query, ", "))
	}
	result := []string{}
	for _, query := range ops.Query {
		for _, gpu := range gpus {
			switch query {
			case "index":
				result = append(result, fmt.Sprintf("%d", gpu.Idx))
			case "uuid":
				result = append(result, gpu.UUID)
			case "name":
				result = append(result, gpu.Name)
			case "memory.total":
				result = append(result, fmt.Sprintf("%d MiB", gpu.TotalMem/1024/1024))
			case "memory.used":
				result = append(result, fmt.Sprintf("%d MiB", gpu.UsedMem/1024/1024))
			}
		}
	}
	fmt.Println(strings.Join(result, ", "))
	return nil
}
