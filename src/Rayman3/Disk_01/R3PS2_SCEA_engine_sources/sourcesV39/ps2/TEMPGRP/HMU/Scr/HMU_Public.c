/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Public.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct HMU_tdstMemoryStructure_ HMU_tdstMemoryStructure_;

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

struct HMU_tdstMemoryStructure_ {
    e_ucHMUStaticBlocks m_eActualNormalMemoryBlock; /* +0x0 */
    e_ucHMUStaticBlocks m_eActualTempMemoryBlock; /* +0x4 */
    unsigned char bUseDynamicMemory[9]; /* +0x8 */
    unsigned char bIsInitialized[9]; /* +0x11 */
    unsigned int u32NumberOfAllocation[9]; /* +0x1c */
};

unsigned char HMU_g_bInitialized;
HMU_tdstMemoryStructure_ HMU_g_stMemoryStructure;
int g_a_p_stMmgModuleBlocksInfo[255];
unsigned char g_ucHMUModuleId;

/* Retail callers pass seven arguments (a0..a3, t0..t2) and the callee reads t1/t2;
   the recovered five-parameter debug declaration in cpammg.c drops two of them. */
void Mmg_fn_vInitSpecificBlock(unsigned char _ucBlockId, unsigned char _ucModuleId, int _p_stMyBlocksInfo, unsigned int _ulSize, unsigned int _ulMaxNbOfMalloc, unsigned char _ucAlignment, unsigned char _ucMode);
void Mmg_fn_vDeleteBlock(unsigned char ucBlockId, unsigned char ucMode, int p_stMyBlocksInfo);

void HMU_fn_vEnterCriticalSection(void);
void HMU_fn_vLeaveCriticalSection(void);
unsigned char HMU_fn_ucGetActualTempMemoryBlockUsed(void);
unsigned char HMU_fn_ucGetActualNormalMemoryBlockUsed(void);
void Erm_fn_ClearLastError();
void Erm_fn_v_UpdateLastError();
void Mmg_fn_vDisableAllocationError(void);
void Mmg_fn_vEnableAllocationError(void);
void Mmg_fn_v_SetModeAlloc(unsigned char ucModuleId, unsigned char ucNewMode, unsigned char ucChannel);
void* fn_p_vGenAlloc(unsigned int ulSize, unsigned char ucChannel);
void* memset(void* s, int c, size_t n);

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc)
{
    void* p_vReturn;
    e_ucHMUStaticBlocks eMemoryBlockUse;

    HMU_fn_vEnterCriticalSection();
    if (bTempMalloc)
    {
        eMemoryBlockUse = HMU_fn_ucGetActualTempMemoryBlockUsed();
    }
    else
    {
        eMemoryBlockUse = HMU_fn_ucGetActualNormalMemoryBlockUsed();
    }
    if (u32Size == 0)
    {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(10, g_ucHMUModuleId, 0, 4, -1, 255, 255, NULL);
    }
    if (bTempMalloc)
    {
        Mmg_fn_vDisableAllocationError();
    }
    Mmg_fn_v_SetModeAlloc(g_ucHMUModuleId, eMemoryBlockUse, 0);
    p_vReturn = fn_p_vGenAlloc(u32Size, 0);
    if (p_vReturn == NULL)
    {
        if (bTempMalloc)
        {
            if (!HMU_g_stMemoryStructure.bUseDynamicMemory[eMemoryBlockUse])
            {
                HMU_g_stMemoryStructure.bUseDynamicMemory[eMemoryBlockUse] = 1;
            }
            Mmg_fn_v_SetModeAlloc(g_ucHMUModuleId, 255, 0);
            p_vReturn = fn_p_vGenAlloc(u32Size, 0);
            if (p_vReturn == NULL)
            {
                Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(10, g_ucHMUModuleId, 0, 6, -1, 255, 255, NULL);
            }
        }
        else
        {
            Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(10, g_ucHMUModuleId, 0, 8, -1, 255, 255, NULL);
        }
    }
    Mmg_fn_vEnableAllocationError();
    if (!bTempMalloc && p_vReturn != NULL)
    {
        memset(p_vReturn, 0, u32Size);
    }
    HMU_g_stMemoryStructure.u32NumberOfAllocation[eMemoryBlockUse]++;
    HMU_fn_vLeaveCriticalSection();
    return p_vReturn;
}

void HMU_fn_vSetMemoriesInBinaryMode(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_g_stMemoryStructure.m_eActualNormalMemoryBlock = E_ucHMUBinaryMemoryBlock;
    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vInitBinaryMemory(unsigned int _ulNormalMemSize)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vInitSpecificBlock(E_ucHMUBinaryMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId], _ulNormalMemSize, 100000, 4, 12);

    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUBinaryMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUBinaryMemoryBlock] = 1;

    HMU_fn_vLeaveCriticalSection();
}

unsigned char HMU_fn_ucGetTransition2NormalMemoryBlock(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_fn_vLeaveCriticalSection();
    return 6;
}

unsigned char HMU_fn_ucGetTransition1NormalMemoryBlock(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_fn_vLeaveCriticalSection();
    return 4;
}

void HMU_fn_vSetMemoriesInTransition2Mode(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_g_stMemoryStructure.m_eActualNormalMemoryBlock = E_ucHMUTransition2NormalMemoryBlock;
    HMU_g_stMemoryStructure.m_eActualTempMemoryBlock = E_ucHMUTransition2TempMemoryBlock;
    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vSetMemoriesInTransition1Mode(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_g_stMemoryStructure.m_eActualNormalMemoryBlock = E_ucHMUTransition1NormalMemoryBlock;
    HMU_g_stMemoryStructure.m_eActualTempMemoryBlock = E_ucHMUTransition1TempMemoryBlock;
    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vDeleteTransition2Memories(void)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vDeleteBlock(E_ucHMUTransition2NormalMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId]);
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition2NormalMemoryBlock] = 0;

    Mmg_fn_vDeleteBlock(E_ucHMUTransition2TempMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId]);
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition2TempMemoryBlock] = 0;


    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vDeleteTransition1Memories(void)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vDeleteBlock(E_ucHMUTransition1NormalMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId]);
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition1NormalMemoryBlock] = 0;

    Mmg_fn_vDeleteBlock(E_ucHMUTransition1TempMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId]);
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition1TempMemoryBlock] = 0;


    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vInitTempTransition2Memory(unsigned int _ulTempMemSize)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vInitSpecificBlock(E_ucHMUTransition2TempMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId], _ulTempMemSize, 100000, 4, 12);

    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUTransition2TempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition2TempMemoryBlock] = 1;

    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vInitNormalTransition2Memory(unsigned int _ulNormalMemSize)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vInitSpecificBlock(E_ucHMUTransition2NormalMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId], _ulNormalMemSize, 100000, 4, 13);

    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUTransition2NormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition2NormalMemoryBlock] = 1;

    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vInitTempTransition1Memory(unsigned int _ulTempMemSize)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vInitSpecificBlock(E_ucHMUTransition1TempMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId], _ulTempMemSize, 100000, 4, 12);

    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUTransition1TempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition1TempMemoryBlock] = 1;

    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vInitNormalTransition1Memory(unsigned int _ulNormalMemSize)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vInitSpecificBlock(E_ucHMUTransition1NormalMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId], _ulNormalMemSize, 100000, 4, 13);

    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUTransition1NormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition1NormalMemoryBlock] = 1;

    HMU_fn_vLeaveCriticalSection();
}

unsigned char HMU_fn_ucGetLevelNormalMemoryBlock(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_fn_vLeaveCriticalSection();
    return 2;
}

unsigned char HMU_fn_ucGetFixNormalMemoryBlock(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_fn_vLeaveCriticalSection();
    return E_ucHMUFixNormalMemoryBlock;
}

unsigned char HMU_fn_ucGetActualTempMemoryBlockUsed(void)
{
    unsigned char ucReturn;
    HMU_fn_vEnterCriticalSection();
    ucReturn = HMU_g_stMemoryStructure.m_eActualTempMemoryBlock;
    HMU_fn_vLeaveCriticalSection();
    return ucReturn;
}

unsigned char HMU_fn_ucGetActualNormalMemoryBlockUsed(void)
{
    unsigned char ucReturn;
    HMU_fn_vEnterCriticalSection();
    ucReturn = HMU_g_stMemoryStructure.m_eActualNormalMemoryBlock;
    HMU_fn_vLeaveCriticalSection();
    return ucReturn;
}

void HMU_fn_vSetActualTempMemoryBlock(unsigned char ucBlocNumber)
{
    HMU_fn_vEnterCriticalSection();
    HMU_g_stMemoryStructure.m_eActualTempMemoryBlock = ucBlocNumber;
    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vSetActualNormalMemoryBlock(unsigned char ucBlocNumber)
{
    HMU_fn_vEnterCriticalSection();
    HMU_g_stMemoryStructure.m_eActualNormalMemoryBlock = ucBlocNumber;
    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vSetMemoriesInLevelMode(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_g_stMemoryStructure.m_eActualNormalMemoryBlock = E_ucHMULevelNormalMemoryBlock;
    HMU_g_stMemoryStructure.m_eActualTempMemoryBlock = E_ucHMULevelTempMemoryBlock;
    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vSetMemoriesInFixMode(void)
{
    HMU_fn_vEnterCriticalSection();
    HMU_g_stMemoryStructure.m_eActualNormalMemoryBlock = E_ucHMUFixNormalMemoryBlock;
    HMU_g_stMemoryStructure.m_eActualTempMemoryBlock = E_ucHMUFixTempMemoryBlock;
    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vDeleteLevelMemories(void)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vDeleteBlock(E_ucHMULevelNormalMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId]);
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMULevelNormalMemoryBlock] = 0;

    Mmg_fn_vDeleteBlock(E_ucHMULevelTempMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId]);
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMULevelTempMemoryBlock] = 0;


    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vInitTempLevelMemory(unsigned int _ulTempMemSize)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vInitSpecificBlock(E_ucHMULevelTempMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId], _ulTempMemSize, 100000, 4, 12);

    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMULevelTempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMULevelTempMemoryBlock] = 1;

    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vInitNormalLevelMemory(unsigned int _ulNormalMemSize)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vInitSpecificBlock(E_ucHMULevelNormalMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId], _ulNormalMemSize, 100000, 4, 13);

    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMULevelNormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMULevelNormalMemoryBlock] = 1;

    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vInitTempFixMemory(unsigned int _ulTempMemSize)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vInitSpecificBlock(E_ucHMUFixTempMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId], _ulTempMemSize, 100000, 4, 12);

    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUFixTempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUFixTempMemoryBlock] = 1;

    HMU_fn_vLeaveCriticalSection();
}

void HMU_fn_vInitNormalFixMemory(unsigned int _ulNormalMemSize)
{
    HMU_fn_vEnterCriticalSection();

    Mmg_fn_vInitSpecificBlock(E_ucHMUFixNormalMemoryBlock, g_ucHMUModuleId, g_a_p_stMmgModuleBlocksInfo[g_ucHMUModuleId], _ulNormalMemSize, 100000, 4, 13);

    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUFixNormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUFixNormalMemoryBlock] = 1;

    HMU_fn_vLeaveCriticalSection();
}

/* Retail passes a third argument (a2 = 100000); the debug declaration has two. */
void Mmg_fn_v_InitMmg(unsigned char ucModuleId, unsigned char ucMaxBlocksNb, unsigned int ulMaxNbOfMalloc);
extern unsigned char Erm_fn_ucInitErrMsg(void);
void Mmg_fn_cCheckAlignmentValidity(void);

void HMU_fn_vFirstInit(void)
{
    HMU_fn_vCreateCriticalSection();
    HMU_fn_vEnterCriticalSection();

    if (g_ucHMUModuleId == 0xff) g_ucHMUModuleId = Erm_fn_ucInitErrMsg();
    Mmg_fn_v_InitMmg(g_ucHMUModuleId, E_ucHMUMaxBlocksNb, 100000);
    Mmg_fn_cCheckAlignmentValidity();

    HMU_g_stMemoryStructure.m_eActualNormalMemoryBlock = E_ucHMUFixNormalMemoryBlock;
    HMU_g_stMemoryStructure.m_eActualTempMemoryBlock = E_ucHMUFixTempMemoryBlock;
    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUFixNormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUFixNormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUFixTempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUFixTempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMULevelNormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMULevelNormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMULevelTempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMULevelTempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUTransition1NormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition1NormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUTransition1TempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition1TempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUTransition2NormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition2NormalMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bUseDynamicMemory[E_ucHMUTransition2TempMemoryBlock] = 0;
    HMU_g_stMemoryStructure.bIsInitialized[E_ucHMUTransition2TempMemoryBlock] = 0;

    HMU_g_bInitialized = 1;

    HMU_fn_vLeaveCriticalSection();
}
