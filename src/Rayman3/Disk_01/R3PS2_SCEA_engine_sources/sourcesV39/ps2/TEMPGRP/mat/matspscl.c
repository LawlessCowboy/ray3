/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;

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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c lines 102–105 */
/* addr: 0x002fd530  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 102
 *   +0x0008 -> line 103
 *   +0x004c -> line 104
 *   +0x0058 -> line 105
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vSetIdentity(MAT_tdstTransformation_* _hTransform)
{
    _hTransform->eType = MAT_eTransform_Identity;
    _hTransform->stTransformMatrix.stCol_0.xX = 1.0f; _hTransform->stTransformMatrix.stCol_0.xY = 0.0f; _hTransform->stTransformMatrix.stCol_0.xZ = 0.0f; _hTransform->stTransformMatrix.stCol_0.xW = 0.0f; _hTransform->stTransformMatrix.stCol_1.xX = 0.0f; _hTransform->stTransformMatrix.stCol_1.xY = 1.0f; _hTransform->stTransformMatrix.stCol_1.xZ = 0.0f; _hTransform->stTransformMatrix.stCol_1.xW = 0.0f; _hTransform->stTransformMatrix.stCol_2.xX = 0.0f; _hTransform->stTransformMatrix.stCol_2.xY = 0.0f; _hTransform->stTransformMatrix.stCol_2.xZ = 1.0f; _hTransform->stTransformMatrix.stCol_2.xW = 0.0f; _hTransform->stTransformMatrix.stCol_3.xX = 0.0f; _hTransform->stTransformMatrix.stCol_3.xY = 0.0f; _hTransform->stTransformMatrix.stCol_3.xZ = 0.0f; _hTransform->stTransformMatrix.stCol_3.xW = 1.0f;
    _hTransform->stScaleVector.xX = 1.0f; _hTransform->stScaleVector.xY = 1.0f; _hTransform->stScaleVector.xZ = 1.0f; _hTransform->stScaleVector.xW = 1.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c lines 725–756 */
/* addr: 0x002fd590  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 725
 *   +0x0028 -> line 730
 *   +0x0030 -> line 731
 *   +0x0038 -> line 736
 *   +0x0040 -> line 741
 *   +0x0068 -> line 747
 *   +0x0070 -> line 752
 *   +0x0074 -> line 756
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Retail uses sqrt.s, which C cannot express (sqrtf becomes a library call). */
#define MTH_SQRT_TO(_result, _value) asm { sqrt.s _result, _value }

/* R5900 absolute value: MWCC never emits abs.s from plain C. */
inline float MTH_xAbs(float _xValue)
{
    float xResult;

    asm { abs.s xResult, _xValue }
    return xResult;
}

void MAT_fn_vZoom(MAT_tdstTransformation_* _hTransform, float _xZoomFactor);
void MAT_fn_vSetZoom(MAT_tdstTransformation_* _hTransform, float _xZoomFactor);
void MAT_fn_vQuatToMatrix(MTH4D_tdstMatrix_* _p_stMatrix, float _xX, float _xY, float _xZ, float _xW);
void MAT_fn_vRemoveScale(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource);

float MAT_fn_xGetYScale(MAT_tdstTransformation_* _hTransform)
{
    float xScale;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Rotation:
        xScale = 1.0f;
        break;
    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        xScale = _hTransform->stScaleVector.xY;
        break;
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
    case MAT_eTransform_ComplexRotationScale:
        {
            float x0 = _hTransform->stTransformMatrix.stCol_0.xY;
            float x2 = _hTransform->stTransformMatrix.stCol_2.xY;
            float x1 = _hTransform->stTransformMatrix.stCol_1.xY;
            float xSqr = x0 * x0 + x1 * x1 + x2 * x2;
            MTH_SQRT_TO(xScale, xSqr);
        }
        break;
    default:
        xScale = 0.0f;
    }

    return xScale;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c lines 681–712 */
/* addr: 0x002fd610  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 681
 *   +0x0028 -> line 686
 *   +0x0030 -> line 687
 *   +0x0038 -> line 692
 *   +0x0040 -> line 697
 *   +0x0068 -> line 703
 *   +0x0070 -> line 708
 *   +0x0074 -> line 712
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float MAT_fn_xGetXScale(MAT_tdstTransformation_* _hTransform)
{
    float xScale;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Rotation:
        xScale = 1.0f;
        break;
    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        xScale = _hTransform->stScaleVector.xX;
        break;
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
    case MAT_eTransform_ComplexRotationScale:
        {
            float x0 = _hTransform->stTransformMatrix.stCol_0.xX;
            float x2 = _hTransform->stTransformMatrix.stCol_2.xX;
            float x1 = _hTransform->stTransformMatrix.stCol_1.xX;
            float xSqr = x0 * x0 + x1 * x1 + x2 * x2;
            MTH_SQRT_TO(xScale, xSqr);
        }
        break;
    default:
        xScale = 0.0f;
    }

    return xScale;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c lines 616–668 */
/* addr: 0x002fd690  size: 348 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 616
 *   +0x0008 -> line 622
 *   +0x0034 -> line 627
 *   +0x003c -> line 628
 *   +0x0044 -> line 633
 *   +0x004c -> line 642
 *   +0x0070 -> line 643
 *   +0x0090 -> line 645
 *   +0x0098 -> line 651
 *   +0x00f4 -> line 654
 *   +0x0130 -> line 657
 *   +0x0138 -> line 658
 *   +0x0144 -> line 659
 *   +0x014c -> line 664
 *   +0x0150 -> line 668
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* R5900 accumulator ops have no C form under the baseline. */
inline float MTH4D_xSqr3(float xX, float yY, float zZ)
{
    float xResult;

    asm { mula.s xX, xX }
    asm { madda.s yY, yY }
    asm { madd.s xResult, zZ, zZ }
    return xResult;
}

#define M_MAX(a, b) (((a) > (b)) ? (a) : (b))

float PS2SQRTF(float x);

float MAT_fn_xGetMaxScaleNonOpt(MAT_tdstTransformation_* _hTransform)
{
    MTH4D_tdstVector_* p_stScale;
    MTH4D_tdstMatrix_* p_stMatrix;
    float xMax;

    p_stMatrix = &_hTransform->stTransformMatrix;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Rotation:
        return 1.0f;

    case MAT_eTransform_Zoom:
    case MAT_eTransform_RotationZoom:
        xMax = _hTransform->stScaleVector.xX;
        break;

    case MAT_eTransform_Scale:
    case MAT_eTransform_RotationScale:
        p_stScale = &_hTransform->stScaleVector;
        xMax = M_MAX(p_stScale->xX, p_stScale->xY);
        xMax = M_MAX(xMax, p_stScale->xZ);
        break;

    case MAT_eTransform_ComplexRotationScale:
        xMax = M_MAX(MTH4D_xSqr3(p_stMatrix->stCol_0.xX, p_stMatrix->stCol_0.xY, p_stMatrix->stCol_0.xZ),
                     MTH4D_xSqr3(p_stMatrix->stCol_1.xX, p_stMatrix->stCol_1.xY, p_stMatrix->stCol_1.xZ));
        xMax = M_MAX(xMax, MTH4D_xSqr3(p_stMatrix->stCol_2.xX, p_stMatrix->stCol_2.xY, p_stMatrix->stCol_2.xZ));
        xMax = PS2SQRTF(xMax);
        return 1.4142135f * xMax;

    default:
        xMax = 0.0f;
        break;
    }
    return xMax;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c lines 576–601 */
/* addr: 0x002fd7f0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 576
 *   +0x0028 -> line 581
 *   +0x0034 -> line 582
 *   +0x003c -> line 588
 *   +0x0050 -> line 589
 *   +0x0058 -> line 594
 *   +0x0068 -> line 601
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vGetScale(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stScaleVector)
{
    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Rotation:
        _p_stScaleVector->xX = 1.0f; _p_stScaleVector->xY = 1.0f; _p_stScaleVector->xZ = 1.0f;
        break;


    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
        *(int*)&_p_stScaleVector->xX = *(int*)&_hTransform->stScaleVector.xX; *(int*)&_p_stScaleVector->xY = *(int*)&_hTransform->stScaleVector.xY; *(int*)&_p_stScaleVector->xZ = *(int*)&_hTransform->stScaleVector.xZ;
        break;



    case MAT_eTransform_ComplexRotationScale:
        _p_stScaleVector->xX = 1.0f; _p_stScaleVector->xY = 1.0f; _p_stScaleVector->xZ = 1.0f;
        break;



    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c lines 427–521 */
/* addr: 0x002fd860  size: 708 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 427
 *   +0x0010 -> line 430
 *   +0x003c -> line 435
 *   +0x0044 -> line 436
 *   +0x0070 -> line 437
 *   +0x0078 -> line 443
 *   +0x007c -> line 444
 *   +0x0080 -> line 443
 *   +0x0084 -> line 444
 *   +0x00b4 -> line 445
 *   +0x00d4 -> line 446
 *   +0x00e0 -> line 447
 *   +0x00e8 -> line 454
 *   +0x00ec -> line 457
 *   +0x00f0 -> line 454
 *   +0x00f4 -> line 457
 *   +0x0128 -> line 462
 *   +0x0158 -> line 467
 *   +0x0188 -> line 473
 *   +0x01a8 -> line 477
 *   +0x01b4 -> line 482
 *   +0x01c0 -> line 484
 *   +0x01c8 -> line 495
 *   +0x01e4 -> line 503
 *   +0x01f0 -> line 506
 *   +0x01f4 -> line 503
 *   +0x01f8 -> line 506
 *   +0x01fc -> line 503
 *   +0x0200 -> line 506
 *   +0x0204 -> line 509
 *   +0x0208 -> line 511
 *   +0x020c -> line 503
 *   +0x021c -> line 506
 *   +0x029c -> line 509
 *   +0x02ac -> line 511
 *   +0x02b0 -> line 521
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vRemoveScale(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource)
{
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstMatrix_ TmpMat;
    float xScaleConversion;
    MTH4D_tdstVector_* p_stOriginalScale;

    switch (_hSource->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Rotation:
        if (_hDest != _hSource) *_hDest = *_hSource;
        break;

    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        _hDest->eType = MAT_eTransform_Translation;
        _hDest->stTransformMatrix.stCol_0.xX = 1.0f;
        _hDest->stTransformMatrix.stCol_0.xY = 0.0f;
        _hDest->stTransformMatrix.stCol_0.xZ = 0.0f;
        _hDest->stTransformMatrix.stCol_0.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_1.xX = 0.0f;
        _hDest->stTransformMatrix.stCol_1.xY = 1.0f;
        _hDest->stTransformMatrix.stCol_1.xZ = 0.0f;
        _hDest->stTransformMatrix.stCol_1.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_2.xX = 0.0f;
        _hDest->stTransformMatrix.stCol_2.xY = 0.0f;
        _hDest->stTransformMatrix.stCol_2.xZ = 1.0f;
        _hDest->stTransformMatrix.stCol_2.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_3.xX = _hSource->stTransformMatrix.stCol_3.xX;
        _hDest->stTransformMatrix.stCol_3.xY = _hSource->stTransformMatrix.stCol_3.xY;
        _hDest->stTransformMatrix.stCol_3.xZ = _hSource->stTransformMatrix.stCol_3.xZ;
        _hDest->stTransformMatrix.stCol_3.xW = _hSource->stTransformMatrix.stCol_3.xW;
        _hDest->stScaleVector.xX = 1.0f;
        _hDest->stScaleVector.xY = 1.0f;
        _hDest->stScaleVector.xZ = 1.0f;
        _hDest->stScaleVector.xW = 1.0f;
        break;

    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
        _hDest->eType = MAT_eTransform_Rotation;
        xScaleConversion = 1.0f / _hSource->stScaleVector.xX;
        _hDest->stTransformMatrix.stCol_0.xX = xScaleConversion * _hSource->stTransformMatrix.stCol_0.xX;
        _hDest->stTransformMatrix.stCol_0.xY = xScaleConversion * _hSource->stTransformMatrix.stCol_0.xY;
        _hDest->stTransformMatrix.stCol_0.xZ = xScaleConversion * _hSource->stTransformMatrix.stCol_0.xZ;
        _hDest->stTransformMatrix.stCol_0.xW = 1.0f;
        xScaleConversion = 1.0f / _hSource->stScaleVector.xY;
        _hDest->stTransformMatrix.stCol_1.xX = xScaleConversion * _hSource->stTransformMatrix.stCol_1.xX;
        _hDest->stTransformMatrix.stCol_1.xY = xScaleConversion * _hSource->stTransformMatrix.stCol_1.xY;
        _hDest->stTransformMatrix.stCol_1.xZ = xScaleConversion * _hSource->stTransformMatrix.stCol_1.xZ;
        _hDest->stTransformMatrix.stCol_1.xW = 1.0f;
        xScaleConversion = 1.0f / _hSource->stScaleVector.xZ;
        _hDest->stTransformMatrix.stCol_2.xX = xScaleConversion * _hSource->stTransformMatrix.stCol_2.xX;
        _hDest->stTransformMatrix.stCol_2.xY = xScaleConversion * _hSource->stTransformMatrix.stCol_2.xY;
        _hDest->stTransformMatrix.stCol_2.xZ = xScaleConversion * _hSource->stTransformMatrix.stCol_2.xZ;
        _hDest->stTransformMatrix.stCol_2.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_3.xX = _hSource->stTransformMatrix.stCol_3.xX;
        _hDest->stTransformMatrix.stCol_3.xY = _hSource->stTransformMatrix.stCol_3.xY;
        _hDest->stTransformMatrix.stCol_3.xZ = _hSource->stTransformMatrix.stCol_3.xZ;
        _hDest->stTransformMatrix.stCol_3.xW = _hSource->stTransformMatrix.stCol_3.xW;
        _hDest->stTransformMatrix.stCol_2.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_1.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_0.xW = 0.0f;
        _hDest->stScaleVector.xX = 1.0f;
        _hDest->stScaleVector.xY = 1.0f;
        _hDest->stScaleVector.xZ = 1.0f;
        _hDest->stScaleVector.xW = 1.0f;
        break;

    case MAT_eTransform_ComplexRotationScale:
        p_stMatrix = &_hDest->stTransformMatrix;
        MAT_fn_vQuatToMatrix(&TmpMat, _hDest->stScaleVector.xX, _hDest->stScaleVector.xY,
                            _hDest->stScaleVector.xZ, _hDest->stScaleVector.xW);
        TmpMat.stCol_3.xX = p_stMatrix->stCol_3.xX;
        TmpMat.stCol_3.xY = p_stMatrix->stCol_3.xY;
        TmpMat.stCol_3.xZ = p_stMatrix->stCol_3.xZ;
        TmpMat.stCol_3.xW = p_stMatrix->stCol_3.xW;
        p_stMatrix->stCol_0.xX = TmpMat.stCol_0.xX;
        p_stMatrix->stCol_0.xY = TmpMat.stCol_0.xY;
        p_stMatrix->stCol_0.xZ = TmpMat.stCol_0.xZ;
        p_stMatrix->stCol_0.xW = TmpMat.stCol_0.xW;
        p_stMatrix->stCol_1.xX = TmpMat.stCol_1.xX;
        p_stMatrix->stCol_1.xY = TmpMat.stCol_1.xY;
        p_stMatrix->stCol_1.xZ = TmpMat.stCol_1.xZ;
        p_stMatrix->stCol_1.xW = TmpMat.stCol_1.xW;
        p_stMatrix->stCol_2.xX = TmpMat.stCol_2.xX;
        p_stMatrix->stCol_2.xY = TmpMat.stCol_2.xY;
        p_stMatrix->stCol_2.xZ = TmpMat.stCol_2.xZ;
        p_stMatrix->stCol_2.xW = TmpMat.stCol_2.xW;
        p_stMatrix->stCol_3.xX = TmpMat.stCol_3.xX;
        p_stMatrix->stCol_3.xY = TmpMat.stCol_3.xY;
        p_stMatrix->stCol_3.xZ = TmpMat.stCol_3.xZ;
        p_stMatrix->stCol_3.xW = TmpMat.stCol_3.xW;
        _hDest->stScaleVector.xX = 1.0f;
        _hDest->stScaleVector.xY = 1.0f;
        _hDest->stScaleVector.xZ = 1.0f;
        _hDest->stScaleVector.xW = 1.0f;
        _hDest->eType = MAT_eTransform_Rotation;
        break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c lines 303–419 */
/* addr: 0x002fdb30  size: 1032 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 303
 *   +0x0004 -> line 308
 *   +0x0008 -> line 303
 *   +0x000c -> line 308
 *   +0x0010 -> line 303
 *   +0x0014 -> line 308
 *   +0x0018 -> line 303
 *   +0x0024 -> line 308
 *   +0x0074 -> line 311
 *   +0x007c -> line 312
 *   +0x0084 -> line 317
 *   +0x00b0 -> line 323
 *   +0x00b8 -> line 326
 *   +0x00c0 -> line 327
 *   +0x00c8 -> line 328
 *   +0x00d0 -> line 331
 *   +0x00e4 -> line 332
 *   +0x00ec -> line 336
 *   +0x00f0 -> line 339
 *   +0x00f4 -> line 336
 *   +0x00f8 -> line 339
 *   +0x0124 -> line 340
 *   +0x0150 -> line 341
 *   +0x017c -> line 342
 *   +0x0188 -> line 347
 *   +0x019c -> line 348
 *   +0x01a4 -> line 352
 *   +0x01ac -> line 360
 *   +0x01b0 -> line 361
 *   +0x01b4 -> line 360
 *   +0x01b8 -> line 361
 *   +0x01bc -> line 360
 *   +0x01c0 -> line 361
 *   +0x01e4 -> line 363
 *   +0x01ec -> line 364
 *   +0x01f0 -> line 363
 *   +0x01f4 -> line 364
 *   +0x0218 -> line 366
 *   +0x0220 -> line 367
 *   +0x0224 -> line 366
 *   +0x0228 -> line 367
 *   +0x024c -> line 369
 *   +0x0258 -> line 374
 *   +0x026c -> line 376
 *   +0x0274 -> line 387
 *   +0x028c -> line 395
 *   +0x0298 -> line 398
 *   +0x029c -> line 395
 *   +0x02a0 -> line 398
 *   +0x02a4 -> line 395
 *   +0x02a8 -> line 398
 *   +0x02ac -> line 402
 *   +0x02b0 -> line 410
 *   +0x02b4 -> line 395
 *   +0x02c4 -> line 398
 *   +0x0344 -> line 402
 *   +0x0370 -> line 403
 *   +0x039c -> line 404
 *   +0x03c8 -> line 405
 *   +0x03d4 -> line 408
 *   +0x03ec -> line 410
 *   +0x03f0 -> line 419
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vSetScale(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stScale)
{
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstMatrix_ TmpMat;
    MTH4D_tdstMatrix_* p_stTmp;
    unsigned char bUniformScale;
    float xScale;

    if (MTH_xAbs(_p_stScale->xX - _p_stScale->xY) < 0.0001f)
    {
        bUniformScale = 0;
        if (MTH_xAbs(_p_stScale->xX - _p_stScale->xZ) < 0.0001f) bUniformScale = 1;
    }
    else
    {
        bUniformScale = 0;
    }
    if (bUniformScale)
    {
        MAT_fn_vSetZoom(_hTransform, _p_stScale->xX);
        return;
    }

    p_stMatrix = &_hTransform->stTransformMatrix;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Zoom:
        _hTransform->eType = MAT_eTransform_Scale;
        /* fall through */
    case MAT_eTransform_Scale:
        p_stMatrix->stCol_0.xX = _p_stScale->xX;
        p_stMatrix->stCol_1.xY = _p_stScale->xY;
        p_stMatrix->stCol_2.xZ = _p_stScale->xZ;
        *(int*)&_hTransform->stScaleVector.xX = *(int*)&_p_stScale->xX;
        *(int*)&_hTransform->stScaleVector.xY = *(int*)&_p_stScale->xY;
        *(int*)&_hTransform->stScaleVector.xZ = *(int*)&_p_stScale->xZ;
        break;

    case MAT_eTransform_Rotation:
        _hTransform->eType = MAT_eTransform_RotationScale;
        xScale = _p_stScale->xX;
        p_stMatrix->stCol_0.xX = xScale * p_stMatrix->stCol_0.xX;
        p_stMatrix->stCol_0.xY = xScale * p_stMatrix->stCol_0.xY;
        p_stMatrix->stCol_0.xZ = xScale * p_stMatrix->stCol_0.xZ;
        p_stMatrix->stCol_0.xW = 1.0f;
        xScale = _p_stScale->xY;
        p_stMatrix->stCol_1.xX = xScale * p_stMatrix->stCol_1.xX;
        p_stMatrix->stCol_1.xY = xScale * p_stMatrix->stCol_1.xY;
        p_stMatrix->stCol_1.xZ = xScale * p_stMatrix->stCol_1.xZ;
        p_stMatrix->stCol_1.xW = 1.0f;
        xScale = _p_stScale->xZ;
        p_stMatrix->stCol_2.xX = xScale * p_stMatrix->stCol_2.xX;
        p_stMatrix->stCol_2.xY = xScale * p_stMatrix->stCol_2.xY;
        p_stMatrix->stCol_2.xZ = xScale * p_stMatrix->stCol_2.xZ;
        p_stMatrix->stCol_2.xW = 1.0f;
        p_stMatrix->stCol_2.xW = 0.0f;
        p_stMatrix->stCol_1.xW = 0.0f;
        p_stMatrix->stCol_0.xW = 0.0f;
        *(int*)&_hTransform->stScaleVector.xX = *(int*)&_p_stScale->xX;
        *(int*)&_hTransform->stScaleVector.xY = *(int*)&_p_stScale->xY;
        *(int*)&_hTransform->stScaleVector.xZ = *(int*)&_p_stScale->xZ;
        break;

    case MAT_eTransform_RotationZoom:
        _hTransform->eType = MAT_eTransform_RotationScale;
        /* fall through */
    case MAT_eTransform_RotationScale:
        xScale = _p_stScale->xX / _hTransform->stScaleVector.xX;
        p_stMatrix->stCol_0.xX = xScale * p_stMatrix->stCol_0.xX;
        p_stMatrix->stCol_0.xY = xScale * p_stMatrix->stCol_0.xY;
        p_stMatrix->stCol_0.xZ = xScale * p_stMatrix->stCol_0.xZ;
        p_stMatrix->stCol_0.xW = 1.0f;
        xScale = _p_stScale->xY / _hTransform->stScaleVector.xY;
        p_stMatrix->stCol_1.xX = xScale * p_stMatrix->stCol_1.xX;
        p_stMatrix->stCol_1.xY = xScale * p_stMatrix->stCol_1.xY;
        p_stMatrix->stCol_1.xZ = xScale * p_stMatrix->stCol_1.xZ;
        p_stMatrix->stCol_1.xW = 1.0f;
        xScale = _p_stScale->xZ / _hTransform->stScaleVector.xZ;
        p_stMatrix->stCol_2.xX = xScale * p_stMatrix->stCol_2.xX;
        p_stMatrix->stCol_2.xY = xScale * p_stMatrix->stCol_2.xY;
        p_stMatrix->stCol_2.xZ = xScale * p_stMatrix->stCol_2.xZ;
        p_stMatrix->stCol_2.xW = 1.0f;
        p_stMatrix->stCol_2.xW = 0.0f;
        p_stMatrix->stCol_1.xW = 0.0f;
        p_stMatrix->stCol_0.xW = 0.0f;
        *(int*)&_hTransform->stScaleVector.xX = *(int*)&_p_stScale->xX;
        *(int*)&_hTransform->stScaleVector.xY = *(int*)&_p_stScale->xY;
        *(int*)&_hTransform->stScaleVector.xZ = *(int*)&_p_stScale->xZ;
        break;

    case MAT_eTransform_ComplexRotationScale:
        MAT_fn_vQuatToMatrix(&TmpMat, _hTransform->stScaleVector.xX, _hTransform->stScaleVector.xY,
                            _hTransform->stScaleVector.xZ, _hTransform->stScaleVector.xW);
        p_stTmp = &TmpMat;
        p_stTmp->stCol_3.xX = p_stMatrix->stCol_3.xX;
        p_stTmp->stCol_3.xY = p_stMatrix->stCol_3.xY;
        p_stTmp->stCol_3.xZ = p_stMatrix->stCol_3.xZ;
        p_stTmp->stCol_3.xW = p_stMatrix->stCol_3.xW;
        p_stMatrix->stCol_0.xX = p_stTmp->stCol_0.xX;
        p_stMatrix->stCol_0.xY = p_stTmp->stCol_0.xY;
        p_stMatrix->stCol_0.xZ = p_stTmp->stCol_0.xZ;
        p_stMatrix->stCol_0.xW = p_stTmp->stCol_0.xW;
        p_stMatrix->stCol_1.xX = p_stTmp->stCol_1.xX;
        p_stMatrix->stCol_1.xY = p_stTmp->stCol_1.xY;
        p_stMatrix->stCol_1.xZ = p_stTmp->stCol_1.xZ;
        p_stMatrix->stCol_1.xW = p_stTmp->stCol_1.xW;
        p_stMatrix->stCol_2.xX = p_stTmp->stCol_2.xX;
        p_stMatrix->stCol_2.xY = p_stTmp->stCol_2.xY;
        p_stMatrix->stCol_2.xZ = p_stTmp->stCol_2.xZ;
        p_stMatrix->stCol_2.xW = p_stTmp->stCol_2.xW;
        p_stMatrix->stCol_3.xX = p_stTmp->stCol_3.xX;
        p_stMatrix->stCol_3.xY = p_stTmp->stCol_3.xY;
        p_stMatrix->stCol_3.xZ = p_stTmp->stCol_3.xZ;
        p_stMatrix->stCol_3.xW = p_stTmp->stCol_3.xW;
        xScale = _p_stScale->xX;
        p_stMatrix->stCol_0.xX = xScale * p_stMatrix->stCol_0.xX;
        p_stMatrix->stCol_0.xY = xScale * p_stMatrix->stCol_0.xY;
        p_stMatrix->stCol_0.xZ = xScale * p_stMatrix->stCol_0.xZ;
        p_stMatrix->stCol_0.xW = 1.0f;
        xScale = _p_stScale->xY;
        p_stMatrix->stCol_1.xX = xScale * p_stMatrix->stCol_1.xX;
        p_stMatrix->stCol_1.xY = xScale * p_stMatrix->stCol_1.xY;
        p_stMatrix->stCol_1.xZ = xScale * p_stMatrix->stCol_1.xZ;
        p_stMatrix->stCol_1.xW = 1.0f;
        xScale = _p_stScale->xZ;
        p_stMatrix->stCol_2.xX = xScale * p_stMatrix->stCol_2.xX;
        p_stMatrix->stCol_2.xY = xScale * p_stMatrix->stCol_2.xY;
        p_stMatrix->stCol_2.xZ = xScale * p_stMatrix->stCol_2.xZ;
        p_stMatrix->stCol_2.xW = 1.0f;
        p_stMatrix->stCol_2.xW = 0.0f;
        p_stMatrix->stCol_1.xW = 0.0f;
        p_stMatrix->stCol_0.xW = 0.0f;
        *(int*)&_hTransform->stScaleVector.xX = *(int*)&_p_stScale->xX;
        *(int*)&_hTransform->stScaleVector.xY = *(int*)&_p_stScale->xY;
        *(int*)&_hTransform->stScaleVector.xZ = *(int*)&_p_stScale->xZ;
        _hTransform->eType = MAT_eTransform_RotationScale;
        break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c lines 178–295 */
/* addr: 0x002fdf40  size: 904 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 183
 *   +0x0004 -> line 178
 *   +0x0008 -> line 183
 *   +0x000c -> line 178
 *   +0x0014 -> line 183
 *   +0x001c -> line 178
 *   +0x0020 -> line 183
 *   +0x0030 -> line 178
 *   +0x0034 -> line 183
 *   +0x0044 -> line 186
 *   +0x004c -> line 187
 *   +0x0054 -> line 192
 *   +0x0080 -> line 198
 *   +0x0088 -> line 201
 *   +0x008c -> line 206
 *   +0x0090 -> line 201
 *   +0x0098 -> line 206
 *   +0x00a4 -> line 207
 *   +0x00ac -> line 211
 *   +0x00b4 -> line 214
 *   +0x00dc -> line 215
 *   +0x0104 -> line 216
 *   +0x012c -> line 217
 *   +0x0138 -> line 222
 *   +0x0144 -> line 223
 *   +0x014c -> line 227
 *   +0x0154 -> line 235
 *   +0x0158 -> line 236
 *   +0x0160 -> line 235
 *   +0x0164 -> line 236
 *   +0x0188 -> line 238
 *   +0x018c -> line 239
 *   +0x0190 -> line 238
 *   +0x0194 -> line 239
 *   +0x01b8 -> line 241
 *   +0x01bc -> line 242
 *   +0x01c0 -> line 241
 *   +0x01c4 -> line 242
 *   +0x01e8 -> line 243
 *   +0x01f4 -> line 248
 *   +0x0200 -> line 250
 *   +0x0208 -> line 261
 *   +0x0220 -> line 269
 *   +0x022c -> line 272
 *   +0x0230 -> line 269
 *   +0x0234 -> line 272
 *   +0x0238 -> line 269
 *   +0x023c -> line 272
 *   +0x0240 -> line 276
 *   +0x0244 -> line 285
 *   +0x0248 -> line 269
 *   +0x0258 -> line 272
 *   +0x02d8 -> line 276
 *   +0x0300 -> line 277
 *   +0x0328 -> line 278
 *   +0x0350 -> line 279
 *   +0x035c -> line 282
 *   +0x036c -> line 285
 *   +0x0370 -> line 295
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vSetZoom(MAT_tdstTransformation_* _hTransform, float _xZoomFactor)
{
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstMatrix_ TmpMat;
    MTH4D_tdstMatrix_* p_stTmp;
    float xScale;

    if (MTH_xAbs(_xZoomFactor - 1.0f) < 0.0001f)
    {
        MAT_fn_vRemoveScale(_hTransform, _hTransform);
        return;
    }

    p_stMatrix = &_hTransform->stTransformMatrix;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Scale:
        _hTransform->eType = MAT_eTransform_Zoom;
        /* fall through */
    case MAT_eTransform_Zoom:
        p_stMatrix->stCol_2.xZ = _xZoomFactor;
        p_stMatrix->stCol_1.xY = _xZoomFactor;
        p_stMatrix->stCol_0.xX = _xZoomFactor;
        _hTransform->stScaleVector.xX = _xZoomFactor;
        _hTransform->stScaleVector.xY = _xZoomFactor;
        _hTransform->stScaleVector.xZ = _xZoomFactor;
        _hTransform->stScaleVector.xW = 1.0f;
        break;

    case MAT_eTransform_Rotation:
        _hTransform->eType = MAT_eTransform_RotationZoom;
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
        _hTransform->stScaleVector.xX = _xZoomFactor;
        _hTransform->stScaleVector.xY = _xZoomFactor;
        _hTransform->stScaleVector.xZ = _xZoomFactor;
        _hTransform->stScaleVector.xW = 1.0f;
        break;

    case MAT_eTransform_RotationScale:
        _hTransform->eType = MAT_eTransform_RotationZoom;
        /* fall through */
    case MAT_eTransform_RotationZoom:
        xScale = _xZoomFactor / _hTransform->stScaleVector.xX;
        p_stMatrix->stCol_0.xX = xScale * p_stMatrix->stCol_0.xX;
        p_stMatrix->stCol_0.xY = xScale * p_stMatrix->stCol_0.xY;
        p_stMatrix->stCol_0.xZ = xScale * p_stMatrix->stCol_0.xZ;
        p_stMatrix->stCol_0.xW = 1.0f;
        xScale = _xZoomFactor / _hTransform->stScaleVector.xY;
        p_stMatrix->stCol_1.xX = xScale * p_stMatrix->stCol_1.xX;
        p_stMatrix->stCol_1.xY = xScale * p_stMatrix->stCol_1.xY;
        p_stMatrix->stCol_1.xZ = xScale * p_stMatrix->stCol_1.xZ;
        p_stMatrix->stCol_1.xW = 1.0f;
        xScale = _xZoomFactor / _hTransform->stScaleVector.xZ;
        p_stMatrix->stCol_2.xX = xScale * p_stMatrix->stCol_2.xX;
        p_stMatrix->stCol_2.xY = xScale * p_stMatrix->stCol_2.xY;
        p_stMatrix->stCol_2.xZ = xScale * p_stMatrix->stCol_2.xZ;
        p_stMatrix->stCol_2.xW = 1.0f;
        p_stMatrix->stCol_2.xW = 0.0f;
        p_stMatrix->stCol_1.xW = 0.0f;
        p_stMatrix->stCol_0.xW = 0.0f;
        _hTransform->stScaleVector.xX = _xZoomFactor;
        _hTransform->stScaleVector.xY = _xZoomFactor;
        _hTransform->stScaleVector.xZ = _xZoomFactor;
        _hTransform->stScaleVector.xW = 1.0f;
        break;

    case MAT_eTransform_ComplexRotationScale:
        MAT_fn_vQuatToMatrix(&TmpMat, _hTransform->stScaleVector.xX, _hTransform->stScaleVector.xY,
                            _hTransform->stScaleVector.xZ, _hTransform->stScaleVector.xW);
        p_stTmp = &TmpMat;
        p_stTmp->stCol_3.xX = p_stMatrix->stCol_3.xX;
        p_stTmp->stCol_3.xY = p_stMatrix->stCol_3.xY;
        p_stTmp->stCol_3.xZ = p_stMatrix->stCol_3.xZ;
        p_stTmp->stCol_3.xW = p_stMatrix->stCol_3.xW;
        p_stMatrix->stCol_0.xX = p_stTmp->stCol_0.xX;
        p_stMatrix->stCol_0.xY = p_stTmp->stCol_0.xY;
        p_stMatrix->stCol_0.xZ = p_stTmp->stCol_0.xZ;
        p_stMatrix->stCol_0.xW = p_stTmp->stCol_0.xW;
        p_stMatrix->stCol_1.xX = p_stTmp->stCol_1.xX;
        p_stMatrix->stCol_1.xY = p_stTmp->stCol_1.xY;
        p_stMatrix->stCol_1.xZ = p_stTmp->stCol_1.xZ;
        p_stMatrix->stCol_1.xW = p_stTmp->stCol_1.xW;
        p_stMatrix->stCol_2.xX = p_stTmp->stCol_2.xX;
        p_stMatrix->stCol_2.xY = p_stTmp->stCol_2.xY;
        p_stMatrix->stCol_2.xZ = p_stTmp->stCol_2.xZ;
        p_stMatrix->stCol_2.xW = p_stTmp->stCol_2.xW;
        p_stMatrix->stCol_3.xX = p_stTmp->stCol_3.xX;
        p_stMatrix->stCol_3.xY = p_stTmp->stCol_3.xY;
        p_stMatrix->stCol_3.xZ = p_stTmp->stCol_3.xZ;
        p_stMatrix->stCol_3.xW = p_stTmp->stCol_3.xW;
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
        _hTransform->stScaleVector.xX = _xZoomFactor;
        _hTransform->stScaleVector.xY = _xZoomFactor;
        _hTransform->stScaleVector.xZ = _xZoomFactor;
        _hTransform->stScaleVector.xW = 1.0f;
        _hTransform->eType = MAT_eTransform_RotationZoom;
        break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matspscl.c lines 98–170 */
/* addr: 0x002fe2d0  size: 500 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 98
 *   +0x0004 -> line 103
 *   +0x0008 -> line 98
 *   +0x000c -> line 103
 *   +0x0068 -> line 106
 *   +0x0070 -> line 107
 *   +0x0078 -> line 112
 *   +0x00a4 -> line 117
 *   +0x00ac -> line 119
 *   +0x00b4 -> line 120
 *   +0x00bc -> line 121
 *   +0x00c4 -> line 124
 *   +0x00d8 -> line 125
 *   +0x00e0 -> line 129
 *   +0x00e8 -> line 135
 *   +0x00f8 -> line 136
 *   +0x0108 -> line 137
 *   +0x0114 -> line 138
 *   +0x011c -> line 143
 *   +0x0124 -> line 150
 *   +0x0154 -> line 155
 *   +0x0184 -> line 156
 *   +0x01b0 -> line 157
 *   +0x01dc -> line 159
 *   +0x01e8 -> line 170
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vScale(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stScale)
{
    MTH4D_tdstMatrix_* p_stMatrix;
    unsigned char bUniformScale;
    float xScale;    if (MTH_xAbs(_p_stScale->xX - _p_stScale->xY) < 0.0001f)
    {
        if (MTH_xAbs(_p_stScale->xX - _p_stScale->xZ) < 0.0001f) { bUniformScale = 1; }
        else { bUniformScale = 0; }
    }
    else
    {
        bUniformScale = 0;
    }
    if (bUniformScale)
    {
        MAT_fn_vZoom(_hTransform, _p_stScale->xX);
        return;
    }

    p_stMatrix = &_hTransform->stTransformMatrix;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
        _hTransform->eType = MAT_eTransform_Scale;
        p_stMatrix->stCol_0.xX = _p_stScale->xX;
        p_stMatrix->stCol_1.xY = _p_stScale->xY;
        p_stMatrix->stCol_2.xZ = _p_stScale->xZ;
        *(int*)&_hTransform->stScaleVector.xX = *(int*)&_p_stScale->xX;
        *(int*)&_hTransform->stScaleVector.xY = *(int*)&_p_stScale->xY;
        *(int*)&_hTransform->stScaleVector.xZ = *(int*)&_p_stScale->xZ;
        break;

    case MAT_eTransform_Zoom:
        _hTransform->eType = MAT_eTransform_Scale;
        /* fall through */
    case MAT_eTransform_Scale:
        p_stMatrix->stCol_0.xX = p_stMatrix->stCol_0.xX * _p_stScale->xX;
        p_stMatrix->stCol_1.xY = p_stMatrix->stCol_1.xY * _p_stScale->xY;
        p_stMatrix->stCol_2.xZ = p_stMatrix->stCol_2.xZ * _p_stScale->xZ;
        break;

    case MAT_eTransform_Rotation:
    case MAT_eTransform_RotationZoom:
        _hTransform->eType = MAT_eTransform_RotationScale;
        /* fall through */
    case MAT_eTransform_RotationScale:
        _hTransform->stScaleVector.xX = _hTransform->stScaleVector.xX * _p_stScale->xX;
        _hTransform->stScaleVector.xY = _hTransform->stScaleVector.xY * _p_stScale->xY;
        _hTransform->stScaleVector.xZ = _hTransform->stScaleVector.xZ * _p_stScale->xZ;
        /* fall through */
    case MAT_eTransform_ComplexRotationScale:
        xScale = _p_stScale->xX;
        p_stMatrix->stCol_0.xX = xScale * p_stMatrix->stCol_0.xX;
        p_stMatrix->stCol_0.xY = xScale * p_stMatrix->stCol_0.xY;
        p_stMatrix->stCol_0.xZ = xScale * p_stMatrix->stCol_0.xZ;
        p_stMatrix->stCol_0.xW = 1.0f;
        xScale = _p_stScale->xY;
        p_stMatrix->stCol_1.xX = xScale * p_stMatrix->stCol_1.xX;
        p_stMatrix->stCol_1.xY = xScale * p_stMatrix->stCol_1.xY;
        p_stMatrix->stCol_1.xZ = xScale * p_stMatrix->stCol_1.xZ;
        p_stMatrix->stCol_1.xW = 1.0f;
        xScale = _p_stScale->xZ;
        p_stMatrix->stCol_2.xX = xScale * p_stMatrix->stCol_2.xX;
        p_stMatrix->stCol_2.xY = xScale * p_stMatrix->stCol_2.xY;
        p_stMatrix->stCol_2.xZ = xScale * p_stMatrix->stCol_2.xZ;
        p_stMatrix->stCol_2.xW = 1.0f;
        p_stMatrix->stCol_2.xW = 0.0f;
        p_stMatrix->stCol_1.xW = 0.0f;
        p_stMatrix->stCol_0.xW = 0.0f;
        break;
    }
}

