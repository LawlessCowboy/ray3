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
extern float GLI_g_xBrightness;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Fog.c lines 485–491 */
/* addr: 0x002a8560  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 485
 *   +0x0008 -> line 486
 *   +0x0010 -> line 487
 *   +0x0018 -> line 488
 *   +0x001c -> line 490
 *   +0x003c -> line 491
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vSetBrightness(int _lValue)
{
    if (_lValue < 0)
        _lValue = 0;
    else if (_lValue >= 100)
        _lValue = 100;
    GLI_g_xBrightness = (float)_lValue / 100.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Fog.c lines 266–268 */
/* addr: 0x002a85b0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 266
 *   +0x0004 -> line 268
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vFogOff(void)
{
    GLI_BIG_GLOBALS_p_stActiveFog = 0;
    GLI_BIG_GLOBALS_xFogIsOn = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Fog.c lines 255–256 */
/* addr: 0x002a85c0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 255
 *   +0x0004 -> line 256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vFogOn(void)
{
    GLI_BIG_GLOBALS_xFogIsOn = 1;
}
