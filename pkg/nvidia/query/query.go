package query

import (
	"encoding/csv"
	"fmt"
	"io"
	"os"
	"strings"

	"github.com/NVIDIA/go-nvml/pkg/nvml"
	"github.com/chaunceyjiang/fake-gpu/pkg/nvidia/common"
)

func formats(options []string) (bool, bool, error) {
	csvFormat, noheader, nounits := false, false, false
	for _, option := range options {
		switch option {
		case "csv":
			csvFormat = true
		case "noheader":
			noheader = true
		case "nounits":
			nounits = true
		default:
			return false, false, fmt.Errorf("unsupported format %q", option)
		}
	}
	if !csvFormat {
		return false, false, fmt.Errorf("--format must include csv")
	}
	return noheader, nounits, nil
}

func memory(value uint64, nounits bool) string {
	if nounits {
		return fmt.Sprint(value / 1024 / 1024)
	}
	return fmt.Sprintf("%d MiB", value/1024/1024)
}

func gpuValue(gpu common.GPU, field string, nounits bool) (string, error) {
	switch field {
	case "index":
		return fmt.Sprint(gpu.Idx), nil
	case "uuid":
		return gpu.UUID, nil
	case "name":
		return gpu.Name, nil
	case "memory.total":
		return memory(gpu.TotalMem, nounits), nil
	case "memory.used":
		return memory(gpu.UsedMem, nounits), nil
	case "memory.free":
		return memory(gpu.TotalMem-gpu.UsedMem, nounits), nil
	case "driver_version":
		return gpu.DriverVersion, nil
	case "pci.bus_id":
		return gpu.BusID, nil
	case "utilization.gpu":
		if nounits {
			return fmt.Sprint(gpu.Util), nil
		}
		return fmt.Sprintf("%d %%", gpu.Util), nil
	default:
		return "", fmt.Errorf("unsupported GPU query field %q", field)
	}
}

func rows(out io.Writer, fields []string, data [][]string, noheader bool) error {
	writer := csv.NewWriter(out)
	if !noheader {
		if err := writer.Write(fields); err != nil {
			return err
		}
	}
	for _, row := range data {
		if err := writer.Write(row); err != nil {
			return err
		}
	}
	writer.Flush()
	return writer.Error()
}

func initNVML() (int, error) {
	if ret := nvml.Init(); ret != nvml.SUCCESS {
		return 0, fmt.Errorf("NVML initialization: %s", nvml.ErrorString(ret))
	}
	count, ret := nvml.DeviceGetCount()
	if ret != nvml.SUCCESS {
		nvml.Shutdown()
		return 0, fmt.Errorf("device count: %s", nvml.ErrorString(ret))
	}
	return count, nil
}

func Query(ops common.Opstion) error {
	noheader, nounits, err := formats(ops.Format)
	if err != nil {
		return err
	}
	// Reject unsupported columns before producing partial rows.
	for _, field := range ops.Query {
		if _, err := gpuValue(common.GPU{}, field, nounits); err != nil {
			return err
		}
	}
	count, err := initNVML()
	if err != nil {
		return err
	}
	defer nvml.Shutdown()
	driver, ret := nvml.SystemGetDriverVersion()
	if ret != nvml.SUCCESS {
		return fmt.Errorf("driver version: %s", nvml.ErrorString(ret))
	}
	data := [][]string{}
	for i := 0; i < count; i++ {
		device, ret := nvml.DeviceGetHandleByIndex(i)
		if ret != nvml.SUCCESS {
			return fmt.Errorf("device handle: %s", nvml.ErrorString(ret))
		}
		gpu := common.GPU{Idx: i, DriverVersion: driver}
		gpu.UUID, ret = device.GetUUID()
		if ret != nvml.SUCCESS {
			return fmt.Errorf("device UUID: %s", nvml.ErrorString(ret))
		}
		gpu.Name, ret = device.GetName()
		if ret != nvml.SUCCESS {
			return fmt.Errorf("device name: %s", nvml.ErrorString(ret))
		}
		info, ret := device.GetMemoryInfo_v2()
		if ret != nvml.SUCCESS {
			return fmt.Errorf("device memory: %s", nvml.ErrorString(ret))
		}
		gpu.TotalMem, gpu.UsedMem = info.Total, info.Used
		pci, ret := device.GetPciInfo()
		if ret != nvml.SUCCESS {
			return fmt.Errorf("device PCI: %s", nvml.ErrorString(ret))
		}
		var bus strings.Builder
		for _, b := range pci.BusId {
			if b == 0 {
				break
			}
			bus.WriteByte(byte(b))
		}
		gpu.BusID = bus.String()
		util, ret := device.GetUtilizationRates()
		if ret != nvml.SUCCESS {
			return fmt.Errorf("device utilization: %s", nvml.ErrorString(ret))
		}
		gpu.Util = util.Gpu
		row := []string{}
		for _, field := range ops.Query {
			value, _ := gpuValue(gpu, field, nounits)
			row = append(row, value)
		}
		data = append(data, row)
	}
	return rows(os.Stdout, ops.Query, data, noheader)
}

func processValue(process common.Process, uuid, field string, nounits bool) (string, error) {
	switch field {
	case "pid":
		return fmt.Sprint(process.PID), nil
	case "gpu_uuid":
		return uuid, nil
	case "used_memory", "used_gpu_memory":
		return memory(process.UsedMem, nounits), nil
	default:
		return "", fmt.Errorf("unsupported compute query field %q", field)
	}
}

func Compute(ops common.Opstion) error {
	noheader, nounits, err := formats(ops.Format)
	if err != nil {
		return err
	}
	for _, field := range ops.ComputeQuery {
		if _, err := processValue(common.Process{}, "", field, nounits); err != nil {
			return err
		}
	}
	count, err := initNVML()
	if err != nil {
		return err
	}
	defer nvml.Shutdown()
	data := [][]string{}
	for i := 0; i < count; i++ {
		device, ret := nvml.DeviceGetHandleByIndex(i)
		if ret != nvml.SUCCESS {
			return fmt.Errorf("device handle: %s", nvml.ErrorString(ret))
		}
		uuid, ret := device.GetUUID()
		if ret != nvml.SUCCESS {
			return fmt.Errorf("device UUID: %s", nvml.ErrorString(ret))
		}
		processes, ret := device.GetComputeRunningProcesses()
		if ret != nvml.SUCCESS {
			return fmt.Errorf("compute processes: %s", nvml.ErrorString(ret))
		}
		for _, process := range processes {
			row := []string{}
			for _, field := range ops.ComputeQuery {
				value, _ := processValue(common.Process{PID: process.Pid, UsedMem: process.UsedGpuMemory}, uuid, field, nounits)
				row = append(row, value)
			}
			data = append(data, row)
		}
	}
	return rows(os.Stdout, ops.ComputeQuery, data, noheader)
}
