#include "cudart_subset.h"
#include "hook.h"
#include "macro_common.h"
#include "trace_profile.h"

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceReset() {
    HOOK_TRACE_PROFILE("cudaDeviceReset");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSynchronize() {
    HOOK_TRACE_PROFILE("cudaDeviceSynchronize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetLimit(enum cudaLimit limit, size_t value) {
    HOOK_TRACE_PROFILE("cudaDeviceSetLimit");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetLimit(size_t *pValue, enum cudaLimit limit) {
    HOOK_TRACE_PROFILE("cudaDeviceGetLimit");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetTexture1DLinearMaxWidth(
    size_t *maxWidthInElements, const struct cudaChannelFormatDesc *fmtDesc, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetTexture1DLinearMaxWidth");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetCacheConfig(enum cudaFuncCache *pCacheConfig) {
    HOOK_TRACE_PROFILE("cudaDeviceGetCacheConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetStreamPriorityRange(int *leastPriority, int *greatestPriority) {
    HOOK_TRACE_PROFILE("cudaDeviceGetStreamPriorityRange");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetCacheConfig(enum cudaFuncCache cacheConfig) {
    HOOK_TRACE_PROFILE("cudaDeviceSetCacheConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetSharedMemConfig(enum cudaSharedMemConfig *pConfig) {
    HOOK_TRACE_PROFILE("cudaDeviceGetSharedMemConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetSharedMemConfig(enum cudaSharedMemConfig config) {
    HOOK_TRACE_PROFILE("cudaDeviceSetSharedMemConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetByPCIBusId(int *device, const char *pciBusId) {
    HOOK_TRACE_PROFILE("cudaDeviceGetByPCIBusId");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetPCIBusId(char *pciBusId, int len, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetPCIBusId");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t *handle, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaIpcGetEventHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcOpenEventHandle(cudaEvent_t *event, cudaIpcEventHandle_t handle) {
    HOOK_TRACE_PROFILE("cudaIpcOpenEventHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t *handle, void *devPtr) {
    HOOK_TRACE_PROFILE("cudaIpcGetMemHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcOpenMemHandle(void **devPtr, cudaIpcMemHandle_t handle,
                                                             unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaIpcOpenMemHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaIpcCloseMemHandle(void *devPtr) {
    HOOK_TRACE_PROFILE("cudaIpcCloseMemHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceFlushGPUDirectRDMAWrites(
    enum cudaFlushGPUDirectRDMAWritesTarget target, enum cudaFlushGPUDirectRDMAWritesScope scope) {
    HOOK_TRACE_PROFILE("cudaDeviceFlushGPUDirectRDMAWrites");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadExit() {
    HOOK_TRACE_PROFILE("cudaThreadExit");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadSynchronize() {
    HOOK_TRACE_PROFILE("cudaThreadSynchronize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadSetLimit(enum cudaLimit limit, size_t value) {
    HOOK_TRACE_PROFILE("cudaThreadSetLimit");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadGetLimit(size_t *pValue, enum cudaLimit limit) {
    HOOK_TRACE_PROFILE("cudaThreadGetLimit");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadGetCacheConfig(enum cudaFuncCache *pCacheConfig) {
    HOOK_TRACE_PROFILE("cudaThreadGetCacheConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadSetCacheConfig(enum cudaFuncCache cacheConfig) {
    HOOK_TRACE_PROFILE("cudaThreadSetCacheConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetLastError() {
    HOOK_TRACE_PROFILE("cudaGetLastError");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaPeekAtLastError() {
    HOOK_TRACE_PROFILE("cudaPeekAtLastError");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT const char *cudaGetErrorName(cudaError_t error) {
    HOOK_TRACE_PROFILE("cudaGetErrorName");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT const char *cudaGetErrorString(cudaError_t error) {
    HOOK_TRACE_PROFILE("cudaGetErrorString");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDeviceCount(int *count) {
    HOOK_TRACE_PROFILE("cudaGetDeviceCount");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device) {
    HOOK_TRACE_PROFILE("cudaGetDeviceProperties");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetAttribute(int *value, enum cudaDeviceAttr attr, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetDefaultMemPool(cudaMemPool_t *memPool, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetDefaultMemPool");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetMemPool(int device, cudaMemPool_t memPool) {
    HOOK_TRACE_PROFILE("cudaDeviceSetMemPool");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetMemPool(cudaMemPool_t *memPool, int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGetMemPool");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetNvSciSyncAttributes(void *nvSciSyncAttrList, int device,
                                                                         int flags) {
    HOOK_TRACE_PROFILE("cudaDeviceGetNvSciSyncAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetP2PAttribute(int *value, enum cudaDeviceP2PAttr attr,
                                                                  int srcDevice, int dstDevice) {
    HOOK_TRACE_PROFILE("cudaDeviceGetP2PAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaChooseDevice(int *device, const struct cudaDeviceProp *prop) {
    HOOK_TRACE_PROFILE("cudaChooseDevice");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetDevice(int device) {
    HOOK_TRACE_PROFILE("cudaSetDevice");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDevice(int *device) {
    HOOK_TRACE_PROFILE("cudaGetDevice");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetValidDevices(int *device_arr, int len) {
    HOOK_TRACE_PROFILE("cudaSetValidDevices");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetDeviceFlags(unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaSetDeviceFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDeviceFlags(unsigned int *flags) {
    HOOK_TRACE_PROFILE("cudaGetDeviceFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamCreate(cudaStream_t *pStream) {
    HOOK_TRACE_PROFILE("cudaStreamCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamCreateWithFlags(cudaStream_t *pStream, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamCreateWithFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamCreateWithPriority(cudaStream_t *pStream, unsigned int flags,
                                                                     int priority) {
    HOOK_TRACE_PROFILE("cudaStreamCreateWithPriority");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int *priority) {
    HOOK_TRACE_PROFILE("cudaStreamGetPriority");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned int *flags) {
    HOOK_TRACE_PROFILE("cudaStreamGetFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaCtxResetPersistingL2Cache() {
    HOOK_TRACE_PROFILE("cudaCtxResetPersistingL2Cache");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src) {
    HOOK_TRACE_PROFILE("cudaStreamCopyAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetAttribute(cudaStream_t hStream, enum cudaStreamAttrID attr,
                                                               union cudaStreamAttrValue *value_out) {
    HOOK_TRACE_PROFILE("cudaStreamGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamSetAttribute(cudaStream_t hStream, enum cudaStreamAttrID attr,
                                                               const union cudaStreamAttrValue *value) {
    HOOK_TRACE_PROFILE("cudaStreamSetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamDestroy(cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaStreamDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event,
                                                            unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamWaitEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback,
                                                              void *userData, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamAddCallback");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamSynchronize(cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaStreamSynchronize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamQuery(cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaStreamQuery");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void *devPtr, size_t length,
                                                                 unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamAttachMemAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamBeginCapture(cudaStream_t stream, enum cudaStreamCaptureMode mode) {
    HOOK_TRACE_PROFILE("cudaStreamBeginCapture");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaThreadExchangeStreamCaptureMode(enum cudaStreamCaptureMode *mode) {
    HOOK_TRACE_PROFILE("cudaThreadExchangeStreamCaptureMode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t *pGraph) {
    HOOK_TRACE_PROFILE("cudaStreamEndCapture");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamIsCapturing(cudaStream_t stream,
                                                              enum cudaStreamCaptureStatus *pCaptureStatus) {
    HOOK_TRACE_PROFILE("cudaStreamIsCapturing");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetCaptureInfo(cudaStream_t stream,
                                                                 enum cudaStreamCaptureStatus *pCaptureStatus,
                                                                 unsigned long long *pId) {
    HOOK_TRACE_PROFILE("cudaStreamGetCaptureInfo");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamGetCaptureInfo_v2(cudaStream_t stream,
                                                                    enum cudaStreamCaptureStatus *captureStatus_out,
                                                                    unsigned long long *id_out, cudaGraph_t *graph_out,
                                                                    const cudaGraphNode_t **dependencies_out,
                                                                    size_t *numDependencies_out) {
    HOOK_TRACE_PROFILE("cudaStreamGetCaptureInfo_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamUpdateCaptureDependencies(cudaStream_t stream,
                                                                            cudaGraphNode_t *dependencies,
                                                                            size_t numDependencies,
                                                                            unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamUpdateCaptureDependencies");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventCreate(cudaEvent_t *event) {
    HOOK_TRACE_PROFILE("cudaEventCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventCreateWithFlags(cudaEvent_t *event, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaEventCreateWithFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaEventRecord");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream,
                                                                 unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaEventRecordWithFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventQuery(cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaEventQuery");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventSynchronize(cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaEventSynchronize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventDestroy(cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaEventDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end) {
    HOOK_TRACE_PROFILE("cudaEventElapsedTime");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaImportExternalMemory(
    cudaExternalMemory_t *extMem_out, const struct cudaExternalMemoryHandleDesc *memHandleDesc) {
    HOOK_TRACE_PROFILE("cudaImportExternalMemory");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaExternalMemoryGetMappedBuffer(
    void **devPtr, cudaExternalMemory_t extMem, const struct cudaExternalMemoryBufferDesc *bufferDesc) {
    HOOK_TRACE_PROFILE("cudaExternalMemoryGetMappedBuffer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t
    cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t *mipmap, cudaExternalMemory_t extMem,
                                              const struct cudaExternalMemoryMipmappedArrayDesc *mipmapDesc) {
    HOOK_TRACE_PROFILE("cudaExternalMemoryGetMappedMipmappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDestroyExternalMemory(cudaExternalMemory_t extMem) {
    HOOK_TRACE_PROFILE("cudaDestroyExternalMemory");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaImportExternalSemaphore(
    cudaExternalSemaphore_t *extSem_out, const struct cudaExternalSemaphoreHandleDesc *semHandleDesc) {
    HOOK_TRACE_PROFILE("cudaImportExternalSemaphore");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSignalExternalSemaphoresAsync(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaSignalExternalSemaphoresAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaWaitExternalSemaphoresAsync(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaWaitExternalSemaphoresAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem) {
    HOOK_TRACE_PROFILE("cudaDestroyExternalSemaphore");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaLaunchKernel(const void *func, dim3 gridDim, dim3 blockDim, void **args,
                                                         size_t sharedMem, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaLaunchKernel");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaLaunchCooperativeKernel(const void *func, dim3 gridDim, dim3 blockDim,
                                                                    void **args, size_t sharedMem,
                                                                    cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaLaunchCooperativeKernel");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaLaunchCooperativeKernelMultiDevice(
    struct cudaLaunchParams *launchParamsList, unsigned int numDevices, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaLaunchCooperativeKernelMultiDevice");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFuncSetCacheConfig(const void *func, enum cudaFuncCache cacheConfig) {
    HOOK_TRACE_PROFILE("cudaFuncSetCacheConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFuncSetSharedMemConfig(const void *func, enum cudaSharedMemConfig config) {
    HOOK_TRACE_PROFILE("cudaFuncSetSharedMemConfig");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFuncGetAttributes(struct cudaFuncAttributes *attr, const void *func) {
    HOOK_TRACE_PROFILE("cudaFuncGetAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFuncSetAttribute(const void *func, enum cudaFuncAttribute attr, int value) {
    HOOK_TRACE_PROFILE("cudaFuncSetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetDoubleForDevice(double *d) {
    HOOK_TRACE_PROFILE("cudaSetDoubleForDevice");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSetDoubleForHost(double *d) {
    HOOK_TRACE_PROFILE("cudaSetDoubleForHost");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void *userData) {
    HOOK_TRACE_PROFILE("cudaLaunchHostFunc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *numBlocks, const void *func,
                                                                                      int blockSize,
                                                                                      size_t dynamicSMemSize) {
    HOOK_TRACE_PROFILE("cudaOccupancyMaxActiveBlocksPerMultiprocessor");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaOccupancyAvailableDynamicSMemPerBlock(size_t *dynamicSmemSize,
                                                                                  const void *func, int numBlocks,
                                                                                  int blockSize) {
    HOOK_TRACE_PROFILE("cudaOccupancyAvailableDynamicSMemPerBlock");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(
    int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocManaged(void **devPtr, size_t size, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMallocManaged");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMalloc(void **devPtr, size_t size) {
    HOOK_TRACE_PROFILE("cudaMalloc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocHost(void **ptr, size_t size) {
    HOOK_TRACE_PROFILE("cudaMallocHost");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height) {
    HOOK_TRACE_PROFILE("cudaMallocPitch");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocArray(cudaArray_t *array, const struct cudaChannelFormatDesc *desc,
                                                        size_t width, size_t height, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMallocArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFree(void *devPtr) {
    HOOK_TRACE_PROFILE("cudaFree");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFreeHost(void *ptr) {
    HOOK_TRACE_PROFILE("cudaFreeHost");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFreeArray(cudaArray_t array) {
    HOOK_TRACE_PROFILE("cudaFreeArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray) {
    HOOK_TRACE_PROFILE("cudaFreeMipmappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostAlloc(void **pHost, size_t size, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaHostAlloc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostRegister(void *ptr, size_t size, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaHostRegister");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostUnregister(void *ptr) {
    HOOK_TRACE_PROFILE("cudaHostUnregister");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostGetDevicePointer(void **pDevice, void *pHost, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaHostGetDevicePointer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaHostGetFlags(unsigned int *pFlags, void *pHost) {
    HOOK_TRACE_PROFILE("cudaHostGetFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMalloc3D(struct cudaPitchedPtr *pitchedDevPtr, struct cudaExtent extent) {
    HOOK_TRACE_PROFILE("cudaMalloc3D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMalloc3DArray(cudaArray_t *array, const struct cudaChannelFormatDesc *desc,
                                                          struct cudaExtent extent, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMalloc3DArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t *mipmappedArray,
                                                                 const struct cudaChannelFormatDesc *desc,
                                                                 struct cudaExtent extent, unsigned int numLevels,
                                                                 unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMallocMipmappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t *levelArray,
                                                                   cudaMipmappedArray_const_t mipmappedArray,
                                                                   unsigned int level) {
    HOOK_TRACE_PROFILE("cudaGetMipmappedArrayLevel");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy3D(const struct cudaMemcpy3DParms *p) {
    HOOK_TRACE_PROFILE("cudaMemcpy3D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy3DPeer(const struct cudaMemcpy3DPeerParms *p) {
    HOOK_TRACE_PROFILE("cudaMemcpy3DPeer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy3DAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy3DPeerAsync(const struct cudaMemcpy3DPeerParms *p,
                                                              cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy3DPeerAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemGetInfo(size_t *free, size_t *total) {
    HOOK_TRACE_PROFILE("cudaMemGetInfo");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaArrayGetInfo(struct cudaChannelFormatDesc *desc, struct cudaExtent *extent,
                                                         unsigned int *flags, cudaArray_t array) {
    HOOK_TRACE_PROFILE("cudaArrayGetInfo");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaArrayGetPlane(cudaArray_t *pPlaneArray, cudaArray_t hArray,
                                                          unsigned int planeIdx) {
    HOOK_TRACE_PROFILE("cudaArrayGetPlane");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaArrayGetSparseProperties(struct cudaArraySparseProperties *sparseProperties,
                                                                     cudaArray_t array) {
    HOOK_TRACE_PROFILE("cudaArrayGetSparseProperties");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMipmappedArrayGetSparseProperties(
    struct cudaArraySparseProperties *sparseProperties, cudaMipmappedArray_t mipmap) {
    HOOK_TRACE_PROFILE("cudaMipmappedArrayGetSparseProperties");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyPeer(void *dst, int dstDevice, const void *src, int srcDevice,
                                                       size_t count) {
    HOOK_TRACE_PROFILE("cudaMemcpyPeer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch,
                                                     size_t width, size_t height, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy2D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset,
                                                            const void *src, size_t spitch, size_t width, size_t height,
                                                            enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DToArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DFromArray(void *dst, size_t dpitch, cudaArray_const_t src,
                                                              size_t wOffset, size_t hOffset, size_t width,
                                                              size_t height, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DFromArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst,
                                                                 cudaArray_const_t src, size_t wOffsetSrc,
                                                                 size_t hOffsetSrc, size_t width, size_t height,
                                                                 enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DArrayToArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyToSymbol(const void *symbol, const void *src, size_t count,
                                                           size_t offset, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyToSymbol");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyFromSymbol(void *dst, const void *symbol, size_t count, size_t offset,
                                                             enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyFromSymbol");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyAsync(void *dst, const void *src, size_t count,
                                                        enum cudaMemcpyKind kind, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyPeerAsync(void *dst, int dstDevice, const void *src, int srcDevice,
                                                            size_t count, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyPeerAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch,
                                                          size_t width, size_t height, enum cudaMemcpyKind kind,
                                                          cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset,
                                                                 const void *src, size_t spitch, size_t width,
                                                                 size_t height, enum cudaMemcpyKind kind,
                                                                 cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DToArrayAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, cudaArray_const_t src,
                                                                   size_t wOffset, size_t hOffset, size_t width,
                                                                   size_t height, enum cudaMemcpyKind kind,
                                                                   cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpy2DFromArrayAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyToSymbolAsync(const void *symbol, const void *src, size_t count,
                                                                size_t offset, enum cudaMemcpyKind kind,
                                                                cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyToSymbolAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyFromSymbolAsync(void *dst, const void *symbol, size_t count,
                                                                  size_t offset, enum cudaMemcpyKind kind,
                                                                  cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyFromSymbolAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset(void *devPtr, int value, size_t count) {
    HOOK_TRACE_PROFILE("cudaMemset");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset2D(void *devPtr, size_t pitch, int value, size_t width,
                                                     size_t height) {
    HOOK_TRACE_PROFILE("cudaMemset2D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset3D(struct cudaPitchedPtr pitchedDevPtr, int value,
                                                     struct cudaExtent extent) {
    HOOK_TRACE_PROFILE("cudaMemset3D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemsetAsync(void *devPtr, int value, size_t count, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemsetAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset2DAsync(void *devPtr, size_t pitch, int value, size_t width,
                                                          size_t height, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemset2DAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemset3DAsync(struct cudaPitchedPtr pitchedDevPtr, int value,
                                                          struct cudaExtent extent, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemset3DAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetSymbolAddress(void **devPtr, const void *symbol) {
    HOOK_TRACE_PROFILE("cudaGetSymbolAddress");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetSymbolSize(size_t *size, const void *symbol) {
    HOOK_TRACE_PROFILE("cudaGetSymbolSize");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPrefetchAsync(const void *devPtr, size_t count, int dstDevice,
                                                             cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemPrefetchAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemAdvise(const void *devPtr, size_t count, enum cudaMemoryAdvise advice,
                                                      int device) {
    HOOK_TRACE_PROFILE("cudaMemAdvise");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemRangeGetAttribute(void *data, size_t dataSize,
                                                                 enum cudaMemRangeAttribute attribute,
                                                                 const void *devPtr, size_t count) {
    HOOK_TRACE_PROFILE("cudaMemRangeGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemRangeGetAttributes(void **data, size_t *dataSizes,
                                                                  enum cudaMemRangeAttribute *attributes,
                                                                  size_t numAttributes, const void *devPtr,
                                                                  size_t count) {
    HOOK_TRACE_PROFILE("cudaMemRangeGetAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset,
                                                          const void *src, size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyToArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyFromArray(void *dst, cudaArray_const_t src, size_t wOffset,
                                                            size_t hOffset, size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyFromArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst,
                                                               cudaArray_const_t src, size_t wOffsetSrc,
                                                               size_t hOffsetSrc, size_t count,
                                                               enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaMemcpyArrayToArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset,
                                                               const void *src, size_t count, enum cudaMemcpyKind kind,
                                                               cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyToArrayAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemcpyFromArrayAsync(void *dst, cudaArray_const_t src, size_t wOffset,
                                                                 size_t hOffset, size_t count, enum cudaMemcpyKind kind,
                                                                 cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMemcpyFromArrayAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocAsync(void **devPtr, size_t size, cudaStream_t hStream) {
    HOOK_TRACE_PROFILE("cudaMallocAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaFreeAsync(void *devPtr, cudaStream_t hStream) {
    HOOK_TRACE_PROFILE("cudaFreeAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep) {
    HOOK_TRACE_PROFILE("cudaMemPoolTrimTo");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolSetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr,
                                                                void *value) {
    HOOK_TRACE_PROFILE("cudaMemPoolSetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolGetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr,
                                                                void *value) {
    HOOK_TRACE_PROFILE("cudaMemPoolGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolSetAccess(cudaMemPool_t memPool,
                                                             const struct cudaMemAccessDesc *descList, size_t count) {
    HOOK_TRACE_PROFILE("cudaMemPoolSetAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolGetAccess(enum cudaMemAccessFlags *flags, cudaMemPool_t memPool,
                                                             struct cudaMemLocation *location) {
    HOOK_TRACE_PROFILE("cudaMemPoolGetAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolCreate(cudaMemPool_t *memPool,
                                                          const struct cudaMemPoolProps *poolProps) {
    HOOK_TRACE_PROFILE("cudaMemPoolCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolDestroy(cudaMemPool_t memPool) {
    HOOK_TRACE_PROFILE("cudaMemPoolDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMallocFromPoolAsync(void **ptr, size_t size, cudaMemPool_t memPool,
                                                                cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaMallocFromPoolAsync");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolExportToShareableHandle(void *shareableHandle, cudaMemPool_t memPool,
                                                                           enum cudaMemAllocationHandleType handleType,
                                                                           unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMemPoolExportToShareableHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolImportFromShareableHandle(
    cudaMemPool_t *memPool, void *shareableHandle, enum cudaMemAllocationHandleType handleType, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaMemPoolImportFromShareableHandle");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolExportPointer(struct cudaMemPoolPtrExportData *exportData,
                                                                 void *ptr) {
    HOOK_TRACE_PROFILE("cudaMemPoolExportPointer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaMemPoolImportPointer(void **ptr, cudaMemPool_t memPool,
                                                                 struct cudaMemPoolPtrExportData *exportData) {
    HOOK_TRACE_PROFILE("cudaMemPoolImportPointer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaPointerGetAttributes(struct cudaPointerAttributes *attributes,
                                                                 const void *ptr) {
    HOOK_TRACE_PROFILE("cudaPointerGetAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceCanAccessPeer(int *canAccessPeer, int device, int peerDevice) {
    HOOK_TRACE_PROFILE("cudaDeviceCanAccessPeer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaDeviceEnablePeerAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceDisablePeerAccess(int peerDevice) {
    HOOK_TRACE_PROFILE("cudaDeviceDisablePeerAccess");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource) {
    HOOK_TRACE_PROFILE("cudaGraphicsUnregisterResource");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource,
                                                                        unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaGraphicsResourceSetMapFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t *resources,
                                                                 cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaGraphicsMapResources");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t *resources,
                                                                   cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaGraphicsUnmapResources");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsResourceGetMappedPointer(void **devPtr, size_t *size,
                                                                             cudaGraphicsResource_t resource) {
    HOOK_TRACE_PROFILE("cudaGraphicsResourceGetMappedPointer");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t *array,
                                                                              cudaGraphicsResource_t resource,
                                                                              unsigned int arrayIndex,
                                                                              unsigned int mipLevel) {
    HOOK_TRACE_PROFILE("cudaGraphicsSubResourceGetMappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t
    cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t *mipmappedArray, cudaGraphicsResource_t resource) {
    HOOK_TRACE_PROFILE("cudaGraphicsResourceGetMappedMipmappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindTexture(size_t *offset, const struct textureReference *texref,
                                                        const void *devPtr, const struct cudaChannelFormatDesc *desc,
                                                        size_t size) {
    HOOK_TRACE_PROFILE("cudaBindTexture");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindTexture2D(size_t *offset, const struct textureReference *texref,
                                                          const void *devPtr, const struct cudaChannelFormatDesc *desc,
                                                          size_t width, size_t height, size_t pitch) {
    HOOK_TRACE_PROFILE("cudaBindTexture2D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindTextureToArray(const struct textureReference *texref,
                                                               cudaArray_const_t array,
                                                               const struct cudaChannelFormatDesc *desc) {
    HOOK_TRACE_PROFILE("cudaBindTextureToArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindTextureToMipmappedArray(const struct textureReference *texref,
                                                                        cudaMipmappedArray_const_t mipmappedArray,
                                                                        const struct cudaChannelFormatDesc *desc) {
    HOOK_TRACE_PROFILE("cudaBindTextureToMipmappedArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaUnbindTexture(const struct textureReference *texref) {
    HOOK_TRACE_PROFILE("cudaUnbindTexture");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureAlignmentOffset(size_t *offset,
                                                                      const struct textureReference *texref) {
    HOOK_TRACE_PROFILE("cudaGetTextureAlignmentOffset");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureReference(const struct textureReference **texref,
                                                                const void *symbol) {
    HOOK_TRACE_PROFILE("cudaGetTextureReference");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaBindSurfaceToArray(const struct surfaceReference *surfref,
                                                               cudaArray_const_t array,
                                                               const struct cudaChannelFormatDesc *desc) {
    HOOK_TRACE_PROFILE("cudaBindSurfaceToArray");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetSurfaceReference(const struct surfaceReference **surfref,
                                                                const void *symbol) {
    HOOK_TRACE_PROFILE("cudaGetSurfaceReference");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetChannelDesc(struct cudaChannelFormatDesc *desc,
                                                           cudaArray_const_t array) {
    HOOK_TRACE_PROFILE("cudaGetChannelDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT struct cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w,
                                                                               enum cudaChannelFormatKind f) {
    HOOK_TRACE_PROFILE("cudaCreateChannelDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaCreateTextureObject(cudaTextureObject_t *pTexObject,
                                                                const struct cudaResourceDesc *pResDesc,
                                                                const struct cudaTextureDesc *pTexDesc,
                                                                const struct cudaResourceViewDesc *pResViewDesc) {
    HOOK_TRACE_PROFILE("cudaCreateTextureObject");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject) {
    HOOK_TRACE_PROFILE("cudaDestroyTextureObject");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureObjectResourceDesc(struct cudaResourceDesc *pResDesc,
                                                                         cudaTextureObject_t texObject) {
    HOOK_TRACE_PROFILE("cudaGetTextureObjectResourceDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureObjectTextureDesc(struct cudaTextureDesc *pTexDesc,
                                                                        cudaTextureObject_t texObject) {
    HOOK_TRACE_PROFILE("cudaGetTextureObjectTextureDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetTextureObjectResourceViewDesc(struct cudaResourceViewDesc *pResViewDesc,
                                                                             cudaTextureObject_t texObject) {
    HOOK_TRACE_PROFILE("cudaGetTextureObjectResourceViewDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t *pSurfObject,
                                                                const struct cudaResourceDesc *pResDesc) {
    HOOK_TRACE_PROFILE("cudaCreateSurfaceObject");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject) {
    HOOK_TRACE_PROFILE("cudaDestroySurfaceObject");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetSurfaceObjectResourceDesc(struct cudaResourceDesc *pResDesc,
                                                                         cudaSurfaceObject_t surfObject) {
    HOOK_TRACE_PROFILE("cudaGetSurfaceObjectResourceDesc");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDriverGetVersion(int *driverVersion) {
    HOOK_TRACE_PROFILE("cudaDriverGetVersion");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaRuntimeGetVersion(int *runtimeVersion) {
    HOOK_TRACE_PROFILE("cudaRuntimeGetVersion");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphCreate(cudaGraph_t *pGraph, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaGraphCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddKernelNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                               const cudaGraphNode_t *pDependencies,
                                                               size_t numDependencies,
                                                               const struct cudaKernelNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddKernelNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeGetParams(cudaGraphNode_t node,
                                                                     struct cudaKernelNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeSetParams(cudaGraphNode_t node,
                                                                     const struct cudaKernelNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeCopyAttributes(cudaGraphNode_t hSrc, cudaGraphNode_t hDst) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeCopyAttributes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeGetAttribute(cudaGraphNode_t hNode,
                                                                        enum cudaKernelNodeAttrID attr,
                                                                        union cudaKernelNodeAttrValue *value_out) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeGetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphKernelNodeSetAttribute(cudaGraphNode_t hNode,
                                                                        enum cudaKernelNodeAttrID attr,
                                                                        const union cudaKernelNodeAttrValue *value) {
    HOOK_TRACE_PROFILE("cudaGraphKernelNodeSetAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemcpyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                               const cudaGraphNode_t *pDependencies,
                                                               size_t numDependencies,
                                                               const struct cudaMemcpy3DParms *pCopyParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemcpyNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                       const cudaGraphNode_t *pDependencies,
                                                                       size_t numDependencies, const void *symbol,
                                                                       const void *src, size_t count, size_t offset,
                                                                       enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemcpyNodeToSymbol");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                         const cudaGraphNode_t *pDependencies,
                                                                         size_t numDependencies, void *dst,
                                                                         const void *symbol, size_t count,
                                                                         size_t offset, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemcpyNodeFromSymbol");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemcpyNode1D(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                 const cudaGraphNode_t *pDependencies,
                                                                 size_t numDependencies, void *dst, const void *src,
                                                                 size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemcpyNode1D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node,
                                                                     struct cudaMemcpy3DParms *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node,
                                                                     const struct cudaMemcpy3DParms *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t node, const void *symbol,
                                                                             const void *src, size_t count,
                                                                             size_t offset, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeSetParamsToSymbol");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t node, void *dst,
                                                                               const void *symbol, size_t count,
                                                                               size_t offset,
                                                                               enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeSetParamsFromSymbol");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemcpyNodeSetParams1D(cudaGraphNode_t node, void *dst, const void *src,
                                                                       size_t count, enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphMemcpyNodeSetParams1D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemsetNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                               const cudaGraphNode_t *pDependencies,
                                                               size_t numDependencies,
                                                               const struct cudaMemsetParams *pMemsetParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemsetNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemsetNodeGetParams(cudaGraphNode_t node,
                                                                     struct cudaMemsetParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphMemsetNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemsetNodeSetParams(cudaGraphNode_t node,
                                                                     const struct cudaMemsetParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphMemsetNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddHostNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                             const cudaGraphNode_t *pDependencies,
                                                             size_t numDependencies,
                                                             const struct cudaHostNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddHostNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphHostNodeGetParams(cudaGraphNode_t node,
                                                                   struct cudaHostNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphHostNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphHostNodeSetParams(cudaGraphNode_t node,
                                                                   const struct cudaHostNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphHostNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddChildGraphNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                   const cudaGraphNode_t *pDependencies,
                                                                   size_t numDependencies, cudaGraph_t childGraph) {
    HOOK_TRACE_PROFILE("cudaGraphAddChildGraphNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t *pGraph) {
    HOOK_TRACE_PROFILE("cudaGraphChildGraphNodeGetGraph");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddEmptyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                              const cudaGraphNode_t *pDependencies,
                                                              size_t numDependencies) {
    HOOK_TRACE_PROFILE("cudaGraphAddEmptyNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddEventRecordNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                    const cudaGraphNode_t *pDependencies,
                                                                    size_t numDependencies, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphAddEventRecordNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphEventRecordNodeGetEvent(cudaGraphNode_t node, cudaEvent_t *event_out) {
    HOOK_TRACE_PROFILE("cudaGraphEventRecordNodeGetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphEventRecordNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphEventRecordNodeSetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddEventWaitNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                  const cudaGraphNode_t *pDependencies,
                                                                  size_t numDependencies, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphAddEventWaitNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphEventWaitNodeGetEvent(cudaGraphNode_t node, cudaEvent_t *event_out) {
    HOOK_TRACE_PROFILE("cudaGraphEventWaitNodeGetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphEventWaitNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphEventWaitNodeSetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddExternalSemaphoresSignalNode(
    cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies,
    const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddExternalSemaphoresSignalNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExternalSemaphoresSignalNodeGetParams(
    cudaGraphNode_t hNode, struct cudaExternalSemaphoreSignalNodeParams *params_out) {
    HOOK_TRACE_PROFILE("cudaGraphExternalSemaphoresSignalNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExternalSemaphoresSignalNodeSetParams(
    cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExternalSemaphoresSignalNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddExternalSemaphoresWaitNode(
    cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies,
    const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddExternalSemaphoresWaitNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExternalSemaphoresWaitNodeGetParams(
    cudaGraphNode_t hNode, struct cudaExternalSemaphoreWaitNodeParams *params_out) {
    HOOK_TRACE_PROFILE("cudaGraphExternalSemaphoresWaitNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExternalSemaphoresWaitNodeSetParams(
    cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExternalSemaphoresWaitNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemAllocNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                 const cudaGraphNode_t *pDependencies,
                                                                 size_t numDependencies,
                                                                 struct cudaMemAllocNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemAllocNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node,
                                                                       struct cudaMemAllocNodeParams *params_out) {
    HOOK_TRACE_PROFILE("cudaGraphMemAllocNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddMemFreeNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph,
                                                                const cudaGraphNode_t *pDependencies,
                                                                size_t numDependencies, void *dptr) {
    HOOK_TRACE_PROFILE("cudaGraphAddMemFreeNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void *dptr_out) {
    HOOK_TRACE_PROFILE("cudaGraphMemFreeNodeGetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGraphMemTrim(int device) {
    HOOK_TRACE_PROFILE("cudaDeviceGraphMemTrim");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceGetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr,
                                                                       void *value) {
    HOOK_TRACE_PROFILE("cudaDeviceGetGraphMemAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaDeviceSetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr,
                                                                       void *value) {
    HOOK_TRACE_PROFILE("cudaDeviceSetGraphMemAttribute");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphClone(cudaGraph_t *pGraphClone, cudaGraph_t originalGraph) {
    HOOK_TRACE_PROFILE("cudaGraphClone");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphNodeFindInClone(cudaGraphNode_t *pNode, cudaGraphNode_t originalNode,
                                                                 cudaGraph_t clonedGraph) {
    HOOK_TRACE_PROFILE("cudaGraphNodeFindInClone");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphNodeGetType(cudaGraphNode_t node, enum cudaGraphNodeType *pType) {
    HOOK_TRACE_PROFILE("cudaGraphNodeGetType");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t *nodes, size_t *numNodes) {
    HOOK_TRACE_PROFILE("cudaGraphGetNodes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t *pRootNodes,
                                                              size_t *pNumRootNodes) {
    HOOK_TRACE_PROFILE("cudaGraphGetRootNodes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to,
                                                          size_t *numEdges) {
    HOOK_TRACE_PROFILE("cudaGraphGetEdges");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphNodeGetDependencies(cudaGraphNode_t node,
                                                                     cudaGraphNode_t *pDependencies,
                                                                     size_t *pNumDependencies) {
    HOOK_TRACE_PROFILE("cudaGraphNodeGetDependencies");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphNodeGetDependentNodes(cudaGraphNode_t node,
                                                                       cudaGraphNode_t *pDependentNodes,
                                                                       size_t *pNumDependentNodes) {
    HOOK_TRACE_PROFILE("cudaGraphNodeGetDependentNodes");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t *from,
                                                                 const cudaGraphNode_t *to, size_t numDependencies) {
    HOOK_TRACE_PROFILE("cudaGraphAddDependencies");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t *from,
                                                                    const cudaGraphNode_t *to, size_t numDependencies) {
    HOOK_TRACE_PROFILE("cudaGraphRemoveDependencies");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphDestroyNode(cudaGraphNode_t node) {
    HOOK_TRACE_PROFILE("cudaGraphDestroyNode");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphInstantiate(cudaGraphExec_t *pGraphExec, cudaGraph_t graph,
                                                             cudaGraphNode_t *pErrorNode, char *pLogBuffer,
                                                             size_t bufferSize) {
    HOOK_TRACE_PROFILE("cudaGraphInstantiate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphInstantiateWithFlags(cudaGraphExec_t *pGraphExec, cudaGraph_t graph,
                                                                      unsigned long long flags) {
    HOOK_TRACE_PROFILE("cudaGraphInstantiateWithFlags");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecKernelNodeSetParams(
    cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecKernelNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec,
                                                                         cudaGraphNode_t node,
                                                                         const struct cudaMemcpy3DParms *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemcpyNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t hGraphExec,
                                                                                 cudaGraphNode_t node,
                                                                                 const void *symbol, const void *src,
                                                                                 size_t count, size_t offset,
                                                                                 enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemcpyNodeSetParamsToSymbol");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t hGraphExec,
                                                                                   cudaGraphNode_t node, void *dst,
                                                                                   const void *symbol, size_t count,
                                                                                   size_t offset,
                                                                                   enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemcpyNodeSetParamsFromSymbol");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemcpyNodeSetParams1D(cudaGraphExec_t hGraphExec,
                                                                           cudaGraphNode_t node, void *dst,
                                                                           const void *src, size_t count,
                                                                           enum cudaMemcpyKind kind) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemcpyNodeSetParams1D");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec,
                                                                         cudaGraphNode_t node,
                                                                         const struct cudaMemsetParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecMemsetNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node,
                                                                       const struct cudaHostNodeParams *pNodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecHostNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecChildGraphNodeSetParams(cudaGraphExec_t hGraphExec,
                                                                             cudaGraphNode_t node,
                                                                             cudaGraph_t childGraph) {
    HOOK_TRACE_PROFILE("cudaGraphExecChildGraphNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecEventRecordNodeSetEvent(cudaGraphExec_t hGraphExec,
                                                                             cudaGraphNode_t hNode, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphExecEventRecordNodeSetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecEventWaitNodeSetEvent(cudaGraphExec_t hGraphExec,
                                                                           cudaGraphNode_t hNode, cudaEvent_t event) {
    HOOK_TRACE_PROFILE("cudaGraphExecEventWaitNodeSetEvent");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecExternalSemaphoresSignalNodeSetParams(
    cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecExternalSemaphoresSignalNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecExternalSemaphoresWaitNodeSetParams(
    cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    HOOK_TRACE_PROFILE("cudaGraphExecExternalSemaphoresWaitNodeSetParams");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph,
                                                            cudaGraphNode_t *hErrorNode_out,
                                                            enum cudaGraphExecUpdateResult *updateResult_out) {
    HOOK_TRACE_PROFILE("cudaGraphExecUpdate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphUpload(cudaGraphExec_t graphExec, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaGraphUpload");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaGraphLaunch");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphExecDestroy(cudaGraphExec_t graphExec) {
    HOOK_TRACE_PROFILE("cudaGraphExecDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphDestroy(cudaGraph_t graph) {
    HOOK_TRACE_PROFILE("cudaGraphDestroy");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphDebugDotPrint(cudaGraph_t graph, const char *path,
                                                               unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaGraphDebugDotPrint");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaUserObjectCreate(cudaUserObject_t *object_out, void *ptr,
                                                             cudaHostFn_t destroy, unsigned int initialRefcount,
                                                             unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaUserObjectCreate");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaUserObjectRetain(cudaUserObject_t object, unsigned int count) {
    HOOK_TRACE_PROFILE("cudaUserObjectRetain");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaUserObjectRelease(cudaUserObject_t object, unsigned int count) {
    HOOK_TRACE_PROFILE("cudaUserObjectRelease");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object,
                                                                  unsigned int count, unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaGraphRetainUserObject");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object,
                                                                   unsigned int count) {
    HOOK_TRACE_PROFILE("cudaGraphReleaseUserObject");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetDriverEntryPoint(const char *symbol, void **funcPtr,
                                                                unsigned long long flags) {
    HOOK_TRACE_PROFILE("cudaGetDriverEntryPoint");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetExportTable(const void **ppExportTable,
                                                           const cudaUUID_t *pExportTableId) {
    HOOK_TRACE_PROFILE("cudaGetExportTable");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaGetFuncBySymbol(cudaFunction_t *functionPtr, const void *symbolPtr) {
    HOOK_TRACE_PROFILE("cudaGetFuncBySymbol");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSignalExternalSemaphoresAsync_ptsz(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams_v1 *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaSignalExternalSemaphoresAsync_ptsz");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaSignalExternalSemaphoresAsync_v2(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaSignalExternalSemaphoresAsync_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaWaitExternalSemaphoresAsync_ptsz(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams_v1 *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaWaitExternalSemaphoresAsync_ptsz");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaWaitExternalSemaphoresAsync_v2(
    const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray,
    unsigned int numExtSems, cudaStream_t stream) {
    HOOK_TRACE_PROFILE("cudaWaitExternalSemaphoresAsync_v2");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t cudaStreamUpdateCaptureDependencies_ptsz(cudaStream_t stream,
                                                                                 cudaGraphNode_t *dependencies,
                                                                                 size_t numDependencies,
                                                                                 unsigned int flags) {
    HOOK_TRACE_PROFILE("cudaStreamUpdateCaptureDependencies_ptsz");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT void **__cudaRegisterFatBinary(void *fatCubin) {
    HOOK_TRACE_PROFILE("__cudaRegisterFatBinary");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterFatBinaryEnd(void **fatCubinHandle) {
    HOOK_TRACE_PROFILE("__cudaRegisterFatBinaryEnd");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaUnregisterFatBinary(void **fatCubinHandle) {
    HOOK_TRACE_PROFILE("__cudaUnregisterFatBinary");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterVar(void **fatCubinHandle, char *hostVar, char *deviceAddress,
                                                   const char *deviceName, int ext, size_t size, int constant,
                                                   int global) {
    HOOK_TRACE_PROFILE("__cudaRegisterVar");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterManagedVar(void **fatCubinHandle, void **hostVarPtrAddress,
                                                          char *deviceAddress, const char *deviceName, int ext,
                                                          size_t size, int constant, int global) {
    HOOK_TRACE_PROFILE("__cudaRegisterManagedVar");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT char __cudaInitModule(void **fatCubinHandle) {
    HOOK_TRACE_PROFILE("__cudaInitModule");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterTexture(void **fatCubinHandle, const struct textureReference *hostVar,
                                                       const void **deviceAddress, const char *deviceName, int dim,
                                                       int norm, int ext) {
    HOOK_TRACE_PROFILE("__cudaRegisterTexture");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterSurface(void **fatCubinHandle, const struct surfaceReference *hostVar,
                                                       const void **deviceAddress, const char *deviceName, int dim,
                                                       int ext) {
    HOOK_TRACE_PROFILE("__cudaRegisterSurface");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT void __cudaRegisterFunction(void **fatCubinHandle, const char *hostFun, char *deviceFun,
                                                        const char *deviceName, int thread_limit, uint3 *tid,
                                                        uint3 *bid, dim3 *bDim, dim3 *gDim, int *wSize) {
    HOOK_TRACE_PROFILE("__cudaRegisterFunction");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT cudaError_t __cudaPopCallConfiguration(dim3 *gridDim, dim3 *blockDim, size_t *sharedMem,
                                                                   void *stream) {
    HOOK_TRACE_PROFILE("__cudaPopCallConfiguration");
    return CUDA_ERROR_INVALID_VALUE;
}

HOOK_C_API HOOK_DECL_EXPORT unsigned __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem,
                                                                 struct CUstream_st *stream) {
    HOOK_TRACE_PROFILE("__cudaPushCallConfiguration");
    return CUDA_ERROR_INVALID_VALUE;
}
