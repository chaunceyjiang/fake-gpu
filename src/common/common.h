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
    std::vector<std::string> peer_gpus;  // Peer GPU UUID
    friend void operator>>(const YAML::Node &node, NVLink &nvlink) {
        nvlink.version = node["version"].as<std::string>();
        nvlink.capacity = node["capacity"].as<int>();
        nvlink.bandwidth = node["bandwidth"].as<int>();
        // if peer_gpu is not empty, strore all peer GPU UUIDs to peer_gpus
        if (node["peer_gpu"]) {
            for (const auto &peer_gpu_node : node["peer_gpu"]) {
                nvlink.peer_gpus.push_back(peer_gpu_node.as<std::string>());
            }
        }
    }
};
struct MIG {
    bool enabled;

    friend void operator>>(const YAML::Node &node, MIG &mig) {
        mig.enabled = node["enabled"].as<bool>();
    }
};

struct Event {
    int type;
    int data;
    friend void operator>>(const YAML::Node &node, Event &event) {
        event.type = node["eventType"].as<int>();
        event.data = node["eventData"].as<int>();
    }
};

using EventList = std::vector<Event>;

struct RAM {
    unsigned long long total;
    unsigned long long free;
    unsigned long long used;

    friend void operator>>(const YAML::Node &node, RAM &ram) {
        ram.total = node["total"].as<unsigned long long>();
        ram.free = node["free"].as<unsigned long long>();
        ram.used = node["used"].as<unsigned long long>();
    }
};
// GPU struct
struct GPU {
    std::string name;
    int index;
    std::string uuid;
    std::string driver_version;
    std::string brand;
    int cuda_version;
    int cuda_cores;
    RAM memory;
    PCI pci;
    NVLink nvlink;
    MIG mig;
    EventList events;
    friend void operator>>(const YAML::Node &node, GPU &gpu) {
        gpu.name = node["name"].as<std::string>();
        gpu.uuid = node["uuid"].as<std::string>();
        gpu.driver_version = node["driver_version"].as<std::string>();
        gpu.brand = node["brand"].as<std::string>();
        gpu.cuda_version = node["cuda_version"].as<int>();
        gpu.cuda_cores = node["cuda_cores"].as<int>();
        node["pci"] >> gpu.pci;
        node["nvlink"] >> gpu.nvlink;
        node["mig"] >> gpu.mig;
        node["memory"] >> gpu.memory;
        // if events is not empty, strore all events to events
        if (node["events"]) {
            for (const auto &event_node : node["events"]) {
                Event event;
                event_node >> event;
                gpu.events.push_back(event);
            }
        }
    }
};

// strore all GPUs
using GPUList = std::vector<GPU>;

struct EventSet {
    // define the event set
    // key is GPU UUID, value is a list of events
    std::map<std::string, EventList> events;
    // key is GPU UUID, value is the index of the next event
    std::map<std::string, int> next_event;
    // key is GPU UUID, value is the GPU object
    std::map<std::string, GPU *> device_map;
};