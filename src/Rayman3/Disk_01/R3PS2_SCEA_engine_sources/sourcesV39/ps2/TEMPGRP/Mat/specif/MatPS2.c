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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Mat\specif\MatPS2.c lines 30–91 */
/* addr: 0x002fe7f0  size: 520 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 30
 *   +0x000c -> line 32
 *   +0x0010 -> line 30
 *   +0x0018 -> line 32
 *   +0x0028 -> line 35
 *   +0x002c -> line 34
 *   +0x0030 -> line 35
 *   +0x0034 -> line 34
 *   +0x003c -> line 35
 *   +0x0040 -> line 36
 *   +0x0044 -> line 35
 *   +0x0048 -> line 37
 *   +0x005c -> line 38
 *   +0x0070 -> line 39
 *   +0x0080 -> line 40
 *   +0x0088 -> line 46
 *   +0x008c -> line 43
 *   +0x0090 -> line 44
 *   +0x0094 -> line 46
 *   +0x009c -> line 48
 *   +0x00a0 -> line 49
 *   +0x00a4 -> line 50
 *   +0x00a8 -> line 53
 *   +0x00b8 -> line 55
 *   +0x00bc -> line 56
 *   +0x00c0 -> line 57
 *   +0x00c4 -> line 60
 *   +0x00d0 -> line 65
 *   +0x00d4 -> line 60
 *   +0x00e8 -> line 65
 *   +0x00f0 -> line 67
 *   +0x0100 -> line 68
 *   +0x0104 -> line 67
 *   +0x0108 -> line 69
 *   +0x011c -> line 70
 *   +0x0130 -> line 71
 *   +0x0140 -> line 72
 *   +0x0148 -> line 74
 *   +0x0158 -> line 76
 *   +0x0168 -> line 77
 *   +0x016c -> line 76
 *   +0x0170 -> line 78
 *   +0x0184 -> line 79
 *   +0x0198 -> line 80
 *   +0x01a8 -> line 81
 *   +0x01b0 -> line 84
 *   +0x01bc -> line 85
 *   +0x01c0 -> line 84
 *   +0x01c4 -> line 86
 *   +0x01d8 -> line 87
 *   +0x01ec -> line 88
 *   +0x0200 -> line 91
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
