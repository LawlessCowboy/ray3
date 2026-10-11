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

transition_deallocator_t fn_pfnCurrentTransitionDeallocator(void)
{
    int TransitionNumber;
    TransitionNumber = g_lTransitionBloc;
    if (g_bDoTransition)
        TransitionNumber = TransitionNumber == 1 ? 2 : 1;
    return TransitionNumber == 2 ? fn_vTransitionDeallocatorOdd : fn_vTransitionDeallocatorEven;
}

transition_allocator_t fn_pfnCurrentTransitionAllocator(void)
{
    return g_lTransitionBloc == 2 ? fn_pvTransitionAllocatorOdd : fn_pvTransitionAllocatorEven;
}

void fn_vResetTransitionAllocatorEven(void)
{
    fn_vResetAllocator(g_stTransitionAllocator[1]);
}

void fn_vTransitionDeallocatorEven(void* pvPointer)
{
    fn_vFreeAllocator(g_stTransitionAllocator[1], pvPointer);
}

void* fn_pvTransitionAllocatorEven(unsigned int u32Size)
{
    return fn_pvAllocAllocator(g_stTransitionAllocator[1], u32Size);
}

void fn_vResetTransitionAllocatorOdd(void)
{
    fn_vResetAllocator(g_stTransitionAllocator[0]);
}

void fn_vTransitionDeallocatorOdd(void* pvPointer)
{
    fn_vFreeAllocator(g_stTransitionAllocator[0], pvPointer);
}

void* fn_pvTransitionAllocatorOdd(unsigned int u32Size)
{
    return fn_pvAllocAllocator(g_stTransitionAllocator[0], u32Size);
}

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

void fn_vEndTransitionSynchro(void)
{
    g_bLoadInProgress = 0;
    PS2_fn_vWaitTransitionOff();
    sceGsSyncPath(0, 0);
}

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
