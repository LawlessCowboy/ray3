/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct HIE_tdstPickInfo_ HIE_tdstPickInfo_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GLI_tdstDataOfElement_ GLI_tdstDataOfElement_;
typedef struct PIC_tdstPickedObject_ PIC_tdstPickedObject_;

typedef enum PIC_tdeModePicking_ {
    PIC_C_ModePickingFace = 0,
    PIC_C_ModePickingEdge = 1,
    PIC_C_ModePickingPoint = 2,
} PIC_tdeModePicking_;

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
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

union HIE_tduLinkedObject_ {
    HIE_tdstSuperObject_* p_stSuperObject; /* +0x0 */
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    PO_tdstPhysicalObject_* p_stPhysicalObject; /* +0x0 */
    IPO_tdstInstanciatedPhysicalObject_* p_stInstanciatedPhysicalObject; /* +0x0 */
    SECT_tdstSector_* p_stSector; /* +0x0 */
    tdstEngineObject_* p_stCharacter; /* +0x0 */
    GLI_tdstLight_* p_stLight; /* +0x0 */
    HIE_tdstModifierObject_* p_stModifierObject; /* +0x0 */
    int p_Void; /* +0x0 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GLI_tdstDataOfElement_ {
    MTH3D_tdstVector_ stHit;
    float xDistance;
    short xElements;
    short xIndexOfFace;
    short xIndexOfEdge;
    short xIndexOfPoint;
};

struct PIC_tdstPickedObject_ {
    PIC_tdeModePicking_ xModePicking;
    short xNbElements;
    GLI_tdstDataOfElement_ aDEF_stDataOfElement[3];
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    HIE_tduLinkedObject_ hLinkedObject; /* +0x4 */
    HIE_tdstSuperObject_* hFirstElementDyn; /* +0x8 */
    HIE_tdstSuperObject_* hLastElementDyn; /* +0xc */
    int lNumberOfElementsDyn; /* +0x10 */
    HIE_tdstSuperObject_* hNextBrotherDyn; /* +0x14 */
    HIE_tdstSuperObject_* hPrevBrotherDyn; /* +0x18 */
    HIE_tdstSuperObject_* hFatherDyn; /* +0x1c */
    MAT_tdstTransformation_* hLocalMatrix; /* +0x20 */
    MAT_tdstTransformation_* hGlobalMatrix; /* +0x24 */
    int lLastComputeFrame; /* +0x28 */
    int lDrawModeMask; /* +0x2c */
    unsigned int ulFlags; /* +0x30 */
    int hVisualBoundingVolume; /* +0x34 */
    int hCollideBoundingVolume; /* +0x38 */
    MTH3D_tdstVector_ stSemiLookAtVector; /* +0x3c */
    float fTransparenceLevel; /* +0x48 */
    unsigned int ulOutlineColor; /* +0x4c */
    int lDisplayPrioriry; /* +0x50 */
    int lIL_Status; /* +0x54 */
    MTH3D_tdstVector_ stIL_AmbientColor; /* +0x58 */
    MTH3D_tdstVector_ stIL_ParallelDirection; /* +0x64 */
    MTH3D_tdstVector_ stIL_ParallelColor; /* +0x70 */
    unsigned char ucSuperImposedOnWhichViewport; /* +0x7c */
    unsigned char bIsSPO; /* +0x7d */
    unsigned char xTransition; /* +0x7e */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
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

unsigned char g_ucContext;
unsigned int PS2_MatStackIndex;
MAT_tdstTransformation_ PS2_MatStack[51];
int g_pstMatrix;
unsigned char gd_ucContextOfSPOSave[32];
int HIE_gs_lCurrentFrame;
MAT_tdstTransformation_ Global_tempCamStackMatrix;
int HIE_g_hCurrentMatrix;
MAT_tdstTransformation_ HIE_g_a_stCameraMatrixStack[51];
int g_p_stCurrentMatrix;
int HIE_g_a_hMatrixStack[50];
int HIE_g_lNbMatrixInStack;
short g_xFixIndexSave;
short g_xFixIndex;
int gd_hFixSPO[32];
int gd_hFixSPOSave[32];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 654–907 */
/* addr: 0x00320e90  size: 1580 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 654
 *   +0x0038 -> line 675
 *   +0x003c -> line 672
 *   +0x0040 -> line 675
 *   +0x0048 -> line 677
 *   +0x0054 -> line 679
 *   +0x005c -> line 683
 *   +0x0060 -> line 687
 *   +0x0064 -> line 683
 *   +0x0068 -> line 687
 *   +0x0074 -> line 689
 *   +0x0084 -> line 690
 *   +0x008c -> line 694
 *   +0x00a8 -> line 696
 *   +0x00b0 -> line 707
 *   +0x00b4 -> line 700
 *   +0x00b8 -> line 701
 *   +0x00bc -> line 707
 *   +0x00c4 -> line 710
 *   +0x00cc -> line 712
 *   +0x00d8 -> line 715
 *   +0x00e0 -> line 716
 *   +0x00ec -> line 723
 *   +0x00f4 -> line 724
 *   +0x0100 -> line 725
 *   +0x0104 -> line 727
 *   +0x0140 -> line 728
 *   +0x0178 -> line 730
 *   +0x0180 -> line 734
 *   +0x0188 -> line 738
 *   +0x01a0 -> line 742
 *   +0x01a8 -> line 743
 *   +0x01b4 -> line 746
 *   +0x0218 -> line 747
 *   +0x0220 -> line 751
 *   +0x0244 -> line 755
 *   +0x0250 -> line 758
 *   +0x0260 -> line 762
 *   +0x0268 -> line 764
 *   +0x0270 -> line 766
 *   +0x0278 -> line 767
 *   +0x0298 -> line 768
 *   +0x02a0 -> line 770
 *   +0x02ac -> line 772
 *   +0x02bc -> line 786
 *   +0x02dc -> line 787
 *   +0x02e4 -> line 789
 *   +0x02ec -> line 791
 *   +0x02f8 -> line 794
 *   +0x0304 -> line 798
 *   +0x030c -> line 801
 *   +0x0354 -> line 803
 *   +0x0374 -> line 804
 *   +0x037c -> line 807
 *   +0x038c -> line 811
 *   +0x03f0 -> line 814
 *   +0x0404 -> line 811
 *   +0x041c -> line 814
 *   +0x0424 -> line 818
 *   +0x044c -> line 822
 *   +0x0458 -> line 825
 *   +0x0488 -> line 826
 *   +0x048c -> line 830
 *   +0x0490 -> line 827
 *   +0x0494 -> line 832
 *   +0x0498 -> line 828
 *   +0x04a0 -> line 830
 *   +0x04a4 -> line 832
 *   +0x04d8 -> line 833
 *   +0x04e0 -> line 838
 *   +0x04f8 -> line 842
 *   +0x0524 -> line 843
 *   +0x0528 -> line 847
 *   +0x052c -> line 844
 *   +0x0530 -> line 845
 *   +0x0538 -> line 847
 *   +0x0570 -> line 889
 *   +0x0594 -> line 892
 *   +0x05a0 -> line 895
 *   +0x05b8 -> line 903
 *   +0x05c4 -> line 904
 *   +0x05c8 -> line 905
 *   +0x05f8 -> line 906
 *   +0x0600 -> line 907
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short fn_xIntersectSegmentWithRepositioningSuperObject(MTH3D_tdstVector_* p_stVertexA, MTH3D_tdstVector_* p_stVectAB, HIE_tdstSuperObject_* _hSprObj, HIE_tdstPickInfo_* p_stPickInfo, short* p_xNbPickInfo)
{
    tdstPhysicalCollSet_* hCollSet;
    MTH3D_tdstVector_* p_stMaxPoint;
    MTH3D_tdstVector_* p_stMinPoint;
    unsigned int ulSpoFlags;
    HIE_tdstSuperObject_* hChild;
    unsigned char bIntersect;
    PIC_tdstPickedObject_ stPickedObject;
    COL_tdstCollideObject_* hSentObject;
    MTH3D_tdstVector_ stVectAB;
    MTH3D_tdstVector_ stVertexALocal;
    MAT_tdstTransformation_ stInvMatrix;
    int lType;
    MTH3D_tdstVector_ stMaxPoint;
    MTH3D_tdstVector_ stMinPoint;
    unsigned char bBoxBoundingVolume;
    COL_tdstParallelBox_* hParallelBox;
    COL_tdstBoundingSphere_* hBoundingSphere;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 730–730 */
/* addr: 0x003214c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 730
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MAT_tdstTransformation_* HIE_fn_pGetCurrentInCamCoordsMatrix(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 688–726 */
/* addr: 0x003214d0  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 688
 *   +0x0018 -> line 689
 *   +0x001c -> line 690
 *   +0x0020 -> line 691
 *   +0x0024 -> line 692
 *   +0x0028 -> line 693
 *   +0x002c -> line 694
 *   +0x0030 -> line 695
 *   +0x0034 -> line 696
 *   +0x0038 -> line 698
 *   +0x003c -> line 699
 *   +0x0040 -> line 700
 *   +0x0044 -> line 702
 *   +0x0048 -> line 703
 *   +0x004c -> line 704
 *   +0x0050 -> line 706
 *   +0x0054 -> line 707
 *   +0x0058 -> line 708
 *   +0x005c -> line 710
 *   +0x0060 -> line 711
 *   +0x0064 -> line 712
 *   +0x0068 -> line 713
 *   +0x006c -> line 715
 *   +0x0070 -> line 716
 *   +0x0074 -> line 717
 *   +0x0078 -> line 718
 *   +0x007c -> line 725
 *   +0x0080 -> line 723
 *   +0x0084 -> line 725
 *   +0x0088 -> line 723
 *   +0x008c -> line 726
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MAT_tdstTransformation_* HIE_fn_pGetCurrentInCamCoordsMatrixFastPS2(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 669–669 */
/* addr: 0x00321570  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 669
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vStartPS2MatStack(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 655–664 */
/* addr: 0x00321580  size: 288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 655
 *   +0x0008 -> line 657
 *   +0x0014 -> line 658
 *   +0x0018 -> line 657
 *   +0x001c -> line 661
 *   +0x0020 -> line 657
 *   +0x0024 -> line 661
 *   +0x0028 -> line 658
 *   +0x002c -> line 661
 *   +0x0030 -> line 659
 *   +0x0034 -> line 660
 *   +0x0038 -> line 661
 *   +0x00e4 -> line 657
 *   +0x00e8 -> line 661
 *   +0x00ec -> line 658
 *   +0x00f0 -> line 661
 *   +0x00f4 -> line 662
 *   +0x00f8 -> line 661
 *   +0x00fc -> line 662
 *   +0x0100 -> line 661
 *   +0x0110 -> line 662
 *   +0x0118 -> line 664
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vInitPS2MatStack(void)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 515–523 */
/* addr: 0x003216a0  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 515
 *   +0x001c -> line 519
 *   +0x0024 -> line 521
 *   +0x0030 -> line 522
 *   +0x00a0 -> line 523
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vApplyFunctionOnHierarchy(HIE_tdstSuperObject_* _hSprObj, void (*_fn_vApplyFunction)(HIE_tdstSuperObject_*))
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 504–512 */
/* addr: 0x00321760  size: 256 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 504
 *   +0x0004 -> line 508
 *   +0x0008 -> line 504
 *   +0x0018 -> line 508
 *   +0x0044 -> line 510
 *   +0x0050 -> line 511
 *   +0x00e8 -> line 512
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vInvalidateHierarchy(HIE_tdstSuperObject_* _hSprObj)
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 491–501 */
/* addr: 0x00321860  size: 800 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 491
 *   +0x0018 -> line 495
 *   +0x0114 -> line 497
 *   +0x0120 -> line 498
 *   +0x02d8 -> line 500
 *   +0x0308 -> line 501
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vRefreshHierarchy(HIE_tdstSuperObject_* _hSprObj)
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 472–483 */
/* addr: 0x00321b80  size: 584 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 472
 *   +0x000c -> line 473
 *   +0x008c -> line 474
 *   +0x0094 -> line 476
 *   +0x0150 -> line 477
 *   +0x0158 -> line 480
 *   +0x0218 -> line 482
 *   +0x0238 -> line 483
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vChangeFather(HIE_tdstSuperObject_* _hSprObj, HIE_tdstSuperObject_* _hNewFather, unsigned char _bAtHead)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 463–468 */
/* addr: 0x00321dd0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 463
 *   +0x000c -> line 466
 *   +0x0020 -> line 467
 *   +0x0030 -> line 468
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vComputeNewRelativeMatrix(HIE_tdstSuperObject_* _hSprObj)
{
    MAT_tdstTransformation_ stLocalMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 423–437 */
/* addr: 0x00321e10  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 423
 *   +0x0010 -> line 424
 *   +0x003c -> line 426
 *   +0x0088 -> line 427
 *   +0x0090 -> line 430
 *   +0x00b4 -> line 434
 *   +0x0104 -> line 435
 *   +0x010c -> line 437
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vPushMatrix(HIE_tdstSuperObject_* _hSprObj)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 416–420 */
/* addr: 0x00321f30  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 416
 *   +0x000c -> line 417
 *   +0x0014 -> line 419
 *   +0x0018 -> line 420
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vInitGlobalMatrixFrameCounter(int lValue)
{
    if (lValue != -1)
        HIE_gs_lCurrentFrame = lValue;
    else
        HIE_gs_lCurrentFrame = lValue + 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 393–406 */
/* addr: 0x00321f50  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 393
 *   +0x0010 -> line 398
 *   +0x001c -> line 400
 *   +0x0020 -> line 401
 *   +0x0028 -> line 404
 *   +0x0030 -> line 406
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vInvalidateOneGlobalMatrix(HIE_tdstSuperObject_* _hSprObj)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 386–388 */
/* addr: 0x00321f90  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 386
 *   +0x0004 -> line 387
 *   +0x0008 -> line 386
 *   +0x0010 -> line 387
 *   +0x0020 -> line 388
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vInvalidateAllGlobalMatrices(void)
{
    HIE_gs_lCurrentFrame++;
    if (HIE_gs_lCurrentFrame == -1)
        HIE_gs_lCurrentFrame++;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 380–382 */
/* addr: 0x00321fc0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 380
 *   +0x0034 -> line 382
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* HIE_fn_hGetChildNumber(HIE_tdstSuperObject_* _hParent, int _lNumber)
{
    short i;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 364–373 */
/* addr: 0x00322000  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 364
 *   +0x0004 -> line 365
 *   +0x0008 -> line 364
 *   +0x001c -> line 365
 *   +0x0024 -> line 367
 *   +0x0098 -> line 369
 *   +0x00a8 -> line 373
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vUpdateGlobalMatrix(HIE_tdstSuperObject_* hSO)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 348–361 */
/* addr: 0x003220d0  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 348
 *   +0x0018 -> line 351
 *   +0x001c -> line 352
 *   +0x0024 -> line 354
 *   +0x0098 -> line 355
 *   +0x00a8 -> line 359
 *   +0x00b0 -> line 361
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int HIE_fn_vRecUpdateGlobalMatrix(HIE_tdstSuperObject_* hSO)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 340–343 */
/* addr: 0x003221a0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 340
 *   +0x0014 -> line 343
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* HIE_fn_hForceGetSuperObjectPrevBrother(HIE_tdstSuperObject_* _hSprObj)
{
    return _hSprObj ? _hSprObj->hPrevBrotherDyn : _hSprObj;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 332–335 */
/* addr: 0x003221c0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 332
 *   +0x0014 -> line 335
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* HIE_fn_hForceGetSuperObjectNextBrother(HIE_tdstSuperObject_* _hSprObj)
{
    return _hSprObj ? _hSprObj->hNextBrotherDyn : _hSprObj;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 272–325 */
/* addr: 0x003221e0  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 272
 *   +0x0004 -> line 278
 *   +0x0008 -> line 272
 *   +0x001c -> line 278
 *   +0x002c -> line 279
 *   +0x003c -> line 281
 *   +0x0040 -> line 283
 *   +0x0044 -> line 281
 *   +0x0048 -> line 288
 *   +0x004c -> line 281
 *   +0x0050 -> line 282
 *   +0x005c -> line 283
 *   +0x0064 -> line 285
 *   +0x0068 -> line 286
 *   +0x006c -> line 288
 *   +0x0070 -> line 291
 *   +0x007c -> line 292
 *   +0x0084 -> line 294
 *   +0x0088 -> line 295
 *   +0x00b8 -> line 297
 *   +0x00c0 -> line 299
 *   +0x00c4 -> line 297
 *   +0x00c8 -> line 301
 *   +0x00cc -> line 299
 *   +0x00d0 -> line 323
 *   +0x00d4 -> line 301
 *   +0x00dc -> line 323
 *   +0x00e0 -> line 301
 *   +0x00e8 -> line 304
 *   +0x00ec -> line 307
 *   +0x00f0 -> line 312
 *   +0x00f4 -> line 315
 *   +0x00f8 -> line 317
 *   +0x0104 -> line 318
 *   +0x0110 -> line 319
 *   +0x011c -> line 322
 *   +0x0120 -> line 323
 *   +0x0128 -> line 324
 *   +0x012c -> line 325
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* HIE_fn_p_stCreateSuperObjectTab(int lSize)
{
    int lIndex;
    HIE_tdstSuperObject_* hNewSuperObject;
    HIE_tdstSuperObject_* hNewSuperObjectTab;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 201–202 */
/* addr: 0x00322330  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 201
 *   +0x0080 -> line 202
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_vIsolate(HIE_tdstSuperObject_* _hSprObj)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 151–184 */
/* addr: 0x003223c0  size: 716 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 151
 *   +0x0004 -> line 154
 *   +0x000c -> line 157
 *   +0x001c -> line 159
 *   +0x0038 -> line 161
 *   +0x0040 -> line 162
 *   +0x0044 -> line 161
 *   +0x004c -> line 162
 *   +0x0050 -> line 161
 *   +0x0058 -> line 162
 *   +0x005c -> line 161
 *   +0x0060 -> line 162
 *   +0x006c -> line 161
 *   +0x007c -> line 162
 *   +0x0080 -> line 161
 *   +0x0088 -> line 162
 *   +0x0094 -> line 161
 *   +0x0098 -> line 162
 *   +0x00b8 -> line 161
 *   +0x00bc -> line 162
 *   +0x00dc -> line 161
 *   +0x00e0 -> line 162
 *   +0x0100 -> line 161
 *   +0x0104 -> line 162
 *   +0x0124 -> line 161
 *   +0x0128 -> line 162
 *   +0x0148 -> line 161
 *   +0x014c -> line 162
 *   +0x016c -> line 161
 *   +0x0170 -> line 162
 *   +0x0194 -> line 159
 *   +0x01b8 -> line 162
 *   +0x01d4 -> line 163
 *   +0x01d8 -> line 162
 *   +0x01e8 -> line 163
 *   +0x01f8 -> line 164
 *   +0x01fc -> line 166
 *   +0x0204 -> line 167
 *   +0x020c -> line 171
 *   +0x0210 -> line 172
 *   +0x0214 -> line 171
 *   +0x0218 -> line 172
 *   +0x0220 -> line 175
 *   +0x0228 -> line 177
 *   +0x0248 -> line 179
 *   +0x0284 -> line 180
 *   +0x0288 -> line 181
 *   +0x02bc -> line 183
 *   +0x02c0 -> line 184
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_SO_SwitchSuperImposedTab(int lParam)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 142–143 */
/* addr: 0x00322690  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 142
 *   +0x0010 -> line 143
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_SO_UnsetSuperImposedClipping(HIE_tdstSuperObject_* _hSO)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 129–137 */
/* addr: 0x003226b0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 129
 *   +0x0004 -> line 131
 *   +0x0008 -> line 129
 *   +0x000c -> line 131
 *   +0x001c -> line 134
 *   +0x0028 -> line 136
 *   +0x003c -> line 137
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_SO_SetSuperImposedClipping(HIE_tdstSuperObject_* _hSO, int _lTop, int _lLeft, int _lBottom, int _lRight)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 112–118 */
/* addr: 0x00322700  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 112
 *   +0x0008 -> line 113
 *   +0x001c -> line 115
 *   +0x0030 -> line 118
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_SO_vSetOutLineMode(HIE_tdstSuperObject_* _hSO, unsigned char bMode, unsigned int ulColor)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 83–107 */
/* addr: 0x00322740  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 83
 *   +0x0014 -> line 88
 *   +0x001c -> line 90
 *   +0x0028 -> line 95
 *   +0x0038 -> line 97
 *   +0x0044 -> line 100
 *   +0x0050 -> line 101
 *   +0x005c -> line 102
 *   +0x0074 -> line 103
 *   +0x0084 -> line 104
 *   +0x0090 -> line 106
 *   +0x00b0 -> line 107
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_SO_vClearSuperimposedFlag(HIE_tdstSuperObject_* _hSO)
{
    short xIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 62–77 */
/* addr: 0x00322800  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 62
 *   +0x0014 -> line 67
 *   +0x0018 -> line 72
 *   +0x0028 -> line 73
 *   +0x0038 -> line 74
 *   +0x0044 -> line 77
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HIE_fn_SO_vSetSuperimposedFlag(HIE_tdstSuperObject_* _hSO)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieSpObj.c lines 54–58 */
/* addr: 0x00322850  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 54
 *   +0x0030 -> line 58
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* HIE_fn_hGetElementFormFixViewport(short xIndex)
{
    /* TODO: decompile from asm/... */
}
