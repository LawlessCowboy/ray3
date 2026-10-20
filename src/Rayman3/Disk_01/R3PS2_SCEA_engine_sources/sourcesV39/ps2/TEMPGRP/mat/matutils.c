/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matutils.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;

typedef enum MAT_tdeTranformationType_ {
    MAT_eTransform_Uninitialized = 0,
    MAT_eTransform_Identity = 1,
    MAT_eTransform_Translation = 2,
    MAT_eTransform_Zoom = 3,
    MAT_eTransform_Scale = 4,
    MAT_eTransform_Rotation = 5,
    MAT_eTransform_RotationZoom = 6,
    MAT_eTransform_RotationScale = 7,
    MAT_eTransform_ComplexRotationScale = 8,
    MAT_eTransform_Undefined = 9,
} MAT_tdeTranformationType_;

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

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matutils.c lines 25–90 */
/* addr: 0x002fe4d0  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 25
 *   +0x0034 -> line 34
 *   +0x0060 -> line 39
 *   +0x0068 -> line 41
 *   +0x0074 -> line 46
 *   +0x0080 -> line 47
 *   +0x0088 -> line 51
 *   +0x0090 -> line 57
 *   +0x00b4 -> line 62
 *   +0x00e0 -> line 63
 *   +0x0108 -> line 64
 *   +0x0130 -> line 65
 *   +0x0138 -> line 68
 *   +0x0140 -> line 75
 *   +0x014c -> line 76
 *   +0x0158 -> line 77
 *   +0x0164 -> line 80
 *   +0x0188 -> line 90
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vZoom(MAT_tdstTransformation_* _hTransform, float _xZoomFactor)
{
    MTH4D_tdstMatrix_* p_stMatrix;
    float xDiff;

    xDiff = _xZoomFactor - 1.0f;
    /* abs.s has no C form under the baseline (MWCC calls fabsf). */
    asm { abs.s xDiff, xDiff }
    if (xDiff < 1.0e-4f)
    {
        return;
    }
    p_stMatrix = &_hTransform->stTransformMatrix;
    switch (_hTransform->eType)
    {
        case MAT_eTransform_Uninitialized:
            break;
        case MAT_eTransform_Identity:
            break;
        case MAT_eTransform_Translation:
            break;
        case MAT_eTransform_Zoom:
            _hTransform->eType = MAT_eTransform_Zoom;
            p_stMatrix->stCol_2.xZ = _xZoomFactor;
            p_stMatrix->stCol_1.xY = _xZoomFactor;
            p_stMatrix->stCol_0.xX = _xZoomFactor;
            _hTransform->stScaleVector.xX = _xZoomFactor;
            _hTransform->stScaleVector.xY = _xZoomFactor;
            _hTransform->stScaleVector.xZ = _xZoomFactor;
            _hTransform->stScaleVector.xW = 1.0f;
            break;
        case MAT_eTransform_RotationZoom:
            _hTransform->eType = MAT_eTransform_RotationZoom;
            _hTransform->stScaleVector.xX = _xZoomFactor * _hTransform->stScaleVector.xX;
            _hTransform->stScaleVector.xY = _xZoomFactor * _hTransform->stScaleVector.xY;
            _hTransform->stScaleVector.xZ = _xZoomFactor * _hTransform->stScaleVector.xZ;
            p_stMatrix->stCol_0.xX = _xZoomFactor * p_stMatrix->stCol_0.xX;
            p_stMatrix->stCol_0.xY = _xZoomFactor * p_stMatrix->stCol_0.xY;
            p_stMatrix->stCol_0.xZ = _xZoomFactor * p_stMatrix->stCol_0.xZ;
            p_stMatrix->stCol_0.xW = 1.0f;
            p_stMatrix->stCol_1.xX = _xZoomFactor * p_stMatrix->stCol_1.xX;
            p_stMatrix->stCol_1.xY = _xZoomFactor * p_stMatrix->stCol_1.xY;
            p_stMatrix->stCol_1.xZ = _xZoomFactor * p_stMatrix->stCol_1.xZ;
            p_stMatrix->stCol_1.xW = 1.0f;
            p_stMatrix->stCol_2.xX = _xZoomFactor * p_stMatrix->stCol_2.xX;
            p_stMatrix->stCol_2.xY = _xZoomFactor * p_stMatrix->stCol_2.xY;
            p_stMatrix->stCol_2.xZ = _xZoomFactor * p_stMatrix->stCol_2.xZ;
            p_stMatrix->stCol_2.xW = 1.0f;
            p_stMatrix->stCol_2.xW = 0.0f;
            p_stMatrix->stCol_1.xW = 0.0f;
            p_stMatrix->stCol_0.xW = 0.0f;
            break;
        case MAT_eTransform_Rotation:
            break;
        case MAT_eTransform_Scale:
            p_stMatrix->stCol_0.xX = p_stMatrix->stCol_0.xX * _xZoomFactor;
            p_stMatrix->stCol_1.xY = p_stMatrix->stCol_1.xY * _xZoomFactor;
            p_stMatrix->stCol_2.xZ = p_stMatrix->stCol_2.xZ * _xZoomFactor;
            _hTransform->stScaleVector.xX = _xZoomFactor * _hTransform->stScaleVector.xX;
            _hTransform->stScaleVector.xY = _xZoomFactor * _hTransform->stScaleVector.xY;
            _hTransform->stScaleVector.xZ = _xZoomFactor * _hTransform->stScaleVector.xZ;
            break;
        case MAT_eTransform_RotationScale:
            break;
        case MAT_eTransform_ComplexRotationScale:
            break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matutils.c lines 178–211 */
/* addr: 0x002fe660  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 180
 *   +0x0004 -> line 192
 *   +0x0008 -> line 179
 *   +0x000c -> line 178
 *   +0x0010 -> line 190
 *   +0x0014 -> line 182
 *   +0x0018 -> line 185
 *   +0x001c -> line 188
 *   +0x0020 -> line 184
 *   +0x0024 -> line 187
 *   +0x0028 -> line 189
 *   +0x002c -> line 192
 *   +0x0034 -> line 183
 *   +0x0038 -> line 186
 *   +0x003c -> line 192
 *   +0x0044 -> line 198
 *   +0x0048 -> line 204
 *   +0x004c -> line 198
 *   +0x0050 -> line 204
 *   +0x0054 -> line 193
 *   +0x005c -> line 194
 *   +0x0064 -> line 197
 *   +0x0068 -> line 195
 *   +0x006c -> line 197
 *   +0x0070 -> line 198
 *   +0x0074 -> line 199
 *   +0x007c -> line 202
 *   +0x0080 -> line 200
 *   +0x0084 -> line 203
 *   +0x0088 -> line 202
 *   +0x008c -> line 203
 *   +0x0090 -> line 204
 *   +0x0094 -> line 205
 *   +0x0098 -> line 207
 *   +0x009c -> line 208
 *   +0x00a0 -> line 209
 *   +0x00a4 -> line 211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vNormQuatToMatrix(MTH4D_tdstMatrix_* _p_stMatrix, float _xX, float _xY, float _xZ, float _xW)
{
    float xXs;
    float xYs;
    float xZs;
    float xWx;
    float xWy;
    float xWz;
    float xXx;
    float xXy;
    float xXz;
    float xYy;
    float xYz;
    float xZz;

    xXs = _xX + _xX;
    xYs = _xY + _xY;
    xZs = _xZ + _xZ;
    xWx = _xW * xXs;
    xWy = _xW * xYs;
    xWz = _xW * xZs;
    xXx = _xX * xXs;
    xXy = _xX * xYs;
    xXz = _xX * xZs;
    xYy = _xY * xYs;
    xYz = _xY * xZs;
    xZz = _xZ * xZs;

    _p_stMatrix->stCol_0.xX = 1.0f - (xYy + xZz);
    _p_stMatrix->stCol_1.xX = xXy + xWz;
    _p_stMatrix->stCol_2.xX = xXz - xWy;
    _p_stMatrix->stCol_3.xX = 0.0f;

    _p_stMatrix->stCol_0.xY = xXy - xWz;
    _p_stMatrix->stCol_1.xY = 1.0f - (xXx + xZz);
    _p_stMatrix->stCol_2.xY = xYz + xWx;
    _p_stMatrix->stCol_3.xY = 0.0f;

    _p_stMatrix->stCol_0.xZ = xXz + xWy;
    _p_stMatrix->stCol_1.xZ = xYz - xWx;
    _p_stMatrix->stCol_2.xZ = 1.0f - (xXx + xYy);
    _p_stMatrix->stCol_3.xZ = 0.0f;

    _p_stMatrix->stCol_0.xW = 0.0f;
    _p_stMatrix->stCol_1.xW = 0.0f;
    _p_stMatrix->stCol_2.xW = 0.0f;
    _p_stMatrix->stCol_3.xW = 1.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matutils.c lines 112–160 */
/* addr: 0x002fe710  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 112
 *   +0x0028 -> line 121
 *   +0x002c -> line 122
 *   +0x0030 -> line 129
 *   +0x0034 -> line 120
 *   +0x0038 -> line 123
 *   +0x003c -> line 128
 *   +0x0040 -> line 127
 *   +0x0044 -> line 139
 *   +0x0048 -> line 131
 *   +0x004c -> line 134
 *   +0x0050 -> line 137
 *   +0x0054 -> line 141
 *   +0x0060 -> line 153
 *   +0x0064 -> line 132
 *   +0x0068 -> line 135
 *   +0x006c -> line 147
 *   +0x0070 -> line 136
 *   +0x0074 -> line 133
 *   +0x0078 -> line 138
 *   +0x007c -> line 142
 *   +0x0084 -> line 143
 *   +0x008c -> line 146
 *   +0x0090 -> line 144
 *   +0x0094 -> line 146
 *   +0x0098 -> line 147
 *   +0x00a0 -> line 148
 *   +0x00a8 -> line 151
 *   +0x00ac -> line 149
 *   +0x00b0 -> line 152
 *   +0x00b4 -> line 151
 *   +0x00b8 -> line 153
 *   +0x00bc -> line 152
 *   +0x00c0 -> line 153
 *   +0x00c4 -> line 154
 *   +0x00c8 -> line 156
 *   +0x00cc -> line 157
 *   +0x00d0 -> line 158
 *   +0x00d4 -> line 160
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vQuatToMatrix(MTH4D_tdstMatrix_* _p_stMatrix, float _xX, float _xY, float _xZ, float _xW)
{
    float xXs;
    float xYs;
    float xZs;
    float xWx;
    float xWy;
    float xWz;
    float xXx;
    float xXy;
    float xXz;
    float xYy;
    float xYz;
    float xZz;
    float xInvNorm;

    /* sqrt.s has no C form under the baseline (MWCC calls sqrtf). */
    xInvNorm = (_xX * _xX + _xY * _xY) + (_xZ * _xZ + _xW * _xW); asm { sqrt.s xInvNorm, xInvNorm } xInvNorm = 1.0f / xInvNorm;
    _xX = _xX * xInvNorm;
    _xY = _xY * xInvNorm;
    _xZ = _xZ * xInvNorm;
    _xW = _xW * xInvNorm;
    xXs = _xX + _xX;
    xYs = _xY + _xY;
    xZs = _xZ + _xZ;
    xWx = _xW * xXs;
    xWy = _xW * xYs;
    xWz = _xW * xZs;
    xXx = _xX * xXs;
    xXy = _xX * xYs;
    xXz = _xX * xZs;
    xYy = _xY * xYs;
    xYz = _xY * xZs;
    xZz = _xZ * xZs;

    _p_stMatrix->stCol_0.xX = 1.0f - (xYy + xZz);
    _p_stMatrix->stCol_1.xX = xXy + xWz;
    _p_stMatrix->stCol_2.xX = xXz - xWy;
    _p_stMatrix->stCol_3.xX = 0.0f;

    _p_stMatrix->stCol_0.xY = xXy - xWz;
    _p_stMatrix->stCol_1.xY = 1.0f - (xXx + xZz);
    _p_stMatrix->stCol_2.xY = xYz + xWx;
    _p_stMatrix->stCol_3.xY = 0.0f;

    _p_stMatrix->stCol_0.xZ = xXz + xWy;
    _p_stMatrix->stCol_1.xZ = xYz - xWx;
    _p_stMatrix->stCol_2.xZ = 1.0f - (xXx + xYy);
    _p_stMatrix->stCol_3.xZ = 0.0f;

    _p_stMatrix->stCol_0.xW = 0.0f;
    _p_stMatrix->stCol_1.xW = 0.0f;
    _p_stMatrix->stCol_2.xW = 0.0f;
    _p_stMatrix->stCol_3.xW = 1.0f;
}
