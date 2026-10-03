/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct tdstGliCaps_ tdstGliCaps_;

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

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
int GLD_RenderingCounter;
int GLD_p_lRenderingCounter;
static int gs_bIsWindowed;
int g_bOptimizedWindowedMode;
unsigned short GAM_g_uwLoadingLevel;
int gpfnl_AddDisplayInfo;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 119–119 */
/* addr: 0x002b3530  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 119
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetModifierIntensity(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 271–271 */
/* addr: 0x002b3540  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 271
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vBlitSurfaceForBlitInBackBuffer(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 267–267 */
/* addr: 0x002b3550  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 267
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vFreeSurfaceForBlit(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 262–262 */
/* addr: 0x002b3560  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 262
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vSetUnusedTextures(void)
{
    static int start = 0; if (start++ < 10) printf("function %s not implemented\n", "fn_vSetUnusedTextures");
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 261–261 */
/* addr: 0x002b35a0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 261
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_RemoveTextureFromMaterial(void)
{
    static int start = 0; if (start++ < 10) printf("function %s not implemented\n", "fn_RemoveTextureFromMaterial");
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 209–211 */
/* addr: 0x002b35e0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 209
 *   +0x0008 -> line 210
 *   +0x0018 -> line 211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_ClearZBufferRegion(void)
{
    PS2glDepthMask(1);
    PS2glClear(0xD56);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 205–205 */
/* addr: 0x002b3610  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 205
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xSendListToViewport(GLD_tdstViewportAttributes_* p_stVpt)
{
    GLI_DRV_xSendListToViewport(p_stVpt);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 198–201 */
/* addr: 0x002b3620  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 198
 *   +0x0008 -> line 199
 *   +0x0010 -> line 200
 *   +0x0018 -> line 201
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xClearViewingList(void)
{
    GLI_vReinitViewport();
    GLI_DRV_xClearViewingList();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c lines 192–192 */
/* addr: 0x002b3650  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 192
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_fnl_InitDll(void)
{
    return 1;
}
