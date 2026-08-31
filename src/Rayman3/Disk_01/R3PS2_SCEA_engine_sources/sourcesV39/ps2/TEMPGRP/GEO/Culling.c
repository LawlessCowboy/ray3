/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

float GEO_g_xZFar;
float GEO_g_xZFarTransparencyZone;
float GEO_g_xOoZFarTransparencyZone;
float GEO_g_xZFarTransparencyLevel;
/* aggregate */ int gs_stCameraPosInGlobal;
static /* aggregate */ int gs_stGlobalNormPlaneNear;
static /* aggregate */ int gs_stGlobalNormPlaneDown;
static /* aggregate */ int gs_stGlobalNormPlaneUp;
static /* aggregate */ int gs_stGlobalNormPlaneRight;
static /* aggregate */ int gs_stGlobalNormPlaneLeft;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 24–38 */
/* addr: 0x002a0880  size: 60 bytes */
void GEO_xInitGEOError(void)
{
    /* line map: */
    /*   line 24 @ +0x000 */
    /*   line 24 @ +0x000 */
    /*   line 38 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 355–538 */
/* addr: 0x002a08c0  size: 1768 bytes */
int GEO_lCullingBox(/* function pointer */ int p_stVpt, /* function pointer */ int p_stMin, /* function pointer */ int p_stMax, int _lCullingResult, /* function pointer */ int hCamera)
{
    unsigned char bComputed;
    float xValue5;
    float xValue4;
    float xValue3;
    float xValue2;
    float xValue1;
    float xValue0;
    float xCompute;
    /* line map: */
    /*   line 355 @ +0x000 */
    /*   line 360 @ +0x000 */
    /*   line 363 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 357 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 264–295 */
/* addr: 0x002a0fb0  size: 236 bytes */
void GEO_fn_vComputeCameraParametersForCulling(/* function pointer */ int p_stVpt, float _xZFar, /* function pointer */ int hCamera)
{
    /* aggregate */ int stMatrixInverse;
    /* line map: */
    /*   line 264 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 280 @ +0x000 */
    /*   line 280 @ +0x000 */
    /*   line 280 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 117–238 */
/* addr: 0x002a10a0  size: 988 bytes */
int GEO_lMainCullingSphere(/* function pointer */ int p_stVpt, /* function pointer */ int p_stShereCenter, float xRadius, /* function pointer */ int p_stMatrix, int _lCullingResult, /* function pointer */ int param5)
{
    float xDotProduct;
    /* aggregate */ int stCenter;
    /* line map: */
    /*   line 117 @ +0x000 */
    /*   line 117 @ +0x000 */
    /*   line 126 @ +0x000 */
    /*   line 126 @ +0x000 */
    /*   line 131 @ +0x000 */
    /*   line 129 @ +0x000 */
    /*   line 135 @ +0x000 */
    /*   line 142 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a1480  size: 12 bytes */
void GEO_xReinitZFarTransparencyLevel(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a1490  size: 8 bytes */
float GEO_xGetZFarTransparencyLevel(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 72–72 */
/* addr: 0x002a14a0  size: 52 bytes */
void GEO_vSetZFarTransparencyZone(float _xZ)
{
    /* line map: */
    /*   line 72 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a14e0  size: 8 bytes */
float GEO_xGetZFarTransparencyZone(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a14f0  size: 8 bytes */
void GEO_vSetZFar(float _xZ)
{
    /* TODO: decompile from asm/... */
}
