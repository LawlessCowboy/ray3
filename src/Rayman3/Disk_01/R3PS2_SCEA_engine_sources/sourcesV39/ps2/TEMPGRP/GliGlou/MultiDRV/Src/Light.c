/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

struct GLI_tdstLight_ {
    int b_lOnOff; /* +0x0 */
    int bThisLightIsZBuffered; /* +0x4 */
    int lTypeOfLight; /* +0x8 */
    float xFar; /* +0xc */
    float xNear; /* +0x10 */
    float xLittleAlpha; /* +0x14 */
    float xBigAlpha; /* +0x18 */
    float xLittleTangent; /* +0x1c */
    float xBigTangent; /* +0x20 */
    /* aggregate */ int stMatrix; /* +0x30 */
    GEO_tdstColor_ stColor; /* +0x90 */
    float SqNear; /* +0xa0 */
    float SqFar; /* +0xa4 */
    float OOSqDiv; /* +0xa8 */
    /* aggregate */ int stZBuffer; /* +0xac */
    unsigned char bValid; /* +0xc4 */
    unsigned char ucObjectLighted; /* +0xc5 */
    unsigned char bIsPainting; /* +0xc6 */
    unsigned char ucIsAlpha; /* +0xc7 */
    /* aggregate */ int xInter_Min_Pos; /* +0xc8 */
    /* aggregate */ int xExter_Min_Pos; /* +0xd4 */
    /* aggregate */ int xInter_Max_Pos; /* +0xe0 */
    /* aggregate */ int xExter_Max_Pos; /* +0xec */
    /* aggregate */ int xCenterBox; /* +0xf8 */
    float xRadius; /* +0x104 */
    float xIntensity_Min; /* +0x108 */
    float xIntensity_Max; /* +0x10c */
    GEO_tdstColor_ stBackgroundColor; /* +0x110 */
    int bCreatesShadows; /* +0x120 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

unsigned int GLI_g_ExcluLightIsOn;
static /* aggregate */ int stPositionOfTheLightInTheObjectMatrix;
static int gs_p_stColor;
static int gs_p_stLightColor;
static float gs_xCoef;
static int GLI_vAddColorFunction;
GLI_tdstLight_ GLI_g_IL_Parallel;
GLI_tdstLight_ GLI_g_IL_Ambient;
unsigned char g_ucTableOfActiveLightsForChar[300];
int gs_CurrentNumberOfLightInViewport;
/* aggregate */ int gs_aDEF_p_CurrentListOfLight;
int SECT_hFatherSector;
int GLI_BIG_GLOBALS_gs_st_CurrentMatrix;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 103–168 */
/* addr: 0x002a88e0  size: 316 bytes */
void GLI_xInitGli(void)
{
    int lFirst;
    /* line map: */
    /*   line 103 @ +0x000 */
    /*   line 108 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 124 @ +0x000 */
    /*   line 132 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a8a20  size: 8 bytes */
float GLI_fn_xFogGetBlendFar(GLI_tdstLight_* p_stLight)
{
    return p_stLight->xIntensity_Min;
}

/* addr: 0x002a8a30  size: 8 bytes */
float GLI_fn_xFogGetBlendNear(GLI_tdstLight_* p_stLight)
{
    return p_stLight->xBigAlpha;
}

/* addr: 0x002a8a40  size: 8 bytes */
float GLI_fn_xFogGetInfinite(GLI_tdstLight_* p_stLight)
{
    return p_stLight->xLittleAlpha;
}

/* addr: 0x002a8a50  size: 8 bytes */
float GLI_fn_xFogGetFar(GLI_tdstLight_* p_stLight)
{
    return p_stLight->xFar;
}

/* addr: 0x002a8a60  size: 8 bytes */
float GLI_fn_xFogGetNear(GLI_tdstLight_* p_stLight)
{
    return p_stLight->xNear;
}

/* addr: 0x002a8a70  size: 8 bytes */
unsigned char GLI_ucGetObjectLighted(GLI_tdstLight_* p_stLight)
{
    return p_stLight->ucObjectLighted;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 834–834 */
/* addr: 0x002a8a80  size: 36 bytes */
void GLI_xGetLightBackgroundColor(GLI_tdstLight_* p_stLight, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 834 @ +0x000 */
    *p_stColor = p_stLight->stBackgroundColor;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 765–765 */
/* addr: 0x002a8ab0  size: 12 bytes */
void GLI_vSetLightType(GLI_tdstLight_* p_stLight, unsigned short lNewType)
{
    /* line map: */
    /*   line 765 @ +0x000 */
    p_stLight->lTypeOfLight = lNewType;
}

/* addr: 0x002a8ac0  size: 8 bytes */
unsigned short GLI_lGetLightType(GLI_tdstLight_* p_stLight)
{
    return p_stLight->lTypeOfLight;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 751–751 */
/* addr: 0x002a8ad0  size: 20 bytes */
void GLI_vGetLightAlphas(GLI_tdstLight_* p_stLight, float* p_xLittleAlpha, float* p_xBigAlpha)
{
    /* line map: */
    /*   line 751 @ +0x000 */
    *p_xLittleAlpha = p_stLight->xLittleAlpha;
    *p_xBigAlpha = p_stLight->xBigAlpha;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 742–745 */
/* addr: 0x002a8af0  size: 92 bytes */
void GLI_vSetLightAlphas(GLI_tdstLight_* p_stLight, float xLittleAlpha, float xBigAlpha)
{
    /* line map: */
    /*   line 744 @ +0x000 */
    /*   line 744 @ +0x000 */
    /*   line 742 @ +0x000 */
    /*   line 743 @ +0x000 */
    /*   line 745 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 734–734 */
/* addr: 0x002a8b50  size: 20 bytes */
void GLI_vGetLightNearFar(GLI_tdstLight_* p_stLight, float* p_xNear, float* p_xFar)
{
    /* line map: */
    /*   line 734 @ +0x000 */
    *p_xNear = p_stLight->xNear;
    *p_xFar = p_stLight->xFar;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 729–729 */
/* addr: 0x002a8b70  size: 12 bytes */
void GLI_vSetLightNearFar(GLI_tdstLight_* p_stLight, float xNear, float xFar)
{
    /* line map: */
    /*   line 729 @ +0x000 */
    p_stLight->xNear = xNear;
    p_stLight->xFar = xFar;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 705–705 */
/* addr: 0x002a8b80  size: 52 bytes */
void GLI_xSetLightMatrix(GLI_tdstLight_* p_stLight, /* function pointer */ int p_stMatrix)
{
    /* line map: */
    /*   line 705 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 692–692 */
/* addr: 0x002a8bc0  size: 36 bytes */
void GLI_xGetLightColor(GLI_tdstLight_* p_stLight, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 692 @ +0x000 */
    *p_stColor = p_stLight->stColor;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 687–687 */
/* addr: 0x002a8bf0  size: 36 bytes */
void GLI_xSetLightColor(GLI_tdstLight_* p_stLight, GEO_tdstColor_* p_stColor)
{
    /* line map: */
    /*   line 687 @ +0x000 */
    p_stLight->stColor = *p_stColor;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 679–679 */
/* addr: 0x002a8c20  size: 12 bytes */
void GLI_xGetLightState(GLI_tdstLight_* p_stLight, int* pb_lOnOff)
{
    /* line map: */
    /*   line 679 @ +0x000 */
    *pb_lOnOff = p_stLight->b_lOnOff;
}

/* addr: 0x002a8c30  size: 8 bytes */
void GLI_xSetLightState(GLI_tdstLight_* p_stLight, int b_lOnOff)
{
    p_stLight->b_lOnOff = b_lOnOff;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 610–625 */
/* addr: 0x002a8c40  size: 180 bytes */
void GLI_vRemoveLightForInit(GLI_tdstLight_* p_stLight, unsigned short eUserFlags)
{
    /* line map: */
    /*   line 610 @ +0x000 */
    /*   line 615 @ +0x000 */
    /*   line 617 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 621 @ +0x000 */
    /*   line 623 @ +0x000 */
    /*   line 625 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 591–606 */
/* addr: 0x002a8d00  size: 180 bytes */
void GLI_vStoreLightForInit(GLI_tdstLight_* p_stLight, unsigned short eUserFlags)
{
    /* line map: */
    /*   line 591 @ +0x000 */
    /*   line 596 @ +0x000 */
    /*   line 598 @ +0x000 */
    /*   line 600 @ +0x000 */
    /*   line 602 @ +0x000 */
    /*   line 604 @ +0x000 */
    /*   line 606 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 518–581 */
/* addr: 0x002a8dc0  size: 396 bytes */
void GLI_vAddInternalLightToViewportGhost(GLI_tdstLight_* p_stLight)
{
    /* line map: */
    /*   line 519 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 519 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 524 @ +0x000 */
    /*   line 524 @ +0x000 */
    /*   line 520 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 461–509 */
/* addr: 0x002a8f50  size: 452 bytes */
void GLI_vAddInternalLightToViewport(/* function pointer */ int pAmbientColor, /* function pointer */ int pParallelDirection, /* function pointer */ int pParallelColor, GLI_tdstLight_* p_stLight)
{
    /* line map: */
    /*   line 463 @ +0x000 */
    /*   line 462 @ +0x000 */
    /*   line 462 @ +0x000 */
    /*   line 461 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 468 @ +0x000 */
    /*   line 477 @ +0x000 */
    /*   line 465 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a9120  size: 8 bytes */
void GLI_vCopyLight(GLI_tdstLight_* p_stLightDst, GLI_tdstLight_* p_stLightSrc)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 415–441 */
/* addr: 0x002a9130  size: 216 bytes */
void GLI_xCreateLight(GLI_tdstLight_* h_stLight, int lTypeOfLight)
{
    /* line map: */
    /*   line 415 @ +0x000 */
    /*   line 419 @ +0x000 */
    /*   line 422 @ +0x000 */
    /*   line 435 @ +0x000 */
    /*   line 422 @ +0x000 */
    /*   line 424 @ +0x000 */
    /*   line 426 @ +0x000 */
    /*   line 430 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 403–405 */
/* addr: 0x002a9210  size: 80 bytes */
void GLI_xSetViewportLightsOnOff(unsigned char bOnOff)
{
    int i;
    /* line map: */
    /*   line 403 @ +0x000 */
    /*   line 403 @ +0x000 */
    /*   line 405 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002a9260  size: 8 bytes */
void GLI_vClearListOfLightInViewport(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 374–376 */
/* addr: 0x002a9270  size: 36 bytes */
void GLI_vPopLightsInViewport(unsigned int lNbLightsToPop)
{
    /* line map: */
    /*   line 374 @ +0x000 */
    /*   line 376 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Light.c lines 361–361 */
/* addr: 0x002a92a0  size: 52 bytes */
void GLI_vAddLightToViewport(GLI_tdstLight_* p_stLight)
{
    /* line map: */
    /*   line 361 @ +0x000 */
    /* TODO: decompile from asm/... */
}
