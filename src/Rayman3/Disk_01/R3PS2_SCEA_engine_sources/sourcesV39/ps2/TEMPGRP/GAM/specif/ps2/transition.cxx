/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

/* The debug records mark this .cxx unit as C, and retail function-local
 * statics have no C++ init guard (iOnce in fn_vOneTrameThread). */
#pragma cplusplus off
#include <stddef.h>

typedef void (*transition_deallocator_t)(void*);
typedef void* (*transition_allocator_t)(unsigned int);
typedef int anon_enum_0093e9cf;

extern int g_stTransitionAllocator[2][3];
extern void fn_vResetAllocator(int*);
extern void fn_vFreeAllocator(int*, void*);
extern void* fn_pvAllocAllocator(int*, unsigned int);
extern int g_lTransitionBloc;
extern unsigned char g_bLoadInProgress;
extern unsigned char g_bDoTransition;
extern void PS2_fn_vWaitTransitionOff(void);
extern int sceGsSyncPath(int, int);
extern void* fn_pvTransitionAllocatorEven(unsigned int u32Size);
extern void* fn_pvTransitionAllocatorOdd(unsigned int u32Size);
extern void fn_vTransitionDeallocatorEven(void* pvPointer);
extern void fn_vTransitionDeallocatorOdd(void* pvPointer);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 278–283 */
/* addr: 0x0028d810  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 278
 *   +0x000c -> line 279
 *   +0x0024 -> line 282
 *   +0x0040 -> line 283
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
transition_deallocator_t fn_pfnCurrentTransitionDeallocator(void)
{
    int TransitionNumber;
    TransitionNumber = g_lTransitionBloc;
    if (g_bDoTransition)
        TransitionNumber = TransitionNumber == 1 ? 2 : 1;
    return TransitionNumber == 2 ? fn_vTransitionDeallocatorOdd : fn_vTransitionDeallocatorEven;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 264–265 */
/* addr: 0x0028d860  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 264
 *   +0x0020 -> line 265
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
transition_allocator_t fn_pfnCurrentTransitionAllocator(void)
{
    return g_lTransitionBloc == 2 ? fn_pvTransitionAllocatorOdd : fn_pvTransitionAllocatorEven;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 258–258 */
/* addr: 0x0028d890  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 258
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vResetTransitionAllocatorEven(void)
{
    fn_vResetAllocator(g_stTransitionAllocator[1]);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 252–252 */
/* addr: 0x0028d8a0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 252
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vTransitionDeallocatorEven(void* pvPointer)
{
    fn_vFreeAllocator(g_stTransitionAllocator[1], pvPointer);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 246–246 */
/* addr: 0x0028d8b0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 246
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* fn_pvTransitionAllocatorEven(unsigned int u32Size)
{
    return fn_pvAllocAllocator(g_stTransitionAllocator[1], u32Size);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 241–241 */
/* addr: 0x0028d8c0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 241
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vResetTransitionAllocatorOdd(void)
{
    fn_vResetAllocator(g_stTransitionAllocator[0]);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 235–235 */
/* addr: 0x0028d8d0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vTransitionDeallocatorOdd(void* pvPointer)
{
    fn_vFreeAllocator(g_stTransitionAllocator[0], pvPointer);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 229–229 */
/* addr: 0x0028d8e0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 229
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* fn_pvTransitionAllocatorOdd(unsigned int u32Size)
{
    return fn_pvAllocAllocator(g_stTransitionAllocator[0], u32Size);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 210–225 */
/* addr: 0x0028d8f0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 210
 *   +0x0004 -> line 213
 *   +0x0008 -> line 210
 *   +0x0010 -> line 213
 *   +0x0018 -> line 217
 *   +0x002c -> line 219
 *   +0x0038 -> line 223
 *   +0x004c -> line 225
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern void* HMU_fn_p_vMalloc(unsigned int ulSize, int lFlags);
extern void fn_vInitAllocator(int* p_stAllocator, unsigned int u32Size, char* pcBuffer);
extern void fn_vInitTransitionAllocPools(unsigned int u32Size);

void fn_vInitTransitionAllocPools(unsigned int u32Size)
{
    char* pcBuffer;

    pcBuffer = (char*)HMU_fn_p_vMalloc(u32Size, 0);
    fn_vInitAllocator(g_stTransitionAllocator[0], u32Size, pcBuffer);

    pcBuffer = (char*)HMU_fn_p_vMalloc(u32Size, 0);
    fn_vInitAllocator(g_stTransitionAllocator[1], u32Size, pcBuffer);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 103–143 */
/* addr: 0x0028d950  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 103
 *   +0x000c -> line 110
 *   +0x0014 -> line 112
 *   +0x0020 -> line 117
 *   +0x0028 -> line 119
 *   +0x0034 -> line 120
 *   +0x0040 -> line 121
 *   +0x0044 -> line 123
 *   +0x0048 -> line 125
 *   +0x0078 -> line 127
 *   +0x0088 -> line 133
 *   +0x00a0 -> line 135
 *   +0x00a8 -> line 136
 *   +0x00b4 -> line 139
 *   +0x00d0 -> line 141
 *   +0x00d8 -> line 143
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern void PS2_fn_vWaitTransitionOn(void);
extern void PS2_fn_vTriggerTransitionOff(void);
extern void* MC_fn_hGetFirstMainCharNode(void);
extern void* MC_fn_hGetCharacterInMainCharacterNode(void* hNode);
extern void MEC_fn_vImposeActorMatrix(void* hActor);
extern void fn_vOneTrame(void);
extern int printf(const char* format, ...);
extern unsigned char g_bTransitionIsRunning;
extern unsigned char g_ucEngineState;

void fn_vOneTrameThread(void)
{
    int iCounter;
    static int iOnce = 1;

    for (;;)
    {
        iCounter = 0;
        PS2_fn_vWaitTransitionOn();
        while (g_bTransitionIsRunning || g_bLoadInProgress)
        {
            if (!g_bTransitionIsRunning && iOnce)
            {
                printf("first frame after transition IA has ended%d\n", iCounter);
                iOnce = 0;
            }
            if (!(iCounter++ % 50))
            {
                printf("Transition Frame %d\n", iCounter);
            }
            if (!(g_ucEngineState & 2))
            {
                g_ucEngineState |= 1;
                MEC_fn_vImposeActorMatrix(MC_fn_hGetCharacterInMainCharacterNode(MC_fn_hGetFirstMainCharNode()));
                fn_vOneTrame();
                g_ucEngineState &= ~1;
            }
        }
        PS2_fn_vTriggerTransitionOff();
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 70–94 */
/* addr: 0x0028da30  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 70
 *   +0x0008 -> line 81
 *   +0x0010 -> line 86
 *   +0x001c -> line 94
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vEndTransitionSynchro(void)
{
    g_bLoadInProgress = 0;
    PS2_fn_vWaitTransitionOff();
    sceGsSyncPath(0, 0);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\transition.cxx lines 10–23 */
/* addr: 0x0028da60  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 10
 *   +0x0004 -> line 12
 *   +0x0020 -> line 14
 *   +0x0028 -> line 15
 *   +0x0030 -> line 16
 *   +0x0038 -> line 18
 *   +0x0040 -> line 19
 *   +0x0048 -> line 23
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern unsigned char HMU_fn_ucGetActualNormalMemoryBlockUsed(void);
extern unsigned char HMU_fn_ucGetActualTempMemoryBlockUsed(void);
extern void HMU_fn_vSetActualNormalMemoryBlock(unsigned char ucBlock);
extern void HMU_fn_vSetActualTempMemoryBlock(unsigned char ucBlock);
extern void fn_vHandleMemoryBlockSwitch(anon_enum_0093e9cf eEvent);
extern unsigned char ucCurrentNormalMemoryBlockBeforePlayingOneTrame;
extern unsigned char ucCurrentTempMemoryBlockBeforePlayingOneTrame;

void fn_vHandleMemoryBlockSwitch(anon_enum_0093e9cf eEvent)
{
    switch (eEvent)
    {
    case 0:
        ucCurrentNormalMemoryBlockBeforePlayingOneTrame = HMU_fn_ucGetActualNormalMemoryBlockUsed();
        ucCurrentTempMemoryBlockBeforePlayingOneTrame = HMU_fn_ucGetActualTempMemoryBlockUsed();
        break;
    case 1:
        HMU_fn_vSetActualNormalMemoryBlock(ucCurrentNormalMemoryBlockBeforePlayingOneTrame);
        HMU_fn_vSetActualTempMemoryBlock(ucCurrentTempMemoryBlockBeforePlayingOneTrame);
        break;
    }
}
