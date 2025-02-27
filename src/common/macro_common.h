#ifndef __CUDA_HOOK_MACRO_COMMON_H__
#define __CUDA_HOOK_MACRO_COMMON_H__

#include <stdio.h>
#include <string.h>
#include <sys/syscall.h>
#include <unistd.h>

#include <ctime>

#define HOOK_C_API extern "C"
#define HOOK_DECL_EXPORT __attribute__((visibility("default")))

#define HOOK_LIKELY(x) __builtin_expect(!!(x), 1)
#define HOOK_UNLIKELY(x) __builtin_expect(!!(x), 0)

inline char *curr_time() {
    time_t raw_time = time(nullptr);
    struct tm *time_info = localtime(&raw_time);
    static char now_time[64];
    now_time[strftime(now_time, sizeof(now_time), "%Y-%m-%d %H:%M:%S", time_info)] = '\0';

    return now_time;
}

inline int get_pid() {
    static int pid = getpid();

    return pid;
}

inline long int get_tid() {
    thread_local long int tid = syscall(SYS_gettid);

    return tid;
}

#define HOOK_LOG_TAG "FAKE-GPU"
#define HOOK_LOG_FILE(x) (strrchr(x, '/') ? (strrchr(x, '/') + 1) : x)
#define HLOG(format, ...)                                                                                        \
    do {                                                                                                         \
        fprintf(stderr, "[%s %s %d:%ld %s:%d %s] " format "\n", HOOK_LOG_TAG, curr_time(), get_pid(), get_tid(), \
                HOOK_LOG_FILE(__FILE__), __LINE__, __FUNCTION__, ##__VA_ARGS__);                                 \
    } while (0)

#define HOOK_CHECK(x)                     \
    do {                                  \
        if (HOOK_UNLIKELY(!(x))) {        \
            HLOG("Check failed: %s", #x); \
            exit(EXIT_FAILURE);           \
        }                                 \
    } while (0)

#define HOOK_DISALLOW_COPY_AND_ASSIGN(TypeName) \
    TypeName(const TypeName &) = delete;        \
    void operator=(const TypeName &) = delete;

#endif  // __CUDA_HOOK_MACRO_COMMON_H__
