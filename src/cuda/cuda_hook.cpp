#include "cuda_subset.h"
#include "macro_common.h"
#include "trace_profile.h"

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGetErrorString(CUresult error, const char **pStr) {
    HOOK_TRACE_PROFILE("cuGetErrorString");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGetErrorName(CUresult error, const char **pStr) {
    HOOK_TRACE_PROFILE("cuGetErrorName");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuInit(unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuInit");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDriverGetVersion(int *driverVersion) {
    HOOK_TRACE_PROFILE("cuDriverGetVersion");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGet(CUdevice *device, int ordinal) {
    HOOK_TRACE_PROFILE("cuDeviceGet");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetCount(int *count) {
    HOOK_TRACE_PROFILE("cuDeviceGetCount");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetName(char *name, int len, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetName");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetUuid(CUuuid *uuid, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetUuid");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetUuid_v2(CUuuid *uuid, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetUuid_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetLuid(char *luid, unsigned int *deviceNodeMask, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetLuid");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceTotalMem(size_t *bytes, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceTotalMem");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceTotalMem_v2(size_t *bytes, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceTotalMem_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetTexture1DLinearMaxWidth(size_t *maxWidthInElements,
                                                                        CUarray_format format, unsigned numChannels,
                                                                        CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetTexture1DLinearMaxWidth");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetAttribute(int *pi, CUdevice_attribute attrib, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetNvSciSyncAttributes(void *nvSciSyncAttrList, CUdevice dev, int flags) {
    HOOK_TRACE_PROFILE("cuDeviceGetNvSciSyncAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceSetMemPool(CUdevice dev, CUmemoryPool pool) {
    HOOK_TRACE_PROFILE("cuDeviceSetMemPool");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetMemPool(CUmemoryPool *pool, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetMemPool");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetDefaultMemPool(CUmemoryPool *pool_out, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetDefaultMemPool");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuFlushGPUDirectRDMAWrites(CUflushGPUDirectRDMAWritesTarget target,
                                                                CUflushGPUDirectRDMAWritesScope scope) {
    HOOK_TRACE_PROFILE("cuFlushGPUDirectRDMAWrites");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetProperties(CUdevprop *prop, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetProperties");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceComputeCapability(int *major, int *minor, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceComputeCapability");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDevicePrimaryCtxRetain(CUcontext *pctx, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDevicePrimaryCtxRetain");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDevicePrimaryCtxRelease(CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDevicePrimaryCtxRelease");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuDevicePrimaryCtxRelease_v2(CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDevicePrimaryCtxRelease_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDevicePrimaryCtxSetFlags(CUdevice dev, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuDevicePrimaryCtxSetFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuDevicePrimaryCtxSetFlags_v2(CUdevice dev, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuDevicePrimaryCtxSetFlags_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDevicePrimaryCtxGetState(CUdevice dev, unsigned int *flags, int *active) {
    HOOK_TRACE_PROFILE("cuDevicePrimaryCtxGetState");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDevicePrimaryCtxReset(CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDevicePrimaryCtxReset");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuDevicePrimaryCtxReset_v2(CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDevicePrimaryCtxReset_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetExecAffinitySupport(int *pi, CUexecAffinityType type, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetExecAffinitySupport");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxCreate(CUcontext *pctx, unsigned int flags, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuCtxCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxCreate_v2(CUcontext *pctx, unsigned int flags, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuCtxCreate_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxCreate_v3(CUcontext *pctx, CUexecAffinityParam *paramsArray, int numParams,
                                                    unsigned int flags, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuCtxCreate_v3");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxDestroy(CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuCtxDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxDestroy_v2(CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuCtxDestroy_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxPushCurrent(CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuCtxPushCurrent");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxPushCurrent_v2(CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuCtxPushCurrent_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxPopCurrent(CUcontext *pctx) {
    HOOK_TRACE_PROFILE("cuCtxPopCurrent");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxPopCurrent_v2(CUcontext *pctx) {
    HOOK_TRACE_PROFILE("cuCtxPopCurrent_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxSetCurrent(CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuCtxSetCurrent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxGetCurrent(CUcontext *pctx) {
    HOOK_TRACE_PROFILE("cuCtxGetCurrent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxGetDevice(CUdevice *device) {
    HOOK_TRACE_PROFILE("cuCtxGetDevice");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxGetFlags(unsigned int *flags) {
    HOOK_TRACE_PROFILE("cuCtxGetFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxSynchronize() {
    HOOK_TRACE_PROFILE("cuCtxSynchronize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxSetLimit(CUlimit limit, size_t value) {
    HOOK_TRACE_PROFILE("cuCtxSetLimit");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxGetLimit(size_t *pvalue, CUlimit limit) {
    HOOK_TRACE_PROFILE("cuCtxGetLimit");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxGetCacheConfig(CUfunc_cache *pconfig) {
    HOOK_TRACE_PROFILE("cuCtxGetCacheConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxSetCacheConfig(CUfunc_cache config) {
    HOOK_TRACE_PROFILE("cuCtxSetCacheConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxGetSharedMemConfig(CUsharedconfig *pConfig) {
    HOOK_TRACE_PROFILE("cuCtxGetSharedMemConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxSetSharedMemConfig(CUsharedconfig config) {
    HOOK_TRACE_PROFILE("cuCtxSetSharedMemConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxGetApiVersion(CUcontext ctx, unsigned int *version) {
    HOOK_TRACE_PROFILE("cuCtxGetApiVersion");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxGetStreamPriorityRange(int *leastPriority, int *greatestPriority) {
    HOOK_TRACE_PROFILE("cuCtxGetStreamPriorityRange");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxResetPersistingL2Cache() {
    HOOK_TRACE_PROFILE("cuCtxResetPersistingL2Cache");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxGetExecAffinity(CUexecAffinityParam *pExecAffinity, CUexecAffinityType type) {
    HOOK_TRACE_PROFILE("cuCtxGetExecAffinity");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxAttach(CUcontext *pctx, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuCtxAttach");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxDetach(CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuCtxDetach");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleLoad(CUmodule *module, const char *fname) {
    HOOK_TRACE_PROFILE("cuModuleLoad");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleLoadData(CUmodule *module, const void *image) {
    HOOK_TRACE_PROFILE("cuModuleLoadData");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleLoadDataEx(CUmodule *module, const void *image, unsigned int numOptions,
                                                        CUjit_option *options, void **optionValues) {
    HOOK_TRACE_PROFILE("cuModuleLoadDataEx");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleLoadFatBinary(CUmodule *module, const void *fatCubin) {
    HOOK_TRACE_PROFILE("cuModuleLoadFatBinary");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleUnload(CUmodule hmod) {
    HOOK_TRACE_PROFILE("cuModuleUnload");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleGetFunction(CUfunction *hfunc, CUmodule hmod, const char *name) {
    HOOK_TRACE_PROFILE("cuModuleGetFunction");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleGetGlobal(CUdeviceptr *dptr, size_t *bytes, CUmodule hmod,
                                                       const char *name) {
    HOOK_TRACE_PROFILE("cuModuleGetGlobal");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleGetGlobal_v2(CUdeviceptr *dptr, size_t *bytes, CUmodule hmod,
                                                          const char *name) {
    HOOK_TRACE_PROFILE("cuModuleGetGlobal_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleGetTexRef(CUtexref *pTexRef, CUmodule hmod, const char *name) {
    HOOK_TRACE_PROFILE("cuModuleGetTexRef");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuModuleGetSurfRef(CUsurfref *pSurfRef, CUmodule hmod, const char *name) {
    HOOK_TRACE_PROFILE("cuModuleGetSurfRef");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLinkCreate(unsigned int numOptions, CUjit_option *options, void **optionValues,
                                                  CUlinkState *stateOut) {
    HOOK_TRACE_PROFILE("cuLinkCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuLinkCreate_v2(unsigned int numOptions, CUjit_option *options,
                                                     void **optionValues, CUlinkState *stateOut) {
    HOOK_TRACE_PROFILE("cuLinkCreate_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLinkAddData(CUlinkState state, CUjitInputType type, void *data, size_t size,
                                                   const char *name, unsigned int numOptions, CUjit_option *options,
                                                   void **optionValues) {
    HOOK_TRACE_PROFILE("cuLinkAddData");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuLinkAddData_v2(CUlinkState state, CUjitInputType type, void *data, size_t size,
                                                      const char *name, unsigned int numOptions, CUjit_option *options,
                                                      void **optionValues) {
    HOOK_TRACE_PROFILE("cuLinkAddData_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLinkAddFile(CUlinkState state, CUjitInputType type, const char *path,
                                                   unsigned int numOptions, CUjit_option *options,
                                                   void **optionValues) {
    HOOK_TRACE_PROFILE("cuLinkAddFile");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuLinkAddFile_v2(CUlinkState state, CUjitInputType type, const char *path,
                                                      unsigned int numOptions, CUjit_option *options,
                                                      void **optionValues) {
    HOOK_TRACE_PROFILE("cuLinkAddFile_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLinkComplete(CUlinkState state, void **cubinOut, size_t *sizeOut) {
    HOOK_TRACE_PROFILE("cuLinkComplete");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLinkDestroy(CUlinkState state) {
    HOOK_TRACE_PROFILE("cuLinkDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemGetInfo(size_t *free, size_t *total) {
    HOOK_TRACE_PROFILE("cuMemGetInfo");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemGetInfo_v2(size_t *free, size_t *total) {
    HOOK_TRACE_PROFILE("cuMemGetInfo_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAlloc(CUdeviceptr *dptr, size_t bytesize) {
    HOOK_TRACE_PROFILE("cuMemAlloc");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAlloc_v2(CUdeviceptr *dptr, size_t bytesize) {
    HOOK_TRACE_PROFILE("cuMemAlloc_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAllocPitch(CUdeviceptr *dptr, size_t *pPitch, size_t WidthInBytes,
                                                     size_t Height, unsigned int ElementSizeBytes) {
    HOOK_TRACE_PROFILE("cuMemAllocPitch");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAllocPitch_v2(CUdeviceptr *dptr, size_t *pPitch, size_t WidthInBytes,
                                                        size_t Height, unsigned int ElementSizeBytes) {
    HOOK_TRACE_PROFILE("cuMemAllocPitch_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemFree(CUdeviceptr dptr) {
    HOOK_TRACE_PROFILE("cuMemFree");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemFree_v2(CUdeviceptr dptr) {
    HOOK_TRACE_PROFILE("cuMemFree_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemGetAddressRange(CUdeviceptr *pbase, size_t *psize, CUdeviceptr dptr) {
    HOOK_TRACE_PROFILE("cuMemGetAddressRange");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemGetAddressRange_v2(CUdeviceptr *pbase, size_t *psize, CUdeviceptr dptr) {
    HOOK_TRACE_PROFILE("cuMemGetAddressRange_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAllocHost(void **pp, size_t bytesize) {
    HOOK_TRACE_PROFILE("cuMemAllocHost");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAllocHost_v2(void **pp, size_t bytesize) {
    HOOK_TRACE_PROFILE("cuMemAllocHost_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemFreeHost(void *p) {
    HOOK_TRACE_PROFILE("cuMemFreeHost");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemHostAlloc(void **pp, size_t bytesize, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuMemHostAlloc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemHostGetDevicePointer(CUdeviceptr *pdptr, void *p, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuMemHostGetDevicePointer");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr *pdptr, void *p, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuMemHostGetDevicePointer_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemHostGetFlags(unsigned int *pFlags, void *p) {
    HOOK_TRACE_PROFILE("cuMemHostGetFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAllocManaged(CUdeviceptr *dptr, size_t bytesize, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuMemAllocManaged");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetByPCIBusId(CUdevice *dev, const char *pciBusId) {
    HOOK_TRACE_PROFILE("cuDeviceGetByPCIBusId");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetPCIBusId(char *pciBusId, int len, CUdevice dev) {
    HOOK_TRACE_PROFILE("cuDeviceGetPCIBusId");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuIpcGetEventHandle(CUipcEventHandle *pHandle, CUevent event) {
    HOOK_TRACE_PROFILE("cuIpcGetEventHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuIpcOpenEventHandle(CUevent *phEvent, CUipcEventHandle handle) {
    HOOK_TRACE_PROFILE("cuIpcOpenEventHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuIpcGetMemHandle(CUipcMemHandle *pHandle, CUdeviceptr dptr) {
    HOOK_TRACE_PROFILE("cuIpcGetMemHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuIpcOpenMemHandle(CUdeviceptr *pdptr, CUipcMemHandle handle, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuIpcOpenMemHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuIpcOpenMemHandle_v2(CUdeviceptr *pdptr, CUipcMemHandle handle,
                                                           unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuIpcOpenMemHandle_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuIpcCloseMemHandle(CUdeviceptr dptr) {
    HOOK_TRACE_PROFILE("cuIpcCloseMemHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemHostRegister(void *p, size_t bytesize, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuMemHostRegister");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemHostRegister_v2(void *p, size_t bytesize, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuMemHostRegister_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemHostUnregister(void *p) {
    HOOK_TRACE_PROFILE("cuMemHostUnregister");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy(CUdeviceptr dst, CUdeviceptr src, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyPeer(CUdeviceptr dstDevice, CUcontext dstContext, CUdeviceptr srcDevice,
                                                  CUcontext srcContext, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyPeer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyHtoD(CUdeviceptr dstDevice, const void *srcHost, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyHtoD");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoH(void *dstHost, CUdeviceptr srcDevice, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoH");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoD(CUdeviceptr dstDevice, CUdeviceptr srcDevice, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoD");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoA(CUarray dstArray, size_t dstOffset, CUdeviceptr srcDevice,
                                                  size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoA");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyAtoD(CUdeviceptr dstDevice, CUarray srcArray, size_t srcOffset,
                                                  size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyAtoD");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyHtoA(CUarray dstArray, size_t dstOffset, const void *srcHost,
                                                  size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyHtoA");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyAtoH(void *dstHost, CUarray srcArray, size_t srcOffset, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyAtoH");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyAtoA(CUarray dstArray, size_t dstOffset, CUarray srcArray,
                                                  size_t srcOffset, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyAtoA");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy2D(const CUDA_MEMCPY2D *pCopy) {
    HOOK_TRACE_PROFILE("cuMemcpy2D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy2DUnaligned(const CUDA_MEMCPY2D *pCopy) {
    HOOK_TRACE_PROFILE("cuMemcpy2DUnaligned");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy3D(const CUDA_MEMCPY3D *pCopy) {
    HOOK_TRACE_PROFILE("cuMemcpy3D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy3DPeer(const CUDA_MEMCPY3D_PEER *pCopy) {
    HOOK_TRACE_PROFILE("cuMemcpy3DPeer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyAsync(CUdeviceptr dst, CUdeviceptr src, size_t ByteCount,
                                                   CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyPeerAsync(CUdeviceptr dstDevice, CUcontext dstContext,
                                                       CUdeviceptr srcDevice, CUcontext srcContext, size_t ByteCount,
                                                       CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyPeerAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyHtoDAsync(CUdeviceptr dstDevice, const void *srcHost, size_t ByteCount,
                                                       CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyHtoDAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoHAsync(void *dstHost, CUdeviceptr srcDevice, size_t ByteCount,
                                                       CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoHAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoDAsync(CUdeviceptr dstDevice, CUdeviceptr srcDevice, size_t ByteCount,
                                                       CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoDAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyHtoAAsync(CUarray dstArray, size_t dstOffset, const void *srcHost,
                                                       size_t ByteCount, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyHtoAAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyAtoHAsync(void *dstHost, CUarray srcArray, size_t srcOffset,
                                                       size_t ByteCount, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyAtoHAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy2DAsync(const CUDA_MEMCPY2D *pCopy, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpy2DAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy3DAsync(const CUDA_MEMCPY3D *pCopy, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpy3DAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy3DPeerAsync(const CUDA_MEMCPY3D_PEER *pCopy, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpy3DPeerAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD8(CUdeviceptr dstDevice, unsigned char uc, size_t N) {
    HOOK_TRACE_PROFILE("cuMemsetD8");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD16(CUdeviceptr dstDevice, unsigned short us, size_t N) {
    HOOK_TRACE_PROFILE("cuMemsetD16");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD32(CUdeviceptr dstDevice, unsigned int ui, size_t N) {
    HOOK_TRACE_PROFILE("cuMemsetD32");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD2D8(CUdeviceptr dstDevice, size_t dstPitch, unsigned char uc,
                                                  size_t Width, size_t Height) {
    HOOK_TRACE_PROFILE("cuMemsetD2D8");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD2D16(CUdeviceptr dstDevice, size_t dstPitch, unsigned short us,
                                                   size_t Width, size_t Height) {
    HOOK_TRACE_PROFILE("cuMemsetD2D16");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD2D32(CUdeviceptr dstDevice, size_t dstPitch, unsigned int ui,
                                                   size_t Width, size_t Height) {
    HOOK_TRACE_PROFILE("cuMemsetD2D32");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD8Async(CUdeviceptr dstDevice, unsigned char uc, size_t N,
                                                     CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemsetD8Async");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD16Async(CUdeviceptr dstDevice, unsigned short us, size_t N,
                                                      CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemsetD16Async");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD32Async(CUdeviceptr dstDevice, unsigned int ui, size_t N,
                                                      CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemsetD32Async");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD2D8Async(CUdeviceptr dstDevice, size_t dstPitch, unsigned char uc,
                                                       size_t Width, size_t Height, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemsetD2D8Async");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD2D16Async(CUdeviceptr dstDevice, size_t dstPitch, unsigned short us,
                                                        size_t Width, size_t Height, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemsetD2D16Async");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD2D32Async(CUdeviceptr dstDevice, size_t dstPitch, unsigned int ui,
                                                        size_t Width, size_t Height, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemsetD2D32Async");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuArrayCreate(CUarray *pHandle, const CUDA_ARRAY_DESCRIPTOR *pAllocateArray) {
    HOOK_TRACE_PROFILE("cuArrayCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuArrayCreate_v2(CUarray *pHandle, const CUDA_ARRAY_DESCRIPTOR *pAllocateArray) {
    HOOK_TRACE_PROFILE("cuArrayCreate_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuArrayGetDescriptor(CUDA_ARRAY_DESCRIPTOR *pArrayDescriptor, CUarray hArray) {
    HOOK_TRACE_PROFILE("cuArrayGetDescriptor");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR *pArrayDescriptor, CUarray hArray) {
    HOOK_TRACE_PROFILE("cuArrayGetDescriptor_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuArrayGetSparseProperties(CUDA_ARRAY_SPARSE_PROPERTIES *sparseProperties,
                                                                CUarray array) {
    HOOK_TRACE_PROFILE("cuArrayGetSparseProperties");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMipmappedArrayGetSparseProperties(CUDA_ARRAY_SPARSE_PROPERTIES *sparseProperties,
                                                                         CUmipmappedArray mipmap) {
    HOOK_TRACE_PROFILE("cuMipmappedArrayGetSparseProperties");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuArrayGetPlane(CUarray *pPlaneArray, CUarray hArray, unsigned int planeIdx) {
    HOOK_TRACE_PROFILE("cuArrayGetPlane");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuArrayDestroy(CUarray hArray) {
    HOOK_TRACE_PROFILE("cuArrayDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuArray3DCreate(CUarray *pHandle, const CUDA_ARRAY3D_DESCRIPTOR *pAllocateArray) {
    HOOK_TRACE_PROFILE("cuArray3DCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuArray3DCreate_v2(CUarray *pHandle,
                                                        const CUDA_ARRAY3D_DESCRIPTOR *pAllocateArray) {
    HOOK_TRACE_PROFILE("cuArray3DCreate_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuArray3DGetDescriptor(CUDA_ARRAY3D_DESCRIPTOR *pArrayDescriptor, CUarray hArray) {
    HOOK_TRACE_PROFILE("cuArray3DGetDescriptor");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR *pArrayDescriptor,
                                                               CUarray hArray) {
    HOOK_TRACE_PROFILE("cuArray3DGetDescriptor_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMipmappedArrayCreate(CUmipmappedArray *pHandle,
                                                            const CUDA_ARRAY3D_DESCRIPTOR *pMipmappedArrayDesc,
                                                            unsigned int numMipmapLevels) {
    HOOK_TRACE_PROFILE("cuMipmappedArrayCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMipmappedArrayGetLevel(CUarray *pLevelArray, CUmipmappedArray hMipmappedArray,
                                                              unsigned int level) {
    HOOK_TRACE_PROFILE("cuMipmappedArrayGetLevel");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMipmappedArrayDestroy(CUmipmappedArray hMipmappedArray) {
    HOOK_TRACE_PROFILE("cuMipmappedArrayDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAddressReserve(CUdeviceptr *ptr, size_t size, size_t alignment,
                                                         CUdeviceptr addr, unsigned long long flags) {
    HOOK_TRACE_PROFILE("cuMemAddressReserve");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAddressFree(CUdeviceptr ptr, size_t size) {
    HOOK_TRACE_PROFILE("cuMemAddressFree");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemCreate(CUmemGenericAllocationHandle *handle, size_t size,
                                                 const CUmemAllocationProp *prop, unsigned long long flags) {
    HOOK_TRACE_PROFILE("cuMemCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemRelease(CUmemGenericAllocationHandle handle) {
    HOOK_TRACE_PROFILE("cuMemRelease");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemMap(CUdeviceptr ptr, size_t size, size_t offset,
                                              CUmemGenericAllocationHandle handle, unsigned long long flags) {
    HOOK_TRACE_PROFILE("cuMemMap");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemMapArrayAsync(CUarrayMapInfo *mapInfoList, unsigned int count,
                                                        CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemMapArrayAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemUnmap(CUdeviceptr ptr, size_t size) {
    HOOK_TRACE_PROFILE("cuMemUnmap");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemSetAccess(CUdeviceptr ptr, size_t size, const CUmemAccessDesc *desc,
                                                    size_t count) {
    HOOK_TRACE_PROFILE("cuMemSetAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemGetAccess(unsigned long long *flags, const CUmemLocation *location,
                                                    CUdeviceptr ptr) {
    HOOK_TRACE_PROFILE("cuMemGetAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemExportToShareableHandle(void *shareableHandle,
                                                                  CUmemGenericAllocationHandle handle,
                                                                  CUmemAllocationHandleType handleType,
                                                                  unsigned long long flags) {
    HOOK_TRACE_PROFILE("cuMemExportToShareableHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemImportFromShareableHandle(CUmemGenericAllocationHandle *handle,
                                                                    void *osHandle,
                                                                    CUmemAllocationHandleType shHandleType) {
    HOOK_TRACE_PROFILE("cuMemImportFromShareableHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemGetAllocationGranularity(size_t *granularity, const CUmemAllocationProp *prop,
                                                                   CUmemAllocationGranularity_flags option) {
    HOOK_TRACE_PROFILE("cuMemGetAllocationGranularity");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemGetAllocationPropertiesFromHandle(CUmemAllocationProp *prop,
                                                                            CUmemGenericAllocationHandle handle) {
    HOOK_TRACE_PROFILE("cuMemGetAllocationPropertiesFromHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemRetainAllocationHandle(CUmemGenericAllocationHandle *handle, void *addr) {
    HOOK_TRACE_PROFILE("cuMemRetainAllocationHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemFreeAsync(CUdeviceptr dptr, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemFreeAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAllocAsync(CUdeviceptr *dptr, size_t bytesize, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemAllocAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolTrimTo(CUmemoryPool pool, size_t minBytesToKeep) {
    HOOK_TRACE_PROFILE("cuMemPoolTrimTo");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolSetAttribute(CUmemoryPool pool, CUmemPool_attribute attr, void *value) {
    HOOK_TRACE_PROFILE("cuMemPoolSetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolGetAttribute(CUmemoryPool pool, CUmemPool_attribute attr, void *value) {
    HOOK_TRACE_PROFILE("cuMemPoolGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolSetAccess(CUmemoryPool pool, const CUmemAccessDesc *map, size_t count) {
    HOOK_TRACE_PROFILE("cuMemPoolSetAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolGetAccess(CUmemAccess_flags *flags, CUmemoryPool memPool,
                                                        CUmemLocation *location) {
    HOOK_TRACE_PROFILE("cuMemPoolGetAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolCreate(CUmemoryPool *pool, const CUmemPoolProps *poolProps) {
    HOOK_TRACE_PROFILE("cuMemPoolCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolDestroy(CUmemoryPool pool) {
    HOOK_TRACE_PROFILE("cuMemPoolDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAllocFromPoolAsync(CUdeviceptr *dptr, size_t bytesize, CUmemoryPool pool,
                                                             CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemAllocFromPoolAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolExportToShareableHandle(void *handle_out, CUmemoryPool pool,
                                                                      CUmemAllocationHandleType handleType,
                                                                      unsigned long long flags) {
    HOOK_TRACE_PROFILE("cuMemPoolExportToShareableHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolImportFromShareableHandle(CUmemoryPool *pool_out, void *handle,
                                                                        CUmemAllocationHandleType handleType,
                                                                        unsigned long long flags) {
    HOOK_TRACE_PROFILE("cuMemPoolImportFromShareableHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolExportPointer(CUmemPoolPtrExportData *shareData_out, CUdeviceptr ptr) {
    HOOK_TRACE_PROFILE("cuMemPoolExportPointer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPoolImportPointer(CUdeviceptr *ptr_out, CUmemoryPool pool,
                                                            CUmemPoolPtrExportData *shareData) {
    HOOK_TRACE_PROFILE("cuMemPoolImportPointer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuPointerGetAttribute(void *data, CUpointer_attribute attribute, CUdeviceptr ptr) {
    HOOK_TRACE_PROFILE("cuPointerGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemPrefetchAsync(CUdeviceptr devPtr, size_t count, CUdevice dstDevice,
                                                        CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemPrefetchAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemAdvise(CUdeviceptr devPtr, size_t count, CUmem_advise advice,
                                                 CUdevice device) {
    HOOK_TRACE_PROFILE("cuMemAdvise");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemRangeGetAttribute(void *data, size_t dataSize,
                                                            CUmem_range_attribute attribute, CUdeviceptr devPtr,
                                                            size_t count) {
    HOOK_TRACE_PROFILE("cuMemRangeGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemRangeGetAttributes(void **data, size_t *dataSizes,
                                                             CUmem_range_attribute *attributes, size_t numAttributes,
                                                             CUdeviceptr devPtr, size_t count) {
    HOOK_TRACE_PROFILE("cuMemRangeGetAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuPointerSetAttribute(const void *value, CUpointer_attribute attribute,
                                                           CUdeviceptr ptr) {
    HOOK_TRACE_PROFILE("cuPointerSetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuPointerGetAttributes(unsigned int numAttributes, CUpointer_attribute *attributes,
                                                            void **data, CUdeviceptr ptr) {
    HOOK_TRACE_PROFILE("cuPointerGetAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamCreate(CUstream *phStream, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuStreamCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamCreateWithPriority(CUstream *phStream, unsigned int flags, int priority) {
    HOOK_TRACE_PROFILE("cuStreamCreateWithPriority");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamGetPriority(CUstream hStream, int *priority) {
    HOOK_TRACE_PROFILE("cuStreamGetPriority");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamGetFlags(CUstream hStream, unsigned int *flags) {
    HOOK_TRACE_PROFILE("cuStreamGetFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamGetCtx(CUstream hStream, CUcontext *pctx) {
    HOOK_TRACE_PROFILE("cuStreamGetCtx");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamWaitEvent(CUstream hStream, CUevent hEvent, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuStreamWaitEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamAddCallback(CUstream hStream, CUstreamCallback callback, void *userData,
                                                         unsigned int flags) {
    HOOK_TRACE_PROFILE("cuStreamAddCallback");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamBeginCapture(CUstream hStream, CUstreamCaptureMode mode) {
    HOOK_TRACE_PROFILE("cuStreamBeginCapture");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuThreadExchangeStreamCaptureMode(CUstreamCaptureMode *mode) {
    HOOK_TRACE_PROFILE("cuThreadExchangeStreamCaptureMode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamEndCapture(CUstream hStream, CUgraph *phGraph) {
    HOOK_TRACE_PROFILE("cuStreamEndCapture");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamIsCapturing(CUstream hStream, CUstreamCaptureStatus *captureStatus) {
    HOOK_TRACE_PROFILE("cuStreamIsCapturing");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamGetCaptureInfo(CUstream hStream, CUstreamCaptureStatus *captureStatus_out,
                                                            cuuint64_t *id_out) {
    HOOK_TRACE_PROFILE("cuStreamGetCaptureInfo");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamGetCaptureInfo_v2(CUstream hStream,
                                                               CUstreamCaptureStatus *captureStatus_out,
                                                               cuuint64_t *id_out, CUgraph *graph_out,
                                                               const CUgraphNode **dependencies_out,
                                                               size_t *numDependencies_out) {
    HOOK_TRACE_PROFILE("cuStreamGetCaptureInfo_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamUpdateCaptureDependencies(CUstream hStream, CUgraphNode *dependencies,
                                                                       size_t numDependencies, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuStreamUpdateCaptureDependencies");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamAttachMemAsync(CUstream hStream, CUdeviceptr dptr, size_t length,
                                                            unsigned int flags) {
    HOOK_TRACE_PROFILE("cuStreamAttachMemAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamQuery(CUstream hStream) {
    HOOK_TRACE_PROFILE("cuStreamQuery");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamSynchronize(CUstream hStream) {
    HOOK_TRACE_PROFILE("cuStreamSynchronize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamDestroy(CUstream hStream) {
    HOOK_TRACE_PROFILE("cuStreamDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamDestroy_v2(CUstream hStream) {
    HOOK_TRACE_PROFILE("cuStreamDestroy_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamCopyAttributes(CUstream dst, CUstream src) {
    HOOK_TRACE_PROFILE("cuStreamCopyAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamGetAttribute(CUstream hStream, CUstreamAttrID attr,
                                                          CUstreamAttrValue *value_out) {
    HOOK_TRACE_PROFILE("cuStreamGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamSetAttribute(CUstream hStream, CUstreamAttrID attr,
                                                          const CUstreamAttrValue *value) {
    HOOK_TRACE_PROFILE("cuStreamSetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuEventCreate(CUevent *phEvent, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuEventCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuEventRecord(CUevent hEvent, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuEventRecord");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuEventRecordWithFlags(CUevent hEvent, CUstream hStream, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuEventRecordWithFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuEventQuery(CUevent hEvent) {
    HOOK_TRACE_PROFILE("cuEventQuery");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuEventSynchronize(CUevent hEvent) {
    HOOK_TRACE_PROFILE("cuEventSynchronize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuEventDestroy(CUevent hEvent) {
    HOOK_TRACE_PROFILE("cuEventDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuEventDestroy_v2(CUevent hEvent) {
    HOOK_TRACE_PROFILE("cuEventDestroy_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuEventElapsedTime(float *pMilliseconds, CUevent hStart, CUevent hEnd) {
    HOOK_TRACE_PROFILE("cuEventElapsedTime");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuImportExternalMemory(CUexternalMemory *extMem_out,
                                                            const CUDA_EXTERNAL_MEMORY_HANDLE_DESC *memHandleDesc) {
    HOOK_TRACE_PROFILE("cuImportExternalMemory");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuExternalMemoryGetMappedBuffer(
    CUdeviceptr *devPtr, CUexternalMemory extMem, const CUDA_EXTERNAL_MEMORY_BUFFER_DESC *bufferDesc) {
    HOOK_TRACE_PROFILE("cuExternalMemoryGetMappedBuffer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuExternalMemoryGetMappedMipmappedArray(
    CUmipmappedArray *mipmap, CUexternalMemory extMem, const CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC *mipmapDesc) {
    HOOK_TRACE_PROFILE("cuExternalMemoryGetMappedMipmappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDestroyExternalMemory(CUexternalMemory extMem) {
    HOOK_TRACE_PROFILE("cuDestroyExternalMemory");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuImportExternalSemaphore(
    CUexternalSemaphore *extSem_out, const CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC *semHandleDesc) {
    HOOK_TRACE_PROFILE("cuImportExternalSemaphore");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuSignalExternalSemaphoresAsync(
    const CUexternalSemaphore *extSemArray, const CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS *paramsArray,
    unsigned int numExtSems, CUstream stream) {
    HOOK_TRACE_PROFILE("cuSignalExternalSemaphoresAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuWaitExternalSemaphoresAsync(
    const CUexternalSemaphore *extSemArray, const CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS *paramsArray,
    unsigned int numExtSems, CUstream stream) {
    HOOK_TRACE_PROFILE("cuWaitExternalSemaphoresAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDestroyExternalSemaphore(CUexternalSemaphore extSem) {
    HOOK_TRACE_PROFILE("cuDestroyExternalSemaphore");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamWaitValue32(CUstream stream, CUdeviceptr addr, cuuint32_t value,
                                                         unsigned int flags) {
    HOOK_TRACE_PROFILE("cuStreamWaitValue32");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamWaitValue64(CUstream stream, CUdeviceptr addr, cuuint64_t value,
                                                         unsigned int flags) {
    HOOK_TRACE_PROFILE("cuStreamWaitValue64");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamWriteValue32(CUstream stream, CUdeviceptr addr, cuuint32_t value,
                                                          unsigned int flags) {
    HOOK_TRACE_PROFILE("cuStreamWriteValue32");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamWriteValue64(CUstream stream, CUdeviceptr addr, cuuint64_t value,
                                                          unsigned int flags) {
    HOOK_TRACE_PROFILE("cuStreamWriteValue64");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamBatchMemOp(CUstream stream, unsigned int count,
                                                        CUstreamBatchMemOpParams *paramArray, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuStreamBatchMemOp");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuFuncGetAttribute(int *pi, CUfunction_attribute attrib, CUfunction hfunc) {
    HOOK_TRACE_PROFILE("cuFuncGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuFuncSetAttribute(CUfunction hfunc, CUfunction_attribute attrib, int value) {
    HOOK_TRACE_PROFILE("cuFuncSetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuFuncSetCacheConfig(CUfunction hfunc, CUfunc_cache config) {
    HOOK_TRACE_PROFILE("cuFuncSetCacheConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuFuncSetSharedMemConfig(CUfunction hfunc, CUsharedconfig config) {
    HOOK_TRACE_PROFILE("cuFuncSetSharedMemConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuFuncGetModule(CUmodule *hmod, CUfunction hfunc) {
    HOOK_TRACE_PROFILE("cuFuncGetModule");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLaunchKernel(CUfunction f, unsigned int gridDimX, unsigned int gridDimY,
                                                    unsigned int gridDimZ, unsigned int blockDimX,
                                                    unsigned int blockDimY, unsigned int blockDimZ,
                                                    unsigned int sharedMemBytes, CUstream hStream, void **kernelParams,
                                                    void **extra) {
    HOOK_TRACE_PROFILE("cuLaunchKernel");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLaunchCooperativeKernel(CUfunction f, unsigned int gridDimX,
                                                               unsigned int gridDimY, unsigned int gridDimZ,
                                                               unsigned int blockDimX, unsigned int blockDimY,
                                                               unsigned int blockDimZ, unsigned int sharedMemBytes,
                                                               CUstream hStream, void **kernelParams) {
    HOOK_TRACE_PROFILE("cuLaunchCooperativeKernel");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLaunchCooperativeKernelMultiDevice(CUDA_LAUNCH_PARAMS *launchParamsList,
                                                                          unsigned int numDevices, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuLaunchCooperativeKernelMultiDevice");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLaunchHostFunc(CUstream hStream, CUhostFn fn, void *userData) {
    HOOK_TRACE_PROFILE("cuLaunchHostFunc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuFuncSetBlockShape(CUfunction hfunc, int x, int y, int z) {
    HOOK_TRACE_PROFILE("cuFuncSetBlockShape");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuFuncSetSharedSize(CUfunction hfunc, unsigned int bytes) {
    HOOK_TRACE_PROFILE("cuFuncSetSharedSize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuParamSetSize(CUfunction hfunc, unsigned int numbytes) {
    HOOK_TRACE_PROFILE("cuParamSetSize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuParamSeti(CUfunction hfunc, int offset, unsigned int value) {
    HOOK_TRACE_PROFILE("cuParamSeti");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuParamSetf(CUfunction hfunc, int offset, float value) {
    HOOK_TRACE_PROFILE("cuParamSetf");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuParamSetv(CUfunction hfunc, int offset, void *ptr, unsigned int numbytes) {
    HOOK_TRACE_PROFILE("cuParamSetv");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLaunch(CUfunction f) {
    HOOK_TRACE_PROFILE("cuLaunch");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLaunchGrid(CUfunction f, int grid_width, int grid_height) {
    HOOK_TRACE_PROFILE("cuLaunchGrid");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuLaunchGridAsync(CUfunction f, int grid_width, int grid_height,
                                                       CUstream hStream) {
    HOOK_TRACE_PROFILE("cuLaunchGridAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuParamSetTexRef(CUfunction hfunc, int texunit, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuParamSetTexRef");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphCreate(CUgraph *phGraph, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuGraphCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddKernelNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                          const CUgraphNode *dependencies, size_t numDependencies,
                                                          const CUDA_KERNEL_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphAddKernelNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphKernelNodeGetParams(CUgraphNode hNode,
                                                                CUDA_KERNEL_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphKernelNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphKernelNodeSetParams(CUgraphNode hNode,
                                                                const CUDA_KERNEL_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphKernelNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddMemcpyNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                          const CUgraphNode *dependencies, size_t numDependencies,
                                                          const CUDA_MEMCPY3D *copyParams, CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuGraphAddMemcpyNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphMemcpyNodeGetParams(CUgraphNode hNode, CUDA_MEMCPY3D *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphMemcpyNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphMemcpyNodeSetParams(CUgraphNode hNode, const CUDA_MEMCPY3D *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphMemcpyNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddMemsetNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                          const CUgraphNode *dependencies, size_t numDependencies,
                                                          const CUDA_MEMSET_NODE_PARAMS *memsetParams, CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuGraphAddMemsetNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphMemsetNodeGetParams(CUgraphNode hNode,
                                                                CUDA_MEMSET_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphMemsetNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphMemsetNodeSetParams(CUgraphNode hNode,
                                                                const CUDA_MEMSET_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphMemsetNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddHostNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                        const CUgraphNode *dependencies, size_t numDependencies,
                                                        const CUDA_HOST_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphAddHostNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphHostNodeGetParams(CUgraphNode hNode, CUDA_HOST_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphHostNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphHostNodeSetParams(CUgraphNode hNode,
                                                              const CUDA_HOST_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphHostNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddChildGraphNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                              const CUgraphNode *dependencies, size_t numDependencies,
                                                              CUgraph childGraph) {
    HOOK_TRACE_PROFILE("cuGraphAddChildGraphNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphChildGraphNodeGetGraph(CUgraphNode hNode, CUgraph *phGraph) {
    HOOK_TRACE_PROFILE("cuGraphChildGraphNodeGetGraph");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddEmptyNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                         const CUgraphNode *dependencies, size_t numDependencies) {
    HOOK_TRACE_PROFILE("cuGraphAddEmptyNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddEventRecordNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                               const CUgraphNode *dependencies, size_t numDependencies,
                                                               CUevent event) {
    HOOK_TRACE_PROFILE("cuGraphAddEventRecordNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphEventRecordNodeGetEvent(CUgraphNode hNode, CUevent *event_out) {
    HOOK_TRACE_PROFILE("cuGraphEventRecordNodeGetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphEventRecordNodeSetEvent(CUgraphNode hNode, CUevent event) {
    HOOK_TRACE_PROFILE("cuGraphEventRecordNodeSetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddEventWaitNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                             const CUgraphNode *dependencies, size_t numDependencies,
                                                             CUevent event) {
    HOOK_TRACE_PROFILE("cuGraphAddEventWaitNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphEventWaitNodeGetEvent(CUgraphNode hNode, CUevent *event_out) {
    HOOK_TRACE_PROFILE("cuGraphEventWaitNodeGetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphEventWaitNodeSetEvent(CUgraphNode hNode, CUevent event) {
    HOOK_TRACE_PROFILE("cuGraphEventWaitNodeSetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult
    cuGraphAddExternalSemaphoresSignalNode(CUgraphNode *phGraphNode, CUgraph hGraph, const CUgraphNode *dependencies,
                                           size_t numDependencies, const CUDA_EXT_SEM_SIGNAL_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphAddExternalSemaphoresSignalNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult
    cuGraphExternalSemaphoresSignalNodeGetParams(CUgraphNode hNode, CUDA_EXT_SEM_SIGNAL_NODE_PARAMS *params_out) {
    HOOK_TRACE_PROFILE("cuGraphExternalSemaphoresSignalNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult
    cuGraphExternalSemaphoresSignalNodeSetParams(CUgraphNode hNode, const CUDA_EXT_SEM_SIGNAL_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphExternalSemaphoresSignalNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult
    cuGraphAddExternalSemaphoresWaitNode(CUgraphNode *phGraphNode, CUgraph hGraph, const CUgraphNode *dependencies,
                                         size_t numDependencies, const CUDA_EXT_SEM_WAIT_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphAddExternalSemaphoresWaitNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult
    cuGraphExternalSemaphoresWaitNodeGetParams(CUgraphNode hNode, CUDA_EXT_SEM_WAIT_NODE_PARAMS *params_out) {
    HOOK_TRACE_PROFILE("cuGraphExternalSemaphoresWaitNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult
    cuGraphExternalSemaphoresWaitNodeSetParams(CUgraphNode hNode, const CUDA_EXT_SEM_WAIT_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphExternalSemaphoresWaitNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddMemAllocNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                            const CUgraphNode *dependencies, size_t numDependencies,
                                                            CUDA_MEM_ALLOC_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphAddMemAllocNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphMemAllocNodeGetParams(CUgraphNode hNode,
                                                                  CUDA_MEM_ALLOC_NODE_PARAMS *params_out) {
    HOOK_TRACE_PROFILE("cuGraphMemAllocNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddMemFreeNode(CUgraphNode *phGraphNode, CUgraph hGraph,
                                                           const CUgraphNode *dependencies, size_t numDependencies,
                                                           CUdeviceptr dptr) {
    HOOK_TRACE_PROFILE("cuGraphAddMemFreeNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphMemFreeNodeGetParams(CUgraphNode hNode, CUdeviceptr *dptr_out) {
    HOOK_TRACE_PROFILE("cuGraphMemFreeNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGraphMemTrim(CUdevice device) {
    HOOK_TRACE_PROFILE("cuDeviceGraphMemTrim");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetGraphMemAttribute(CUdevice device, CUgraphMem_attribute attr,
                                                                  void *value) {
    HOOK_TRACE_PROFILE("cuDeviceGetGraphMemAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceSetGraphMemAttribute(CUdevice device, CUgraphMem_attribute attr,
                                                                  void *value) {
    HOOK_TRACE_PROFILE("cuDeviceSetGraphMemAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphClone(CUgraph *phGraphClone, CUgraph originalGraph) {
    HOOK_TRACE_PROFILE("cuGraphClone");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphNodeFindInClone(CUgraphNode *phNode, CUgraphNode hOriginalNode,
                                                            CUgraph hClonedGraph) {
    HOOK_TRACE_PROFILE("cuGraphNodeFindInClone");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphNodeGetType(CUgraphNode hNode, CUgraphNodeType *type) {
    HOOK_TRACE_PROFILE("cuGraphNodeGetType");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphGetNodes(CUgraph hGraph, CUgraphNode *nodes, size_t *numNodes) {
    HOOK_TRACE_PROFILE("cuGraphGetNodes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphGetRootNodes(CUgraph hGraph, CUgraphNode *rootNodes, size_t *numRootNodes) {
    HOOK_TRACE_PROFILE("cuGraphGetRootNodes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphGetEdges(CUgraph hGraph, CUgraphNode *from, CUgraphNode *to,
                                                     size_t *numEdges) {
    HOOK_TRACE_PROFILE("cuGraphGetEdges");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphNodeGetDependencies(CUgraphNode hNode, CUgraphNode *dependencies,
                                                                size_t *numDependencies) {
    HOOK_TRACE_PROFILE("cuGraphNodeGetDependencies");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphNodeGetDependentNodes(CUgraphNode hNode, CUgraphNode *dependentNodes,
                                                                  size_t *numDependentNodes) {
    HOOK_TRACE_PROFILE("cuGraphNodeGetDependentNodes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphAddDependencies(CUgraph hGraph, const CUgraphNode *from,
                                                            const CUgraphNode *to, size_t numDependencies) {
    HOOK_TRACE_PROFILE("cuGraphAddDependencies");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphRemoveDependencies(CUgraph hGraph, const CUgraphNode *from,
                                                               const CUgraphNode *to, size_t numDependencies) {
    HOOK_TRACE_PROFILE("cuGraphRemoveDependencies");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphDestroyNode(CUgraphNode hNode) {
    HOOK_TRACE_PROFILE("cuGraphDestroyNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphInstantiate(CUgraphExec *phGraphExec, CUgraph hGraph,
                                                        CUgraphNode *phErrorNode, char *logBuffer, size_t bufferSize) {
    HOOK_TRACE_PROFILE("cuGraphInstantiate");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphInstantiate_v2(CUgraphExec *phGraphExec, CUgraph hGraph,
                                                           CUgraphNode *phErrorNode, char *logBuffer,
                                                           size_t bufferSize) {
    HOOK_TRACE_PROFILE("cuGraphInstantiate_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphInstantiateWithFlags(CUgraphExec *phGraphExec, CUgraph hGraph,
                                                                 unsigned long long flags) {
    HOOK_TRACE_PROFILE("cuGraphInstantiateWithFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecKernelNodeSetParams(CUgraphExec hGraphExec, CUgraphNode hNode,
                                                                    const CUDA_KERNEL_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphExecKernelNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecMemcpyNodeSetParams(CUgraphExec hGraphExec, CUgraphNode hNode,
                                                                    const CUDA_MEMCPY3D *copyParams, CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuGraphExecMemcpyNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecMemsetNodeSetParams(CUgraphExec hGraphExec, CUgraphNode hNode,
                                                                    const CUDA_MEMSET_NODE_PARAMS *memsetParams,
                                                                    CUcontext ctx) {
    HOOK_TRACE_PROFILE("cuGraphExecMemsetNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecHostNodeSetParams(CUgraphExec hGraphExec, CUgraphNode hNode,
                                                                  const CUDA_HOST_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphExecHostNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecChildGraphNodeSetParams(CUgraphExec hGraphExec, CUgraphNode hNode,
                                                                        CUgraph childGraph) {
    HOOK_TRACE_PROFILE("cuGraphExecChildGraphNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecEventRecordNodeSetEvent(CUgraphExec hGraphExec, CUgraphNode hNode,
                                                                        CUevent event) {
    HOOK_TRACE_PROFILE("cuGraphExecEventRecordNodeSetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecEventWaitNodeSetEvent(CUgraphExec hGraphExec, CUgraphNode hNode,
                                                                      CUevent event) {
    HOOK_TRACE_PROFILE("cuGraphExecEventWaitNodeSetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecExternalSemaphoresSignalNodeSetParams(
    CUgraphExec hGraphExec, CUgraphNode hNode, const CUDA_EXT_SEM_SIGNAL_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphExecExternalSemaphoresSignalNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecExternalSemaphoresWaitNodeSetParams(
    CUgraphExec hGraphExec, CUgraphNode hNode, const CUDA_EXT_SEM_WAIT_NODE_PARAMS *nodeParams) {
    HOOK_TRACE_PROFILE("cuGraphExecExternalSemaphoresWaitNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphUpload(CUgraphExec hGraphExec, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuGraphUpload");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphLaunch(CUgraphExec hGraphExec, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuGraphLaunch");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecDestroy(CUgraphExec hGraphExec) {
    HOOK_TRACE_PROFILE("cuGraphExecDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphDestroy(CUgraph hGraph) {
    HOOK_TRACE_PROFILE("cuGraphDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphExecUpdate(CUgraphExec hGraphExec, CUgraph hGraph,
                                                       CUgraphNode *hErrorNode_out,
                                                       CUgraphExecUpdateResult *updateResult_out) {
    HOOK_TRACE_PROFILE("cuGraphExecUpdate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphKernelNodeCopyAttributes(CUgraphNode dst, CUgraphNode src) {
    HOOK_TRACE_PROFILE("cuGraphKernelNodeCopyAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphKernelNodeGetAttribute(CUgraphNode hNode, CUkernelNodeAttrID attr,
                                                                   CUkernelNodeAttrValue *value_out) {
    HOOK_TRACE_PROFILE("cuGraphKernelNodeGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphKernelNodeSetAttribute(CUgraphNode hNode, CUkernelNodeAttrID attr,
                                                                   const CUkernelNodeAttrValue *value) {
    HOOK_TRACE_PROFILE("cuGraphKernelNodeSetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphDebugDotPrint(CUgraph hGraph, const char *path, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuGraphDebugDotPrint");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuUserObjectCreate(CUuserObject *object_out, void *ptr, CUhostFn destroy,
                                                        unsigned int initialRefcount, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuUserObjectCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuUserObjectRetain(CUuserObject object, unsigned int count) {
    HOOK_TRACE_PROFILE("cuUserObjectRetain");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuUserObjectRelease(CUuserObject object, unsigned int count) {
    HOOK_TRACE_PROFILE("cuUserObjectRelease");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphRetainUserObject(CUgraph graph, CUuserObject object, unsigned int count,
                                                             unsigned int flags) {
    HOOK_TRACE_PROFILE("cuGraphRetainUserObject");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphReleaseUserObject(CUgraph graph, CUuserObject object, unsigned int count) {
    HOOK_TRACE_PROFILE("cuGraphReleaseUserObject");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuOccupancyMaxActiveBlocksPerMultiprocessor(int *numBlocks, CUfunction func,
                                                                                 int blockSize,
                                                                                 size_t dynamicSMemSize) {
    HOOK_TRACE_PROFILE("cuOccupancyMaxActiveBlocksPerMultiprocessor");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(
    int *numBlocks, CUfunction func, int blockSize, size_t dynamicSMemSize, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuOccupancyMaxPotentialBlockSize(int *minGridSize, int *blockSize, CUfunction func,
                                                                      CUoccupancyB2DSize blockSizeToDynamicSMemSize,
                                                                      size_t dynamicSMemSize, int blockSizeLimit) {
    HOOK_TRACE_PROFILE("cuOccupancyMaxPotentialBlockSize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuOccupancyMaxPotentialBlockSizeWithFlags(
    int *minGridSize, int *blockSize, CUfunction func, CUoccupancyB2DSize blockSizeToDynamicSMemSize,
    size_t dynamicSMemSize, int blockSizeLimit, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuOccupancyMaxPotentialBlockSizeWithFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuOccupancyAvailableDynamicSMemPerBlock(size_t *dynamicSmemSize, CUfunction func,
                                                                             int numBlocks, int blockSize) {
    HOOK_TRACE_PROFILE("cuOccupancyAvailableDynamicSMemPerBlock");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetArray(CUtexref hTexRef, CUarray hArray, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuTexRefSetArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetMipmappedArray(CUtexref hTexRef, CUmipmappedArray hMipmappedArray,
                                                               unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuTexRefSetMipmappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetAddress(size_t *ByteOffset, CUtexref hTexRef, CUdeviceptr dptr,
                                                        size_t bytes) {
    HOOK_TRACE_PROFILE("cuTexRefSetAddress");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetAddress_v2(size_t *ByteOffset, CUtexref hTexRef, CUdeviceptr dptr,
                                                           size_t bytes) {
    HOOK_TRACE_PROFILE("cuTexRefSetAddress_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetAddress2D(CUtexref hTexRef, const CUDA_ARRAY_DESCRIPTOR *desc,
                                                          CUdeviceptr dptr, size_t Pitch) {
    HOOK_TRACE_PROFILE("cuTexRefSetAddress2D");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetAddress2D_v3(CUtexref hTexRef, const CUDA_ARRAY_DESCRIPTOR *desc,
                                                             CUdeviceptr dptr, size_t Pitch) {
    HOOK_TRACE_PROFILE("cuTexRefSetAddress2D_v3");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetFormat(CUtexref hTexRef, CUarray_format fmt, int NumPackedComponents) {
    HOOK_TRACE_PROFILE("cuTexRefSetFormat");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetAddressMode(CUtexref hTexRef, int dim, CUaddress_mode am) {
    HOOK_TRACE_PROFILE("cuTexRefSetAddressMode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetFilterMode(CUtexref hTexRef, CUfilter_mode fm) {
    HOOK_TRACE_PROFILE("cuTexRefSetFilterMode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetMipmapFilterMode(CUtexref hTexRef, CUfilter_mode fm) {
    HOOK_TRACE_PROFILE("cuTexRefSetMipmapFilterMode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetMipmapLevelBias(CUtexref hTexRef, float bias) {
    HOOK_TRACE_PROFILE("cuTexRefSetMipmapLevelBias");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetMipmapLevelClamp(CUtexref hTexRef, float minMipmapLevelClamp,
                                                                 float maxMipmapLevelClamp) {
    HOOK_TRACE_PROFILE("cuTexRefSetMipmapLevelClamp");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetMaxAnisotropy(CUtexref hTexRef, unsigned int maxAniso) {
    HOOK_TRACE_PROFILE("cuTexRefSetMaxAnisotropy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetBorderColor(CUtexref hTexRef, float *pBorderColor) {
    HOOK_TRACE_PROFILE("cuTexRefSetBorderColor");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetFlags(CUtexref hTexRef, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuTexRefSetFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetAddress(CUdeviceptr *pdptr, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetAddress");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetAddress_v2(CUdeviceptr *pdptr, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetAddress_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetArray(CUarray *phArray, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetMipmappedArray(CUmipmappedArray *phMipmappedArray, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetMipmappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetAddressMode(CUaddress_mode *pam, CUtexref hTexRef, int dim) {
    HOOK_TRACE_PROFILE("cuTexRefGetAddressMode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetFilterMode(CUfilter_mode *pfm, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetFilterMode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetFormat(CUarray_format *pFormat, int *pNumChannels, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetFormat");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetMipmapFilterMode(CUfilter_mode *pfm, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetMipmapFilterMode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetMipmapLevelBias(float *pbias, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetMipmapLevelBias");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetMipmapLevelClamp(float *pminMipmapLevelClamp,
                                                                 float *pmaxMipmapLevelClamp, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetMipmapLevelClamp");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetMaxAnisotropy(int *pmaxAniso, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetMaxAnisotropy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetBorderColor(float *pBorderColor, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetBorderColor");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefGetFlags(unsigned int *pFlags, CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefGetFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefCreate(CUtexref *pTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefDestroy(CUtexref hTexRef) {
    HOOK_TRACE_PROFILE("cuTexRefDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuSurfRefSetArray(CUsurfref hSurfRef, CUarray hArray, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuSurfRefSetArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuSurfRefGetArray(CUarray *phArray, CUsurfref hSurfRef) {
    HOOK_TRACE_PROFILE("cuSurfRefGetArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexObjectCreate(CUtexObject *pTexObject, const CUDA_RESOURCE_DESC *pResDesc,
                                                       const CUDA_TEXTURE_DESC *pTexDesc,
                                                       const CUDA_RESOURCE_VIEW_DESC *pResViewDesc) {
    HOOK_TRACE_PROFILE("cuTexObjectCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexObjectDestroy(CUtexObject texObject) {
    HOOK_TRACE_PROFILE("cuTexObjectDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexObjectGetResourceDesc(CUDA_RESOURCE_DESC *pResDesc, CUtexObject texObject) {
    HOOK_TRACE_PROFILE("cuTexObjectGetResourceDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexObjectGetTextureDesc(CUDA_TEXTURE_DESC *pTexDesc, CUtexObject texObject) {
    HOOK_TRACE_PROFILE("cuTexObjectGetTextureDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexObjectGetResourceViewDesc(CUDA_RESOURCE_VIEW_DESC *pResViewDesc,
                                                                    CUtexObject texObject) {
    HOOK_TRACE_PROFILE("cuTexObjectGetResourceViewDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuSurfObjectCreate(CUsurfObject *pSurfObject, const CUDA_RESOURCE_DESC *pResDesc) {
    HOOK_TRACE_PROFILE("cuSurfObjectCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuSurfObjectDestroy(CUsurfObject surfObject) {
    HOOK_TRACE_PROFILE("cuSurfObjectDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuSurfObjectGetResourceDesc(CUDA_RESOURCE_DESC *pResDesc,
                                                                 CUsurfObject surfObject) {
    HOOK_TRACE_PROFILE("cuSurfObjectGetResourceDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceCanAccessPeer(int *canAccessPeer, CUdevice dev, CUdevice peerDev) {
    HOOK_TRACE_PROFILE("cuDeviceCanAccessPeer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxEnablePeerAccess(CUcontext peerContext, unsigned int Flags) {
    HOOK_TRACE_PROFILE("cuCtxEnablePeerAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuCtxDisablePeerAccess(CUcontext peerContext) {
    HOOK_TRACE_PROFILE("cuCtxDisablePeerAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuDeviceGetP2PAttribute(int *value, CUdevice_P2PAttribute attrib,
                                                             CUdevice srcDevice, CUdevice dstDevice) {
    HOOK_TRACE_PROFILE("cuDeviceGetP2PAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphicsUnregisterResource(CUgraphicsResource resource) {
    HOOK_TRACE_PROFILE("cuGraphicsUnregisterResource");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphicsSubResourceGetMappedArray(CUarray *pArray, CUgraphicsResource resource,
                                                                         unsigned int arrayIndex,
                                                                         unsigned int mipLevel) {
    HOOK_TRACE_PROFILE("cuGraphicsSubResourceGetMappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphicsResourceGetMappedMipmappedArray(CUmipmappedArray *pMipmappedArray,
                                                                               CUgraphicsResource resource) {
    HOOK_TRACE_PROFILE("cuGraphicsResourceGetMappedMipmappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphicsResourceGetMappedPointer(CUdeviceptr *pDevPtr, size_t *pSize,
                                                                        CUgraphicsResource resource) {
    HOOK_TRACE_PROFILE("cuGraphicsResourceGetMappedPointer");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr *pDevPtr, size_t *pSize,
                                                                           CUgraphicsResource resource) {
    HOOK_TRACE_PROFILE("cuGraphicsResourceGetMappedPointer_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphicsResourceSetMapFlags(CUgraphicsResource resource, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuGraphicsResourceSetMapFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

// manually add
HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphicsResourceSetMapFlags_v2(CUgraphicsResource resource, unsigned int flags) {
    HOOK_TRACE_PROFILE("cuGraphicsResourceSetMapFlags_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphicsMapResources(unsigned int count, CUgraphicsResource *resources,
                                                            CUstream hStream) {
    HOOK_TRACE_PROFILE("cuGraphicsMapResources");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGraphicsUnmapResources(unsigned int count, CUgraphicsResource *resources,
                                                              CUstream hStream) {
    HOOK_TRACE_PROFILE("cuGraphicsUnmapResources");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGetExportTable(const void **ppExportTable, const CUuuid *pExportTableId) {
    HOOK_TRACE_PROFILE("cuGetExportTable");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuTexRefSetAddress2D_v2(CUtexref hTexRef, const CUDA_ARRAY_DESCRIPTOR *desc,
                                                             CUdeviceptr dptr, size_t Pitch) {
    HOOK_TRACE_PROFILE("cuTexRefSetAddress2D_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyHtoD_v2(CUdeviceptr dstDevice, const void *srcHost, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyHtoD_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoH_v2(void *dstHost, CUdeviceptr srcDevice, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoH_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoD_v2(CUdeviceptr dstDevice, CUdeviceptr srcDevice, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoD_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoA_v2(CUarray dstArray, size_t dstOffset, CUdeviceptr srcDevice,
                                                     size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoA_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyAtoD_v2(CUdeviceptr dstDevice, CUarray srcArray, size_t srcOffset,
                                                     size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyAtoD_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyHtoA_v2(CUarray dstArray, size_t dstOffset, const void *srcHost,
                                                     size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyHtoA_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyAtoH_v2(void *dstHost, CUarray srcArray, size_t srcOffset,
                                                     size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyAtoH_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyAtoA_v2(CUarray dstArray, size_t dstOffset, CUarray srcArray,
                                                     size_t srcOffset, size_t ByteCount) {
    HOOK_TRACE_PROFILE("cuMemcpyAtoA_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyHtoAAsync_v2(CUarray dstArray, size_t dstOffset, const void *srcHost,
                                                          size_t ByteCount, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyHtoAAsync_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyAtoHAsync_v2(void *dstHost, CUarray srcArray, size_t srcOffset,
                                                          size_t ByteCount, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyAtoHAsync_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D *pCopy) {
    HOOK_TRACE_PROFILE("cuMemcpy2D_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D *pCopy) {
    HOOK_TRACE_PROFILE("cuMemcpy2DUnaligned_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D *pCopy) {
    HOOK_TRACE_PROFILE("cuMemcpy3D_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr dstDevice, const void *srcHost, size_t ByteCount,
                                                          CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyHtoDAsync_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoHAsync_v2(void *dstHost, CUdeviceptr srcDevice, size_t ByteCount,
                                                          CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoHAsync_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr dstDevice, CUdeviceptr srcDevice,
                                                          size_t ByteCount, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpyDtoDAsync_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D *pCopy, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpy2DAsync_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D *pCopy, CUstream hStream) {
    HOOK_TRACE_PROFILE("cuMemcpy3DAsync_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD8_v2(CUdeviceptr dstDevice, unsigned char uc, size_t N) {
    HOOK_TRACE_PROFILE("cuMemsetD8_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD16_v2(CUdeviceptr dstDevice, unsigned short us, size_t N) {
    HOOK_TRACE_PROFILE("cuMemsetD16_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD32_v2(CUdeviceptr dstDevice, unsigned int ui, size_t N) {
    HOOK_TRACE_PROFILE("cuMemsetD32_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD2D8_v2(CUdeviceptr dstDevice, size_t dstPitch, unsigned char uc,
                                                     size_t Width, size_t Height) {
    HOOK_TRACE_PROFILE("cuMemsetD2D8_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD2D16_v2(CUdeviceptr dstDevice, size_t dstPitch, unsigned short us,
                                                      size_t Width, size_t Height) {
    HOOK_TRACE_PROFILE("cuMemsetD2D16_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuMemsetD2D32_v2(CUdeviceptr dstDevice, size_t dstPitch, unsigned int ui,
                                                      size_t Width, size_t Height) {
    HOOK_TRACE_PROFILE("cuMemsetD2D32_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamBeginCapture_ptsz(CUstream hStream) {
    HOOK_TRACE_PROFILE("cuStreamBeginCapture_ptsz");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuStreamBeginCapture_v2(CUstream hStream, CUstreamCaptureMode mode) {
    HOOK_TRACE_PROFILE("cuStreamBeginCapture_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGetProcAddress_ptsz(const char *symbol, void **funcPtr, int driverVersion,
                                                           cuuint64_t flags) {
    HOOK_TRACE_PROFILE("cuGetProcAddress_ptsz");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGetProcAddress(const char *symbol, void **pfn, int cudaVersion,
                                                      cuuint64_t flags) {
    HOOK_TRACE_PROFILE("cuGetProcAddress");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT CUresult cuGetProcAddress_v2(const char *symbol, void **pfn, int cudaVersion,
                                                        cuuint64_t flags,
                                                        CUdriverProcAddressQueryResult *symbolStatus) {
    HOOK_TRACE_PROFILE("cuGetProcAddress_v2");
    return CUDA_ERROR_INVALID_VALUE;
}
