/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

static unsigned int g_AGO2_MEM_NbOfAllocatedBlocs;
static unsigned int g_AGO2_MEM_CurrentHandle;
static unsigned int g_AGO2_MEM_NumberOfFreeZones;
static /* array */ int g_AGO2_MEM_HandleDescriptors[5000];
static char g_AGO2_Main_Memory[1048576];
static /* array */ int g_AGO2_MEM_FreeZones[1000];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 704–709 */
/* addr: 0x001e05e0  size: 72 bytes */
void AGO_GetMainCharacterPosition(/* function pointer */ int pPos, /* function pointer */ int pMat, /* function pointer */ int hMainCharacterObjet)
{
    /* line map: */
    /*   line 704 @ +0x000 */
    /*   line 707 @ +0x000 */
    /*   line 709 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 370–467 */
/* addr: 0x001e0630  size: 1260 bytes */
void AGO2_MEM_FreeFromHandle(unsigned int Handle, /* function pointer */ int pCurrentDescriptor)
{
    unsigned int k;
    unsigned int FreeZoneAfter;
    unsigned int FreeZoneBefore;
    void* pEnd;
    void* param0;
    unsigned int j;
    unsigned int HandleDescIndex;
    /* line map: */
    /*   line 370 @ +0x000 */
    /*   line 374 @ +0x000 */
    /*   line 371 @ +0x000 */
    /*   line 373 @ +0x000 */
    /*   line 378 @ +0x000 */
    /*   line 382 @ +0x000 */
    /*   line 385 @ +0x000 */
    /*   line 388 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 296–347 */
/* addr: 0x001e0b20  size: 492 bytes */
void AGO2_MEM_Shrink(void)
{
    char* pStartMin;
    char* pStart;
    unsigned int Found;
    unsigned int IndexMin;
    unsigned int i;
    /* line map: */
    /*   line 297 @ +0x000 */
    /*   line 296 @ +0x000 */
    /*   line 301 @ +0x000 */
    /*   line 297 @ +0x000 */
    /*   line 297 @ +0x000 */
    /*   line 301 @ +0x000 */
    /*   line 301 @ +0x000 */
    /*   line 304 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 270–273 */
/* addr: 0x001e0d10  size: 64 bytes */
void AGO2_MEM_Init(void)
{
    /* line map: */
    /*   line 270 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 270 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\AGO2_Mem.c lines 251–259 */
/* addr: 0x001e0d50  size: 100 bytes */
void AGO2_MEM_GetPointerFromHandle(unsigned int Handle)
{
    unsigned int i;
    /* line map: */
    /*   line 251 @ +0x000 */
    /*   line 254 @ +0x000 */
    /*   line 259 @ +0x000 */
    /* TODO: decompile from asm/... */
}
