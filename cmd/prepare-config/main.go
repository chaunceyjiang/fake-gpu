package main

import (
	"fmt"
	"github.com/chaunceyjiang/fake-gpu/pkg/config"
	"os"
	"path/filepath"
)

func main() {
	if err := run(); err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}
}
func run() error {
	if len(os.Args) != 4 {
		return fmt.Errorf("usage: prepare-config INPUT OUTPUT NODE")
	}
	input, err := os.ReadFile(os.Args[1])
	if err != nil {
		return err
	}
	data, err := config.Prepare(input, os.Args[3])
	if err != nil {
		return err
	}
	f, err := os.CreateTemp(filepath.Dir(os.Args[2]), ".fake-gpu-config-*")
	if err != nil {
		return err
	}
	defer os.Remove(f.Name())
	if _, err = f.Write(data); err != nil {
		f.Close()
		return err
	}
	if err = f.Chmod(0644); err != nil {
		f.Close()
		return err
	}
	if err = f.Close(); err != nil {
		return err
	}
	return os.Rename(f.Name(), os.Args[2])
}
