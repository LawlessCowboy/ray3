/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _Toby_Part_ _Toby_Part_;
typedef struct _Toby_ _Toby_;

struct _Toby_Part_ {
    float pStart[4]; /* +0x0 */
    float pEnd[4]; /* +0x10 */
};

struct _Toby_ {
    unsigned int NbAllocatedSegments; /* +0x0 */
    unsigned int NbActualSegments; /* +0x4 */
    float fTransparency; /* +0x8 */
    int pSegments; /* +0xc */
};

int Toby_g_Container;
unsigned char bIsInitAllDone;
int AGO_g_TobyMaterial;
float TestTobies[4][3];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 404–406 */
/* addr: 0x001ea150  size: 120 bytes */
void AGO2_vReInit(void)
{
    /* line map: */
    /*   line 404 @ +0x000 */
    /*   line 406 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 138–150 */
/* addr: 0x001ea1d0  size: 132 bytes */
void Toby_AddSegment(unsigned int IDNumber, /* function pointer */ int pPos1, /* function pointer */ int pPos2, _Toby_Part_* param3)
{
    /* line map: */
    /*   line 138 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 140 @ +0x000 */
    /*   line 142 @ +0x000 */
    /*   line 145 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 150 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 119–129 */
/* addr: 0x001ea260  size: 424 bytes */
void Toby_Allocate(unsigned int IDNumber, unsigned int NumberOfSegments)
{
    /* line map: */
    /*   line 119 @ +0x000 */
    /*   line 124 @ +0x000 */
    /*   line 129 @ +0x000 */
    /*   line 127 @ +0x000 */
    /*   line 129 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 111–113 */
/* addr: 0x001ea410  size: 80 bytes */
void Toby_SetTransparency(unsigned int IDNumber, float fAlphaValue)
{
    /* line map: */
    /*   line 111 @ +0x000 */
    /*   line 113 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001ea460  size: 8 bytes */
void Toby_SetMaterial(/* function pointer */ int hVisualMaterial)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ago\Tobies.c lines 91–99 */
/* addr: 0x001ea470  size: 132 bytes */
void Toby_Destroy(unsigned int IDNumber)
{
    /* line map: */
    /*   line 91 @ +0x000 */
    /*   line 94 @ +0x000 */
    /*   line 96 @ +0x000 */
    /*   line 99 @ +0x000 */
    /* TODO: decompile from asm/... */
}
