#include "hook.h"
#include "macro_common.h"
#include "nvml_subset.h"
#include "trace_profile.h"

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlInit_v2() {
    HOOK_TRACE_PROFILE("nvmlInit_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlInitWithFlags(unsigned int flags) {
    HOOK_TRACE_PROFILE("nvmlInitWithFlags");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlShutdown() {
    HOOK_TRACE_PROFILE("nvmlShutdown");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT const char *nvmlErrorString(nvmlReturn_t result) {
    HOOK_TRACE_PROFILE("nvmlErrorString");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlSystemGetDriverVersion(char *version, unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlSystemGetDriverVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlSystemGetNVMLVersion(char *version, unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlSystemGetNVMLVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlSystemGetCudaDriverVersion(int *cudaDriverVersion) {
    HOOK_TRACE_PROFILE("nvmlSystemGetCudaDriverVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlSystemGetCudaDriverVersion_v2(int *cudaDriverVersion) {
    HOOK_TRACE_PROFILE("nvmlSystemGetCudaDriverVersion_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlSystemGetProcessName(unsigned int pid, char *name, unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlSystemGetProcessName");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlUnitGetCount(unsigned int *unitCount) {
    HOOK_TRACE_PROFILE("nvmlUnitGetCount");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlUnitGetHandleByIndex(unsigned int index, nvmlUnit_t *unit) {
    HOOK_TRACE_PROFILE("nvmlUnitGetHandleByIndex");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlUnitGetUnitInfo(nvmlUnit_t unit, nvmlUnitInfo_t *info) {
    HOOK_TRACE_PROFILE("nvmlUnitGetUnitInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlUnitGetLedState(nvmlUnit_t unit, nvmlLedState_t *state) {
    HOOK_TRACE_PROFILE("nvmlUnitGetLedState");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlUnitGetPsuInfo(nvmlUnit_t unit, nvmlPSUInfo_t *psu) {
    HOOK_TRACE_PROFILE("nvmlUnitGetPsuInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlUnitGetTemperature(nvmlUnit_t unit, unsigned int type,
                                                                unsigned int *temp) {
    HOOK_TRACE_PROFILE("nvmlUnitGetTemperature");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlUnitGetFanSpeedInfo(nvmlUnit_t unit, nvmlUnitFanSpeeds_t *fanSpeeds) {
    HOOK_TRACE_PROFILE("nvmlUnitGetFanSpeedInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlUnitGetDevices(nvmlUnit_t unit, unsigned int *deviceCount,
                                                            nvmlDevice_t *devices) {
    HOOK_TRACE_PROFILE("nvmlUnitGetDevices");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlSystemGetHicVersion(unsigned int *hwbcCount,
                                                                 nvmlHwbcEntry_t *hwbcEntries) {
    HOOK_TRACE_PROFILE("nvmlSystemGetHicVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetCount_v2(unsigned int *deviceCount) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetCount_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetAttributes_v2(nvmlDevice_t device,
                                                                    nvmlDeviceAttributes_t *attributes) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetAttributes_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetHandleByIndex_v2(unsigned int index, nvmlDevice_t *device) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetHandleByIndex_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetHandleBySerial(const char *serial, nvmlDevice_t *device) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetHandleBySerial");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetHandleByUUID(const char *uuid, nvmlDevice_t *device) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetHandleByUUID");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetHandleByPciBusId_v2(const char *pciBusId, nvmlDevice_t *device) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetHandleByPciBusId_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetName(nvmlDevice_t device, char *name, unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetName");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetBrand(nvmlDevice_t device, nvmlBrandType_t *type) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetBrand");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetIndex(nvmlDevice_t device, unsigned int *index) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetIndex");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetSerial(nvmlDevice_t device, char *serial, unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetSerial");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMemoryAffinity(nvmlDevice_t device, unsigned int nodeSetSize,
                                                                     unsigned long *nodeSet,
                                                                     nvmlAffinityScope_t scope) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMemoryAffinity");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetCpuAffinityWithinScope(nvmlDevice_t device,
                                                                             unsigned int cpuSetSize,
                                                                             unsigned long *cpuSet,
                                                                             nvmlAffinityScope_t scope) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetCpuAffinityWithinScope");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetCpuAffinity(nvmlDevice_t device, unsigned int cpuSetSize,
                                                                  unsigned long *cpuSet) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetCpuAffinity");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetCpuAffinity(nvmlDevice_t device) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetCpuAffinity");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceClearCpuAffinity(nvmlDevice_t device) {
    HOOK_TRACE_PROFILE("nvmlDeviceClearCpuAffinity");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetTopologyCommonAncestor(nvmlDevice_t device1, nvmlDevice_t device2,
                                                                             nvmlGpuTopologyLevel_t *pathInfo) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetTopologyCommonAncestor");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetTopologyNearestGpus(nvmlDevice_t device,
                                                                          nvmlGpuTopologyLevel_t level,
                                                                          unsigned int *count,
                                                                          nvmlDevice_t *deviceArray) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetTopologyNearestGpus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlSystemGetTopologyGpuSet(unsigned int cpuNumber, unsigned int *count,
                                                                     nvmlDevice_t *deviceArray) {
    HOOK_TRACE_PROFILE("nvmlSystemGetTopologyGpuSet");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetP2PStatus(nvmlDevice_t device1, nvmlDevice_t device2,
                                                                nvmlGpuP2PCapsIndex_t p2pIndex,
                                                                nvmlGpuP2PStatus_t *p2pStatus) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetP2PStatus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetUUID(nvmlDevice_t device, char *uuid, unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetUUID");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetMdevUUID(nvmlVgpuInstance_t vgpuInstance, char *mdevUuid,
                                                                     unsigned int size) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetMdevUUID");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMinorNumber(nvmlDevice_t device, unsigned int *minorNumber) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMinorNumber");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetBoardPartNumber(nvmlDevice_t device, char *partNumber,
                                                                      unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetBoardPartNumber");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetInforomVersion(nvmlDevice_t device, nvmlInforomObject_t object,
                                                                     char *version, unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetInforomVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetInforomImageVersion(nvmlDevice_t device, char *version,
                                                                          unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetInforomImageVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetInforomConfigurationChecksum(nvmlDevice_t device,
                                                                                   unsigned int *checksum) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetInforomConfigurationChecksum");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceValidateInforom(nvmlDevice_t device) {
    HOOK_TRACE_PROFILE("nvmlDeviceValidateInforom");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetDisplayMode(nvmlDevice_t device, nvmlEnableState_t *display) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetDisplayMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetDisplayActive(nvmlDevice_t device, nvmlEnableState_t *isActive) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetDisplayActive");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPersistenceMode(nvmlDevice_t device, nvmlEnableState_t *mode) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPersistenceMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPciInfo_v3(nvmlDevice_t device, nvmlPciInfo_t *pci) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPciInfo_v3");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMaxPcieLinkGeneration(nvmlDevice_t device,
                                                                            unsigned int *maxLinkGen) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMaxPcieLinkGeneration");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMaxPcieLinkWidth(nvmlDevice_t device,
                                                                       unsigned int *maxLinkWidth) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMaxPcieLinkWidth");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetCurrPcieLinkGeneration(nvmlDevice_t device,
                                                                             unsigned int *currLinkGen) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetCurrPcieLinkGeneration");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetCurrPcieLinkWidth(nvmlDevice_t device,
                                                                        unsigned int *currLinkWidth) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetCurrPcieLinkWidth");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPcieThroughput(nvmlDevice_t device, nvmlPcieUtilCounter_t counter,
                                                                     unsigned int *value) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPcieThroughput");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPcieReplayCounter(nvmlDevice_t device, unsigned int *value) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPcieReplayCounter");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetClockInfo(nvmlDevice_t device, nvmlClockType_t type,
                                                                unsigned int *clock) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetClockInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMaxClockInfo(nvmlDevice_t device, nvmlClockType_t type,
                                                                   unsigned int *clock) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMaxClockInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetApplicationsClock(nvmlDevice_t device, nvmlClockType_t clockType,
                                                                        unsigned int *clockMHz) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetApplicationsClock");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetDefaultApplicationsClock(nvmlDevice_t device,
                                                                               nvmlClockType_t clockType,
                                                                               unsigned int *clockMHz) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetDefaultApplicationsClock");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceResetApplicationsClocks(nvmlDevice_t device) {
    HOOK_TRACE_PROFILE("nvmlDeviceResetApplicationsClocks");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetClock(nvmlDevice_t device, nvmlClockType_t clockType,
                                                            nvmlClockId_t clockId, unsigned int *clockMHz) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetClock");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMaxCustomerBoostClock(nvmlDevice_t device,
                                                                            nvmlClockType_t clockType,
                                                                            unsigned int *clockMHz) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMaxCustomerBoostClock");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetSupportedMemoryClocks(nvmlDevice_t device, unsigned int *count,
                                                                            unsigned int *clocksMHz) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetSupportedMemoryClocks");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetSupportedGraphicsClocks(nvmlDevice_t device,
                                                                              unsigned int memoryClockMHz,
                                                                              unsigned int *count,
                                                                              unsigned int *clocksMHz) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetSupportedGraphicsClocks");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetAutoBoostedClocksEnabled(nvmlDevice_t device,
                                                                               nvmlEnableState_t *isEnabled,
                                                                               nvmlEnableState_t *defaultIsEnabled) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetAutoBoostedClocksEnabled");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetAutoBoostedClocksEnabled(nvmlDevice_t device,
                                                                               nvmlEnableState_t enabled) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetAutoBoostedClocksEnabled");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetDefaultAutoBoostedClocksEnabled(nvmlDevice_t device,
                                                                                      nvmlEnableState_t enabled,
                                                                                      unsigned int flags) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetDefaultAutoBoostedClocksEnabled");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetFanSpeed(nvmlDevice_t device, unsigned int *speed) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetFanSpeed");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetFanSpeed_v2(nvmlDevice_t device, unsigned int fan,
                                                                  unsigned int *speed) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetFanSpeed_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetTemperature(nvmlDevice_t device,
                                                                  nvmlTemperatureSensors_t sensorType,
                                                                  unsigned int *temp) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetTemperature");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetTemperatureThreshold(nvmlDevice_t device,
                                                                           nvmlTemperatureThresholds_t thresholdType,
                                                                           unsigned int *temp) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetTemperatureThreshold");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetTemperatureThreshold(nvmlDevice_t device,
                                                                           nvmlTemperatureThresholds_t thresholdType,
                                                                           int *temp) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetTemperatureThreshold");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPerformanceState(nvmlDevice_t device, nvmlPstates_t *pState) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPerformanceState");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t
    nvmlDeviceGetCurrentClocksThrottleReasons(nvmlDevice_t device, unsigned long long *clocksThrottleReasons) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetCurrentClocksThrottleReasons");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetSupportedClocksThrottleReasons(
    nvmlDevice_t device, unsigned long long *supportedClocksThrottleReasons) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetSupportedClocksThrottleReasons");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPowerState(nvmlDevice_t device, nvmlPstates_t *pState) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPowerState");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPowerManagementMode(nvmlDevice_t device,
                                                                          nvmlEnableState_t *mode) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPowerManagementMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPowerManagementLimit(nvmlDevice_t device, unsigned int *limit) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPowerManagementLimit");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPowerManagementLimitConstraints(nvmlDevice_t device,
                                                                                      unsigned int *minLimit,
                                                                                      unsigned int *maxLimit) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPowerManagementLimitConstraints");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPowerManagementDefaultLimit(nvmlDevice_t device,
                                                                                  unsigned int *defaultLimit) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPowerManagementDefaultLimit");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPowerUsage(nvmlDevice_t device, unsigned int *power) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPowerUsage");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetTotalEnergyConsumption(nvmlDevice_t device,
                                                                             unsigned long long *energy) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetTotalEnergyConsumption");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetEnforcedPowerLimit(nvmlDevice_t device, unsigned int *limit) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetEnforcedPowerLimit");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGpuOperationMode(nvmlDevice_t device,
                                                                       nvmlGpuOperationMode_t *current,
                                                                       nvmlGpuOperationMode_t *pending) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGpuOperationMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMemoryInfo(nvmlDevice_t device, nvmlMemory_t *memory) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMemoryInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetComputeMode(nvmlDevice_t device, nvmlComputeMode_t *mode) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetComputeMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetCudaComputeCapability(nvmlDevice_t device, int *major,
                                                                            int *minor) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetCudaComputeCapability");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetEccMode(nvmlDevice_t device, nvmlEnableState_t *current,
                                                              nvmlEnableState_t *pending) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetEccMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetBoardId(nvmlDevice_t device, unsigned int *boardId) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetBoardId");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMultiGpuBoard(nvmlDevice_t device, unsigned int *multiGpuBool) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMultiGpuBoard");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetTotalEccErrors(nvmlDevice_t device,
                                                                     nvmlMemoryErrorType_t errorType,
                                                                     nvmlEccCounterType_t counterType,
                                                                     unsigned long long *eccCounts) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetTotalEccErrors");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetDetailedEccErrors(nvmlDevice_t device,
                                                                        nvmlMemoryErrorType_t errorType,
                                                                        nvmlEccCounterType_t counterType,
                                                                        nvmlEccErrorCounts_t *eccCounts) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetDetailedEccErrors");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMemoryErrorCounter(nvmlDevice_t device,
                                                                         nvmlMemoryErrorType_t errorType,
                                                                         nvmlEccCounterType_t counterType,
                                                                         nvmlMemoryLocation_t locationType,
                                                                         unsigned long long *count) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMemoryErrorCounter");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetUtilizationRates(nvmlDevice_t device,
                                                                       nvmlUtilization_t *utilization) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetUtilizationRates");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetEncoderUtilization(nvmlDevice_t device, unsigned int *utilization,
                                                                         unsigned int *samplingPeriodUs) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetEncoderUtilization");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetEncoderCapacity(nvmlDevice_t device,
                                                                      nvmlEncoderType_t encoderQueryType,
                                                                      unsigned int *encoderCapacity) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetEncoderCapacity");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetEncoderStats(nvmlDevice_t device, unsigned int *sessionCount,
                                                                   unsigned int *averageFps,
                                                                   unsigned int *averageLatency) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetEncoderStats");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetEncoderSessions(nvmlDevice_t device, unsigned int *sessionCount,
                                                                      nvmlEncoderSessionInfo_t *sessionInfos) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetEncoderSessions");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetDecoderUtilization(nvmlDevice_t device, unsigned int *utilization,
                                                                         unsigned int *samplingPeriodUs) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetDecoderUtilization");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetFBCStats(nvmlDevice_t device, nvmlFBCStats_t *fbcStats) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetFBCStats");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetFBCSessions(nvmlDevice_t device, unsigned int *sessionCount,
                                                                  nvmlFBCSessionInfo_t *sessionInfo) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetFBCSessions");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetDriverModel(nvmlDevice_t device, nvmlDriverModel_t *current,
                                                                  nvmlDriverModel_t *pending) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetDriverModel");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetVbiosVersion(nvmlDevice_t device, char *version,
                                                                   unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetVbiosVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetBridgeChipInfo(nvmlDevice_t device,
                                                                     nvmlBridgeChipHierarchy_t *bridgeHierarchy) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetBridgeChipInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetComputeRunningProcesses_v2(nvmlDevice_t device,
                                                                                 unsigned int *infoCount,
                                                                                 nvmlProcessInfo_t *infos) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetComputeRunningProcesses_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGraphicsRunningProcesses_v2(nvmlDevice_t device,
                                                                                  unsigned int *infoCount,
                                                                                  nvmlProcessInfo_t *infos) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGraphicsRunningProcesses_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMPSComputeRunningProcesses_v2(nvmlDevice_t device,
                                                                                    unsigned int *infoCount,
                                                                                    nvmlProcessInfo_t *infos) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMPSComputeRunningProcesses_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceOnSameBoard(nvmlDevice_t device1, nvmlDevice_t device2,
                                                               int *onSameBoard) {
    HOOK_TRACE_PROFILE("nvmlDeviceOnSameBoard");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetAPIRestriction(nvmlDevice_t device, nvmlRestrictedAPI_t apiType,
                                                                     nvmlEnableState_t *isRestricted) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetAPIRestriction");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetSamples(nvmlDevice_t device, nvmlSamplingType_t type,
                                                              unsigned long long lastSeenTimeStamp,
                                                              nvmlValueType_t *sampleValType, unsigned int *sampleCount,
                                                              nvmlSample_t *samples) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetSamples");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetBAR1MemoryInfo(nvmlDevice_t device,
                                                                     nvmlBAR1Memory_t *bar1Memory) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetBAR1MemoryInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetViolationStatus(nvmlDevice_t device,
                                                                      nvmlPerfPolicyType_t perfPolicyType,
                                                                      nvmlViolationTime_t *violTime) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetViolationStatus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetAccountingMode(nvmlDevice_t device, nvmlEnableState_t *mode) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetAccountingMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetAccountingStats(nvmlDevice_t device, unsigned int pid,
                                                                      nvmlAccountingStats_t *stats) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetAccountingStats");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetAccountingPids(nvmlDevice_t device, unsigned int *count,
                                                                     unsigned int *pids) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetAccountingPids");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetAccountingBufferSize(nvmlDevice_t device,
                                                                           unsigned int *bufferSize) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetAccountingBufferSize");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetRetiredPages(nvmlDevice_t device, nvmlPageRetirementCause_t cause,
                                                                   unsigned int *pageCount,
                                                                   unsigned long long *addresses) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetRetiredPages");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetRetiredPages_v2(nvmlDevice_t device,
                                                                      nvmlPageRetirementCause_t cause,
                                                                      unsigned int *pageCount,
                                                                      unsigned long long *addresses,
                                                                      unsigned long long *timestamps) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetRetiredPages_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetRetiredPagesPendingStatus(nvmlDevice_t device,
                                                                                nvmlEnableState_t *isPending) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetRetiredPagesPendingStatus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetRemappedRows(nvmlDevice_t device, unsigned int *corrRows,
                                                                   unsigned int *uncRows, unsigned int *isPending,
                                                                   unsigned int *failureOccurred) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetRemappedRows");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetRowRemapperHistogram(nvmlDevice_t device,
                                                                           nvmlRowRemapperHistogramValues_t *values) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetRowRemapperHistogram");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetArchitecture(nvmlDevice_t device,
                                                                   nvmlDeviceArchitecture_t *arch) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetArchitecture");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlUnitSetLedState(nvmlUnit_t unit, nvmlLedColor_t color) {
    HOOK_TRACE_PROFILE("nvmlUnitSetLedState");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetPersistenceMode(nvmlDevice_t device, nvmlEnableState_t mode) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetPersistenceMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetComputeMode(nvmlDevice_t device, nvmlComputeMode_t mode) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetComputeMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetEccMode(nvmlDevice_t device, nvmlEnableState_t ecc) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetEccMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceClearEccErrorCounts(nvmlDevice_t device,
                                                                       nvmlEccCounterType_t counterType) {
    HOOK_TRACE_PROFILE("nvmlDeviceClearEccErrorCounts");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetDriverModel(nvmlDevice_t device, nvmlDriverModel_t driverModel,
                                                                  unsigned int flags) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetDriverModel");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetGpuLockedClocks(nvmlDevice_t device, unsigned int minGpuClockMHz,
                                                                      unsigned int maxGpuClockMHz) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetGpuLockedClocks");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceResetGpuLockedClocks(nvmlDevice_t device) {
    HOOK_TRACE_PROFILE("nvmlDeviceResetGpuLockedClocks");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetMemoryLockedClocks(nvmlDevice_t device,
                                                                         unsigned int minMemClockMHz,
                                                                         unsigned int maxMemClockMHz) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetMemoryLockedClocks");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceResetMemoryLockedClocks(nvmlDevice_t device) {
    HOOK_TRACE_PROFILE("nvmlDeviceResetMemoryLockedClocks");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetApplicationsClocks(nvmlDevice_t device, unsigned int memClockMHz,
                                                                         unsigned int graphicsClockMHz) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetApplicationsClocks");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetClkMonStatus(nvmlDevice_t device, nvmlClkMonStatus_t *status) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetClkMonStatus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetPowerManagementLimit(nvmlDevice_t device, unsigned int limit) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetPowerManagementLimit");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetGpuOperationMode(nvmlDevice_t device,
                                                                       nvmlGpuOperationMode_t mode) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetGpuOperationMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetAPIRestriction(nvmlDevice_t device, nvmlRestrictedAPI_t apiType,
                                                                     nvmlEnableState_t isRestricted) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetAPIRestriction");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetAccountingMode(nvmlDevice_t device, nvmlEnableState_t mode) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetAccountingMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceClearAccountingPids(nvmlDevice_t device) {
    HOOK_TRACE_PROFILE("nvmlDeviceClearAccountingPids");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetNvLinkState(nvmlDevice_t device, unsigned int link,
                                                                  nvmlEnableState_t *isActive) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetNvLinkState");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetNvLinkVersion(nvmlDevice_t device, unsigned int link,
                                                                    unsigned int *version) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetNvLinkVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetNvLinkCapability(nvmlDevice_t device, unsigned int link,
                                                                       nvmlNvLinkCapability_t capability,
                                                                       unsigned int *capResult) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetNvLinkCapability");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetNvLinkRemotePciInfo_v2(nvmlDevice_t device, unsigned int link,
                                                                             nvmlPciInfo_t *pci) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetNvLinkRemotePciInfo_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetNvLinkErrorCounter(nvmlDevice_t device, unsigned int link,
                                                                         nvmlNvLinkErrorCounter_t counter,
                                                                         unsigned long long *counterValue) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetNvLinkErrorCounter");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceResetNvLinkErrorCounters(nvmlDevice_t device, unsigned int link) {
    HOOK_TRACE_PROFILE("nvmlDeviceResetNvLinkErrorCounters");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetNvLinkUtilizationControl(nvmlDevice_t device, unsigned int link,
                                                                               unsigned int counter,
                                                                               nvmlNvLinkUtilizationControl_t *control,
                                                                               unsigned int reset) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetNvLinkUtilizationControl");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetNvLinkUtilizationControl(
    nvmlDevice_t device, unsigned int link, unsigned int counter, nvmlNvLinkUtilizationControl_t *control) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetNvLinkUtilizationControl");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetNvLinkUtilizationCounter(nvmlDevice_t device, unsigned int link,
                                                                               unsigned int counter,
                                                                               unsigned long long *rxcounter,
                                                                               unsigned long long *txcounter) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetNvLinkUtilizationCounter");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceFreezeNvLinkUtilizationCounter(nvmlDevice_t device,
                                                                                  unsigned int link,
                                                                                  unsigned int counter,
                                                                                  nvmlEnableState_t freeze) {
    HOOK_TRACE_PROFILE("nvmlDeviceFreezeNvLinkUtilizationCounter");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceResetNvLinkUtilizationCounter(nvmlDevice_t device, unsigned int link,
                                                                                 unsigned int counter) {
    HOOK_TRACE_PROFILE("nvmlDeviceResetNvLinkUtilizationCounter");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetNvLinkRemoteDeviceType(
    nvmlDevice_t device, unsigned int link, nvmlIntNvLinkDeviceType_t *pNvLinkDeviceType) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetNvLinkRemoteDeviceType");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlEventSetCreate(nvmlEventSet_t *set) {
    HOOK_TRACE_PROFILE("nvmlEventSetCreate");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceRegisterEvents(nvmlDevice_t device, unsigned long long eventTypes,
                                                                  nvmlEventSet_t set) {
    HOOK_TRACE_PROFILE("nvmlDeviceRegisterEvents");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetSupportedEventTypes(nvmlDevice_t device,
                                                                          unsigned long long *eventTypes) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetSupportedEventTypes");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlEventSetWait_v2(nvmlEventSet_t set, nvmlEventData_t *data,
                                                             unsigned int timeoutms) {
    HOOK_TRACE_PROFILE("nvmlEventSetWait_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlEventSetFree(nvmlEventSet_t set) {
    HOOK_TRACE_PROFILE("nvmlEventSetFree");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceModifyDrainState(nvmlPciInfo_t *pciInfo,
                                                                    nvmlEnableState_t newState) {
    HOOK_TRACE_PROFILE("nvmlDeviceModifyDrainState");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceQueryDrainState(nvmlPciInfo_t *pciInfo,
                                                                   nvmlEnableState_t *currentState) {
    HOOK_TRACE_PROFILE("nvmlDeviceQueryDrainState");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceRemoveGpu_v2(nvmlPciInfo_t *pciInfo, nvmlDetachGpuState_t gpuState,
                                                                nvmlPcieLinkState_t linkState) {
    HOOK_TRACE_PROFILE("nvmlDeviceRemoveGpu_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceDiscoverGpus(nvmlPciInfo_t *pciInfo) {
    HOOK_TRACE_PROFILE("nvmlDeviceDiscoverGpus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetFieldValues(nvmlDevice_t device, int valuesCount,
                                                                  nvmlFieldValue_t *values) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetFieldValues");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetVirtualizationMode(nvmlDevice_t device,
                                                                         nvmlGpuVirtualizationMode_t *pVirtualMode) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetVirtualizationMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetHostVgpuMode(nvmlDevice_t device,
                                                                   nvmlHostVgpuMode_t *pHostVgpuMode) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetHostVgpuMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetVirtualizationMode(nvmlDevice_t device,
                                                                         nvmlGpuVirtualizationMode_t virtualMode) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetVirtualizationMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t
    nvmlDeviceGetGridLicensableFeatures_v4(nvmlDevice_t device, nvmlGridLicensableFeatures_t *pGridLicensableFeatures) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGridLicensableFeatures_v4");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetProcessUtilization(nvmlDevice_t device,
                                                                         nvmlProcessUtilizationSample_t *utilization,
                                                                         unsigned int *processSamplesCount,
                                                                         unsigned long long lastSeenTimeStamp) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetProcessUtilization");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetSupportedVgpus(nvmlDevice_t device, unsigned int *vgpuCount,
                                                                     nvmlVgpuTypeId_t *vgpuTypeIds) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetSupportedVgpus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetCreatableVgpus(nvmlDevice_t device, unsigned int *vgpuCount,
                                                                     nvmlVgpuTypeId_t *vgpuTypeIds) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetCreatableVgpus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetClass(nvmlVgpuTypeId_t vgpuTypeId, char *vgpuTypeClass,
                                                              unsigned int *size) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetClass");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetName(nvmlVgpuTypeId_t vgpuTypeId, char *vgpuTypeName,
                                                             unsigned int *size) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetName");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetGpuInstanceProfileId(nvmlVgpuTypeId_t vgpuTypeId,
                                                                             unsigned int *gpuInstanceProfileId) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetGpuInstanceProfileId");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetDeviceID(nvmlVgpuTypeId_t vgpuTypeId,
                                                                 unsigned long long *deviceID,
                                                                 unsigned long long *subsystemID) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetDeviceID");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetFramebufferSize(nvmlVgpuTypeId_t vgpuTypeId,
                                                                        unsigned long long *fbSize) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetFramebufferSize");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetNumDisplayHeads(nvmlVgpuTypeId_t vgpuTypeId,
                                                                        unsigned int *numDisplayHeads) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetNumDisplayHeads");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetResolution(nvmlVgpuTypeId_t vgpuTypeId,
                                                                   unsigned int displayIndex, unsigned int *xdim,
                                                                   unsigned int *ydim) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetResolution");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetLicense(nvmlVgpuTypeId_t vgpuTypeId,
                                                                char *vgpuTypeLicenseString, unsigned int size) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetLicense");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetFrameRateLimit(nvmlVgpuTypeId_t vgpuTypeId,
                                                                       unsigned int *frameRateLimit) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetFrameRateLimit");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetMaxInstances(nvmlDevice_t device, nvmlVgpuTypeId_t vgpuTypeId,
                                                                     unsigned int *vgpuInstanceCount) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetMaxInstances");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuTypeGetMaxInstancesPerVm(nvmlVgpuTypeId_t vgpuTypeId,
                                                                          unsigned int *vgpuInstanceCountPerVm) {
    HOOK_TRACE_PROFILE("nvmlVgpuTypeGetMaxInstancesPerVm");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetActiveVgpus(nvmlDevice_t device, unsigned int *vgpuCount,
                                                                  nvmlVgpuInstance_t *vgpuInstances) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetActiveVgpus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetVmID(nvmlVgpuInstance_t vgpuInstance, char *vmId,
                                                                 unsigned int size, nvmlVgpuVmIdType_t *vmIdType) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetVmID");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetUUID(nvmlVgpuInstance_t vgpuInstance, char *uuid,
                                                                 unsigned int size) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetUUID");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetVmDriverVersion(nvmlVgpuInstance_t vgpuInstance,
                                                                            char *version, unsigned int length) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetVmDriverVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetFbUsage(nvmlVgpuInstance_t vgpuInstance,
                                                                    unsigned long long *fbUsage) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetFbUsage");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetLicenseStatus(nvmlVgpuInstance_t vgpuInstance,
                                                                          unsigned int *licensed) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetLicenseStatus");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetType(nvmlVgpuInstance_t vgpuInstance,
                                                                 nvmlVgpuTypeId_t *vgpuTypeId) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetType");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetFrameRateLimit(nvmlVgpuInstance_t vgpuInstance,
                                                                           unsigned int *frameRateLimit) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetFrameRateLimit");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetEccMode(nvmlVgpuInstance_t vgpuInstance,
                                                                    nvmlEnableState_t *eccMode) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetEccMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetEncoderCapacity(nvmlVgpuInstance_t vgpuInstance,
                                                                            unsigned int *encoderCapacity) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetEncoderCapacity");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceSetEncoderCapacity(nvmlVgpuInstance_t vgpuInstance,
                                                                            unsigned int encoderCapacity) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceSetEncoderCapacity");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetEncoderStats(nvmlVgpuInstance_t vgpuInstance,
                                                                         unsigned int *sessionCount,
                                                                         unsigned int *averageFps,
                                                                         unsigned int *averageLatency) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetEncoderStats");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetEncoderSessions(nvmlVgpuInstance_t vgpuInstance,
                                                                            unsigned int *sessionCount,
                                                                            nvmlEncoderSessionInfo_t *sessionInfo) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetEncoderSessions");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetFBCStats(nvmlVgpuInstance_t vgpuInstance,
                                                                     nvmlFBCStats_t *fbcStats) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetFBCStats");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetFBCSessions(nvmlVgpuInstance_t vgpuInstance,
                                                                        unsigned int *sessionCount,
                                                                        nvmlFBCSessionInfo_t *sessionInfo) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetFBCSessions");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetGpuInstanceId(nvmlVgpuInstance_t vgpuInstance,
                                                                          unsigned int *gpuInstanceId) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetGpuInstanceId");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetMetadata(nvmlVgpuInstance_t vgpuInstance,
                                                                     nvmlVgpuMetadata_t *vgpuMetadata,
                                                                     unsigned int *bufferSize) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetMetadata");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetVgpuMetadata(nvmlDevice_t device,
                                                                   nvmlVgpuPgpuMetadata_t *pgpuMetadata,
                                                                   unsigned int *bufferSize) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetVgpuMetadata");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGetVgpuCompatibility(nvmlVgpuMetadata_t *vgpuMetadata,
                                                                  nvmlVgpuPgpuMetadata_t *pgpuMetadata,
                                                                  nvmlVgpuPgpuCompatibility_t *compatibilityInfo) {
    HOOK_TRACE_PROFILE("nvmlGetVgpuCompatibility");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPgpuMetadataString(nvmlDevice_t device, char *pgpuMetadata,
                                                                         unsigned int *bufferSize) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPgpuMetadataString");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGetVgpuVersion(nvmlVgpuVersion_t *supported, nvmlVgpuVersion_t *current) {
    HOOK_TRACE_PROFILE("nvmlGetVgpuVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlSetVgpuVersion(nvmlVgpuVersion_t *vgpuVersion) {
    HOOK_TRACE_PROFILE("nvmlSetVgpuVersion");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetVgpuUtilization(
    nvmlDevice_t device, unsigned long long lastSeenTimeStamp, nvmlValueType_t *sampleValType,
    unsigned int *vgpuInstanceSamplesCount, nvmlVgpuInstanceUtilizationSample_t *utilizationSamples) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetVgpuUtilization");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetVgpuProcessUtilization(
    nvmlDevice_t device, unsigned long long lastSeenTimeStamp, unsigned int *vgpuProcessSamplesCount,
    nvmlVgpuProcessUtilizationSample_t *utilizationSamples) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetVgpuProcessUtilization");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetAccountingMode(nvmlVgpuInstance_t vgpuInstance,
                                                                           nvmlEnableState_t *mode) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetAccountingMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetAccountingPids(nvmlVgpuInstance_t vgpuInstance,
                                                                           unsigned int *count, unsigned int *pids) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetAccountingPids");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceGetAccountingStats(nvmlVgpuInstance_t vgpuInstance,
                                                                            unsigned int pid,
                                                                            nvmlAccountingStats_t *stats) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceGetAccountingStats");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlVgpuInstanceClearAccountingPids(nvmlVgpuInstance_t vgpuInstance) {
    HOOK_TRACE_PROFILE("nvmlVgpuInstanceClearAccountingPids");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGetExcludedDeviceCount(unsigned int *deviceCount) {
    HOOK_TRACE_PROFILE("nvmlGetExcludedDeviceCount");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGetExcludedDeviceInfoByIndex(unsigned int index,
                                                                          nvmlExcludedDeviceInfo_t *info) {
    HOOK_TRACE_PROFILE("nvmlGetExcludedDeviceInfoByIndex");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceSetMigMode(nvmlDevice_t device, unsigned int mode,
                                                              nvmlReturn_t *activationStatus) {
    HOOK_TRACE_PROFILE("nvmlDeviceSetMigMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMigMode(nvmlDevice_t device, unsigned int *currentMode,
                                                              unsigned int *pendingMode) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMigMode");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGpuInstanceProfileInfo(nvmlDevice_t device, unsigned int profile,
                                                                             nvmlGpuInstanceProfileInfo_t *info) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGpuInstanceProfileInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGpuInstancePossiblePlacements_v2(
    nvmlDevice_t device, unsigned int profileId, nvmlGpuInstancePlacement_t *placements, unsigned int *count) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGpuInstancePossiblePlacements_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGpuInstanceRemainingCapacity(nvmlDevice_t device,
                                                                                   unsigned int profileId,
                                                                                   unsigned int *count) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGpuInstanceRemainingCapacity");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceCreateGpuInstance(nvmlDevice_t device, unsigned int profileId,
                                                                     nvmlGpuInstance_t *gpuInstance) {
    HOOK_TRACE_PROFILE("nvmlDeviceCreateGpuInstance");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceCreateGpuInstanceWithPlacement(
    nvmlDevice_t device, unsigned int profileId, const nvmlGpuInstancePlacement_t *placement,
    nvmlGpuInstance_t *gpuInstance) {
    HOOK_TRACE_PROFILE("nvmlDeviceCreateGpuInstanceWithPlacement");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGpuInstanceDestroy(nvmlGpuInstance_t gpuInstance) {
    HOOK_TRACE_PROFILE("nvmlGpuInstanceDestroy");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGpuInstances(nvmlDevice_t device, unsigned int profileId,
                                                                   nvmlGpuInstance_t *gpuInstances,
                                                                   unsigned int *count) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGpuInstances");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGpuInstanceById(nvmlDevice_t device, unsigned int id,
                                                                      nvmlGpuInstance_t *gpuInstance) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGpuInstanceById");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGpuInstanceGetInfo(nvmlGpuInstance_t gpuInstance,
                                                                nvmlGpuInstanceInfo_t *info) {
    HOOK_TRACE_PROFILE("nvmlGpuInstanceGetInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t
    nvmlGpuInstanceGetComputeInstanceProfileInfo(nvmlGpuInstance_t gpuInstance, unsigned int profile,
                                                 unsigned int engProfile, nvmlComputeInstanceProfileInfo_t *info) {
    HOOK_TRACE_PROFILE("nvmlGpuInstanceGetComputeInstanceProfileInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGpuInstanceGetComputeInstanceRemainingCapacity(
    nvmlGpuInstance_t gpuInstance, unsigned int profileId, unsigned int *count) {
    HOOK_TRACE_PROFILE("nvmlGpuInstanceGetComputeInstanceRemainingCapacity");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGpuInstanceCreateComputeInstance(nvmlGpuInstance_t gpuInstance,
                                                                              unsigned int profileId,
                                                                              nvmlComputeInstance_t *computeInstance) {
    HOOK_TRACE_PROFILE("nvmlGpuInstanceCreateComputeInstance");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlComputeInstanceDestroy(nvmlComputeInstance_t computeInstance) {
    HOOK_TRACE_PROFILE("nvmlComputeInstanceDestroy");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGpuInstanceGetComputeInstances(nvmlGpuInstance_t gpuInstance,
                                                                            unsigned int profileId,
                                                                            nvmlComputeInstance_t *computeInstances,
                                                                            unsigned int *count) {
    HOOK_TRACE_PROFILE("nvmlGpuInstanceGetComputeInstances");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlGpuInstanceGetComputeInstanceById(nvmlGpuInstance_t gpuInstance,
                                                                               unsigned int id,
                                                                               nvmlComputeInstance_t *computeInstance) {
    HOOK_TRACE_PROFILE("nvmlGpuInstanceGetComputeInstanceById");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlComputeInstanceGetInfo_v2(nvmlComputeInstance_t computeInstance,
                                                                       nvmlComputeInstanceInfo_t *info) {
    HOOK_TRACE_PROFILE("nvmlComputeInstanceGetInfo_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceIsMigDeviceHandle(nvmlDevice_t device, unsigned int *isMigDevice) {
    HOOK_TRACE_PROFILE("nvmlDeviceIsMigDeviceHandle");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGpuInstanceId(nvmlDevice_t device, unsigned int *id) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGpuInstanceId");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetComputeInstanceId(nvmlDevice_t device, unsigned int *id) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetComputeInstanceId");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMaxMigDeviceCount(nvmlDevice_t device, unsigned int *count) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMaxMigDeviceCount");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMigDeviceHandleByIndex(nvmlDevice_t device, unsigned int index,
                                                                             nvmlDevice_t *migDevice) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMigDeviceHandleByIndex");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetDeviceHandleFromMigDeviceHandle(nvmlDevice_t migDevice,
                                                                                      nvmlDevice_t *device) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetDeviceHandleFromMigDeviceHandle");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlInit() {
    HOOK_TRACE_PROFILE("nvmlInit");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetCount(unsigned int *deviceCount) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetCount");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetHandleByIndex(unsigned int index, nvmlDevice_t *device) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetHandleByIndex");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetHandleByPciBusId(const char *pciBusId, nvmlDevice_t *device) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetHandleByPciBusId");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPciInfo(nvmlDevice_t device, nvmlPciInfo_t *pci) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPciInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetPciInfo_v2(nvmlDevice_t device, nvmlPciInfo_t *pci) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetPciInfo_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetNvLinkRemotePciInfo(nvmlDevice_t device, unsigned int link,
                                                                          nvmlPciInfo_t *pci) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetNvLinkRemotePciInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t
    nvmlDeviceGetGridLicensableFeatures(nvmlDevice_t device, nvmlGridLicensableFeatures_t *pGridLicensableFeatures) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGridLicensableFeatures");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t
    nvmlDeviceGetGridLicensableFeatures_v2(nvmlDevice_t device, nvmlGridLicensableFeatures_t *pGridLicensableFeatures) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGridLicensableFeatures_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t
    nvmlDeviceGetGridLicensableFeatures_v3(nvmlDevice_t device, nvmlGridLicensableFeatures_t *pGridLicensableFeatures) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGridLicensableFeatures_v3");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceRemoveGpu(nvmlPciInfo_t *pciInfo) {
    HOOK_TRACE_PROFILE("nvmlDeviceRemoveGpu");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlEventSetWait(nvmlEventSet_t set, nvmlEventData_t *data,
                                                          unsigned int timeoutms) {
    HOOK_TRACE_PROFILE("nvmlEventSetWait");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetAttributes(nvmlDevice_t device,
                                                                 nvmlDeviceAttributes_t *attributes) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetAttributes");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlComputeInstanceGetInfo(nvmlComputeInstance_t computeInstance,
                                                                    nvmlComputeInstanceInfo_t *info) {
    HOOK_TRACE_PROFILE("nvmlComputeInstanceGetInfo");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetComputeRunningProcesses(nvmlDevice_t device,
                                                                              unsigned int *infoCount,
                                                                              nvmlProcessInfo_v1_t *infos) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetComputeRunningProcesses");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGraphicsRunningProcesses(nvmlDevice_t device,
                                                                               unsigned int *infoCount,
                                                                               nvmlProcessInfo_v1_t *infos) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGraphicsRunningProcesses");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetMPSComputeRunningProcesses(nvmlDevice_t device,
                                                                                 unsigned int *infoCount,
                                                                                 nvmlProcessInfo_v1_t *infos) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMPSComputeRunningProcesses");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlDeviceGetGpuInstancePossiblePlacements(
    nvmlDevice_t device, unsigned int profileId, nvmlGpuInstancePlacement_t *placements, unsigned int *count) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetGpuInstancePossiblePlacements");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT nvmlReturn_t nvmlInternalGetExportTable(const void **ppExportTable, void *pExportTableId) {
    HOOK_TRACE_PROFILE("nvmlInternalGetExportTable");
    return NVML_ERROR_INVALID_ARGUMENT;
}

HOOK_C_API HOOK_DECL_EXPORT  nvmlReturn_t nvmlDeviceGetMemoryInfo_v2(nvmlDevice_t device, nvmlMemory_v2_t *memory) {
    HOOK_TRACE_PROFILE("nvmlDeviceGetMemoryInfo_v2");
    return NVML_ERROR_INVALID_ARGUMENT;
}
