/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/DNM.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstInformationHeaderOfBolckWithoutFree_ tdstInformationHeaderOfBolckWithoutFree_;
typedef struct tdstBlockInfoPriv_ tdstBlockInfoPriv_;
typedef struct tdstChannelInfo_ tdstChannelInfo_;
typedef struct tdstGeneralChannelsInfo_ tdstGeneralChannelsInfo_;
typedef struct tdstCurrentModeInfo_ tdstCurrentModeInfo_;
typedef struct tdstBlockInfo_ tdstBlockInfo_;
typedef struct _stCriticalSection _stCriticalSection;

/* Only the base block is reached from this module; the remaining blocks of
 * the retail DNM_stDynamics live in the MEC module's own copy. */
struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
};

struct tdstInformationHeaderOfBolckWithoutFree_ {
    unsigned char ucBoundededHeaderSize; /* +0x0 */
    unsigned char ucAlignment; /* +0x1 */
    unsigned char ucMode; /* +0x2 */
};

struct tdstBlockInfoPriv_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
};

struct tdstChannelInfo_ {
    unsigned int ulThreadId; /* +0x0 */
    unsigned char ucGroupId; /* +0x4 */
};

struct tdstGeneralChannelsInfo_ {
    unsigned char ucNbchannelUsed; /* +0x0 */
    unsigned char ucMAxNbChannel; /* +0x1 */
    tdstChannelInfo_* d_stTabChannelInfo; /* +0x4 */
};

struct tdstCurrentModeInfo_ {
    unsigned char ucModuleId; /* +0x0 */
    unsigned char ucMode; /* +0x1 */
    tdstBlockInfoPriv_* p_vTdstBlockInfoOrTdstDynInfo; /* +0x4 */
};

struct tdstBlockInfo_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
};

struct _stCriticalSection {
    int Sid; /* +0x0 */
    int OwnerThreadId; /* +0x4 */
    int ReentrancyCount; /* +0x8 */
};

/* The static allocator works on 16-byte cells.  The first quad word of a
 * cell holds the size of the free space (in cells), the second one the link
 * to the next free cell; the link lives in the user area of a freed cell, so
 * a free cell spans at least two cells and the user pointer is cell + 0x10. */
typedef __int128 tdstFreeCell_;

unsigned char g_ucMmgModuleId;
unsigned char Mmg_g_bAllocationError;
tdstGeneralChannelsInfo_ g_stGeneralChannelInfo;
_stCriticalSection g_MmgCriticalSection;
int g_d_stCurrentModeInfo;
int g_d_p_stMmgModuleDynInfo;
unsigned char g_a_ucBlocksNbInModule[255];
int g_a_p_stMmgModuleBlocksInfo[255];
unsigned char g_ucErmNbOfModule;

extern void PS2_fn_vCreateCriticalSection(_stCriticalSection* p_stCS);
extern unsigned char g_ucErmModuleId;
extern void Erm_fn_v_UpdateLastError(unsigned short uwStartOfWarningsId, unsigned char ucModuleId,
                                     unsigned int ulChannelId, unsigned short uwErrNum, int lDebugInfo,
                                     unsigned char ucOpenInfoWindow, unsigned char ucStopForDebug,
                                     char* szPersonalMsg);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 44–48 */
/* addr: 0x00313fc0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 44
 *   +0x002c -> line 46
 *   +0x0034 -> line 47
 *   +0x0038 -> line 48
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MEC_fn_bWallNormal(DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stNormal)
{
    if (p_stNormal->xZ > -p_stDynamic->m_tdstDynamicsBaseBlock.m_xCosSlope) { if (p_stNormal->xZ < p_stDynamic->m_tdstDynamicsBaseBlock.m_xCosSlope) {
        return 1;
    } }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 5152–5153 */
/* addr: 0x00314000  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5152
 *   +0x0004 -> line 5153
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Mmg_fn_vEnableAllocationError(void)
{
    Mmg_g_bAllocationError = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 5148–5148 */
/* addr: 0x00314010  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5148
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Mmg_fn_vDisableAllocationError(void)
{
    Mmg_g_bAllocationError = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 4624–4708 */
/* addr: 0x00314020  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4624
 *   +0x0018 -> line 4648
 *   +0x0024 -> line 4649
 *   +0x0040 -> line 4693
 *   +0x0044 -> line 4649
 *   +0x0048 -> line 4693
 *   +0x0054 -> line 4694
 *   +0x0058 -> line 4695
 *   +0x0078 -> line 4696
 *   +0x0084 -> line 4708
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Mmg_fn_v_InitMmg(unsigned char ucModuleId, unsigned char ucMaxBlocksNb)
{
    unsigned char ucI;
    tdstBlockInfoPriv_* p_stMyBlockInfo;
    if (ucMaxBlocksNb > 0) {
        g_a_p_stMmgModuleBlocksInfo[ucModuleId] = malloc(ucMaxBlocksNb * sizeof(tdstBlockInfoPriv_));
        for (p_stMyBlockInfo = (tdstBlockInfoPriv_*)g_a_p_stMmgModuleBlocksInfo[ucModuleId], ucI = 0; ucI < ucMaxBlocksNb; ucI++, p_stMyBlockInfo++) {
            p_stMyBlockInfo->p_cBeginBlock = -1;
        }
        g_a_ucBlocksNbInModule[ucModuleId] = ucMaxBlocksNb;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 4511–4587 */
/* addr: 0x003140c0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4511
 *   +0x0004 -> line 4533
 *   +0x0008 -> line 4511
 *   +0x0018 -> line 4533
 *   +0x0024 -> line 4547
 *   +0x0034 -> line 4578
 *   +0x0038 -> line 4562
 *   +0x003c -> line 4561
 *   +0x0040 -> line 4562
 *   +0x0048 -> line 4579
 *   +0x0088 -> line 4578
 *   +0x0098 -> line 4585
 *   +0x009c -> line 4579
 *   +0x00a0 -> line 4585
 *   +0x00a4 -> line 4579
 *   +0x00a8 -> line 4585
 *   +0x00b8 -> line 4586
 *   +0x00c4 -> line 4587
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Mmg_fn_vFirstInitMmgModule(unsigned char ucMaxNbChannel)
{
    unsigned char ucI;
    g_d_stCurrentModeInfo = malloc(ucMaxNbChannel * sizeof(tdstCurrentModeInfo_));
    g_stGeneralChannelInfo.d_stTabChannelInfo = (tdstChannelInfo_*)malloc(ucMaxNbChannel * sizeof(tdstChannelInfo_));
    g_stGeneralChannelInfo.ucMAxNbChannel = ucMaxNbChannel;
    g_stGeneralChannelInfo.ucNbchannelUsed = 1;
    for (ucI = 0; ucI < 255; ucI++) {
        g_a_p_stMmgModuleBlocksInfo[ucI] = 0;
    }
    PS2_fn_vCreateCriticalSection(&g_MmgCriticalSection);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 4480–4497 */
/* addr: 0x003141a0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4480
 *   +0x000c -> line 4482
 *   +0x0014 -> line 4480
 *   +0x0020 -> line 4481
 *   +0x0028 -> line 4482
 *   +0x0030 -> line 4483
 *   +0x0060 -> line 4497
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Mmg_fn_v_SetModeAlloc(unsigned char ucModuleId, unsigned char ucNewMode, unsigned char ucChannel)
{
    /* Retail addresses the mode-info array as (base + field offset) + index,
     * so the member offset is never folded into the store.  The shifted cast
     * reproduces that; it is not the original source spelling. */
    ((tdstCurrentModeInfo_*)(&((tdstCurrentModeInfo_*)g_d_stCurrentModeInfo)->ucMode))[ucChannel].ucModuleId = ucNewMode;
    ((tdstCurrentModeInfo_*)g_d_stCurrentModeInfo)[ucChannel].ucModuleId = ucModuleId;
    if ((unsigned char)ucNewMode != 0xFF) {
        *(int*)&((tdstCurrentModeInfo_*)(&((tdstCurrentModeInfo_*)g_d_stCurrentModeInfo)->p_vTdstBlockInfoOrTdstDynInfo))[ucChannel] =
            g_a_p_stMmgModuleBlocksInfo[ucModuleId] + ucNewMode * 16;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 4221–4264 */
/* addr: 0x00314210  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4221
 *   +0x0018 -> line 4222
 *   +0x0040 -> line 4225
 *   +0x0044 -> line 4224
 *   +0x004c -> line 4225
 *   +0x0058 -> line 4227
 *   +0x0070 -> line 4229
 *   +0x007c -> line 4230
 *   +0x0080 -> line 4231
 *   +0x0088 -> line 4237
 *   +0x008c -> line 4238
 *   +0x0098 -> line 4237
 *   +0x00a4 -> line 4238
 *   +0x00b4 -> line 4239
 *   +0x00b8 -> line 4240
 *   +0x00c0 -> line 4241
 *   +0x00d0 -> line 4242
 *   +0x00e4 -> line 4243
 *   +0x0100 -> line 4244
 *   +0x0104 -> line 4245
 *   +0x010c -> line 4246
 *   +0x0110 -> line 4247
 *   +0x0114 -> line 4249
 *   +0x0118 -> line 4250
 *   +0x0148 -> line 4252
 *   +0x014c -> line 4250
 *   +0x0154 -> line 4252
 *   +0x0178 -> line 4264
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Mmg_fn_vWhereIs(void* p_vPtr, unsigned short* p_uwModuleBlockId, void** pp_vBeginAdr)
{
    tdstBlockInfoPriv_* a_stMyBlockInfo;
    unsigned char ucBlockId;
    unsigned char ucModuleId;
    static unsigned char lastModuleId;
    static unsigned char lastBlockId;
    /* Retail keeps the last searched module/block pair in file storage; the
     * range test is spelled as a failure-first chain because MWCC 3.0.1 drops
     * an unsigned "<=" that is combined with a ">=" in an && chain. */
    if (g_a_p_stMmgModuleBlocksInfo[lastModuleId] != 0) {
        if (lastBlockId < g_a_ucBlocksNbInModule[lastModuleId]) {
            a_stMyBlockInfo = (tdstBlockInfoPriv_*)g_a_p_stMmgModuleBlocksInfo[lastModuleId];
            a_stMyBlockInfo += lastBlockId;
            if (a_stMyBlockInfo->p_cBeginBlock == -1) {
                /* not in this block */
            } else if ((unsigned int)p_vPtr < (unsigned int)a_stMyBlockInfo->p_cBeginBlock) {
                /* not in this block */
            } else if ((unsigned int)a_stMyBlockInfo->p_cEndBlock < (unsigned int)p_vPtr) {
                /* not in this block */
            } else {
                *p_uwModuleBlockId = (unsigned short)((lastModuleId << 8) | lastBlockId);
                *pp_vBeginAdr = (void*)a_stMyBlockInfo->p_cBeginBlock;
                return;
            }
        }
    }
    *p_uwModuleBlockId = 0xFFFF;
    for (ucModuleId = 0; ucModuleId < g_ucErmNbOfModule && *p_uwModuleBlockId == 0xFFFF; ucModuleId++) {
        a_stMyBlockInfo = (tdstBlockInfoPriv_*)g_a_p_stMmgModuleBlocksInfo[ucModuleId];
        if (a_stMyBlockInfo != NULL) {
            for (ucBlockId = 0; ucBlockId < g_a_ucBlocksNbInModule[ucModuleId] && *p_uwModuleBlockId == 0xFFFF; ucBlockId++, a_stMyBlockInfo++) {
                if (a_stMyBlockInfo == NULL) {
                    /* no block table */
                } else if (a_stMyBlockInfo->p_cBeginBlock == -1) {
                    /* not in this block */
                } else if ((unsigned int)p_vPtr < (unsigned int)a_stMyBlockInfo->p_cBeginBlock) {
                    /* not in this block */
                } else if ((unsigned int)a_stMyBlockInfo->p_cEndBlock < (unsigned int)p_vPtr) {
                    /* not in this block */
                } else {
                    *p_uwModuleBlockId = (unsigned short)((ucModuleId << 8) | ucBlockId);
                    *pp_vBeginAdr = (void*)a_stMyBlockInfo->p_cBeginBlock;
                    lastModuleId = ucModuleId;
                    lastBlockId = ucBlockId;
                }
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 2755–2782 */
/* addr: 0x00314390  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2755
 *   +0x0004 -> line 2761
 *   +0x0008 -> line 2755
 *   +0x000c -> line 2761
 *   +0x0010 -> line 2755
 *   +0x0014 -> line 2761
 *   +0x0030 -> line 2778
 *   +0x0038 -> line 2779
 *   +0x0040 -> line 2781
 *   +0x0060 -> line 2782
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vStaFree(void* p_vMemBlock, unsigned char ucChannel);
void PS2_fn_vEnterCriticalSection(_stCriticalSection* p_stCS);
void PS2_fn_vLeaveCriticalSection(_stCriticalSection* p_stCS);
void free(void* ptr);

void fn_vGenFree(void* p_vMemBlock, unsigned char ucChannel)
{
    /* Permuter-found match (register allocation); the dead if re-reading the
     * channel info is not original source and needs cleaning up. */
    if (((tdstCurrentModeInfo_*)(&((tdstCurrentModeInfo_*)g_d_stCurrentModeInfo)->ucMode))[ucChannel].ucModuleId != 0xff)
    {
        fn_vStaFree(p_vMemBlock, ucChannel);
    }
    else
    {
        PS2_fn_vEnterCriticalSection(&g_MmgCriticalSection);
        free((char*)p_vMemBlock - 16);
        if (((tdstCurrentModeInfo_*)(&((tdstCurrentModeInfo_*)g_d_stCurrentModeInfo)->ucMode))[ucChannel].ucModuleId && ((tdstCurrentModeInfo_*)(&((tdstCurrentModeInfo_*)g_d_stCurrentModeInfo)->ucMode))[ucChannel].ucModuleId)
        {
        }
        PS2_fn_vLeaveCriticalSection(&g_MmgCriticalSection);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 2632–2745 */
/* addr: 0x00314400  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2632
 *   +0x0004 -> line 2716
 *   +0x0008 -> line 2632
 *   +0x000c -> line 2716
 *   +0x0044 -> line 2745
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* fn_p_vStaAlloc(unsigned int ulSize, unsigned char ucChannel);
unsigned long long* fn_p_vDynAlloc(unsigned int ulSize);

void fn_p_vGenAlloc(unsigned int ulSize, unsigned char ucChannel)
{
    /* Permuter-found match (register allocation); the dead if and the
     * long long temporary are not original source and need cleaning up. */
    long long new_var;
    if (((tdstCurrentModeInfo_*)(&((tdstCurrentModeInfo_*)(new_var = g_d_stCurrentModeInfo))->ucMode))[ucChannel].ucModuleId != 0xff)
    {
        fn_p_vStaAlloc(ulSize, ucChannel);
    }
    else
    {
        if ((!((tdstCurrentModeInfo_*)(&((tdstCurrentModeInfo_*)g_d_stCurrentModeInfo)->ucMode))[ucChannel].ucModuleId) && (!((tdstCurrentModeInfo_*)(&((tdstCurrentModeInfo_*)g_d_stCurrentModeInfo)->ucMode))[ucChannel].ucModuleId))
        {
        }
        fn_p_vDynAlloc(ulSize);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 1304–1518 */
/* addr: 0x00314450  size: 492 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1304
 *   +0x0004 -> line 1311
 *   +0x0008 -> line 1304
 *   +0x000c -> line 1311
 *   +0x0010 -> line 1304
 *   +0x0014 -> line 1336
 *   +0x0018 -> line 1304
 *   +0x0020 -> line 1311
 *   +0x0030 -> line 1336
 *   +0x003c -> line 1337
 *   +0x005c -> line 1341
 *   +0x0068 -> line 1380
 *   +0x006c -> line 1381
 *   +0x0078 -> line 1398
 *   +0x0098 -> line 1401
 *   +0x00a0 -> line 1405
 *   +0x00a4 -> line 1406
 *   +0x00b8 -> line 1433
 *   +0x00c0 -> line 1435
 *   +0x00dc -> line 1438
 *   +0x0104 -> line 1439
 *   +0x0108 -> line 1446
 *   +0x0110 -> line 1448
 *   +0x011c -> line 1453
 *   +0x0124 -> line 1457
 *   +0x0140 -> line 1458
 *   +0x0168 -> line 1459
 *   +0x016c -> line 1466
 *   +0x0174 -> line 1468
 *   +0x017c -> line 1472
 *   +0x0198 -> line 1473
 *   +0x01b4 -> line 1474
 *   +0x01b8 -> line 1486
 *   +0x01c0 -> line 1488
 *   +0x01cc -> line 1517
 *   +0x01d8 -> line 1518
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vStaFree(void* p_vMemBlock, unsigned char ucChannel)
{
    long double* param0;
    long double* p_uaAfterFreeSpace;
    long double* p_uaSizeMalloc;
    long double* p_uaNextFree;
    tdstBlockInfoPriv_* p_stMyBlockInfo;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 961–1292 */
/* addr: 0x00314640  size: 1144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 961
 *   +0x0004 -> line 962
 *   +0x0008 -> line 961
 *   +0x000c -> line 962
 *   +0x0010 -> line 961
 *   +0x0028 -> line 962
 *   +0x0034 -> line 982
 *   +0x003c -> line 987
 *   +0x0044 -> line 990
 *   +0x0050 -> line 996
 *   +0x0060 -> line 1001
 *   +0x0074 -> line 1002
 *   +0x0078 -> line 1008
 *   +0x007c -> line 1010
 *   +0x0084 -> line 1012
 *   +0x00a8 -> line 1014
 *   +0x00cc -> line 1015
 *   +0x00d0 -> line 1016
 *   +0x00e8 -> line 1019
 *   +0x00f0 -> line 1023
 *   +0x00f4 -> line 1022
 *   +0x00f8 -> line 1023
 *   +0x0100 -> line 1025
 *   +0x0110 -> line 1026
 *   +0x0118 -> line 1072
 *   +0x0130 -> line 1074
 *   +0x013c -> line 1077
 *   +0x0144 -> line 1087
 *   +0x014c -> line 1088
 *   +0x0158 -> line 1089
 *   +0x0160 -> line 1093
 *   +0x0164 -> line 1095
 *   +0x016c -> line 1097
 *   +0x0170 -> line 1099
 *   +0x0178 -> line 1097
 *   +0x0180 -> line 1099
 *   +0x0188 -> line 1102
 *   +0x0194 -> line 1105
 *   +0x019c -> line 1108
 *   +0x01a4 -> line 1114
 *   +0x01b0 -> line 1132
 *   +0x01d4 -> line 1135
 *   +0x01d8 -> line 1168
 *   +0x01e0 -> line 1169
 *   +0x01e8 -> line 1174
 *   +0x01f4 -> line 1192
 *   +0x0218 -> line 1197
 *   +0x0224 -> line 1198
 *   +0x022c -> line 1205
 *   +0x0230 -> line 1213
 *   +0x024c -> line 1217
 *   +0x0258 -> line 1218
 *   +0x0264 -> line 1220
 *   +0x0270 -> line 1226
 *   +0x0294 -> line 1230
 *   +0x02a0 -> line 1231
 *   +0x02a8 -> line 1237
 *   +0x0314 -> line 1244
 *   +0x0338 -> line 1249
 *   +0x0348 -> line 1251
 *   +0x0358 -> line 1255
 *   +0x035c -> line 1256
 *   +0x0384 -> line 1257
 *   +0x0388 -> line 1261
 *   +0x0398 -> line 1263
 *   +0x03b8 -> line 1265
 *   +0x03c0 -> line 1270
 *   +0x03e4 -> line 1277
 *   +0x03e8 -> line 1279
 *   +0x03f0 -> line 1277
 *   +0x03f4 -> line 1283
 *   +0x040c -> line 1284
 *   +0x0448 -> line 1287
 *   +0x0454 -> line 1288
 *   +0x0458 -> line 1292
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Reconstructed from the retail code.  The free list, the cell split and the
 * debug signature handling follow the target instruction for instruction;
 * what is still missing is the exact register allocation (the retail keeps
 * the size in $s0, the block info in $s1, the previous cell in $s2, the
 * "found" flag in $s3 and the current cell in $s4) and the line table. */
void* fn_p_vStaAlloc(unsigned int ulSize, unsigned char ucChannel)
{
    char* param0;
    tdstInformationHeaderOfBolckWithoutFree_* p_stInfoHeaderBolck;
    unsigned int ulI;
    unsigned char b_ucFound;
    tdstFreeCell_* p_uaBeforeMyFreeSpace;
    tdstFreeCell_* p_uaMyFreeSpace;
    tdstBlockInfoPriv_* p_stMyBlockInfo;
    p_stMyBlockInfo = *((tdstBlockInfoPriv_**)&((tdstCurrentModeInfo_*)g_d_stCurrentModeInfo)->p_vTdstBlockInfoOrTdstDynInfo + ucChannel * 2);
    if (ulSize == 0) {
        return NULL;
    }
    PS2_fn_vEnterCriticalSection(&g_MmgCriticalSection);
    p_uaMyFreeSpace = (tdstFreeCell_*)p_stMyBlockInfo->p_cFirstFree;
    if ((int)p_uaMyFreeSpace != -1) {
        p_uaBeforeMyFreeSpace = NULL;
        b_ucFound = 0;
        if (ulSize & 0xF) {
            ulSize = (ulSize & 0xFFFFFFF0) + 0x10;
        }
        ulI = (ulSize >> 4) + 1;
        p_uaBeforeMyFreeSpace = p_uaMyFreeSpace;
        while (p_uaMyFreeSpace != NULL && !b_ucFound) {
            if ((unsigned int)p_uaMyFreeSpace < (unsigned int)p_stMyBlockInfo->p_cBeginBlock || (unsigned int)p_stMyBlockInfo->p_cEndBlock < (unsigned int)p_uaMyFreeSpace) {
                Erm_fn_v_UpdateLastError(0x1D, g_ucMmgModuleId, 0, 0x17, -1, 0xFF, 0xFF, 0);
            }
            if (!(p_uaMyFreeSpace[0] < (tdstFreeCell_)ulI)) {
                b_ucFound = 0xFF;
            } else {
                p_uaBeforeMyFreeSpace = p_uaMyFreeSpace;
                p_uaMyFreeSpace = (tdstFreeCell_*)p_uaMyFreeSpace[1];
            }
        }
        if (b_ucFound) {
            {
                int iFreeSize = (int)p_uaMyFreeSpace[0] - (int)ulI;
                long long lFreeSize = (unsigned int)iFreeSize;
                p_uaMyFreeSpace[0] = (tdstFreeCell_)lFreeSize;
                if (lFreeSize < 2) {
                    ulI += (int)lFreeSize;
                    if (p_uaMyFreeSpace == p_uaBeforeMyFreeSpace) {
                        p_stMyBlockInfo->p_cFirstFree = (int)p_uaMyFreeSpace[1];
                    } else {
                        p_uaBeforeMyFreeSpace[1] = p_uaMyFreeSpace[1];
                    }
                } else {
                    tdstFreeCell_* p_uaNewFreeSpace = p_uaMyFreeSpace + ulI;
                    p_uaMyFreeSpace[ulI] = (tdstFreeCell_)lFreeSize;
                    ((tdstFreeCell_*)((char*)p_uaMyFreeSpace + 0x10))[ulI] = p_uaMyFreeSpace[1];
                    if (p_uaMyFreeSpace == (tdstFreeCell_*)p_stMyBlockInfo->p_cFirstFree) {
                        p_stMyBlockInfo->p_cFirstFree = (int)p_uaNewFreeSpace;
                    } else {
                        p_uaBeforeMyFreeSpace[1] = (tdstFreeCell_)(unsigned int)p_uaNewFreeSpace;
                    }
                }
                {
                    long long lCount = (unsigned int)ulI;
                    p_uaMyFreeSpace[0] = (tdstFreeCell_)lCount;
                    {
                        char* p_cEndOfFreeSpace = (char*)p_uaMyFreeSpace + (int)lCount * 16 - 1;
                        if ((unsigned int)p_cEndOfFreeSpace >= (unsigned int)p_stMyBlockInfo->p_cMaxMem) {
                            p_stMyBlockInfo->p_cMaxMem = (int)p_cEndOfFreeSpace;
                        }
                    }
                }
            }
            PS2_fn_vLeaveCriticalSection(&g_MmgCriticalSection);
            return (char*)p_uaMyFreeSpace + 0x10;
        } else {
            if (Mmg_g_bAllocationError) {
                Erm_fn_v_UpdateLastError(0x1D, g_ucMmgModuleId, 0, 0x23, -1, 0xFF, 0xFF, 0);
            }
            PS2_fn_vLeaveCriticalSection(&g_MmgCriticalSection);
            return NULL;
        }
    }
    p_stInfoHeaderBolck = (tdstInformationHeaderOfBolckWithoutFree_*)p_stMyBlockInfo->p_cBeginBlock;
    if (ulSize & (p_stInfoHeaderBolck->ucAlignment - 1)) {
        ulSize = p_stInfoHeaderBolck->ucAlignment + (ulSize & ~(p_stInfoHeaderBolck->ucAlignment - 1));
    }
    if ((unsigned int)(p_stMyBlockInfo->p_cEndBlock - p_stMyBlockInfo->p_cMaxMem) < ulSize) {
        if (Mmg_g_bAllocationError) {
            Erm_fn_v_UpdateLastError(0x1D, g_ucMmgModuleId, 0, 0x23, -1, 0xFF, 0xFF, 0);
        }
        PS2_fn_vLeaveCriticalSection(&g_MmgCriticalSection);
        return NULL;
    }
    if ((p_stInfoHeaderBolck->ucMode & 8) && (unsigned int)(p_stMyBlockInfo->p_cEndBlock - p_stMyBlockInfo->p_cMaxMem) >= 4) {
        unsigned int ulPattern = 0xE123456E;
        char* p_cBlock = (char*)(p_stMyBlockInfo->p_cMaxMem + 1);
        char* p_cPattern = (char*)&ulPattern;
        while (p_cBlock < (char*)(p_stMyBlockInfo->p_cMaxMem + 1) + 4) {
            if (*p_cBlock != *p_cPattern) {
                break;
            }
            p_cBlock++;
            p_cPattern++;
        }
        {
            unsigned int ulDiff = (unsigned int)p_cBlock ^ (unsigned int)((char*)(p_stMyBlockInfo->p_cMaxMem + 1) + 4);
            if (!ulDiff) {
                /* the signature of the previous allocation is still valid */
            } else {
                Erm_fn_v_UpdateLastError(0x1D, g_ucMmgModuleId, 0, 0x1C, -1, 0xFF, 0xFF, 0);
            }
        }
    }
    if (p_stInfoHeaderBolck->ucMode & 2) {
        char* p_cFill = (char*)(p_stMyBlockInfo->p_cMaxMem + 1);
        while (p_cFill <= (char*)(p_stMyBlockInfo->p_cMaxMem + 4) && p_cFill <= (char*)p_stMyBlockInfo->p_cEndBlock) {
            *p_cFill = (char)0xAA;
            p_cFill++;
        }
    }
    if (p_stInfoHeaderBolck->ucMode & 4) {
        unsigned int ulOriginalSize = ulSize;
        if (ulSize & (p_stInfoHeaderBolck->ucAlignment - 1)) {
            ulSize = p_stInfoHeaderBolck->ucAlignment + (ulSize & ~(p_stInfoHeaderBolck->ucAlignment - 1));
        }
        if (ulOriginalSize != ulSize) {
            Erm_fn_v_UpdateLastError(0x1D, g_ucMmgModuleId, 0, 0x1B, -1, 0xFF, 0xFF, 0);
        }
    }
    {
        unsigned int ulUsed = (unsigned int)p_stMyBlockInfo->p_cMaxMem;
        p_stMyBlockInfo->p_cMaxMem = (int)(ulUsed + ulSize);
        if ((unsigned int)(p_stMyBlockInfo->p_cEndBlock - p_stMyBlockInfo->p_cMaxMem) >= 4) {
            unsigned int ulPattern = 0xE123456E;
            char* p_cPattern = (char*)&ulPattern;
            char* p_cDst = (char*)(p_stMyBlockInfo->p_cMaxMem + 1);
            char* p_cEnd = p_cDst + 4;
            while (p_cDst < p_cEnd) {
                *p_cDst = *p_cPattern;
                p_cDst++;
                p_cPattern++;
            }
        }
        PS2_fn_vLeaveCriticalSection(&g_MmgCriticalSection);
        return (char*)(ulUsed + 1);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 594–692 */
/* addr: 0x00314ac0  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 594
 *   +0x0014 -> line 617
 *   +0x001c -> line 622
 *   +0x0024 -> line 625
 *   +0x0030 -> line 627
 *   +0x0048 -> line 633
 *   +0x005c -> line 638
 *   +0x0074 -> line 640
 *   +0x007c -> line 645
 *   +0x00a0 -> line 650
 *   +0x00a8 -> line 652
 *   +0x00cc -> line 654
 *   +0x00d8 -> line 655
 *   +0x00e0 -> line 689
 *   +0x00e4 -> line 660
 *   +0x00e8 -> line 689
 *   +0x00f4 -> line 690
 *   +0x00f8 -> line 692
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned long long* fn_p_vDynAlloc(unsigned int ulSize)
{
    unsigned long long* p_uaMalloc;
    unsigned int ulMalloc;
    unsigned int ulAligned;
    if (ulSize == 0) {
        return 0;
    }
    PS2_fn_vEnterCriticalSection(&g_MmgCriticalSection);
    if (ulSize & 0xF) {
        ulSize = (ulSize & 0xFFFFFFF0) + 0x10;
    }
    ulMalloc = (ulSize >> 4) + 1;
    p_uaMalloc = (unsigned long long*)malloc(ulMalloc * 16);
    ulAligned = (unsigned int)p_uaMalloc;
    if (ulAligned & 0xF) {
        ulAligned = (ulAligned & 0xFFFFFFF0) + 0x10;
    }
    if ((unsigned int)p_uaMalloc != ulAligned) {
        Erm_fn_v_UpdateLastError(0x1D, g_ucMmgModuleId, 0, 3, -1, 0xFF, 0xFF, 0);
    }
    if (p_uaMalloc == 0) {
        Erm_fn_v_UpdateLastError(0x1D, g_ucMmgModuleId, 0, 0x20, -1, 0xFF, 0xFF, 0);
        PS2_fn_vLeaveCriticalSection(&g_MmgCriticalSection);
        return 0;
    }
    *(tdstFreeCell_*)p_uaMalloc = (tdstFreeCell_)(unsigned long long)ulMalloc;
    PS2_fn_vLeaveCriticalSection(&g_MmgCriticalSection);
    return (unsigned long long*)((char*)p_uaMalloc + 16);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 544–576 */
/* addr: 0x00314bd0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 544
 *   +0x0004 -> line 545
 *   +0x0008 -> line 544
 *   +0x000c -> line 545
 *   +0x0010 -> line 544
 *   +0x0014 -> line 545
 *   +0x0018 -> line 567
 *   +0x0020 -> line 574
 *   +0x0028 -> line 576
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Mmg_fn_vDeleteBlock(unsigned char ucBlockId, unsigned char ucMode, tdstBlockInfoPriv_* p_stMyBlocksInfo)
{
    tdstBlockInfoPriv_* p_stMyBlockInfo;
    p_stMyBlockInfo = p_stMyBlocksInfo + ucBlockId;
    free((void*)p_stMyBlockInfo->p_cBeginBlock);
    p_stMyBlockInfo->p_cBeginBlock = -1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 215–441 */
/* addr: 0x00314c10  size: 720 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 215
 *   +0x0004 -> line 220
 *   +0x0008 -> line 215
 *   +0x000c -> line 237
 *   +0x0010 -> line 215
 *   +0x0014 -> line 220
 *   +0x0018 -> line 215
 *   +0x001c -> line 237
 *   +0x0020 -> line 215
 *   +0x0044 -> line 237
 *   +0x0058 -> line 247
 *   +0x0068 -> line 249
 *   +0x0070 -> line 251
 *   +0x0074 -> line 253
 *   +0x008c -> line 254
 *   +0x0090 -> line 297
 *   +0x00b0 -> line 312
 *   +0x00c0 -> line 319
 *   +0x00c4 -> line 322
 *   +0x00d8 -> line 324
 *   +0x00e0 -> line 332
 *   +0x0104 -> line 338
 *   +0x010c -> line 343
 *   +0x0130 -> line 346
 *   +0x0138 -> line 351
 *   +0x013c -> line 354
 *   +0x0140 -> line 355
 *   +0x0148 -> line 363
 *   +0x014c -> line 356
 *   +0x0150 -> line 363
 *   +0x0154 -> line 357
 *   +0x0158 -> line 363
 *   +0x015c -> line 383
 *   +0x0160 -> line 363
 *   +0x0164 -> line 383
 *   +0x016c -> line 384
 *   +0x017c -> line 385
 *   +0x018c -> line 386
 *   +0x01a8 -> line 391
 *   +0x01b0 -> line 399
 *   +0x01b8 -> line 400
 *   +0x01bc -> line 401
 *   +0x01d0 -> line 402
 *   +0x01d4 -> line 412
 *   +0x01d8 -> line 405
 *   +0x01dc -> line 410
 *   +0x01e0 -> line 405
 *   +0x01e8 -> line 412
 *   +0x01f0 -> line 413
 *   +0x0200 -> line 414
 *   +0x0204 -> line 415
 *   +0x021c -> line 416
 *   +0x0220 -> line 419
 *   +0x0224 -> line 423
 *   +0x023c -> line 424
 *   +0x0240 -> line 426
 *   +0x0244 -> line 427
 *   +0x0248 -> line 430
 *   +0x0260 -> line 431
 *   +0x029c -> line 438
 *   +0x02a0 -> line 441
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Mmg_fn_vInitSpecificBlock(unsigned char _ucBlockId, tdstBlockInfoPriv_* _p_stMyBlocksInfo, unsigned int _ulSize, unsigned char _ucAlignment, unsigned char _ucMode)
{
    tdstInformationHeaderOfBolckWithoutFree_* param0;
    unsigned int lTemporaryValue;
    unsigned char ucAlignment;
    tdstBlockInfoPriv_* p_stMyBlockInfo;
    long double* p_uaPtr;
    unsigned int ulI;
    char* p_cBegin;
    /* TODO: decompile from asm/... */
}
