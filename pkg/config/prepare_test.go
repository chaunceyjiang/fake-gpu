package config

import (
	"bytes"
	"regexp"
	"sigs.k8s.io/yaml"
	"testing"
)

func TestNodeScopedUUIDs(t *testing.T) {
	input := []byte("nvidia:\n- uuid: GPU-0\n  memory: {total: 16160000000}\n- uuid: GPU-1\n")
	a, err := Prepare(input, "node-a")
	if err != nil {
		t.Fatal(err)
	}
	same, _ := Prepare(input, "node-a")
	other, _ := Prepare(input, "node-b")
	if !bytes.Equal(a, same) || bytes.Equal(a, other) {
		t.Fatal("device identity is not stable and node scoped")
	}
	var cfg struct {
		Nvidia []struct {
			UUID   string
			Memory map[string]uint64
		}
	}
	if err := yaml.Unmarshal(a, &cfg); err != nil {
		t.Fatal(err)
	}
	pattern := regexp.MustCompile(`^GPU-[a-f0-9]{8}-[a-f0-9]{4}-5[a-f0-9]{3}-[89ab][a-f0-9]{3}-[a-f0-9]{12}$`)
	if len(cfg.Nvidia) != 2 || !pattern.MatchString(cfg.Nvidia[0].UUID) || cfg.Nvidia[0].UUID == cfg.Nvidia[1].UUID || cfg.Nvidia[0].Memory["total"] != 16160000000 {
		t.Fatalf("bad prepared configuration: %s", a)
	}
}
func TestInvalidConfig(t *testing.T) {
	for _, input := range []string{"{}", "nvidia: []", "nvidia: [x]", "[invalid"} {
		if _, err := Prepare([]byte(input), "node"); err == nil {
			t.Fatal("accepted", input)
		}
	}
	if _, err := Prepare([]byte("nvidia: [{uuid: GPU-0}]"), ""); err == nil {
		t.Fatal("accepted empty node")
	}
}
