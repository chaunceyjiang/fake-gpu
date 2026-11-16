package query

import (
	"bytes"
	"encoding/csv"
	"github.com/chaunceyjiang/fake-gpu/pkg/nvidia/common"
	"strings"
	"testing"
)

func TestInventoryColumns(t *testing.T) {
	gpu := common.GPU{UUID: "GPU-fixture", Idx: 2, Name: "Fake T4", TotalMem: 16 * 1024 * 1024 * 1024, UsedMem: 256 * 1024 * 1024, Util: 23, BusID: "0000:01:00.0", DriverVersion: "540.33.01"}
	fields := []string{"uuid", "index", "name", "memory.total", "memory.used", "utilization.gpu", "pci.bus_id", "driver_version"}
	want := []string{"GPU-fixture", "2", "Fake T4", "16384", "256", "23", "0000:01:00.0", "540.33.01"}
	for i, field := range fields {
		got, err := gpuValue(gpu, field, true)
		if err != nil || got != want[i] {
			t.Fatalf("%s: %q %v, want %q", field, got, err, want[i])
		}
	}
}
func TestQueryFormats(t *testing.T) {
	for _, options := range [][]string{nil, {"noheader"}, {"csv", "json"}} {
		if _, _, err := formats(options); err == nil {
			t.Fatalf("accepted %v", options)
		}
	}
	noheader, nounits, err := formats([]string{"csv", "noheader", "nounits"})
	if err != nil || !noheader || !nounits {
		t.Fatal(noheader, nounits, err)
	}
}
func TestUnitsAndInvalidFields(t *testing.T) {
	gpu := common.GPU{TotalMem: 1024 * 1024, Util: 12}
	for field, want := range map[string]string{"memory.total": "1 MiB", "utilization.gpu": "12 %", "memory.free": "1 MiB"} {
		got, err := gpuValue(gpu, field, false)
		if err != nil || got != want {
			t.Fatal(field, got, err)
		}
	}
	if _, err := gpuValue(gpu, "not.a.field", true); err == nil {
		t.Fatal("accepted unknown GPU field")
	}
	if _, err := processValue(common.Process{}, "", "unknown", true); err == nil {
		t.Fatal("accepted unknown process field")
	}
}
func TestProcessFields(t *testing.T) {
	p := common.Process{PID: 123, UsedMem: 64 * 1024 * 1024}
	for field, want := range map[string]string{"pid": "123", "gpu_uuid": "GPU-fixture", "used_gpu_memory": "64", "used_memory": "64"} {
		got, err := processValue(p, "GPU-fixture", field, true)
		if err != nil || got != want {
			t.Fatal(field, got, err)
		}
	}
}
func TestCSVAndEmptyProcesses(t *testing.T) {
	var out bytes.Buffer
	if err := rows(&out, []string{"name"}, [][]string{{"GPU, model"}}, false); err != nil {
		t.Fatal(err)
	}
	values, err := csv.NewReader(strings.NewReader(out.String())).ReadAll()
	if err != nil || len(values) != 2 || values[1][0] != "GPU, model" {
		t.Fatal(values, err)
	}
	out.Reset()
	if err := rows(&out, []string{"pid", "gpu_uuid"}, nil, true); err != nil || out.Len() != 0 {
		t.Fatal(out.String(), err)
	}
}
