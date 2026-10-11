/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\RND\RND_Main.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _stCriticalSection _stCriticalSection;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct RND_tdstRandom_ RND_tdstRandom_;
typedef struct SemaParam SemaParam;

struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};

struct _stCriticalSection {
    int Sid;
    int OwnerThreadId;
    int ReentrancyCount;
};

extern int CreateSema(SemaParam* param);

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct RND_tdstRandom_ {
    unsigned int ulSizeOfTable; /* +0x0 */
    unsigned int a_ulIndex[50]; /* +0x4 */
    unsigned int hLastUsedIndex; /* +0xcc */
    unsigned int ulMaxValueInTable; /* +0xd0 */
    float xInverseMaxValueInTable; /* +0xd4 */
    int p_ulTable; /* +0xd8 */
};

unsigned char g_ucRNDModuleId;
unsigned int RND_BaseSeed;
RND_tdstRandom_ RND_g_stRandomStructure;

void PS2_fn_vCreateCriticalSection(_stCriticalSection* p_stCS)
{
    SemaParam S;
    S.initCount = 1;
    S.maxCount = 1;
    p_stCS->Sid = CreateSema(&S);
    p_stCS->OwnerThreadId = -1;
    p_stCS->ReentrancyCount = 0;
}

float RND_fn_xGetRealRandomValue(unsigned int _lIndexNumber, float _xMin, float _xMax)
{
    float xValue = _xMin + RND_g_stRandomStructure.xInverseMaxValueInTable * ((_xMax - _xMin) * (float)((unsigned int*)RND_g_stRandomStructure.p_ulTable)[RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]]);
    RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]++; RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] += RND_BaseSeed % 255; if (RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] >= RND_g_stRandomStructure.ulSizeOfTable) RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] = 0;

    return xValue;
}

int RND_fn_lGetLongRandomValue(unsigned int _lIndexNumber, int _lMin, int _lMax)
{
{
    int lValue = _lMin + ((_lMax + 1 - _lMin) * (int)((unsigned int*)RND_g_stRandomStructure.p_ulTable)[RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]]) / (RND_g_stRandomStructure.ulMaxValueInTable + 1);

    RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]++; RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] += RND_BaseSeed % 255; if (RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] >= RND_g_stRandomStructure.ulSizeOfTable) RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] = 0;

    return lValue;
}
}

unsigned int RND_fn_ulGetUnsignedLongRandomValue(unsigned int _lIndexNumber, unsigned int _ulMin, unsigned int _ulMax)
{
    unsigned int ulValue = _ulMin + ((_ulMax + 1 - _ulMin) * ((unsigned int*)RND_g_stRandomStructure.p_ulTable)[RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]]) / (RND_g_stRandomStructure.ulMaxValueInTable + 1);

    RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]++; RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] += RND_BaseSeed % 255; if (RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] >= RND_g_stRandomStructure.ulSizeOfTable) RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] = 0;

    return ulValue;
}

void RDN_fn_vSetRandomSeed(unsigned int _lIndexNumber, int _lNewSeed)
{
    if (_lNewSeed < 0)
        _lNewSeed = 0;
    else
        _lNewSeed = _lNewSeed % (int)RND_g_stRandomStructure.ulSizeOfTable;

    RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] = _lNewSeed;
}

unsigned int RND_fn_hReserveANewHandleIndex(void)
{
    if (RND_g_stRandomStructure.hLastUsedIndex > 50)
    {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(7, g_ucRNDModuleId, 0, 5, -1, 255, 255, NULL);
    }

    RND_g_stRandomStructure.hLastUsedIndex++;
    return RND_g_stRandomStructure.hLastUsedIndex - 1;
}
