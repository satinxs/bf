#include "jit.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include "mman/mman.c"
#else
#include <sys/mman.h>
#endif

typedef long (*JittedFunc)(long);

// Allocates RW memory of given size and returns a pointer to it. On failure,
// prints out the error and returns NULL. Unlike malloc, the memory is allocated
// on a page boundary so it's suitable for calling mprotect.
static void* alloc_writable_memory(uint32_t size)
{
    void* ptr = mmap(0, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

    if (ptr == (void*)-1) {
        perror("mmap");
        return NULL;
    }

    return ptr;
}

// Sets a RX permission on the given memory, which must be page-aligned.
static bool make_memory_executable(void* m, uint32_t size)
{
    if (mprotect(m, size, PROT_READ | PROT_EXEC) == -1)
        return false;

    return true;
}

void emit_code_into_memory(unsigned char* m)
{
    unsigned char code[] = {
        0x48, 0x89, 0xf8, // mov %rdi, %rax
        0x48, 0x83, 0xc0, 0x04, // add $4, %rax
        0xc3 // ret
    };
    memcpy(m, code, sizeof(code));
}

void test()
{
    void* m = alloc_writable_memory(1024);

    emit_code_into_memory(m);
    make_memory_executable(m, 1024);

    JittedFunc func = m;
    int result = func(2);
    printf("result = %d\n", result);
}