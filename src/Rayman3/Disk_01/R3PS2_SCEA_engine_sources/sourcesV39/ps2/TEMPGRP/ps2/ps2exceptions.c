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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ps2\ps2exceptions.c lines 131–151 */
/* addr: 0x00318ce0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 131
 *   +0x0004 -> line 134
 *   +0x0010 -> line 131
 *   +0x0014 -> line 134
 *   +0x0024 -> line 135
 *   +0x0040 -> line 136
 *   +0x005c -> line 138
 *   +0x0064 -> line 142
 *   +0x0070 -> line 144
 *   +0x007c -> line 145
 *   +0x008c -> line 146
 *   +0x00a4 -> line 151
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
