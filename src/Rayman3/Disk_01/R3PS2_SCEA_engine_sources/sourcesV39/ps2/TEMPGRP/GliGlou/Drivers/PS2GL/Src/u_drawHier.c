/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
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
typedef struct tdstBrain_ tdstBrain_;
typedef struct SDC_VertexArrays_ SDC_VertexArrays_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct anon_0 anon_0;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_9 anon_9;
typedef struct anon_11 anon_11;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct tdstEvent_ tdstEvent_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct tagListNode tagListNode;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_2 anon_2;
typedef struct anon_5 anon_5;
typedef struct anon_7 anon_7;
typedef struct anon_4 anon_4;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_3 anon_3;
typedef struct anon_10 anon_10;
typedef struct anon_13 anon_13;
typedef struct anon_8 anon_8;
typedef struct anon_12 anon_12;
typedef struct anon_6 anon_6;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct GLI_tdstZBufferForLight_ GLI_tdstZBufferForLight_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct anon_1 anon_1;
typedef struct ACP_tdst2DUVValues_ ACP_tdst2DUVValues_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct GEO_tdstTripledIndex_ GEO_tdstTripledIndex_;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct tdstCouple_ tdstCouple_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct tagListData tagListData;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct stMorphData stMorphData;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;

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

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GLI_tdstTexture_ {
    int bIsAvailable; /* +0x0 */
    int lTextureQuality; /* +0x4 */
    int p_vBitMap; /* +0x8 */
    int p_vColorTable; /* +0xc */
    int p_stSpecParam; /* +0x10 */
    int lTextureCaps; /* +0x14 */
    unsigned short lHeight; /* +0x18 */
    unsigned short lWidth; /* +0x1a */
    unsigned short lRealHeight; /* +0x1c */
    unsigned short lRealWidth; /* +0x1e */
    float fAddU; /* +0x20 */
    float fAddV; /* +0x24 */
    int lIncrementIsEnable; /* +0x28 */
    unsigned int lChromakeyColorRGBA; /* +0x2c */
    unsigned int ulBlendColorRGBA; /* +0x30 */
    int lNumberOfLod; /* +0x34 */
    unsigned int lCompressionCounter; /* +0x38 */
    unsigned int lTypeOfCompression; /* +0x3c */
    unsigned int lTypeOfMipMapping; /* +0x40 */
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
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

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
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

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct SDC_VertexArrays_ {
    unsigned int OptType; /* +0x0 */
    unsigned int NbElements; /* +0x4 */
    GLI_tdstMaterial_** pArrayOfMaterials; /* +0x8 */
    float ** pArrayOfVertexArrays; /* +0xc */
    int pVertexArraySizes; /* +0x10 */
    int pNbTrianglesPerElement; /* +0x14 */
    int pbIsTransparent; /* +0x18 */
    unsigned int FrameDeformed; /* +0x1c */
    int pSDLs; /* +0x20 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct IPO_tdstInstanciatedPhysicalObject_ {
    PO_tdstPhysicalObject_* _hPhysicalObject; /* +0x0 */
    int _hCurrentRadiosity; /* +0x4 */
    int a_hRadiosity; /* +0x8 */
    HIE_tdstSuperObject_* hPortalCamera; /* +0xc */
    unsigned int ulLastTransitionID; /* +0x10 */
    float fLastRatioUsed; /* +0x14 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    tdstEvent_* d_stAnimEvent; /* +0x4 */
    stMorphData* d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
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

struct anon_0 {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
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

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_tdstCineActor_ {
    tdstSubAnim_ stSubAnim; /* +0x0 */
    tdstSubAnimInUse_* hSubAnimInUse; /* +0x4 */
    char szAnimation[255]; /* +0x8 */
    tdstEngineObject_* p_stActor; /* +0x108 */
    tdstState_* p_stStateAfterCine; /* +0x10c */
    tdstState_* p_stStateDuringCine; /* +0x110 */
    tdstState_* p_stTmpStateForActor; /* +0x114 */
    unsigned char bSkipIA; /* +0x118 */
    unsigned char bSkipMeca; /* +0x119 */
    unsigned char bPreviousIAState; /* +0x11a */
    unsigned char bPreviousMecaState; /* +0x11b */
    unsigned char ucRepeatAnimation; /* +0x11c */
    signed char scSpeedAnim; /* +0x11d */
    unsigned char bMoveActorAtTheBegin; /* +0x11e */
    HIE_tdstSuperObject_* hSPORef; /* +0x120 */
    unsigned char bMoveActorAtTheEnd; /* +0x124 */
    unsigned short usChannel; /* +0x126 */
    unsigned char bPlayingAnim; /* +0x128 */
    unsigned char bIsASubAnim; /* +0x129 */
    unsigned char bChangeComportBegin; /* +0x12a */
    tdstComport_* p_stIntelBegin; /* +0x12c */
    unsigned char bChangeReflexBegin; /* +0x130 */
    tdstComport_* p_stReflexBegin; /* +0x134 */
    unsigned char bChangeComportEnd; /* +0x138 */
    tdstComport_* p_stIntelEnd; /* +0x13c */
    unsigned char bChangeReflexEnd; /* +0x140 */
    tdstComport_* p_stReflexEnd; /* +0x144 */
    unsigned char bUseSoundRequestBegin; /* +0x148 */
    unsigned char bUseVoiceRequestBegin; /* +0x149 */
    unsigned char bUseMusicRequestBegin; /* +0x14a */
    unsigned char bUseAmbianceRequestBegin; /* +0x14b */
    _SND_tdstBlockEvent* pSoundRequestBegin; /* +0x14c */
    _SND_tdstBlockEvent* pVoiceRequestBegin; /* +0x150 */
    _SND_tdstBlockEvent* pMusicRequestBegin; /* +0x154 */
    _SND_tdstBlockEvent* pAmbianceRequestBegin; /* +0x158 */
    unsigned char bUseSoundRequestEnd; /* +0x15c */
    unsigned char bUseVoiceRequestEnd; /* +0x15d */
    unsigned char bUseMusicRequestEnd; /* +0x15e */
    unsigned char bUseAmbianceRequestEnd; /* +0x15f */
    _SND_tdstBlockEvent* pSoundRequestEnd; /* +0x160 */
    _SND_tdstBlockEvent* pVoiceRequestEnd; /* +0x164 */
    _SND_tdstBlockEvent* pMusicRequestEnd; /* +0x168 */
    _SND_tdstBlockEvent* pAmbianceRequestEnd; /* +0x16c */
    CINE_tdstCine_* pCine; /* +0x170 */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn hChannelLink; /* +0x174 */
    CINE_tdstCineActor_* hNextBrotherDyn; /* +0x180 */
    CINE_tdstCineActor_* hPrevBrotherDyn; /* +0x184 */
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn* hFatherDyn; /* +0x188 */
};

struct tdstSubAnimInUse_ {
    tdstSubAnimInUse_* hNextBrotherDyn; /* +0x0 */
    tdstSubAnimInUse_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn* hFatherDyn; /* +0x8 */
    tdstSubAnim_* p_stTheSubAnim; /* +0xc */
    int d_ucEventActivation; /* +0x10 */
    unsigned int ulStartFrame; /* +0x14 */
    unsigned int ulCustombit; /* +0x18 */
    unsigned int ulLoop; /* +0x1c */
    float xFrameNumber; /* +0x20 */
    unsigned char ucNextEvent; /* +0x24 */
    unsigned char bStop; /* +0x25 */
    unsigned char bMerge; /* +0x26 */
};

struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
};

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

struct tdstFrame3d_ {
    tdstElement3d_* p_stArrayOfElts3d; /* +0x0 */
    MTH3D_tdstMatrix_* p_stAngularSpeedMatrix; /* +0x4 */
    MTH3D_tdstVector_* p_stLinearSpeedVector; /* +0x8 */
    tdstPLA_Hierarchy_ stHierarchy; /* +0xc */
    tdstPLA_Deformation_ stDeformation; /* +0x14 */
    tdstAnim3d_* p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_9 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_11 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_9 st_UVStaticPos; /* +0xc */
    anon_9 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    anon_11 a_stMultiMaterial[4]; /* +0x88 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*pData)[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    _sceDmaTag tagDma; /* +0x20 */
    anon_0 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct tag_GLtexture {
    float vTexBorderColor[4]; /* +0x0 */
    unsigned int eDimension; /* +0x10 */
    unsigned int eTexFilterMin; /* +0x14 */
    unsigned int eTexFilterMag; /* +0x18 */
    unsigned int eTexWrapS; /* +0x1c */
    unsigned int eTexWrapT; /* +0x20 */
    int Image[7]; /* +0x24 */
    int iClutOffset; /* +0x40 */
    int iClutSize; /* +0x44 */
    int clut; /* +0x48 */
    unsigned char bClutUserMaintain; /* +0x4c */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct tag_GLtexture_set {
    float vTexEnvColor[4]; /* +0x0 */
    unsigned int eTexEnvMode; /* +0x10 */
    unsigned int nTexGenBits; /* +0x14 */
    unsigned short nTexGenModeS; /* +0x18 */
    unsigned short nTexGenModeT; /* +0x1a */
    unsigned short nTexGenModeR; /* +0x1c */
    unsigned short nTexGenModeQ; /* +0x1e */
    float vTexGenCoeffS[4]; /* +0x20 */
    float vTexGenCoeffT[4]; /* +0x30 */
    float vTexGenCoeffR[4]; /* +0x40 */
    float vTexGenCoeffQ[4]; /* +0x50 */
};

struct anon_2 {
    unsigned long SBP : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long SBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long SPSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long DBP : 14; /* bit 32, byte +0x0 */
    unsigned long pad46 : 2; /* bit 46, byte +0x0 */
    unsigned long DBW : 6; /* bit 48, byte +0x0 */
    unsigned long pad54 : 2; /* bit 54, byte +0x0 */
    unsigned long DPSM : 6; /* bit 56, byte +0x0 */
    unsigned long pad62 : 2; /* bit 62, byte +0x0 */
};

struct anon_5 {
    unsigned long SSAX : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SSAY : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long DSAX : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long DSAY : 11; /* bit 48, byte +0x0 */
    unsigned long DIR : 2; /* bit 59, byte +0x0 */
    unsigned long pad61 : 3; /* bit 61, byte +0x0 */
};

struct anon_7 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_4 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagGsLoadImage {
    anon_0 gifTag; /* +0x0 */
    anon_2 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x1c..0x1f */
    anon_5 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x2c..0x2f */
    anon_7 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    unsigned char _extractor_padding_02[4]; /* implicitly added by extractor; +0x3c..0x3f */
    anon_4 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_3 {
    unsigned long pad00; /* +0x0 */
};

struct anon_10 {
    unsigned long TBP0 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW : 6; /* bit 14, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long TW : 4; /* bit 26, byte +0x0 */
    unsigned long TH : 4; /* bit 30, byte +0x0 */
    unsigned long TCC : 1; /* bit 34, byte +0x0 */
    unsigned long TFX : 2; /* bit 35, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_13 {
    unsigned long LCM : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 1; /* bit 1, byte +0x0 */
    unsigned long MXL : 3; /* bit 2, byte +0x0 */
    unsigned long MMAG : 1; /* bit 5, byte +0x0 */
    unsigned long MMIN : 3; /* bit 6, byte +0x0 */
    unsigned long MTBA : 1; /* bit 9, byte +0x0 */
    unsigned long pad10 : 9; /* bit 10, byte +0x0 */
    unsigned long L : 2; /* bit 19, byte +0x0 */
    unsigned long pad21 : 11; /* bit 21, byte +0x0 */
    unsigned long K : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_8 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_12 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_6 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    anon_0 gifTag; /* +0x0 */
    anon_3 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x1c..0x1f */
    anon_10 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x2c..0x2f */
    anon_13 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    unsigned char _extractor_padding_02[4]; /* implicitly added by extractor; +0x3c..0x3f */
    anon_8 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    unsigned char _extractor_padding_03[4]; /* implicitly added by extractor; +0x4c..0x4f */
    anon_12 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    unsigned char _extractor_padding_04[4]; /* implicitly added by extractor; +0x5c..0x5f */
    anon_6 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct tagGLtexname {
    unsigned char bAllocated; /* +0x0 */
    unsigned char bResident; /* +0x1 */
    float fPrioritize; /* +0x4 */
    unsigned int eDimension; /* +0x8 */
    int iTexBlock; /* +0xc */
    tag_GLtexture* pTex1D; /* +0x10 */
    tag_GLtexture* pTex2D; /* +0x14 */
    tag_GLtexture* pTexCube; /* +0x18 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct tag_GLlight {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vPosition[4]; /* +0x30 */
    float vDirection[4]; /* +0x40 */
    float fSpotExponent; /* +0x50 */
    float fSpotCutoff; /* +0x54 */
    float fCosCutoff; /* +0x58 */
    float fConstantAttenuation; /* +0x5c */
    float fLinearAttenuation; /* +0x60 */
    float fQuadraticAttenuation; /* +0x64 */
};

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct tagGLcontext {
    unsigned int nEnableBits; /* +0x0 */
    float fPointSize; /* +0x4 */
    int iLineFactor; /* +0x8 */
    unsigned short nLineMask; /* +0xc */
    float fLineWidth; /* +0x10 */
    unsigned int eCullFaceMode; /* +0x14 */
    unsigned int eFrontFaceMode; /* +0x18 */
    unsigned int ePolygonMode[2]; /* +0x1c */
    unsigned char aPolygonMask[128]; /* +0x24 */
    unsigned int eClippingFunction; /* +0xa4 */
    unsigned int eSPRMode; /* +0xa8 */
    unsigned char bSPRSynchronization; /* +0xac */
    unsigned int eTexConvMode; /* +0xb0 */
    unsigned int eClutConvMode; /* +0xb4 */
    unsigned int eTexUserMaintainMode; /* +0xb8 */
    unsigned int uiMotionBlurIntensity; /* +0xbc */
    unsigned short iAccumDepth; /* +0xc0 */
    unsigned char bAlphaChannelReduce; /* +0xc2 */
    unsigned int uiCurrentDmaBuffer; /* +0xc4 */
    unsigned short usDontUpdateBits; /* +0xc8 */
    unsigned int uiFastPathBits; /* +0xcc */
    unsigned int uiDmaOmitDataBits; /* +0xd0 */
    unsigned int uiBoundingSphereBits; /* +0xd4 */
    unsigned int uiStaticDisplayListMaxSize; /* +0xd8 */
    unsigned int uiStaticDisplayListBits; /* +0xdc */
    signed char ucSDLObjectReserveSize; /* +0xe0 */
    unsigned char _extractor_padding_08[15]; /* explicit retail gap; +0xe1..0xef */
    float vScissorBox[4]; /* +0xf0 */
    float fIndexClearValue; /* +0x100 */
    unsigned int eAlphaTestFunc; /* +0x104 */
    float fAlphaTestRef; /* +0x108 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x10c..0x10f */
    float vAccumClearValue[4]; /* +0x110 */
    unsigned int eBlendSrcFactor; /* +0x120 */
    unsigned int eBlendDstFactor; /* +0x124 */
    unsigned int eDrawBuffer; /* +0x128 */
    unsigned int eBufferReadMode; /* +0x12c */
    float vColorClearValue[4]; /* +0x130 */
    unsigned char abColorMask[4]; /* +0x140 */
    unsigned int eDepthFunc; /* +0x144 */
    float fDepthClearValue; /* +0x148 */
    unsigned char eDepthWriteMask; /* +0x14c */
    unsigned int eStencilFunc; /* +0x150 */
    int iStencilRef; /* +0x154 */
    unsigned int nStencilValueMask; /* +0x158 */
    unsigned int nStencilWriteMask; /* +0x15c */
    unsigned int eOpFail; /* +0x160 */
    unsigned int eOpZFail; /* +0x164 */
    unsigned int eOpZPass; /* +0x168 */
    int iStencilClearValue; /* +0x16c */
    unsigned int eLogicOpCode; /* +0x170 */
    unsigned int nLightBits; /* +0x174 */
    unsigned int bPointLighting; /* +0x178 */
    unsigned int nTextureEnableBits; /* +0x17c */
    tag_GLtexture_set TextureSet[2]; /* +0x180 */
    tag_GLtexture_set* pCurTexture; /* +0x240 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x244..0x24f */
    tagGsLoadImage stGsLoadImage; /* +0x250 */
    tagGsSetTex astGsSetTex[2]; /* +0x2a0 */
    tagGsSetTex* pstCurGsSetTex; /* +0x380 */
    unsigned int anCurTexName1D[2]; /* +0x384 */
    unsigned int anCurTexName2D[2]; /* +0x38c */
    unsigned int nCurTexNameCube; /* +0x394 */
    tagGLtexname aTexName[512]; /* +0x398 */
    unsigned int eTexLastBindTarget; /* +0x3b98 */
    unsigned int nTexLastBindName; /* +0x3b9c */
    int iMaxTexBlockCount; /* +0x3ba0 */
    tagGLtexblock aBlockMap[604]; /* +0x3ba4 */
    unsigned int nTexMemBegin; /* +0x4514 */
    unsigned int nTexMemEnd; /* +0x4518 */
    int aTexLevelCount[10]; /* +0x451c */
    tagGLtexindex aTexLevelIndex[1203]; /* +0x4544 */
    int iClutSize; /* +0x5810 */
    unsigned char bClutResident; /* +0x5814 */
    int clut; /* +0x5818 */
    unsigned char bMatrixChanged; /* +0x581c */
    unsigned char bBSParamChanged; /* +0x581d */
    unsigned char bLightsChanged; /* +0x581e */
    unsigned char bMaterialChanged; /* +0x581f */
    unsigned char bFogChanged; /* +0x5820 */
    unsigned char bCullfaceChanged; /* +0x5821 */
    unsigned int eOldBeginMode; /* +0x5824 */
    unsigned char abTex1DChanged[2]; /* +0x5828 */
    unsigned char abTex2DChanged[2]; /* +0x582a */
    unsigned char bTexCubeChanged; /* +0x582c */
    int pfnLastCall; /* +0x5830 */
    unsigned int nEvaluatorBits; /* +0x5834 */
    unsigned char bNeedNormal; /* +0x5838 */
    tag_GLlight Lights[8]; /* +0x5840 */
    unsigned char bLocalViewer; /* +0x5bc0 */
    unsigned char bLightModelTwoSide; /* +0x5bc1 */
    unsigned char _extractor_padding_09[14]; /* explicit retail gap; +0x5bc2..0x5bcf */
    float vAmbient[4]; /* +0x5bd0 */
    unsigned int eColorControl; /* +0x5be0 */
    unsigned char bLightModelDiffuseOnly; /* +0x5be4 */
    tag_GLmaterial Materials[2]; /* +0x5bf0 */
    unsigned int eColorMaterialFace; /* +0x5c90 */
    unsigned int eColorMaterialMode; /* +0x5c94 */
    unsigned int eShadeModel; /* +0x5c98 */
    unsigned int eFogMode; /* +0x5c9c */
    int ivFogColor[4]; /* +0x5ca0 */
    float fFogDensity; /* +0x5cb0 */
    float fFogLinearStart; /* +0x5cb4 */
    float fFogLinearEnd; /* +0x5cb8 */
    float fFogIndex; /* +0x5cbc */
    unsigned int eHintPerspectiveCorrection; /* +0x5cc0 */
    unsigned int eHintSmoothPoint; /* +0x5cc4 */
    unsigned int eHintSmoothLine; /* +0x5cc8 */
    unsigned int eHintSmoothPolygon; /* +0x5ccc */
    unsigned int eHintFog; /* +0x5cd0 */
    unsigned int uiListBase; /* +0x5cd4 */
    tagListData* pCurListData; /* +0x5cd8 */
    tagGLlistcalls* pCurListCalls; /* +0x5cdc */
    tagGLlistcalls* pPreListCalls; /* +0x5ce0 */
    tagGLprimbuf* pCurPrimBuf; /* +0x5ce4 */
    anon_1* pCurParamBegin; /* +0x5ce8 */
    tagGLprimbuf** ppCurPrimBufHead; /* +0x5cec */
    float (*pCurListVData)[4]; /* +0x5cf0 */
    int pCurListVCode; /* +0x5cf4 */
    int pCurListTexUnit; /* +0x5cf8 */
    tagGLlistpool ListPool; /* +0x5cfc */
    unsigned int nClientEnableBits; /* +0x5f08 */
    tagGLArrayInfo VertexArray; /* +0x5f0c */
    tagGLArrayInfo ColorArray[2]; /* +0x5f1c */
    tagGLArrayInfo NormalArray; /* +0x5f3c */
    tagGLArrayInfo TexArray[2]; /* +0x5f4c */
    tagGLArrayInfo IndexArray; /* +0x5f6c */
    tagGLArrayInfo EdgeFlagArray; /* +0x5f7c */
    unsigned int iCurClientTextureSet; /* +0x5f8c */
    unsigned int iFrameCount; /* +0x5f90 */
    unsigned int iDepthBuffer; /* +0x5f94 */
    unsigned int iDepthBufferBitDepth; /* +0x5f98 */
    unsigned int iFrameBufferBitDepth; /* +0x5f9c */
    unsigned int iFrameBuffer0; /* +0x5fa0 */
    unsigned int iFrameBuffer1; /* +0x5fa4 */
    unsigned int iFrameBufferFront; /* +0x5fa8 */
    unsigned int iFrameBufferBack; /* +0x5fac */
    int iPackAlignment; /* +0x5fb0 */
    unsigned char bFrameMode; /* +0x5fb4 */
    int iMipMapCoeff; /* +0x5fb8 */
    int iAlignMask; /* +0x5fbc */
    unsigned char bMapColor; /* +0x5fc0 */
    unsigned char bMapStencil; /* +0x5fc1 */
    int iIndexShift; /* +0x5fc4 */
    int iIndexOffset; /* +0x5fc8 */
    float fRedBias; /* +0x5fcc */
    float fRedScale; /* +0x5fd0 */
    float fGreenBias; /* +0x5fd4 */
    float fGreenScale; /* +0x5fd8 */
    float fBlueBias; /* +0x5fdc */
    float fBlueScale; /* +0x5fe0 */
    float fAlphaBias; /* +0x5fe4 */
    float fAlphaScale; /* +0x5fe8 */
    float fDepthBias; /* +0x5fec */
    float fDepthScale; /* +0x5ff0 */
    float fPixelZoomX; /* +0x5ff4 */
    float fPixelZoomY; /* +0x5ff8 */
    unsigned int nClipBits; /* +0x5ffc */
    int iMaxClipPlanes; /* +0x6000 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x6004..0x600f */
    float avClipPlane[6][4]; /* +0x6010 */
    unsigned int eMatrixMode; /* +0x6070 */
    float (*pCurMatrix)[4][4]; /* +0x6074 */
    float (*pCurStack)[4][4]; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    unsigned char _extractor_padding_10[8]; /* explicit retail gap; +0x6088..0x608f */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    unsigned char _extractor_padding_11[8]; /* explicit retail gap; +0x60a8..0x60af */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    unsigned char _extractor_padding_12[7]; /* explicit retail gap; +0x6119..0x611f */
    float valistColor[2][4]; /* +0x6120 */
    float (*pvlistColor)[4]; /* +0x6140 */
    unsigned char _extractor_padding_04[12]; /* implicitly added by extractor; +0x6144..0x614f */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    float (*pvlistTexCoord)[4]; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    float (*pvRasterTexCoord)[4]; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    unsigned char _extractor_padding_13[11]; /* explicit retail gap; +0x61e5..0x61ef */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    float (*pfvPackaeBSs)[4]; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    float ModelViewMatrix[4][4]; /* +0x62b0 */
    float NormalMatrix[4][4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    unsigned char _extractor_padding_05[12]; /* implicitly added by extractor; +0x6334..0x633f */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    unsigned char _extractor_padding_06[12]; /* implicitly added by extractor; +0x67c4..0x67cf */
    float ProjectionStack[4][4][4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    float TextureMatrix[2][4][4]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    unsigned char _extractor_padding_14[8]; /* explicit retail gap; +0x6978..0x697f */
    float TextureStacks[2][4][4][4]; /* +0x6980 */
    float (*pTextureMatrix)[4][4]; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    float (*pTextureStack)[4][4]; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    float (*pVBuf)[4]; /* +0x6b9c */
    float (*pCBuf)[4]; /* +0x6ba0 */
    float (*pNBuf)[4]; /* +0x6ba4 */
    float (*pTBuf)[4]; /* +0x6ba8 */
    float (*pCBuf_b)[4]; /* +0x6bac */
    float (*pTBuf_b)[4]; /* +0x6bb0 */
    float (*pVIFDMABuf)[4]; /* +0x6bb4 */
    float (*pVIFDMABufUnaligned)[4]; /* +0x6bb8 */
    float (*pVIFInBuf)[4]; /* +0x6bbc */
    float (*pVIFOutBuf)[4]; /* +0x6bc0 */
    float (*pVIFIBufTail)[4]; /* +0x6bc4 */
    float (*pVIFOBufTail)[4]; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    _sceDmaTag* pVU1_DMA_parameters; /* +0x6bd0 */
    _sceDmaTag* pVU1_DMA_buf0; /* +0x6bd4 */
    _sceDmaTag* pVU1_DMA_buf1; /* +0x6bd8 */
    float (*pmClipping)[4][4]; /* +0x6bdc */
    float (*pmNormal)[4][4]; /* +0x6be0 */
    float (*pmClippingScreen)[4][4]; /* +0x6be4 */
    float (*pmLocalScreen)[4][4]; /* +0x6be8 */
    float (*pmModelView)[4][4]; /* +0x6bec */
    float (*pvClampLimit)[4]; /* +0x6bf0 */
    int (*pClippingFlags)[4]; /* +0x6bf4 */
    anon_0* pGifTagFan; /* +0x6bf8 */
    float (*pmD)[4][4]; /* +0x6bfc */
    float (*pmVP)[4][4]; /* +0x6c00 */
    float (*pmS)[4][4]; /* +0x6c04 */
    float (*pmh)[4][4]; /* +0x6c08 */
    float (*pvAmbient)[4]; /* +0x6c0c */
    float (*pvEmission)[4]; /* +0x6c10 */
    float (*pvScreenScale)[4]; /* +0x6c14 */
    float (*pvColorRange)[4]; /* +0x6c18 */
    int pfAlpha; /* +0x6c1c */
    int pfShininess; /* +0x6c20 */
    int pnColorMatMasks; /* +0x6c24 */
    int pbFogging; /* +0x6c28 */
    int peFogMode; /* +0x6c2c */
    int pfFogDensity; /* +0x6c30 */
    int pfFogLinearStart; /* +0x6c34 */
    int pfFogLinearEnd; /* +0x6c38 */
    int pbTriangleFan; /* +0x6c3c */
    int pnClipMask; /* +0x6c40 */
    int piClipStep; /* +0x6c44 */
    int pbNormalize; /* +0x6c48 */
    int piReturnAddress; /* +0x6c4c */
    int piEntryAddress; /* +0x6c50 */
    int peClippingMode; /* +0x6c54 */
    int peUseClippingMode; /* +0x6c58 */
    anon_0* pGifTagBuf0; /* +0x6c5c */
    anon_0* pGifTagBuf1; /* +0x6c60 */
    int iCurBuf; /* +0x6c64 */
    float (*pVBuf0)[4]; /* +0x6c68 */
    float (*pNBuf0)[4]; /* +0x6c6c */
    float (*pCBuf0)[4]; /* +0x6c70 */
    float (*pTBuf0)[4]; /* +0x6c74 */
    float (*pCBuf0_b)[4]; /* +0x6c78 */
    float (*pTBuf0_b)[4]; /* +0x6c7c */
    float (*pVBuf1)[4]; /* +0x6c80 */
    float (*pNBuf1)[4]; /* +0x6c84 */
    float (*pCBuf1)[4]; /* +0x6c88 */
    float (*pTBuf1)[4]; /* +0x6c8c */
    float (*pCBuf1_b)[4]; /* +0x6c90 */
    float (*pTBuf1_b)[4]; /* +0x6c94 */
    tagstVIFCode* pMSCAL; /* +0x6c98 */
    unsigned char _extractor_padding_07[4]; /* implicitly added by extractor; +0x6c9c..0x6c9f */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

struct tdstObjectsTableElement_ {
    MTH3D_tdstVector_* p_stCustomZoom; /* +0x0 */
    int h_Target; /* +0x4 */
    unsigned int uwChannelNumber; /* +0x8 */
    unsigned short wTypeOfTarget; /* +0xc */
    unsigned char ucPhoneme; /* +0xe */
    unsigned char ucIntensity; /* +0xf */
    unsigned char ucExpression; /* +0x10 */
};

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    int d_xThresholdsTable; /* +0x8 */
    GEO_tduVSObject_* d_p_stLodDefinitions; /* +0xc */
    int d_hRLI; /* +0x10 */
    int lNumberOfRLI; /* +0x14 */
};

struct GLI_tdstZBufferForLight_ {
    int lSizeX; /* +0x0 */
    int lSizeY; /* +0x4 */
    float fCoefX; /* +0x8 */
    float fCoefY; /* +0xc */
    int p_stZBufferMap; /* +0x10 */
    int p_stMiddleZBufferMap; /* +0x14 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt {
    tdstObjectsTablesList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstFamilyList_ {
    tdstFamilyList_* hNextBrotherDyn; /* +0x0 */
    tdstFamilyList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToFamilyListDyn* hFatherDyn; /* +0x8 */
    int otObjectFamilyType; /* +0xc */
    LST2_tdstAnchorTotdxHandleToStateOpt hForStateArray; /* +0x10 */
    LST2_tdstAnchorTotdxHandleToSubAnimOpt hForSubAnimArray; /* +0x18 */
    tdstObjectsTablesList_* h_DefaultObjectsTable; /* +0x20 */
    LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt hForObjectsTablesList; /* +0x24 */
    COL_tdstBoundingSphere_* hBoundingSphere; /* +0x2c */
    tdstLipsSynchValue_* ax_stLipsSynchValues; /* +0x30 */
    unsigned int ulNumberLipSynchValues; /* +0x34 */
    unsigned int ulLipsChannel; /* +0x38 */
    unsigned int ulNumberOfChannels; /* +0x3c */
    unsigned char ucPriority; /* +0x40 */
    unsigned char ucOptimized; /* +0x41 */
    unsigned char ucStorageBank; /* +0x42 */
    unsigned char ucProperties; /* +0x43 */
};

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
};

struct stInterpolatedPosition {
    float stRot[4]; /* +0x0 */
    float stRotSca[4]; /* +0x10 */
    MTH3D_tdstVector_ stPos; /* +0x20 */
    MTH3D_tdstVector_ stVecSca; /* +0x2c */
    float xPercent; /* +0x38 */
};

struct tag_GLtexture_image {
    unsigned int target; /* +0x0 */
    int inputComponents; /* +0x4 */
    int width; /* +0x8 */
    int height; /* +0xc */
    unsigned int format; /* +0x10 */
    int pixels; /* +0x14 */
    int pixelsAux; /* +0x18 */
    int cbPixels; /* +0x1c */
    int cbPixelsAux; /* +0x20 */
    unsigned char pixelsChanged; /* +0x24 */
    unsigned char bConverted; /* +0x25 */
    unsigned char bUserMaintain; /* +0x26 */
    unsigned int uiSpan; /* +0x28 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct anon_1 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct ACP_tdst2DUVValues_ {
    float xU; /* +0x0 */
    float xV; /* +0x4 */
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

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
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

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstAChannel_ {
    HIE_tdstSuperObject_* hSupObject; /* +0x0 */
    HIE_tdstSuperObject_* hZoomSupObject; /* +0x4 */
    tdstAChannel_* p_stNextActiveChannel; /* +0x8 */
    tdstAChannel_* p_stFatherChannel; /* +0xc */
    stInterpolatedPosition ax_InterpolatedPositions[2]; /* +0x10 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
};

struct tdst3dData_ {
    tdstState_* h_InitialState; /* +0x0 */
    tdstState_* h_CurrentState; /* +0x4 */
    tdstState_* h_FirstStateOfAction; /* +0x8 */
    tdstObjectsTablesList_* h_InitialObjectsTable; /* +0xc */
    tdstObjectsTablesList_* h_CurrentObjectsTable; /* +0x10 */
    tdstFamilyList_* h_Family; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    MAT_tdstTransformation_ stGLIObjectMatrix; /* +0x20 */
    MAT_tdstTransformation_* p_stGLIObjectAbsoluteMatrix; /* +0x80 */
    float xCurrentFrame; /* +0x84 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    int d_ucEventActivation; /* +0x8c */
    tdstCouple_* p_stCurrentHieCouples; /* +0x90 */
    unsigned short wCurrentHieNbCouples; /* +0x94 */
    unsigned short wSizeOfArrayOfElts3d; /* +0x96 */
    tdstState_* h_StateInLastFrame; /* +0x98 */
    tdstState_* h_WantedState; /* +0x9c */
    float xForcedFrame; /* +0xa0 */
    unsigned char ucFlagEndState; /* +0xa4 */
    unsigned char ucFlagEndOfAnim; /* +0xa5 */
    tdstAChannel_* hArrayOfChannels; /* +0xa8 */
    unsigned int ulNumberOfChannels; /* +0xac */
    tdstAChannel_* hFirstActiveChannel; /* +0xb0 */
    tdstFrame3d_ stFrame3d; /* +0xb4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hMorphChannelList; /* +0xd8 */
    unsigned int ulStartTime; /* +0xdc */
    unsigned int ulTimeDelay; /* +0xe0 */
    unsigned int ulTimePreviousFrame; /* +0xe4 */
    float xLastFrame; /* +0xe8 */
    unsigned char bStateJustModified; /* +0xec */
    unsigned char bSkipCurrentFrame; /* +0xed */
    GLI_tdstMaterial_* p_stShadowVisualMaterial; /* +0xf0 */
    GLI_tdstTexture_* p_stShadowTexture; /* +0xf4 */
    float xShadowScaleX; /* +0xf8 */
    float xShadowScaleY; /* +0xfc */
    short xShadowQuality; /* +0x100 */
    unsigned short uwNbEngineFrameSinceLastMechEvent; /* +0x102 */
    unsigned char ucFrameRate; /* +0x104 */
    unsigned char ucFlagModifState; /* +0x105 */
    int lDrawMaskInit; /* +0x108 */
    int lDrawMask; /* +0x10c */
    int lLastComputeFrame; /* +0x110 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x114..0x11f */
    MAT_tdstTransformation_ stLastEventGlobalPosition; /* +0x120 */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    MTH3D_tdstVector_ stLightDirForDynamicShadow; /* +0x188 */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    MTH3D_tdstVector_ stSHWDeformationVector; /* +0x198 */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn hForSubAnimInUseArray; /* +0x1b4 */
    CINE_tdstCineActor_* h_CurrentCineActor; /* +0x1c0 */
    int hSkinMaterial[4]; /* +0x1c4 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    short xSkinIndex[4]; /* +0x1d8 */
};

struct tdstEngineObject_ {
    tdst3dData_* h_3dData; /* +0x0 */
    tdstStandardGame_* h_StandardGame; /* +0x4 */
    tdstDynam_* h_Dynam; /* +0x8 */
    tdstBrain_* h_Brain; /* +0xc */
    tdstCineinfo_* h_Cineinfo; /* +0x10 */
    tdstCollSet_* h_CollSet; /* +0x14 */
    tdstMSWay_* h_MSWay; /* +0x18 */
    tdstMSLight_* h_MSLight; /* +0x1c */
    tdstSectInfo_* h_SectInfo; /* +0x20 */
    tdstMicro_* h_Micro; /* +0x24 */
    tdstMSSound_* h_MSSound; /* +0x28 */
};

struct GEO_tdstTripledIndex_ {
    short a3_xIndex[3]; /* +0x0 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn {
    CINE_tdstCineActor_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCineActor_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_tdstCine_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn hActorList; /* +0x0 */
    CINE_tdstCine_* hNextBrotherDyn; /* +0xc */
    CINE_tdstCine_* hPrevBrotherDyn; /* +0x10 */
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn* hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*pDmaBuffer)[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
    float (*pLastExecDmaBuffer)[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstStandardGame_ {
    int otObjectFamilyType; /* +0x0 */
    int otObjectModelType; /* +0x4 */
    int otObjectPersonalType; /* +0x8 */
    HIE_tdstSuperObject_* h_SuperObject; /* +0xc */
    unsigned char eInitFlagWhenOutOfZone; /* +0x10 */
    unsigned char eInitFlagWhenDeadOrTaken; /* +0x11 */
    unsigned int ulLastTrame; /* +0x14 */
    unsigned int ubf32Capabilities; /* +0x18 */
    unsigned char ucTractionFactor; /* +0x1c */
    unsigned char ucHitPoints; /* +0x1d */
    unsigned char ucHitPointsMax; /* +0x1e */
    unsigned char ucHitPointsMaxMax; /* +0x1f */
    unsigned int ulCustomBits; /* +0x20 */
    unsigned int ulAICustomBits; /* +0x24 */
    unsigned char ucPlatFormType; /* +0x28 */
    unsigned char ucMiscFlags; /* +0x29 */
    unsigned char ucTransparencyZoneMin; /* +0x2a */
    unsigned char ucTransparencyZoneMax; /* +0x2b */
    unsigned int ulSaveCustomBits; /* +0x2c */
    unsigned int ulSaveAICustomBits; /* +0x30 */
    unsigned char ucSaveHitPoints; /* +0x34 */
    unsigned char ucSaveHitPointsMax; /* +0x35 */
    unsigned char ucSaveMiscFlags; /* +0x36 */
    unsigned char ucTooFarLimit; /* +0x37 */
    unsigned char ucImportance; /* +0x38 */
    unsigned char ucOptional; /* +0x39 */
    float a_xCustomFloats[2]; /* +0x3c */
    int a_lCustomLongs[2]; /* +0x44 */
    MTH3D_tdstVector_ a_stCustomVectors[2]; /* +0x4c */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

unsigned int GLI_g_StaticVertexArraySizePrevision;
unsigned int GLI_NbSDLFaces;
int GLI_g_CurrentPriority;
float GLI_g_NearValue;
float GLI_g_FarValue;
unsigned int GLI_g_ForceDestructAllSDLs;
int GLI_g_DesinitAlways;
unsigned int GLI_g_DMAObjectWasRejected;
unsigned int GLI_g_DMA_PreparingOpaque;
unsigned int GLI_g_DMA_DrawingAllNZ;
unsigned int GLI_g_DMA_SomethingWasDrawn;
int DoingMainSector;
unsigned int GLI_g_NumberInList;
unsigned int GLI_g_DrawingSPO;
float GLI_g_SPOMATRIX_Dummy[16];
float GLI_g_TEXTUREMATRIX_Dummy[16];
unsigned int GLI_g_LatestHadAChrome;
int G_pSO;
unsigned int hCurrentSDL;
int g_TextMatrixIsIdentity;
unsigned int GLI_g_bChromeEffectOnThisLayer;
unsigned int GLI_g_ThisLayerHasScrolling;
int GLI_g_HasLightMap;
int GLI_g_HasVertexTransparency;
unsigned int GLI_g_CurrentStage;
tagGLcontext g_PS2glContext;
int GLI_BIG_GLOBALS_p_stObj;
int g_p_stLightMapUForNextObjectToDraw;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
int HIE_g_a_hMatrixStack[50];
int HIE_g_lNbMatrixInStack;
int GLI_BIG_GLOBALS_xFogIsOn;
char GLI_cGlobalFogIsOn;
int gp_stActualWorld;
unsigned int GLI_g_FrameNumber;
int Global_CharacterModuleBeingDisplayed;
int g_p_hHandleOfGeometricShadowObject[10];
short g_p_hHandleOfElementForShadow[10];
int gp_stInactiveDynamicWorld;
int gp_stDynamicWorld;
int GLI_g_hVAContainer;
float g_fFogColor[4];
unsigned int GLI_g_CurrentSDLFogColor;
float GLI_g_OOStartMinusEnd;
float g_fFogStart;
float g_fFogEnd;
int GLI_g_ChristianSlaterMode;
float GLI_BIG_GLOBALS_xGlobalAlpha;
unsigned int NbVerticesToProcessWithoutStrips;
unsigned int NbVerticesToProcessWithStrips;
unsigned int TotalVertexArraySizeWithStrips;
unsigned int TotalVertexArraySizeWithoutStrips;
int GLI_gs_lBackGroundColor;
float GLI_g_fCurrentCameraxAngle;
float GLI_g_fCurrentCameraRatio;
unsigned int GLI_g_MustBlocIn30FPS;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 169–169 */
/* addr: 0x002b6d90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 169
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDisplayLogo(void)
{
}

void GLI_vCleanDispTemporaryDataSPO(HIE_tdstSuperObject_* h_SuperObject);
void GLI_vCleanGeoObj(GEO_tdstGeometricObject_* pObj);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 2064–2411 */
/* addr: 0x002b6da0  size: 2008 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2064
 *   +0x0004 -> line 2100
 *   +0x0008 -> line 2064
 *   +0x0014 -> line 2072
 *   +0x0018 -> line 2064
 *   +0x001c -> line 2073
 *   +0x0020 -> line 2064
 *   +0x0048 -> line 2076
 *   +0x0050 -> line 2100
 *   +0x0054 -> line 2079
 *   +0x0058 -> line 2081
 *   +0x005c -> line 2100
 *   +0x006c -> line 2102
 *   +0x0070 -> line 2103
 *   +0x007c -> line 2104
 *   +0x009c -> line 2105
 *   +0x00a4 -> line 2108
 *   +0x00ac -> line 2109
 *   +0x00b4 -> line 2112
 *   +0x00d0 -> line 2114
 *   +0x00e4 -> line 2115
 *   +0x00ec -> line 2118
 *   +0x0104 -> line 2120
 *   +0x012c -> line 2122
 *   +0x014c -> line 2124
 *   +0x0168 -> line 2127
 *   +0x0174 -> line 2130
 *   +0x0190 -> line 2131
 *   +0x01ac -> line 2136
 *   +0x01b8 -> line 2137
 *   +0x01dc -> line 2139
 *   +0x01e0 -> line 2144
 *   +0x01e4 -> line 2139
 *   +0x01f8 -> line 2144
 *   +0x0204 -> line 2152
 *   +0x0210 -> line 2154
 *   +0x0224 -> line 2156
 *   +0x0254 -> line 2158
 *   +0x0258 -> line 2160
 *   +0x0260 -> line 2163
 *   +0x0268 -> line 2165
 *   +0x026c -> line 2167
 *   +0x0270 -> line 2168
 *   +0x0284 -> line 2169
 *   +0x028c -> line 2172
 *   +0x0290 -> line 2175
 *   +0x029c -> line 2178
 *   +0x02a0 -> line 2177
 *   +0x02a4 -> line 2178
 *   +0x02b4 -> line 2180
 *   +0x02c0 -> line 2183
 *   +0x02c4 -> line 2182
 *   +0x02c8 -> line 2183
 *   +0x02d8 -> line 2185
 *   +0x02e4 -> line 2187
 *   +0x02e8 -> line 2188
 *   +0x02f4 -> line 2191
 *   +0x0300 -> line 2193
 *   +0x0308 -> line 2194
 *   +0x031c -> line 2197
 *   +0x0330 -> line 2200
 *   +0x0334 -> line 2207
 *   +0x0338 -> line 2205
 *   +0x033c -> line 2207
 *   +0x0340 -> line 2206
 *   +0x0344 -> line 2200
 *   +0x0348 -> line 2207
 *   +0x034c -> line 2200
 *   +0x0350 -> line 2207
 *   +0x0354 -> line 2200
 *   +0x035c -> line 2207
 *   +0x0374 -> line 2209
 *   +0x0378 -> line 2211
 *   +0x037c -> line 2216
 *   +0x03ac -> line 2221
 *   +0x03c4 -> line 2222
 *   +0x03d4 -> line 2223
 *   +0x03e0 -> line 2228
 *   +0x03ec -> line 2229
 *   +0x03f8 -> line 2231
 *   +0x0400 -> line 2232
 *   +0x040c -> line 2243
 *   +0x0414 -> line 2253
 *   +0x0420 -> line 2255
 *   +0x044c -> line 2257
 *   +0x0450 -> line 2259
 *   +0x0458 -> line 2262
 *   +0x0460 -> line 2267
 *   +0x0468 -> line 2270
 *   +0x046c -> line 2271
 *   +0x0470 -> line 2273
 *   +0x0478 -> line 2276
 *   +0x04a8 -> line 2283
 *   +0x04c4 -> line 2286
 *   +0x04d0 -> line 2289
 *   +0x04d4 -> line 2290
 *   +0x04d8 -> line 2296
 *   +0x04e4 -> line 2298
 *   +0x04ec -> line 2299
 *   +0x04f8 -> line 2300
 *   +0x0500 -> line 2303
 *   +0x050c -> line 2304
 *   +0x0518 -> line 2307
 *   +0x0524 -> line 2310
 *   +0x0530 -> line 2311
 *   +0x053c -> line 2315
 *   +0x0544 -> line 2316
 *   +0x0550 -> line 2317
 *   +0x0560 -> line 2319
 *   +0x0570 -> line 2321
 *   +0x0580 -> line 2322
 *   +0x0590 -> line 2323
 *   +0x0594 -> line 2325
 *   +0x05a0 -> line 2326
 *   +0x05ac -> line 2328
 *   +0x05b8 -> line 2329
 *   +0x05c4 -> line 2331
 *   +0x05cc -> line 2332
 *   +0x05d8 -> line 2333
 *   +0x05e8 -> line 2335
 *   +0x05f8 -> line 2337
 *   +0x05fc -> line 2338
 *   +0x0600 -> line 2341
 *   +0x060c -> line 2343
 *   +0x0618 -> line 2344
 *   +0x0624 -> line 2345
 *   +0x0628 -> line 2347
 *   +0x062c -> line 2363
 *   +0x0638 -> line 2347
 *   +0x063c -> line 2363
 *   +0x0644 -> line 2364
 *   +0x0658 -> line 2365
 *   +0x066c -> line 2366
 *   +0x0680 -> line 2368
 *   +0x0698 -> line 2369
 *   +0x06b0 -> line 2373
 *   +0x06bc -> line 2375
 *   +0x06c4 -> line 2376
 *   +0x06d0 -> line 2379
 *   +0x06e0 -> line 2381
 *   +0x06ec -> line 2382
 *   +0x06f8 -> line 2384
 *   +0x0704 -> line 2389
 *   +0x0710 -> line 2390
 *   +0x071c -> line 2392
 *   +0x0724 -> line 2393
 *   +0x0730 -> line 2397
 *   +0x0734 -> line 2394
 *   +0x0738 -> line 2397
 *   +0x0740 -> line 2398
 *   +0x0748 -> line 2400
 *   +0x0754 -> line 2402
 *   +0x0758 -> line 2404
 *   +0x0760 -> line 2406
 *   +0x0764 -> line 2404
 *   +0x077c -> line 2406
 *   +0x0784 -> line 2408
 *   +0x078c -> line 2409
 *   +0x0790 -> line 2410
 *   +0x07a8 -> line 2411
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDMABufferDrawEIT(GEO_tdstGeometricObject_* pObj, GEO_tdstElementIndexedTriangles_* p_stEIT, ISI_tdstColor_* pRLIs, unsigned int Index)
{
    unsigned int hRef;
    unsigned int KeepNormals;
    unsigned int bMultiTexture;
    unsigned int LayerTypes;
    GLI_tdstMaterial_* hVisualMaterial;
    SDC_VertexArrays_* pSDC_VA;
    float (*pN)[4];
    float (*pC)[4];
    float (*pT)[4];
    float (*pTChrome)[4];
    float (*pTC2)[4];
    float (*pTC1)[4];
    float (*pV)[4];
    float (*pVA)[4];
    unsigned int NbVerticesAlignedColors;
    unsigned int NbVerticesAlignedUVs;
    unsigned int NbVertices;
    unsigned int stage;
    unsigned int NbStages;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1747–2058 */
/* addr: 0x002b7580  size: 1616 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1747
 *   +0x0004 -> line 1778
 *   +0x0008 -> line 1747
 *   +0x0030 -> line 1765
 *   +0x0038 -> line 1778
 *   +0x003c -> line 1768
 *   +0x0040 -> line 1769
 *   +0x0044 -> line 1778
 *   +0x0054 -> line 1780
 *   +0x0058 -> line 1781
 *   +0x0064 -> line 1782
 *   +0x0084 -> line 1783
 *   +0x008c -> line 1786
 *   +0x0094 -> line 1787
 *   +0x009c -> line 1791
 *   +0x00b8 -> line 1793
 *   +0x00d8 -> line 1795
 *   +0x00ec -> line 1811
 *   +0x00f0 -> line 1803
 *   +0x00f4 -> line 1811
 *   +0x00fc -> line 1803
 *   +0x0108 -> line 1811
 *   +0x010c -> line 1803
 *   +0x0110 -> line 1811
 *   +0x0118 -> line 1804
 *   +0x011c -> line 1811
 *   +0x0120 -> line 1806
 *   +0x0128 -> line 1807
 *   +0x012c -> line 1811
 *   +0x0134 -> line 1814
 *   +0x0140 -> line 1816
 *   +0x0150 -> line 1818
 *   +0x0180 -> line 1822
 *   +0x0188 -> line 1825
 *   +0x0190 -> line 1827
 *   +0x0194 -> line 1829
 *   +0x0198 -> line 1830
 *   +0x01a8 -> line 1831
 *   +0x01b0 -> line 1834
 *   +0x01b4 -> line 1838
 *   +0x01c0 -> line 1840
 *   +0x01c4 -> line 1838
 *   +0x01c8 -> line 1841
 *   +0x01cc -> line 1844
 *   +0x01f0 -> line 1845
 *   +0x0214 -> line 1846
 *   +0x0230 -> line 1849
 *   +0x0258 -> line 1851
 *   +0x025c -> line 1853
 *   +0x0260 -> line 1851
 *   +0x0264 -> line 1853
 *   +0x0270 -> line 1856
 *   +0x0274 -> line 1863
 *   +0x0278 -> line 1861
 *   +0x027c -> line 1863
 *   +0x0280 -> line 1862
 *   +0x0284 -> line 1856
 *   +0x0288 -> line 1863
 *   +0x028c -> line 1856
 *   +0x0290 -> line 1863
 *   +0x0294 -> line 1856
 *   +0x029c -> line 1863
 *   +0x02b4 -> line 1865
 *   +0x02b8 -> line 1870
 *   +0x02c0 -> line 1867
 *   +0x02c4 -> line 1870
 *   +0x02cc -> line 1871
 *   +0x02d8 -> line 1873
 *   +0x02e0 -> line 1874
 *   +0x02ec -> line 1877
 *   +0x02f4 -> line 1885
 *   +0x0300 -> line 1887
 *   +0x0330 -> line 1891
 *   +0x0338 -> line 1894
 *   +0x0340 -> line 1899
 *   +0x0348 -> line 1902
 *   +0x034c -> line 1903
 *   +0x0350 -> line 1905
 *   +0x0358 -> line 1908
 *   +0x0388 -> line 1923
 *   +0x0394 -> line 1925
 *   +0x039c -> line 1926
 *   +0x03a8 -> line 1927
 *   +0x03b0 -> line 1930
 *   +0x03bc -> line 1931
 *   +0x03c8 -> line 1934
 *   +0x03d4 -> line 1937
 *   +0x03e0 -> line 1940
 *   +0x03ec -> line 1944
 *   +0x03f4 -> line 1945
 *   +0x0400 -> line 1946
 *   +0x0410 -> line 1948
 *   +0x0420 -> line 1950
 *   +0x0430 -> line 1951
 *   +0x0440 -> line 1952
 *   +0x0444 -> line 1954
 *   +0x0450 -> line 1955
 *   +0x045c -> line 1957
 *   +0x0468 -> line 1958
 *   +0x0474 -> line 1960
 *   +0x047c -> line 1961
 *   +0x0488 -> line 1962
 *   +0x0498 -> line 1964
 *   +0x04a8 -> line 1966
 *   +0x04ac -> line 1967
 *   +0x04b0 -> line 1970
 *   +0x04bc -> line 1972
 *   +0x04c8 -> line 1973
 *   +0x04d4 -> line 1974
 *   +0x04d8 -> line 1976
 *   +0x04e0 -> line 1978
 *   +0x04e4 -> line 1980
 *   +0x04f0 -> line 1978
 *   +0x04f4 -> line 1980
 *   +0x04fc -> line 1981
 *   +0x0510 -> line 1982
 *   +0x0524 -> line 1983
 *   +0x0538 -> line 1985
 *   +0x0550 -> line 1986
 *   +0x0568 -> line 1988
 *   +0x0574 -> line 1990
 *   +0x057c -> line 1991
 *   +0x0588 -> line 1994
 *   +0x0598 -> line 2031
 *   +0x05a4 -> line 2036
 *   +0x05b0 -> line 2037
 *   +0x05bc -> line 2039
 *   +0x05c4 -> line 2040
 *   +0x05d0 -> line 2044
 *   +0x05d4 -> line 2041
 *   +0x05d8 -> line 2044
 *   +0x05e0 -> line 2045
 *   +0x05e8 -> line 2047
 *   +0x05f4 -> line 2049
 *   +0x05f8 -> line 2053
 *   +0x0600 -> line 2055
 *   +0x0608 -> line 2057
 *   +0x060c -> line 2055
 *   +0x0614 -> line 2057
 *   +0x0620 -> line 2058
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDMABufferDrawEITWithStrips(GEO_tdstGeometricObject_* pObj, unsigned int Index)
{
    unsigned int hRef;
    unsigned int NbRealStripVtx;
    unsigned int NbVtxTotalForUVs;
    unsigned int NbVtxTotal;
    unsigned int* pTCh;
    unsigned int* pT2;
    unsigned int* pT1;
    float (*DestpVA)[4];
    float (*param0)[4];
    unsigned int KeepNormals;
    unsigned int bMultiTexture;
    unsigned int LayerTypes;
    GLI_tdstMaterial_* hVisualMaterial;
    SDC_VertexArrays_* pSDC_VA;
    float (*pVs)[4];
    float (*pC)[4];
    float (*pT)[4];
    float (*pN)[4];
    unsigned int stage;
    unsigned int NbStages;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1641–1680 */
/* addr: 0x002b7bd0  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1641
 *   +0x000c -> line 1646
 *   +0x0024 -> line 1648
 *   +0x003c -> line 1651
 *   +0x0050 -> line 1653
 *   +0x005c -> line 1654
 *   +0x0064 -> line 1657
 *   +0x0090 -> line 1661
 *   +0x0098 -> line 1675
 *   +0x00a8 -> line 1677
 *   +0x00bc -> line 1680
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_vDMAObjectIsCompliant(GEO_tdstGeometricObject_* pObj)
{
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    int j;
    int iTypeOffset;
    int iElementOffset;

    if (GEO_bIsLookAt()) {
        return 0;
    }

    for (j = 0, iTypeOffset = 0, iElementOffset = 0;
         j < pObj->xNbElements;
         iTypeOffset += 2, iElementOffset += 4, j++) {
        if (*(short*)(pObj->d_xListOfElementsTypes + iTypeOffset) == 1) {
            p_stEIT = *(GEO_tdstElementIndexedTriangles_**)(pObj->d_stListOfElements + iElementOffset);
            if ((p_stEIT != NULL) && (p_stEIT->hVisualMaterial != NULL) &&
                ((p_stEIT->hVisualMaterial->lNumberOfDisplayNode >= 2) ||
                 (p_stEIT->hVisualMaterial->lMaterialAdditionnalType & 6))) {
                    return 0;
            }
        } else {
            return 0;
        }
    }
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1373–1638 */
/* addr: 0x002b7ca0  size: 988 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1373
 *   +0x0028 -> line 1384
 *   +0x0030 -> line 1386
 *   +0x0034 -> line 1387
 *   +0x003c -> line 1389
 *   +0x0040 -> line 1390
 *   +0x0048 -> line 1393
 *   +0x0050 -> line 1396
 *   +0x0054 -> line 1404
 *   +0x005c -> line 1406
 *   +0x0064 -> line 1404
 *   +0x0068 -> line 1406
 *   +0x0070 -> line 1408
 *   +0x007c -> line 1409
 *   +0x0084 -> line 1411
 *   +0x0088 -> line 1424
 *   +0x008c -> line 1413
 *   +0x0090 -> line 1424
 *   +0x00a0 -> line 1426
 *   +0x00a8 -> line 1427
 *   +0x00ac -> line 1428
 *   +0x00b4 -> line 1431
 *   +0x00c0 -> line 1435
 *   +0x00e0 -> line 1447
 *   +0x00f0 -> line 1449
 *   +0x0108 -> line 1451
 *   +0x0114 -> line 1452
 *   +0x011c -> line 1454
 *   +0x0128 -> line 1462
 *   +0x0148 -> line 1464
 *   +0x0150 -> line 1466
 *   +0x0158 -> line 1467
 *   +0x0170 -> line 1469
 *   +0x0184 -> line 1470
 *   +0x0190 -> line 1471
 *   +0x0198 -> line 1473
 *   +0x01ac -> line 1475
 *   +0x01c0 -> line 1476
 *   +0x01cc -> line 1477
 *   +0x01d4 -> line 1479
 *   +0x01e8 -> line 1481
 *   +0x01f0 -> line 1483
 *   +0x01f8 -> line 1481
 *   +0x0204 -> line 1482
 *   +0x0210 -> line 1483
 *   +0x0218 -> line 1484
 *   +0x0220 -> line 1486
 *   +0x0234 -> line 1488
 *   +0x023c -> line 1491
 *   +0x0244 -> line 1488
 *   +0x0250 -> line 1489
 *   +0x025c -> line 1491
 *   +0x0264 -> line 1493
 *   +0x0274 -> line 1499
 *   +0x0288 -> line 1560
 *   +0x028c -> line 1505
 *   +0x0290 -> line 1549
 *   +0x0294 -> line 1560
 *   +0x02a0 -> line 1562
 *   +0x02e0 -> line 1566
 *   +0x02f0 -> line 1568
 *   +0x0314 -> line 1571
 *   +0x0320 -> line 1573
 *   +0x032c -> line 1575
 *   +0x0338 -> line 1579
 *   +0x0344 -> line 1581
 *   +0x0350 -> line 1584
 *   +0x0358 -> line 1587
 *   +0x036c -> line 1591
 *   +0x0380 -> line 1637
 *   +0x0388 -> line 1591
 *   +0x038c -> line 1637
 *   +0x03ac -> line 1638
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDMAPreparePO(HIE_tdstSuperObject_* pSO, PO_tdstPhysicalObject_* PO)
{
    GLI_tdstTexture_* p_stTexture;
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    SDC_VertexArrays_* pSDC_VA;
    int j;
    GEO_tdstGeometricObject_* pObj;
    short i;
    short xNbLodDefinitions;
    GEO_tdstVisualSet_* hVisualSet;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1302–1369 */
/* addr: 0x002b8080  size: 628 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1302
 *   +0x0004 -> line 1307
 *   +0x0008 -> line 1302
 *   +0x0018 -> line 1307
 *   +0x003c -> line 1312
 *   +0x0044 -> line 1313
 *   +0x004c -> line 1315
 *   +0x0058 -> line 1323
 *   +0x0074 -> line 1325
 *   +0x007c -> line 1327
 *   +0x0084 -> line 1328
 *   +0x009c -> line 1333
 *   +0x00a8 -> line 1335
 *   +0x00ac -> line 1333
 *   +0x00d0 -> line 1335
 *   +0x00f8 -> line 1338
 *   +0x01d8 -> line 1350
 *   +0x01dc -> line 1338
 *   +0x0208 -> line 1346
 *   +0x0220 -> line 1347
 *   +0x0234 -> line 1348
 *   +0x0248 -> line 1350
 *   +0x0254 -> line 1352
 *   +0x025c -> line 1369
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_g_CheckForFire(GEO_tdstGeometricObject_* pObj)
{
    MTH3D_tdstVector_ Position;
    GLI_tdstTexture_* p_stTexture;
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1235–1289 */
/* addr: 0x002b8300  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1235
 *   +0x0018 -> line 1243
 *   +0x0020 -> line 1246
 *   +0x0028 -> line 1249
 *   +0x0040 -> line 1252
 *   +0x004c -> line 1254
 *   +0x0054 -> line 1255
 *   +0x0070 -> line 1259
 *   +0x008c -> line 1265
 *   +0x00b0 -> line 1267
 *   +0x00b4 -> line 1268
 *   +0x00bc -> line 1270
 *   +0x00c0 -> line 1271
 *   +0x00c8 -> line 1273
 *   +0x00d0 -> line 1275
 *   +0x00dc -> line 1277
 *   +0x00e4 -> line 1279
 *   +0x00ec -> line 1280
 *   +0x00fc -> line 1282
 *   +0x0104 -> line 1280
 *   +0x0108 -> line 1282
 *   +0x0110 -> line 1288
 *   +0x0128 -> line 1289
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDMABufferParseTreeForThisSector(HIE_tdstSuperObject_* pSO)
{
    ISI_tdstColor_* pRLIs;
    void* hISI;
    PO_tdstPhysicalObject_* PO;
    IPO_tdstInstanciatedPhysicalObject_* hIPO;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1093–1218 */
/* addr: 0x002b8440  size: 544 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1093
 *   +0x0014 -> line 1106
 *   +0x001c -> line 1110
 *   +0x0024 -> line 1112
 *   +0x0034 -> line 1114
 *   +0x0038 -> line 1116
 *   +0x0040 -> line 1121
 *   +0x004c -> line 1123
 *   +0x0050 -> line 1130
 *   +0x0054 -> line 1135
 *   +0x0060 -> line 1138
 *   +0x0068 -> line 1140
 *   +0x0070 -> line 1142
 *   +0x0078 -> line 1148
 *   +0x007c -> line 1144
 *   +0x0080 -> line 1148
 *   +0x0088 -> line 1151
 *   +0x008c -> line 1150
 *   +0x0090 -> line 1151
 *   +0x0098 -> line 1153
 *   +0x009c -> line 1154
 *   +0x00a8 -> line 1156
 *   +0x00b0 -> line 1157
 *   +0x00c8 -> line 1158
 *   +0x00d0 -> line 1159
 *   +0x00dc -> line 1161
 *   +0x00e4 -> line 1162
 *   +0x0100 -> line 1164
 *   +0x0108 -> line 1167
 *   +0x0114 -> line 1169
 *   +0x0120 -> line 1171
 *   +0x0128 -> line 1172
 *   +0x0140 -> line 1173
 *   +0x0160 -> line 1175
 *   +0x0164 -> line 1191
 *   +0x016c -> line 1193
 *   +0x0178 -> line 1195
 *   +0x0184 -> line 1197
 *   +0x018c -> line 1198
 *   +0x0194 -> line 1201
 *   +0x019c -> line 1203
 *   +0x01a0 -> line 1208
 *   +0x01a8 -> line 1211
 *   +0x01b4 -> line 1213
 *   +0x01bc -> line 1214
 *   +0x01d4 -> line 1215
 *   +0x01d8 -> line 1217
 *   +0x0208 -> line 1218
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDMABufferParseTree(HIE_tdstSuperObject_* pSO)
{
    unsigned int* phSdl;
    SECT_tdstSector_* hSectorObject;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 1045–1090 */
/* addr: 0x002b8660  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1045
 *   +0x0028 -> line 1052
 *   +0x0034 -> line 1054
 *   +0x003c -> line 1055
 *   +0x0044 -> line 1059
 *   +0x004c -> line 1066
 *   +0x0058 -> line 1068
 *   +0x005c -> line 1069
 *   +0x0074 -> line 1072
 *   +0x0080 -> line 1073
 *   +0x0084 -> line 1074
 *   +0x00dc -> line 1083
 *   +0x00e0 -> line 1084
 *   +0x00e8 -> line 1086
 *   +0x0110 -> line 1087
 *   +0x0114 -> line 1090
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vUpdateFogFromSector(SECT_tdstSector_* hSectorObject)
{
    GLI_tdstLight_* hStaticLight;
    GEO_tdstColor_ stColor;
    SECT_tdstListOfStaticLights_* hStaticLightsElement;
    short xI;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 993–994 */
/* addr: 0x002b87a0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 993
 *   +0x0018 -> line 994
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vApplyChangesToObjectVerticesAndUvs(GEO_tdstGeometricObject_* _p_stObj)
{
    GLI_BIG_GLOBALS_p_stObj = (int)_p_stObj;
    if (_p_stObj->pSDC_Data != 0) {
        ((SDC_VertexArrays_*)_p_stObj->pSDC_Data)->FrameDeformed = GLI_g_FrameNumber;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 987–988 */
/* addr: 0x002b87c0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 987
 *   +0x0018 -> line 988
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vApplyChangesToObjectVertices(GEO_tdstGeometricObject_* p_stObject)
{
    GLI_BIG_GLOBALS_p_stObj = (int)p_stObject;
    if (p_stObject->pSDC_Data != 0) {
        ((SDC_VertexArrays_*)p_stObject->pSDC_Data)->FrameDeformed = GLI_g_FrameNumber;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 951–981 */
/* addr: 0x002b87e0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 951
 *   +0x0004 -> line 953
 *   +0x0010 -> line 957
 *   +0x0018 -> line 981
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetObjectDeformed(GEO_tdstGeometricObject_* pObj)
{
    GLI_BIG_GLOBALS_p_stObj = (int)pObj;
    if (pObj->pSDC_Data != 0) {
        ((SDC_VertexArrays_*)pObj->pSDC_Data)->FrameDeformed = GLI_g_FrameNumber;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 929–929 */
/* addr: 0x002b8800  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 929
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xSetUpdateGeometricForMaterialCoefChange(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 912–912 */
/* addr: 0x002b8810  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 912
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vResetVertexColorsForIPO(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 812–862 */
/* addr: 0x002b8820  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 812
 *   +0x0004 -> line 817
 *   +0x0008 -> line 812
 *   +0x0018 -> line 820
 *   +0x0020 -> line 825
 *   +0x0028 -> line 826
 *   +0x0030 -> line 827
 *   +0x0038 -> line 828
 *   +0x0040 -> line 829
 *   +0x0048 -> line 833
 *   +0x0054 -> line 835
 *   +0x0064 -> line 836
 *   +0x006c -> line 838
 *   +0x0070 -> line 841
 *   +0x0074 -> line 842
 *   +0x0078 -> line 843
 *   +0x0088 -> line 846
 *   +0x0090 -> line 848
 *   +0x0098 -> line 850
 *   +0x00a0 -> line 848
 *   +0x00a4 -> line 850
 *   +0x00ac -> line 852
 *   +0x00b4 -> line 853
 *   +0x00bc -> line 855
 *   +0x00c4 -> line 857
 *   +0x00cc -> line 859
 *   +0x00d0 -> line 862
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vCleanAllSDLs(void)
{
    unsigned int i;
    GEO_tdstGeometricObject_* pObj;
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 756–805 */
/* addr: 0x002b8910  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 756
 *   +0x0004 -> line 762
 *   +0x0008 -> line 756
 *   +0x000c -> line 762
 *   +0x0014 -> line 765
 *   +0x0018 -> line 770
 *   +0x001c -> line 765
 *   +0x0020 -> line 770
 *   +0x0024 -> line 765
 *   +0x0028 -> line 771
 *   +0x002c -> line 766
 *   +0x0030 -> line 771
 *   +0x0034 -> line 766
 *   +0x0038 -> line 772
 *   +0x003c -> line 767
 *   +0x0040 -> line 768
 *   +0x0044 -> line 767
 *   +0x0048 -> line 772
 *   +0x004c -> line 775
 *   +0x0054 -> line 777
 *   +0x005c -> line 780
 *   +0x0064 -> line 787
 *   +0x006c -> line 789
 *   +0x0074 -> line 792
 *   +0x007c -> line 794
 *   +0x0084 -> line 795
 *   +0x008c -> line 796
 *   +0x0094 -> line 798
 *   +0x009c -> line 800
 *   +0x00a4 -> line 802
 *   +0x00ac -> line 805
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vCleanAllSpecificData(void)
{
    GLD_bSetBackgroundColorForDevice(0, 0);
    g_fFogColor[0] = 0.0f;
    g_fFogEnd = 3000.0f;
    g_fFogColor[1] = 0.0f;
    g_fFogStart = 2000.0f;
    GLI_g_CurrentSDLFogColor = 0;
    g_fFogColor[2] = 0.0f;
    GLI_g_OOStartMinusEnd = -0.001f;
    TXT_vInit();
    MC_SetBackgroundMaterial(0);
    GLI_vCleanInterpolData();
    GLI_vCleanAllSDLs();
    VAC_Destroy(GLI_g_hVAContainer);
    GLI_g_hVAContainer = 0;
    GLI_vDeleteSdlCache();
    WaterFx_vDesinit();
    GrassFx_vDesinit();
    FireFx_vDesinit();
    DestroyDummySDL();
    GLI_vForceDeleteAllWaitingPointers();
    GLI_vPrintSDLStatsAfter();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 729–729 */
/* addr: 0x002b89d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 729
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fnv_CleanAlwaysSO(HIE_tdstSuperObject_* h_SuperObject)
{
    GLI_vCleanDispTemporaryDataSPO(h_SuperObject);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 618–721 */
/* addr: 0x002b89e0  size: 556 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 618
 *   +0x0004 -> line 631
 *   +0x0008 -> line 618
 *   +0x002c -> line 628
 *   +0x0030 -> line 630
 *   +0x0034 -> line 631
 *   +0x003c -> line 633
 *   +0x005c -> line 635
 *   +0x0060 -> line 637
 *   +0x0068 -> line 639
 *   +0x0074 -> line 640
 *   +0x007c -> line 642
 *   +0x0084 -> line 644
 *   +0x0090 -> line 647
 *   +0x009c -> line 649
 *   +0x00b0 -> line 651
 *   +0x00bc -> line 653
 *   +0x00c8 -> line 654
 *   +0x00d0 -> line 658
 *   +0x00e0 -> line 659
 *   +0x0108 -> line 671
 *   +0x0110 -> line 670
 *   +0x0114 -> line 671
 *   +0x0130 -> line 674
 *   +0x0138 -> line 675
 *   +0x0140 -> line 677
 *   +0x0144 -> line 678
 *   +0x014c -> line 680
 *   +0x0150 -> line 681
 *   +0x0158 -> line 683
 *   +0x0160 -> line 686
 *   +0x0168 -> line 687
 *   +0x0174 -> line 689
 *   +0x0178 -> line 690
 *   +0x0180 -> line 692
 *   +0x0188 -> line 694
 *   +0x0190 -> line 695
 *   +0x0198 -> line 697
 *   +0x019c -> line 698
 *   +0x01a4 -> line 702
 *   +0x01b0 -> line 704
 *   +0x01b8 -> line 706
 *   +0x01bc -> line 708
 *   +0x01c8 -> line 710
 *   +0x01d0 -> line 712
 *   +0x01d4 -> line 717
 *   +0x01e0 -> line 718
 *   +0x0200 -> line 720
 *   +0x0204 -> line 721
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vCleanDispTemporaryDataSPO(HIE_tdstSuperObject_* _hSprObj)
{
    int i;
    GEO_tdstVisualSet_* hVisualSet;
    SECT_tdstSector_* hSectorObject;
    PO_tdstPhysicalObject_* PO;
    IPO_tdstInstanciatedPhysicalObject_* hIPO;
    tdstObjectsTablesList_* p_stObjectTable;
    tdstObjectsTableElement_* p_ObjectsTableElement;
    int lType;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 575–614 */
/* addr: 0x002b8c10  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 575
 *   +0x0004 -> line 584
 *   +0x0008 -> line 575
 *   +0x000c -> line 584
 *   +0x0010 -> line 575
 *   +0x001c -> line 584
 *   +0x0024 -> line 585
 *   +0x002c -> line 586
 *   +0x0030 -> line 588
 *   +0x003c -> line 589
 *   +0x0044 -> line 591
 *   +0x0050 -> line 593
 *   +0x0054 -> line 595
 *   +0x005c -> line 597
 *   +0x0060 -> line 601
 *   +0x0070 -> line 603
 *   +0x0078 -> line 605
 *   +0x0080 -> line 607
 *   +0x008c -> line 608
 *   +0x0094 -> line 610
 *   +0x009c -> line 611
 *   +0x00a0 -> line 612
 *   +0x00a8 -> line 610
 *   +0x00ac -> line 612
 *   +0x00cc -> line 613
 *   +0x00d0 -> line 614
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_PS2GL_CleanSpecifForPO(PO_tdstPhysicalObject_* PO)
{
    GEO_tdstGeometricObject_* pObj;
    short i;
    short xNbLodDefinitions;
    GEO_tdstVisualSet_* hVisualSet;
    int iLodOffset;

    if ((((unsigned int)PO & 0xffffff00) != 0) && (PO != NULL)) {
        hVisualSet = PO->_hVisualSet;
        if ((((unsigned int)hVisualSet & 0xffffff00) != 0) &&
            (hVisualSet != NULL) && (hVisualSet->xType == 0)) {
            xNbLodDefinitions = hVisualSet->xNbLodDefinitions;
            if (xNbLodDefinitions == 0) {
                xNbLodDefinitions = 1;
            }
            if (hVisualSet->d_p_stLodDefinitions != (GEO_tduVSObject_*)-1) {
                if (hVisualSet->d_p_stLodDefinitions != NULL) {
                    for (i = 0, iLodOffset = 0;
                         i < xNbLodDefinitions;
                         i++, iLodOffset += 4) {
                        pObj = *(GEO_tdstGeometricObject_**)((int)hVisualSet->d_p_stLodDefinitions + iLodOffset);
                        if (pObj == NULL) {
                            continue;
                        }
                        GLI_vCleanGeoObj(pObj);
                    }
                }
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 538–563 */
/* addr: 0x002b8d00  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 538
 *   +0x001c -> line 542
 *   +0x0024 -> line 547
 *   +0x0034 -> line 549
 *   +0x004c -> line 551
 *   +0x0058 -> line 552
 *   +0x0060 -> line 554
 *   +0x0068 -> line 555
 *   +0x006c -> line 559
 *   +0x0070 -> line 555
 *   +0x0078 -> line 560
 *   +0x0090 -> line 563
 *   +0x0098 -> line 562
 *   +0x009c -> line 563
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_fn_vInitGeometricObjectFromArray(GEO_tdstGeometricObject_* pObj)
{
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    unsigned int j;
    int iTypeOffset;
    int iElementOffset;

    if (pObj != NULL) {
        for (j = 0, iTypeOffset = 0, iElementOffset = 0;
             j < pObj->xNbElements;
             iTypeOffset += 2, iElementOffset += 4, j++) {
            if (*(short*)(pObj->d_xListOfElementsTypes + iTypeOffset) != 1) {
                continue;
            }
            p_stEIT = *(GEO_tdstElementIndexedTriangles_**)(pObj->d_stListOfElements + iElementOffset);
            if (p_stEIT == NULL) {
                continue;
            }
            GLI_vCleanSpecificStructure(p_stEIT->glDisplayList);
            p_stEIT->glDisplayList = 0;
        }
    }
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 534–534 */
/* addr: 0x002b8dc0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 534
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_DRV_vFreeVertexBuffersForElementsInObject(GEO_tdstGeometricObject_* pObj)
{
    GLI_vCleanGeoObj(pObj);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 485–528 */
/* addr: 0x002b8dd0  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 485
 *   +0x001c -> line 489
 *   +0x0024 -> line 491
 *   +0x0030 -> line 493
 *   +0x0038 -> line 494
 *   +0x0040 -> line 497
 *   +0x0054 -> line 508
 *   +0x0064 -> line 510
 *   +0x007c -> line 512
 *   +0x0088 -> line 513
 *   +0x0090 -> line 515
 *   +0x0098 -> line 516
 *   +0x009c -> line 525
 *   +0x00a0 -> line 516
 *   +0x00a8 -> line 526
 *   +0x00c0 -> line 528
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vCleanGeoObj(GEO_tdstGeometricObject_* pObj)
{
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    unsigned int j;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 363–463 */
/* addr: 0x002b8eb0  size: 508 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 363
 *   +0x0020 -> line 373
 *   +0x0028 -> line 375
 *   +0x0034 -> line 377
 *   +0x003c -> line 378
 *   +0x0058 -> line 382
 *   +0x0068 -> line 385
 *   +0x0088 -> line 387
 *   +0x008c -> line 396
 *   +0x0094 -> line 398
 *   +0x00a0 -> line 399
 *   +0x00a8 -> line 401
 *   +0x00b0 -> line 403
 *   +0x00bc -> line 406
 *   +0x00c8 -> line 408
 *   +0x00dc -> line 410
 *   +0x00e8 -> line 412
 *   +0x00f4 -> line 413
 *   +0x0100 -> line 417
 *   +0x0110 -> line 419
 *   +0x0124 -> line 420
 *   +0x0138 -> line 425
 *   +0x0140 -> line 424
 *   +0x0144 -> line 425
 *   +0x0160 -> line 432
 *   +0x0168 -> line 433
 *   +0x0170 -> line 435
 *   +0x0174 -> line 437
 *   +0x017c -> line 439
 *   +0x0180 -> line 442
 *   +0x0188 -> line 443
 *   +0x0194 -> line 445
 *   +0x0198 -> line 446
 *   +0x01a0 -> line 448
 *   +0x01a4 -> line 449
 *   +0x01ac -> line 451
 *   +0x01b4 -> line 454
 *   +0x01bc -> line 455
 *   +0x01c4 -> line 457
 *   +0x01c8 -> line 458
 *   +0x01d0 -> line 460
 *   +0x01d8 -> line 463
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_PS2GL_PrepareSpecificDataForSPO(HIE_tdstSuperObject_* _hSO)
{
    SECT_tdstSector_* hSectorObject;
    int i;
    GEO_tdstVisualSet_* hVisualSet;
    tdstObjectsTablesList_* p_stObjectTable;
    tdstObjectsTableElement_* p_ObjectsTableElement;
    PO_tdstPhysicalObject_* PO;
    IPO_tdstInstanciatedPhysicalObject_* hIPO;
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 288–337 */
/* addr: 0x002b90b0  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 288
 *   +0x0004 -> line 292
 *   +0x0008 -> line 288
 *   +0x000c -> line 294
 *   +0x0010 -> line 288
 *   +0x0018 -> line 294
 *   +0x0028 -> line 297
 *   +0x003c -> line 301
 *   +0x0080 -> line 303
 *   +0x0084 -> line 305
 *   +0x0088 -> line 306
 *   +0x0090 -> line 303
 *   +0x0098 -> line 306
 *   +0x00b4 -> line 308
 *   +0x00bc -> line 310
 *   +0x00c0 -> line 311
 *   +0x00cc -> line 315
 *   +0x00d0 -> line 318
 *   +0x00d4 -> line 315
 *   +0x00d8 -> line 318
 *   +0x00e4 -> line 320
 *   +0x0100 -> line 322
 *   +0x0108 -> line 323
 *   +0x010c -> line 331
 *   +0x0114 -> line 333
 *   +0x011c -> line 334
 *   +0x0124 -> line 337
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vInspectObjectForShadow(GEO_tdstGeometricObject_* p_stObj)
{
    int iOffset;
    int iAreaId;
    unsigned char bBTLevel;
    unsigned int HasShadowLOD;
    short xElementCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 237–278 */
/* addr: 0x002b91f0  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 237
 *   +0x0008 -> line 238
 *   +0x000c -> line 239
 *   +0x0014 -> line 241
 *   +0x0018 -> line 243
 *   +0x0020 -> line 245
 *   +0x0024 -> line 247
 *   +0x003c -> line 249
 *   +0x0048 -> line 250
 *   +0x0050 -> line 252
 *   +0x0054 -> line 256
 *   +0x0058 -> line 253
 *   +0x0060 -> line 255
 *   +0x0064 -> line 256
 *   +0x0070 -> line 258
 *   +0x0084 -> line 260
 *   +0x0090 -> line 261
 *   +0x0098 -> line 263
 *   +0x009c -> line 274
 *   +0x00a0 -> line 263
 *   +0x00a8 -> line 275
 *   +0x00c0 -> line 277
 *   +0x00c8 -> line 275
 *   +0x00cc -> line 277
 *   +0x00e4 -> line 278
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_PS2GL_BuildSpecifForPO(PO_tdstPhysicalObject_* PO)
{
    GEO_tdstElementIndexedTriangles_* p_stEIT;
    int j;
    GEO_tdstGeometricObject_* pObj;
    short i;
    short xNbLodDefinitions;
    GEO_tdstVisualSet_* hVisualSet;
    int iLodOffset;
    int iTypeOffset;
    int iElementOffset;

    if (PO != NULL) {
        hVisualSet = PO->_hVisualSet;
        if (hVisualSet != NULL) {
            xNbLodDefinitions = hVisualSet->xNbLodDefinitions;
            if (xNbLodDefinitions == 0) {
                xNbLodDefinitions = 1;
            }
            for (i = 0, iLodOffset = 0;
                 i < xNbLodDefinitions;
                 i++, iLodOffset += 4) {
                pObj = *(GEO_tdstGeometricObject_**)((int)hVisualSet->d_p_stLodDefinitions + iLodOffset);
                if (pObj != NULL) {
                    pObj->glDisplayList = 0;
                    j = 0;
                    pObj->bIsStatic = 0;
                    iTypeOffset = 0;
                    GLI_BIG_GLOBALS_p_stObj = (int)pObj;
                    iElementOffset = 0;
                    for (; j < pObj->xNbElements;
                         iTypeOffset += 2, iElementOffset += 4, j++) {
                        if (*(short*)(pObj->d_xListOfElementsTypes + iTypeOffset) != 1) {
                            continue;
                        }
                        p_stEIT = *(GEO_tdstElementIndexedTriangles_**)(pObj->d_stListOfElements + iElementOffset);
                        if (p_stEIT == NULL) {
                            continue;
                        }
                        p_stEIT->glDisplayList = 0;
                    }
                }
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_drawHier.c lines 190–223 */
/* addr: 0x002b92e0  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 190
 *   +0x0004 -> line 191
 *   +0x0008 -> line 190
 *   +0x000c -> line 191
 *   +0x0010 -> line 193
 *   +0x001c -> line 195
 *   +0x002c -> line 196
 *   +0x003c -> line 197
 *   +0x004c -> line 198
 *   +0x005c -> line 199
 *   +0x0064 -> line 202
 *   +0x0070 -> line 203
 *   +0x0080 -> line 209
 *   +0x008c -> line 213
 *   +0x00b0 -> line 219
 *   +0x00bc -> line 223
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void BuildAllSDLs(void)
{
    /* TODO: decompile from asm/... */
}
