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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\RND\RND_Main.c lines 12–23 */
/* addr: 0x00318ea0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 12
 *   +0x0004 -> line 15
 *   +0x0008 -> line 12
 *   +0x0014 -> line 15
 *   +0x0018 -> line 18
 *   +0x0028 -> line 19
 *   +0x0030 -> line 20
 *   +0x0034 -> line 23
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vCreateCriticalSection(_stCriticalSection* p_stCS)
{
    SemaParam S;
    S.initCount = 1;
    S.maxCount = 1;
    p_stCS->Sid = CreateSema(&S);
    p_stCS->OwnerThreadId = -1;
    p_stCS->ReentrancyCount = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\RND\RND_Main.c lines 249–252 */
/* addr: 0x00318ef0  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 249
 *   +0x0058 -> line 250
 *   +0x005c -> line 249
 *   +0x0060 -> line 250
 *   +0x0064 -> line 249
 *   +0x0068 -> line 250
 *   +0x0070 -> line 249
 *   +0x0074 -> line 250
 *   +0x0080 -> line 249
 *   +0x0084 -> line 250
 *   +0x00b4 -> line 252
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float RND_fn_xGetRealRandomValue(unsigned int _lIndexNumber, float _xMin, float _xMax)
{
    float xValue = _xMin + RND_g_stRandomStructure.xInverseMaxValueInTable * ((_xMax - _xMin) * (float)((unsigned int*)RND_g_stRandomStructure.p_ulTable)[RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]]);
    RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]++; RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] += RND_BaseSeed % 255; if (RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] >= RND_g_stRandomStructure.ulSizeOfTable) RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] = 0;

    return xValue;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\RND\RND_Main.c lines 237–241 */
/* addr: 0x00318fb0  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 237
 *   +0x0024 -> line 239
 *   +0x0028 -> line 237
 *   +0x0038 -> line 239
 *   +0x003c -> line 237
 *   +0x0048 -> line 239
 *   +0x0058 -> line 237
 *   +0x0068 -> line 239
 *   +0x0098 -> line 241
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int RND_fn_lGetLongRandomValue(unsigned int _lIndexNumber, int _lMin, int _lMax)
{
{
    int lValue = _lMin + ((_lMax + 1 - _lMin) * (int)((unsigned int*)RND_g_stRandomStructure.p_ulTable)[RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]]) / (RND_g_stRandomStructure.ulMaxValueInTable + 1);

    RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]++; RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] += RND_BaseSeed % 255; if (RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] >= RND_g_stRandomStructure.ulSizeOfTable) RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] = 0;

    return lValue;
}
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\RND\RND_Main.c lines 217–221 */
/* addr: 0x00319050  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 217
 *   +0x0024 -> line 219
 *   +0x0028 -> line 217
 *   +0x0038 -> line 219
 *   +0x003c -> line 217
 *   +0x0048 -> line 219
 *   +0x0058 -> line 217
 *   +0x0068 -> line 219
 *   +0x0098 -> line 221
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int RND_fn_ulGetUnsignedLongRandomValue(unsigned int _lIndexNumber, unsigned int _ulMin, unsigned int _ulMax)
{
    unsigned int ulValue = _ulMin + ((_ulMax + 1 - _ulMin) * ((unsigned int*)RND_g_stRandomStructure.p_ulTable)[RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]]) / (RND_g_stRandomStructure.ulMaxValueInTable + 1);

    RND_g_stRandomStructure.a_ulIndex[_lIndexNumber]++; RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] += RND_BaseSeed % 255; if (RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] >= RND_g_stRandomStructure.ulSizeOfTable) RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] = 0;

    return ulValue;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\RND\RND_Main.c lines 205–211 */
/* addr: 0x003190f0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 205
 *   +0x0008 -> line 206
 *   +0x0010 -> line 208
 *   +0x0024 -> line 210
 *   +0x0034 -> line 211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void RDN_fn_vSetRandomSeed(unsigned int _lIndexNumber, int _lNewSeed)
{
    if (_lNewSeed < 0)
        _lNewSeed = 0;
    else
        _lNewSeed = _lNewSeed % (int)RND_g_stRandomStructure.ulSizeOfTable;

    RND_g_stRandomStructure.a_ulIndex[_lIndexNumber] = _lNewSeed;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\RND\RND_Main.c lines 116–122 */
/* addr: 0x00319130  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 116
 *   +0x0004 -> line 117
 *   +0x0008 -> line 116
 *   +0x000c -> line 117
 *   +0x001c -> line 118
 *   +0x0048 -> line 120
 *   +0x005c -> line 121
 *   +0x0060 -> line 122
 *   +0x0064 -> line 121
 *   +0x006c -> line 122
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int RND_fn_hReserveANewHandleIndex(void)
{
    if (RND_g_stRandomStructure.hLastUsedIndex > 50)
    {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(7, g_ucRNDModuleId, 0, 5, -1, 255, 255, NULL);
    }

    RND_g_stRandomStructure.hLastUsedIndex++;
    return RND_g_stRandomStructure.hLastUsedIndex - 1;
}
