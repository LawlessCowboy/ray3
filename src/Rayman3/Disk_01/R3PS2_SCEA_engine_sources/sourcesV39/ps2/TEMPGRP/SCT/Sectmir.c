/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstZBufferForLight_ GLI_tdstZBufferForLight_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct stRECT stRECT;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct stPOINT stPOINT;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;

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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct GLI_tdstZBufferForLight_ {
    int lSizeX; /* +0x0 */
    int lSizeY; /* +0x4 */
    float fCoefX; /* +0x8 */
    float fCoefY; /* +0xc */
    int p_stZBufferMap; /* +0x10 */
    int p_stMiddleZBufferMap; /* +0x14 */
};

struct GLI_tdstLight_ {
    int b_lOnOff; /* +0x0 */
    int bThisLightIsZBuffered; /* +0x4 */
    int lTypeOfLight; /* +0x8 */
    float xFar; /* +0xc */
    float xNear; /* +0x10 */
    float xLittleAlpha; /* +0x14 */
    float xBigAlpha; /* +0x18 */
    float xLittleTangent; /* +0x1c */
    float xBigTangent; /* +0x20 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x24..0x2f */
    MAT_tdstTransformation_ stMatrix; /* +0x30 */
    GEO_tdstColor_ stColor; /* +0x90 */
    float SqNear; /* +0xa0 */
    float SqFar; /* +0xa4 */
    float OOSqDiv; /* +0xa8 */
    GLI_tdstZBufferForLight_ stZBuffer; /* +0xac */
    unsigned char bValid; /* +0xc4 */
    unsigned char ucObjectLighted; /* +0xc5 */
    unsigned char bIsPainting; /* +0xc6 */
    unsigned char ucIsAlpha; /* +0xc7 */
    MTH3D_tdstVector_ xInter_Min_Pos; /* +0xc8 */
    MTH3D_tdstVector_ xExter_Min_Pos; /* +0xd4 */
    MTH3D_tdstVector_ xInter_Max_Pos; /* +0xe0 */
    MTH3D_tdstVector_ xExter_Max_Pos; /* +0xec */
    MTH3D_tdstVector_ xCenterBox; /* +0xf8 */
    float xRadius; /* +0x104 */
    float xIntensity_Min; /* +0x108 */
    float xIntensity_Max; /* +0x10c */
    GEO_tdstColor_ stBackgroundColor; /* +0x110 */
    int bCreatesShadows; /* +0x120 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
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

struct GLD_tdstDeviceAttributes_ {
    unsigned int dwHeight; /* +0x0 */
    unsigned int dwWidth; /* +0x4 */
    float xPixelDimensionX; /* +0x8 */
    float xPixelDimensionY; /* +0xc */
    int p_cVirtualScreen; /* +0x10 */
    int lPitch; /* +0x14 */
    int p_sZBuffer; /* +0x18 */
    unsigned int dwFullScreenModeX; /* +0x1c */
    unsigned int dwFullScreenModeY; /* +0x20 */
    unsigned int dwFullScreenModeBpp; /* +0x24 */
    int hFullScreenModeWnd; /* +0x28 */
    int hNormalModeWnd; /* +0x2c */
    int bFullScreen; /* +0x30 */
    unsigned int uiTypeDriver; /* +0x34 */
    stPOINT pClientOnPrimary; /* +0x38 */
    stRECT rtClientRect; /* +0x40 */
    stRECT rtWindowRect; /* +0x50 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

unsigned long SCT_g_ulDisplayingAgos;
unsigned char g_bMirrorOnly;
unsigned int SCT_g_DrawingMirrored;
unsigned char bViewingInMirror;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
int HIE_g_a_hMatrixStack[50];
int HIE_g_lNbMatrixInStack;
GEO_tdstColor_ GLI_stFogColor;
float GLI_xFogInfinite;
float GLI_xFogFar;
float GLI_xFogBlendFar;
float GLI_xFogNear;
float GLI_xFogBlendNear;
char GLI_cGlobalFogIsOn;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 75–76 */
/* addr: 0x0031a950  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 75
 *   +0x0004 -> line 76
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Shared with Sectdraw.c: the retail ELF has a single local
 * bNotCreateDefaultMaterial, and Sectmir.c's code is linked directly after
 * Sectdraw.c's, consistent with Sectdraw.c including this file. */
static int bNotCreateDefaultMaterial;

void SCT_fn_vInitMaterialForGoThrough(void)
{
    bNotCreateDefaultMaterial = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 952–964 */
/* addr: 0x0031a960  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 952
 *   +0x0010 -> line 957
 *   +0x001c -> line 958
 *   +0x002c -> line 959
 *   +0x0040 -> line 961
 *   +0x0084 -> line 962
 *   +0x0088 -> line 963
 *   +0x0098 -> line 964
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char HIE_fn_bFindMirrorInHierarchy(HIE_tdstSuperObject_* hSO);
void SCT_fn_vDoPreClippingForPortal(HIE_tdstSuperObject_* _hSector);
void SCT_fn_vPreClippingForOnePortal(HIE_tdstSuperObject_* _hIPOMirror);

void SCT_fn_vInitMirrorFlagForAllSectors(HIE_tdstSuperObject_* _hStaticRoot)
{
    HIE_tdstSuperObject_* hSector;

    for (hSector = _hStaticRoot->hFirstElementDyn; hSector; hSector = hSector->hNextBrotherDyn)
    {
        if (HIE_fn_bFindMirrorInHierarchy(hSector))
        {
            HIE_tdstSuperObject_* hChild;

            hSector->lDrawModeMask &= ~0x10000000;
            for (hChild = hSector->hFirstElementDyn; hChild; hChild = hChild->hNextBrotherDyn)
            {
                if (hChild->ulTypeOfLinkedObject & 0x40)
                    SCT_fn_vPreClippingForOnePortal(hChild);
                else
                    SCT_fn_vDoPreClippingForPortal(hChild);
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 932–943 */
/* addr: 0x0031aa10  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 932
 *   +0x0010 -> line 935
 *   +0x001c -> line 937
 *   +0x002c -> line 938
 *   +0x0040 -> line 940
 *   +0x0088 -> line 941
 *   +0x0098 -> line 943
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SCT_fn_vDoPreClippingForPortal(HIE_tdstSuperObject_* _hSector)
{
    HIE_tdstSuperObject_* hChild;

    for (hChild = _hSector->hFirstElementDyn; hChild; hChild = hChild->hNextBrotherDyn)
    {
        if (hChild->ulTypeOfLinkedObject & 0x40)
        {
            SCT_fn_vPreClippingForOnePortal(hChild);
        }
        else
        {
            HIE_tdstSuperObject_* hSubChild;

            for (hSubChild = hChild->hFirstElementDyn; hSubChild; hSubChild = hSubChild->hNextBrotherDyn)
            {
                if (hSubChild->ulTypeOfLinkedObject & 0x40)
                    SCT_fn_vPreClippingForOnePortal(hSubChild);
                else
                    SCT_fn_vDoPreClippingForPortal(hSubChild);
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 874–929 */
/* addr: 0x0031aac0  size: 684 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 874
 *   +0x0020 -> line 886
 *   +0x002c -> line 888
 *   +0x0034 -> line 890
 *   +0x0044 -> line 891
 *   +0x0054 -> line 892
 *   +0x0058 -> line 894
 *   +0x005c -> line 891
 *   +0x00a0 -> line 892
 *   +0x00b4 -> line 894
 *   +0x00bc -> line 895
 *   +0x00c8 -> line 897
 *   +0x00d8 -> line 899
 *   +0x00e4 -> line 900
 *   +0x00f8 -> line 902
 *   +0x0104 -> line 903
 *   +0x0108 -> line 902
 *   +0x010c -> line 903
 *   +0x0118 -> line 905
 *   +0x0138 -> line 910
 *   +0x0148 -> line 911
 *   +0x0158 -> line 912
 *   +0x0168 -> line 914
 *   +0x0184 -> line 915
 *   +0x0194 -> line 917
 *   +0x01cc -> line 919
 *   +0x0204 -> line 920
 *   +0x0210 -> line 921
 *   +0x0218 -> line 923
 *   +0x0244 -> line 925
 *   +0x0248 -> line 926
 *   +0x0250 -> line 923
 *   +0x0254 -> line 926
 *   +0x0270 -> line 928
 *   +0x0288 -> line 929
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SCT_fn_vPreClippingForOnePortal(HIE_tdstSuperObject_* _hIPOMirror)
{
    short idxPt3;
    short idxPt2;
    short idxPt1;
    short xNbFaces;
    short k;
    short i;
    MTH3D_tdstVector_ stNormal;
    MTH3D_tdstVector_ stPosCam;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_ stPoint;
    MAT_tdstTransformation_ stTransMatrix;
    GEO_tdstGeometricObject_* p_stObject;
    PO_tdstPhysicalObject_* hPO;
    HIE_tdstSuperObject_* hSprObjPortalSector;
    HIE_tdstSuperObject_* hChild;
    HIE_tdstSuperObject_* hPortalCamera;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 302–868 */
/* addr: 0x0031ad70  size: 4444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 302
 *   +0x0008 -> line 330
 *   +0x000c -> line 302
 *   +0x004c -> line 330
 *   +0x0068 -> line 331
 *   +0x0078 -> line 340
 *   +0x007c -> line 344
 *   +0x0090 -> line 347
 *   +0x009c -> line 349
 *   +0x00bc -> line 350
 *   +0x00c4 -> line 354
 *   +0x00dc -> line 357
 *   +0x00e4 -> line 360
 *   +0x0100 -> line 365
 *   +0x0108 -> line 370
 *   +0x010c -> line 368
 *   +0x0110 -> line 370
 *   +0x0118 -> line 373
 *   +0x011c -> line 390
 *   +0x0128 -> line 393
 *   +0x012c -> line 392
 *   +0x0130 -> line 393
 *   +0x0134 -> line 392
 *   +0x0138 -> line 393
 *   +0x013c -> line 392
 *   +0x0140 -> line 393
 *   +0x0158 -> line 395
 *   +0x0164 -> line 399
 *   +0x016c -> line 406
 *   +0x0184 -> line 414
 *   +0x0190 -> line 416
 *   +0x0194 -> line 419
 *   +0x0198 -> line 414
 *   +0x019c -> line 416
 *   +0x01a0 -> line 414
 *   +0x01a4 -> line 416
 *   +0x01b4 -> line 419
 *   +0x01bc -> line 416
 *   +0x01c4 -> line 419
 *   +0x01d0 -> line 420
 *   +0x023c -> line 423
 *   +0x0240 -> line 420
 *   +0x0244 -> line 423
 *   +0x0248 -> line 420
 *   +0x024c -> line 423
 *   +0x0254 -> line 420
 *   +0x0260 -> line 423
 *   +0x026c -> line 424
 *   +0x0280 -> line 425
 *   +0x0284 -> line 424
 *   +0x02b8 -> line 425
 *   +0x02c0 -> line 426
 *   +0x02d0 -> line 429
 *   +0x02e0 -> line 433
 *   +0x02ec -> line 429
 *   +0x02fc -> line 433
 *   +0x0300 -> line 429
 *   +0x030c -> line 433
 *   +0x0310 -> line 429
 *   +0x0318 -> line 433
 *   +0x0350 -> line 435
 *   +0x036c -> line 441
 *   +0x0370 -> line 438
 *   +0x0374 -> line 441
 *   +0x0380 -> line 442
 *   +0x038c -> line 445
 *   +0x0394 -> line 453
 *   +0x03a4 -> line 456
 *   +0x03b0 -> line 457
 *   +0x03bc -> line 458
 *   +0x03c8 -> line 460
 *   +0x03e0 -> line 462
 *   +0x03ec -> line 465
 *   +0x03fc -> line 467
 *   +0x043c -> line 468
 *   +0x0450 -> line 471
 *   +0x0460 -> line 472
 *   +0x04a0 -> line 473
 *   +0x04b8 -> line 476
 *   +0x04c8 -> line 478
 *   +0x04dc -> line 480
 *   +0x04e4 -> line 482
 *   +0x0510 -> line 485
 *   +0x0518 -> line 491
 *   +0x0520 -> line 485
 *   +0x0524 -> line 491
 *   +0x0538 -> line 492
 *   +0x0548 -> line 495
 *   +0x056c -> line 496
 *   +0x0578 -> line 501
 *   +0x057c -> line 504
 *   +0x0588 -> line 507
 *   +0x05a0 -> line 512
 *   +0x05a8 -> line 515
 *   +0x05d4 -> line 519
 *   +0x05d8 -> line 523
 *   +0x05e0 -> line 524
 *   +0x05e4 -> line 525
 *   +0x05e8 -> line 528
 *   +0x05f0 -> line 529
 *   +0x05f8 -> line 532
 *   +0x0600 -> line 546
 *   +0x0608 -> line 547
 *   +0x0614 -> line 548
 *   +0x0620 -> line 550
 *   +0x0628 -> line 553
 *   +0x0638 -> line 555
 *   +0x063c -> line 556
 *   +0x0654 -> line 557
 *   +0x0698 -> line 559
 *   +0x06a0 -> line 563
 *   +0x06c4 -> line 564
 *   +0x06c8 -> line 563
 *   +0x06cc -> line 564
 *   +0x06d8 -> line 565
 *   +0x070c -> line 566
 *   +0x0718 -> line 568
 *   +0x0748 -> line 569
 *   +0x074c -> line 572
 *   +0x0754 -> line 569
 *   +0x075c -> line 572
 *   +0x0760 -> line 569
 *   +0x076c -> line 570
 *   +0x077c -> line 571
 *   +0x078c -> line 572
 *   +0x07ac -> line 573
 *   +0x07b8 -> line 574
 *   +0x07d8 -> line 575
 *   +0x0844 -> line 576
 *   +0x085c -> line 579
 *   +0x0874 -> line 581
 *   +0x0878 -> line 579
 *   +0x088c -> line 581
 *   +0x089c -> line 579
 *   +0x08a0 -> line 581
 *   +0x08b0 -> line 582
 *   +0x08c8 -> line 584
 *   +0x08d0 -> line 585
 *   +0x08d8 -> line 587
 *   +0x08f0 -> line 589
 *   +0x0950 -> line 592
 *   +0x0978 -> line 595
 *   +0x0a28 -> line 596
 *   +0x0a88 -> line 599
 *   +0x0a90 -> line 600
 *   +0x0aa4 -> line 602
 *   +0x0abc -> line 603
 *   +0x0af8 -> line 605
 *   +0x0b30 -> line 608
 *   +0x0b40 -> line 622
 *   +0x0b4c -> line 623
 *   +0x0ba0 -> line 624
 *   +0x0ba4 -> line 623
 *   +0x0ba8 -> line 624
 *   +0x0bac -> line 623
 *   +0x0bbc -> line 624
 *   +0x0c08 -> line 627
 *   +0x0c0c -> line 624
 *   +0x0c10 -> line 627
 *   +0x0c14 -> line 624
 *   +0x0c18 -> line 627
 *   +0x0c1c -> line 624
 *   +0x0c24 -> line 627
 *   +0x0c2c -> line 628
 *   +0x0c3c -> line 630
 *   +0x0c80 -> line 631
 *   +0x0c88 -> line 638
 *   +0x0ca4 -> line 639
 *   +0x0cf0 -> line 643
 *   +0x0d5c -> line 644
 *   +0x0d70 -> line 646
 *   +0x0d78 -> line 647
 *   +0x0d80 -> line 649
 *   +0x0d88 -> line 650
 *   +0x0d8c -> line 652
 *   +0x0d90 -> line 655
 *   +0x0d9c -> line 657
 *   +0x0db0 -> line 662
 *   +0x0db8 -> line 665
 *   +0x0dd0 -> line 681
 *   +0x0dd8 -> line 682
 *   +0x0ddc -> line 683
 *   +0x0de0 -> line 686
 *   +0x0de8 -> line 687
 *   +0x0df0 -> line 688
 *   +0x0df4 -> line 689
 *   +0x0df8 -> line 691
 *   +0x0e14 -> line 706
 *   +0x0e24 -> line 710
 *   +0x0e44 -> line 711
 *   +0x0e50 -> line 715
 *   +0x0e58 -> line 716
 *   +0x0e60 -> line 720
 *   +0x0e74 -> line 721
 *   +0x0e78 -> line 723
 *   +0x0e80 -> line 732
 *   +0x0e8c -> line 733
 *   +0x0e9c -> line 735
 *   +0x0eb0 -> line 736
 *   +0x0eb8 -> line 737
 *   +0x0ec0 -> line 743
 *   +0x0f2c -> line 744
 *   +0x0f40 -> line 746
 *   +0x0f48 -> line 748
 *   +0x0f50 -> line 752
 *   +0x0f70 -> line 755
 *   +0x0f78 -> line 769
 *   +0x0f90 -> line 770
 *   +0x0f98 -> line 774
 *   +0x0fb4 -> line 777
 *   +0x0fbc -> line 778
 *   +0x0fc4 -> line 779
 *   +0x0fe0 -> line 783
 *   +0x1000 -> line 784
 *   +0x1020 -> line 787
 *   +0x104c -> line 788
 *   +0x106c -> line 824
 *   +0x1074 -> line 825
 *   +0x107c -> line 829
 *   +0x1084 -> line 830
 *   +0x1088 -> line 835
 *   +0x1090 -> line 837
 *   +0x10c0 -> line 839
 *   +0x10c4 -> line 841
 *   +0x10c8 -> line 842
 *   +0x10f0 -> line 847
 *   +0x10f4 -> line 852
 *   +0x1100 -> line 853
 *   +0x1114 -> line 861
 *   +0x111c -> line 862
 *   +0x1120 -> line 868
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SCT_fn_vSendSectorWhereIAmToViewportWithMirror(MTH3D_tdstVector_* _p_stAbsolutePositionOfCamera, short _hDevice, short _hViewport, GLD_tdstViewportAttributes_* _p_stVpt, HIE_tdstSuperObject_* _hSprObjSector, int _lDrawMask)
{
    float xNorm;
    MTH3D_tdstVector_ VectTmp;
    unsigned int ulCustomBit;
    float fDot;
    MAT_tdstTransformation_ stTmpMatrix;
    MAT_tdstTransformation_ stMirrorMatrix;
    MAT_tdstTransformation_* hMatrix;
    MTH3D_tdstVector_ stPoint[12];
    MTH3D_tdstVector_ stNormal;
    MTH3D_tdstVector_ stVect2;
    MTH3D_tdstVector_ stVect1;
    MTH3D_tdstVector_ stKCam;
    MTH3D_tdstVector_ stJCam;
    MTH3D_tdstVector_ stICam;
    short kk;
    short k;
    short xNbFaces;
    short idxPt[12];
    short idxPt3;
    short idxPt2;
    short idxPt1;
    SECT_tdstSector_* hSectorObject;
    MTH3D_tdstVector_ stTempVectorForMultiplication;
    char OneWasDrawn;
    unsigned char bTVMode;
    IPO_tdstInstanciatedPhysicalObject_* hMirrorIPO;
    HIE_tdstSuperObject_* hPortalCamera;
    HIE_tdstSuperObject_* hMainCamera;
    MTH3D_tdstVector_ stPreviousPos;
    MTH3D_tdstVector_ stPreviousKCam;
    MTH3D_tdstVector_ stPreviousJCam;
    MTH3D_tdstVector_ stPreviousICam;
    HIE_tdstSuperObject_* hSprObjPortalSector;
    GLD_tdstDeviceAttributes_ stDevAttrib;
    float xWaterDistance;
    GLI_tdstCamera_* p_stCpyCam;
    GLI_tdstCamera_ stCopyCam;
    GLI_tdstCamera_ stSymCam;
    MAT_tdstTransformation_ stTransMatrix;
    MTH3D_tdstVector_ stGlobalPositionOfSymCamera;
    MTH3D_tdstVector_ stI;
    int p_hGlobalMatrixOfMirror[6];
    MTH3D_tdstVector_ stPointOfMirror;
    MTH3D_tdstVector_ stNormalOfMirror;
    int p_hHandleOfGeometricMirror[6];
    short i;
    char bRejected[6];
    unsigned char p_bIDrawTheMirror[6];
    short shNbOfMirror;
    int hSectorOfMirror[6];
    int hHandleOfMirror[6];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 279–280 */
/* addr: 0x0031bed0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 279
 *   +0x0014 -> line 280
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_iZCompare(void* arg1, void* arg2)
{
    float x;
    x = ((MTH3D_tdstVector_*)arg2)->xZ -
        ((MTH3D_tdstVector_*)arg1)->xZ;
    return x;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 162–235 */
/* addr: 0x0031bef0  size: 396 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 162
 *   +0x0040 -> line 173
 *   +0x0050 -> line 184
 *   +0x0064 -> line 186
 *   +0x0080 -> line 198
 *   +0x008c -> line 201
 *   +0x0090 -> line 202
 *   +0x0094 -> line 201
 *   +0x0098 -> line 202
 *   +0x009c -> line 201
 *   +0x00a0 -> line 202
 *   +0x00b8 -> line 208
 *   +0x00c8 -> line 213
 *   +0x00e0 -> line 215
 *   +0x00f8 -> line 229
 *   +0x0108 -> line 232
 *   +0x0110 -> line 233
 *   +0x0118 -> line 232
 *   +0x011c -> line 233
 *   +0x0120 -> line 232
 *   +0x0124 -> line 233
 *   +0x0140 -> line 234
 *   +0x0160 -> line 235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SCT_fn_vFindAllMirrorsInVisibleSector(GLD_tdstViewportAttributes_* _p_stVpt, HIE_tdstSuperObject_* _hSprObjSector, HIE_tdstSuperObject_** p_hHandleOfMirror, GEO_tdstGeometricObject_** p_hHandleOfGometricMirror, HIE_tdstSuperObject_** p_hSectorOfMirror, short* p_shNbOfMirrors)
{
    short shTempNbOfMirrors;
    short i;
    short xI;
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hGraphicElement;
    /* TODO: decompile from asm/... */
}
