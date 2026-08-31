/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstGliCaps_ tdstGliCaps_;

struct tdstGliCaps_ {
    unsigned int ulSize; /* +0x0 */
    unsigned int ulDriverCaps; /* +0x4 */
    unsigned int ulTextureCaps; /* +0x8 */
    unsigned int ulSurfaceCaps; /* +0xc */
    unsigned int ulMemoryCaps; /* +0x10 */
    unsigned int ulTextureMaxSize; /* +0x14 */
    unsigned int ulTotalTextureMemory; /* +0x18 */
    unsigned int ulTotalVideoMemory; /* +0x1c */
    unsigned int ulTotalAGPMemory; /* +0x20 */
    unsigned int ulTexturePerChannelMemory[4]; /* +0x24 */
    unsigned char ucPrimarySurfacePixelFormat; /* +0x34 */
    float fRefreshRate; /* +0x38 */
};

float GLI_g_NegVect[4];
static int gs_keepit2;
static int gs_keepit1;
int GLD_RenderingCounter;
int GLD_p_lRenderingCounter;
static int gs_bIsWindowed;
int g_bOptimizedWindowedMode;
unsigned short GAM_g_uwLoadingLevel;
int gpfnl_AddDisplayInfo;

/* addr: 0x002b3530  size: 8 bytes */
void GLI_vSetModifierIntensity(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b3540  size: 8 bytes */
void GLI_fn_vBlitSurfaceForBlitInBackBuffer(void)
{
}

/* addr: 0x002b3550  size: 8 bytes */
void GLI_fn_vFreeSurfaceForBlit(void)
{
}

/* addr: 0x002b3560  size: 60 bytes */
void fn_vSetUnusedTextures(void)
{
    int start;
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b35a0  size: 60 bytes */
void fn_RemoveTextureFromMaterial(void)
{
    int start;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 210–210 */
/* addr: 0x002b35e0  size: 36 bytes */
void GLI_ClearZBufferRegion(void)
{
    /* line map: */
    /*   line 210 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b3610  size: 8 bytes */
void GLI_xSendListToViewport(/* function pointer */ int p_stVpt)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 199–201 */
/* addr: 0x002b3620  size: 36 bytes */
void GLI_xClearViewingList(void)
{
    /* line map: */
    /*   line 199 @ +0x000 */
    /*   line 201 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b3650  size: 8 bytes */
int GLI_fnl_InitDll(void)
{
    return 1;
}
