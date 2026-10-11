/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2exceptions.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct ThreadParam ThreadParam;
/* SCE eekernel.h layout. */
struct ThreadParam {
    int status; /* +0x0 */
    void (*entry)(void*); /* +0x4 */
    void* stack; /* +0x8 */
    int stackSize; /* +0xc */
    void* gpReg; /* +0x10 */
    int initPriority; /* +0x14 */
    int currentPriority; /* +0x18 */
    unsigned int attr; /* +0x1c */
    unsigned int option; /* +0x20 */
    int waitType; /* +0x24 */
    int waitId; /* +0x28 */
    int wakeupCount; /* +0x2c */
};

extern char _start[];
extern char end[];
extern char _stack[];
extern char _stack_size[];
extern char _heap_size[];
extern int MTid;
int printf(const char* fmt, ...);
int InitThread(void);
int GetThreadId(void);
int ReferThreadStatus(int tid, ThreadParam* info);

void PS2_fn_vInitThreads(void)
{
    ThreadParam T;

    printf("_start:0x%08x\t_end:0x%08x\n", _start, end - 1);
    printf("_stack:0x%08x\t_stack_size:0x%08x\n", _stack, _stack_size);
    printf("(heap):0x%08x\t_heap_size:0x%08x\n", end, _heap_size);
    InitThread();
    MTid = GetThreadId();
    ReferThreadStatus(MTid, &T);
    printf("Main Thread: Id :%d\n", MTid);
    printf("stack size:0x%08x\t\tstack 0x%08x -> 0x%08x\n", T.stackSize, T.stack, (char*)T.stack + T.stackSize);
}
