/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstBlockInfo_ tdstBlockInfo_;

struct tdstBlockInfo_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
};

unsigned char g_ucHMUModuleId;
/* aggregate */ int HMU_g_stMemoryStructure;
tdstBlockInfo_ g_a_stHMUBlocksInfo[9];
unsigned int HMU_g_ulLastSndDirectAlloc;
/* aggregate */ int HMU_g_p_vSndDirectSoundAlloc;
/* aggregate */ int HMU_g_stMemoryStructure;
unsigned char g_ucHMUModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c lines 197–241 */
/* addr: 0x002ed560  size: 452 bytes */
void GLI_vGsStoreFrameBufferInto128x128x16__FPUssiis(unsigned short* _DestinationBuffer, short vram, int WIDTH, short CurrentPSM, sceDmaChan* d1)
{
    unsigned int x;
    unsigned int B;
    unsigned int G;
    unsigned int R;
    unsigned int DestY;
    unsigned char* ram;
    unsigned char* tempram;
    short spsm;
    int h;
    /* aggregate */ int gssi;
    /* line map: */
    /*   line 201 @ +0x000 */
    /*   line 197 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 197 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 207 @ +0x000 */
    /*   line 211 @ +0x000 */
    /*   line 221 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c lines 598–633 */
/* addr: 0x002ed730  size: 312 bytes */
void HMU_fn_vSndFree(void** p_vPointer)
{
    unsigned int i;
    unsigned char bDirectFreeDone;
    unsigned char ucOldHMUTempBloc;
    void* p_vBeginBloc;
    unsigned short uwBlocId;
    /* line map: */
    /*   line 598 @ +0x000 */
    /*   line 604 @ +0x000 */
    /*   line 609 @ +0x000 */
    /*   line 612 @ +0x000 */
    /*   line 613 @ +0x000 */
    /*   line 614 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 623 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c lines 544–585 */
/* addr: 0x002ed870  size: 368 bytes */
void HMU_fn_pvSndMalloc(unsigned int u32Size)
{
    unsigned int i;
    unsigned char ucOldHMUTempBloc;
    void* p_vReturn;
    unsigned char bFirstTime;
    /* line map: */
    /*   line 544 @ +0x000 */
    /*   line 549 @ +0x000 */
    /*   line 551 @ +0x000 */
    /*   line 558 @ +0x000 */
    /*   line 558 @ +0x000 */
    /*   line 560 @ +0x000 */
    /*   line 563 @ +0x000 */
    /*   line 567 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Mem.c lines 468–514 */
/* addr: 0x002ed9e0  size: 276 bytes */
void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc)
{
    void* p_vBeginBloc;
    unsigned short uwBlocId;
    /* aggregate */ int eMemoryBlockUse;
    /* line map: */
    /*   line 468 @ +0x000 */
    /*   line 478 @ +0x000 */
    /*   line 482 @ +0x000 */
    /*   line 485 @ +0x000 */
    /*   line 488 @ +0x000 */
    /*   line 490 @ +0x000 */
    /*   line 494 @ +0x000 */
    /*   line 497 @ +0x000 */
    /* TODO: decompile from asm/... */
}
