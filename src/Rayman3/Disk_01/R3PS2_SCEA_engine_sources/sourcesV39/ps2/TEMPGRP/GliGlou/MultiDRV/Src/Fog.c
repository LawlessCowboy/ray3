/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Fog.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"

/* Recovered aggregate layouts from MWCC debug type records. */

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

void GLI_fn_vSetBrightness(int _lValue)
{
    if (_lValue < 0)
        _lValue = 0;
    else if (_lValue >= 100)
        _lValue = 100;
    GLI_g_xBrightness = (float)_lValue / 100.0f;
}

void GLI_vFogOff(void)
{
    GLI_BIG_GLOBALS_p_stActiveFog = 0;
    GLI_BIG_GLOBALS_xFogIsOn = 0;
}

void GLI_vFogOn(void)
{
    GLI_BIG_GLOBALS_xFogIsOn = 1;
}
