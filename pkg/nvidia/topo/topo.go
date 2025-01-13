package topo

import (
	"fmt"
	"log"

	"github.com/NVIDIA/go-nvml/pkg/nvml"
	"github.com/spf13/cobra"
)

/*
root@sh-2-h100:/# nvidia-smi topo -m
        GPU0    GPU1    GPU2    GPU3    GPU4    GPU5    NIC0    NIC1    CPU Affinity    NUMA Affinity   GPU NUMA ID
GPU0     X      NV18    NV18    NV18    NV18    NV18    NODE    NODE    0-47,96-143     0               N/A
GPU1    NV18     X      NV18    NV18    NV18    NV18    NODE    NODE    0-47,96-143     0               N/A
GPU2    NV18    NV18     X      NV18    NV18    NV18    NODE    NODE    0-47,96-143     0               N/A
GPU3    NV18    NV18    NV18     X      NV18    NV18    SYS     SYS     48-95,144-191   1               N/A
GPU4    NV18    NV18    NV18    NV18     X      NV18    SYS     SYS     48-95,144-191   1               N/A
GPU5    NV18    NV18    NV18    NV18    NV18     X      SYS     SYS     48-95,144-191   1               N/A
NIC0    NODE    NODE    NODE    SYS     SYS     SYS      X      PIX
NIC1    NODE    NODE    NODE    SYS     SYS     SYS     PIX      X

Legend:

  X    = Self
  SYS  = Connection traversing PCIe as well as the SMP interconnect between NUMA nodes (e.g., QPI/UPI)
  NODE = Connection traversing PCIe as well as the interconnect between PCIe Host Bridges within a NUMA node
  PHB  = Connection traversing PCIe as well as a PCIe Host Bridge (typically the CPU)
  PXB  = Connection traversing multiple PCIe bridges (without traversing the PCIe Host Bridge)
  PIX  = Connection traversing at most a single PCIe bridge
  NV#  = Connection traversing a bonded set of # NVLinks

NIC Legend:

  NIC0: mlx5_0
  NIC1: mlx5_1
*/

func run() {
	nvml.Init()
	defer nvml.Shutdown()
	count, ret := nvml.DeviceGetCount()
	if ret != nvml.SUCCESS {
		log.Fatalf("Unable to get device count: %v", nvml.ErrorString(ret))
		return
	}
	count = 8
	topo := make([][]string, count)
	for i := 0; i < count; i++ {
		topo[i] = make([]string, count)
	}
	for i := 0; i < count; i++ {
		for j := 0; j < count; j++ {
			if i == j {
				topo[i][j] = "X"
			} else {
				topo[i][j] = "NV18"
			}
		}
	}
	for i := 0; i < count; i++ {
		fmt.Printf("\t\033[4mGPU%d\033[0m", i)
	}
	for _, v := range []string{"CPU Affinity", "NUMA Affinity", "GPU NUMA ID"} {
		fmt.Printf("\t\033[4m%s\033[0m", v)
	}
	fmt.Printf("\n")
	for i := 0; i < count; i++ {
		for j := 0; j < count; j++ {
			if j == 0 {
				fmt.Printf("GPU%d\t%s", i, topo[i][j])
			} else {
				fmt.Printf("\t%s", topo[i][j])
			}
		}
		fmt.Printf("\n")
	}
	fmt.Printf("\n")
	fmt.Printf("Legend:\n")
	fmt.Printf("\n")
	fmt.Printf("  X    = Self\n")
	fmt.Printf("  SYS  = Connection traversing PCIe as well as the SMP interconnect between NUMA nodes (e.g., QPI/UPI)\n")
	fmt.Printf("  NODE = Connection traversing PCIe as well as the interconnect between PCIe Host Bridges within a NUMA node\n")
	fmt.Printf("  PHB  = Connection traversing PCIe as well as a PCIe Host Bridge (typically the CPU)\n")
	fmt.Printf("  PXB  = Connection traversing multiple PCIe bridges (without traversing the PCIe Host Bridge)\n")
	fmt.Printf("  PIX  = Connection traversing at most a single PCIe bridge\n")
	fmt.Printf("  NV#  = Connection traversing a bonded set of # NVLinks\n")
	fmt.Printf("\n")
}

var TopoCmd = &cobra.Command{
	Use:   "topo",
	Short: "Show GPU topology",
	Long:  `Show GPU topology`,
	Run: func(cmd *cobra.Command, args []string) {
		run()
	},
}

func init() {
	TopoCmd.Flags().BoolP("matrix", "m", false, "Display the GPUDirect communication matrix for the system.")
}
