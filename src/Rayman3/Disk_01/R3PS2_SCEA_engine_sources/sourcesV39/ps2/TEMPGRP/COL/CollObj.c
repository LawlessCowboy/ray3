/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/COL.h"
#include "r3/GMT.h"
#include "r3/MAT.h"

/* Recovered PS2 MTH scalar helpers: sqrt.s and the R5900 accumulator ops
   have no C form under the baseline. */
#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x }                  \
    asm { madda.s _y, _y }                 \
    asm { madd.s _result, _z, _z }

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct COL_tdstDoubledIndex_ COL_tdstDoubledIndex_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;

struct COL_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
};

struct GEO_tdstElementIndexedTriangles_ {
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    short xNbFaces; /* +0x4 */
    short xNbElementUV; /* +0x6 */
    short xNbUVStages; /* +0x8 */
    GEO_tdstTripledIndex_* d_stListOfFacesTripled; /* +0xc */
    GEO_tdstTripledIndex_* d_stListOfFacesTripledIndexUV; /* +0x10 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x14 */
    ACP_tdst2DUVValues_* d_stListOfElementUV; /* +0x18 */
    GEO_tdstTripledIndex_* d_stListOfFacesEdges; /* +0x1c */
    GEO_tdstTripledIndex_* d_stListOfFacesAdjacent; /* +0x20 */
    int d_stListOfIndexUsedByThisElement; /* +0x24 */
    short xNumberOfIndexsUsed; /* +0x28 */
    short xIndexOfParallelBox; /* +0x2a */
    unsigned int glDisplayList; /* +0x2c */
    int p_xSpecialValue; /* +0x30 */
    unsigned char bVisibleInPortal; /* +0x34 */
    unsigned int pVertexArrays[4]; /* +0x38 */
};

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
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
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct COL_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct COL_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct COL_tdstElementIndexedTriangles_ {
    GMT_tdstGameMaterial_* hMaterial; /* +0x0 */
    COL_tdstTripledIndex_* d_stListOfFacesTripled; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfFacesNormals; /* +0x8 */
    short xNbFaces; /* +0xc */
    short xIndexOfParallelBox; /* +0xe */
    GEO_tdstElementIndexedTriangles_* p_stGeometricElementForVisualisation; /* +0x10 */
    COL_tdstTripledIndex_* d_stListOfFacesEdges; /* +0x14 */
    MTH3D_tdstVector_* d_stListOfEdgesNormals; /* +0x18 */
    int d_xListOfEdgesCoeff; /* +0x1c */
    short xNbEdges; /* +0x20 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct COL_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct COL_tdstElementAlignedBoxes_ {
    COL_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

static int gs_pstGeoObject;
static int gs_aGeoITElements[25];
int gs_hVisualMaterial;

void* memcpy(void* dst, const void* src, size_t n);
void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void COL_vComputeObjectParallelBox(COL_tdstCollideObject_* hObject, short xParallelBox);
void COL_vCreateObjectListOfParallelBox(COL_tdstCollideObject_* hObject, short xNumberOfParallelBoxes);
void COL_fn_vUpdateMinMaxBoxWithPoint(MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, MTH3D_tdstVector_* p_stPoint);
void COL_fn_vComputeBoundingSphereOfOneSphereAndOnePoint(MTH3D_tdstVector_* p_stReturnedSphereCenter, float* p_xReturnedSphereRadius, MTH3D_tdstVector_* p_stFirstSphereCenter, float xFirstSphereRadius, MTH3D_tdstVector_* p_stSecondSphereCenter);
void COL_fn_vComputeBoundingSphereOfTwoSpheres(MTH3D_tdstVector_* p_stReturnedSphereCenter, float* p_xReturnedSphereRadius, MTH3D_tdstVector_* p_stFirstSphereCenter, float xFirstSphereRadius, MTH3D_tdstVector_* p_stSecondSphereCenter, float xSecondSphereRadius);

COL_tdstCollideObject_* COL_fn_hTransformTableOfObjectInOneObjectForGAM(COL_tdstCollideObject_* _hGeoObj, COL_tdstCollideObject_** a_hTableOfGeoObj, short xNbOfObjects)
{
    short xNbPoints;
    short xNbP;
    COL_tdstElementSpheres_* p_stESTarget;
    COL_tdstIndexedSphere_* p_stISTarget;
    COL_tdstIndexedSphere_* p_stISTargetEnd;
    COL_tdstIndexedSphere_* param0;
    COL_tdstElementAlignedBoxes_* p_stEBTarget;
    COL_tdstIndexedAlignedBox_* p_stIBTarget;
    COL_tdstIndexedAlignedBox_* p_stIBTargetEnd;
    COL_tdstCollideObject_** p_hGeoObjInTableAtIndex;
    COL_tdstCollideObject_** p_hGeoObjInTableEnd;
    int xNbSubElt; /* debug: short; int reproduces retail s4/s5 allocation */
    void** p_hCurrentElementSource;
    void** p_hCurrentElementSourceEnd;
    short* p_xCurrentElementTypeSource;
    unsigned int ulSize;

    p_stESTarget = ((COL_tdstElementSpheres_**)_hGeoObj->d_stListOfElements)[0];
    p_stEBTarget = ((COL_tdstElementAlignedBoxes_**)_hGeoObj->d_stListOfElements)[1];

    p_stISTarget = p_stESTarget->d_stListOfSpheres;
    p_stIBTarget = p_stEBTarget->d_stListOfAlignedBoxes;

    p_stESTarget->xNbSpheres = 0;
    p_stEBTarget->xNbAlignedBoxes = 0;

    xNbPoints = 0;
    p_hGeoObjInTableEnd = a_hTableOfGeoObj + xNbOfObjects;
    for (p_hGeoObjInTableAtIndex = a_hTableOfGeoObj; p_hGeoObjInTableAtIndex < p_hGeoObjInTableEnd; p_hGeoObjInTableAtIndex++)
    {
        xNbP = (*p_hGeoObjInTableAtIndex)->xNbPoints;
        ulSize = xNbP * sizeof(MTH3D_tdstVector_);
        if (ulSize)
        {
            memcpy(_hGeoObj->d_stListOfPoints + xNbPoints, (*p_hGeoObjInTableAtIndex)->d_stListOfPoints, ulSize);

            p_hCurrentElementSource = (void**)(*p_hGeoObjInTableAtIndex)->d_stListOfElements;
            p_hCurrentElementSourceEnd = p_hCurrentElementSource + (*p_hGeoObjInTableAtIndex)->xNbElements;
            p_xCurrentElementTypeSource = (short*)(*p_hGeoObjInTableAtIndex)->d_xListOfElementsTypes;

            for (; p_hCurrentElementSource < p_hCurrentElementSourceEnd; p_hCurrentElementSource++, p_xCurrentElementTypeSource++)
            {
                switch (*p_xCurrentElementTypeSource)
                {
                case 7:
                    xNbSubElt = ((COL_tdstElementSpheres_*)*p_hCurrentElementSource)->xNbSpheres;
                    memcpy(p_stISTarget, ((COL_tdstElementSpheres_*)*p_hCurrentElementSource)->d_stListOfSpheres, xNbSubElt * sizeof(COL_tdstIndexedSphere_));
                    if (xNbPoints)
                    {
                        p_stISTargetEnd = p_stISTarget + xNbSubElt;
                        param0 = p_stISTarget;
                        while (param0 < p_stISTargetEnd)
                        {
                            param0->xCenterPoint += xNbPoints;
                            param0++;
                        }
                    }
                    p_stISTarget += xNbSubElt;
                    p_stESTarget->xNbSpheres += xNbSubElt;
                    break;

                case 8:
                    xNbSubElt = ((COL_tdstElementAlignedBoxes_*)*p_hCurrentElementSource)->xNbAlignedBoxes;
                    memcpy(p_stIBTarget, ((COL_tdstElementAlignedBoxes_*)*p_hCurrentElementSource)->d_stListOfAlignedBoxes, xNbSubElt * sizeof(COL_tdstIndexedAlignedBox_));
                    if (xNbPoints)
                    {
                        p_stIBTargetEnd = p_stIBTarget + xNbSubElt;
                        while (p_stIBTarget < p_stIBTargetEnd)
                        {
                            p_stIBTarget->xMinPoint += xNbPoints;
                            p_stIBTarget->xMaxPoint += xNbPoints;
                            p_stIBTarget++;
                        }
                    }
                    else
                    {
                        p_stIBTarget += xNbSubElt;
                    }
                    p_stEBTarget->xNbAlignedBoxes += xNbSubElt;
                    break;
                }
            }
            xNbPoints += xNbP;
        }
    }
    _hGeoObj->xNbPoints = xNbPoints;
    return _hGeoObj;
}

void COL_fn_vAddObjectToSphere(COL_tdstCollideObject_* _hGeometricObject, MTH4D_tdstVector_* _p_stSphereCenter, float* _p_xSphereRadius)
{
    MTH3D_tdstVector_ stSphereCenterLocal;
    int lElementCounter;
    COL_tdstElementSpheres_* p_stLocalElementSphere;
    MTH3D_tdstVector_* p_stVertex;
    int i;

    p_stVertex = _hGeometricObject->d_stListOfPoints;
    for (i = 0; i < _hGeometricObject->xNbPoints; i++, p_stVertex++)
    {
        COL_fn_vComputeBoundingSphereOfOneSphereAndOnePoint((MTH3D_tdstVector_*)_p_stSphereCenter, _p_xSphereRadius, (MTH3D_tdstVector_*)_p_stSphereCenter, *_p_xSphereRadius, p_stVertex);
    }

    for (lElementCounter = 0; lElementCounter < _hGeometricObject->xNbElements; lElementCounter++)
    {
        if (((short*)_hGeometricObject->d_xListOfElementsTypes)[lElementCounter] == 7)
        {
            p_stLocalElementSphere = ((COL_tdstElementSpheres_**)_hGeometricObject->d_stListOfElements)[lElementCounter];
            for (i = 0; i < p_stLocalElementSphere->xNbSpheres; i++)
            {
                stSphereCenterLocal = _hGeometricObject->d_stListOfPoints[p_stLocalElementSphere->d_stListOfSpheres[i].xCenterPoint];
                COL_fn_vComputeBoundingSphereOfTwoSpheres((MTH3D_tdstVector_*)_p_stSphereCenter, _p_xSphereRadius, (MTH3D_tdstVector_*)_p_stSphereCenter, *_p_xSphereRadius, &stSphereCenterLocal, p_stLocalElementSphere->d_stListOfSpheres[i].xRadius);
            }
        }
    }
}

void COL_fn_vComputeBoundingSphereOfTwoSpheres(MTH3D_tdstVector_* _p_stReturnedSphereCenter, float* _p_xReturnedSphereRadius, MTH3D_tdstVector_* _p_stFirstSphereCenter, float _xFirstSphereRadius, MTH3D_tdstVector_* _p_stSecondSphereCenter, float _xSecondSphereRadius)
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

void COL_fn_vComputeBoundingSphereOfOneSphereAndOnePoint(MTH3D_tdstVector_* _p_stReturnedSphereCenter, float* _p_xReturnedSphereRadius, MTH3D_tdstVector_* _p_stFirstSphereCenter, float _xFirstSphereRadius, MTH3D_tdstVector_* _p_stSecondSphereCenter)
{
    float xAlpha;
    float xX, xY, xZ;
    float xSqrNorm;
    float xNorm;

    xX = _p_stFirstSphereCenter->xX - _p_stSecondSphereCenter->xX; xY = _p_stFirstSphereCenter->xY - _p_stSecondSphereCenter->xY; xZ = _p_stFirstSphereCenter->xZ - _p_stSecondSphereCenter->xZ;
    MTH_SQR3_TO(xSqrNorm, xX, xY, xZ) MTH_SQRT_TO(xNorm, xSqrNorm)
    if (xNorm <= _xFirstSphereRadius)
    {
        *(int*)&_p_stReturnedSphereCenter->xX = *(int*)&_p_stFirstSphereCenter->xX; *(int*)&_p_stReturnedSphereCenter->xY = *(int*)&_p_stFirstSphereCenter->xY; *(int*)&_p_stReturnedSphereCenter->xZ = *(int*)&_p_stFirstSphereCenter->xZ;

        *_p_xReturnedSphereRadius = _xFirstSphereRadius;
    }
    else
    {
        xAlpha = (1.0f - _xFirstSphereRadius / xNorm) / 2.0f;
        _p_stReturnedSphereCenter->xX = _p_stFirstSphereCenter->xX + xAlpha * (_p_stSecondSphereCenter->xX - _p_stFirstSphereCenter->xX); _p_stReturnedSphereCenter->xY = _p_stFirstSphereCenter->xY + xAlpha * (_p_stSecondSphereCenter->xY - _p_stFirstSphereCenter->xY); _p_stReturnedSphereCenter->xZ = _p_stFirstSphereCenter->xZ + xAlpha * (_p_stSecondSphereCenter->xZ - _p_stFirstSphereCenter->xZ);
        *_p_xReturnedSphereRadius = (xNorm + _xFirstSphereRadius) / 2.0f;
    }
}

void COL_fn_vGetInfoFromGeometricSphere(MTH3D_tdstVector_* _p_stSphereCenter, float* _p_xSphereRadius, COL_tdstCollideObject_* _hBoundingVolume)
{
    COL_tdstIndexedSphere_* p_stOneSphere;
    MTH3D_tdstVector_* p_stCenter;
    p_stOneSphere = (*(COL_tdstElementSpheres_***)&_hBoundingVolume->d_stListOfElements)[0]->d_stListOfSpheres;
    p_stCenter = &_hBoundingVolume->d_stListOfPoints[p_stOneSphere->xCenterPoint];
    ((int*)_p_stSphereCenter)[0] = ((int*)p_stCenter)[0];
    ((int*)_p_stSphereCenter)[1] = ((int*)p_stCenter)[1];
    ((int*)_p_stSphereCenter)[2] = ((int*)p_stCenter)[2];
    *_p_xSphereRadius = p_stOneSphere->xRadius;
}

MTH3D_tdstVector_* COL_fn_pGetMaxPointOfParallelBox(COL_tdstParallelBox_* _p_stParallelBox)
{
    return (MTH3D_tdstVector_*)((unsigned char*)_p_stParallelBox + 0x10);
}

MTH3D_tdstVector_* COL_fn_pGetMinPointOfParallelBox(COL_tdstParallelBox_* _p_stParallelBox)
{
    return (MTH3D_tdstVector_*)_p_stParallelBox;
}

#define MTH3D_M_vCopyVector(_d, _s) { *(int*)&(_d)->xX = *(int*)&(_s)->xX; *(int*)&(_d)->xY = *(int*)&(_s)->xY; *(int*)&(_d)->xZ = *(int*)&(_s)->xZ; }

void COL_vGetNormalOfGeometricObjectElement(COL_tdstCollideObject_* hObject, short xElementIndex, short xDataElementIndex, MTH3D_tdstVector_* p_stNormal)
{
    COL_tdstElementIndexedTriangles_* param0;

    p_stNormal->xX = 0.0f; p_stNormal->xY = 0.0f; p_stNormal->xZ = 0.0f;

    switch (*(short*)(hObject->d_xListOfElementsTypes + xElementIndex * 2)) {
        case 1:
            param0 = *(COL_tdstElementIndexedTriangles_**)(hObject->d_stListOfElements + xElementIndex * 4);
            MTH3D_M_vCopyVector(p_stNormal, &param0->d_stListOfFacesNormals[xDataElementIndex]);
            break;
    }
}

#pragma auto_inline on
short COL_xGetParallelBoxIndexOfElement(COL_tdstCollideObject_* hObject, short xIndexElement)
{
    switch (((short*)hObject->d_xListOfElementsTypes)[xIndexElement])
    {
    case 1:
        return ((COL_tdstElementIndexedTriangles_**)hObject->d_stListOfElements)[xIndexElement]->xIndexOfParallelBox;
    case 7:
        return ((COL_tdstElementAlignedBoxes_**)hObject->d_stListOfElements)[xIndexElement]->xIndexOfParallelBox;
    case 8:
        return ((COL_tdstElementSpheres_**)hObject->d_stListOfElements)[xIndexElement]->xIndexOfParallelBox;
    }
    return -1;
}
#pragma auto_inline reset

short COL_xGetCollideObjectNumberOfElementsMax(COL_tdstCollideObject_* hObject)
{
    return hObject->xNbElements;
}

short COL_xGetCollideObjectNumberOfPoints(COL_tdstCollideObject_* hObject)
{
    return hObject->xNbPoints;
}

void COL_vCreateCollideObject(COL_tdstCollideObject_** p_hObject, short xNbPoints, short xNbElements)
{
    COL_tdstCollideObject_* hObject;
    short xNb;
    short i;
    COL_tdstCollideObject_* p_stObj;

    hObject = (COL_tdstCollideObject_*)HMU_fn_p_vMalloc(sizeof(COL_tdstCollideObject_), 0); hObject->xNbElements = xNbElements; hObject->xNbPoints = xNbPoints; hObject->d_xListOfElementsTypes = (int)HMU_fn_p_vMalloc(xNbElements * sizeof(short), 0); hObject->d_stListOfElements = (int)HMU_fn_p_vMalloc(xNbElements * 4, 0); hObject->d_stListOfPoints = (MTH3D_tdstVector_*)HMU_fn_p_vMalloc(xNbPoints * sizeof(MTH3D_tdstVector_), 0); *p_hObject = hObject;
    p_stObj = *p_hObject; xNb = p_stObj->xNbElements; for (i = 0; i < xNb; i++) { ((short*)p_stObj->d_xListOfElementsTypes)[i] = 0; } p_stObj->p_stOctree = NULL; p_stObj->xNbParallelBoxes = 0; p_stObj->d_stListOfParallelBoxes = NULL; p_stObj->xBoudingSphereRadius = 0.0f; p_stObj->xBoudingSphereCenter.xX = 0.0f; p_stObj->xBoudingSphereCenter.xY = 0.0f; p_stObj->xBoudingSphereCenter.xZ = 0.0f;
}

void COL_vGetPointOfObject(COL_tdstCollideObject_* hObject, MTH3D_tdstVector_* p_stPoint, short xIndexOfPoint)
{
    *p_stPoint = hObject->d_stListOfPoints[xIndexOfPoint];
}

void COL_vSetPointOfObject(COL_tdstCollideObject_* hObject, MTH3D_tdstVector_* p_stPoint, short xIndexOfPoint)
{
    hObject->d_stListOfPoints[xIndexOfPoint] = *p_stPoint;
}

short COL_xGetElementType(COL_tdstCollideObject_* hObject, short xElement)
{
    return *(short*)(hObject->d_xListOfElementsTypes + xElement * 2);
}

void COL_vEndModifyObject(COL_tdstCollideObject_* hObject)
{
    short xIndex;

    if (hObject->xNbParallelBoxes != 0) { if (hObject->d_stListOfParallelBoxes == NULL) { COL_vCreateObjectListOfParallelBox(hObject, hObject->xNbParallelBoxes); xIndex = 0; } for (xIndex = 0; xIndex < hObject->xNbParallelBoxes; xIndex++) { COL_vComputeObjectParallelBox(hObject, xIndex); } }

    hObject->xBoudingSphereCenter.xX = hObject->d_stListOfPoints[0].xX;
    hObject->xBoudingSphereCenter.xY = hObject->d_stListOfPoints[0].xY;
    hObject->xBoudingSphereCenter.xZ = hObject->d_stListOfPoints[0].xZ;
    hObject->xBoudingSphereCenter.xW = 1.0f;
    hObject->xBoudingSphereRadius = 0.0f;
    COL_fn_vAddObjectToSphere(hObject, &hObject->xBoudingSphereCenter, &hObject->xBoudingSphereRadius);
}

void COL_vComputeObjectParallelBox(COL_tdstCollideObject_* hObject, short xParallelBox)
{
    COL_tdstElementIndexedTriangles_* p_stETIT;
    COL_tdstElementSpheres_* p_stES;
    COL_tdstElementAlignedBoxes_* p_stEAB;
    short xIndexElement;
    short xIndexInElement;
    MTH3D_tdstVector_* p_stMinPoint;
    MTH3D_tdstVector_* p_stMaxPoint;
    COL_tdstParallelBox_* hParallelBox;
    int bInit;

    hParallelBox = hObject->d_stListOfParallelBoxes + xParallelBox;
    p_stMinPoint = (MTH3D_tdstVector_*)&hParallelBox->stMinPoint;
    p_stMaxPoint = (MTH3D_tdstVector_*)&hParallelBox->stMaxPoint;

    bInit = 0;

    for (xIndexElement = 0; xIndexElement < hObject->xNbElements; xIndexElement++)
    {
        if (COL_xGetParallelBoxIndexOfElement(hObject, xIndexElement) == xParallelBox)
        {
            switch (((short*)hObject->d_xListOfElementsTypes)[xIndexElement])
            {
            case 1:
                p_stETIT = ((COL_tdstElementIndexedTriangles_**)hObject->d_stListOfElements)[xIndexElement];
                if (!bInit && p_stETIT->xNbFaces)
                {
                    *(int*)&p_stMinPoint->xX = *(int*)&hObject->d_stListOfPoints[p_stETIT->d_stListOfFacesTripled[0].a3_xIndex[0]].xX;
                    *(int*)&p_stMinPoint->xY = *(int*)&hObject->d_stListOfPoints[p_stETIT->d_stListOfFacesTripled[0].a3_xIndex[0]].xY;
                    *(int*)&p_stMinPoint->xZ = *(int*)&hObject->d_stListOfPoints[p_stETIT->d_stListOfFacesTripled[0].a3_xIndex[0]].xZ;
                    *(int*)&p_stMaxPoint->xX = *(int*)&hObject->d_stListOfPoints[p_stETIT->d_stListOfFacesTripled[0].a3_xIndex[0]].xX;
                    *(int*)&p_stMaxPoint->xY = *(int*)&hObject->d_stListOfPoints[p_stETIT->d_stListOfFacesTripled[0].a3_xIndex[0]].xY;
                    *(int*)&p_stMaxPoint->xZ = *(int*)&hObject->d_stListOfPoints[p_stETIT->d_stListOfFacesTripled[0].a3_xIndex[0]].xZ;
                    bInit = 1;
                }
                for (xIndexInElement = 0; xIndexInElement < p_stETIT->xNbFaces; xIndexInElement++)
                {
                    COL_fn_vUpdateMinMaxBoxWithPoint(p_stMinPoint, p_stMaxPoint, &hObject->d_stListOfPoints[p_stETIT->d_stListOfFacesTripled[xIndexInElement].a3_xIndex[0]]);
                    COL_fn_vUpdateMinMaxBoxWithPoint(p_stMinPoint, p_stMaxPoint, &hObject->d_stListOfPoints[p_stETIT->d_stListOfFacesTripled[xIndexInElement].a3_xIndex[1]]);
                    COL_fn_vUpdateMinMaxBoxWithPoint(p_stMinPoint, p_stMaxPoint, &hObject->d_stListOfPoints[p_stETIT->d_stListOfFacesTripled[xIndexInElement].a3_xIndex[2]]);
                }
                break;

            case 7:
                p_stES = ((COL_tdstElementSpheres_**)hObject->d_stListOfElements)[xIndexElement];
                if (!bInit && p_stES->xNbSpheres)
                {
                    *(int*)&p_stMinPoint->xX = *(int*)&hObject->d_stListOfPoints[p_stES->d_stListOfSpheres[0].xCenterPoint].xX;
                    *(int*)&p_stMinPoint->xY = *(int*)&hObject->d_stListOfPoints[p_stES->d_stListOfSpheres[0].xCenterPoint].xY;
                    *(int*)&p_stMinPoint->xZ = *(int*)&hObject->d_stListOfPoints[p_stES->d_stListOfSpheres[0].xCenterPoint].xZ;
                    *(int*)&p_stMaxPoint->xX = *(int*)&hObject->d_stListOfPoints[p_stES->d_stListOfSpheres[0].xCenterPoint].xX;
                    *(int*)&p_stMaxPoint->xY = *(int*)&hObject->d_stListOfPoints[p_stES->d_stListOfSpheres[0].xCenterPoint].xY;
                    *(int*)&p_stMaxPoint->xZ = *(int*)&hObject->d_stListOfPoints[p_stES->d_stListOfSpheres[0].xCenterPoint].xZ;
                    bInit = 1;
                }
                for (xIndexInElement = 0; xIndexInElement < p_stES->xNbSpheres; xIndexInElement++)
                {
                    COL_fn_vUpdateMinMaxBoxWithPoint(p_stMinPoint, p_stMaxPoint, &hObject->d_stListOfPoints[p_stES->d_stListOfSpheres[xIndexInElement].xCenterPoint]);
                }
                break;

            case 8:
                p_stEAB = ((COL_tdstElementAlignedBoxes_**)hObject->d_stListOfElements)[xIndexElement];
                if (!bInit && p_stEAB->xNbAlignedBoxes)
                {
                    *(int*)&p_stMinPoint->xX = *(int*)&hObject->d_stListOfPoints[p_stEAB->d_stListOfAlignedBoxes[0].xMinPoint].xX;
                    *(int*)&p_stMinPoint->xY = *(int*)&hObject->d_stListOfPoints[p_stEAB->d_stListOfAlignedBoxes[0].xMinPoint].xY;
                    *(int*)&p_stMinPoint->xZ = *(int*)&hObject->d_stListOfPoints[p_stEAB->d_stListOfAlignedBoxes[0].xMinPoint].xZ;
                    *(int*)&p_stMaxPoint->xX = *(int*)&hObject->d_stListOfPoints[p_stEAB->d_stListOfAlignedBoxes[0].xMinPoint].xX;
                    *(int*)&p_stMaxPoint->xY = *(int*)&hObject->d_stListOfPoints[p_stEAB->d_stListOfAlignedBoxes[0].xMinPoint].xY;
                    *(int*)&p_stMaxPoint->xZ = *(int*)&hObject->d_stListOfPoints[p_stEAB->d_stListOfAlignedBoxes[0].xMinPoint].xZ;
                    bInit = 1;
                }
                for (xIndexInElement = 0; xIndexInElement < p_stEAB->xNbAlignedBoxes; xIndexInElement++)
                {
                    COL_fn_vUpdateMinMaxBoxWithPoint(p_stMinPoint, p_stMaxPoint, &hObject->d_stListOfPoints[p_stEAB->d_stListOfAlignedBoxes[xIndexInElement].xMinPoint]);
                    COL_fn_vUpdateMinMaxBoxWithPoint(p_stMinPoint, p_stMaxPoint, &hObject->d_stListOfPoints[p_stEAB->d_stListOfAlignedBoxes[xIndexInElement].xMaxPoint]);
                }
                break;
            }
        }
    }
}

void COL_vCreateObjectListOfParallelBox(COL_tdstCollideObject_* hObject, short xNumberOfParallelBoxes)
{
    short xIndex;

    hObject->xNbParallelBoxes = xNumberOfParallelBoxes;
    if (hObject->xNbParallelBoxes != 0)
    {
        if (hObject->d_stListOfParallelBoxes == NULL)
        {
            hObject->d_stListOfParallelBoxes = (COL_tdstParallelBox_*)HMU_fn_p_vMalloc(hObject->xNbParallelBoxes * sizeof(COL_tdstParallelBox_), 0);
            for (xIndex = 0; xIndex < hObject->xNbParallelBoxes; xIndex++)
            {
                hObject->d_stListOfParallelBoxes[xIndex].stMinPoint.xX = 3.402822e38f; hObject->d_stListOfParallelBoxes[xIndex].stMinPoint.xY = 3.402822e38f; hObject->d_stListOfParallelBoxes[xIndex].stMinPoint.xZ = 3.402822e38f;
                hObject->d_stListOfParallelBoxes[xIndex].stMaxPoint.xX = -3.402822e38f; hObject->d_stListOfParallelBoxes[xIndex].stMaxPoint.xY = -3.402822e38f; hObject->d_stListOfParallelBoxes[xIndex].stMaxPoint.xZ = -3.402822e38f;
            }
        }
    }
}

void COL_fn_vUpdateMinMaxBoxWithPoint(MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, MTH3D_tdstVector_* p_stPoint)
{
    if (p_stPoint->xX < p_stMinPoint->xX)
    {
        p_stMinPoint->xX = p_stPoint->xX;
    }
    else if (p_stPoint->xX > p_stMaxPoint->xX)
    {
        p_stMaxPoint->xX = p_stPoint->xX;
    }
    if (p_stPoint->xY < p_stMinPoint->xY)
    {
        p_stMinPoint->xY = p_stPoint->xY;
    }
    else if (p_stPoint->xY > p_stMaxPoint->xY)
    {
        p_stMaxPoint->xY = p_stPoint->xY;
    }
    if (p_stPoint->xZ < p_stMinPoint->xZ)
    {
        p_stMinPoint->xZ = p_stPoint->xZ;
    }
    else if (p_stPoint->xZ > p_stMaxPoint->xZ)
    {
        p_stMaxPoint->xZ = p_stPoint->xZ;
    }
}
