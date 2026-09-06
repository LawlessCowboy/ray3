/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct COL_tdstElementSpheres_ COL_tdstElementSpheres_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct COL_tdstElementIndexedTriangles_ COL_tdstElementIndexedTriangles_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct COL_tdstElementAlignedBoxes_ COL_tdstElementAlignedBoxes_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct COL_tdstTripledIndex_ COL_tdstTripledIndex_;
typedef struct COL_tdstIndexedSphere_ COL_tdstIndexedSphere_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct COL_tdstIndexedAlignedBox_ COL_tdstIndexedAlignedBox_;

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct COL_tdstElementSpheres_ {
    COL_tdstIndexedSphere_* d_stListOfSpheres; /* +0x0 */
    short xNbSpheres; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct COL_tdstElementAlignedBoxes_ {
    COL_tdstIndexedAlignedBox_* d_stListOfAlignedBoxes; /* +0x0 */
    short xNbAlignedBoxes; /* +0x4 */
    short xIndexOfParallelBox; /* +0x6 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct COL_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct COL_tdstIndexedSphere_ {
    float xRadius; /* +0x0 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
    short xCenterPoint; /* +0x8 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct COL_tdstIndexedAlignedBox_ {
    short xMinPoint; /* +0x0 */
    short xMaxPoint; /* +0x2 */
    GMT_tdstGameMaterial_* hMaterial; /* +0x4 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c lines 616–617 */
/* addr: 0x0024c940  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 616
 *   +0x0018 -> line 617
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short COL_lGetAlignedBoxNbBoxes(COL_tdstCollideObject_* hObject, short hElement)
{
    COL_tdstElementAlignedBoxes_* pElement;

    pElement = (*(COL_tdstElementAlignedBoxes_***)&hObject->d_stListOfElements)[hElement];
    return *(short *)((char *)pElement->d_stListOfAlignedBoxes + 4);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c lines 610–612 */
/* addr: 0x0024c960  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 610
 *   +0x0030 -> line 612
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GMT_tdstGameMaterial_* COL_hGetGameMaterialOfIndexedAlignedBox(COL_tdstCollideObject_* hObject, short hElement, short xNumberOfAlignedBox)
{
    COL_tdstElementAlignedBoxes_* pElement;
    COL_tdstIndexedAlignedBox_* pBox;
    pElement = (*(COL_tdstElementAlignedBoxes_***)&hObject->d_stListOfElements)[hElement];
    pBox = pElement->d_stListOfAlignedBoxes;
    return pBox[xNumberOfAlignedBox].hMaterial;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c lines 586–590 */
/* addr: 0x0024c9a0  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 586
 *   +0x0034 -> line 588
 *   +0x0050 -> line 590
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_vGetMinMaxPointOfIndexedAlignedBox(COL_tdstCollideObject_* hObject, short hElement, short xNumberOfAlignedBox, short* p_xMinPoint, short* p_xMaxPoint)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c lines 507–525 */
/* addr: 0x0024ca00  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 507
 *   +0x0020 -> line 514
 *   +0x0030 -> line 515
 *   +0x0048 -> line 516
 *   +0x0068 -> line 519
 *   +0x0070 -> line 522
 *   +0x0084 -> line 523
 *   +0x0088 -> line 524
 *   +0x00c8 -> line 525
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_vCreateElementAlignedBoxes(COL_tdstCollideObject_* hObject, short* p_hElement, short xNbAlignedBoxes)
{
    short xElementToBuild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c lines 427–428 */
/* addr: 0x0024caf0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 427
 *   +0x0034 -> line 428
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_vSetRadiusOfIndexedSphere(COL_tdstCollideObject_* hObject, short hElement, short xNumberOfSphere, float xRadius)
{
    (*(COL_tdstElementSpheres_***)&hObject->d_stListOfElements)[hElement]->d_stListOfSpheres[xNumberOfSphere].xRadius = xRadius;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c lines 369–370 */
/* addr: 0x0024cb30  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 369
 *   +0x0018 -> line 370
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short COL_lGetIndexedSphereNbSpheres(COL_tdstCollideObject_* _hObject, short hElement)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c lines 363–365 */
/* addr: 0x0024cb50  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 363
 *   +0x0038 -> line 365
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GMT_tdstGameMaterial_* COL_hGetGameMaterialOfIndexedSphere(COL_tdstCollideObject_* hObject, short hElement, short xNumberOfSphere)
{
    COL_tdstElementSpheres_* pElement;
    COL_tdstIndexedSphere_* pSphere;
    pElement = (*(COL_tdstElementSpheres_***)&hObject->d_stListOfElements)[hElement];
    pSphere = pElement->d_stListOfSpheres;
    return pSphere[xNumberOfSphere].hMaterial;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c lines 286–304 */
/* addr: 0x0024cb90  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 286
 *   +0x0004 -> line 293
 *   +0x0008 -> line 286
 *   +0x0024 -> line 293
 *   +0x0030 -> line 294
 *   +0x0048 -> line 295
 *   +0x0068 -> line 298
 *   +0x0070 -> line 301
 *   +0x007c -> line 303
 *   +0x0080 -> line 301
 *   +0x0088 -> line 302
 *   +0x008c -> line 303
 *   +0x00d4 -> line 304
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_vCreateElementSpheres(COL_tdstCollideObject_* hObject, short* p_hElement, short xNbSpheres)
{
    short xElementToBuild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollElts.c lines 201–204 */
/* addr: 0x0024cc80  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 201
 *   +0x001c -> line 204
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void COL_vGetGameMaterialOfIndexedTriangles(COL_tdstCollideObject_* hObject, short hElement, GMT_tdstGameMaterial_* p_hMaterial)
{
    *(GMT_tdstGameMaterial_**)p_hMaterial = (*(COL_tdstElementIndexedTriangles_***)&hObject->d_stListOfElements)[hElement]->hMaterial;
}
