package main

import (
	"fmt"
	"os"

	"github.com/chaunceyjiang/fake-gpu/pkg/nvidia"
)

func main() {
	if err := nvidia.RootCmd.Execute(); err != nil {
		fmt.Println("Error:", err)
		os.Exit(1)
	}

}
