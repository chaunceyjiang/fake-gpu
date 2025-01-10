#include <yaml-cpp/yaml.h>

#include <iostream>
#include <string>
#include <vector>

// PCI struct
struct PCI {
    std::string bus_id;
    int device_id;
    int domain_id;
    int sub_system_id;
    friend void operator>>(const YAML::Node &node, PCI &pci) {
        pci.bus_id = node["bus_id"].as<std::string>();
        pci.device_id = node["device_id"].as<int>();
        pci.domain_id = node["domain_id"].as<int>();
        pci.sub_system_id = node["sub_system_id"].as<int>();
    }
};

// NVLink struct
struct NVLink {
    std::string version;
    int capacity;
    int bandwidth;
    std::string peer_gpu;  // Peer GPU UUID
    friend void operator>>(const YAML::Node &node, NVLink &nvlink) {
        nvlink.version = node["version"].as<std::string>();
        nvlink.capacity = node["capacity"].as<int>();
        nvlink.bandwidth = node["bandwidth"].as<int>();
        nvlink.peer_gpu = node["peer_gpu"].as<std::string>();
    }
};

// GPU struct
struct GPU {
    std::string name;
    int index;
    std::string uuid;
    std::string driver_version;
    int ram;  // RAM size
    std::string ram_unit;
    std::string brand;
    int cuda_version;
    int cuda_cores;
    PCI pci;
    NVLink nvlink;
    friend void operator>>(const YAML::Node &node, GPU &gpu) {
        gpu.name = node["name"].as<std::string>();
        gpu.uuid = node["uuid"].as<std::string>();
        gpu.driver_version = node["driver_version"].as<std::string>();
        gpu.ram = node["ram"].as<int>();
        gpu.ram_unit = node["ram_unit"].as<std::string>();
        gpu.brand = node["brand"].as<std::string>();
        gpu.cuda_version = node["cuda_version"].as<int>();
        gpu.cuda_cores = node["cuda_cores"].as<int>();
        node["pci"] >> gpu.pci;
        node["nvlink"] >> gpu.nvlink;
    }
};

// strore all GPUs
using GPUList = std::vector<GPU>;
