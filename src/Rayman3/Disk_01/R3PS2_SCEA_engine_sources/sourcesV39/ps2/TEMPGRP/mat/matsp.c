/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered from the original PS2 MTH floating-point helper convention. */
#define MTH_ABS_IN_PLACE(_value) asm { abs.s _value, _value }

/* Recovered PS2 MTH scalar helpers: the R5900 double-single accumulator ops
 * are not emittable from C under the project baseline, so the squared length
 * of a vector is written as a statement-level asm block. */
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x } \
    asm { madda.s _y, _y } \
    asm { madd.s _result, _z, _z }
#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }

#define MAT_COPY_VECTOR(_stDest, _stSource) (*(struct MAT_v4*)&(_stDest) = *(struct MAT_v4*)&(_stSource))

#define MAT_COPY_ROTATION_AND_SCALE(_hDest, _hSource) do { \
    MAT_COPY_VECTOR((_hDest)->stTransformMatrix.stCol_0, (_hSource)->stTransformMatrix.stCol_0); \
    MAT_COPY_VECTOR((_hDest)->stTransformMatrix.stCol_1, (_hSource)->stTransformMatrix.stCol_1); \
    MAT_COPY_VECTOR((_hDest)->stTransformMatrix.stCol_2, (_hSource)->stTransformMatrix.stCol_2); \
    MAT_COPY_VECTOR((_hDest)->stScaleVector, (_hSource)->stScaleVector); \
} while (0)

#define MAT_COPY_TRANSFORMATION(_hDest, _hSource) (*(_hDest) = *(_hSource))

#define MAT_MULTIPLY_SCALES(_hDest, _hA, _hB) do { \
    (_hDest)->stScaleVector.xX = (_hA)->stScaleVector.xX * (_hB)->stScaleVector.xX; \
    (_hDest)->stScaleVector.xY = (_hA)->stScaleVector.xY * (_hB)->stScaleVector.xY; \
    (_hDest)->stScaleVector.xZ = (_hA)->stScaleVector.xZ * (_hB)->stScaleVector.xZ; \
    (_hDest)->stScaleVector.xW = 1.0f; \
} while (0)

#define MAT_SCALE_COLUMN(_stDest, _stSource, _xScale) do { \
    float _xS = (_xScale); \
    (_stDest).xX = _xS * (_stSource).xX; \
    (_stDest).xY = _xS * (_stSource).xY; \
    (_stDest).xZ = _xS * (_stSource).xZ; \
    (_stDest).xW = 1.0f; \
} while (0)

#define MAT_SCALE_MATRIX(_hDest, _hMatrix, _hScale) do { \
    MAT_SCALE_COLUMN((_hDest)->stTransformMatrix.stCol_0, (_hMatrix)->stTransformMatrix.stCol_0, (_hScale)->stScaleVector.xX); \
    MAT_SCALE_COLUMN((_hDest)->stTransformMatrix.stCol_1, (_hMatrix)->stTransformMatrix.stCol_1, (_hScale)->stScaleVector.xY); \
    MAT_SCALE_COLUMN((_hDest)->stTransformMatrix.stCol_2, (_hMatrix)->stTransformMatrix.stCol_2, (_hScale)->stScaleVector.xZ); \
    MAT_COPY_VECTOR((_hDest)->stTransformMatrix.stCol_3, (_hMatrix)->stTransformMatrix.stCol_3); \
    (_hDest)->stTransformMatrix.stCol_2.xW = 0.0f; \
    (_hDest)->stTransformMatrix.stCol_1.xW = 0.0f; \
    (_hDest)->stTransformMatrix.stCol_0.xW = 0.0f; \
} while (0)

#define MAT_SWAP_FLOATS(_xA, _xB) do { \
    float _xTemp1 = (_xA); \
    float _xTemp2 = (_xB); \
    (_xA) = _xTemp2; \
    (_xB) = _xTemp1; \
} while (0)

#define MAT_TRANSPOSE_3X3(_hMat) do { \
    MAT_SWAP_FLOATS((_hMat)->stTransformMatrix.stCol_0.xY, (_hMat)->stTransformMatrix.stCol_1.xX); \
    MAT_SWAP_FLOATS((_hMat)->stTransformMatrix.stCol_0.xZ, (_hMat)->stTransformMatrix.stCol_2.xX); \
    MAT_SWAP_FLOATS((_hMat)->stTransformMatrix.stCol_1.xZ, (_hMat)->stTransformMatrix.stCol_2.xY); \
} while (0)

#define MAT_INVERT_TRANSLATION(_hDest, _hSource) do { \
    (_hDest)->stTransformMatrix.stCol_3.xX = -(_hSource)->stTransformMatrix.stCol_3.xX; \
    (_hDest)->stTransformMatrix.stCol_3.xY = -(_hSource)->stTransformMatrix.stCol_3.xY; \
    (_hDest)->stTransformMatrix.stCol_3.xZ = -(_hSource)->stTransformMatrix.stCol_3.xZ; \
    (_hDest)->stTransformMatrix.stCol_3.xW = 1.0f; \
    MTH4D_fn_vMulMatrixVectorWithoutBuffer(&(_hDest)->stTransformMatrix.stCol_3, &(_hDest)->stTransformMatrix, &(_hDest)->stTransformMatrix.stCol_3); \
} while (0)

/* Unaligned view: copying it moves four floats through registers rather than lq/sq. */
struct MAT_v4 { float a, b, c, d; };

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;

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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

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
} __attribute__((aligned(16)));

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
} __attribute__((aligned(16)));

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
} __attribute__((aligned(16)));

void MTH4D_fn_vSpecializedMulMatrixMatrixWithoutBuffer(MTH4D_tdstMatrix_* _p_stResult,
                                                       MTH4D_tdstMatrix_* _p_stA,
                                                       MTH4D_tdstMatrix_* _p_stB);
void MTH4D_fn_vMulMatrixVertexWithoutBuffer(MTH4D_tdstVector_* _p_stResult,
                                            MTH4D_tdstMatrix_* _p_stMatrix,
                                            MTH4D_tdstVector_* _p_stVector);
void MTH4D_fn_vMulMatrixVectorWithoutBuffer(MTH4D_tdstVector_* _p_stResult, MTH4D_tdstMatrix_* _p_stMatrix, MTH4D_tdstVector_* _p_stVector);
void MTH4D_fn_vSetIdentityMatrix(MTH4D_tdstMatrix_* _p_stMatrix);
void MTH4D_fn_vInvertRotationMatrix2(MTH4D_tdstMatrix_* _p_stDest, MTH4D_tdstMatrix_* _p_stSource);
void MAT_fn_vInvertRotation(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource);
void MAT_fn_v_MatrixToQuat(MTH4D_tdstMatrix_* _p_stMatrix, float* _xX, float* _xY, float* _xZ, float* _xW);
void MAT_fn_vRemoveScale(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource);
void MAT_fn_vQuatToMatrix(MTH4D_tdstMatrix_* _p_stMatrix, float _xX, float _xY, float _xZ, float _xW);

unsigned char g_ucMATModuleId;
int MAT_g_hTransformationIdentity;

/* Word view of an MTH vector: retail copies vectors with lw/sw at folded offsets. */
typedef union MTH_tduVectorWords {
    MTH3D_tdstVector_ stVector;
    unsigned int auWords[3];
} MTH_tduVectorWords;

typedef union MTH_tduVector4Words {
    MTH4D_tdstVector_ st;
    unsigned int auWords[4];
} MTH_tduVector4Words;

inline float MTH_xMulSubMul(float _a, float _b, float _c, float _d) { float _r; asm { mula.s _a, _b } asm { msub.s _r, _c, _d } return _r; }
inline float MTH_xAbs(float _x) { float _r; asm { abs.s _r, _x } return _r; }

inline void MTH4D_fn_vCopy3DTo4DVector(MTH4D_tdstVector_* VectDest, MTH3D_tdstVector_* VectA)
{
    ((MTH_tduVectorWords*)VectDest)->auWords[0] = ((MTH_tduVectorWords*)VectA)->auWords[0];
    ((MTH_tduVectorWords*)VectDest)->auWords[1] = ((MTH_tduVectorWords*)VectA)->auWords[1];
    ((MTH_tduVectorWords*)VectDest)->auWords[2] = ((MTH_tduVectorWords*)VectA)->auWords[2];
    VectDest->xW = 1.0f;
}

inline void MAT_fn_vMulScaleTranspose(MTH4D_tdstMatrix_* _p_stDest, MTH4D_tdstMatrix_* _p_stSrc, MTH4D_tdstVector_* _p_stScale)
{
    MTH4D_tdstMatrix_ stScaled;
    MTH4D_tdstMatrix_* p_stA;
    MTH4D_tdstMatrix_* p_stB;
    float x00 = _p_stSrc->stCol_0.xX * (float)_p_stScale->xX;
    float x01 = _p_stSrc->stCol_1.xX * _p_stScale->xX;
    float x02 = _p_stSrc->stCol_2.xX * _p_stScale->xX;
    float x10 = _p_stSrc->stCol_0.xY * _p_stScale->xY;
    float x11 = _p_stSrc->stCol_1.xY * _p_stScale->xY;
    float x12 = _p_stSrc->stCol_2.xY * _p_stScale->xY;
    float x20 = _p_stSrc->stCol_0.xZ * _p_stScale->xZ;
    float x21 = _p_stSrc->stCol_1.xZ * _p_stScale->xZ;
    float x22 = _p_stSrc->stCol_2.xZ * _p_stScale->xZ;

    stScaled.stCol_0.xX = x00;
    stScaled.stCol_0.xY = x01;
    stScaled.stCol_0.xZ = x02;
    stScaled.stCol_1.xX = x10;
    stScaled.stCol_1.xY = x11;
    stScaled.stCol_1.xZ = x12;
    stScaled.stCol_2.xX = x20;
    stScaled.stCol_2.xY = x21;
    stScaled.stCol_2.xZ = x22;

    p_stA = &stScaled;
    p_stB = _p_stSrc;

    /* VU0 macro-mode matrix product: no C form. */
    asm {
        lqc2 vf1, 0x0(p_stA)
        lqc2 vf2, 0x10(p_stA)
        lqc2 vf3, 0x20(p_stA)
        lqc2 vf4, 0x30(p_stA)
        lqc2 vf5, 0x0(p_stB)
        lqc2 vf6, 0x10(p_stB)
        lqc2 vf7, 0x20(p_stB)
        lqc2 vf8, 0x30(p_stB)

        vmulax.xyz ACC, vf1, vf5x
        vmadday.xyz ACC, vf2, vf5y
        vmaddz.xyz vf9, vf3, vf5z

        vmulax.xyz ACC, vf1, vf6x
        vmadday.xyz ACC, vf2, vf6y
        vmaddz.xyz vf10, vf3, vf6z

        vmulax.xyz ACC, vf1, vf7x
        vmadday.xyz ACC, vf2, vf7y
        vmaddz.xyz vf11, vf3, vf7z

        vmulax.xyz ACC, vf1, vf8x
        vmadday.xyz ACC, vf2, vf8y
        vmaddaz.xyz ACC, vf3, vf8z
        vmaddw.xyz vf12, vf4, vf0w

        sqc2 vf9, 0x0(_p_stDest)
        sqc2 vf10, 0x10(_p_stDest)
        sqc2 vf11, 0x20(_p_stDest)
        sqc2 vf12, 0x30(_p_stDest)
    }

    _p_stDest->stCol_2.xW = 0.0f;
    _p_stDest->stCol_1.xW = 0.0f;
    _p_stDest->stCol_0.xW = 0.0f;
    _p_stDest->stCol_3.xW = 1.0f;
}

void MAT_fn_vInitTransformationWithNonDiagonalScale(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stScale, float* _a_xQuaternion)
{
    MTH4D_tdstMatrix_ stTempMat;
    MTH4D_tdstMatrix_* p_stResult;
    union { MTH4D_tdstVector_ v; unsigned int auWords[4]; } st4DScaleVec;

    st4DScaleVec.auWords[0] = ((MTH_tduVectorWords*)_p_stScale)->auWords[0];
    st4DScaleVec.auWords[1] = ((MTH_tduVectorWords*)_p_stScale)->auWords[1];
    st4DScaleVec.auWords[2] = ((MTH_tduVectorWords*)_p_stScale)->auWords[2];
    st4DScaleVec.v.xW = 1.0f;

    p_stResult = &_hTransform->stTransformMatrix;
    MAT_fn_vQuatToMatrix(&stTempMat, _a_xQuaternion[0], _a_xQuaternion[1], _a_xQuaternion[2], _a_xQuaternion[3]);

    MAT_fn_vMulScaleTranspose(p_stResult, &stTempMat, &st4DScaleVec.v);
    p_stResult->stCol_3.xX = 0.0f;
    p_stResult->stCol_3.xY = 0.0f;
    p_stResult->stCol_3.xZ = 0.0f;
    p_stResult->stCol_3.xW = 1.0f;

    _hTransform->eType = MAT_eTransform_ComplexRotationScale;
    {
        float xX, xY, xZ, xW;
        xW = _a_xQuaternion[3];
        xZ = _a_xQuaternion[2];
        xY = _a_xQuaternion[1];
        xX = _a_xQuaternion[0];
        _hTransform->stScaleVector.xX = xX;
        _hTransform->stScaleVector.xY = xY;
        _hTransform->stScaleVector.xZ = xZ;
        _hTransform->stScaleVector.xW = xW;
    }
}

unsigned char MAT_fn_bAreEquivalentWithEps(MAT_tdstTransformation_* _hTransform1, MAT_tdstTransformation_* _hTransform2, float _xEps)
{
    MTH4D_tdstVector_* p_stTrans1;
    MTH4D_tdstVector_* p_stTrans2;
    MTH4D_tdstVector_* p_stScale1;
    MTH4D_tdstVector_* p_stScale2;
    unsigned char bEquivalent;
    int bTest;
    float xDelta;

    if (_hTransform1->eType != _hTransform2->eType)
    {
        bEquivalent = 0;
    }
    else
    {
        switch (_hTransform1->eType)
        {
        case MAT_eTransform_Identity:
            bEquivalent = 1;
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
            p_stScale1 = &_hTransform1->stScaleVector;
            p_stScale2 = &_hTransform2->stScaleVector;
            xDelta = p_stScale1->xX - p_stScale2->xX;
            MTH_ABS_IN_PLACE(xDelta);
            bTest = xDelta < _xEps;
            if (bTest)
            {
                xDelta = p_stScale1->xY - p_stScale2->xY;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
            if (bTest = !!bTest)
            {
                xDelta = p_stScale1->xX - p_stScale2->xZ;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
            bEquivalent = bTest;
            if (!bEquivalent)
            {
                break;
            }

        case MAT_eTransform_Translation:
            p_stTrans1 = &_hTransform1->stTransformMatrix.stCol_3;
            p_stTrans2 = &_hTransform2->stTransformMatrix.stCol_3;
            xDelta = p_stTrans1->xX - p_stTrans2->xX;
            MTH_ABS_IN_PLACE(xDelta);
            bTest = xDelta < _xEps;
            if (bTest)
            {
                xDelta = p_stTrans1->xY - p_stTrans2->xY;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
            if (bTest = !!bTest)
            {
                xDelta = p_stTrans1->xX - p_stTrans2->xZ;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
            bEquivalent = bTest;
            break;

        case MAT_eTransform_Rotation:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
        case MAT_eTransform_ComplexRotationScale:
            xDelta = _hTransform1->stTransformMatrix.stCol_0.xX - _hTransform2->stTransformMatrix.stCol_0.xX;
            MTH_ABS_IN_PLACE(xDelta);
            bTest = xDelta < _xEps;
            if (bTest)
            {
                xDelta = _hTransform1->stTransformMatrix.stCol_0.xY - _hTransform2->stTransformMatrix.stCol_0.xY;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
#define MAT_CHECK_ABS(_a, _b) do { \
                if (bTest = !!bTest) { \
                    xDelta = (_a) - (_b); \
                    MTH_ABS_IN_PLACE(xDelta); \
                    bTest = xDelta < _xEps; \
                } \
            } while (0)
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_0.xZ, _hTransform2->stTransformMatrix.stCol_0.xZ);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_0.xW, _hTransform2->stTransformMatrix.stCol_0.xW);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_1.xX, _hTransform2->stTransformMatrix.stCol_1.xX);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_1.xY, _hTransform2->stTransformMatrix.stCol_1.xY);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_1.xZ, _hTransform2->stTransformMatrix.stCol_1.xZ);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_1.xW, _hTransform2->stTransformMatrix.stCol_1.xW);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_2.xX, _hTransform2->stTransformMatrix.stCol_2.xX);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_2.xY, _hTransform2->stTransformMatrix.stCol_2.xY);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_2.xZ, _hTransform2->stTransformMatrix.stCol_2.xZ);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_2.xW, _hTransform2->stTransformMatrix.stCol_2.xW);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_3.xX, _hTransform2->stTransformMatrix.stCol_3.xX);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_3.xY, _hTransform2->stTransformMatrix.stCol_3.xY);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_3.xZ, _hTransform2->stTransformMatrix.stCol_3.xZ);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_3.xW, _hTransform2->stTransformMatrix.stCol_3.xW);
#undef MAT_CHECK_ABS
            bEquivalent = bTest;
            break;

        default:
            bEquivalent = 0;
            break;
        }
    }
    return bEquivalent;
}

unsigned char MAT_fn_bAreEquivalent(MAT_tdstTransformation_* _hTransform1, MAT_tdstTransformation_* _hTransform2)
{
    unsigned char bEquivalent;

    if (_hTransform1->eType != _hTransform2->eType)
    {
        bEquivalent = 0;
    }
    else
    {
        switch (_hTransform1->eType)
        {
        case MAT_eTransform_Identity:
            bEquivalent = 1;
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
            bEquivalent = (_hTransform1->stScaleVector.xX == _hTransform2->stScaleVector.xX) &&
                       (_hTransform1->stScaleVector.xY == _hTransform2->stScaleVector.xY) &&
                       (_hTransform1->stScaleVector.xZ == _hTransform2->stScaleVector.xZ);
            if (!bEquivalent)
            {
                return 0;
            }
            /* fall through: a matching scale also compares the translation */

        case MAT_eTransform_Translation:
            bEquivalent = (_hTransform1->stTransformMatrix.stCol_3.xX == _hTransform2->stTransformMatrix.stCol_3.xX) &&
                       (_hTransform1->stTransformMatrix.stCol_3.xY == _hTransform2->stTransformMatrix.stCol_3.xY) &&
                       (_hTransform1->stTransformMatrix.stCol_3.xZ == _hTransform2->stTransformMatrix.stCol_3.xZ);
            break;

        case MAT_eTransform_Rotation:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
        case MAT_eTransform_ComplexRotationScale:
            bEquivalent = (_hTransform1->stTransformMatrix.stCol_0.xX == _hTransform2->stTransformMatrix.stCol_0.xX) &&
                       (_hTransform1->stTransformMatrix.stCol_0.xY == _hTransform2->stTransformMatrix.stCol_0.xY) &&
                       (_hTransform1->stTransformMatrix.stCol_0.xZ == _hTransform2->stTransformMatrix.stCol_0.xZ) &&
                       (_hTransform1->stTransformMatrix.stCol_0.xW == _hTransform2->stTransformMatrix.stCol_0.xW) &&
                       (_hTransform1->stTransformMatrix.stCol_1.xX == _hTransform2->stTransformMatrix.stCol_1.xX) &&
                       (_hTransform1->stTransformMatrix.stCol_1.xY == _hTransform2->stTransformMatrix.stCol_1.xY) &&
                       (_hTransform1->stTransformMatrix.stCol_1.xZ == _hTransform2->stTransformMatrix.stCol_1.xZ) &&
                       (_hTransform1->stTransformMatrix.stCol_1.xW == _hTransform2->stTransformMatrix.stCol_1.xW) &&
                       (_hTransform1->stTransformMatrix.stCol_2.xX == _hTransform2->stTransformMatrix.stCol_2.xX) &&
                       (_hTransform1->stTransformMatrix.stCol_2.xY == _hTransform2->stTransformMatrix.stCol_2.xY) &&
                       (_hTransform1->stTransformMatrix.stCol_2.xZ == _hTransform2->stTransformMatrix.stCol_2.xZ) &&
                       (_hTransform1->stTransformMatrix.stCol_2.xW == _hTransform2->stTransformMatrix.stCol_2.xW) &&
                       (_hTransform1->stTransformMatrix.stCol_3.xX == _hTransform2->stTransformMatrix.stCol_3.xX) &&
                       (_hTransform1->stTransformMatrix.stCol_3.xY == _hTransform2->stTransformMatrix.stCol_3.xY) &&
                       (_hTransform1->stTransformMatrix.stCol_3.xZ == _hTransform2->stTransformMatrix.stCol_3.xZ) &&
                       (_hTransform1->stTransformMatrix.stCol_3.xW == _hTransform2->stTransformMatrix.stCol_3.xW);
            break;

        default:
            bEquivalent = 0;
            break;
        }
    }
    return bEquivalent;
}

inline void MAT_vSetS(MTH4D_tdstVector_* d, float x, float y, float z) { d->xX=x; d->xY=y; d->xZ=z; d->xW=1.0f; }

void MAT_fn_vInitTransformationAndType(MAT_tdstTransformation_* _hTransform, MAT_tdeTranformationType_ _eType, MTH3D_tdstVector_* _p_stI, MTH3D_tdstVector_* _p_stJ, MTH3D_tdstVector_* _p_stK, MTH3D_tdstVector_* _p_stTranslation)
{
    _hTransform->eType = _eType;

    if (_p_stI != NULL)
    {
        *(int*)&_hTransform->stTransformMatrix.stCol_0.xX = *(int*)&_p_stI->xX;
        *(int*)&_hTransform->stTransformMatrix.stCol_0.xY = *(int*)&_p_stI->xY;
        *(int*)&_hTransform->stTransformMatrix.stCol_0.xZ = *(int*)&_p_stI->xZ;
        _hTransform->stTransformMatrix.stCol_0.xW = 1.0f;
    }
    else
    {
        _hTransform->stTransformMatrix.stCol_0.xX = 1.0f;
        _hTransform->stTransformMatrix.stCol_0.xZ = 0.0f;
        _hTransform->stTransformMatrix.stCol_0.xY = 0.0f;
        _hTransform->stTransformMatrix.stCol_0.xW = 1.0f;
    }
    _hTransform->stTransformMatrix.stCol_0.xW = 0.0f;

    if (_p_stJ != NULL)
    {
        *(int*)&_hTransform->stTransformMatrix.stCol_1.xX = *(int*)&_p_stJ->xX;
        *(int*)&_hTransform->stTransformMatrix.stCol_1.xY = *(int*)&_p_stJ->xY;
        *(int*)&_hTransform->stTransformMatrix.stCol_1.xZ = *(int*)&_p_stJ->xZ;
        _hTransform->stTransformMatrix.stCol_1.xW = 1.0f;
    }
    else
    {
        _hTransform->stTransformMatrix.stCol_1.xX = 0.0f;
        _hTransform->stTransformMatrix.stCol_1.xZ = 1.0f;
        _hTransform->stTransformMatrix.stCol_1.xY = 0.0f;
        _hTransform->stTransformMatrix.stCol_1.xW = 1.0f;
    }
    _hTransform->stTransformMatrix.stCol_1.xW = 0.0f;

    if (_p_stK != NULL)
    {
        *(int*)&_hTransform->stTransformMatrix.stCol_2.xX = *(int*)&_p_stK->xX;
        *(int*)&_hTransform->stTransformMatrix.stCol_2.xY = *(int*)&_p_stK->xY;
        *(int*)&_hTransform->stTransformMatrix.stCol_2.xZ = *(int*)&_p_stK->xZ;
        _hTransform->stTransformMatrix.stCol_2.xW = 1.0f;
    }
    else
    {
        _hTransform->stTransformMatrix.stCol_2.xX = 0.0f;
        _hTransform->stTransformMatrix.stCol_2.xZ = 0.0f;
        _hTransform->stTransformMatrix.stCol_2.xY = 1.0f;
        _hTransform->stTransformMatrix.stCol_2.xW = 1.0f;
    }
    _hTransform->stTransformMatrix.stCol_2.xW = 0.0f;

    if (_p_stTranslation != NULL)
    {
        *(int*)&_hTransform->stTransformMatrix.stCol_3.xX = *(int*)&_p_stTranslation->xX;
        *(int*)&_hTransform->stTransformMatrix.stCol_3.xY = *(int*)&_p_stTranslation->xY;
        *(int*)&_hTransform->stTransformMatrix.stCol_3.xZ = *(int*)&_p_stTranslation->xZ;
        _hTransform->stTransformMatrix.stCol_3.xW = 1.0f;
    }
    else
    {
        _hTransform->stTransformMatrix.stCol_3.xX = 0.0f;
        _hTransform->stTransformMatrix.stCol_3.xY = 0.0f;
        _hTransform->stTransformMatrix.stCol_3.xZ = 0.0f;
        _hTransform->stTransformMatrix.stCol_3.xW = 1.0f;
    }

    switch (_eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Rotation:
        _hTransform->stScaleVector.xX = 1.0f;
        _hTransform->stScaleVector.xY = 1.0f;
        _hTransform->stScaleVector.xZ = 1.0f;
        _hTransform->stScaleVector.xW = 1.0f;
        break;

    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
    {
        MAT_vSetS(&_hTransform->stScaleVector, _hTransform->stTransformMatrix.stCol_0.xX, _hTransform->stTransformMatrix.stCol_1.xY, _hTransform->stTransformMatrix.stCol_2.xZ);
        break;
    }

    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
    {
        float _mthLen2;
        float _mthLen1;
        float _mthLen0;
        {
            float _mthX = _hTransform->stTransformMatrix.stCol_2.xX;
            float _mthY = _hTransform->stTransformMatrix.stCol_2.xY;
            float _mthZ = _hTransform->stTransformMatrix.stCol_2.xZ;
            MTH_SQR3_TO(_mthX, _mthX, _mthY, _mthZ);
            MTH_SQRT_TO(_mthX, _mthX);
            _mthLen2 = _mthX;
        }
        {
            float _mthX = _hTransform->stTransformMatrix.stCol_1.xX;
            float _mthY = _hTransform->stTransformMatrix.stCol_1.xY;
            float _mthZ = _hTransform->stTransformMatrix.stCol_1.xZ;
            MTH_SQR3_TO(_mthX, _mthX, _mthY, _mthZ);
            MTH_SQRT_TO(_mthX, _mthX);
            _mthLen1 = _mthX;
        }
        {
            float _mthX = _hTransform->stTransformMatrix.stCol_0.xX;
            float _mthY = _hTransform->stTransformMatrix.stCol_0.xY;
            float _mthZ = _hTransform->stTransformMatrix.stCol_0.xZ;
            MTH_SQR3_TO(_mthX, _mthX, _mthY, _mthZ);
            MTH_SQRT_TO(_mthX, _mthX);
            _mthLen0 = _mthX;
        }
        _hTransform->stScaleVector.xX = _mthLen0;
        _hTransform->stScaleVector.xY = _mthLen1;
        _hTransform->stScaleVector.xZ = _mthLen2;
        _hTransform->stScaleVector.xW = 1.0f;
        break;
    }

    case MAT_eTransform_ComplexRotationScale:
        break;
    }
}

void MAT_fn_vTranslate(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stTranslation)
{
    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
        _hTransform->eType = MAT_eTransform_Translation;
        *(int*)&_hTransform->stTransformMatrix.stCol_3.xX = *(int*)&_p_stTranslation->xX; *(int*)&_hTransform->stTransformMatrix.stCol_3.xY = *(int*)&_p_stTranslation->xY; *(int*)&_hTransform->stTransformMatrix.stCol_3.xZ = *(int*)&_p_stTranslation->xZ; _hTransform->stTransformMatrix.stCol_3.xW = 1.0f;
        break;
    case MAT_eTransform_Translation:
    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
    case MAT_eTransform_Rotation:
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
    case MAT_eTransform_ComplexRotationScale:
        _hTransform->stTransformMatrix.stCol_3.xX = _hTransform->stTransformMatrix.stCol_3.xX + _p_stTranslation->xX; _hTransform->stTransformMatrix.stCol_3.xY = _hTransform->stTransformMatrix.stCol_3.xY + _p_stTranslation->xY; _hTransform->stTransformMatrix.stCol_3.xZ = _hTransform->stTransformMatrix.stCol_3.xZ + _p_stTranslation->xZ;
        break;
    }
}

void MAT_fn_vComposeWithoutTranslation(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hA, MAT_tdstTransformation_* _hB)
{
    MAT_tdstTransformation_* hResult;
    unsigned char bComposeMatrixes;
    unsigned char bTestScale;
    MAT_tdstTransformation_ stTemp;
    unsigned char bEqual;
    static unsigned int uiSimplification;
    static unsigned int uiTotal;

    if ((_hA->eType == MAT_eTransform_Identity) ||
        (_hA->eType == MAT_eTransform_Translation))
    {
        if (_hDest != _hB)
        {
            MAT_COPY_TRANSFORMATION(_hDest, _hB);
        }
        return;
    }

    if (_hB->eType == MAT_eTransform_Identity)
    {
        if (_hDest != _hA)
        {
            MAT_COPY_TRANSFORMATION(_hDest, _hA);
        }
        return;
    }

    if ((_hDest == _hA) || (_hDest == _hB))
    {
        hResult = &stTemp;
        stTemp.eType = MAT_eTransform_Identity;
    }
    else
    {
        hResult = _hDest;
    }

    hResult->stScaleVector.xX = 1.0f;
    hResult->stScaleVector.xY = 1.0f;
    hResult->stScaleVector.xZ = 1.0f;
    hResult->stScaleVector.xW = 1.0f;
    bComposeMatrixes = 0;
    bTestScale = 0;

    switch (_hA->eType)
    {
    case MAT_eTransform_Rotation:
    case MAT_eTransform_RotationZoom:
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Rotation:
            hResult->eType = MAT_eTransform_Rotation;
            bComposeMatrixes = 1;
            hResult->stScaleVector.xX = 1.0f;
            hResult->stScaleVector.xY = 1.0f;
            hResult->stScaleVector.xZ = 1.0f;
            hResult->stScaleVector.xW = 1.0f;
            break;

        case MAT_eTransform_Zoom:
            hResult->eType = MAT_eTransform_RotationZoom;
            bTestScale = 1;
            MAT_SCALE_MATRIX(hResult, _hA, _hB);
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_RotationZoom:
            hResult->eType = MAT_eTransform_RotationZoom;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_Scale:
        case MAT_eTransform_RotationScale:
            hResult->eType = MAT_eTransform_RotationScale;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = MAT_eTransform_ComplexRotationScale;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    case MAT_eTransform_Zoom:
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Rotation:
            hResult->eType = MAT_eTransform_RotationZoom;
            MAT_SCALE_MATRIX(hResult, _hB, _hA);
            MAT_COPY_VECTOR(hResult->stScaleVector, _hA->stScaleVector);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = _hB->eType;
            MAT_SCALE_MATRIX(hResult, _hB, _hA);
            bTestScale = 1;
            if (_hB->eType != MAT_eTransform_ComplexRotationScale)
            {
                MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            }
            break;

        default:
            break;
        }
        break;

    case MAT_eTransform_Scale:
    case MAT_eTransform_RotationScale:
    case MAT_eTransform_ComplexRotationScale:
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
            hResult->eType = _hA->eType;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_Rotation:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = MAT_eTransform_ComplexRotationScale;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    default:
        break;
    }

    if (bComposeMatrixes)
    {
        MTH4D_fn_vSpecializedMulMatrixMatrixWithoutBuffer(&hResult->stTransformMatrix,
                                                         &_hA->stTransformMatrix,
                                                         &_hB->stTransformMatrix);
    }

    MAT_COPY_VECTOR(hResult->stTransformMatrix.stCol_3, _hB->stTransformMatrix.stCol_3);

    if (bTestScale)
    {
        uiTotal++;
        switch (hResult->eType)
        {
        case MAT_eTransform_Scale:
            if ((MTH_xAbs(hResult->stScaleVector.xX - hResult->stScaleVector.xY) < 0.0001f) && (MTH_xAbs(hResult->stScaleVector.xX - hResult->stScaleVector.xZ) < 0.0001f))
            {
                bEqual = 1;
            }
            else
            {
                bEqual = 0;
            }
            if (!bEqual)
            {
                break;
            }
            hResult->eType = MAT_eTransform_Zoom;
            uiSimplification++;
        case MAT_eTransform_Zoom:
            if (MTH_xAbs(hResult->stScaleVector.xX - 1.0f) < 0.0001f)
            {
                hResult->eType = MAT_eTransform_Translation;
                uiSimplification++;
            }
            break;

        case MAT_eTransform_RotationScale:
            if ((MTH_xAbs(hResult->stScaleVector.xX - hResult->stScaleVector.xY) < 0.0001f) && (MTH_xAbs(hResult->stScaleVector.xX - hResult->stScaleVector.xZ) < 0.0001f))
            {
                bEqual = 1;
            }
            else
            {
                bEqual = 0;
            }
            if (!bEqual)
            {
                break;
            }
            hResult->eType = MAT_eTransform_RotationZoom;
            uiSimplification++;
        case MAT_eTransform_RotationZoom:
            if (MTH_xAbs(hResult->stScaleVector.xX - 1.0f) < 0.0001f)
            {
                uiSimplification++;
                hResult->eType = MAT_eTransform_Rotation;
            }
            break;

        case MAT_eTransform_Uninitialized:
        case MAT_eTransform_Identity:
        case MAT_eTransform_Translation:
        case MAT_eTransform_Rotation:
        case MAT_eTransform_ComplexRotationScale:
        default:
            break;
        }
    }

    if (_hDest != hResult)
    {
        MAT_COPY_TRANSFORMATION(_hDest, hResult);
    }
}

void MAT_fn_vCompose(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hA, MAT_tdstTransformation_* _hB)
{
    MAT_tdstTransformation_* hResult;
    unsigned char bComposeMatrixes;
    unsigned char bComposeTranslations;
    unsigned char bTestScale;
    MAT_tdstTransformation_ stTemp;
    unsigned char bEqual;
    static unsigned int uiSimplification;
    static unsigned int uiTotal;

    if (_hA->eType == MAT_eTransform_Identity)
    {
        MAT_COPY_TRANSFORMATION(_hDest, _hB);
        return;
    }

    if (_hB->eType == MAT_eTransform_Identity)
    {
        MAT_COPY_TRANSFORMATION(_hDest, _hA);
        return;
    }

    if ((_hDest == _hA) || (_hDest == _hB))
    {
        hResult = &stTemp;
        stTemp.eType = MAT_eTransform_Identity;
    }
    else
    {
        hResult = _hDest;
    }

    bComposeMatrixes = 0;
    bComposeTranslations = 0;
    bTestScale = 0;

    switch (_hA->eType)
    {
    case MAT_eTransform_Translation:
        hResult->eType = _hB->eType;
        hResult->stTransformMatrix.stCol_3.xX = _hA->stTransformMatrix.stCol_3.xX + _hB->stTransformMatrix.stCol_3.xX;
        hResult->stTransformMatrix.stCol_3.xY = _hA->stTransformMatrix.stCol_3.xY + _hB->stTransformMatrix.stCol_3.xY;
        hResult->stTransformMatrix.stCol_3.xZ = _hA->stTransformMatrix.stCol_3.xZ + _hB->stTransformMatrix.stCol_3.xZ;
        hResult->stTransformMatrix.stCol_3.xW = 1.0f;
        MAT_COPY_ROTATION_AND_SCALE(hResult, _hB);
        break;

    case MAT_eTransform_Rotation:
    case MAT_eTransform_RotationZoom:
        bComposeTranslations = 1;
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Rotation:
            hResult->eType = _hA->eType;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hA->stScaleVector);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_RotationZoom:
            hResult->eType = MAT_eTransform_RotationZoom;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_Scale:
        case MAT_eTransform_RotationScale:
            hResult->eType = MAT_eTransform_RotationScale;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = MAT_eTransform_ComplexRotationScale;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    case MAT_eTransform_Zoom:
        bComposeTranslations = 1;
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Rotation:
            hResult->eType = MAT_eTransform_RotationZoom;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hA->stScaleVector);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
            bTestScale = 1;
        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = _hB->eType;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    case MAT_eTransform_Scale:
    case MAT_eTransform_RotationScale:
    case MAT_eTransform_ComplexRotationScale:
        bComposeTranslations = 1;
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
            hResult->eType = _hA->eType;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_Rotation:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
            bTestScale = 1;
        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = MAT_eTransform_ComplexRotationScale;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    default:
        break;
    }

    if (bComposeMatrixes)
    {
        MTH4D_fn_vSpecializedMulMatrixMatrixWithoutBuffer(&hResult->stTransformMatrix,
                                                         &_hA->stTransformMatrix,
                                                         &_hB->stTransformMatrix);
    }
    else if (bComposeTranslations)
    {
        MTH4D_fn_vMulMatrixVertexWithoutBuffer(&hResult->stTransformMatrix.stCol_3,
                                               &_hA->stTransformMatrix,
                                               &_hB->stTransformMatrix.stCol_3);
        hResult->stTransformMatrix.stCol_3.xW = 1.0f;
    }

    if (bTestScale)
    {
        uiTotal++;
        switch (hResult->eType)
        {
        case MAT_eTransform_Scale:
            if ((MTH_xAbs(hResult->stScaleVector.xX - hResult->stScaleVector.xY) < 0.0001f) && (MTH_xAbs(hResult->stScaleVector.xX - hResult->stScaleVector.xZ) < 0.0001f))
            {
                bEqual = 1;
            }
            else
            {
                bEqual = 0;
            }
            if (!bEqual)
            {
                break;
            }
            hResult->eType = MAT_eTransform_Zoom;
            uiSimplification++;
        case MAT_eTransform_Zoom:
            if (MTH_xAbs(hResult->stScaleVector.xX - 1.0f) < 0.0001f)
            {
                hResult->eType = MAT_eTransform_Translation;
                uiSimplification++;
            }
            break;

        case MAT_eTransform_RotationScale:
            if ((MTH_xAbs(hResult->stScaleVector.xX - hResult->stScaleVector.xY) < 0.0001f) && (MTH_xAbs(hResult->stScaleVector.xX - hResult->stScaleVector.xZ) < 0.0001f))
            {
                bEqual = 1;
            }
            else
            {
                bEqual = 0;
            }
            if (!bEqual)
            {
                break;
            }
            hResult->eType = MAT_eTransform_RotationZoom;
            uiSimplification++;
        case MAT_eTransform_RotationZoom:
            if (MTH_xAbs(hResult->stScaleVector.xX - 1.0f) < 0.0001f)
            {
                uiSimplification++;
                hResult->eType = MAT_eTransform_Rotation;
            }
            break;

        case MAT_eTransform_Uninitialized:
        case MAT_eTransform_Identity:
        case MAT_eTransform_Translation:
        case MAT_eTransform_Rotation:
        case MAT_eTransform_ComplexRotationScale:
        default:
            break;
        }
    }

    if (_hDest != hResult)
    {
        MAT_COPY_TRANSFORMATION(_hDest, hResult);
    }
}

void MAT_fn_vFastInvert(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource)
{
    MTH4D_tdstMatrix_* p_stMatrixDest;
    MTH4D_tdstMatrix_* p_stMatrixSource;
    MTH4D_tdstVector_* p_stScale;
    MTH4D_tdstMatrix_* p_stTranspMatrix;
    MTH4D_tdstVector_* p_stVec;
    float xZoom;

    switch (_hSource->eType)
    {
    case MAT_eTransform_Identity:
        if (_hDest != _hSource)
        {
            _hDest->eType = MAT_eTransform_Identity;
            MTH4D_fn_vSetIdentityMatrix(&_hDest->stTransformMatrix);
            _hDest->stScaleVector.xX = 1.0f;
            _hDest->stScaleVector.xY = 1.0f;
            _hDest->stScaleVector.xZ = 1.0f;
            _hDest->stScaleVector.xW = 1.0f;
        }
        break;

    case MAT_eTransform_Translation:
        if (_hDest != _hSource)
        {
            _hDest->eType = MAT_eTransform_Identity;
            MTH4D_fn_vSetIdentityMatrix(&_hDest->stTransformMatrix);
            _hDest->stScaleVector.xX = 1.0f;
            _hDest->stScaleVector.xY = 1.0f;
            _hDest->stScaleVector.xZ = 1.0f;
            _hDest->stScaleVector.xW = 1.0f;
            _hDest->eType = MAT_eTransform_Translation;
        }
        _hDest->stTransformMatrix.stCol_3.xX = -_hSource->stTransformMatrix.stCol_3.xX;
        _hDest->stTransformMatrix.stCol_3.xY = -_hSource->stTransformMatrix.stCol_3.xY;
        _hDest->stTransformMatrix.stCol_3.xZ = -_hSource->stTransformMatrix.stCol_3.xZ;
        _hDest->stTransformMatrix.stCol_3.xW = 1.0f;
        break;

    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        p_stMatrixDest = &_hDest->stTransformMatrix;
        p_stMatrixSource = &_hSource->stTransformMatrix;
        p_stScale = &_hDest->stScaleVector;
        if (_hDest != _hSource)
        {
            MAT_COPY_TRANSFORMATION(_hDest, _hSource);
        }
        xZoom = 1.0f / p_stMatrixSource->stCol_0.xX;
        p_stMatrixDest->stCol_0.xX = xZoom;
        p_stScale->xX = xZoom;
        xZoom = 1.0f / p_stMatrixSource->stCol_1.xY;
        p_stMatrixDest->stCol_1.xY = xZoom;
        p_stScale->xY = xZoom;
        xZoom = 1.0f / p_stMatrixSource->stCol_2.xZ;
        p_stMatrixDest->stCol_2.xZ = xZoom;
        p_stScale->xZ = xZoom;
        _hDest->stTransformMatrix.stCol_3.xX = -_hSource->stTransformMatrix.stCol_3.xX;
        _hDest->stTransformMatrix.stCol_3.xY = -_hSource->stTransformMatrix.stCol_3.xY;
        _hDest->stTransformMatrix.stCol_3.xZ = -_hSource->stTransformMatrix.stCol_3.xZ;
        _hDest->stTransformMatrix.stCol_3.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_3.xX = p_stScale->xX * _hDest->stTransformMatrix.stCol_3.xX;
        _hDest->stTransformMatrix.stCol_3.xY = p_stScale->xY * _hDest->stTransformMatrix.stCol_3.xY;
        _hDest->stTransformMatrix.stCol_3.xZ = p_stScale->xZ * _hDest->stTransformMatrix.stCol_3.xZ;
        _hDest->stTransformMatrix.stCol_3.xW = 1.0f;
        break;

    case MAT_eTransform_Rotation:
        p_stTranspMatrix = &_hDest->stTransformMatrix;
        p_stMatrixSource = &_hSource->stTransformMatrix;
        p_stVec = &_hDest->stTransformMatrix.stCol_3;
        _hDest->eType = MAT_eTransform_Rotation;
        if (p_stTranspMatrix == p_stMatrixSource)
        {
            MAT_TRANSPOSE_3X3(_hSource);
        }
        else
        {
            MTH4D_fn_vInvertRotationMatrix2(p_stTranspMatrix, p_stMatrixSource);
        }
        p_stVec->xX = -_hSource->stTransformMatrix.stCol_3.xX;
        p_stVec->xY = -_hSource->stTransformMatrix.stCol_3.xY;
        p_stVec->xZ = -_hSource->stTransformMatrix.stCol_3.xZ;
        p_stVec->xW = 1.0f;
        MTH4D_fn_vMulMatrixVectorWithoutBuffer(p_stVec, p_stTranspMatrix, p_stVec);
        _hDest->stScaleVector.xX = 1.0f;
        _hDest->stScaleVector.xY = 1.0f;
        _hDest->stScaleVector.xZ = 1.0f;
        _hDest->stScaleVector.xW = 1.0f;
        break;

    case MAT_eTransform_RotationZoom:
        p_stTranspMatrix = &_hDest->stTransformMatrix;
        p_stMatrixSource = &_hSource->stTransformMatrix;
        p_stVec = &_hDest->stTransformMatrix.stCol_3;
        _hDest->eType = MAT_eTransform_RotationZoom;
        if (p_stTranspMatrix == p_stMatrixSource)
        {
            MAT_TRANSPOSE_3X3(_hSource);
        }
        else
        {
            MTH4D_fn_vInvertRotationMatrix2(p_stTranspMatrix, p_stMatrixSource);
        }
        xZoom = _hSource->stScaleVector.xX;
        xZoom = 1.0f / (xZoom * xZoom);
        p_stTranspMatrix->stCol_0.xX = xZoom * p_stTranspMatrix->stCol_0.xX;
        p_stTranspMatrix->stCol_0.xY = xZoom * p_stTranspMatrix->stCol_0.xY;
        p_stTranspMatrix->stCol_0.xZ = xZoom * p_stTranspMatrix->stCol_0.xZ;
        p_stTranspMatrix->stCol_0.xW = 1.0f;
        p_stTranspMatrix->stCol_1.xX = xZoom * p_stTranspMatrix->stCol_1.xX;
        p_stTranspMatrix->stCol_1.xY = xZoom * p_stTranspMatrix->stCol_1.xY;
        p_stTranspMatrix->stCol_1.xZ = xZoom * p_stTranspMatrix->stCol_1.xZ;
        p_stTranspMatrix->stCol_1.xW = 1.0f;
        p_stTranspMatrix->stCol_2.xX = xZoom * p_stTranspMatrix->stCol_2.xX;
        p_stTranspMatrix->stCol_2.xY = xZoom * p_stTranspMatrix->stCol_2.xY;
        p_stTranspMatrix->stCol_2.xZ = xZoom * p_stTranspMatrix->stCol_2.xZ;
        p_stTranspMatrix->stCol_2.xW = 1.0f;
        p_stTranspMatrix->stCol_2.xW = 0.0f;
        p_stTranspMatrix->stCol_1.xW = 0.0f;
        p_stTranspMatrix->stCol_0.xW = 0.0f;
        xZoom = 1.0f / _hSource->stScaleVector.xX;
        _hDest->stScaleVector.xX = xZoom;
        _hDest->stScaleVector.xY = xZoom;
        _hDest->stScaleVector.xZ = xZoom;
        _hDest->stScaleVector.xW = 1.0f;
        p_stVec->xX = -_hSource->stTransformMatrix.stCol_3.xX;
        p_stVec->xY = -_hSource->stTransformMatrix.stCol_3.xY;
        p_stVec->xZ = -_hSource->stTransformMatrix.stCol_3.xZ;
        p_stVec->xW = 1.0f;
        MTH4D_fn_vMulMatrixVectorWithoutBuffer(p_stVec, p_stTranspMatrix, p_stVec);
        break;

    case MAT_eTransform_RotationScale:
    {
        float xSX, xSY, xSZ;
        _hDest->eType = MAT_eTransform_ComplexRotationScale;
        xSX = _hSource->stScaleVector.xX;
        xSY = _hSource->stScaleVector.xY;
        xSZ = _hSource->stScaleVector.xZ;
        xSX = 1.0f / (xSX * xSX);
        xSY = 1.0f / (xSY * xSY);
        xSZ = 1.0f / (xSZ * xSZ);
        _hDest->stTransformMatrix.stCol_0.xX = xSX * _hSource->stTransformMatrix.stCol_0.xX;
        _hDest->stTransformMatrix.stCol_0.xY = xSX * _hSource->stTransformMatrix.stCol_0.xY;
        _hDest->stTransformMatrix.stCol_0.xZ = xSX * _hSource->stTransformMatrix.stCol_0.xZ;
        _hDest->stTransformMatrix.stCol_0.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_1.xX = xSY * _hSource->stTransformMatrix.stCol_1.xX;
        _hDest->stTransformMatrix.stCol_1.xY = xSY * _hSource->stTransformMatrix.stCol_1.xY;
        _hDest->stTransformMatrix.stCol_1.xZ = xSY * _hSource->stTransformMatrix.stCol_1.xZ;
        _hDest->stTransformMatrix.stCol_1.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_2.xX = xSZ * _hSource->stTransformMatrix.stCol_2.xX;
        _hDest->stTransformMatrix.stCol_2.xY = xSZ * _hSource->stTransformMatrix.stCol_2.xY;
        _hDest->stTransformMatrix.stCol_2.xZ = xSZ * _hSource->stTransformMatrix.stCol_2.xZ;
        _hDest->stTransformMatrix.stCol_2.xW = 1.0f;
        MAT_COPY_VECTOR(_hDest->stTransformMatrix.stCol_3, _hSource->stTransformMatrix.stCol_3);
        _hDest->stTransformMatrix.stCol_2.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_1.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_0.xW = 0.0f;
        MAT_TRANSPOSE_3X3(_hDest);
        MAT_INVERT_TRANSLATION(_hDest, _hSource);
        break;
    }

    case MAT_eTransform_ComplexRotationScale:
    {
        float xDet;
        _hDest->eType = MAT_eTransform_ComplexRotationScale;
        _hDest->stTransformMatrix.stCol_0.xX = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_1.xY, _hSource->stTransformMatrix.stCol_2.xZ, _hSource->stTransformMatrix.stCol_1.xZ, _hSource->stTransformMatrix.stCol_2.xY);
        xDet = _hSource->stTransformMatrix.stCol_0.xX * _hDest->stTransformMatrix.stCol_0.xX;
        _hDest->stTransformMatrix.stCol_1.xX = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_1.xZ, _hSource->stTransformMatrix.stCol_2.xX, _hSource->stTransformMatrix.stCol_1.xX, _hSource->stTransformMatrix.stCol_2.xZ);
        xDet = xDet + _hSource->stTransformMatrix.stCol_0.xY * _hDest->stTransformMatrix.stCol_1.xX;
        _hDest->stTransformMatrix.stCol_2.xX = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_1.xX, _hSource->stTransformMatrix.stCol_2.xY, _hSource->stTransformMatrix.stCol_1.xY, _hSource->stTransformMatrix.stCol_2.xX);
        xDet = xDet + _hSource->stTransformMatrix.stCol_0.xZ * _hDest->stTransformMatrix.stCol_2.xX;
        _hDest->stTransformMatrix.stCol_0.xY = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xZ, _hSource->stTransformMatrix.stCol_2.xY, _hSource->stTransformMatrix.stCol_0.xY, _hSource->stTransformMatrix.stCol_2.xZ);
        xDet = 1.0f / xDet;
        _hDest->stTransformMatrix.stCol_0.xZ = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xY, _hSource->stTransformMatrix.stCol_1.xZ, _hSource->stTransformMatrix.stCol_0.xZ, _hSource->stTransformMatrix.stCol_1.xY);
        _hDest->stTransformMatrix.stCol_1.xY = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xX, _hSource->stTransformMatrix.stCol_2.xZ, _hSource->stTransformMatrix.stCol_0.xZ, _hSource->stTransformMatrix.stCol_2.xX);
        _hDest->stTransformMatrix.stCol_1.xZ = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xZ, _hSource->stTransformMatrix.stCol_1.xX, _hSource->stTransformMatrix.stCol_0.xX, _hSource->stTransformMatrix.stCol_1.xZ);
        _hDest->stTransformMatrix.stCol_2.xY = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xY, _hSource->stTransformMatrix.stCol_2.xX, _hSource->stTransformMatrix.stCol_0.xX, _hSource->stTransformMatrix.stCol_2.xY);
        _hDest->stTransformMatrix.stCol_2.xZ = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xX, _hSource->stTransformMatrix.stCol_1.xY, _hSource->stTransformMatrix.stCol_0.xY, _hSource->stTransformMatrix.stCol_1.xX);
        _hDest->stTransformMatrix.stCol_0.xX = xDet * _hDest->stTransformMatrix.stCol_0.xX;
        _hDest->stTransformMatrix.stCol_0.xY = xDet * _hDest->stTransformMatrix.stCol_0.xY;
        _hDest->stTransformMatrix.stCol_0.xZ = xDet * _hDest->stTransformMatrix.stCol_0.xZ;
        _hDest->stTransformMatrix.stCol_0.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_1.xX = xDet * _hDest->stTransformMatrix.stCol_1.xX;
        _hDest->stTransformMatrix.stCol_1.xY = xDet * _hDest->stTransformMatrix.stCol_1.xY;
        _hDest->stTransformMatrix.stCol_1.xZ = xDet * _hDest->stTransformMatrix.stCol_1.xZ;
        _hDest->stTransformMatrix.stCol_1.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_2.xX = xDet * _hDest->stTransformMatrix.stCol_2.xX;
        _hDest->stTransformMatrix.stCol_2.xY = xDet * _hDest->stTransformMatrix.stCol_2.xY;
        _hDest->stTransformMatrix.stCol_2.xZ = xDet * _hDest->stTransformMatrix.stCol_2.xZ;
        _hDest->stTransformMatrix.stCol_2.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_2.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_1.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_0.xW = 0.0f;
        MAT_INVERT_TRANSLATION(_hDest, _hSource);
        MAT_INVERT_TRANSLATION(_hDest, _hSource);
        break;
    }
    }
}

void MAT_fn_vInvert(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource)
{
    MTH4D_tdstMatrix_* p_stMatrixDest;
    MTH4D_tdstMatrix_* p_stMatrixSource;
    MTH4D_tdstVector_* p_stScale;
    MTH4D_tdstMatrix_* p_stTranspMatrix;
    MTH4D_tdstVector_* p_stVec;
    float xZoom;
    float xQX;
    float xQY;
    float xQZ;
    float xQW;

    switch (_hSource->eType)
    {
    case MAT_eTransform_Identity:
        if (_hDest != _hSource)
        {
            _hDest->eType = MAT_eTransform_Identity;
            MTH4D_fn_vSetIdentityMatrix(&_hDest->stTransformMatrix);
            _hDest->stScaleVector.xX = 1.0f;
            _hDest->stScaleVector.xY = 1.0f;
            _hDest->stScaleVector.xZ = 1.0f;
            _hDest->stScaleVector.xW = 1.0f;
        }
        break;

    case MAT_eTransform_Translation:
        if (_hDest != _hSource)
        {
            _hDest->eType = MAT_eTransform_Identity;
            MTH4D_fn_vSetIdentityMatrix(&_hDest->stTransformMatrix);
            _hDest->stScaleVector.xX = 1.0f;
            _hDest->stScaleVector.xY = 1.0f;
            _hDest->stScaleVector.xZ = 1.0f;
            _hDest->stScaleVector.xW = 1.0f;
            _hDest->eType = MAT_eTransform_Translation;
        }
        _hDest->stTransformMatrix.stCol_3.xX = -_hSource->stTransformMatrix.stCol_3.xX;
        _hDest->stTransformMatrix.stCol_3.xY = -_hSource->stTransformMatrix.stCol_3.xY;
        _hDest->stTransformMatrix.stCol_3.xZ = -_hSource->stTransformMatrix.stCol_3.xZ;
        _hDest->stTransformMatrix.stCol_3.xW = 1.0f;
        break;

    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        p_stMatrixDest = &_hDest->stTransformMatrix;
        p_stMatrixSource = &_hSource->stTransformMatrix;
        p_stScale = &_hDest->stScaleVector;
        if (_hDest != _hSource)
        {
            MAT_COPY_TRANSFORMATION(_hDest, _hSource);
        }
        xZoom = 1.0f / p_stMatrixSource->stCol_0.xX;
        p_stMatrixDest->stCol_0.xX = xZoom;
        p_stScale->xX = xZoom;
        xZoom = 1.0f / p_stMatrixSource->stCol_1.xY;
        p_stMatrixDest->stCol_1.xY = xZoom;
        p_stScale->xY = xZoom;
        xZoom = 1.0f / p_stMatrixSource->stCol_2.xZ;
        p_stMatrixDest->stCol_2.xZ = xZoom;
        p_stScale->xZ = xZoom;
        _hDest->stTransformMatrix.stCol_3.xX = -_hSource->stTransformMatrix.stCol_3.xX;
        _hDest->stTransformMatrix.stCol_3.xY = -_hSource->stTransformMatrix.stCol_3.xY;
        _hDest->stTransformMatrix.stCol_3.xZ = -_hSource->stTransformMatrix.stCol_3.xZ;
        _hDest->stTransformMatrix.stCol_3.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_3.xX = p_stScale->xX * _hDest->stTransformMatrix.stCol_3.xX;
        _hDest->stTransformMatrix.stCol_3.xY = p_stScale->xY * _hDest->stTransformMatrix.stCol_3.xY;
        _hDest->stTransformMatrix.stCol_3.xZ = p_stScale->xZ * _hDest->stTransformMatrix.stCol_3.xZ;
        _hDest->stTransformMatrix.stCol_3.xW = 1.0f;
        break;

    case MAT_eTransform_Rotation:
        p_stTranspMatrix = &_hDest->stTransformMatrix;
        p_stMatrixSource = &_hSource->stTransformMatrix;
        p_stVec = &_hDest->stTransformMatrix.stCol_3;
        _hDest->eType = MAT_eTransform_Rotation;
        if (p_stTranspMatrix == p_stMatrixSource)
        {
            MAT_TRANSPOSE_3X3(_hSource);
        }
        else
        {
            MTH4D_fn_vInvertRotationMatrix2(p_stTranspMatrix, p_stMatrixSource);
        }
        p_stVec->xX = -_hSource->stTransformMatrix.stCol_3.xX;
        p_stVec->xY = -_hSource->stTransformMatrix.stCol_3.xY;
        p_stVec->xZ = -_hSource->stTransformMatrix.stCol_3.xZ;
        p_stVec->xW = 1.0f;
        MTH4D_fn_vMulMatrixVectorWithoutBuffer(p_stVec, p_stTranspMatrix, p_stVec);
        _hDest->stScaleVector.xX = 1.0f;
        _hDest->stScaleVector.xY = 1.0f;
        _hDest->stScaleVector.xZ = 1.0f;
        _hDest->stScaleVector.xW = 1.0f;
        break;

    case MAT_eTransform_RotationZoom:
        p_stTranspMatrix = &_hDest->stTransformMatrix;
        p_stMatrixSource = &_hSource->stTransformMatrix;
        p_stVec = &_hDest->stTransformMatrix.stCol_3;
        _hDest->eType = MAT_eTransform_RotationZoom;
        if (p_stTranspMatrix == p_stMatrixSource)
        {
            MAT_TRANSPOSE_3X3(_hSource);
        }
        else
        {
            MTH4D_fn_vInvertRotationMatrix2(p_stTranspMatrix, p_stMatrixSource);
        }
        xZoom = _hSource->stScaleVector.xX;
        xZoom = 1.0f / (xZoom * xZoom);
        p_stTranspMatrix->stCol_0.xX = xZoom * p_stTranspMatrix->stCol_0.xX;
        p_stTranspMatrix->stCol_0.xY = xZoom * p_stTranspMatrix->stCol_0.xY;
        p_stTranspMatrix->stCol_0.xZ = xZoom * p_stTranspMatrix->stCol_0.xZ;
        p_stTranspMatrix->stCol_0.xW = 1.0f;
        p_stTranspMatrix->stCol_1.xX = xZoom * p_stTranspMatrix->stCol_1.xX;
        p_stTranspMatrix->stCol_1.xY = xZoom * p_stTranspMatrix->stCol_1.xY;
        p_stTranspMatrix->stCol_1.xZ = xZoom * p_stTranspMatrix->stCol_1.xZ;
        p_stTranspMatrix->stCol_1.xW = 1.0f;
        p_stTranspMatrix->stCol_2.xX = xZoom * p_stTranspMatrix->stCol_2.xX;
        p_stTranspMatrix->stCol_2.xY = xZoom * p_stTranspMatrix->stCol_2.xY;
        p_stTranspMatrix->stCol_2.xZ = xZoom * p_stTranspMatrix->stCol_2.xZ;
        p_stTranspMatrix->stCol_2.xW = 1.0f;
        p_stTranspMatrix->stCol_2.xW = 0.0f;
        p_stTranspMatrix->stCol_1.xW = 0.0f;
        p_stTranspMatrix->stCol_0.xW = 0.0f;
        xZoom = 1.0f / _hSource->stScaleVector.xX;
        _hDest->stScaleVector.xX = xZoom;
        _hDest->stScaleVector.xY = xZoom;
        _hDest->stScaleVector.xZ = xZoom;
        _hDest->stScaleVector.xW = 1.0f;
        p_stVec->xX = -_hSource->stTransformMatrix.stCol_3.xX;
        p_stVec->xY = -_hSource->stTransformMatrix.stCol_3.xY;
        p_stVec->xZ = -_hSource->stTransformMatrix.stCol_3.xZ;
        p_stVec->xW = 1.0f;
        MTH4D_fn_vMulMatrixVectorWithoutBuffer(p_stVec, p_stTranspMatrix, p_stVec);
        break;

    case MAT_eTransform_RotationScale:
    {
        float xSX, xSY, xSZ;
        MAT_fn_vInvertRotation(_hDest, _hSource);
        MAT_fn_v_MatrixToQuat(&_hDest->stTransformMatrix, &xQX, &xQY, &xQZ, &xQW);
        _hDest->eType = MAT_eTransform_ComplexRotationScale;
        xSX = _hSource->stScaleVector.xX;
        xSY = _hSource->stScaleVector.xY;
        xSZ = _hSource->stScaleVector.xZ;
        xSX = 1.0f / (xSX * xSX);
        xSY = 1.0f / (xSY * xSY);
        xSZ = 1.0f / (xSZ * xSZ);
        _hDest->stTransformMatrix.stCol_0.xX = xSX * _hSource->stTransformMatrix.stCol_0.xX;
        _hDest->stTransformMatrix.stCol_0.xY = xSX * _hSource->stTransformMatrix.stCol_0.xY;
        _hDest->stTransformMatrix.stCol_0.xZ = xSX * _hSource->stTransformMatrix.stCol_0.xZ;
        _hDest->stTransformMatrix.stCol_0.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_1.xX = xSY * _hSource->stTransformMatrix.stCol_1.xX;
        _hDest->stTransformMatrix.stCol_1.xY = xSY * _hSource->stTransformMatrix.stCol_1.xY;
        _hDest->stTransformMatrix.stCol_1.xZ = xSY * _hSource->stTransformMatrix.stCol_1.xZ;
        _hDest->stTransformMatrix.stCol_1.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_2.xX = xSZ * _hSource->stTransformMatrix.stCol_2.xX;
        _hDest->stTransformMatrix.stCol_2.xY = xSZ * _hSource->stTransformMatrix.stCol_2.xY;
        _hDest->stTransformMatrix.stCol_2.xZ = xSZ * _hSource->stTransformMatrix.stCol_2.xZ;
        _hDest->stTransformMatrix.stCol_2.xW = 1.0f;
        MAT_COPY_VECTOR(_hDest->stTransformMatrix.stCol_3, _hSource->stTransformMatrix.stCol_3);
        _hDest->stTransformMatrix.stCol_2.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_1.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_0.xW = 0.0f;
        MAT_TRANSPOSE_3X3(_hDest);
        MAT_INVERT_TRANSLATION(_hDest, _hSource);
        {
            float xX, xY, xZ, xW;
            xW = xQW;
            xZ = xQZ;
            xY = xQY;
            xX = xQX;
            _hDest->stScaleVector.xX = xX;
            _hDest->stScaleVector.xY = xY;
            _hDest->stScaleVector.xZ = xZ;
            _hDest->stScaleVector.xW = xW;
        }
        break;
    }

    case MAT_eTransform_ComplexRotationScale:
    {
        float xDet;
        _hDest->eType = MAT_eTransform_ComplexRotationScale;
        _hDest->stTransformMatrix.stCol_0.xX = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_1.xY, _hSource->stTransformMatrix.stCol_2.xZ, _hSource->stTransformMatrix.stCol_1.xZ, _hSource->stTransformMatrix.stCol_2.xY);
        xDet = _hSource->stTransformMatrix.stCol_0.xX * _hDest->stTransformMatrix.stCol_0.xX;
        _hDest->stTransformMatrix.stCol_1.xX = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_1.xZ, _hSource->stTransformMatrix.stCol_2.xX, _hSource->stTransformMatrix.stCol_1.xX, _hSource->stTransformMatrix.stCol_2.xZ);
        xDet = xDet + _hSource->stTransformMatrix.stCol_0.xY * _hDest->stTransformMatrix.stCol_1.xX;
        _hDest->stTransformMatrix.stCol_2.xX = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_1.xX, _hSource->stTransformMatrix.stCol_2.xY, _hSource->stTransformMatrix.stCol_1.xY, _hSource->stTransformMatrix.stCol_2.xX);
        xDet = xDet + _hSource->stTransformMatrix.stCol_0.xZ * _hDest->stTransformMatrix.stCol_2.xX;
        _hDest->stTransformMatrix.stCol_0.xY = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xZ, _hSource->stTransformMatrix.stCol_2.xY, _hSource->stTransformMatrix.stCol_0.xY, _hSource->stTransformMatrix.stCol_2.xZ);
        xDet = 1.0f / xDet;
        _hDest->stTransformMatrix.stCol_0.xZ = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xY, _hSource->stTransformMatrix.stCol_1.xZ, _hSource->stTransformMatrix.stCol_0.xZ, _hSource->stTransformMatrix.stCol_1.xY);
        _hDest->stTransformMatrix.stCol_1.xY = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xX, _hSource->stTransformMatrix.stCol_2.xZ, _hSource->stTransformMatrix.stCol_0.xZ, _hSource->stTransformMatrix.stCol_2.xX);
        _hDest->stTransformMatrix.stCol_1.xZ = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xZ, _hSource->stTransformMatrix.stCol_1.xX, _hSource->stTransformMatrix.stCol_0.xX, _hSource->stTransformMatrix.stCol_1.xZ);
        _hDest->stTransformMatrix.stCol_2.xY = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xY, _hSource->stTransformMatrix.stCol_2.xX, _hSource->stTransformMatrix.stCol_0.xX, _hSource->stTransformMatrix.stCol_2.xY);
        _hDest->stTransformMatrix.stCol_2.xZ = MTH_xMulSubMul(_hSource->stTransformMatrix.stCol_0.xX, _hSource->stTransformMatrix.stCol_1.xY, _hSource->stTransformMatrix.stCol_0.xY, _hSource->stTransformMatrix.stCol_1.xX);
        _hDest->stTransformMatrix.stCol_0.xX = xDet * _hDest->stTransformMatrix.stCol_0.xX;
        _hDest->stTransformMatrix.stCol_0.xY = xDet * _hDest->stTransformMatrix.stCol_0.xY;
        _hDest->stTransformMatrix.stCol_0.xZ = xDet * _hDest->stTransformMatrix.stCol_0.xZ;
        _hDest->stTransformMatrix.stCol_0.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_1.xX = xDet * _hDest->stTransformMatrix.stCol_1.xX;
        _hDest->stTransformMatrix.stCol_1.xY = xDet * _hDest->stTransformMatrix.stCol_1.xY;
        _hDest->stTransformMatrix.stCol_1.xZ = xDet * _hDest->stTransformMatrix.stCol_1.xZ;
        _hDest->stTransformMatrix.stCol_1.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_2.xX = xDet * _hDest->stTransformMatrix.stCol_2.xX;
        _hDest->stTransformMatrix.stCol_2.xY = xDet * _hDest->stTransformMatrix.stCol_2.xY;
        _hDest->stTransformMatrix.stCol_2.xZ = xDet * _hDest->stTransformMatrix.stCol_2.xZ;
        _hDest->stTransformMatrix.stCol_2.xW = 1.0f;
        _hDest->stTransformMatrix.stCol_2.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_1.xW = 0.0f;
        _hDest->stTransformMatrix.stCol_0.xW = 0.0f;
        MAT_INVERT_TRANSLATION(_hDest, _hSource);
        MAT_INVERT_TRANSLATION(_hDest, _hSource);
        break;
    }
    }
}

void MAT_fn_vRotateVector(MTH3D_tdstVector_* _p_stDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stSource)
{
    MAT_tdstTransformation_ stTemp;
    MTH4D_tdstMatrix_ TmpMat;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        if (_p_stDest != _p_stSource)
        {
            *(int*)&_p_stDest->xX = *(int*)&_p_stSource->xX;
            *(int*)&_p_stDest->xY = *(int*)&_p_stSource->xY;
            *(int*)&_p_stDest->xZ = *(int*)&_p_stSource->xZ;
        }
        break;

    case MAT_eTransform_Rotation:
        if (_p_stSource == _p_stDest)
        {
            MTH_tduVector4Words uS;
            float* p_xY = &uS.st.xY;
            float* p_xZ = &uS.st.xZ;
            uS.auWords[0] = ((MTH_tduVectorWords*)_p_stSource)->auWords[0];
            uS.auWords[1] = ((MTH_tduVectorWords*)_p_stSource)->auWords[1];
            uS.auWords[2] = ((MTH_tduVectorWords*)_p_stSource)->auWords[2];
            _p_stDest->xX = _hTransform->stTransformMatrix.stCol_0.xX * uS.st.xX + _hTransform->stTransformMatrix.stCol_1.xX * *p_xY + _hTransform->stTransformMatrix.stCol_2.xX * *p_xZ;
            _p_stDest->xY = _hTransform->stTransformMatrix.stCol_0.xY * uS.st.xX + _hTransform->stTransformMatrix.stCol_1.xY * *p_xY + _hTransform->stTransformMatrix.stCol_2.xY * *p_xZ;
            _p_stDest->xZ = _hTransform->stTransformMatrix.stCol_0.xZ * uS.st.xX + _hTransform->stTransformMatrix.stCol_1.xZ * *p_xY + _hTransform->stTransformMatrix.stCol_2.xZ * *p_xZ;
        }
        else
        {
            _p_stDest->xX = _hTransform->stTransformMatrix.stCol_0.xX * _p_stSource->xX + _hTransform->stTransformMatrix.stCol_1.xX * _p_stSource->xY + _hTransform->stTransformMatrix.stCol_2.xX * _p_stSource->xZ;
            _p_stDest->xY = _hTransform->stTransformMatrix.stCol_0.xY * _p_stSource->xX + _hTransform->stTransformMatrix.stCol_1.xY * _p_stSource->xY + _hTransform->stTransformMatrix.stCol_2.xY * _p_stSource->xZ;
            _p_stDest->xZ = _hTransform->stTransformMatrix.stCol_0.xZ * _p_stSource->xX + _hTransform->stTransformMatrix.stCol_1.xZ * _p_stSource->xY + _hTransform->stTransformMatrix.stCol_2.xZ * _p_stSource->xZ;
        }
        break;

    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
        MAT_fn_vRemoveScale(&stTemp, _hTransform);
        if (_p_stSource == _p_stDest)
        {
            MTH_tduVector4Words uS;
            float* p_xY = &uS.st.xY;
            float* p_xZ = &uS.st.xZ;
            uS.auWords[0] = ((MTH_tduVectorWords*)_p_stSource)->auWords[0];
            uS.auWords[1] = ((MTH_tduVectorWords*)_p_stSource)->auWords[1];
            uS.auWords[2] = ((MTH_tduVectorWords*)_p_stSource)->auWords[2];
            _p_stDest->xX = stTemp.stTransformMatrix.stCol_0.xX * uS.st.xX + stTemp.stTransformMatrix.stCol_1.xX * *p_xY + stTemp.stTransformMatrix.stCol_2.xX * *p_xZ;
            _p_stDest->xY = stTemp.stTransformMatrix.stCol_0.xY * uS.st.xX + stTemp.stTransformMatrix.stCol_1.xY * *p_xY + stTemp.stTransformMatrix.stCol_2.xY * *p_xZ;
            _p_stDest->xZ = stTemp.stTransformMatrix.stCol_0.xZ * uS.st.xX + stTemp.stTransformMatrix.stCol_1.xZ * *p_xY + stTemp.stTransformMatrix.stCol_2.xZ * *p_xZ;
        }
        else
        {
            _p_stDest->xX = stTemp.stTransformMatrix.stCol_0.xX * _p_stSource->xX + stTemp.stTransformMatrix.stCol_1.xX * _p_stSource->xY + stTemp.stTransformMatrix.stCol_2.xX * _p_stSource->xZ;
            _p_stDest->xY = stTemp.stTransformMatrix.stCol_0.xY * _p_stSource->xX + stTemp.stTransformMatrix.stCol_1.xY * _p_stSource->xY + stTemp.stTransformMatrix.stCol_2.xY * _p_stSource->xZ;
            _p_stDest->xZ = stTemp.stTransformMatrix.stCol_0.xZ * _p_stSource->xX + stTemp.stTransformMatrix.stCol_1.xZ * _p_stSource->xY + stTemp.stTransformMatrix.stCol_2.xZ * _p_stSource->xZ;
        }
        break;

    case MAT_eTransform_ComplexRotationScale:
        MAT_fn_vQuatToMatrix(&TmpMat, _hTransform->stScaleVector.xX, _hTransform->stScaleVector.xY, _hTransform->stScaleVector.xZ, _hTransform->stScaleVector.xW);
        if (_p_stSource == _p_stDest)
        {
            MTH_tduVector4Words uS;
            float* p_xY = &uS.st.xY;
            float* p_xZ = &uS.st.xZ;
            uS.auWords[0] = ((MTH_tduVectorWords*)_p_stSource)->auWords[0];
            uS.auWords[1] = ((MTH_tduVectorWords*)_p_stSource)->auWords[1];
            uS.auWords[2] = ((MTH_tduVectorWords*)_p_stSource)->auWords[2];
            _p_stDest->xX = TmpMat.stCol_0.xX * uS.st.xX + TmpMat.stCol_1.xX * *p_xY + TmpMat.stCol_2.xX * *p_xZ;
            _p_stDest->xY = TmpMat.stCol_0.xY * uS.st.xX + TmpMat.stCol_1.xY * *p_xY + TmpMat.stCol_2.xY * *p_xZ;
            _p_stDest->xZ = TmpMat.stCol_0.xZ * uS.st.xX + TmpMat.stCol_1.xZ * *p_xY + TmpMat.stCol_2.xZ * *p_xZ;
        }
        else
        {
            _p_stDest->xX = TmpMat.stCol_0.xX * _p_stSource->xX + TmpMat.stCol_1.xX * _p_stSource->xY + TmpMat.stCol_2.xX * _p_stSource->xZ;
            _p_stDest->xY = TmpMat.stCol_0.xY * _p_stSource->xX + TmpMat.stCol_1.xY * _p_stSource->xY + TmpMat.stCol_2.xY * _p_stSource->xZ;
            _p_stDest->xZ = TmpMat.stCol_0.xZ * _p_stSource->xX + TmpMat.stCol_1.xZ * _p_stSource->xY + TmpMat.stCol_2.xZ * _p_stSource->xZ;
        }
        break;
    }
}

void MAT_fn_vApplyOnVector(MTH3D_tdstVector_* _p_stDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stSource)
{
    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
        if (_p_stDest != _p_stSource)
        {
            *(int*)&_p_stDest->xX = *(int*)&_p_stSource->xX;
            *(int*)&_p_stDest->xY = *(int*)&_p_stSource->xY;
            *(int*)&_p_stDest->xZ = *(int*)&_p_stSource->xZ;
        }
        break;

    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        _p_stDest->xX = _p_stSource->xX * _hTransform->stScaleVector.xX;
        _p_stDest->xY = _p_stSource->xY * _hTransform->stScaleVector.xY;
        _p_stDest->xZ = _p_stSource->xZ * _hTransform->stScaleVector.xZ;
        break;

    case MAT_eTransform_Rotation:
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
    case MAT_eTransform_ComplexRotationScale:
        if (_p_stSource == _p_stDest)
        {
            MTH_tduVectorWords uT;
            float* p_xY = &uT.stVector.xY;
            float* p_xZ = &uT.stVector.xZ;
            uT.auWords[0] = ((MTH_tduVectorWords*)_p_stSource)->auWords[0];
            uT.auWords[1] = ((MTH_tduVectorWords*)_p_stSource)->auWords[1];
            uT.auWords[2] = ((MTH_tduVectorWords*)_p_stSource)->auWords[2];
            _p_stDest->xX = _hTransform->stTransformMatrix.stCol_0.xX * uT.stVector.xX + _hTransform->stTransformMatrix.stCol_1.xX * *p_xY + _hTransform->stTransformMatrix.stCol_2.xX * *p_xZ;
            _p_stDest->xY = _hTransform->stTransformMatrix.stCol_0.xY * uT.stVector.xX + _hTransform->stTransformMatrix.stCol_1.xY * *p_xY + _hTransform->stTransformMatrix.stCol_2.xY * *p_xZ;
            _p_stDest->xZ = _hTransform->stTransformMatrix.stCol_0.xZ * uT.stVector.xX + _hTransform->stTransformMatrix.stCol_1.xZ * *p_xY + _hTransform->stTransformMatrix.stCol_2.xZ * *p_xZ;
        }
        else
        {
            _p_stDest->xX = _hTransform->stTransformMatrix.stCol_0.xX * _p_stSource->xX + _hTransform->stTransformMatrix.stCol_1.xX * _p_stSource->xY + _hTransform->stTransformMatrix.stCol_2.xX * _p_stSource->xZ;
            _p_stDest->xY = _hTransform->stTransformMatrix.stCol_0.xY * _p_stSource->xX + _hTransform->stTransformMatrix.stCol_1.xY * _p_stSource->xY + _hTransform->stTransformMatrix.stCol_2.xY * _p_stSource->xZ;
            _p_stDest->xZ = _hTransform->stTransformMatrix.stCol_0.xZ * _p_stSource->xX + _hTransform->stTransformMatrix.stCol_1.xZ * _p_stSource->xY + _hTransform->stTransformMatrix.stCol_2.xZ * _p_stSource->xZ;
        }
        break;
    }
}
