/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Proj.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstAligned2DVector_ GLI_tdstAligned2DVector_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;

float GLI_BIG_GLOBALS_xGlobalAlpha;

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct GLI_tdstAligned2DVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
    unsigned int ulPackedColor; /* +0xc */
};

struct GLI_tdstCamera_ {
    int lCameraMode; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ stMatrix; /* +0x10 */
    float xAlphaX; /* +0x70 */
    float xAlphaY; /* +0x74 */
    float xNear; /* +0x78 */
    float xFar; /* +0x7c */
    float xScreen; /* +0x80 */
    GLI_tdst2DVertex_ stScale; /* +0x84 */
    GLI_tdst2DVertex_ stTrans; /* +0x90 */
    float xXProjectionRatio; /* +0x9c */
    float xYProjectionRatio; /* +0xa0 */
    MTH3D_tdstVector_ stNormPlaneLeft; /* +0xa4 */
    float xDistPlaneLeft; /* +0xb0 */
    MTH3D_tdstVector_ stNormPlaneRight; /* +0xb4 */
    float xDistPlaneRight; /* +0xc0 */
    MTH3D_tdstVector_ stNormPlaneUp; /* +0xc4 */
    float xDistPlaneUp; /* +0xd0 */
    MTH3D_tdstVector_ stNormPlaneDown; /* +0xd4 */
    float xDistPlaneDown; /* +0xe0 */
    float xRatio; /* +0xe4 */
    unsigned char ucCameraTransparency; /* +0xe8 */
    float xTranspDist; /* +0xec */
    unsigned char bCameraIsMirrored; /* +0xf0 */
};

/* R5900 min.s/max.s (48 retail game sites in 15 functions); MWCC compiles
 * the C comparison as compare-and-branch instead. */
inline float MTH_M_xMin(float _xA, float _xB)
{
    float _xResult;
    asm { min.s _xResult, _xA, _xB }
    return _xResult;
}

inline float MTH_M_xMax(float _xA, float _xB)
{
    float _xResult;
    asm { max.s _xResult, _xA, _xB }
    return _xResult;
}

/* Scoped opt_propagation off keeps the named constant locals in source order;
 * without it MWCC swaps the 1.0f and 0.0f FPRs and moves the hazard nop
 * (measured pragma sweep; declaration order alone cannot reach it). */
#pragma push
#pragma opt_propagation off
void GLI_vSetGlobalAlpha(float Alpha)
{
    float fAlpha;
    float fCoef = 0.003921569f;
    float fZero = 0.0f;
    fAlpha = Alpha * fCoef;
    fAlpha = MTH_M_xMin(fAlpha, 1.0f);
    fAlpha = MTH_M_xMax(fAlpha, fZero);
    GLI_BIG_GLOBALS_xGlobalAlpha = fAlpha;
}
#pragma pop
