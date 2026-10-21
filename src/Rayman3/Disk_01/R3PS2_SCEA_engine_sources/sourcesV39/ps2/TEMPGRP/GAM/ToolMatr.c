/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ToolMatr.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/MAT.h"
#include "r3/MTH.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct tdstEngineStructure_ tdstEngineStructure_;

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hActiveCamera; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
};

struct tdstEngineStructure_ {
    unsigned char _extractor_padding_01[0x5f4]; /* implicitly added by extractor; +0x0..0x5f3 */
    tdstViewportManagement_* a_hViewportArray; /* +0x5f4 */
};

tdstEngineStructure_ g_stEngineStructure;

extern void MAT_fn_vSetIdentity(MAT_tdstTransformation_* _p_stMatrix);
extern void MAT_fn_vSetRotationVectors(MAT_tdstTransformation_* _p_stMatrix, MTH3D_tdstVector_* _p_stVecI, MTH3D_tdstVector_* _p_stVecJ, MTH3D_tdstVector_* _p_stVecK);
extern void MAT_fn_vCompose(MAT_tdstTransformation_* _p_stDest, MAT_tdstTransformation_* _p_stA, MAT_tdstTransformation_* _p_stB);
extern float cosf(float _xAngle);
extern float sinf(float _xAngle);

/* R5900 abs.s: MWCC cannot emit it from plain C (fabsf lowers to a call). */
inline float MTH_xAbs(float _xValue)
{
    float xResult;
    asm { abs.s xResult, _xValue }
    return xResult;
}

HIE_tdstSuperObject_* CAM_fn_hGetActiveCamera(int _lViewportNumber)
{
    tdstViewportManagement_* p_stViewport;
    if ((_lViewportNumber >= 5) || (_lViewportNumber < 0)) p_stViewport = NULL; else p_stViewport = &g_stEngineStructure.a_hViewportArray[_lViewportNumber];
    return p_stViewport->hActiveCamera;
}

void fn_vTurnMatrixZ(MAT_tdstTransformation_* _p_stMatrix, float _xAngle)
{
    MAT_tdstTransformation_ TmpMatrix;
    MTH3D_tdstVector_ I;
    MTH3D_tdstVector_ J;
    MTH3D_tdstVector_ K;
    float xCos;
    float xSin;

    MAT_fn_vSetIdentity(&TmpMatrix);
    xCos = cosf(_xAngle);
    xSin = sinf(_xAngle);
    if (MTH_xAbs(xCos) < 0.0001f)
        xCos = 0.0f;
    if (MTH_xAbs(xSin) < 0.0001f)
        xSin = 0.0f;
    I.xX = xCos; I.xY = xSin; I.xZ = 0.0f;
    J.xX = -xSin; J.xY = xCos; J.xZ = 0.0f;
    K.xX = 0.0f; K.xY = 0.0f; K.xZ = 1.0f;
    MAT_fn_vSetRotationVectors(&TmpMatrix, &I, &J, &K);
    MAT_fn_vCompose(_p_stMatrix, _p_stMatrix, &TmpMatrix);
}

void fn_vTurnMatrixY(MAT_tdstTransformation_* _p_stMatrix, float _xAngle)
{
    MAT_tdstTransformation_ TmpMatrix;
    MTH3D_tdstVector_ I;
    MTH3D_tdstVector_ J;
    MTH3D_tdstVector_ K;
    float xCos;
    float xSin;

    MAT_fn_vSetIdentity(&TmpMatrix);
    xCos = cosf(_xAngle);
    xSin = sinf(_xAngle);
    if (MTH_xAbs(xCos) < 0.0001f)
        xCos = 0.0f;
    if (MTH_xAbs(xSin) < 0.0001f)
        xSin = 0.0f;
    I.xX = xCos; I.xY = 0.0f; I.xZ = -xSin;
    J.xX = 0.0f; J.xY = 1.0f; J.xZ = 0.0f;
    K.xX = xSin; K.xY = 0.0f; K.xZ = xCos;
    MAT_fn_vSetRotationVectors(&TmpMatrix, &I, &J, &K);
    MAT_fn_vCompose(_p_stMatrix, _p_stMatrix, &TmpMatrix);
}
