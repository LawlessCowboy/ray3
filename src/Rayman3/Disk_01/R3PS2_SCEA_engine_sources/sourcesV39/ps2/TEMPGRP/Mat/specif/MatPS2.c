/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Mat\specif\MatPS2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

/* sqrt.s has no C form under the baseline (MWCC calls sqrtf). */
inline float MTH_xSqrt(float _xValue)
{
    float xResult;
    asm { sqrt.s xResult, _xValue }
    return xResult;
}

void MAT_fn_v_MatrixToQuat(MTH4D_tdstMatrix_* _p_stMatrix, float* _xX, float* _xY, float* _xZ, float* _xW)
{
    float xTrace;
    float xS;
    float xNum1;
    float xNum2;
    float xNum3;

    xTrace = _p_stMatrix->stCol_2.xZ + (_p_stMatrix->stCol_0.xX + _p_stMatrix->stCol_1.xY);

    if (xTrace > 0.0f)
    {
        xS = MTH_xSqrt(1.0f + xTrace);
        *_xW = 0.5f * xS;
        xS = 0.5f / xS;
        *_xX = xS * (_p_stMatrix->stCol_2.xY - _p_stMatrix->stCol_1.xZ);
        *_xY = xS * (_p_stMatrix->stCol_0.xZ - _p_stMatrix->stCol_2.xX);
        *_xZ = xS * (_p_stMatrix->stCol_1.xX - _p_stMatrix->stCol_0.xY);
    }
    else
    {
        xNum1 = _p_stMatrix->stCol_0.xX;
        xNum2 = _p_stMatrix->stCol_1.xY;
        xNum3 = _p_stMatrix->stCol_2.xZ;
        if (_p_stMatrix->stCol_1.xY > _p_stMatrix->stCol_0.xX)
        {
            xNum1 = _p_stMatrix->stCol_1.xY;
            xNum2 = _p_stMatrix->stCol_2.xZ;
            xNum3 = _p_stMatrix->stCol_0.xX;
        }
        if (_p_stMatrix->stCol_2.xZ > xNum1)
        {
            xNum1 = _p_stMatrix->stCol_2.xZ;
            xNum2 = _p_stMatrix->stCol_0.xX;
            xNum3 = _p_stMatrix->stCol_1.xY;
        }

        xS = MTH_xSqrt((1.0f + xNum1) - (xNum2 + xNum3));

        if (xNum1 == _p_stMatrix->stCol_0.xX)
        {
            *_xX = 0.5f * xS;
            xS = 0.5f / xS;
            *_xY = xS * (_p_stMatrix->stCol_0.xY + _p_stMatrix->stCol_1.xX);
            *_xZ = xS * (_p_stMatrix->stCol_0.xZ + _p_stMatrix->stCol_2.xX);
            *_xW = xS * (_p_stMatrix->stCol_2.xY - _p_stMatrix->stCol_1.xZ);
        }
        else if (xNum1 == _p_stMatrix->stCol_1.xY)
        {
            *_xY = 0.5f * xS;
            xS = 0.5f / xS;
            *_xZ = xS * (_p_stMatrix->stCol_1.xZ + _p_stMatrix->stCol_2.xY);
            *_xX = xS * (_p_stMatrix->stCol_1.xX + _p_stMatrix->stCol_0.xY);
            *_xW = xS * (_p_stMatrix->stCol_0.xZ - _p_stMatrix->stCol_2.xX);
        }
        else
        {
            *_xZ = 0.5f * xS;
            xS = 0.5f / xS;
            *_xX = xS * (_p_stMatrix->stCol_2.xX + _p_stMatrix->stCol_0.xZ);
            *_xY = xS * (_p_stMatrix->stCol_2.xY + _p_stMatrix->stCol_1.xZ);
            *_xW = xS * (_p_stMatrix->stCol_1.xX - _p_stMatrix->stCol_0.xY);
        }
    }
}
