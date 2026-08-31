/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;

struct anon_0 {
    unsigned int u32Limit; /* +0x0 */
    int pcBase; /* +0x4 */
    int pcTop; /* +0x8 */
};

struct anon_1 {
    unsigned int u32Size; /* +0x0 */
    char acBuffer; /* +0x4 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c lines 52–78 */
/* addr: 0x0029f410  size: 232 bytes */
void fn_vGetScreenShotDefaultName(void)
{
    char TestFileName[8];
    int i;
    int Number;
    int Found;
    /* line map: */
    /*   line 52 @ +0x000 */
    /*   line 58 @ +0x000 */
    /*   line 62 @ +0x000 */
    /*   line 67 @ +0x000 */
    /*   line 72 @ +0x000 */
    /*   line 76 @ +0x000 */
    /*   line 78 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0029f500  size: 24 bytes */
void fn_vFreeAllocator(anon_0* pstAllocator, void* pvClientAddress)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c lines 69–96 */
/* addr: 0x0029f520  size: 156 bytes */
void fn_pvAllocAllocator(anon_0* pstAllocator, unsigned int u32Size, anon_1* pstBlockDescriptor)
{
    /* line map: */
    /*   line 69 @ +0x000 */
    /*   line 69 @ +0x000 */
    /*   line 75 @ +0x000 */
    /*   line 93 @ +0x000 */
    /*   line 93 @ +0x000 */
    /*   line 93 @ +0x000 */
    /*   line 96 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c lines 54–54 */
/* addr: 0x0029f5c0  size: 88 bytes */
void fn_vInitAllocator(anon_0* pstAllocator, unsigned int u32Size, char* pcBuffer)
{
    /* line map: */
    /*   line 54 @ +0x000 */
    /* TODO: decompile from asm/... */
}
