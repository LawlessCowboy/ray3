/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\GliPs2Unused.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"

/* Recovered aggregate layouts from MWCC debug type records. */

float GLI_g_NegVect[4];
int GLD_RenderingCounter;
int GLD_p_lRenderingCounter;
static int gs_bIsWindowed;
int g_bOptimizedWindowedMode;
unsigned short GAM_g_uwLoadingLevel;
int gpfnl_AddDisplayInfo;

void GLI_vSetModifierIntensity(void)
{
    /* TODO: decompile from asm/... */
}

void GLI_fn_vBlitSurfaceForBlitInBackBuffer(void)
{
}

void GLI_fn_vFreeSurfaceForBlit(void)
{
}

void fn_vSetUnusedTextures(void)
{
    static int start = 0; if (start++ < 10) printf("function %s not implemented\n", "fn_vSetUnusedTextures");
}

void fn_RemoveTextureFromMaterial(void)
{
    static int start = 0; if (start++ < 10) printf("function %s not implemented\n", "fn_RemoveTextureFromMaterial");
}

void GLI_ClearZBufferRegion(void)
{
    PS2glDepthMask(1);
    PS2glClear(0xD56);
}

void GLI_xSendListToViewport(GLD_tdstViewportAttributes_* p_stVpt)
{
    GLI_DRV_xSendListToViewport(p_stVpt);
}

void GLI_xClearViewingList(void)
{
    GLI_vReinitViewport();
    GLI_DRV_xClearViewingList();
}

int GLI_fnl_InitDll(void)
{
    return 1;
}
