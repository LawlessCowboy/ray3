/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Fog.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tdstFogParams_ tdstFogParams_;

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct tdstFogParams_ {
    float xDepthStart; /* +0x0 */
    float xDepthEnd; /* +0x4 */
    float xInfinite; /* +0x8 */
    float xBlendStart; /* +0xc */
    float xBlendEnd; /* +0x10 */
    GEO_tdstColor_ stColor; /* +0x14 */
};

char GLI_cGlobalFogIsOn;
int GLI_gp_stCurrentFog;
int GLI_gp_stLastFog;
tdstFogParams_ GLI_ga_stFogTable[16];
GEO_tdstColor_ GLI_stFogColor;
float GLI_xFogBlendFar;
float GLI_xFogBlendNear;
float GLI_xFogInfinite;
float GLI_xFogFar;
float GLI_xFogNear;
unsigned char GLI_g_bSaveFog;
tdstFogParams_ GLI_g_stSaveFog;
int GLI_BIG_GLOBALS_xFogIsOn;
int GLI_BIG_GLOBALS_p_stActiveFog;
float Fog_RandomValue;
char g_bForceWhiteFog;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Fog.c lines 563–563 */
/* addr: 0x002a8550  size: 12 bytes */
void GLI_fn_vInitInstantFadeIn(unsigned int ulNumberOfFrame)
{
    /* line map: */
    /*   line 563 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Fog.c lines 268–268 */
/* addr: 0x002a85b0  size: 12 bytes */
void GLI_vFogOff(void)
{
    /* line map: */
    /*   line 268 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Fog.c lines 256–256 */
/* addr: 0x002a85c0  size: 12 bytes */
void GLI_vFogOn(void)
{
    /* line map: */
    /*   line 256 @ +0x000 */
    /* TODO: decompile from asm/... */
}
