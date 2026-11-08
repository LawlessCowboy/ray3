/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsppla.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */

void MAT_fn_vNormQuatToMatrix(MTH4D_tdstMatrix_* _p_stMatrix, float _xX, float _xY, float _xZ, float _xW);

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
float MTH_fn_xSqrAddSqrAddSqrOpt2(float a, float b, float c);
void MAT_fn_vInitTransformationWithNormQuaternion(MAT_tdstTransformation_* _hTransform, float* _a_xQuaternion);

void MAT_fn_vInitTransformationWithNormQuaternion(MAT_tdstTransformation_* _hTransform, float* _a_xQuaternion)
{
    _hTransform->eType = 5;
    _hTransform->stScaleVector.xX = 1.0f;
    _hTransform->stScaleVector.xY = 1.0f;
    _hTransform->stScaleVector.xZ = 1.0f;
    _hTransform->stScaleVector.xW = 1.0f;
    MAT_fn_vNormQuatToMatrix(&_hTransform->stTransformMatrix, _a_xQuaternion[0], _a_xQuaternion[1], _a_xQuaternion[2], _a_xQuaternion[3]);
}

float MTH_fn_xSqrAddSqrAddSqrOpt2(float a, float b, float c)
{
    float xRet;
    asm { mula.s a, a }
    asm { madda.s b, b }
    asm { madd.s xRet, c, c }

    return xRet;
}
