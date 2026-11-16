package config

import (
	"crypto/sha1"
	"fmt"
	"sigs.k8s.io/yaml"
)

// Prepare gives each synthetic device a stable, node-scoped RFC 4122 UUID.
// The original config stays unchanged; host and Pod observers use this output.
func Prepare(input []byte, node string) ([]byte, error) {
	if node == "" {
		return nil, fmt.Errorf("node name is required")
	}
	var config map[string]interface{}
	if err := yaml.Unmarshal(input, &config); err != nil {
		return nil, err
	}
	devices, ok := config["nvidia"].([]interface{})
	if !ok || len(devices) == 0 {
		return nil, fmt.Errorf("configuration must contain NVIDIA devices")
	}
	// RFC 4122 namespace DNS, followed by our node/device name.
	namespace := []byte{0x6b, 0xa7, 0xb8, 0x10, 0x9d, 0xad, 0x11, 0xd1, 0x80, 0xb4, 0x00, 0xc0, 0x4f, 0xd4, 0x30, 0xc8}
	for index, raw := range devices {
		device, ok := raw.(map[string]interface{})
		if !ok {
			return nil, fmt.Errorf("invalid device %d", index)
		}
		hash := sha1.New()
		hash.Write(namespace)
		fmt.Fprintf(hash, "fake-gpu/%s/%v/%d", node, device["uuid"], index)
		uuid := hash.Sum(nil)[:16]
		uuid[6] = (uuid[6] & 0x0f) | 0x50
		uuid[8] = (uuid[8] & 0x3f) | 0x80
		device["uuid"] = fmt.Sprintf("GPU-%x-%x-%x-%x-%x", uuid[:4], uuid[4:6], uuid[6:8], uuid[8:10], uuid[10:])
	}
	return yaml.Marshal(config)
}
