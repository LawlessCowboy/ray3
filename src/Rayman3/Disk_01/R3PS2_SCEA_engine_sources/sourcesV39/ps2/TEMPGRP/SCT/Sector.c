/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct SCT_tdstCommonVertices_ SCT_tdstCommonVertices_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;

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

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SECT_tdstSector_ {
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn stListOfCharacters; /* +0x0 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt stListOfStaticLights; /* +0xc */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn stListOfDNMLights; /* +0x14 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt stListOfSectorsInGraphicInteraction; /* +0x20 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt stListOfSectorsInCollisionInteraction; /* +0x28 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt stListOfSectorsInActivityInteraction; /* +0x30 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt stListOfSectorsInSoundInteraction; /* +0x38 */
    LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt stListOfSoundEvent; /* +0x40 */
    MTH3D_tdstVector_ stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    HIE_tdstSuperObject_* h_PreviousSectorInList; /* +0x70 */
    HIE_tdstSuperObject_* h_NextSectorInList; /* +0x74 */
    int lModifierMulIntensity; /* +0x78 */
    int lModifierAddIntensity; /* +0x7c */
    unsigned int glOpaqueDisplayList; /* +0x80 */
    unsigned int glTransparentDisplayList; /* +0x84 */
    char cCurrentActivity; /* +0x88 */
    char cWantedActivity; /* +0x89 */
    unsigned char ucInList; /* +0x8a */
    int xTransition; /* +0x8c */
    _SND_tduRefEvt hTransitionSoundEvent; /* +0x90 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
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

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
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

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct SCT_tdstCommonVertices_ {
    short xVertexIndex; /* +0x0 */
    GEO_tdstGeometricObject_* hPhysicalObject; /* +0x4 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

unsigned char g_ucSCTModuleId;
short SCT_xNbChange;
int SCT_a10_hSectorChangeHistory[10];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 85–140 */
/* addr: 0x0031c080  size: 652 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 85
 *   +0x0038 -> line 96
 *   +0x0040 -> line 97
 *   +0x004c -> line 100
 *   +0x0054 -> line 103
 *   +0x0060 -> line 110
 *   +0x0064 -> line 104
 *   +0x0068 -> line 111
 *   +0x006c -> line 103
 *   +0x0070 -> line 113
 *   +0x0074 -> line 103
 *   +0x0078 -> line 113
 *   +0x007c -> line 105
 *   +0x0080 -> line 103
 *   +0x0084 -> line 105
 *   +0x0088 -> line 103
 *   +0x0090 -> line 104
 *   +0x009c -> line 105
 *   +0x00a4 -> line 107
 *   +0x00a8 -> line 105
 *   +0x00ac -> line 109
 *   +0x00b8 -> line 106
 *   +0x00bc -> line 109
 *   +0x00c0 -> line 106
 *   +0x00c4 -> line 107
 *   +0x00c8 -> line 109
 *   +0x00d0 -> line 110
 *   +0x00dc -> line 111
 *   +0x00e4 -> line 113
 *   +0x00ec -> line 120
 *   +0x00f0 -> line 121
 *   +0x00f4 -> line 120
 *   +0x00f8 -> line 121
 *   +0x00fc -> line 120
 *   +0x010c -> line 121
 *   +0x0110 -> line 120
 *   +0x0118 -> line 121
 *   +0x011c -> line 120
 *   +0x0120 -> line 121
 *   +0x0148 -> line 123
 *   +0x0174 -> line 130
 *   +0x017c -> line 131
 *   +0x0180 -> line 123
 *   +0x0184 -> line 125
 *   +0x01a4 -> line 127
 *   +0x01c8 -> line 130
 *   +0x01f4 -> line 131
 *   +0x01fc -> line 133
 *   +0x0220 -> line 137
 *   +0x0224 -> line 133
 *   +0x023c -> line 134
 *   +0x0250 -> line 137
 *   +0x0258 -> line 138
 *   +0x0264 -> line 140
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SCT_fn_vGetSymMatrixOfCameraInMirror(MAT_tdstTransformation_* hMatrixOfCamera, MAT_tdstTransformation_* hMatrixOfSymCamera, MTH3D_tdstVector_* pstGlobalPositionOfSymCamera, MTH3D_tdstVector_* pstGlobalNormalOfMirror, MTH3D_tdstVector_* pstGlobalPointOfMirror)
{
    float a23;
    float a13;
    float a12;
    float a33;
    float a22;
    MTH3D_tdstVector_ pstModuleAxes[3];
    MTH3D_tdstVector_ stTransVectorOfCamera;
    float xTemp;
    MTH3D_tdstVector_ stTransVector;
    MAT_tdstTransformation_ stTempMatrixForMultiplication;
    MAT_tdstTransformation_ stMulMatrixScale;
    MAT_tdstTransformation_ stGlobalMatrixOfCamera;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 1025–1025 */
/* addr: 0x0031c310  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1025
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MTH3D_tdstVector_* SECT_fn_p_stGetMaxPointInBorder(SECT_tdstSector_* _hSector)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 1019–1019 */
/* addr: 0x0031c320  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1019
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MTH3D_tdstVector_* SECT_fn_p_stGetMinPointInBorder(SECT_tdstSector_* _hSector)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 1013–1014 */
/* addr: 0x0031c330  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1013
 *   +0x0004 -> line 1014
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float fn_xGetSectorZFar(HIE_tdstSuperObject_* _hSprObjSector)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 993–1002 */
/* addr: 0x0031c340  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 993
 *   +0x000c -> line 995
 *   +0x0010 -> line 996
 *   +0x0014 -> line 997
 *   +0x0018 -> line 998
 *   +0x001c -> line 999
 *   +0x0020 -> line 1000
 *   +0x0030 -> line 1002
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vInitActivationSector(HIE_tdstSuperObject_* hSectorRoot)
{
    SECT_tdstSector_* param0;
    HIE_tdstSuperObject_* hCurrentSector;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 960–982 */
/* addr: 0x0031c380  size: 192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 960
 *   +0x0014 -> line 962
 *   +0x0018 -> line 965
 *   +0x0024 -> line 966
 *   +0x002c -> line 970
 *   +0x0054 -> line 971
 *   +0x0064 -> line 972
 *   +0x008c -> line 974
 *   +0x0094 -> line 975
 *   +0x009c -> line 979
 *   +0x00a0 -> line 981
 *   +0x00a4 -> line 979
 *   +0x00a8 -> line 982
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* SECT_fn_hResolveSectorNextActivity(HIE_tdstSuperObject_* _hSectorObject)
{
    SECT_tdstSector_* hSector;
    HIE_tdstSuperObject_* hNextSO;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 951–956 */
/* addr: 0x0031c440  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 951
 *   +0x0004 -> line 953
 *   +0x0024 -> line 956
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SECT_fn_bIsSectorNewlyInactive(HIE_tdstSuperObject_* _hSectorObject)
{
    SECT_tdstSector_* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 941–946 */
/* addr: 0x0031c470  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 941
 *   +0x0004 -> line 943
 *   +0x0024 -> line 946
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SECT_fn_bIsSectorNewlyActive(HIE_tdstSuperObject_* _hSectorObject)
{
    SECT_tdstSector_* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 905–936 */
/* addr: 0x0031c4a0  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 905
 *   +0x0004 -> line 909
 *   +0x0008 -> line 905
 *   +0x000c -> line 909
 *   +0x001c -> line 910
 *   +0x0024 -> line 913
 *   +0x0030 -> line 914
 *   +0x0038 -> line 916
 *   +0x0050 -> line 921
 *   +0x0058 -> line 925
 *   +0x0064 -> line 926
 *   +0x0068 -> line 930
 *   +0x0080 -> line 932
 *   +0x0088 -> line 935
 *   +0x008c -> line 936
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SECT_fn_cSetWantedActivity(HIE_tdstSuperObject_* _hSectorObject, char _cWantedActivity)
{
    SECT_tdstSector_* hSector;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 894–895 */
/* addr: 0x0031c540  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 894
 *   +0x0004 -> line 895
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char fn_cGetSectorCameraType(HIE_tdstSuperObject_* _hSprObjSector)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 884–885 */
/* addr: 0x0031c550  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 884
 *   +0x0004 -> line 885
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SECT_fn_bIsThisSectorVirtual(HIE_tdstSuperObject_* _hSprObjSector)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 504–505 */
/* addr: 0x0031c560  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 504
 *   +0x00d0 -> line 505
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vAddTailDNMLightsListNode(HIE_tdstSuperObject_* hSector, SECT_tdstListOfDNMLights_* hNode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 498–499 */
/* addr: 0x0031c640  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 498
 *   +0x007c -> line 499
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vIsolateDNMLightsListNode(SECT_tdstListOfDNMLights_* hNode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 492–493 */
/* addr: 0x0031c6d0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 492
 *   +0x00cc -> line 493
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vAddHeadCharListNode(HIE_tdstSuperObject_* hSector, SECT_tdstListOfSOCharacters_* hNode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 486–487 */
/* addr: 0x0031c7b0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 486
 *   +0x00cc -> line 487
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vAddTailCharListNode(HIE_tdstSuperObject_* hSector, SECT_tdstListOfSOCharacters_* hNode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 480–481 */
/* addr: 0x0031c890  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 480
 *   +0x007c -> line 481
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vIsolateCharListNode(SECT_tdstListOfSOCharacters_* hNode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 360–409 */
/* addr: 0x0031c920  size: 876 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 360
 *   +0x000c -> line 368
 *   +0x0010 -> line 369
 *   +0x0014 -> line 371
 *   +0x00f4 -> line 374
 *   +0x0104 -> line 377
 *   +0x0108 -> line 380
 *   +0x010c -> line 378
 *   +0x0110 -> line 380
 *   +0x0120 -> line 383
 *   +0x0210 -> line 386
 *   +0x0218 -> line 388
 *   +0x0228 -> line 390
 *   +0x0230 -> line 394
 *   +0x0240 -> line 397
 *   +0x0244 -> line 398
 *   +0x0248 -> line 400
 *   +0x0338 -> line 403
 *   +0x0340 -> line 405
 *   +0x0350 -> line 407
 *   +0x035c -> line 409
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SCT_fn_vTestChangeSectorWithHistory(MTH3D_tdstVector_* _p_stAfterAbsolutePosition, HIE_tdstSuperObject_* _p_hSectorSOWhereIWas)
{
    int iInd;
    HIE_tdstSuperObject_* param0;
    SECT_tdstSector_* hCurrentSectorObject;
    SECT_tdstSector_* hSectorObject;
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hCollisionNode;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 277–352 */
/* addr: 0x0031cc90  size: 608 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 300
 *   +0x0004 -> line 294
 *   +0x000c -> line 277
 *   +0x0010 -> line 294
 *   +0x0014 -> line 282
 *   +0x0018 -> line 292
 *   +0x001c -> line 293
 *   +0x0020 -> line 297
 *   +0x0024 -> line 298
 *   +0x0028 -> line 300
 *   +0x0030 -> line 309
 *   +0x0038 -> line 303
 *   +0x003c -> line 307
 *   +0x0120 -> line 309
 *   +0x0138 -> line 310
 *   +0x013c -> line 309
 *   +0x0154 -> line 310
 *   +0x0164 -> line 311
 *   +0x0170 -> line 312
 *   +0x0174 -> line 311
 *   +0x0180 -> line 312
 *   +0x0188 -> line 314
 *   +0x01a0 -> line 318
 *   +0x01a4 -> line 316
 *   +0x01a8 -> line 317
 *   +0x01ac -> line 319
 *   +0x01b8 -> line 320
 *   +0x01d0 -> line 323
 *   +0x01d4 -> line 325
 *   +0x01e0 -> line 328
 *   +0x01f8 -> line 332
 *   +0x01fc -> line 330
 *   +0x0200 -> line 331
 *   +0x0204 -> line 333
 *   +0x0210 -> line 334
 *   +0x0228 -> line 337
 *   +0x022c -> line 336
 *   +0x0230 -> line 341
 *   +0x0240 -> line 344
 *   +0x0248 -> line 345
 *   +0x024c -> line 348
 *   +0x0254 -> line 349
 *   +0x0258 -> line 352
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* SECT_fn_hResearchInWhatSectorIAm(HIE_tdstSuperObject_* SECT_hFatherSector, MTH3D_tdstVector_* p_stAbsolutePosition)
{
    char cVirtualPriority;
    char cCurrentPriority;
    float xVirtualDistance;
    float xCurrentDistance;
    HIE_tdstSuperObject_* hLastSector;
    HIE_tdstSuperObject_* hCurrentSector;
    HIE_tdstSuperObject_* hVirtualSectorWhereIAm;
    HIE_tdstSuperObject_* hSectorWhereIAm;
    SECT_tdstSector_* param0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 242–261 */
/* addr: 0x0031cef0  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 246
 *   +0x0004 -> line 242
 *   +0x0008 -> line 246
 *   +0x0010 -> line 250
 *   +0x0014 -> line 246
 *   +0x0020 -> line 247
 *   +0x0038 -> line 250
 *   +0x0060 -> line 251
 *   +0x006c -> line 253
 *   +0x0098 -> line 254
 *   +0x00a4 -> line 256
 *   +0x00d0 -> line 257
 *   +0x00d4 -> line 261
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SECT_fn_bIsInBorderBox(MTH3D_tdstVector_* _p_stPosition, SECT_tdstSector_* _hSector)
{
    MTH3D_tdstVector_ stMax;
    MTH3D_tdstVector_ stMin;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 237–237 */
/* addr: 0x0031cfd0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 237
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vSetHandleOfLightsInDNMLightsList(SECT_tdstListOfDNMLights_* hDNMLightsElement, GLI_tdstLight_* hDNMLights)
{
    hDNMLightsElement->hDNMLights = hDNMLights;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 220–228 */
/* addr: 0x0031cfe0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 220
 *   +0x0004 -> line 224
 *   +0x0008 -> line 220
 *   +0x000c -> line 224
 *   +0x0014 -> line 226
 *   +0x0020 -> line 228
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_hCreateElementLstDNMLights(void)
{
    SECT_tdstListOfDNMLights_* hDNMLightsElement;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 217–217 */
/* addr: 0x0031d010  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 217
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vSetCharacterPointerInCharacterList(SECT_tdstListOfSOCharacters_* hCharacterElement, HIE_tdstSuperObject_* hSectorSuperObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 200–208 */
/* addr: 0x0031d020  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 200
 *   +0x0004 -> line 204
 *   +0x0008 -> line 200
 *   +0x000c -> line 204
 *   +0x0014 -> line 206
 *   +0x0020 -> line 208
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_hCreateElementLstCharacter(void)
{
    SECT_tdstListOfSOCharacters_* hCharacterElement;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 187–188 */
/* addr: 0x0031d050  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 187
 *   +0x0014 -> line 188
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SECT_fn_vGetMaxPointInBorder(SECT_tdstSector_* _hSector, MTH3D_tdstVector_* _p_stMaxPoint)
{
    /* TODO: decompile from asm/... */
}
