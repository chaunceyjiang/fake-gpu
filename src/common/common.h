#include <yaml-cpp/yaml.h>

#include <iostream>
#include <string>
#include <vector>

// PCI struct
struct PCI {
    std::string bus_id;
    int bus;
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

struct NUMA {
    int node;
    std::string cpu_affinity;

    friend void operator>>(const YAML::Node &node, NUMA &numa) {
        numa.node = node["node"].as<int>();
        numa.cpu_affinity = node["cpu_affinity"].as<std::string>();
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
    }
};

struct GPU_Util {
    unsigned int gpu;
    unsigned int memory;

    friend void operator>>(const YAML::Node &node, GPU_Util &util) {
        util.gpu = node["gpu"].as<unsigned int>();
        util.memory = node["memory"].as<unsigned int>();
    }
};

struct GPU_Power {
    unsigned int usage;
    unsigned int default_limit;
    unsigned int min_limit;
    unsigned int max_limit;
    unsigned int enforced_limit;

    friend void operator>>(const YAML::Node &node, GPU_Power &power) {
        power.usage = node["usage"].as<unsigned int>();
        power.default_limit = node["defaultLimit"].as<unsigned int>();
        power.min_limit = node["minLimit"].as<unsigned int>();
        power.max_limit = node["maxLimit"].as<unsigned int>();
        power.enforced_limit = node["enforcedLimit"].as<unsigned int>();
    }
};

typedef enum DCGM_FieldType {
    DOUBLE = 0,
    UNSIGNED_INT = 1,
    UNSIGNED_LONG = 2,
    UNSIGNED_LONG_LONG = 3,
    SIGNED_LONG_LONG = 4,
} DCGM_FieldType_t;

union DCGM_FieldValue {
    double dVal;                //!< If the value is double
    unsigned int uiVal;         //!< If the value is unsigned int
    unsigned long ulVal;        //!< If the value is unsigned long
    unsigned long long ullVal;  //!< If the value is unsigned long long
    signed long long sllVal;    //!< If the value is signed long long
};

struct DCGM_Field {
    unsigned int fieldId;
    std::string fieldName;
    DCGM_FieldType_t fieldType;
    DCGM_FieldValue value;

    friend void operator>>(const YAML::Node &node, DCGM_Field &field) {
        field.fieldId = node["fieldId"].as<unsigned int>();
        field.fieldName = node["fieldName"].as<std::string>();
        if (node["fieldType"].as<std::string>() == "double") {
            field.value.dVal = node["fieldValue"].as<double>();
            field.fieldType = DOUBLE;
        } else if (node["fieldType"].as<std::string>() == "unsigned int") {
            field.value.uiVal = node["fieldValue"].as<unsigned int>();
            field.fieldType = UNSIGNED_INT;
        } else if (node["fieldType"].as<std::string>() == "unsigned long") {
            field.value.ulVal = node["fieldValue"].as<unsigned long>();
            field.fieldType = UNSIGNED_LONG;
        } else if (node["fieldType"].as<std::string>() == "unsigned long long") {
            field.value.ullVal = node["fieldValue"].as<unsigned long long>();
            field.fieldType = UNSIGNED_LONG_LONG;
        } else if (node["fieldType"].as<std::string>() == "signed long long") {
            field.value.sllVal = node["fieldValue"].as<signed long long>();
            field.fieldType = SIGNED_LONG_LONG;
        }
    }
};
using DCGMFieldList = std::vector<DCGM_Field>;
struct DCGM {
    DCGMFieldList fields;

    friend void operator>>(const YAML::Node &node, DCGM &dcgm) {
        for (const auto &field_node : node["fields"]) {
            DCGM_Field field;
            field_node >> field;
            dcgm.fields.push_back(field);
        }
    }
};

// GPU struct
struct GPU {
    std::string name;
    int index;
    std::string uuid;
    std::string driver_version;
    std::string brand;
    unsigned int arch;
    int cuda_version;
    int cuda_cores;
    std::string vbios_version;
    std::string image_version;
    std::string serial;
    RAM memory;
    PCI pci;
    NUMA numa;
    GPU_Power power;
    GPU_Util utilization;
    NVLink nvlink;
    MIG mig;
    EventList events;
    DCGM dcgm;
    friend void operator>>(const YAML::Node &node, GPU &gpu) {
        gpu.name = node["name"].as<std::string>();
        gpu.uuid = node["uuid"].as<std::string>();
        gpu.driver_version = node["driver_version"].as<std::string>();
        gpu.brand = node["brand"].as<std::string>();
        gpu.arch = node["architecture"].as<unsigned int>();
        gpu.cuda_version = node["cuda_version"].as<int>();
        gpu.cuda_cores = node["cuda_cores"].as<int>();
        gpu.vbios_version = node["vbios_version"].as<std::string>();
        gpu.image_version = node["image_version"].as<std::string>();
        gpu.serial = node["serial"].as<std::string>();
        node["pci"] >> gpu.pci;
        node["power"] >> gpu.power;
        node["utilization"] >> gpu.utilization;
        node["nvlink"] >> gpu.nvlink;
        node["mig"] >> gpu.mig;
        node["numa"] >> gpu.numa;
        node["memory"] >> gpu.memory;
        // if events is not empty, strore all events to events
        if (node["events"]) {
            for (const auto &event_node : node["events"]) {
                Event event;
                event_node >> event;
                gpu.events.push_back(event);
            }
        }
        node["dcgm"] >> gpu.dcgm;
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