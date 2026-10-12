/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Proj.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/GLI.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstAligned2DVector_ GLI_tdstAligned2DVector_;

float GLI_BIG_GLOBALS_xGlobalAlpha;

struct GLI_tdstAligned2DVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
    unsigned int ulPackedColor; /* +0xc */
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
