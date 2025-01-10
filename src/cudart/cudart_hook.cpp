#include "cudart_subset.h"
#include "macro_common.h"
#include "trace_profile.h"

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceReset() {
    HOOK_TRACE_PROFILE("cudaDeviceReset");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSynchronize() {
    HOOK_TRACE_PROFILE("cudaDeviceSynchronize");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetLimit(enum cudaLimit limit, size_t value) {
    HOOK_TRACE_PROFILE("cudaDeviceSetLimit");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetLimit(size_t *pValue, enum cudaLimit limit) {
    HOOK_TRACE_PROFILE("cudaDeviceGetLimit");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetTexture1DLinearMaxWidth(
    size_t *maxWidthInElements, const struct cudaChannelFormatDesc *fmtDesc, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetTexture1DLinearMaxWidth");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetCacheConfig(enum cudaFuncCache *pCacheConfig) {
    HOOK_TRACE_PROFILE("cudaDeviceGetCacheConfig");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetStreamPriorityRange(int *leastPriority, int *greatestPriority) {
    HOOK_TRACE_PROFILE("cudaDeviceGetStreamPriorityRange");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetCacheConfig(enum cudaFuncCache cacheConfig) {
    HOOK_TRACE_PROFILE("cudaDeviceSetCacheConfig");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetSharedMemConfig(enum cudaSharedMemConfig *pConfig) {
    HOOK_TRACE_PROFILE("cudaDeviceGetSharedMemConfig");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetSharedMemConfig(enum cudaSharedMemConfig config) {
    HOOK_TRACE_PROFILE("cudaDeviceSetSharedMemConfig");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetByPCIBusId(int *device, const char *pciBusId) {
    HOOK_TRACE_PROFILE("cudaDeviceGetByPCIBusId");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetPCIBusId(char *pciBusId, int len, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetPCIBusId");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t *handle, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaIpcGetEventHandle");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcOpenEventHandle(cudaEvent_t *event, cudaIpcEventHandle_t handle) {
    HOOK_TRACE_PROFILE("cudaIpcOpenEventHandle");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t *handle, void *devPtr) {
    HOOK_TRACE_PROFILE("cudaIpcGetMemHandle");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcOpenMemHandle(void **devPtr, cudaIpcMemHandle_t handle,
                                                             unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaIpcOpenMemHandle");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcCloseMemHandle(void *devPtr) {
    HOOK_TRACE_PROFILE("cudaIpcCloseMemHandle");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceFlushGPUDirectRDMAWrites(
    enum cudaFlushGPUDirectRDMAWritesTarget target, enum cudaFlushGPUDirectRDMAWritesScope scope) {
    HOOK_TRACE_PROFILE("cudaDeviceFlushGPUDirectRDMAWrites");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadExit() {
    HOOK_TRACE_PROFILE("cudaThreadExit");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadSynchronize() {
    HOOK_TRACE_PROFILE("cudaThreadSynchronize");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadSetLimit(enum cudaLimit limit, size_t value) {
    HOOK_TRACE_PROFILE("cudaThreadSetLimit");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadGetLimit(size_t *pValue, enum cudaLimit limit) {
    HOOK_TRACE_PROFILE("cudaThreadGetLimit");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadGetCacheConfig(enum cudaFuncCache *pCacheConfig) {
    HOOK_TRACE_PROFILE("cudaThreadGetCacheConfig");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadSetCacheConfig(enum cudaFuncCache cacheConfig) {
    HOOK_TRACE_PROFILE("cudaThreadSetCacheConfig");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetLastError() {
    HOOK_TRACE_PROFILE("cudaGetLastError");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaPeekAtLastError() {
    HOOK_TRACE_PROFILE("cudaPeekAtLastError");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT const char *cudaGetErrorName(cudaError_t error) {
    HOOK_TRACE_PROFILE("cudaGetErrorName");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT const char *cudaGetErrorString(cudaError_t error) {
    HOOK_TRACE_PROFILE("cudaGetErrorString");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDeviceCount(int *count) {
    HOOK_TRACE_PROFILE("cudaGetDeviceCount");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device) {
    HOOK_TRACE_PROFILE("cudaGetDeviceProperties");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetAttribute(int *value, enum cudaDeviceAttr attr, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetDefaultMemPool(cudaMemPool_t *memPool, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetDefaultMemPool");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetMemPool(int device, cudaMemPool_t memPool) {
    HOOK_TRACE_PROFILE("cudaDeviceSetMemPool");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetMemPool(cudaMemPool_t *memPool, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetMemPool");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetNvSciSyncAttributes(void *nvSciSyncAttrList, int device,
                                                                         int flags) {
    HOOK_TRACE_PROFILE("cudaDeviceGetNvSciSyncAttributes");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetP2PAttribute(int *value, enum cudaDeviceP2PAttr attr,
                                                                  int srcDevice, int dstDevice) {
    HOOK_TRACE_PROFILE("cudaDeviceGetP2PAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaChooseDevice(int *device, const struct cudaDeviceProp *prop) {
    HOOK_TRACE_PROFILE("cudaChooseDevice");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetDevice(int device) {
    HOOK_TRACE_PROFILE("cudaSetDevice");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDevice(int *device) {
    HOOK_TRACE_PROFILE("cudaGetDevice");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetValidDevices(int *device_arr, int len) {
    HOOK_TRACE_PROFILE("cudaSetValidDevices");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetDeviceFlags(unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaSetDeviceFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDeviceFlags(unsigned int *flags) {
    HOOK_TRACE_PROFILE("cudaGetDeviceFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamCreate(cudaStream_t *pStream) {
    HOOK_TRACE_PROFILE("cudaStreamCreate");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamCreateWithFlags(cudaStream_t *pStream, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamCreateWithFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamCreateWithPriority(cudaStream_t *pStream, unsigned int flags,
                                                                     int priority) {
    HOOK_TRACE_PROFILE("cudaStreamCreateWithPriority");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int *priority) {
    HOOK_TRACE_PROFILE("cudaStreamGetPriority");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned int *flags) {
    HOOK_TRACE_PROFILE("cudaStreamGetFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaCtxResetPersistingL2Cache() {
    HOOK_TRACE_PROFILE("cudaCtxResetPersistingL2Cache");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src) {
    HOOK_TRACE_PROFILE("cudaStreamCopyAttributes");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetAttribute(cudaStream_t hStream, enum cudaStreamAttrID attr,
                                                               union cudaStreamAttrValue *value_out) {
    HOOK_TRACE_PROFILE("cudaStreamGetAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamSetAttribute(cudaStream_t hStream, enum cudaStreamAttrID attr,
                                                               const union cudaStreamAttrValue *value) {
    HOOK_TRACE_PROFILE("cudaStreamSetAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamDestroy(cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaStreamDestroy");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event,
                                                            unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamWaitEvent");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback,
                                                              void *userData, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamAddCallback");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamSynchronize(cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaStreamSynchronize");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamQuery(cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaStreamQuery");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void *devPtr, size_t length,
                                                                 unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamAttachMemAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamBeginCapture(cudaStream_t stream, enum cudaStreamCaptureMode mode) {
    HOOK_TRACE_PROFILE("cudaStreamBeginCapture");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadExchangeStreamCaptureMode(enum cudaStreamCaptureMode *mode) {
    HOOK_TRACE_PROFILE("cudaThreadExchangeStreamCaptureMode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t *pGraph) {
    HOOK_TRACE_PROFILE("cudaStreamEndCapture");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamIsCapturing(cudaStream_t stream,
                                                              enum cudaStreamCaptureStatus *pCaptureStatus) {
    HOOK_TRACE_PROFILE("cudaStreamIsCapturing");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetCaptureInfo(cudaStream_t stream,
                                                                 enum cudaStreamCaptureStatus *pCaptureStatus,
                                                                 unsigned long long *pId) {
    HOOK_TRACE_PROFILE("cudaStreamGetCaptureInfo");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetCaptureInfo_v2(cudaStream_t stream,
                                                                    enum cudaStreamCaptureStatus *captureStatus_out,
                                                                    unsigned long long *id_out, cudaGraph_t *graph_out,
                                                                    const cudaGraphNode_t **dependencies_out,
                                                                    size_t *numDependencies_out) {
    HOOK_TRACE_PROFILE("cudaStreamGetCaptureInfo_v2");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamUpdateCaptureDependencies(cudaStream_t stream,
                                                                            cudaGraphNode_t *dependencies,
                                                                            size_t numDependencies,
                                                                            unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamUpdateCaptureDependencies");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventCreate(cudaEvent_t *event) {
    HOOK_TRACE_PROFILE("cudaEventCreate");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventCreateWithFlags(cudaEvent_t *event, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaEventCreateWithFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaEventRecord");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream,
                                                                 unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaEventRecordWithFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventQuery(cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaEventQuery");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventSynchronize(cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaEventSynchronize");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventDestroy(cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaEventDestroy");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end) {
    HOOK_TRACE_PROFILE("cudaEventElapsedTime");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaImportExternalMemory(
    cudaExternalMemory_t *extMem_out, const struct cudaExternalMemoryHandleDesc *memHandleDesc) {
    HOOK_TRACE_PROFILE("cudaImportExternalMemory");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaExternalMemoryGetMappedBuffer(
    void **devPtr, cudaExternalMemory_t extMem, const struct cudaExternalMemoryBufferDesc *bufferDesc) {
    HOOK_TRACE_PROFILE("cudaExternalMemoryGetMappedBuffer");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t
    cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t *mipmap, cudaExternalMemory_t extMem,
                                              const struct cudaExternalMemoryMipmappedArrayDesc *mipmapDesc) {
    HOOK_TRACE_PROFILE("cudaExternalMemoryGetMappedMipmappedArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDestroyExternalMemory(cudaExternalMemory_t extMem) {
    HOOK_TRACE_PROFILE("cudaDestroyExternalMemory");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaImportExternalSemaphore(
    cudaExternalSemaphore_t *extSem_out, const struct cudaExternalSemaphoreHandleDesc *semHandleDesc) {
    HOOK_TRACE_PROFILE("cudaImportExternalSemaphore");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSignalExternalSemaphoresAsync(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaSignalExternalSemaphoresAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaWaitExternalSemaphoresAsync(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaWaitExternalSemaphoresAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem) {
    HOOK_TRACE_PROFILE("cudaDestroyExternalSemaphore");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaLaunchKernel(const void *func, dim3 gridDim, dim3 blockDim, void **args,
                                                         size_t sharedMem, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaLaunchKernel");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaLaunchCooperativeKernel(const void *func, dim3 gridDim, dim3 blockDim,
                                                                    void **args, size_t sharedMem,
                                                                    cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaLaunchCooperativeKernel");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaLaunchCooperativeKernelMultiDevice(
    struct cudaLaunchParams *launchParamsList, unsigned int numDevices, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaLaunchCooperativeKernelMultiDevice");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFuncSetCacheConfig(const void *func, enum cudaFuncCache cacheConfig) {
    HOOK_TRACE_PROFILE("cudaFuncSetCacheConfig");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFuncSetSharedMemConfig(const void *func, enum cudaSharedMemConfig config) {
    HOOK_TRACE_PROFILE("cudaFuncSetSharedMemConfig");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFuncGetAttributes(struct cudaFuncAttributes *attr, const void *func) {
    HOOK_TRACE_PROFILE("cudaFuncGetAttributes");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFuncSetAttribute(const void *func, enum cudaFuncAttribute attr, int value) {
    HOOK_TRACE_PROFILE("cudaFuncSetAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetDoubleForDevice(double *d) {
    HOOK_TRACE_PROFILE("cudaSetDoubleForDevice");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetDoubleForHost(double *d) {
    HOOK_TRACE_PROFILE("cudaSetDoubleForHost");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void *userData) {
    HOOK_TRACE_PROFILE("cudaLaunchHostFunc");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *numBlocks, const void *func,
                                                                                      int blockSize,
                                                                                      size_t dynamicSMemSize) {
    HOOK_TRACE_PROFILE("cudaOccupancyMaxActiveBlocksPerMultiprocessor");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaOccupancyAvailableDynamicSMemPerBlock(size_t *dynamicSmemSize,
                                                                                  const void *func, int numBlocks,
                                                                                  int blockSize) {
    HOOK_TRACE_PROFILE("cudaOccupancyAvailableDynamicSMemPerBlock");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(
    int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocManaged(void **devPtr, size_t size, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMallocManaged");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMalloc(void **devPtr, size_t size) {
    HOOK_TRACE_PROFILE("cudaMalloc");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocHost(void **ptr, size_t size) {
    HOOK_TRACE_PROFILE("cudaMallocHost");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height) {
    HOOK_TRACE_PROFILE("cudaMallocPitch");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocArray(cudaArray_t *array, const struct cudaChannelFormatDesc *desc,
                                                        size_t width, size_t height, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMallocArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFree(void *devPtr) {
    HOOK_TRACE_PROFILE("cudaFree");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFreeHost(void *ptr) {
    HOOK_TRACE_PROFILE("cudaFreeHost");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFreeArray(cudaArray_t array) {
    HOOK_TRACE_PROFILE("cudaFreeArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray) {
    HOOK_TRACE_PROFILE("cudaFreeMipmappedArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostAlloc(void **pHost, size_t size, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaHostAlloc");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostRegister(void *ptr, size_t size, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaHostRegister");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostUnregister(void *ptr) {
    HOOK_TRACE_PROFILE("cudaHostUnregister");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostGetDevicePointer(void **pDevice, void *pHost, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaHostGetDevicePointer");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostGetFlags(unsigned int *pFlags, void *pHost) {
    HOOK_TRACE_PROFILE("cudaHostGetFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMalloc3D(struct cudaPitchedPtr *pitchedDevPtr, struct cudaExtent extent) {
    HOOK_TRACE_PROFILE("cudaMalloc3D");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMalloc3DArray(cudaArray_t *array, const struct cudaChannelFormatDesc *desc,
                                                          struct cudaExtent extent, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMalloc3DArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t *mipmappedArray,
                                                                 const struct cudaChannelFormatDesc *desc,
                                                                 struct cudaExtent extent, unsigned int numLevels,
                                                                 unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMallocMipmappedArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t *levelArray,
                                                                   cudaMipmappedArray_const_t mipmappedArray,
                                                                   unsigned int level) {
    HOOK_TRACE_PROFILE("cudaGetMipmappedArrayLevel");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy3D(const struct cudaMemcpy3DParms *p) {
    HOOK_TRACE_PROFILE("cudaMemcpy3D");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy3DPeer(const struct cudaMemcpy3DPeerParms *p) {
    HOOK_TRACE_PROFILE("cudaMemcpy3DPeer");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy3DAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy3DPeerAsync(const struct cudaMemcpy3DPeerParms *p,
                                                              cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy3DPeerAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemGetInfo(size_t *free, size_t *total) {
    HOOK_TRACE_PROFILE("cudaMemGetInfo");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaArrayGetInfo(struct cudaChannelFormatDesc *desc, struct cudaExtent *extent,
                                                         unsigned int *flags, cudaArray_t array) {
    HOOK_TRACE_PROFILE("cudaArrayGetInfo");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaArrayGetPlane(cudaArray_t *pPlaneArray, cudaArray_t hArray,
                                                          unsigned int planeIdx) {
    HOOK_TRACE_PROFILE("cudaArrayGetPlane");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaArrayGetSparseProperties(struct cudaArraySparseProperties *sparseProperties,
                                                                     cudaArray_t array) {
    HOOK_TRACE_PROFILE("cudaArrayGetSparseProperties");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMipmappedArrayGetSparseProperties(
    struct cudaArraySparseProperties *sparseProperties, cudaMipmappedArray_t mipmap) {
    HOOK_TRACE_PROFILE("cudaMipmappedArrayGetSparseProperties");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyPeer(void *dst, int dstDevice, const void *src, int srcDevice,
                                                       size_t count) {
    HOOK_TRACE_PROFILE("cudaMemcpyPeer");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch,
                                                     size_t width, size_t height, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy2D");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset,
                                                            const void *src, size_t spitch, size_t width, size_t height,
                                                            enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DToArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DFromArray(void *dst, size_t dpitch, cudaArray_const_t src,
                                                              size_t wOffset, size_t hOffset, size_t width,
                                                              size_t height, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DFromArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst,
                                                                 cudaArray_const_t src, size_t wOffsetSrc,
                                                                 size_t hOffsetSrc, size_t width, size_t height,
                                                                 enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DArrayToArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyToSymbol(const void *symbol, const void *src, size_t count,
                                                           size_t offset, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyToSymbol");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyFromSymbol(void *dst, const void *symbol, size_t count, size_t offset,
                                                             enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyFromSymbol");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyAsync(void *dst, const void *src, size_t count,
                                                        enum cudaMemcpyKind kind, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyPeerAsync(void *dst, int dstDevice, const void *src, int srcDevice,
                                                            size_t count, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyPeerAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch,
                                                          size_t width, size_t height, enum cudaMemcpyKind kind,
                                                          cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset,
                                                                 const void *src, size_t spitch, size_t width,
                                                                 size_t height, enum cudaMemcpyKind kind,
                                                                 cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DToArrayAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, cudaArray_const_t src,
                                                                   size_t wOffset, size_t hOffset, size_t width,
                                                                   size_t height, enum cudaMemcpyKind kind,
                                                                   cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DFromArrayAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyToSymbolAsync(const void *symbol, const void *src, size_t count,
                                                                size_t offset, enum cudaMemcpyKind kind,
                                                                cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyToSymbolAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyFromSymbolAsync(void *dst, const void *symbol, size_t count,
                                                                  size_t offset, enum cudaMemcpyKind kind,
                                                                  cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyFromSymbolAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset(void *devPtr, int value, size_t count) {
    HOOK_TRACE_PROFILE("cudaMemset");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset2D(void *devPtr, size_t pitch, int value, size_t width,
                                                     size_t height) {
    HOOK_TRACE_PROFILE("cudaMemset2D");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset3D(struct cudaPitchedPtr pitchedDevPtr, int value,
                                                     struct cudaExtent extent) {
    HOOK_TRACE_PROFILE("cudaMemset3D");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemsetAsync(void *devPtr, int value, size_t count, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemsetAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset2DAsync(void *devPtr, size_t pitch, int value, size_t width,
                                                          size_t height, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemset2DAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset3DAsync(struct cudaPitchedPtr pitchedDevPtr, int value,
                                                          struct cudaExtent extent, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemset3DAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetSymbolAddress(void **devPtr, const void *symbol) {
    HOOK_TRACE_PROFILE("cudaGetSymbolAddress");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetSymbolSize(size_t *size, const void *symbol) {
    HOOK_TRACE_PROFILE("cudaGetSymbolSize");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPrefetchAsync(const void *devPtr, size_t count, int dstDevice,
                                                             cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemPrefetchAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemAdvise(const void *devPtr, size_t count, enum cudaMemoryAdvise advice,
                                                      int device) {
    HOOK_TRACE_PROFILE("cudaMemAdvise");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemRangeGetAttribute(void *data, size_t dataSize,
                                                                 enum cudaMemRangeAttribute attribute,
                                                                 const void *devPtr, size_t count) {
    HOOK_TRACE_PROFILE("cudaMemRangeGetAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemRangeGetAttributes(void **data, size_t *dataSizes,
                                                                  enum cudaMemRangeAttribute *attributes,
                                                                  size_t numAttributes, const void *devPtr,
                                                                  size_t count) {
    HOOK_TRACE_PROFILE("cudaMemRangeGetAttributes");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset,
                                                          const void *src, size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyToArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyFromArray(void *dst, cudaArray_const_t src, size_t wOffset,
                                                            size_t hOffset, size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyFromArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst,
                                                               cudaArray_const_t src, size_t wOffsetSrc,
                                                               size_t hOffsetSrc, size_t count,
                                                               enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyArrayToArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset,
                                                               const void *src, size_t count, enum cudaMemcpyKind kind,
                                                               cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyToArrayAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyFromArrayAsync(void *dst, cudaArray_const_t src, size_t wOffset,
                                                                 size_t hOffset, size_t count, enum cudaMemcpyKind kind,
                                                                 cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyFromArrayAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocAsync(void **devPtr, size_t size, cudaStream_t hStream) {
    HOOK_TRACE_PROFILE("cudaMallocAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFreeAsync(void *devPtr, cudaStream_t hStream) {
    HOOK_TRACE_PROFILE("cudaFreeAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep) {
    HOOK_TRACE_PROFILE("cudaMemPoolTrimTo");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolSetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr,
                                                                void *value) {
    HOOK_TRACE_PROFILE("cudaMemPoolSetAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolGetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr,
                                                                void *value) {
    HOOK_TRACE_PROFILE("cudaMemPoolGetAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolSetAccess(cudaMemPool_t memPool,
                                                             const struct cudaMemAccessDesc *descList, size_t count) {
    HOOK_TRACE_PROFILE("cudaMemPoolSetAccess");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolGetAccess(enum cudaMemAccessFlags *flags, cudaMemPool_t memPool,
                                                             struct cudaMemLocation *location) {
    HOOK_TRACE_PROFILE("cudaMemPoolGetAccess");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolCreate(cudaMemPool_t *memPool,
                                                          const struct cudaMemPoolProps *poolProps) {
    HOOK_TRACE_PROFILE("cudaMemPoolCreate");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolDestroy(cudaMemPool_t memPool) {
    HOOK_TRACE_PROFILE("cudaMemPoolDestroy");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocFromPoolAsync(void **ptr, size_t size, cudaMemPool_t memPool,
                                                                cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMallocFromPoolAsync");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolExportToShareableHandle(void *shareableHandle, cudaMemPool_t memPool,
                                                                           enum cudaMemAllocationHandleType handleType,
                                                                           unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMemPoolExportToShareableHandle");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolImportFromShareableHandle(
    cudaMemPool_t *memPool, void *shareableHandle, enum cudaMemAllocationHandleType handleType, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMemPoolImportFromShareableHandle");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolExportPointer(struct cudaMemPoolPtrExportData *exportData,
                                                                 void *ptr) {
    HOOK_TRACE_PROFILE("cudaMemPoolExportPointer");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolImportPointer(void **ptr, cudaMemPool_t memPool,
                                                                 struct cudaMemPoolPtrExportData *exportData) {
    HOOK_TRACE_PROFILE("cudaMemPoolImportPointer");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaPointerGetAttributes(struct cudaPointerAttributes *attributes,
                                                                 const void *ptr) {
    HOOK_TRACE_PROFILE("cudaPointerGetAttributes");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceCanAccessPeer(int *canAccessPeer, int device, int peerDevice) {
    HOOK_TRACE_PROFILE("cudaDeviceCanAccessPeer");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaDeviceEnablePeerAccess");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceDisablePeerAccess(int peerDevice) {
    HOOK_TRACE_PROFILE("cudaDeviceDisablePeerAccess");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource) {
    HOOK_TRACE_PROFILE("cudaGraphicsUnregisterResource");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource,
                                                                        unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaGraphicsResourceSetMapFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t *resources,
                                                                 cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaGraphicsMapResources");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t *resources,
                                                                   cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaGraphicsUnmapResources");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsResourceGetMappedPointer(void **devPtr, size_t *size,
                                                                             cudaGraphicsResource_t resource) {
    HOOK_TRACE_PROFILE("cudaGraphicsResourceGetMappedPointer");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t *array,
                                                                              cudaGraphicsResource_t resource,
                                                                              unsigned int arrayIndex,
                                                                              unsigned int mipLevel) {
    HOOK_TRACE_PROFILE("cudaGraphicsSubResourceGetMappedArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t
    cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t *mipmappedArray, cudaGraphicsResource_t resource) {
    HOOK_TRACE_PROFILE("cudaGraphicsResourceGetMappedMipmappedArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindTexture(size_t *offset, const struct textureReference *texref,
                                                        const void *devPtr, const struct cudaChannelFormatDesc *desc,
                                                        size_t size) {
    HOOK_TRACE_PROFILE("cudaBindTexture");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindTexture2D(size_t *offset, const struct textureReference *texref,
                                                          const void *devPtr, const struct cudaChannelFormatDesc *desc,
                                                          size_t width, size_t height, size_t pitch) {
    HOOK_TRACE_PROFILE("cudaBindTexture2D");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindTextureToArray(const struct textureReference *texref,
                                                               cudaArray_const_t array,
                                                               const struct cudaChannelFormatDesc *desc) {
    HOOK_TRACE_PROFILE("cudaBindTextureToArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindTextureToMipmappedArray(const struct textureReference *texref,
                                                                        cudaMipmappedArray_const_t mipmappedArray,
                                                                        const struct cudaChannelFormatDesc *desc) {
    HOOK_TRACE_PROFILE("cudaBindTextureToMipmappedArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaUnbindTexture(const struct textureReference *texref) {
    HOOK_TRACE_PROFILE("cudaUnbindTexture");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureAlignmentOffset(size_t *offset,
                                                                      const struct textureReference *texref) {
    HOOK_TRACE_PROFILE("cudaGetTextureAlignmentOffset");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureReference(const struct textureReference **texref,
                                                                const void *symbol) {
    HOOK_TRACE_PROFILE("cudaGetTextureReference");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindSurfaceToArray(const struct surfaceReference *surfref,
                                                               cudaArray_const_t array,
                                                               const struct cudaChannelFormatDesc *desc) {
    HOOK_TRACE_PROFILE("cudaBindSurfaceToArray");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetSurfaceReference(const struct surfaceReference **surfref,
                                                                const void *symbol) {
    HOOK_TRACE_PROFILE("cudaGetSurfaceReference");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetChannelDesc(struct cudaChannelFormatDesc *desc,
                                                           cudaArray_const_t array) {
    HOOK_TRACE_PROFILE("cudaGetChannelDesc");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT struct cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w,
                                                                               enum cudaChannelFormatKind f) {
    HOOK_TRACE_PROFILE("cudaCreateChannelDesc");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaCreateTextureObject(cudaTextureObject_t *pTexObject,
                                                                const struct cudaResourceDesc *pResDesc,
                                                                const struct cudaTextureDesc *pTexDesc,
                                                                const struct cudaResourceViewDesc *pResViewDesc) {
    HOOK_TRACE_PROFILE("cudaCreateTextureObject");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject) {
    HOOK_TRACE_PROFILE("cudaDestroyTextureObject");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureObjectResourceDesc(struct cudaResourceDesc *pResDesc,
                                                                         cudaTextureObject_t texObject) {
    HOOK_TRACE_PROFILE("cudaGetTextureObjectResourceDesc");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureObjectTextureDesc(struct cudaTextureDesc *pTexDesc,
                                                                        cudaTextureObject_t texObject) {
    HOOK_TRACE_PROFILE("cudaGetTextureObjectTextureDesc");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureObjectResourceViewDesc(struct cudaResourceViewDesc *pResViewDesc,
                                                                             cudaTextureObject_t texObject) {
    HOOK_TRACE_PROFILE("cudaGetTextureObjectResourceViewDesc");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t *pSurfObject,
                                                                const struct cudaResourceDesc *pResDesc) {
    HOOK_TRACE_PROFILE("cudaCreateSurfaceObject");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject) {
    HOOK_TRACE_PROFILE("cudaDestroySurfaceObject");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetSurfaceObjectResourceDesc(struct cudaResourceDesc *pResDesc,
                                                                         cudaSurfaceObject_t surfObject) {
    HOOK_TRACE_PROFILE("cudaGetSurfaceObjectResourceDesc");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDriverGetVersion(int *driverVersion) {
    HOOK_TRACE_PROFILE("cudaDriverGetVersion");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaRuntimeGetVersion(int *runtimeVersion) {
    HOOK_TRACE_PROFILE("cudaRuntimeGetVersion");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphCreate(cudaGraph_t *pGraph, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaGraphCreate");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddKernelNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                               const cudaGraphNode_t *pDependencies,
                                                               size_t numDependencies,
                                                               const struct cudaKernelNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddKernelNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeGetParams(cudaGraphNode_t node,
                                                                     struct cudaKernelNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeGetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeSetParams(cudaGraphNode_t node,
                                                                     const struct cudaKernelNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeCopyAttributes(cudaGraphNode_t hSrc, cudaGraphNode_t hDst) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeCopyAttributes");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeGetAttribute(cudaGraphNode_t hNode,
                                                                        enum cudaKernelNodeAttrID attr,
                                                                        union cudaKernelNodeAttrValue *value_out) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeGetAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeSetAttribute(cudaGraphNode_t hNode,
                                                                        enum cudaKernelNodeAttrID attr,
                                                                        const union cudaKernelNodeAttrValue *value) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeSetAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemcpyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                               const cudaGraphNode_t *pDependencies,
                                                               size_t numDependencies,
                                                               const struct cudaMemcpy3DParms *pCopyParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemcpyNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                       const cudaGraphNode_t *pDependencies,
                                                                       size_t numDependencies, const void *symbol,
                                                                       const void *src, size_t count, size_t offset,
                                                                       enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemcpyNodeToSymbol");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                         const cudaGraphNode_t *pDependencies,
                                                                         size_t numDependencies, void *dst,
                                                                         const void *symbol, size_t count,
                                                                         size_t offset, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemcpyNodeFromSymbol");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemcpyNode1D(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                 const cudaGraphNode_t *pDependencies,
                                                                 size_t numDependencies, void *dst, const void *src,
                                                                 size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemcpyNode1D");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node,
                                                                     struct cudaMemcpy3DParms *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeGetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node,
                                                                     const struct cudaMemcpy3DParms *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t node, const void *symbol,
                                                                             const void *src, size_t count,
                                                                             size_t offset, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeSetParamsToSymbol");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t node, void *dst,
                                                                               const void *symbol, size_t count,
                                                                               size_t offset,
                                                                               enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeSetParamsFromSymbol");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeSetParams1D(cudaGraphNode_t node, void *dst, const void *src,
                                                                       size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeSetParams1D");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemsetNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                               const cudaGraphNode_t *pDependencies,
                                                               size_t numDependencies,
                                                               const struct cudaMemsetParams *pMemsetParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemsetNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemsetNodeGetParams(cudaGraphNode_t node,
                                                                     struct cudaMemsetParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphMemsetNodeGetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemsetNodeSetParams(cudaGraphNode_t node,
                                                                     const struct cudaMemsetParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphMemsetNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddHostNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                             const cudaGraphNode_t *pDependencies,
                                                             size_t numDependencies,
                                                             const struct cudaHostNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddHostNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphHostNodeGetParams(cudaGraphNode_t node,
                                                                   struct cudaHostNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphHostNodeGetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphHostNodeSetParams(cudaGraphNode_t node,
                                                                   const struct cudaHostNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphHostNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddChildGraphNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                   const cudaGraphNode_t *pDependencies,
                                                                   size_t numDependencies, cudaGraph_t childGraph) {
    HOOK_TRACE_PROFILE("cudaGraphAddChildGraphNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t *pGraph) {
    HOOK_TRACE_PROFILE("cudaGraphChildGraphNodeGetGraph");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddEmptyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                              const cudaGraphNode_t *pDependencies,
                                                              size_t numDependencies) {
    HOOK_TRACE_PROFILE("cudaGraphAddEmptyNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddEventRecordNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                    const cudaGraphNode_t *pDependencies,
                                                                    size_t numDependencies, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphAddEventRecordNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphEventRecordNodeGetEvent(cudaGraphNode_t node, cudaEvent_t *event_out) {
    HOOK_TRACE_PROFILE("cudaGraphEventRecordNodeGetEvent");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphEventRecordNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphEventRecordNodeSetEvent");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddEventWaitNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                  const cudaGraphNode_t *pDependencies,
                                                                  size_t numDependencies, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphAddEventWaitNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphEventWaitNodeGetEvent(cudaGraphNode_t node, cudaEvent_t *event_out) {
    HOOK_TRACE_PROFILE("cudaGraphEventWaitNodeGetEvent");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphEventWaitNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphEventWaitNodeSetEvent");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddExternalSemaphoresSignalNode(
    cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies,
    const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddExternalSemaphoresSignalNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExternalSemaphoresSignalNodeGetParams(
    cudaGraphNode_t hNode, struct cudaExternalSemaphoreSignalNodeParams *params_out) {
    HOOK_TRACE_PROFILE("cudaGraphExternalSemaphoresSignalNodeGetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExternalSemaphoresSignalNodeSetParams(
    cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExternalSemaphoresSignalNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddExternalSemaphoresWaitNode(
    cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies,
    const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddExternalSemaphoresWaitNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExternalSemaphoresWaitNodeGetParams(
    cudaGraphNode_t hNode, struct cudaExternalSemaphoreWaitNodeParams *params_out) {
    HOOK_TRACE_PROFILE("cudaGraphExternalSemaphoresWaitNodeGetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExternalSemaphoresWaitNodeSetParams(
    cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExternalSemaphoresWaitNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemAllocNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                 const cudaGraphNode_t *pDependencies,
                                                                 size_t numDependencies,
                                                                 struct cudaMemAllocNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemAllocNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node,
                                                                       struct cudaMemAllocNodeParams *params_out) {
    HOOK_TRACE_PROFILE("cudaGraphMemAllocNodeGetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemFreeNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                const cudaGraphNode_t *pDependencies,
                                                                size_t numDependencies, void *dptr) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemFreeNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void *dptr_out) {
    HOOK_TRACE_PROFILE("cudaGraphMemFreeNodeGetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGraphMemTrim(int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGraphMemTrim");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr,
                                                                       void *value) {
    HOOK_TRACE_PROFILE("cudaDeviceGetGraphMemAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr,
                                                                       void *value) {
    HOOK_TRACE_PROFILE("cudaDeviceSetGraphMemAttribute");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphClone(cudaGraph_t *pGraphClone, cudaGraph_t originalGraph) {
    HOOK_TRACE_PROFILE("cudaGraphClone");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphNodeFindInClone(cudaGraphNode_t *pNode, cudaGraphNode_t originalNode,
                                                                 cudaGraph_t clonedGraph) {
    HOOK_TRACE_PROFILE("cudaGraphNodeFindInClone");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphNodeGetType(cudaGraphNode_t node, enum cudaGraphNodeType *pType) {
    HOOK_TRACE_PROFILE("cudaGraphNodeGetType");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t *nodes, size_t *numNodes) {
    HOOK_TRACE_PROFILE("cudaGraphGetNodes");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t *pRootNodes,
                                                              size_t *pNumRootNodes) {
    HOOK_TRACE_PROFILE("cudaGraphGetRootNodes");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to,
                                                          size_t *numEdges) {
    HOOK_TRACE_PROFILE("cudaGraphGetEdges");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphNodeGetDependencies(cudaGraphNode_t node,
                                                                     cudaGraphNode_t *pDependencies,
                                                                     size_t *pNumDependencies) {
    HOOK_TRACE_PROFILE("cudaGraphNodeGetDependencies");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphNodeGetDependentNodes(cudaGraphNode_t node,
                                                                       cudaGraphNode_t *pDependentNodes,
                                                                       size_t *pNumDependentNodes) {
    HOOK_TRACE_PROFILE("cudaGraphNodeGetDependentNodes");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t *from,
                                                                 const cudaGraphNode_t *to, size_t numDependencies) {
    HOOK_TRACE_PROFILE("cudaGraphAddDependencies");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t *from,
                                                                    const cudaGraphNode_t *to, size_t numDependencies) {
    HOOK_TRACE_PROFILE("cudaGraphRemoveDependencies");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphDestroyNode(cudaGraphNode_t node) {
    HOOK_TRACE_PROFILE("cudaGraphDestroyNode");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphInstantiate(cudaGraphExec_t *pGraphExec, cudaGraph_t graph,
                                                             cudaGraphNode_t *pErrorNode, char *pLogBuffer,
                                                             size_t bufferSize) {
    HOOK_TRACE_PROFILE("cudaGraphInstantiate");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphInstantiateWithFlags(cudaGraphExec_t *pGraphExec, cudaGraph_t graph,
                                                                      unsigned long long flags) {
    HOOK_TRACE_PROFILE("cudaGraphInstantiateWithFlags");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecKernelNodeSetParams(
    cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecKernelNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec,
                                                                         cudaGraphNode_t node,
                                                                         const struct cudaMemcpy3DParms *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemcpyNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t hGraphExec,
                                                                                 cudaGraphNode_t node,
                                                                                 const void *symbol, const void *src,
                                                                                 size_t count, size_t offset,
                                                                                 enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemcpyNodeSetParamsToSymbol");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t hGraphExec,
                                                                                   cudaGraphNode_t node, void *dst,
                                                                                   const void *symbol, size_t count,
                                                                                   size_t offset,
                                                                                   enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemcpyNodeSetParamsFromSymbol");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemcpyNodeSetParams1D(cudaGraphExec_t hGraphExec,
                                                                           cudaGraphNode_t node, void *dst,
                                                                           const void *src, size_t count,
                                                                           enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemcpyNodeSetParams1D");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec,
                                                                         cudaGraphNode_t node,
                                                                         const struct cudaMemsetParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemsetNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node,
                                                                       const struct cudaHostNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecHostNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecChildGraphNodeSetParams(cudaGraphExec_t hGraphExec,
                                                                             cudaGraphNode_t node,
                                                                             cudaGraph_t childGraph) {
    HOOK_TRACE_PROFILE("cudaGraphExecChildGraphNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecEventRecordNodeSetEvent(cudaGraphExec_t hGraphExec,
                                                                             cudaGraphNode_t hNode, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphExecEventRecordNodeSetEvent");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecEventWaitNodeSetEvent(cudaGraphExec_t hGraphExec,
                                                                           cudaGraphNode_t hNode, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphExecEventWaitNodeSetEvent");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecExternalSemaphoresSignalNodeSetParams(
    cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecExternalSemaphoresSignalNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecExternalSemaphoresWaitNodeSetParams(
    cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecExternalSemaphoresWaitNodeSetParams");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph,
                                                            cudaGraphNode_t *hErrorNode_out,
                                                            enum cudaGraphExecUpdateResult *updateResult_out) {
    HOOK_TRACE_PROFILE("cudaGraphExecUpdate");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphUpload(cudaGraphExec_t graphExec, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaGraphUpload");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaGraphLaunch");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecDestroy(cudaGraphExec_t graphExec) {
    HOOK_TRACE_PROFILE("cudaGraphExecDestroy");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphDestroy(cudaGraph_t graph) {
    HOOK_TRACE_PROFILE("cudaGraphDestroy");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphDebugDotPrint(cudaGraph_t graph, const char *path,
                                                               unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaGraphDebugDotPrint");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaUserObjectCreate(cudaUserObject_t *object_out, void *ptr,
                                                             cudaHostFn_t destroy, unsigned int initialRefcount,
                                                             unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaUserObjectCreate");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaUserObjectRetain(cudaUserObject_t object, unsigned int count) {
    HOOK_TRACE_PROFILE("cudaUserObjectRetain");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaUserObjectRelease(cudaUserObject_t object, unsigned int count) {
    HOOK_TRACE_PROFILE("cudaUserObjectRelease");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object,
                                                                  unsigned int count, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaGraphRetainUserObject");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object,
                                                                   unsigned int count) {
    HOOK_TRACE_PROFILE("cudaGraphReleaseUserObject");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDriverEntryPoint(const char *symbol, void **funcPtr,
                                                                unsigned long long flags) {
    HOOK_TRACE_PROFILE("cudaGetDriverEntryPoint");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetExportTable(const void **ppExportTable,
                                                           const cudaUUID_t *pExportTableId) {
    HOOK_TRACE_PROFILE("cudaGetExportTable");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetFuncBySymbol(cudaFunction_t *functionPtr, const void *symbolPtr) {
    HOOK_TRACE_PROFILE("cudaGetFuncBySymbol");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSignalExternalSemaphoresAsync_ptsz(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams_v1 *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaSignalExternalSemaphoresAsync_ptsz");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSignalExternalSemaphoresAsync_v2(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaSignalExternalSemaphoresAsync_v2");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaWaitExternalSemaphoresAsync_ptsz(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams_v1 *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaWaitExternalSemaphoresAsync_ptsz");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaWaitExternalSemaphoresAsync_v2(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaWaitExternalSemaphoresAsync_v2");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamUpdateCaptureDependencies_ptsz(cudaStream_t stream,
                                                                                 cudaGraphNode_t *dependencies,
                                                                                 size_t numDependencies,
                                                                                 unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamUpdateCaptureDependencies_ptsz");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT void **__cudaRegisterFatBinary(void *fatCubin) {
    HOOK_TRACE_PROFILE("__cudaRegisterFatBinary");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterFatBinaryEnd(void **fatCubinHandle) {
    HOOK_TRACE_PROFILE("__cudaRegisterFatBinaryEnd");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaUnregisterFatBinary(void **fatCubinHandle) {
    HOOK_TRACE_PROFILE("__cudaUnregisterFatBinary");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterVar(void **fatCubinHandle, char *hostVar, char *deviceAddress,
                                                   const char *deviceName, int ext, size_t size, int constant,
                                                   int global) {
    HOOK_TRACE_PROFILE("__cudaRegisterVar");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterManagedVar(void **fatCubinHandle, void **hostVarPtrAddress,
                                                          char *deviceAddress, const char *deviceName, int ext,
                                                          size_t size, int constant, int global) {
    HOOK_TRACE_PROFILE("__cudaRegisterManagedVar");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT char __cudaInitModule(void **fatCubinHandle) {
    HOOK_TRACE_PROFILE("__cudaInitModule");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterTexture(void **fatCubinHandle, const struct textureReference *hostVar,
                                                       const void **deviceAddress, const char *deviceName, int dim,
                                                       int norm, int ext) {
    HOOK_TRACE_PROFILE("__cudaRegisterTexture");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterSurface(void **fatCubinHandle, const struct surfaceReference *hostVar,
                                                       const void **deviceAddress, const char *deviceName, int dim,
                                                       int ext) {
    HOOK_TRACE_PROFILE("__cudaRegisterSurface");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterFunction(void **fatCubinHandle, const char *hostFun, char *deviceFun,
                                                        const char *deviceName, int thread_limit, uint3 *tid,
                                                        uint3 *bid, dim3 *bDim, dim3 *gDim, int *wSize) {
    HOOK_TRACE_PROFILE("__cudaRegisterFunction");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t __cudaPopCallConfiguration(dim3 *gridDim, dim3 *blockDim, size_t *sharedMem,
                                                                   void *stream) {
    HOOK_TRACE_PROFILE("__cudaPopCallConfiguration");
    return cudaErrorInvalidValue;
}

HOOK_C_API HOOK_DECL_EXPORT unsigned __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem,
                                                                 struct CUstream_st *stream) {
    HOOK_TRACE_PROFILE("__cudaPushCallConfiguration");
    return cudaErrorInvalidValue;
}
