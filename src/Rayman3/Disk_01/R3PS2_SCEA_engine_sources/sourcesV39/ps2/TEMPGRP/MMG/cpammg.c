/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstChannelInfo_ tdstChannelInfo_;
typedef struct tdstBlockInfo_ tdstBlockInfo_;

struct tdstChannelInfo_ {
    unsigned int ulThreadId; /* +0x0 */
    unsigned char ucGroupId; /* +0x4 */
};

struct tdstBlockInfo_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
};

unsigned char g_ucMmgModuleId;
unsigned char Mmg_g_bAllocationError;
/* aggregate */ int g_stGeneralChannelInfo;
/* aggregate */ int g_MmgCriticalSection;
int g_d_stCurrentModeInfo;
int g_d_p_stMmgModuleDynInfo;
unsigned char g_a_ucBlocksNbInModule[255];
/* aggregate */ int g_a_p_stMmgModuleBlocksInfo;
unsigned char g_ucErmNbOfModule;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 46–48 */
/* addr: 0x00313fc0  size: 64 bytes */
unsigned char MEC_fn_bWallNormal(DNM_stDynamics* p_stDynamic, /* function pointer */ int p_stNormal)
{
    /* line map: */
    /*   line 46 @ +0x000 */
    /*   line 48 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 5153–5153 */
/* addr: 0x00314000  size: 12 bytes */
void Mmg_fn_vEnableAllocationError(void)
{
    /* line map: */
    /*   line 5153 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00314010  size: 8 bytes */
void Mmg_fn_vDisableAllocationError(void)
{
    Mmg_g_bAllocationError = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 4648–4708 */
/* addr: 0x00314020  size: 156 bytes */
void Mmg_fn_v_InitMmg(unsigned char ucModuleId, unsigned char ucMaxBlocksNb, /* function pointer */ int p_stMyBlockInfo)
{
    unsigned char ucI;
    /* line map: */
    /*   line 4648 @ +0x000 */
    /*   line 4693 @ +0x000 */
    /*   line 4693 @ +0x000 */
    /*   line 4695 @ +0x000 */
    /*   line 4708 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 4533–4587 */
/* addr: 0x003140c0  size: 216 bytes */
void Mmg_fn_vFirstInitMmgModule(unsigned char ucMaxNbChannel)
{
    unsigned char ucI;
    /* line map: */
    /*   line 4533 @ +0x000 */
    /*   line 4533 @ +0x000 */
    /*   line 4578 @ +0x000 */
    /*   line 4561 @ +0x000 */
    /*   line 4579 @ +0x000 */
    /*   line 4585 @ +0x000 */
    /*   line 4585 @ +0x000 */
    /*   line 4585 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 4481–4483 */
/* addr: 0x003141a0  size: 104 bytes */
void Mmg_fn_v_SetModeAlloc(unsigned char ucModuleId, unsigned char ucNewMode, unsigned char ucChannel)
{
    /* line map: */
    /*   line 4482 @ +0x000 */
    /*   line 4481 @ +0x000 */
    /*   line 4483 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 4222–4264 */
/* addr: 0x00314210  size: 384 bytes */
void Mmg_fn_vWhereIs(void* p_vPtr, unsigned short* p_uwModuleBlockId, void** pp_vBeginAdr, /* function pointer */ int a_stMyBlockInfo)
{
    unsigned char ucBlockId;
    unsigned char ucModuleId;
    unsigned char lastBlockId;
    unsigned char lastModuleId;
    /* line map: */
    /*   line 4222 @ +0x000 */
    /*   line 4224 @ +0x000 */
    /*   line 4227 @ +0x000 */
    /*   line 4230 @ +0x000 */
    /*   line 4237 @ +0x000 */
    /*   line 4237 @ +0x000 */
    /*   line 4239 @ +0x000 */
    /*   line 4241 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 2761–2782 */
/* addr: 0x00314390  size: 112 bytes */
void fn_vGenFree(void* p_vMemBlock, unsigned char ucChannel)
{
    /* line map: */
    /*   line 2761 @ +0x000 */
    /*   line 2761 @ +0x000 */
    /*   line 2761 @ +0x000 */
    /*   line 2779 @ +0x000 */
    /*   line 2782 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 2716–2716 */
/* addr: 0x00314400  size: 80 bytes */
void fn_p_vGenAlloc(unsigned int ulSize, unsigned char ucChannel)
{
    /* line map: */
    /*   line 2716 @ +0x000 */
    /*   line 2716 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 1311–1518 */
/* addr: 0x00314450  size: 492 bytes */
void fn_vStaFree(void* p_vMemBlock, unsigned char ucChannel, /* function pointer */ int p_stMyBlockInfo)
{
    long double* param0;
    long double* p_uaAfterFreeSpace;
    long double* p_uaSizeMalloc;
    long double* p_uaNextFree;
    /* line map: */
    /*   line 1311 @ +0x000 */
    /*   line 1311 @ +0x000 */
    /*   line 1336 @ +0x000 */
    /*   line 1311 @ +0x000 */
    /*   line 1337 @ +0x000 */
    /*   line 1380 @ +0x000 */
    /*   line 1398 @ +0x000 */
    /*   line 1405 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 962–1288 */
/* addr: 0x00314640  size: 1144 bytes */
void fn_p_vStaAlloc(unsigned int ulSize, unsigned char ucChannel, /* function pointer */ int p_stInfoHeaderBolck, /* function pointer */ int p_stMyBlockInfo)
{
    char* param0;
    unsigned int ulI;
    unsigned char b_ucFound;
    long double* p_uaBeforeMyFreeSpace;
    long double* p_uaMyFreeSpace;
    /* line map: */
    /*   line 962 @ +0x000 */
    /*   line 962 @ +0x000 */
    /*   line 962 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 996 @ +0x000 */
    /*   line 1002 @ +0x000 */
    /*   line 1010 @ +0x000 */
    /*   line 1014 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 617–692 */
/* addr: 0x00314ac0  size: 268 bytes */
void fn_p_vDynAlloc(void)
{
    unsigned int ulMalloc;
    long double* p_uaMalloc;
    /* line map: */
    /*   line 617 @ +0x000 */
    /*   line 625 @ +0x000 */
    /*   line 633 @ +0x000 */
    /*   line 640 @ +0x000 */
    /*   line 650 @ +0x000 */
    /*   line 654 @ +0x000 */
    /*   line 689 @ +0x000 */
    /*   line 689 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 545–574 */
/* addr: 0x00314bd0  size: 56 bytes */
void Mmg_fn_vDeleteBlock(unsigned char ucBlockId, /* function pointer */ int p_stMyBlocksInfo, /* function pointer */ int p_stMyBlockInfo)
{
    /* line map: */
    /*   line 545 @ +0x000 */
    /*   line 545 @ +0x000 */
    /*   line 545 @ +0x000 */
    /*   line 574 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MMG\cpammg.c lines 220–438 */
/* addr: 0x00314c10  size: 720 bytes */
void Mmg_fn_vInitSpecificBlock(unsigned char _ucBlockId, /* function pointer */ int _p_stMyBlocksInfo, unsigned int _ulSize, unsigned char _ucAlignment, unsigned char _ucMode, /* function pointer */ int param5, /* function pointer */ int p_stMyBlockInfo)
{
    unsigned int lTemporaryValue;
    unsigned char ucAlignment;
    long double* p_uaPtr;
    unsigned int ulI;
    char* p_cBegin;
    /* line map: */
    /*   line 220 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 220 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 249 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 297 @ +0x000 */
    /* TODO: decompile from asm/... */
}
