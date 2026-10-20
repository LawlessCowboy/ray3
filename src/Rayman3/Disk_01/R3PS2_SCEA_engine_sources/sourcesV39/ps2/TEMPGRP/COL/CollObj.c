/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

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
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct COL_tdstDoubledIndex_ COL_tdstDoubledIndex_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;

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

struct COL_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
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

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    COL_tdstOctree_* p_stOctree; /* +0x14 */
    COL_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    float xBoudingSphereRadius; /* +0x1c */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x20 */
};

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
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

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
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

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

static int gs_pstGeoObject;
static int gs_aGeoITElements[25];
int gs_hVisualMaterial;

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void COL_vComputeObjectParallelBox(COL_tdstCollideObject_* hObject, short xParallelBox);
void COL_vCreateObjectListOfParallelBox(COL_tdstCollideObject_* hObject, short xNumberOfParallelBoxes);
void COL_fn_vComputeBoundingSphereOfOneSphereAndOnePoint(MTH3D_tdstVector_* p_stReturnedSphereCenter, float* p_xReturnedSphereRadius, MTH3D_tdstVector_* p_stFirstSphereCenter, float xFirstSphereRadius, MTH3D_tdstVector_* p_stSecondSphereCenter);
void COL_fn_vComputeBoundingSphereOfTwoSpheres(MTH3D_tdstVector_* p_stReturnedSphereCenter, float* p_xReturnedSphereRadius, MTH3D_tdstVector_* p_stFirstSphereCenter, float xFirstSphereRadius, MTH3D_tdstVector_* p_stSecondSphereCenter, float xSecondSphereRadius);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1820–1912 */
/* addr: 0x0024da20  size: 652 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1820
 *   +0x0004 -> line 1847
 *   +0x0008 -> line 1820
 *   +0x000c -> line 1847
 *   +0x0010 -> line 1820
 *   +0x0014 -> line 1847
 *   +0x0018 -> line 1820
 *   +0x001c -> line 1847
 *   +0x0020 -> line 1820
 *   +0x0040 -> line 1831
 *   +0x0044 -> line 1847
 *   +0x0048 -> line 1846
 *   +0x004c -> line 1832
 *   +0x0050 -> line 1833
 *   +0x0054 -> line 1835
 *   +0x0058 -> line 1836
 *   +0x005c -> line 1839
 *   +0x0060 -> line 1840
 *   +0x0064 -> line 1848
 *   +0x0074 -> line 1850
 *   +0x0080 -> line 1851
 *   +0x008c -> line 1852
 *   +0x0094 -> line 1854
 *   +0x00bc -> line 1857
 *   +0x00c4 -> line 1858
 *   +0x00c8 -> line 1857
 *   +0x00cc -> line 1859
 *   +0x00d0 -> line 1858
 *   +0x00dc -> line 1861
 *   +0x00f0 -> line 1863
 *   +0x0110 -> line 1868
 *   +0x0114 -> line 1869
 *   +0x0118 -> line 1868
 *   +0x011c -> line 1869
 *   +0x0130 -> line 1870
 *   +0x0138 -> line 1873
 *   +0x0144 -> line 1874
 *   +0x0150 -> line 1876
 *   +0x015c -> line 1877
 *   +0x016c -> line 1878
 *   +0x0170 -> line 1879
 *   +0x0178 -> line 1880
 *   +0x017c -> line 1879
 *   +0x0184 -> line 1880
 *   +0x0188 -> line 1881
 *   +0x0190 -> line 1886
 *   +0x0194 -> line 1887
 *   +0x0198 -> line 1886
 *   +0x019c -> line 1887
 *   +0x01a8 -> line 1888
 *   +0x01b0 -> line 1890
 *   +0x01b4 -> line 1891
 *   +0x01c0 -> line 1893
 *   +0x01cc -> line 1894
 *   +0x01d8 -> line 1895
 *   +0x01e8 -> line 1896
 *   +0x01f0 -> line 1899
 *   +0x01f8 -> line 1901
 *   +0x0204 -> line 1904
 *   +0x0208 -> line 1906
 *   +0x0220 -> line 1907
 *   +0x022c -> line 1908
 *   +0x0230 -> line 1909
 *   +0x0250 -> line 1910
 *   +0x0258 -> line 1911
 *   +0x025c -> line 1912
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
COL_tdstCollideObject_* COL_fn_hTransformTableOfObjectInOneObjectForGAM(COL_tdstCollideObject_* _hGeoObj, COL_tdstCollideObject_** a_hTableOfGeoObj, short xNbOfObjects)
{
    unsigned int ulSize;
    short* p_xCurrentElementTypeSource;
    short xNbSubElt;
    void** p_hCurrentElementSourceEnd;
    void** p_hCurrentElementSource;
    COL_tdstCollideObject_** p_hGeoObjInTableEnd;
    COL_tdstCollideObject_** p_hGeoObjInTableAtIndex;
    COL_tdstIndexedAlignedBox_* p_stIBTargetEnd;
    COL_tdstIndexedAlignedBox_* p_stIBTarget;
    COL_tdstElementAlignedBoxes_* p_stEBTarget;
    COL_tdstIndexedSphere_* param0;
    COL_tdstIndexedSphere_* p_stISTargetEnd;
    COL_tdstIndexedSphere_* p_stISTarget;
    COL_tdstElementSpheres_* p_stESTarget;
    short xNbP;
    short xNbPoints;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1758–1799 */
/* addr: 0x0024dcb0  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1758
 *   +0x0038 -> line 1765
 *   +0x003c -> line 1766
 *   +0x0044 -> line 1768
 *   +0x005c -> line 1777
 *   +0x0078 -> line 1780
 *   +0x0088 -> line 1781
 *   +0x00a0 -> line 1783
 *   +0x00a4 -> line 1784
 *   +0x00a8 -> line 1783
 *   +0x00b0 -> line 1784
 *   +0x00b8 -> line 1786
 *   +0x00c4 -> line 1788
 *   +0x00cc -> line 1786
 *   +0x00fc -> line 1788
 *   +0x0118 -> line 1797
 *   +0x0138 -> line 1798
 *   +0x0150 -> line 1799
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1721–1742 */
/* addr: 0x0024de30  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1721
 *   +0x0024 -> line 1722
 *   +0x0038 -> line 1723
 *   +0x004c -> line 1725
 *   +0x0064 -> line 1727
 *   +0x006c -> line 1729
 *   +0x007c -> line 1731
 *   +0x0094 -> line 1733
 *   +0x009c -> line 1738
 *   +0x00ac -> line 1740
 *   +0x00b0 -> line 1738
 *   +0x00c4 -> line 1739
 *   +0x00d4 -> line 1740
 *   +0x00d8 -> line 1739
 *   +0x0108 -> line 1740
 *   +0x010c -> line 1742
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1673–1688 */
/* addr: 0x0024df50  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1673
 *   +0x0024 -> line 1674
 *   +0x003c -> line 1675
 *   +0x004c -> line 1677
 *   +0x0064 -> line 1679
 *   +0x006c -> line 1684
 *   +0x0084 -> line 1685
 *   +0x0090 -> line 1686
 *   +0x0094 -> line 1685
 *   +0x00a0 -> line 1686
 *   +0x00a4 -> line 1685
 *   +0x00cc -> line 1686
 *   +0x00d0 -> line 1688
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1620–1625 */
/* addr: 0x0024e030  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1620
 *   +0x0004 -> line 1621
 *   +0x0008 -> line 1620
 *   +0x0010 -> line 1621
 *   +0x0024 -> line 1623
 *   +0x003c -> line 1624
 *   +0x0040 -> line 1625
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1593–1593 */
/* addr: 0x0024e080  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1593
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MTH3D_tdstVector_* COL_fn_pGetMaxPointOfParallelBox(COL_tdstParallelBox_* _p_stParallelBox)
{
    return (MTH3D_tdstVector_*)((unsigned char*)_p_stParallelBox + 0x10);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1578–1578 */
/* addr: 0x0024e090  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1578
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MTH3D_tdstVector_* COL_fn_pGetMinPointOfParallelBox(COL_tdstParallelBox_* _p_stParallelBox)
{
    return (MTH3D_tdstVector_*)_p_stParallelBox;
}

#define MTH3D_M_vCopyVector(_d, _s) { *(int*)&(_d)->xX = *(int*)&(_s)->xX; *(int*)&(_d)->xY = *(int*)&(_s)->xY; *(int*)&(_d)->xZ = *(int*)&(_s)->xZ; }

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1533–1543 */
/* addr: 0x0024e0a0  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1533
 *   +0x0004 -> line 1535
 *   +0x0008 -> line 1533
 *   +0x000c -> line 1535
 *   +0x0010 -> line 1533
 *   +0x0014 -> line 1535
 *   +0x0038 -> line 1538
 *   +0x0040 -> line 1540
 *   +0x0054 -> line 1538
 *   +0x005c -> line 1540
 *   +0x008c -> line 1543
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1509–1522 */
/* addr: 0x0024e140  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1509
 *   +0x0040 -> line 1512
 *   +0x0058 -> line 1515
 *   +0x0070 -> line 1518
 *   +0x0088 -> line 1522
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1494–1494 */
/* addr: 0x0024e1d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1494
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short COL_xGetCollideObjectNumberOfElementsMax(COL_tdstCollideObject_* hObject)
{
    return hObject->xNbElements;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1479–1479 */
/* addr: 0x0024e1e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1479
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short COL_xGetCollideObjectNumberOfPoints(COL_tdstCollideObject_* hObject)
{
    return hObject->xNbPoints;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1404–1407 */
/* addr: 0x0024e1f0  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1404
 *   +0x0018 -> line 1405
 *   +0x001c -> line 1404
 *   +0x0028 -> line 1405
 *   +0x0088 -> line 1406
 *   +0x018c -> line 1407
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_vCreateCollideObject(COL_tdstCollideObject_** p_hObject, short xNbPoints, short xNbElements)
{
    COL_tdstCollideObject_* hObject;
    short xNb;
    short i;
    COL_tdstCollideObject_* p_stObj;

    hObject = (COL_tdstCollideObject_*)HMU_fn_p_vMalloc(sizeof(COL_tdstCollideObject_), 0); hObject->xNbElements = xNbElements; hObject->xNbPoints = xNbPoints; hObject->d_xListOfElementsTypes = (int)HMU_fn_p_vMalloc(xNbElements * sizeof(short), 0); hObject->d_stListOfElements = (int)HMU_fn_p_vMalloc(xNbElements * 4, 0); hObject->d_stListOfPoints = (MTH3D_tdstVector_*)HMU_fn_p_vMalloc(xNbPoints * sizeof(MTH3D_tdstVector_), 0); *p_hObject = hObject;
    p_stObj = *p_hObject; xNb = p_stObj->xNbElements; for (i = 0; i < xNb; i++) { ((short*)p_stObj->d_xListOfElementsTypes)[i] = 0; } p_stObj->p_stOctree = NULL; p_stObj->xNbParallelBoxes = 0; p_stObj->d_stListOfParallelBoxes = NULL; p_stObj->xBoudingSphereRadius = 0.0f; p_stObj->xBoudingSphereCenter.xX = 0.0f; p_stObj->xBoudingSphereCenter.xY = 0.0f; p_stObj->xBoudingSphereCenter.xZ = 0.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1389–1390 */
/* addr: 0x0024e3a0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1389
 *   +0x0030 -> line 1390
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_vGetPointOfObject(COL_tdstCollideObject_* hObject, MTH3D_tdstVector_* p_stPoint, short xIndexOfPoint)
{
    *p_stPoint = hObject->d_stListOfPoints[xIndexOfPoint];
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1368–1369 */
/* addr: 0x0024e3e0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1368
 *   +0x0030 -> line 1369
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_vSetPointOfObject(COL_tdstCollideObject_* hObject, MTH3D_tdstVector_* p_stPoint, short xIndexOfPoint)
{
    hObject->d_stListOfPoints[xIndexOfPoint] = *p_stPoint;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1352–1353 */
/* addr: 0x0024e420  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1352
 *   +0x0014 -> line 1353
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short COL_xGetElementType(COL_tdstCollideObject_* hObject, short xElement)
{
    return *(short*)(hObject->d_xListOfElementsTypes + xElement * 2);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 1179–1193 */
/* addr: 0x0024e440  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1179
 *   +0x0010 -> line 1180
 *   +0x0068 -> line 1183
 *   +0x006c -> line 1186
 *   +0x0070 -> line 1192
 *   +0x007c -> line 1183
 *   +0x0084 -> line 1184
 *   +0x0090 -> line 1185
 *   +0x009c -> line 1186
 *   +0x00a0 -> line 1192
 *   +0x00a8 -> line 1193
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 206–272 */
/* addr: 0x0024e500  size: 1632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 206
 *   +0x0004 -> line 216
 *   +0x0008 -> line 206
 *   +0x000c -> line 216
 *   +0x0010 -> line 206
 *   +0x0018 -> line 221
 *   +0x001c -> line 206
 *   +0x0040 -> line 216
 *   +0x0058 -> line 215
 *   +0x005c -> line 221
 *   +0x0064 -> line 223
 *   +0x00fc -> line 225
 *   +0x0124 -> line 227
 *   +0x0128 -> line 228
 *   +0x0134 -> line 229
 *   +0x014c -> line 233
 *   +0x0150 -> line 231
 *   +0x01bc -> line 232
 *   +0x0228 -> line 235
 *   +0x0238 -> line 237
 *   +0x0264 -> line 238
 *   +0x0290 -> line 239
 *   +0x02bc -> line 240
 *   +0x02c0 -> line 239
 *   +0x02c4 -> line 240
 *   +0x02e8 -> line 241
 *   +0x02f0 -> line 243
 *   +0x02fc -> line 244
 *   +0x0314 -> line 246
 *   +0x0318 -> line 248
 *   +0x0320 -> line 246
 *   +0x0388 -> line 247
 *   +0x03f4 -> line 249
 *   +0x03f8 -> line 250
 *   +0x0408 -> line 252
 *   +0x0434 -> line 253
 *   +0x0438 -> line 252
 *   +0x043c -> line 253
 *   +0x0460 -> line 254
 *   +0x0468 -> line 256
 *   +0x0474 -> line 257
 *   +0x048c -> line 259
 *   +0x0490 -> line 261
 *   +0x0498 -> line 259
 *   +0x0500 -> line 260
 *   +0x056c -> line 262
 *   +0x0570 -> line 263
 *   +0x0580 -> line 265
 *   +0x05ac -> line 266
 *   +0x05d8 -> line 267
 *   +0x05dc -> line 266
 *   +0x05e0 -> line 267
 *   +0x0600 -> line 271
 *   +0x0608 -> line 267
 *   +0x0610 -> line 271
 *   +0x0630 -> line 272
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_vComputeObjectParallelBox(COL_tdstCollideObject_* hObject, short xParallelBox)
{
    int bInit;
    COL_tdstParallelBox_* hParallelBox;
    MTH3D_tdstVector_* p_stMaxPoint;
    MTH3D_tdstVector_* p_stMinPoint;
    short xIndexInElement;
    short xIndexElement;
    COL_tdstElementAlignedBoxes_* p_stEAB;
    COL_tdstElementSpheres_* p_stES;
    COL_tdstElementIndexedTriangles_* p_stETIT;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 174–196 */
/* addr: 0x0024eb60  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 174
 *   +0x000c -> line 177
 *   +0x0014 -> line 179
 *   +0x0020 -> line 182
 *   +0x002c -> line 189
 *   +0x0038 -> line 191
 *   +0x003c -> line 189
 *   +0x0040 -> line 191
 *   +0x0058 -> line 193
 *   +0x005c -> line 195
 *   +0x0068 -> line 193
 *   +0x0088 -> line 194
 *   +0x00b0 -> line 195
 *   +0x00c8 -> line 196
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */

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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollObj.c lines 48–72 */
/* addr: 0x0024ec40  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 48
 *   +0x0018 -> line 51
 *   +0x0020 -> line 52
 *   +0x0034 -> line 54
 *   +0x0038 -> line 56
 *   +0x0050 -> line 59
 *   +0x0058 -> line 60
 *   +0x006c -> line 62
 *   +0x0070 -> line 64
 *   +0x0088 -> line 67
 *   +0x0090 -> line 68
 *   +0x00a4 -> line 70
 *   +0x00a8 -> line 72
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
