/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sceDmaChan sceDmaChan;
typedef struct tdstBlockInfo_ tdstBlockInfo_;
typedef struct HMU_tdstMemoryStructure_ HMU_tdstMemoryStructure_;
typedef struct sceGsStoreImage sceGsStoreImage;

struct sceGsStoreImage {
    unsigned char data[0x60];
};

typedef enum e_ucHMUStaticBlocks {
    E_ucHMUFirstMemoryBlock = 0,
    E_ucHMUFixNormalMemoryBlock = 0,
    E_ucHMUFixTempMemoryBlock = 1,
    E_ucHMULevelNormalMemoryBlock = 2,
    E_ucHMULevelTempMemoryBlock = 3,
    E_ucHMUTransition1NormalMemoryBlock = 4,
    E_ucHMUTransition1TempMemoryBlock = 5,
    E_ucHMUTransition2NormalMemoryBlock = 6,
    E_ucHMUTransition2TempMemoryBlock = 7,
    E_ucHMUBinaryMemoryBlock = 8,
    E_ucHMUMaxBlocksNb = 9,
} e_ucHMUStaticBlocks;

struct tdstBlockInfo_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
};

struct HMU_tdstMemoryStructure_ {
    e_ucHMUStaticBlocks m_eActualNormalMemoryBlock; /* +0x0 */
    e_ucHMUStaticBlocks m_eActualTempMemoryBlock; /* +0x4 */
    unsigned char bUseDynamicMemory[9]; /* +0x8 */
    unsigned char bIsInitialized[9]; /* +0x11 */
    unsigned int u32NumberOfAllocation[9]; /* +0x1c */
};

unsigned char g_ucHMUModuleId;
HMU_tdstMemoryStructure_ HMU_g_stMemoryStructure;
tdstBlockInfo_ g_a_stHMUBlocksInfo[9];
unsigned int HMU_g_ulLastSndDirectAlloc;
/* The direct sound allocation table: the debug record types it as int[1000],
   but the retail code stores and compares pointers in it. */
void* HMU_g_p_vSndDirectSoundAlloc[1000];

/* Cross-translation-unit declarations.
 *
 * HMU_fn_ucGetActualTempMemoryBlockUsed and HMU_fn_ucGetActualNormalMemoryBlockUsed
 * are used as int-returning here: the retail code masks their result with
 * andi 0xFF, which only happens when the callee is not declared to return
 * an unsigned char. */
void HMU_fn_vEnterCriticalSection(void);
void HMU_fn_vLeaveCriticalSection(void);
unsigned char HMU_fn_bIsInitialized(void);
int HMU_fn_ucGetActualTempMemoryBlockUsed(void);
int HMU_fn_ucGetActualNormalMemoryBlockUsed(void);
void HMU_fn_vSetActualTempMemoryBlock(unsigned char ucBlocNumber);
void HMU_fn_vSetActualNormalMemoryBlock(unsigned char ucBlocNumber);
void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc);
void Mmg_fn_vWhereIs(void* p_vPtr, unsigned short* p_uwModuleBlockId, void** pp_vBeginAdr);
void Mmg_fn_v_SetModeAlloc(unsigned char ucModuleId, unsigned char ucNewMode, unsigned char ucChannel);
void fn_vGenFree(void* p_vMemBlock, unsigned char ucChannel);
void* malloc(unsigned int u32Size);
void free(void* p_vPtr);
void* memset(void* p_vDest, int iValue, size_t u32Size);
void Erm_fn_ClearLastError(int lError);
void Erm_fn_v_UpdateLastError(unsigned short uwStartOfWarningsId, unsigned char ucModuleId,
                              unsigned int ulChannelId, unsigned short uwErrNum, int lDebugInfo,
                              unsigned char ucOpenInfoWindow, unsigned char ucStopForDebug,
                              char* szPersonalMsg);

void GLI_vGsStoreFrameBufferInto128x128x16__FPUssiis(unsigned short* _DestinationBuffer, short vram, int WIDTH, short CurrentPSM)
{
    unsigned int x;
    unsigned int B;
    unsigned int G;
    unsigned int R;
    unsigned int DestY;
    unsigned char* ram;
    unsigned char* tempram;
    sceDmaChan* d1;
    short spsm;
    int h;
    sceGsStoreImage gssi;
    /* TODO: decompile from asm/... */
}

void HMU_fn_vSndFree(void** p_vPointer)
{
    unsigned char bDirectFreeDone;
    unsigned int i;
    unsigned char ucOldHMUTempBloc;
    void* p_vBeginBloc;
    unsigned short uwBlocId;

    bDirectFreeDone = 0;
    HMU_fn_vEnterCriticalSection();
    Mmg_fn_vWhereIs(*p_vPointer, &uwBlocId, &p_vBeginBloc);
    if (HMU_fn_bIsInitialized() && uwBlocId != 0xFFFF)
    {
        /* The pointer belongs to a static memory block, so it is not one of
           the direct sound allocations: there is nothing to look up. */
    }
    else
    {
        for (i = 0; i <= HMU_g_ulLastSndDirectAlloc && !bDirectFreeDone; i++)
        {
            if (HMU_g_p_vSndDirectSoundAlloc[i] == *p_vPointer)
            {
                free(*p_vPointer);
                *p_vPointer = NULL;
                HMU_g_p_vSndDirectSoundAlloc[i] = NULL;
                bDirectFreeDone = 1;
            }
        }
    }
    if (HMU_fn_bIsInitialized() && !bDirectFreeDone)
    {
        ucOldHMUTempBloc = (unsigned char)HMU_fn_ucGetActualTempMemoryBlockUsed();
        /* Both branches select the same temporary block, as in the retail code. */
        if (HMU_g_stMemoryStructure.bIsInitialized[1])
            HMU_fn_vSetActualTempMemoryBlock(1);
        else
            HMU_fn_vSetActualTempMemoryBlock(1);
        HMU_fn_vFree(p_vPointer, 1);
        HMU_fn_vSetActualTempMemoryBlock(ucOldHMUTempBloc);
    }
    HMU_fn_vLeaveCriticalSection();
}

void* HMU_fn_pvSndMalloc(unsigned int u32Size)
{
    unsigned int i;
    unsigned char ucOldHMUTempBloc;
    void* p_vReturn;
    static unsigned char bFirstTime = 1;

    HMU_fn_vEnterCriticalSection();
    if (bFirstTime)
    {
        memset(HMU_g_p_vSndDirectSoundAlloc, 0, sizeof(HMU_g_p_vSndDirectSoundAlloc));
        HMU_g_ulLastSndDirectAlloc = 0;
        bFirstTime = 0;
    }
    if (!HMU_fn_bIsInitialized())
    {
        p_vReturn = malloc(u32Size);
        /* Look for the first free slot of the direct sound allocation table. */
        for (i = 0; i < 1000 && HMU_g_p_vSndDirectSoundAlloc[i] != NULL; i++) ;
        if (i != 1000)
        {
            HMU_g_p_vSndDirectSoundAlloc[i] = p_vReturn;
            HMU_g_ulLastSndDirectAlloc = (i > HMU_g_ulLastSndDirectAlloc) ? i : HMU_g_ulLastSndDirectAlloc;
        }
        else
        {
            Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(10, g_ucHMUModuleId, 0, 9, -1, 255, 255, 0);
        }
    }
    else
    {
        ucOldHMUTempBloc = (unsigned char)HMU_fn_ucGetActualTempMemoryBlockUsed();
        /* Both branches select the same temporary block, as in the retail code. */
        if (HMU_g_stMemoryStructure.bIsInitialized[1])
            HMU_fn_vSetActualTempMemoryBlock(1);
        else
            HMU_fn_vSetActualTempMemoryBlock(1);
        p_vReturn = HMU_fn_p_vMalloc(u32Size, 1);
        HMU_fn_vSetActualTempMemoryBlock(ucOldHMUTempBloc);
    }
    HMU_fn_vLeaveCriticalSection();
    return p_vReturn;
}

void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc)
{
    void* p_vBeginBloc;
    unsigned short uwBlocId;
    e_ucHMUStaticBlocks eMemoryBlockUse;

    HMU_fn_vEnterCriticalSection();
    if (!HMU_fn_bIsInitialized())
    {
        HMU_fn_vLeaveCriticalSection();
        return;
    }
    Mmg_fn_vWhereIs(*p_vPointer, &uwBlocId, &p_vBeginBloc);
    if (uwBlocId == 0xFFFF)
    {
        if (bTempMalloc)
            eMemoryBlockUse = (e_ucHMUStaticBlocks)(HMU_fn_ucGetActualTempMemoryBlockUsed() & 0xFF);
        else
            eMemoryBlockUse = (e_ucHMUStaticBlocks)(HMU_fn_ucGetActualNormalMemoryBlockUsed() & 0xFF);
        Mmg_fn_v_SetModeAlloc(g_ucHMUModuleId, 0xFF, 0);
    }
    else
    {
        eMemoryBlockUse = (e_ucHMUStaticBlocks)(uwBlocId & 0xFF);
        if (!HMU_g_stMemoryStructure.bIsInitialized[eMemoryBlockUse])
        {
            HMU_fn_vLeaveCriticalSection();
            return;
        }
        Mmg_fn_v_SetModeAlloc(g_ucHMUModuleId, (unsigned char)eMemoryBlockUse, 0);
    }
    HMU_g_stMemoryStructure.u32NumberOfAllocation[eMemoryBlockUse]--;
    fn_vGenFree(*p_vPointer, 0);
    *p_vPointer = NULL;
    HMU_fn_vLeaveCriticalSection();
}
