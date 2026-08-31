/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\effect.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstFootPath_ tdstFootPath_;
typedef struct tdstWaterFoam_ tdstWaterFoam_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstFootPath_ {
    short xNumberOfAlphaLevels; /* +0x0 */
    float a8_xAlphaColor[8]; /* +0x4 */
    short a8_xNumberOfPoints[8]; /* +0x24 */
    short a8_xMaxNumberOfFaces[8]; /* +0x34 */
    short a8_xNumberOfFaces[8]; /* +0x44 */
    short a8_xNextFaces[8]; /* +0x54 */
    /* array */ int a2_stOffset[2]; /* +0x64 */
    float a2_xScale[2]; /* +0x7c */
    /* aggregate */ int a8_hGeomObj; /* +0x84 */
    int hFootPrintVisualMaterial; /* +0xa4 */
};

struct tdstWaterFoam_ {
    /* aggregate */ int stPosition; /* +0x0 */
    unsigned char bFoamIsActive; /* +0xc */
    int lLifeTime; /* +0x10 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
/* aggregate */ int HIE_g_a_hMatrixStack;
int HIE_g_lNbMatrixInStack;
int gp_stLight;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\effect.c lines 97–207 */
/* addr: 0x0025ef40  size: 340 bytes */
int COL_lHaveITakeSThgIntoTheMug(/* function pointer */ int _a_stResultObstacle, /* function pointer */ int _p_stSupObj, /* function pointer */ int _p_stStartPosition, /* function pointer */ int _p_stEndPosition, /* function pointer */ int p_stCurrentResultObstacle)
{
    int lParameter2;
    int lResult;
    short i;
    float xReboundCoef;
    float xSlideCoef;
    /* line map: */
    /*   line 97 @ +0x000 */
    /*   line 125 @ +0x000 */
    /*   line 142 @ +0x000 */
    /*   line 153 @ +0x000 */
    /*   line 159 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 178 @ +0x000 */
    /*   line 182 @ +0x000 */
    /* TODO: decompile from asm/... */
}
