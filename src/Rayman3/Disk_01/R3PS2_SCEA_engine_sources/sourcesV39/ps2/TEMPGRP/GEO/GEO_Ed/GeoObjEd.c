/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

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

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    short* d_xListOfElementsTypes; /* +0xc */
    void** d_stListOfElements; /* +0x10 */
    GEO_tdstEdge_* d_stListOfEdges; /* +0x14 */
    GEO_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    unsigned int ulType; /* +0x1c */
    short xNbPoints; /* +0x20 */
    short xNbElements; /* +0x22 */
    short xNbEdges; /* +0x24 */
    short xNbParallelBoxes; /* +0x26 */
    float xBoudingSphereRadius; /* +0x28 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x30 */
    GEO_tdstDoubledIndex_* d_stListOfEdgesDI; /* +0x40 */
    short xNbEdgesDI; /* +0x44 */
    short xNbOctreeEdges; /* +0x46 */
    int bUsedForShadowDrawing; /* +0x48 */
    int bUsedForShadowCreating; /* +0x4c */
    int pSDC_Data; /* +0x50 */
    unsigned int bIsStatic; /* +0x54 */
    unsigned int glDisplayList; /* +0x58 */
    unsigned char bVTForSinus; /* +0x5c */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    GLI_tdstCamera_** p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

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

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void* memset(void* dst, int c, size_t n);
GEO_tdstGeometricObject_* GEO_hAllocTMPGeometricObject(short xNbPoints, short xNbElements);
void GEO_vInitGeometricObject(GEO_tdstGeometricObject_* p_stObjectToCreate, short xNbPoints, short xNbElements);
void MAT_fn_vInvertRotation(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource);
void MAT_fn_vSetRotationVectors(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stVecI, MTH3D_tdstVector_* _p_stVecJ, MTH3D_tdstVector_* _p_stVecK);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c lines 187–207 */
/* addr: 0x002a4530  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 187
 *   +0x0024 -> line 188
 *   +0x0038 -> line 189
 *   +0x004c -> line 191
 *   +0x0064 -> line 193
 *   +0x006c -> line 195
 *   +0x007c -> line 197
 *   +0x0094 -> line 199
 *   +0x009c -> line 203
 *   +0x00ac -> line 205
 *   +0x00b0 -> line 203
 *   +0x00c4 -> line 204
 *   +0x00d4 -> line 205
 *   +0x00d8 -> line 204
 *   +0x0108 -> line 205
 *   +0x010c -> line 207
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Recovered PS2 MTH scalar helpers: sqrt.s and the R5900 accumulator ops
   have no C form under the baseline. */
#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x }                  \
    asm { madda.s _y, _y }                 \
    asm { madd.s _result, _z, _z }
#define MTH3D_M_vCopyVector(_d, _s) { *(int*)&(_d)->xX = *(int*)&(_s)->xX; *(int*)&(_d)->xY = *(int*)&(_s)->xY; *(int*)&(_d)->xZ = *(int*)&(_s)->xZ; }

void GEO_fn_vComputeBoundingSphereOfTwoSpheres(MTH3D_tdstVector_* _p_stReturnedSphereCenter, float* _p_xReturnedSphereRadius, MTH3D_tdstVector_* _p_stFirstSphereCenter, float _xFirstSphereRadius, MTH3D_tdstVector_* _p_stSecondSphereCenter, float _xSecondSphereRadius)
{
    float xAlpha;
    float xX, xY, xZ;
    float xSqrNorm;
    float xNorm;

    xX = _p_stFirstSphereCenter->xX - _p_stSecondSphereCenter->xX; xY = _p_stFirstSphereCenter->xY - _p_stSecondSphereCenter->xY; xZ = _p_stFirstSphereCenter->xZ - _p_stSecondSphereCenter->xZ;
    MTH_SQR3_TO(xSqrNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xSqrNorm)
    if (xNorm + _xFirstSphereRadius <= _xSecondSphereRadius)
    {
        *(int*)&_p_stReturnedSphereCenter->xX = *(int*)&_p_stSecondSphereCenter->xX; *(int*)&_p_stReturnedSphereCenter->xY = *(int*)&_p_stSecondSphereCenter->xY; *(int*)&_p_stReturnedSphereCenter->xZ = *(int*)&_p_stSecondSphereCenter->xZ;

        *_p_xReturnedSphereRadius = _xSecondSphereRadius;
    }
    else if (xNorm + _xSecondSphereRadius < _xFirstSphereRadius)
    {
        *(int*)&_p_stReturnedSphereCenter->xX = *(int*)&_p_stFirstSphereCenter->xX; *(int*)&_p_stReturnedSphereCenter->xY = *(int*)&_p_stFirstSphereCenter->xY; *(int*)&_p_stReturnedSphereCenter->xZ = *(int*)&_p_stFirstSphereCenter->xZ;

        *_p_xReturnedSphereRadius = _xFirstSphereRadius;
    }
    else
    {
        xAlpha = (1.0f - (_xFirstSphereRadius - _xSecondSphereRadius) / xNorm) / 2.0f;
        _p_stReturnedSphereCenter->xX = _p_stFirstSphereCenter->xX + xAlpha * (_p_stSecondSphereCenter->xX - _p_stFirstSphereCenter->xX); _p_stReturnedSphereCenter->xY = _p_stFirstSphereCenter->xY + xAlpha * (_p_stSecondSphereCenter->xY - _p_stFirstSphereCenter->xY); _p_stReturnedSphereCenter->xZ = _p_stFirstSphereCenter->xZ + xAlpha * (_p_stSecondSphereCenter->xZ - _p_stFirstSphereCenter->xZ);
        *_p_xReturnedSphereRadius = (xNorm + _xFirstSphereRadius + _xSecondSphereRadius) / 2.0f;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c lines 875–966 */
/* addr: 0x002a4650  size: 1332 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 875
 *   +0x0014 -> line 887
 *   +0x0034 -> line 890
 *   +0x0048 -> line 891
 *   +0x004c -> line 890
 *   +0x0074 -> line 891
 *   +0x00b0 -> line 894
 *   +0x0110 -> line 916
 *   +0x0120 -> line 920
 *   +0x0134 -> line 922
 *   +0x0138 -> line 920
 *   +0x013c -> line 922
 *   +0x017c -> line 923
 *   +0x0198 -> line 924
 *   +0x01b0 -> line 926
 *   +0x0204 -> line 928
 *   +0x0230 -> line 929
 *   +0x0234 -> line 928
 *   +0x0238 -> line 929
 *   +0x0248 -> line 931
 *   +0x0250 -> line 932
 *   +0x0258 -> line 936
 *   +0x026c -> line 939
 *   +0x0270 -> line 936
 *   +0x0274 -> line 939
 *   +0x02b4 -> line 940
 *   +0x02d0 -> line 941
 *   +0x02e8 -> line 943
 *   +0x033c -> line 945
 *   +0x0368 -> line 946
 *   +0x036c -> line 945
 *   +0x0370 -> line 946
 *   +0x0380 -> line 948
 *   +0x0388 -> line 953
 *   +0x038c -> line 954
 *   +0x0390 -> line 953
 *   +0x0394 -> line 954
 *   +0x0398 -> line 953
 *   +0x03a0 -> line 954
 *   +0x03a4 -> line 953
 *   +0x03b0 -> line 954
 *   +0x0410 -> line 956
 *   +0x0454 -> line 957
 *   +0x0470 -> line 958
 *   +0x0488 -> line 960
 *   +0x04dc -> line 962
 *   +0x0508 -> line 963
 *   +0x050c -> line 962
 *   +0x0510 -> line 963
 *   +0x0520 -> line 966
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vTurnLookAt(GEO_tdstGeometricObject_* p_stObj, GLD_tdstViewportAttributes_* hVpt, GLI_tdstCamera_* _pstCameraFromPushBuffer, MAT_tdstTransformation_* p_stCurrentMatrix)
{
    MAT_tdstTransformation_ hCameraPosInv;
    MTH3D_tdstVector_ stX;
    MTH3D_tdstVector_ stY;
    MTH3D_tdstVector_ stZ;
    MTH4D_tdstVector_* p_stCol;

    if (_pstCameraFromPushBuffer == NULL) { _pstCameraFromPushBuffer = *hVpt->p_vSpecificToXD; } MAT_fn_vInvertRotation(&hCameraPosInv, &_pstCameraFromPushBuffer->stMatrix);
    p_stCol = &hCameraPosInv.stTransformMatrix.stCol_3;
    stX.xX = p_stCol->xX - p_stCurrentMatrix->stTransformMatrix.stCol_3.xX; stX.xY = p_stCol->xY - p_stCurrentMatrix->stTransformMatrix.stCol_3.xY; stX.xZ = p_stCol->xZ - p_stCurrentMatrix->stTransformMatrix.stCol_3.xZ;
    if (stX.xX == 0.0f && stX.xY == 0.0f && stX.xZ == 0.0f) { return; }
    {
        float xNorm, xSqrNorm, xX, xY, xZ;

        xX = stX.xX; xY = stX.xY; xZ = stX.xZ;
        MTH_SQR3_TO(xSqrNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xSqrNorm)
        if (xNorm != 0.0f) { xNorm = 1.0f / xNorm; stX.xX = xNorm * stX.xX; stX.xY = xNorm * stX.xY; stX.xZ = xNorm * stX.xZ; }
    }
    if (p_stObj->ulType == 3)
    {
        MTH3D_M_vCopyVector(&stY, &p_stCurrentMatrix->stTransformMatrix.stCol_1)
        stZ.xX = stX.xY * stY.xZ - stX.xZ * stY.xY; stZ.xY = stX.xZ * stY.xX - stX.xX * stY.xZ; stZ.xZ = stX.xX * stY.xY - stX.xY * stY.xX;
        {
            float xNorm, xSqrNorm, xX, xY, xZ;

            xX = stZ.xX; xY = stZ.xY; xZ = stZ.xZ;
            MTH_SQR3_TO(xSqrNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xSqrNorm)
            if (xNorm <= 0.0f) { return; }
            MTH_SQR3_TO(xNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xNorm)
            if (xNorm != 0.0f) { xNorm = 1.0f / xNorm; stZ.xX = xNorm * stZ.xX; stZ.xY = xNorm * stZ.xY; stZ.xZ = xNorm * stZ.xZ; }
        }
        stX.xX = stY.xY * stZ.xZ - stY.xZ * stZ.xY; stX.xY = stY.xZ * stZ.xX - stY.xX * stZ.xZ; stX.xZ = stY.xX * stZ.xY - stY.xY * stZ.xX;
        MAT_fn_vSetRotationVectors(p_stCurrentMatrix, &stX, &stY, &stZ);
    }
    else if (p_stObj->ulType == 2)
    {
        MTH3D_M_vCopyVector(&stZ, &p_stCurrentMatrix->stTransformMatrix.stCol_2)
        stY.xX = stZ.xY * stX.xZ - stZ.xZ * stX.xY; stY.xY = stZ.xZ * stX.xX - stZ.xX * stX.xZ; stY.xZ = stZ.xX * stX.xY - stZ.xY * stX.xX;
        {
            float xNorm, xSqrNorm, xX, xY, xZ;

            xX = stY.xX; xY = stY.xY; xZ = stY.xZ;
            MTH_SQR3_TO(xSqrNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xSqrNorm)
            if (xNorm <= 0.0f) { return; }
            MTH_SQR3_TO(xNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xNorm)
            if (xNorm != 0.0f) { xNorm = 1.0f / xNorm; stY.xX = xNorm * stY.xX; stY.xY = xNorm * stY.xY; stY.xZ = xNorm * stY.xZ; }
        }
        stX.xX = stY.xY * stZ.xZ - stY.xZ * stZ.xY; stX.xY = stY.xZ * stZ.xX - stY.xX * stZ.xZ; stX.xZ = stY.xX * stZ.xY - stY.xY * stZ.xX;
        MAT_fn_vSetRotationVectors(p_stCurrentMatrix, &stX, &stY, &stZ);
    }
    else
    {
        MTH3D_M_vCopyVector(&stZ, &hCameraPosInv.stTransformMatrix.stCol_2)
        {
            float xNorm, xSqrNorm, xX, xY, xZ;

            xX = stZ.xX; xY = stZ.xY; xZ = stZ.xZ;
            MTH_SQR3_TO(xSqrNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xSqrNorm)
            if (xNorm != 0.0f) { xNorm = 1.0f / xNorm; stZ.xX = xNorm * stZ.xX; stZ.xY = xNorm * stZ.xY; stZ.xZ = xNorm * stZ.xZ; }
        }
        stY.xX = stZ.xY * stX.xZ - stZ.xZ * stX.xY; stY.xY = stX.xX * stZ.xZ - stZ.xX * stX.xZ; stY.xZ = stX.xY * stZ.xX - stZ.xY * stX.xX;
        {
            float xNorm, xSqrNorm, xX, xY, xZ;

            xX = stY.xX; xY = stY.xY; xZ = stY.xZ;
            MTH_SQR3_TO(xSqrNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xSqrNorm)
            if (xNorm <= 0.0f) { return; } MTH_SQR3_TO(xNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xNorm) if (xNorm != 0.0f) { xNorm = 1.0f / xNorm; stY.xX = xNorm * stY.xX; stY.xY = xNorm * stY.xY; stY.xZ = xNorm * stY.xZ; }
        }
        stZ.xX = stX.xY * stY.xZ - stX.xZ * stY.xY; stZ.xY = stY.xY * stX.xZ - stX.xX * stY.xZ; stZ.xZ = stY.xX * stX.xY - stY.xY * stX.xX;
        MAT_fn_vSetRotationVectors(p_stCurrentMatrix, &stX, &stY, &stZ);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c lines 868–868 */
/* addr: 0x002a4b90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 868
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char GEO_bIsLookAt(GEO_tdstGeometricObject_* p_stObj)
{
    return p_stObj->ulType;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c lines 147–151 */
/* addr: 0x002a4ba0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 147
 *   +0x0028 -> line 148
 *   +0x005c -> line 149
 *   +0x0060 -> line 148
 *   +0x0064 -> line 149
 *   +0x0070 -> line 150
 *   +0x0078 -> line 151
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vCreateTMPGeometricObjectWithEdges(GEO_tdstGeometricObject_** p_hObject, short xNbPoints, short xNbElements, short xNbEdges)
{
    GEO_tdstGeometricObject_* p_stObj = GEO_hAllocTMPGeometricObject(xNbPoints, xNbElements); p_stObj->d_stListOfEdges = (GEO_tdstEdge_*)HMU_fn_p_vMalloc(xNbEdges * sizeof(GEO_tdstEdge_), 1); *p_hObject = p_stObj;
    GEO_vInitGeometricObject(*p_hObject, xNbPoints, xNbElements);
    (*p_hObject)->xNbEdges = xNbEdges;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\GeoObjEd.c lines 140–144 */
/* addr: 0x002a4c40  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 140
 *   +0x0028 -> line 141
 *   +0x00a0 -> line 142
 *   +0x00a4 -> line 141
 *   +0x00b0 -> line 142
 *   +0x00bc -> line 143
 *   +0x00c4 -> line 144
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vCreateTMPGeometricObject(GEO_tdstGeometricObject_** p_hObject, short xNbPoints, short xNbElements)
{
    GEO_tdstGeometricObject_* p_stObj;

    p_stObj = (GEO_tdstGeometricObject_*)HMU_fn_p_vMalloc(sizeof(GEO_tdstGeometricObject_), 1); p_stObj->xNbElements = xNbElements; p_stObj->xNbPoints = xNbPoints; p_stObj->d_xListOfElementsTypes = (short*)HMU_fn_p_vMalloc(xNbElements * sizeof(short), 1); p_stObj->d_stListOfElements = (void**)HMU_fn_p_vMalloc(xNbElements * sizeof(void*), 1); p_stObj->d_stListOfPoints = (MTH3D_tdstVector_*)HMU_fn_p_vMalloc(xNbPoints * sizeof(MTH3D_tdstVector_), 1); memset(p_stObj->d_stListOfPoints, 0, xNbPoints * sizeof(MTH3D_tdstVector_)); p_stObj->d_stListOfPointsNormals = NULL; p_stObj->d_dfVertexTransparency = 0; p_stObj->d_stListOfEdges = NULL; *p_hObject = p_stObj;
    GEO_vInitGeometricObject(*p_hObject, xNbPoints, xNbElements);
    (*p_hObject)->xNbEdges = 0;
}
