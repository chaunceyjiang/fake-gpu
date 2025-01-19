package nvidia

import (
	"fmt"
	"log"
	"os"
	"strconv"
	"strings"

	"github.com/NVIDIA/go-nvml/pkg/nvml"
	"github.com/jedib0t/go-pretty/v6/table"
	"github.com/spf13/cobra"

	"github.com/chaunceyjiang/fake-gpu/pkg/nvidia/common"
	"github.com/chaunceyjiang/fake-gpu/pkg/nvidia/topo"
)

func init() {
	RootCmd.AddCommand(topo.TopoCmd)
}

func busIdToString(busId [32]int8) string {
	// 将 int8 数组转换为 byte 数组
	byteArray := make([]byte, len(busId))
	for i, v := range busId {
		byteArray[i] = byte(v)
	}
	// 将 byte 数组转换为字符串，并去除空字符
	return strings.Trim(string(byteArray), "\x00")
}

func sizeString(str string, size int, alignRight bool) string {
	if len(str) < size {
		if alignRight {
			str = strings.Repeat(" ", size-len(str)) + str
		} else {
			str = str + strings.Repeat(" ", size-len(str))
		}
	}

	if len(str) > size {
		str = str[:size-2] + ".."
	}

	return str[:size]
}
func run() error {
	/*
			Sun Jan 12 08:42:33 2025
		+---------------------------------------------------------------------------------------+
		| NVIDIA-SMI 535.183.01             Driver Version: 535.183.01   CUDA Version: N/A      |
		|-----------------------------------------+----------------------+----------------------+
		| GPU  Name                 Persistence-M | Bus-Id        Disp.A | Volatile Uncorr. ECC |
		| Fan  Temp   Perf          Pwr:Usage/Cap |         Memory-Usage | GPU-Util  Compute M. |
		|                                         |                      |               MIG M. |
		|=========================================+======================+======================|
		|   0  NVIDIA H100 80GB HBM3          On  | 00000000:18:00.0 Off |                    0 |
		| N/A   28C    P0              75W / 700W |      0MiB / 81559MiB |      0%      Default |
		|                                         |                      |             Disabled |
		+-----------------------------------------+----------------------+----------------------+
		|   1  NVIDIA H100 80GB HBM3          On  | 00000000:2A:00.0 Off |                    0 |
		| N/A   29C    P0              71W / 700W |      0MiB / 81559MiB |      0%      Default |
		|                                         |                      |             Disabled |
		+-----------------------------------------+----------------------+----------------------+
		|   2  NVIDIA H100 80GB HBM3          On  | 00000000:3A:00.0 Off |                    0 |
		| N/A   32C    P0             117W / 700W |   7418MiB / 81559MiB |      0%      Default |
		|                                         |                      |             Disabled |
		+-----------------------------------------+----------------------+----------------------+
		|   3  NVIDIA H100 80GB HBM3          On  | 00000000:AB:00.0 Off |                    0 |
		| N/A   28C    P0             112W / 700W |  33333MiB / 81559MiB |      0%      Default |
		|                                         |                      |             Disabled |
		+-----------------------------------------+----------------------+----------------------+
		|   4  NVIDIA H100 80GB HBM3          On  | 00000000:BA:00.0 Off |                    0 |
		| N/A   31C    P0             116W / 700W |  79595MiB / 81559MiB |      0%      Default |
		|                                         |                      |             Disabled |
		+-----------------------------------------+----------------------+----------------------+
		|   5  NVIDIA H100 80GB HBM3          On  | 00000000:DB:00.0 Off |                    0 |
		| N/A   29C    P0             119W / 700W |  41489MiB / 81559MiB |      0%      Default |
		|                                         |                      |             Disabled |
		+-----------------------------------------+----------------------+----------------------+

		+---------------------------------------------------------------------------------------+
		| Processes:                                                                            |
		|  GPU   GI   CI        PID   Type   Process name                            GPU Memory |
		|        ID   ID                                                             Usage      |
		|=======================================================================================|
		|    2   N/A  N/A   3102733      C   /app/.venv/bin/python                      3694MiB |
		|    2   N/A  N/A   3358268      C   /app/.venv/bin/python                      3692MiB |
		|    3   N/A  N/A   3557379      C   /usr/bin/python3                          33316MiB |
		|    4   N/A  N/A   3474124      C   /usr/bin/python3                          79578MiB |
		|    5   N/A  N/A   1468655      C   /usr/bin/python3                          41472MiB |
	*/
	nvml.Init()
	defer nvml.Shutdown()
	count, ret := nvml.DeviceGetCount()
	if ret != nvml.SUCCESS {
		log.Fatalf("Unable to get device count: %v", nvml.ErrorString(ret))
	}
	driverVersion, ret := nvml.SystemGetDriverVersion()
	if ret != nvml.SUCCESS {
		log.Fatalf("Unable to get driver version: %v", nvml.ErrorString(ret))
	}
	cudaDriverVersion, ret := nvml.SystemGetCudaDriverVersion()
	if ret != nvml.SUCCESS {
		log.Fatalf("Unable to get cuda driver version: %v", nvml.ErrorString(ret))
	}
	// convert dricudaDriverVersionver version to string
	cudaVersion := fmt.Sprintf("%d.%d", cudaDriverVersion/1000, (cudaDriverVersion%1000)/10)
	var gpus []common.GPU
	var process []common.Process
	for i := 0; i < count; i++ {
		gpu := common.GPU{}
		device, ret := nvml.DeviceGetHandleByIndex(i)
		if ret != nvml.SUCCESS {
			log.Fatalf("Unable to get device at index %d: %v", i, nvml.ErrorString(ret))
		}

		uuid, ret := device.GetUUID()
		if ret != nvml.SUCCESS {
			log.Fatalf("Unable to get uuid of device at index %d: %v", i, nvml.ErrorString(ret))
		}
		gpu.UUID = uuid
		minor, ret := device.GetMinorNumber()
		if ret != nvml.SUCCESS {
			log.Fatalf("Unable to get minor number of device at index %d: %v", i, nvml.ErrorString(ret))
		}
		gpu.Idx = minor
		name, ret := device.GetName()
		if ret != nvml.SUCCESS {
			log.Fatalf("Unable to get name of device at index %d: %v", i, nvml.ErrorString(ret))
		}
		gpu.Name = name
		// get pci bus id
		pciInfo, ret := device.GetPciInfo()
		if ret != nvml.SUCCESS {
			log.Fatalf("Unable to get pci info of device at index %d: %v", i, nvml.ErrorString(ret))
		}
		gpu.BusID = busIdToString(pciInfo.BusId)
		mem, ret := device.GetMemoryInfo_v2()
		if ret != nvml.SUCCESS {
			log.Fatalf("Unable to get memory info of device at index %d: %v", i, nvml.ErrorString(ret))
		}
		gpu.TotalMem = mem.Total
		gpu.UsedMem = mem.Used
		gpus = append(gpus, gpu)
		processInfo, ret := device.GetComputeRunningProcesses()
		if ret != nvml.SUCCESS {
			log.Fatalf("Unable to get process info of device at index %d: %v", i, nvml.ErrorString(ret))
		}
		for _, p := range processInfo {
			process = append(process, common.Process{
				PID:     p.Pid,
				UsedMem: p.UsedGpuMemory,
			})
		}
	}
	for i, p := range process {
		processName, err := os.ReadFile(fmt.Sprintf("/proc/%d/cmdline", p.PID))
		if err != nil {
			log.Fatalf("Unable to get process name of pid %d: %v", p.PID, err)
		}
		process[i].Name = string(processName)
	}
	t := table.NewWriter()
	t.SetOutputMirror(os.Stdout)
	t.SetTitle(fmt.Sprintf("NVIDIA-SMI 470.129.06           Driver Version: %s          CUDA Version: %s", driverVersion, cudaVersion))
	t.AppendSeparator()
	t.AppendRow(table.Row{"GPU  Nam                 Persistence-M", "Bus-Id        Disp.A", "Volatile Uncorr. ECC"})
	t.AppendRow(table.Row{"Fan  Temp  Perf          Pwr:Usage/Cap", "        Memory-Usage", "GPU-Util  Compute M."})
	t.AppendRow(table.Row{"", "", "              MIG M."})
	t.AppendSeparator()
	for _, gpu := range gpus {
		t.AppendRow(table.Row{fmt.Sprintf("%s  %s%s", sizeString(strconv.Itoa(gpu.Idx), 3, true), sizeString(gpu.Name, 22, false), sizeString("Off", 13, true)), fmt.Sprintf("%s %s", sizeString(gpu.BusID, 16, false), sizeString("Off", 3, true)), sizeString("Off", 20, true)})
		t.AppendRow(table.Row{"N/A   33C    P8               11W /  70W", sizeString(fmt.Sprintf("%dMiB / %dMiB", int(gpu.UsedMem/1024/1024), gpu.TotalMem/1024/1024), 20, true), fmt.Sprintf("%s %s", sizeString(strconv.Itoa(gpu.Util)+"%", 8, true), sizeString("Default", 11, true))})
	}
	t.AppendRow(table.Row{"", "", sizeString("N/A", 20, true)})
	t.AppendSeparator()
	t.Render()

	fmt.Printf("\n")

	t = table.NewWriter()
	t.SetOutputMirror(os.Stdout)
	t.AppendRow(table.Row{"Processes:"})
	t.AppendRow(table.Row{" GPU   GI   CI        PID   Type   Process name                             GPU Memory"})
	t.AppendRow(table.Row{"       ID   ID                                                              Usage     "})
	t.AppendSeparator()
	for index, p := range process {
		t.AppendRow(table.Row{fmt.Sprintf(" %s   %s%s%s%s   %s %s", sizeString(strconv.Itoa(index), 3, true), sizeString("N/A", 5, false), sizeString("N/A", 10, false), sizeString(strconv.Itoa(int(p.PID)), 6, false), sizeString("G", 4, true), sizeString(p.Name, 28, false), sizeString(fmt.Sprintf("%dMiB", int(p.UsedMem/1024/1024)), 22, true))})
	}
	t.Render()
	return nil
}

// RootCmd represents the base command when called without any subcommands
var RootCmd = &cobra.Command{
	Use:   "nvidia-smi",
	Short: "nvidia-smi is a command-line utility that provides monitoring and management capabilities for NVIDIA GPUs.",
	Long:  `nvidia-smi is a command-line utility that provides monitoring and management capabilities for NVIDIA GPUs.`,
	Run: func(cmd *cobra.Command, args []string) {
		err := run()
		if err != nil {
			fmt.Println("Error:", err)
			os.Exit(1)
		}
	},
}
