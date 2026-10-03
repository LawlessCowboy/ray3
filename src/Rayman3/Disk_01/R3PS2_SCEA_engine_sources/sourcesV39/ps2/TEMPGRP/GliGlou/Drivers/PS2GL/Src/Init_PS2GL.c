/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct anon_0 anon_0;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct anon_42 anon_42;
typedef struct anon_1 anon_1;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct anon_2 anon_2;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct anon_3 anon_3;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tag_GLtexture tag_GLtexture;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct anon_41 anon_41;
typedef struct anon_8 anon_8;
typedef struct anon_23 anon_23;
typedef struct anon_27 anon_27;
typedef struct anon_37 anon_37;
typedef struct anon_36 anon_36;
typedef struct anon_32 anon_32;
typedef struct anon_22 anon_22;
typedef struct anon_14 anon_14;
typedef struct anon_40 anon_40;
typedef struct anon_30 anon_30;
typedef struct anon_5 anon_5;
typedef struct anon_11 anon_11;
typedef struct anon_12 anon_12;
typedef struct anon_28 anon_28;
typedef struct anon_35 anon_35;
typedef struct anon_4 anon_4;
typedef struct anon_17 anon_17;
typedef struct anon_16 anon_16;
typedef struct anon_6 anon_6;
typedef struct anon_31 anon_31;
typedef struct anon_7 anon_7;
typedef struct anon_29 anon_29;
typedef struct anon_25 anon_25;
typedef struct anon_39 anon_39;
typedef struct anon_10 anon_10;
typedef struct anon_20 anon_20;
typedef struct anon_38 anon_38;
typedef struct anon_13 anon_13;
typedef struct anon_19 anon_19;
typedef struct anon_24 anon_24;
typedef struct anon_18 anon_18;
typedef struct anon_21 anon_21;
typedef struct anon_26 anon_26;
typedef struct anon_34 anon_34;
typedef union anon_33 anon_33;
typedef struct tagGScontext tagGScontext;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct _stTimerCount _stTimerCount;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tagListNode tagListNode;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_15 anon_15;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdstZBufferForLight_ GLI_tdstZBufferForLight_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct anon_9 anon_9;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct tagListData tagListData;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct stMorphData stMorphData;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;

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

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
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

struct anon_0 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
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

struct anon_42 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_1 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_42 st_UVStaticPos; /* +0xc */
    anon_42 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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
    anon_1 a_stMultiMaterial[4]; /* +0x88 */
};

struct anon_2 {
    unsigned long pad00 : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
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

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct anon_3 {
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

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
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
    anon_3 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct _GL_BUFFERINFO {
    int iFrameBufferDepth; /* +0x0 */
    int iDepthBufferDepth; /* +0x4 */
    int iStencilBufferDepth; /* +0x8 */
    int iAccumBufferDepth; /* +0xc */
    int iAuxBufferBase; /* +0x10 */
    int iAuxBufferSize; /* +0x14 */
    int iAuxBufferPSM; /* +0x18 */
    int iAccumBufferBase; /* +0x1c */
    int iAccumBufferPSM; /* +0x20 */
    unsigned char bDoubleBufferMode; /* +0x24 */
    unsigned char bPlainBufferMode; /* +0x25 */
    int iScreenWidth; /* +0x28 */
    int iScreenHeight; /* +0x2c */
    int iSecondBufferWidth; /* +0x30 */
    int iSecondBufferHeight; /* +0x34 */
    int iSecondBufferWidthPower; /* +0x38 */
    int iSecondBufferHeightPower; /* +0x3c */
    int iSecondBufferBase; /* +0x40 */
    int iSecondBufferZBase; /* +0x44 */
    int iSecondBufferPSM; /* +0x48 */
    int iSecondBufferZPSM; /* +0x4c */
    int iSuperWidth; /* +0x50 */
    int iSuperHeight; /* +0x54 */
};

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct anon_41 {
    unsigned long PRIM : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct anon_8 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_23 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_27 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_37 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_36 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_32 {
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

struct anon_22 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_14 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_40 {
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

struct anon_30 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_5 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_11 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_12 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_28 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_35 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_4 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_17 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_16 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_6 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_31 {
    unsigned long DIMX00 : 3; /* bit 0, byte +0x0 */
    unsigned long pad00 : 1; /* bit 3, byte +0x0 */
    unsigned long DIMX01 : 3; /* bit 4, byte +0x0 */
    unsigned long pad01 : 1; /* bit 7, byte +0x0 */
    unsigned long DIMX02 : 3; /* bit 8, byte +0x0 */
    unsigned long pad02 : 1; /* bit 11, byte +0x0 */
    unsigned long DIMX03 : 3; /* bit 12, byte +0x0 */
    unsigned long pad03 : 1; /* bit 15, byte +0x0 */
    unsigned long DIMX10 : 3; /* bit 16, byte +0x0 */
    unsigned long pad10 : 1; /* bit 19, byte +0x0 */
    unsigned long DIMX11 : 3; /* bit 20, byte +0x0 */
    unsigned long pad11 : 1; /* bit 23, byte +0x0 */
    unsigned long DIMX12 : 3; /* bit 24, byte +0x0 */
    unsigned long pad12 : 1; /* bit 27, byte +0x0 */
    unsigned long DIMX13 : 3; /* bit 28, byte +0x0 */
    unsigned long pad13 : 1; /* bit 31, byte +0x0 */
    unsigned long DIMX20 : 3; /* bit 32, byte +0x0 */
    unsigned long pad20 : 1; /* bit 35, byte +0x0 */
    unsigned long DIMX21 : 3; /* bit 36, byte +0x0 */
    unsigned long pad21 : 1; /* bit 39, byte +0x0 */
    unsigned long DIMX22 : 3; /* bit 40, byte +0x0 */
    unsigned long pad22 : 1; /* bit 43, byte +0x0 */
    unsigned long DIMX23 : 3; /* bit 44, byte +0x0 */
    unsigned long pad23 : 1; /* bit 47, byte +0x0 */
    unsigned long DIMX30 : 3; /* bit 48, byte +0x0 */
    unsigned long pad30 : 1; /* bit 51, byte +0x0 */
    unsigned long DIMX31 : 3; /* bit 52, byte +0x0 */
    unsigned long pad31 : 1; /* bit 55, byte +0x0 */
    unsigned long DIMX32 : 3; /* bit 56, byte +0x0 */
    unsigned long pad32 : 1; /* bit 59, byte +0x0 */
    unsigned long DIMX33 : 3; /* bit 60, byte +0x0 */
    unsigned long pad33 : 1; /* bit 63, byte +0x0 */
};

struct anon_7 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_29 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_25 {
    unsigned long ATE : 1; /* bit 0, byte +0x0 */
    unsigned long ATST : 3; /* bit 1, byte +0x0 */
    unsigned long AREF : 8; /* bit 4, byte +0x0 */
    unsigned long AFAIL : 2; /* bit 12, byte +0x0 */
    unsigned long DATE : 1; /* bit 14, byte +0x0 */
    unsigned long DATM : 1; /* bit 15, byte +0x0 */
    unsigned long ZTE : 1; /* bit 16, byte +0x0 */
    unsigned long ZTST : 2; /* bit 17, byte +0x0 */
    unsigned long pad19 : 45; /* bit 19, byte +0x0 */
};

struct anon_39 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_10 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_20 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_38 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_13 {
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

struct anon_19 {
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

struct anon_24 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_18 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_21 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_26 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_34 {
    unsigned long PRIM_Modified : 1; /* bit 0, byte +0x0 */
    unsigned long RGBAQ_Modified : 1; /* bit 1, byte +0x0 */
    unsigned long ST_Modified : 1; /* bit 2, byte +0x0 */
    unsigned long UV_Modified : 1; /* bit 3, byte +0x0 */
    unsigned long XYZF2_Modified : 1; /* bit 4, byte +0x0 */
    unsigned long XYZ2_Modified : 1; /* bit 5, byte +0x0 */
    unsigned long TEX0_1_Modified : 1; /* bit 6, byte +0x0 */
    unsigned long TEX0_2_Modified : 1; /* bit 7, byte +0x0 */
    unsigned long CLAMP_1_Modified : 1; /* bit 8, byte +0x0 */
    unsigned long CLAMP_2_Modified : 1; /* bit 9, byte +0x0 */
    unsigned long FOG_Modified : 1; /* bit 10, byte +0x0 */
    unsigned long XYZF3_Modified : 1; /* bit 11, byte +0x0 */
    unsigned long XYZ3_Modified : 1; /* bit 12, byte +0x0 */
    unsigned long TEX1_1_Modified : 1; /* bit 13, byte +0x0 */
    unsigned long TEX1_2_Modified : 1; /* bit 14, byte +0x0 */
    unsigned long TEX2_1_Modified : 1; /* bit 15, byte +0x0 */
    unsigned long TEX2_2_Modified : 1; /* bit 16, byte +0x0 */
    unsigned long XYOFFSET_1_Modified : 1; /* bit 17, byte +0x0 */
    unsigned long XYOFFSET_2_Modified : 1; /* bit 18, byte +0x0 */
    unsigned long PRMODECONT_Modified : 1; /* bit 19, byte +0x0 */
    unsigned long PRMODE_Modified : 1; /* bit 20, byte +0x0 */
    unsigned long TEXCLUT_Modified : 1; /* bit 21, byte +0x0 */
    unsigned long SCANMSK_Modified : 1; /* bit 22, byte +0x0 */
    unsigned long MIPTBP1_1_Modified : 1; /* bit 23, byte +0x0 */
    unsigned long MIPTBP1_2_Modified : 1; /* bit 24, byte +0x0 */
    unsigned long MIPTBP2_1_Modified : 1; /* bit 25, byte +0x0 */
    unsigned long MIPTBP2_2_Modified : 1; /* bit 26, byte +0x0 */
    unsigned long TEXA_Modified : 1; /* bit 27, byte +0x0 */
    unsigned long FOGCOL_Modified : 1; /* bit 28, byte +0x0 */
    unsigned long TEXFLUSH_Modified : 1; /* bit 29, byte +0x0 */
    unsigned long SCISSOR_1_Modified : 1; /* bit 30, byte +0x0 */
    unsigned long SCISSOR_2_Modified : 1; /* bit 31, byte +0x0 */
    unsigned long ALPHA_1_Modified : 1; /* bit 32, byte +0x0 */
    unsigned long ALPHA_2_Modified : 1; /* bit 33, byte +0x0 */
    unsigned long DIMX_Modified : 1; /* bit 34, byte +0x0 */
    unsigned long DTHE_Modified : 1; /* bit 35, byte +0x0 */
    unsigned long COLCLAMP_Modified : 1; /* bit 36, byte +0x0 */
    unsigned long TEST_1_Modified : 1; /* bit 37, byte +0x0 */
    unsigned long TEST_2_Modified : 1; /* bit 38, byte +0x0 */
    unsigned long PABE_Modified : 1; /* bit 39, byte +0x0 */
    unsigned long FBA_1_Modified : 1; /* bit 40, byte +0x0 */
    unsigned long FBA_2_Modified : 1; /* bit 41, byte +0x0 */
    unsigned long FRAME_1_Modified : 1; /* bit 42, byte +0x0 */
    unsigned long FRAME_2_Modified : 1; /* bit 43, byte +0x0 */
    unsigned long ZBUF_1_Modified : 1; /* bit 44, byte +0x0 */
    unsigned long ZBUF_2_Modified : 1; /* bit 45, byte +0x0 */
    unsigned long BITBLTBUF_Modified : 1; /* bit 46, byte +0x0 */
    unsigned long TRXPOS_Modified : 1; /* bit 47, byte +0x0 */
    unsigned long TRXREG_Modified : 1; /* bit 48, byte +0x0 */
    unsigned long TRXDIR_Modified : 1; /* bit 49, byte +0x0 */
    unsigned long HWREG_Modified : 1; /* bit 50, byte +0x0 */
    unsigned long SIGNAL_Modified : 1; /* bit 51, byte +0x0 */
    unsigned long FINISH_Modified : 1; /* bit 52, byte +0x0 */
    unsigned long LABEL_Modified : 1; /* bit 53, byte +0x0 */
};

union anon_33 {
    signed char bData[16]; /* +0x0 */
    unsigned char ubData[16]; /* +0x0 */
    short sData[8]; /* +0x0 */
    unsigned short usData[8]; /* +0x0 */
    int iData[4]; /* +0x0 */
    unsigned int uiData[4]; /* +0x0 */
    long i64Data[2]; /* +0x0 */
    unsigned long u64Data[2]; /* +0x0 */
    float fData[4]; /* +0x0 */
    double dData[2]; /* +0x0 */
};

struct tagGScontext {
    anon_41 PRIM; /* +0x0 */
    anon_8 RGBAQ; /* +0x8 */
    anon_23 ST; /* +0x10 */
    anon_27 UV; /* +0x18 */
    anon_37 XYZF2; /* +0x20 */
    anon_36 XYZ2; /* +0x28 */
    anon_32 TEX0_1; /* +0x30 */
    anon_32 TEX0_2; /* +0x38 */
    anon_22 CLAMP_1; /* +0x40 */
    anon_22 CLAMP_2; /* +0x48 */
    anon_14 FOG; /* +0x50 */
    anon_37 XYZF3; /* +0x58 */
    anon_36 XYZ3; /* +0x60 */
    anon_40 TEX1_1; /* +0x68 */
    anon_40 TEX1_2; /* +0x70 */
    anon_0 TEX2_1; /* +0x78 */
    anon_0 TEX2_2; /* +0x80 */
    anon_30 XYOFFSET_1; /* +0x88 */
    anon_30 XYOFFSET_2; /* +0x90 */
    anon_5 PRMODECONT; /* +0x98 */
    anon_2 PRMODE; /* +0xa0 */
    anon_11 TEXCLUT; /* +0xa8 */
    anon_12 SCANMSK; /* +0xb0 */
    anon_28 MIPTBP1_1; /* +0xb8 */
    anon_28 MIPTBP1_2; /* +0xc0 */
    anon_35 MIPTBP2_1; /* +0xc8 */
    anon_35 MIPTBP2_2; /* +0xd0 */
    anon_4 TEXA; /* +0xd8 */
    anon_17 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_16 SCISSOR_1; /* +0xf0 */
    anon_16 SCISSOR_2; /* +0xf8 */
    anon_6 ALPHA_1; /* +0x100 */
    anon_6 ALPHA_2; /* +0x108 */
    anon_31 DIMX; /* +0x110 */
    anon_7 DTHE; /* +0x118 */
    anon_29 COLCLAMP; /* +0x120 */
    anon_25 TEST_1; /* +0x128 */
    anon_25 TEST_2; /* +0x130 */
    anon_39 PABE; /* +0x138 */
    anon_10 FBA_1; /* +0x140 */
    anon_10 FBA_2; /* +0x148 */
    anon_20 FRAME_1; /* +0x150 */
    anon_20 FRAME_2; /* +0x158 */
    anon_38 ZBUF_1; /* +0x160 */
    anon_38 ZBUF_2; /* +0x168 */
    anon_13 BITBLTBUF; /* +0x170 */
    anon_19 TRXPOS; /* +0x178 */
    anon_24 TRXREG; /* +0x180 */
    anon_18 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_21 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_26 LABEL; /* +0x1a8 */
    anon_34 ModFlgs; /* +0x1b0 */
    anon_34 GlobalModFlgs; /* +0x1b8 */
    anon_33 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_33* pqCurrent; /* +0x2224 */
    anon_3* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
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

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tagGsLoadImage {
    anon_3 gifTag; /* +0x0 */
    anon_13 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_19 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_24 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_18 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_15 {
    unsigned long pad00; /* +0x0 */
};

struct tagGsSetTex {
    anon_3 gifTag; /* +0x0 */
    anon_15 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_32 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_40 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_28 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_35 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_22 clamp; /* +0x60 */
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
} __attribute__((aligned(16)));

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
} __attribute__((aligned(16)));

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
    anon_9* pCurParamBegin; /* +0x5ce8 */
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
    anon_3* pGifTagFan; /* +0x6bf8 */
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
    anon_3* pGifTagBuf0; /* +0x6c5c */
    anon_3* pGifTagBuf1; /* +0x6c60 */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
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

struct GLI_tdstZBufferForLight_ {
    int lSizeX; /* +0x0 */
    int lSizeY; /* +0x4 */
    float fCoefX; /* +0x8 */
    float fCoefY; /* +0xc */
    int p_stZBufferMap; /* +0x10 */
    int p_stMiddleZBufferMap; /* +0x14 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
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

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct anon_9 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
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

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct stInterpolatedPosition {
    float stRot[4]; /* +0x0 */
    float stRotSca[4]; /* +0x10 */
    MTH3D_tdstVector_ stPos; /* +0x20 */
    MTH3D_tdstVector_ stVecSca; /* +0x2c */
    float xPercent; /* +0x38 */
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

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
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

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct IPO_tdstInstanciatedPhysicalObject_ {
    PO_tdstPhysicalObject_* _hPhysicalObject; /* +0x0 */
    int _hCurrentRadiosity; /* +0x4 */
    int a_hRadiosity; /* +0x8 */
    HIE_tdstSuperObject_* hPortalCamera; /* +0xc */
    unsigned int ulLastTransitionID; /* +0x10 */
    float fLastRatioUsed; /* +0x14 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
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

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct tdstEngineTimerStructure_ {
    unsigned int ulTrameNumber; /* +0x0 */
    short sTimerHandle; /* +0x4 */
    unsigned int ulCurrentTimerCount; /* +0x8 */
    unsigned int ulDeltaTimerCount; /* +0xc */
    unsigned int a_ulCounter[16]; /* +0x10 */
    unsigned int ulUsefulDeltaTime; /* +0x50 */
    unsigned int ulPauseTime; /* +0x54 */
    float xFrameLength; /* +0x58 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x5c..0x5f */
    _stTimerCount stRealTimeCount; /* +0x60 */
    _stTimerCount stPauseTime; /* +0x70 */
    unsigned int ulTickPerMS; /* +0x80 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
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
    float (*pLastExecDmaBuffer)[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct GLI_tdstSpecificAttributesFor3D_ {
    GLI_tdstCamera_* p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct WP_tdstGraphNode_ {
    WP_tdstGraphNode_* hNextBrotherDyn; /* +0x0 */
    WP_tdstGraphNode_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToWP_tdhGraphNodeDyn* hFatherDyn; /* +0x8 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0xc */
    int m_lTypeOfWP; /* +0x10 */
    int m_lTypeOfWPInit; /* +0x14 */
    WP_tdstListOfArc_* m_hListOfArc; /* +0x18 */
};

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstEngineStructure_ {
    unsigned char eEngineMode; /* +0x0 */
    char szLevelName[30]; /* +0x1 */
    char szNextLevelName[30]; /* +0x1f */
    char szFirstLevelName[30]; /* +0x3d */
    unsigned char eInputMode; /* +0x5b */
    unsigned char eDisplayFixMode; /* +0x5c */
    unsigned int ulDisplayMode; /* +0x60 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x64..0x67 */
    tdstEngineTimerStructure_ stEngineTimer; /* +0x68 */
    unsigned char ucNumberOfPlayersInMultiMode; /* +0xf0 */
    unsigned char ucNumberOfColumnsInMultiMode; /* +0xf1 */
    unsigned char ucMiniScreenRatioInMultiMode; /* +0xf2 */
    int a_hSO_CurrentMainPlayers[4]; /* +0xf4 */
    short hGLDDevice; /* +0x104 */
    short a_hGLDViewport[5]; /* +0x106 */
    GLD_tdstViewportAttributes_ a_stViewportAttr[5]; /* +0x110 */
    int a_p_stGameViewportCamera[5]; /* +0x340 */
    short a_hGLDFixViewport[5]; /* +0x354 */
    GLD_tdstViewportAttributes_ a_stFixViewportAttr[5]; /* +0x360 */
    GLI_tdstSpecificAttributesFor3D_ a_stFixAttributes3D[5]; /* +0x590 */
    int a_p_stFixCamera[5]; /* +0x5b8 */
    GLI_tdstSpecificAttributesFor3D_ a_stGameAttributes3D[5]; /* +0x5cc */
    tdstViewportManagement_* a_hViewportArray; /* +0x5f4 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn hCameraList; /* +0x5f8 */
    int hDrawSem; /* +0x604 */
    LST2_tdstAnchorTotdxHandleToFamilyListDyn hFamilyList; /* +0x608 */
    LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn hAlwaysActiveCharactersList; /* +0x614 */
    LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn hMainCharacterList; /* +0x620 */
    HIE_tdstSuperObject_* h_StdCamCaracter; /* +0x62c */
    HIE_tdstSuperObject_* h_DbgCamCharacter; /* +0x630 */
    tdstLanguageStructure_* p_stLanguageTable; /* +0x634 */
    FIL_tdstFileNameList_* hLevelNameList; /* +0x638 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x63c..0x63f */
    MAT_tdstTransformation_ stMainCharacterPosition; /* +0x640 */
    MAT_tdstTransformation_ stMainCameraPosition; /* +0x6a0 */
    int lSubMapNumber; /* +0x700 */
    unsigned char bEngineIsInPaused; /* +0x704 */
    unsigned char bEngineHasInPaused; /* +0x705 */
    unsigned char bEngineIsInSaveGamePart; /* +0x706 */
    char a_szLevelName[150][30]; /* +0x707 */
    char a_szDemoName[30][12]; /* +0x189b */
    char a_szDemoLevelName[30][12]; /* +0x1a03 */
    unsigned char ucNumberOfDemos; /* +0x1b6b */
    unsigned char ucNumberOfLevels; /* +0x1b6c */
    unsigned char ucCurrentLevel; /* +0x1b6d */
    unsigned char ucPreviousLevel; /* +0x1b6e */
    unsigned char ucExitIdToQuitPrevLevel; /* +0x1b6f */
    unsigned char ucLevelGlobalCounter; /* +0x1b70 */
    unsigned char xDemoMode; /* +0x1b71 */
    unsigned char ucCurrentLanguage; /* +0x1b72 */
    unsigned char ucNbLanguages; /* +0x1b73 */
    unsigned char bEngineFrozen; /* +0x1b74 */
    unsigned char bResurection; /* +0x1b75 */
    char cCameraMode; /* +0x1b76 */
    unsigned char ucCurrentImportance; /* +0x1b77 */
    unsigned int ulNumberOfSOLAllocated; /* +0x1b78 */
    unsigned int ulNumberOfSOLLoaded; /* +0x1b7c */
    unsigned int ulNumberOfNonPersitentLinksPerSOL; /* +0x1b80 */
    tdstSuperObjectLinks_** p_hSOL; /* +0x1b84 */
    tdstGraphChainedListNode_* p_GraphChainedList; /* +0x1b88 */
    CINE_Manager_* stCineManager; /* +0x1b8c */
};

float XRESf;
float YRESf;
int XRES;
int YRES;
int g_ResChangeVideo;
float GLI_g_ScreenPos_DXBase;
float GLI_g_ScreenPos_DYBase;
float GLI_g_ScreenPos_DX;
float GLI_g_ScreenPos_DY;
unsigned int NbFacesComputed;
unsigned int NbElementCulled;
unsigned int GLI_g_FrameNumber;
unsigned int GLI_g_MustBlocIn30FPS;
unsigned int GLI_g_OkToTestCC;
unsigned int GLI_g_AgingTestTimeMarker;
unsigned int GLI_g_GeneralDisplayList;
unsigned int GLI_MemoryUsedForVAs;
unsigned int VU1FinishCounter;
unsigned int Vu1CallCounter;
float myColorRange[4];
static int gs_iIH_VIF1;
static int gs_iIH_BEIS;
void (*GLI_p_fn_vClientSwapBufferCallback)(void);
int GLI_g_EnableSwapBufferCallback;
unsigned int GLI_g_bInExpertRasters;
unsigned int GLI_g_DisplayRasters;
unsigned int GLI_g_UseTextures;
unsigned int paddata;
unsigned int Oldpaddata;
unsigned int GLI_g_CurrentVertexArrayIndexMax;
unsigned int GLI_g_NbTransparentElements;
unsigned int GLI_g_NbLightedElements;
unsigned int GLI_g_FadeIsOn;
float GLI_g_FadeTransparency;
float GLI_g_GOAL_FRAME;
unsigned int GLI_g_NbHysteresisFrames;
unsigned int GLI_g_NbHystChangeFrames;
unsigned int GLI_g_HysteresisNotYet;
void GLIPS2_vChangeResolutionNTSCProgressive(void);
int toupper(int c);
char* strstr(const char* s1, const char* s2);
unsigned int PS2glInternalGetScreenCalebration(unsigned int target);
void fn_vInitFrameLenght(void);
unsigned int GLI_g_bInMenu;
int GLI_g_iWasAskedToChangeLevel;
int GLI_g_iWasAskedForASnapshot;
int g_PadCircle;
int GLI_g_CurrentPerformanceSnap;
float Fog_RandomValue;
int g_DoSleep;
int GGValue;
int DO_INTERP;
int GLIPS2_CurrentFrameVector;
float GLI_g_fInitialColoredFadeValue;
float GLI_g_fInitialColoredFadeTime;
float GLI_g_fCurrentColoredFadeValue;
float GLI_g_fCurrentColoredFadeDirection;
int Bug_Please_ReloadMenu_40;
int G_MessageNotSet;
int G_DoingAutoSave;
int GLI_g_50_or_60_HzMode;
unsigned int GLI_g_VideoModeBeforeVideos;
float GLI_g_a3_fFadeColor[3];
unsigned int GLI_g_NumberOfSDLsCreatedInThisFrame_Copy;
unsigned int TR_EndFrame_Copy;
unsigned int TR_InterpolDisp1_Copy;
unsigned int TR_StartFrame_Copy;
unsigned int TR_EndDisp2_Copy;
unsigned int TR_EndDisplayCPU_Copy;
unsigned int TR_UpdateDisp2_Copy;
unsigned int TR_IAMecaPlusDisp1_Copy;
unsigned int TR_EndDisp1VU1_Copy;
unsigned int TR_IAMeca_Copy;
unsigned int TR_EndFrame;
unsigned int TR_InterpolDisp1;
unsigned int TR_StartFrame;
unsigned int TR_EndDisp2;
unsigned int TR_EndDisplayCPU;
unsigned int TR_UpdateDisp2;
unsigned int TR_IAMecaPlusDisp1;
unsigned int TR_EndDisp1VU1;
unsigned int TR_IAMeca;
unsigned char rdata[32];
unsigned int EndFrame;
unsigned int StartFrame;
unsigned int NbElementComputed[2];
float g_xVideoFrameDurationInSeconds;
int g_BlackScreenUntilNextMap;
char GLI_g_RecoverMode;
tagGLcontext g_PS2glContext;
tagGScontext g_gsContext;
int GLI_g_hVAContainer;
int MC_g_MemoryCardOperationBackGroundTexture;
tdstEngineStructure_ g_stEngineStructure;
_GL_BUFFERINFO g_stBufferInfo;
int PS2GL_thingsToDoWhenYoureDead;
void GLI_vRecomputeNormalsWhileWaitingForVBL(void);
unsigned int GLI_g_ulDynShadowCpt;
float GLI_g_CompleteFadeCurrentValue;
float GLI_g_CompleteFadeDirection;
unsigned int GLI_g_NO_INTERPOLATION_FOR_NEXT_FRAME;
int g_p_stCurrentViewport;
int GLI_g_bAskedToTakeAPicture;
float g_ffFrameTime;
int g_InGameMenu2DActivated;
unsigned int GLI_g_NumberOfSDLsCreatedInThisFrame;
unsigned int LoadingInProgress;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 94–94 */
/* addr: 0x002a50f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 94
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern int g_lNumberOfBlackTriangles;

void GLI_DRV_vNoBlackPolygon(void)
{
    g_lNumberOfBlackTriangles = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4327–4342 */
/* addr: 0x002a5100  size: 388 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4327
 *   +0x0004 -> line 4328
 *   +0x0008 -> line 4327
 *   +0x000c -> line 4329
 *   +0x0038 -> line 4335
 *   +0x00d0 -> line 4336
 *   +0x00d8 -> line 4338
 *   +0x0174 -> line 4341
 *   +0x0178 -> line 4342
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRestoreVideoModeAfterVideos(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4315–4324 */
/* addr: 0x002a5290  size: 192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4315
 *   +0x0004 -> line 4316
 *   +0x0008 -> line 4315
 *   +0x000c -> line 4317
 *   +0x0010 -> line 4316
 *   +0x0014 -> line 4321
 *   +0x00b0 -> line 4323
 *   +0x00b4 -> line 4324
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vChangeVideoModeForVideos(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4297–4310 */
/* addr: 0x002a5350  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4297
 *   +0x0004 -> line 4299
 *   +0x0008 -> line 4297
 *   +0x000c -> line 4298
 *   +0x0014 -> line 4299
 *   +0x0024 -> line 4300
 *   +0x003c -> line 4301
 *   +0x0044 -> line 4302
 *   +0x004c -> line 4303
 *   +0x0054 -> line 4304
 *   +0x0068 -> line 4305
 *   +0x0080 -> line 4306
 *   +0x0088 -> line 4307
 *   +0x0090 -> line 4308
 *   +0x0098 -> line 4309
 *   +0x00a0 -> line 4310
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ClearScreenAndWait2Frames(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4275–4275 */
/* addr: 0x002a5400  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4275
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vSwitchTo50Hz(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4244–4257 */
/* addr: 0x002a5410  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4244
 *   +0x0004 -> line 4245
 *   +0x0008 -> line 4244
 *   +0x000c -> line 4245
 *   +0x0018 -> line 4247
 *   +0x0020 -> line 4250
 *   +0x0024 -> line 4248
 *   +0x0028 -> line 4250
 *   +0x002c -> line 4248
 *   +0x0030 -> line 4251
 *   +0x0038 -> line 4253
 *   +0x0070 -> line 4254
 *   +0x00a8 -> line 4257
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vSwitchToProgressive60Hz(void)
{
    if (GLI_g_50_or_60_HzMode != 0x46)
    {
        GLIPS2_vChangeResolutionNTSCProgressive();
        GLI_g_50_or_60_HzMode = 0x46;

        g_xVideoFrameDurationInSeconds = 1.0f / 60.0f;
        fn_vInitFrameLenght();

        GLI_g_ScreenPos_DXBase = (float)PS2glInternalGetScreenCalebration(0xf43);
        GLI_g_ScreenPos_DYBase = (float)PS2glInternalGetScreenCalebration(0xf44);


    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4228–4241 */
/* addr: 0x002a54d0  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4228
 *   +0x0004 -> line 4229
 *   +0x0008 -> line 4228
 *   +0x000c -> line 4229
 *   +0x0018 -> line 4231
 *   +0x0020 -> line 4234
 *   +0x0024 -> line 4232
 *   +0x0028 -> line 4234
 *   +0x002c -> line 4232
 *   +0x0030 -> line 4235
 *   +0x0038 -> line 4237
 *   +0x0070 -> line 4238
 *   +0x00a8 -> line 4241
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vSwitchTo60Hz(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4184–4215 */
/* addr: 0x002a5590  size: 880 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4184
 *   +0x0004 -> line 4185
 *   +0x0008 -> line 4184
 *   +0x000c -> line 4185
 *   +0x0010 -> line 4184
 *   +0x0014 -> line 4185
 *   +0x0018 -> line 4184
 *   +0x0030 -> line 4185
 *   +0x0038 -> line 4186
 *   +0x0040 -> line 4191
 *   +0x0048 -> line 4193
 *   +0x004c -> line 4194
 *   +0x0050 -> line 4193
 *   +0x0054 -> line 4194
 *   +0x00a8 -> line 4195
 *   +0x00b0 -> line 4196
 *   +0x00d0 -> line 4198
 *   +0x00e0 -> line 4197
 *   +0x00e4 -> line 4199
 *   +0x00e8 -> line 4196
 *   +0x00f4 -> line 4197
 *   +0x00f8 -> line 4196
 *   +0x00fc -> line 4199
 *   +0x0100 -> line 4196
 *   +0x010c -> line 4197
 *   +0x0114 -> line 4196
 *   +0x011c -> line 4197
 *   +0x0120 -> line 4196
 *   +0x0124 -> line 4197
 *   +0x0128 -> line 4196
 *   +0x012c -> line 4197
 *   +0x0130 -> line 4196
 *   +0x014c -> line 4197
 *   +0x0158 -> line 4196
 *   +0x015c -> line 4197
 *   +0x0160 -> line 4196
 *   +0x0168 -> line 4199
 *   +0x016c -> line 4196
 *   +0x0174 -> line 4198
 *   +0x0178 -> line 4197
 *   +0x017c -> line 4198
 *   +0x0180 -> line 4197
 *   +0x0184 -> line 4198
 *   +0x01a0 -> line 4196
 *   +0x01a4 -> line 4198
 *   +0x01a8 -> line 4196
 *   +0x01ac -> line 4198
 *   +0x01b0 -> line 4197
 *   +0x01b4 -> line 4201
 *   +0x01b8 -> line 4197
 *   +0x01bc -> line 4198
 *   +0x01c0 -> line 4204
 *   +0x01c4 -> line 4198
 *   +0x01cc -> line 4204
 *   +0x01d0 -> line 4198
 *   +0x01d8 -> line 4201
 *   +0x01dc -> line 4198
 *   +0x01e0 -> line 4204
 *   +0x01e4 -> line 4197
 *   +0x01ec -> line 4199
 *   +0x01f0 -> line 4197
 *   +0x01f4 -> line 4199
 *   +0x01f8 -> line 4197
 *   +0x01fc -> line 4199
 *   +0x0218 -> line 4200
 *   +0x0220 -> line 4201
 *   +0x0224 -> line 4200
 *   +0x0228 -> line 4201
 *   +0x023c -> line 4197
 *   +0x0244 -> line 4199
 *   +0x0254 -> line 4200
 *   +0x025c -> line 4201
 *   +0x0260 -> line 4199
 *   +0x0264 -> line 4201
 *   +0x0268 -> line 4199
 *   +0x028c -> line 4201
 *   +0x0290 -> line 4199
 *   +0x0294 -> line 4201
 *   +0x0298 -> line 4199
 *   +0x029c -> line 4201
 *   +0x02a8 -> line 4199
 *   +0x02ac -> line 4201
 *   +0x02b0 -> line 4199
 *   +0x02b4 -> line 4201
 *   +0x02b8 -> line 4199
 *   +0x02c0 -> line 4201
 *   +0x02d0 -> line 4204
 *   +0x02d8 -> line 4205
 *   +0x02f0 -> line 4206
 *   +0x02f8 -> line 4207
 *   +0x0300 -> line 4208
 *   +0x0308 -> line 4209
 *   +0x0310 -> line 4210
 *   +0x0324 -> line 4211
 *   +0x032c -> line 4212
 *   +0x0334 -> line 4213
 *   +0x033c -> line 4214
 *   +0x0344 -> line 4215
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vInitOtherVideoStuff(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4140–4159 */
/* addr: 0x002a5900  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4140
 *   +0x0008 -> line 4143
 *   +0x0010 -> line 4144
 *   +0x0018 -> line 4145
 *   +0x0020 -> line 4146
 *   +0x0028 -> line 4147
 *   +0x0030 -> line 4148
 *   +0x0038 -> line 4149
 *   +0x0040 -> line 4150
 *   +0x0054 -> line 4151
 *   +0x0068 -> line 4152
 *   +0x0074 -> line 4153
 *   +0x0078 -> line 4154
 *   +0x007c -> line 4153
 *   +0x0080 -> line 4154
 *   +0x0084 -> line 4155
 *   +0x0088 -> line 4156
 *   +0x008c -> line 4155
 *   +0x0090 -> line 4157
 *   +0x0098 -> line 4158
 *   +0x00ac -> line 4159
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vChangeResolutionNTSCProgressive(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4116–4136 */
/* addr: 0x002a59c0  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4116
 *   +0x0008 -> line 4119
 *   +0x0010 -> line 4120
 *   +0x0018 -> line 4121
 *   +0x0020 -> line 4122
 *   +0x0028 -> line 4123
 *   +0x0030 -> line 4124
 *   +0x0038 -> line 4125
 *   +0x0040 -> line 4126
 *   +0x0054 -> line 4127
 *   +0x0068 -> line 4128
 *   +0x0074 -> line 4129
 *   +0x0078 -> line 4130
 *   +0x007c -> line 4129
 *   +0x0080 -> line 4130
 *   +0x0084 -> line 4131
 *   +0x0088 -> line 4132
 *   +0x008c -> line 4131
 *   +0x0090 -> line 4133
 *   +0x0098 -> line 4134
 *   +0x00ac -> line 4136
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vChangeResolutionNTSC(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4084–4113 */
/* addr: 0x002a5a80  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4084
 *   +0x0008 -> line 4085
 *   +0x0010 -> line 4086
 *   +0x0018 -> line 4087
 *   +0x0020 -> line 4088
 *   +0x0028 -> line 4090
 *   +0x0030 -> line 4092
 *   +0x0038 -> line 4093
 *   +0x0040 -> line 4095
 *   +0x0048 -> line 4096
 *   +0x0050 -> line 4101
 *   +0x0058 -> line 4103
 *   +0x0060 -> line 4104
 *   +0x0068 -> line 4105
 *   +0x0070 -> line 4106
 *   +0x0078 -> line 4107
 *   +0x0080 -> line 4108
 *   +0x0088 -> line 4109
 *   +0x0090 -> line 4110
 *   +0x0098 -> line 4111
 *   +0x00a0 -> line 4112
 *   +0x00a8 -> line 4113
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vCleanReinitForResChange(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 4016–4022 */
/* addr: 0x002a5b40  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4016
 *   +0x0008 -> line 4018
 *   +0x0010 -> line 4020
 *   +0x0018 -> line 4021
 *   +0x0020 -> line 4022
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MC_SwapBuffers(void)
{
    SND_fn_vSynchroSound();
    PS2auxSwapBuffers();
    GLI_vReinitFrame(1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 3940–3955 */
/* addr: 0x002a5b70  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3940
 *   +0x0010 -> line 3941
 *   +0x0018 -> line 3943
 *   +0x0070 -> line 3944
 *   +0x0080 -> line 3947
 *   +0x0088 -> line 3950
 *   +0x0098 -> line 3951
 *   +0x009c -> line 3953
 *   +0x00a0 -> line 3954
 *   +0x00a4 -> line 3955
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_HysteresisLevelStart(char* levelname)
{
    char buffer[256];
    int i;
    if (levelname)
    {
        for (i = 0; levelname[i] != 0; i++) *(char*)((int)buffer + i) = (char)toupper(levelname[i]); *(char*)((int)buffer + i) = 0; if (strstr(buffer, "MENU") ? 1 : 0)
            GLI_g_HysteresisNotYet = 300000000;
        else


            GLI_g_HysteresisNotYet = 30;
    }
    else
    {
        if (GLI_g_HysteresisNotYet < 30)
            GLI_g_HysteresisNotYet = 30;
    }

    GLI_g_NbHystChangeFrames = 0;
    GLI_g_NbHysteresisFrames = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 1349–1379 */
/* addr: 0x002a5c30  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1349
 *   +0x0014 -> line 1355
 *   +0x0018 -> line 1364
 *   +0x001c -> line 1355
 *   +0x0044 -> line 1358
 *   +0x004c -> line 1359
 *   +0x0050 -> line 1360
 *   +0x005c -> line 1363
 *   +0x0060 -> line 1364
 *   +0x0078 -> line 1367
 *   +0x0088 -> line 1370
 *   +0x0098 -> line 1375
 *   +0x009c -> line 1370
 *   +0x00a0 -> line 1375
 *   +0x00a8 -> line 1379
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CheckData(void)
{
    int i;
    static int Toto[1][32];
    static int TotoT[1];

    if (Oldpaddata == 0)
        return;



    for (i = 0; i < 1; i++)
    {

        if (Oldpaddata != Toto[i][TotoT[i]])
            TotoT[i] = 0;
        else
        {
            if (paddata == 0)
            {


                TotoT[i]++;
                if (Toto[i][TotoT[i]] == -1)
                {

                    TotoT[i] = 0;
                    switch (i)
                    {
                    case 0:
                        GLI_g_OkToTestCC = !GLI_g_OkToTestCC;
                        break;
                    }
                }
            }
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 2695–2920 */
/* addr: 0x002a5ce0  size: 1308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2695
 *   +0x0014 -> line 2711
 *   +0x0020 -> line 2715
 *   +0x0028 -> line 2718
 *   +0x002c -> line 2722
 *   +0x0038 -> line 2724
 *   +0x0040 -> line 2725
 *   +0x0044 -> line 2793
 *   +0x004c -> line 2799
 *   +0x0064 -> line 2807
 *   +0x006c -> line 2808
 *   +0x00ac -> line 2809
 *   +0x00b0 -> line 2808
 *   +0x00c0 -> line 2811
 *   +0x00c4 -> line 2809
 *   +0x00c8 -> line 2808
 *   +0x00d0 -> line 2811
 *   +0x0128 -> line 2812
 *   +0x01c8 -> line 2813
 *   +0x0294 -> line 2815
 *   +0x02b0 -> line 2816
 *   +0x02d8 -> line 2817
 *   +0x02f4 -> line 2818
 *   +0x031c -> line 2825
 *   +0x0378 -> line 2826
 *   +0x03d4 -> line 2829
 *   +0x03d8 -> line 2830
 *   +0x03e0 -> line 2831
 *   +0x03e8 -> line 2833
 *   +0x0400 -> line 2837
 *   +0x0404 -> line 2838
 *   +0x040c -> line 2839
 *   +0x0414 -> line 2842
 *   +0x041c -> line 2845
 *   +0x0424 -> line 2847
 *   +0x0478 -> line 2849
 *   +0x047c -> line 2850
 *   +0x0488 -> line 2854
 *   +0x0494 -> line 2856
 *   +0x049c -> line 2859
 *   +0x04a4 -> line 2861
 *   +0x04ac -> line 2875
 *   +0x04b4 -> line 2876
 *   +0x04bc -> line 2901
 *   +0x04d0 -> line 2905
 *   +0x04dc -> line 2907
 *   +0x04ec -> line 2910
 *   +0x04f4 -> line 2911
 *   +0x04f8 -> line 2917
 *   +0x0504 -> line 2920
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vEndOfDisplay(void)
{
    unsigned int iS;
    unsigned int iM;
    unsigned int iH;
    char string[1024];
    float fTotalTime;
    unsigned int NewStartFrame;
    unsigned int NewEndFrame;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 2622–2673 */
/* addr: 0x002a6200  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2622
 *   +0x0008 -> line 2623
 *   +0x000c -> line 2625
 *   +0x0014 -> line 2627
 *   +0x0028 -> line 2630
 *   +0x0078 -> line 2632
 *   +0x0080 -> line 2633
 *   +0x0084 -> line 2635
 *   +0x011c -> line 2637
 *   +0x0124 -> line 2638
 *   +0x012c -> line 2639
 *   +0x0134 -> line 2648
 *   +0x013c -> line 2650
 *   +0x0144 -> line 2652
 *   +0x0148 -> line 2658
 *   +0x014c -> line 2652
 *   +0x0150 -> line 2658
 *   +0x0160 -> line 2661
 *   +0x0168 -> line 2662
 *   +0x0170 -> line 2663
 *   +0x0178 -> line 2664
 *   +0x0180 -> line 2665
 *   +0x0188 -> line 2666
 *   +0x0190 -> line 2668
 *   +0x019c -> line 2670
 *   +0x01a4 -> line 2673
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vEndOfAI(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 1760–2506 */
/* addr: 0x002a63b0  size: 3280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1760
 *   +0x0008 -> line 1821
 *   +0x0010 -> line 1823
 *   +0x0014 -> line 1826
 *   +0x0018 -> line 1823
 *   +0x001c -> line 1826
 *   +0x0068 -> line 1829
 *   +0x0074 -> line 1832
 *   +0x0098 -> line 1834
 *   +0x00a0 -> line 1836
 *   +0x00ac -> line 1855
 *   +0x00e8 -> line 1857
 *   +0x00f4 -> line 1858
 *   +0x00fc -> line 1859
 *   +0x010c -> line 1860
 *   +0x0110 -> line 1864
 *   +0x0168 -> line 1865
 *   +0x0178 -> line 1921
 *   +0x0180 -> line 1923
 *   +0x01e0 -> line 1925
 *   +0x0240 -> line 1932
 *   +0x0244 -> line 2151
 *   +0x0248 -> line 1932
 *   +0x024c -> line 2151
 *   +0x0254 -> line 2153
 *   +0x0258 -> line 2157
 *   +0x0264 -> line 2158
 *   +0x026c -> line 2159
 *   +0x0294 -> line 2160
 *   +0x029c -> line 2161
 *   +0x02a4 -> line 2165
 *   +0x02ac -> line 2167
 *   +0x02c8 -> line 2168
 *   +0x02cc -> line 2167
 *   +0x02f0 -> line 2168
 *   +0x02f4 -> line 2167
 *   +0x02f8 -> line 2168
 *   +0x02fc -> line 2167
 *   +0x0300 -> line 2168
 *   +0x030c -> line 2167
 *   +0x032c -> line 2168
 *   +0x0330 -> line 2167
 *   +0x0334 -> line 2168
 *   +0x0338 -> line 2167
 *   +0x035c -> line 2168
 *   +0x0360 -> line 2169
 *   +0x0364 -> line 2168
 *   +0x036c -> line 2169
 *   +0x03c8 -> line 2170
 *   +0x03d8 -> line 2169
 *   +0x03ec -> line 2170
 *   +0x03f4 -> line 2169
 *   +0x03f8 -> line 2170
 *   +0x03fc -> line 2169
 *   +0x0400 -> line 2170
 *   +0x041c -> line 2169
 *   +0x0420 -> line 2170
 *   +0x0424 -> line 2169
 *   +0x0428 -> line 2170
 *   +0x042c -> line 2169
 *   +0x0430 -> line 2175
 *   +0x0434 -> line 2169
 *   +0x0438 -> line 2170
 *   +0x043c -> line 2172
 *   +0x0440 -> line 2170
 *   +0x0444 -> line 2174
 *   +0x0448 -> line 2170
 *   +0x0450 -> line 2171
 *   +0x0454 -> line 2172
 *   +0x0458 -> line 2171
 *   +0x045c -> line 2172
 *   +0x0460 -> line 2171
 *   +0x0464 -> line 2172
 *   +0x0468 -> line 2170
 *   +0x046c -> line 2172
 *   +0x0470 -> line 2170
 *   +0x0474 -> line 2172
 *   +0x0478 -> line 2175
 *   +0x047c -> line 2172
 *   +0x04a0 -> line 2171
 *   +0x04a8 -> line 2172
 *   +0x04b4 -> line 2175
 *   +0x04b8 -> line 2172
 *   +0x04c8 -> line 2174
 *   +0x04e0 -> line 2175
 *   +0x04e8 -> line 2176
 *   +0x04f0 -> line 2177
 *   +0x0508 -> line 2178
 *   +0x0510 -> line 2177
 *   +0x0548 -> line 2178
 *   +0x0550 -> line 2180
 *   +0x0568 -> line 2181
 *   +0x056c -> line 2180
 *   +0x05a4 -> line 2181
 *   +0x05ac -> line 2182
 *   +0x05c4 -> line 2183
 *   +0x05d0 -> line 2184
 *   +0x05e8 -> line 2185
 *   +0x05fc -> line 2186
 *   +0x0614 -> line 2187
 *   +0x0624 -> line 2188
 *   +0x063c -> line 2189
 *   +0x0648 -> line 2190
 *   +0x0660 -> line 2191
 *   +0x0670 -> line 2192
 *   +0x0688 -> line 2193
 *   +0x069c -> line 2194
 *   +0x06a4 -> line 2196
 *   +0x06b8 -> line 2261
 *   +0x06d4 -> line 2264
 *   +0x06d8 -> line 2265
 *   +0x06dc -> line 2264
 *   +0x06e0 -> line 2265
 *   +0x06e8 -> line 2267
 *   +0x0708 -> line 2269
 *   +0x070c -> line 2272
 *   +0x0714 -> line 2273
 *   +0x0724 -> line 2275
 *   +0x0738 -> line 2277
 *   +0x073c -> line 2278
 *   +0x0740 -> line 2282
 *   +0x074c -> line 2283
 *   +0x0754 -> line 2284
 *   +0x077c -> line 2285
 *   +0x0784 -> line 2286
 *   +0x078c -> line 2288
 *   +0x0794 -> line 2290
 *   +0x07b0 -> line 2291
 *   +0x07b4 -> line 2290
 *   +0x07d8 -> line 2291
 *   +0x07dc -> line 2290
 *   +0x07e0 -> line 2291
 *   +0x07e4 -> line 2290
 *   +0x07e8 -> line 2291
 *   +0x07f4 -> line 2290
 *   +0x0814 -> line 2291
 *   +0x0818 -> line 2290
 *   +0x081c -> line 2291
 *   +0x0820 -> line 2290
 *   +0x0844 -> line 2291
 *   +0x0848 -> line 2292
 *   +0x084c -> line 2291
 *   +0x0854 -> line 2292
 *   +0x08b0 -> line 2293
 *   +0x08c0 -> line 2292
 *   +0x08d4 -> line 2293
 *   +0x08dc -> line 2292
 *   +0x08e0 -> line 2293
 *   +0x08e4 -> line 2292
 *   +0x08e8 -> line 2293
 *   +0x0904 -> line 2292
 *   +0x0908 -> line 2293
 *   +0x090c -> line 2292
 *   +0x0910 -> line 2293
 *   +0x0914 -> line 2292
 *   +0x0918 -> line 2298
 *   +0x091c -> line 2292
 *   +0x0920 -> line 2293
 *   +0x0924 -> line 2295
 *   +0x0928 -> line 2293
 *   +0x092c -> line 2297
 *   +0x0930 -> line 2293
 *   +0x0938 -> line 2294
 *   +0x093c -> line 2295
 *   +0x0940 -> line 2294
 *   +0x0944 -> line 2295
 *   +0x0948 -> line 2294
 *   +0x094c -> line 2295
 *   +0x0950 -> line 2293
 *   +0x0954 -> line 2295
 *   +0x0958 -> line 2293
 *   +0x095c -> line 2295
 *   +0x0960 -> line 2298
 *   +0x0964 -> line 2295
 *   +0x0988 -> line 2294
 *   +0x0990 -> line 2295
 *   +0x099c -> line 2298
 *   +0x09a0 -> line 2295
 *   +0x09b0 -> line 2297
 *   +0x09c8 -> line 2298
 *   +0x09d0 -> line 2299
 *   +0x09d8 -> line 2300
 *   +0x09f0 -> line 2301
 *   +0x09f8 -> line 2300
 *   +0x0a30 -> line 2301
 *   +0x0a38 -> line 2303
 *   +0x0a50 -> line 2304
 *   +0x0a54 -> line 2303
 *   +0x0a8c -> line 2304
 *   +0x0a94 -> line 2305
 *   +0x0aac -> line 2306
 *   +0x0ab8 -> line 2307
 *   +0x0ad0 -> line 2308
 *   +0x0ae4 -> line 2309
 *   +0x0afc -> line 2310
 *   +0x0b0c -> line 2311
 *   +0x0b24 -> line 2312
 *   +0x0b30 -> line 2313
 *   +0x0b48 -> line 2314
 *   +0x0b58 -> line 2315
 *   +0x0b70 -> line 2316
 *   +0x0b84 -> line 2317
 *   +0x0b8c -> line 2319
 *   +0x0ba0 -> line 2323
 *   +0x0ba8 -> line 2327
 *   +0x0c90 -> line 2328
 *   +0x0c98 -> line 2430
 *   +0x0ca4 -> line 2440
 *   +0x0cb0 -> line 2472
 *   +0x0cc4 -> line 2506
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vManageStuffForRasters(void)
{
    unsigned char zTst;
    unsigned int OldStartFrame;
    float VUVBLPercent;
    float VBLPercent;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 1690–1757 */
/* addr: 0x002a7080  size: 1264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1690
 *   +0x0024 -> line 1692
 *   +0x0030 -> line 1706
 *   +0x004c -> line 1708
 *   +0x0050 -> line 1709
 *   +0x0054 -> line 1708
 *   +0x0060 -> line 1709
 *   +0x0064 -> line 1708
 *   +0x0074 -> line 1709
 *   +0x0098 -> line 1711
 *   +0x009c -> line 1713
 *   +0x00d4 -> line 1715
 *   +0x00dc -> line 1716
 *   +0x00e4 -> line 1717
 *   +0x010c -> line 1718
 *   +0x0114 -> line 1719
 *   +0x011c -> line 1721
 *   +0x0124 -> line 1723
 *   +0x0128 -> line 1726
 *   +0x012c -> line 1723
 *   +0x0150 -> line 1725
 *   +0x0154 -> line 1726
 *   +0x0158 -> line 1725
 *   +0x015c -> line 1723
 *   +0x0168 -> line 1724
 *   +0x016c -> line 1728
 *   +0x0174 -> line 1730
 *   +0x0178 -> line 1723
 *   +0x0188 -> line 1724
 *   +0x018c -> line 1723
 *   +0x0190 -> line 1724
 *   +0x0194 -> line 1723
 *   +0x0198 -> line 1724
 *   +0x019c -> line 1723
 *   +0x01a0 -> line 1724
 *   +0x01a4 -> line 1725
 *   +0x01a8 -> line 1724
 *   +0x01ac -> line 1723
 *   +0x01d0 -> line 1724
 *   +0x01d4 -> line 1725
 *   +0x01d8 -> line 1724
 *   +0x01dc -> line 1731
 *   +0x01e0 -> line 1723
 *   +0x01e4 -> line 1731
 *   +0x01e8 -> line 1723
 *   +0x0200 -> line 1731
 *   +0x0204 -> line 1723
 *   +0x0208 -> line 1724
 *   +0x020c -> line 1725
 *   +0x0210 -> line 1724
 *   +0x0218 -> line 1725
 *   +0x0240 -> line 1726
 *   +0x025c -> line 1727
 *   +0x0264 -> line 1725
 *   +0x027c -> line 1726
 *   +0x0280 -> line 1725
 *   +0x0288 -> line 1726
 *   +0x0298 -> line 1727
 *   +0x029c -> line 1726
 *   +0x02a0 -> line 1727
 *   +0x02a4 -> line 1725
 *   +0x02a8 -> line 1727
 *   +0x02ac -> line 1725
 *   +0x02b0 -> line 1726
 *   +0x02c0 -> line 1725
 *   +0x02c4 -> line 1728
 *   +0x02cc -> line 1725
 *   +0x02d4 -> line 1728
 *   +0x02f0 -> line 1725
 *   +0x02f8 -> line 1728
 *   +0x0324 -> line 1730
 *   +0x033c -> line 1731
 *   +0x0344 -> line 1732
 *   +0x034c -> line 1733
 *   +0x0364 -> line 1734
 *   +0x036c -> line 1733
 *   +0x03a4 -> line 1734
 *   +0x03ac -> line 1736
 *   +0x03c4 -> line 1737
 *   +0x03c8 -> line 1736
 *   +0x0400 -> line 1737
 *   +0x0408 -> line 1738
 *   +0x0428 -> line 1739
 *   +0x0434 -> line 1740
 *   +0x0448 -> line 1741
 *   +0x0458 -> line 1742
 *   +0x0464 -> line 1743
 *   +0x0474 -> line 1744
 *   +0x0488 -> line 1745
 *   +0x0490 -> line 1747
 *   +0x04a4 -> line 1748
 *   +0x04ac -> line 1751
 *   +0x04b4 -> line 1756
 *   +0x04c8 -> line 1757
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vProcessColoredFade(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 1679–1681 */
/* addr: 0x002a7570  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1680
 *   +0x0004 -> line 1679
 *   +0x0008 -> line 1681
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vActualizeClock(void)
{
    GLI_g_fInitialColoredFadeTime = 0;
    g_BlackScreenUntilNextMap = 5;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 1659–1675 */
/* addr: 0x002a7580  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1659
 *   +0x000c -> line 1660
 *   +0x0018 -> line 1661
 *   +0x0020 -> line 1662
 *   +0x0028 -> line 1665
 *   +0x002c -> line 1664
 *   +0x0030 -> line 1665
 *   +0x0044 -> line 1666
 *   +0x004c -> line 1670
 *   +0x0050 -> line 1669
 *   +0x0054 -> line 1670
 *   +0x0058 -> line 1669
 *   +0x005c -> line 1670
 *   +0x0064 -> line 1672
 *   +0x0068 -> line 1673
 *   +0x006c -> line 1672
 *   +0x0070 -> line 1675
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vDoCompleteFade(int bFadeOut, float* pRGBColor, float fTimeInSeconds)
{
    GLI_g_a3_fFadeColor[0] = pRGBColor[0];
    GLI_g_a3_fFadeColor[1] = pRGBColor[1];
    GLI_g_a3_fFadeColor[2] = pRGBColor[2];
    if (bFadeOut)
    {
        GLI_g_fCurrentColoredFadeValue = 0.0f;
        GLI_g_fCurrentColoredFadeDirection = 1.0f / fTimeInSeconds;
    }
    else
    {
        GLI_g_fCurrentColoredFadeValue = 1.0f;
        GLI_g_fCurrentColoredFadeDirection = -1.0f / fTimeInSeconds;
    }
    GLI_g_fInitialColoredFadeValue = GLI_g_fCurrentColoredFadeValue;
    GLI_g_fInitialColoredFadeTime = g_ffFrameTime;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 1636–1648 */
/* addr: 0x002a7600  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1636
 *   +0x0004 -> line 1637
 *   +0x0008 -> line 1636
 *   +0x000c -> line 1637
 *   +0x0014 -> line 1638
 *   +0x0064 -> line 1639
 *   +0x006c -> line 1640
 *   +0x0074 -> line 1641
 *   +0x007c -> line 1642
 *   +0x0084 -> line 1643
 *   +0x008c -> line 1644
 *   +0x0094 -> line 1645
 *   +0x009c -> line 1646
 *   +0x00a4 -> line 1647
 *   +0x00ac -> line 1648
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vCleanInterpolData(void)
{
    sceGsSyncPath(0,0);
    Fog_RandomValue = (float)rand() / 2147483648.0f;
    GLI_g_ulDynShadowCpt = 0;
    PS2_fn_vSignalEndOfDisplay();
    PS2GL_thingsToDoWhenYoureDead = (int)GLI_vRecomputeNormalsWhileWaitingForVBL;
    GLI_g_EnableSwapBufferCallback = 1;
    PS2glFakeSwapBuffers();
    GLI_g_EnableSwapBufferCallback = 0;
    PS2GL_thingsToDoWhenYoureDead = 0;
    GLI_vRemoveRefs();
    GLI_vReinitFrame(1);
    PS2glGsSyncPath();
    VU1_FlushPreviousBuffer();
    GLI_vDeleteAllWaitingPointers();
    fn_vClearPlayanimTempGeometricObjects();
    MOR_fn_vTerminateMorphsForThisFrame();
    GLI_vSaveCameraMatrix();
    PS2glGsSyncPath();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 1442–1467 */
/* addr: 0x002a76c0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1442
 *   +0x00a4 -> line 1444
 *   +0x00bc -> line 1446
 *   +0x00c0 -> line 1449
 *   +0x00dc -> line 1452
 *   +0x00e4 -> line 1459
 *   +0x00e8 -> line 1460
 *   +0x00ec -> line 1461
 *   +0x00f0 -> line 1463
 *   +0x00f4 -> line 1455
 *   +0x00f8 -> line 1456
 *   +0x00fc -> line 1459
 *   +0x0100 -> line 1460
 *   +0x0104 -> line 1464
 *   +0x0108 -> line 1457
 *   +0x010c -> line 1458
 *   +0x0110 -> line 1462
 *   +0x0114 -> line 1455
 *   +0x0118 -> line 1456
 *   +0x011c -> line 1464
 *   +0x0120 -> line 1457
 *   +0x0124 -> line 1458
 *   +0x0128 -> line 1462
 *   +0x012c -> line 1465
 *   +0x0130 -> line 1467
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TR_Report(void)
{
    unsigned int TotalTimeWithVSync;
    int Wait;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 1096–1147 */
/* addr: 0x002a7800  size: 1000 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1096
 *   +0x0008 -> line 1097
 *   +0x0014 -> line 1100
 *   +0x0018 -> line 1101
 *   +0x001c -> line 1100
 *   +0x0020 -> line 1104
 *   +0x0024 -> line 1102
 *   +0x0028 -> line 1101
 *   +0x002c -> line 1104
 *   +0x0034 -> line 1105
 *   +0x003c -> line 1106
 *   +0x0064 -> line 1107
 *   +0x006c -> line 1108
 *   +0x0074 -> line 1110
 *   +0x0134 -> line 1111
 *   +0x013c -> line 1110
 *   +0x014c -> line 1111
 *   +0x0158 -> line 1110
 *   +0x015c -> line 1111
 *   +0x0160 -> line 1110
 *   +0x0164 -> line 1111
 *   +0x0180 -> line 1110
 *   +0x0184 -> line 1111
 *   +0x0188 -> line 1110
 *   +0x018c -> line 1111
 *   +0x0190 -> line 1110
 *   +0x0194 -> line 1112
 *   +0x0198 -> line 1110
 *   +0x019c -> line 1111
 *   +0x01b0 -> line 1112
 *   +0x01bc -> line 1113
 *   +0x01dc -> line 1114
 *   +0x01e0 -> line 1113
 *   +0x01f4 -> line 1116
 *   +0x01fc -> line 1113
 *   +0x020c -> line 1114
 *   +0x0214 -> line 1113
 *   +0x0218 -> line 1114
 *   +0x021c -> line 1113
 *   +0x0220 -> line 1114
 *   +0x0230 -> line 1113
 *   +0x023c -> line 1114
 *   +0x0240 -> line 1113
 *   +0x0244 -> line 1114
 *   +0x0254 -> line 1113
 *   +0x025c -> line 1114
 *   +0x026c -> line 1113
 *   +0x0270 -> line 1114
 *   +0x0274 -> line 1113
 *   +0x0278 -> line 1114
 *   +0x0284 -> line 1113
 *   +0x028c -> line 1114
 *   +0x0290 -> line 1113
 *   +0x029c -> line 1116
 *   +0x02a4 -> line 1117
 *   +0x02a8 -> line 1116
 *   +0x02b4 -> line 1117
 *   +0x02bc -> line 1118
 *   +0x02c4 -> line 1120
 *   +0x02dc -> line 1121
 *   +0x02e8 -> line 1122
 *   +0x02fc -> line 1123
 *   +0x030c -> line 1125
 *   +0x0318 -> line 1126
 *   +0x0328 -> line 1127
 *   +0x033c -> line 1128
 *   +0x0344 -> line 1130
 *   +0x034c -> line 1132
 *   +0x0354 -> line 1134
 *   +0x036c -> line 1135
 *   +0x0378 -> line 1136
 *   +0x038c -> line 1137
 *   +0x039c -> line 1139
 *   +0x03a8 -> line 1140
 *   +0x03b8 -> line 1141
 *   +0x03cc -> line 1142
 *   +0x03d4 -> line 1144
 *   +0x03dc -> line 1147
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_v_InformJustLoadedLevel(void)
{
    unsigned char zTst;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 802–802 */
/* addr: 0x002a7bf0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 802
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSecondInitPS2GL(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 651–702 */
/* addr: 0x002a7c00  size: 612 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 651
 *   +0x001c -> line 653
 *   +0x002c -> line 672
 *   +0x0034 -> line 673
 *   +0x0050 -> line 675
 *   +0x0054 -> line 673
 *   +0x0064 -> line 675
 *   +0x0068 -> line 673
 *   +0x0078 -> line 674
 *   +0x007c -> line 673
 *   +0x0080 -> line 674
 *   +0x0084 -> line 673
 *   +0x0088 -> line 675
 *   +0x008c -> line 674
 *   +0x0090 -> line 675
 *   +0x0094 -> line 673
 *   +0x0098 -> line 675
 *   +0x009c -> line 673
 *   +0x00a0 -> line 675
 *   +0x00b0 -> line 673
 *   +0x00c0 -> line 674
 *   +0x00c4 -> line 675
 *   +0x00c8 -> line 674
 *   +0x00cc -> line 675
 *   +0x00d0 -> line 678
 *   +0x00d4 -> line 675
 *   +0x00e4 -> line 678
 *   +0x00ec -> line 675
 *   +0x010c -> line 678
 *   +0x0114 -> line 688
 *   +0x01fc -> line 690
 *   +0x0208 -> line 691
 *   +0x0220 -> line 699
 *   +0x0238 -> line 700
 *   +0x024c -> line 702
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_DRV_vClearDevice(int ZBuffer, int ColorBuffer, unsigned int Color)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 638–645 */
/* addr: 0x002a7e70  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 638
 *   +0x0008 -> line 641
 *   +0x002c -> line 644
 *   +0x0034 -> line 645
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern unsigned int PS2glGenLists(int range);
extern void GLI_vAllocateTempLists(void);
extern void ClearScreenAfterInit(void);
extern void PS2glSwapBufferNotifyFunc(void (*Func)(void));
extern void GLI_fn_vInitRenderParameters(void);
void GLI_fn_vSwapBufferCallback(void);

void GLI_DRV_xInitDriver(void)
{
    GLI_g_GeneralDisplayList = PS2glGenLists(1);
    GLI_vAllocateTempLists();
    ClearScreenAfterInit();
    PS2glSwapBufferNotifyFunc(GLI_fn_vSwapBufferCallback);
    GLI_fn_vInitRenderParameters();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 627–627 */
/* addr: 0x002a7eb0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 627
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vSetSwapBufferCallback(void (*f)(void))
{
    GLI_p_fn_vClientSwapBufferCallback = f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 618–622 */
/* addr: 0x002a7ec0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 618
 *   +0x0008 -> line 619
 *   +0x0010 -> line 620
 *   +0x0028 -> line 621
 *   +0x0030 -> line 622
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vSwapBufferCallback(void)
{
    /* TODO: requires the original CP0 Count access macro. */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 462–600 */
/* addr: 0x002a7f00  size: 1420 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 462
 *   +0x0014 -> line 467
 *   +0x001c -> line 468
 *   +0x0024 -> line 481
 *   +0x002c -> line 485
 *   +0x0034 -> line 487
 *   +0x003c -> line 492
 *   +0x0050 -> line 494
 *   +0x005c -> line 496
 *   +0x0064 -> line 498
 *   +0x006c -> line 501
 *   +0x0074 -> line 512
 *   +0x0088 -> line 514
 *   +0x0098 -> line 518
 *   +0x009c -> line 519
 *   +0x00a0 -> line 518
 *   +0x00a4 -> line 519
 *   +0x00dc -> line 529
 *   +0x00e0 -> line 519
 *   +0x00e4 -> line 529
 *   +0x00e8 -> line 519
 *   +0x0100 -> line 531
 *   +0x0108 -> line 532
 *   +0x0120 -> line 533
 *   +0x0124 -> line 532
 *   +0x0128 -> line 533
 *   +0x012c -> line 532
 *   +0x0130 -> line 535
 *   +0x0134 -> line 532
 *   +0x014c -> line 533
 *   +0x0150 -> line 532
 *   +0x015c -> line 533
 *   +0x0164 -> line 532
 *   +0x0168 -> line 533
 *   +0x016c -> line 532
 *   +0x0174 -> line 533
 *   +0x0178 -> line 532
 *   +0x017c -> line 534
 *   +0x0180 -> line 532
 *   +0x0184 -> line 534
 *   +0x0188 -> line 532
 *   +0x0194 -> line 533
 *   +0x0198 -> line 534
 *   +0x019c -> line 533
 *   +0x01a4 -> line 532
 *   +0x01a8 -> line 533
 *   +0x01ac -> line 532
 *   +0x01b4 -> line 534
 *   +0x01b8 -> line 532
 *   +0x01c0 -> line 535
 *   +0x01c4 -> line 534
 *   +0x01c8 -> line 533
 *   +0x01cc -> line 534
 *   +0x01d0 -> line 533
 *   +0x01d4 -> line 534
 *   +0x01f0 -> line 532
 *   +0x01f4 -> line 534
 *   +0x01f8 -> line 532
 *   +0x01fc -> line 534
 *   +0x0200 -> line 533
 *   +0x0208 -> line 534
 *   +0x0214 -> line 537
 *   +0x0218 -> line 534
 *   +0x0220 -> line 537
 *   +0x0224 -> line 534
 *   +0x0228 -> line 535
 *   +0x022c -> line 533
 *   +0x0234 -> line 535
 *   +0x0238 -> line 533
 *   +0x023c -> line 535
 *   +0x0240 -> line 533
 *   +0x0244 -> line 535
 *   +0x0260 -> line 536
 *   +0x0268 -> line 537
 *   +0x0278 -> line 533
 *   +0x0280 -> line 535
 *   +0x028c -> line 536
 *   +0x0290 -> line 535
 *   +0x0294 -> line 536
 *   +0x0298 -> line 537
 *   +0x029c -> line 536
 *   +0x02a0 -> line 537
 *   +0x02a8 -> line 535
 *   +0x02ac -> line 537
 *   +0x02b0 -> line 535
 *   +0x02d4 -> line 537
 *   +0x02d8 -> line 535
 *   +0x02dc -> line 537
 *   +0x02e0 -> line 535
 *   +0x02e4 -> line 537
 *   +0x02f0 -> line 535
 *   +0x02f4 -> line 537
 *   +0x02f8 -> line 535
 *   +0x02fc -> line 537
 *   +0x0300 -> line 535
 *   +0x0308 -> line 537
 *   +0x031c -> line 539
 *   +0x0374 -> line 540
 *   +0x0398 -> line 542
 *   +0x03ac -> line 543
 *   +0x03c4 -> line 545
 *   +0x03cc -> line 546
 *   +0x03e0 -> line 548
 *   +0x03e8 -> line 549
 *   +0x03f0 -> line 550
 *   +0x0404 -> line 551
 *   +0x041c -> line 553
 *   +0x0424 -> line 554
 *   +0x0438 -> line 556
 *   +0x0440 -> line 557
 *   +0x0448 -> line 559
 *   +0x0450 -> line 566
 *   +0x045c -> line 570
 *   +0x0468 -> line 571
 *   +0x0474 -> line 572
 *   +0x047c -> line 576
 *   +0x0480 -> line 574
 *   +0x0484 -> line 576
 *   +0x0498 -> line 577
 *   +0x04a4 -> line 580
 *   +0x04ac -> line 582
 *   +0x04d8 -> line 583
 *   +0x04f0 -> line 584
 *   +0x04f8 -> line 585
 *   +0x0500 -> line 589
 *   +0x0538 -> line 590
 *   +0x0570 -> line 600
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vFirstInitOpenGL(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 437–441 */
/* addr: 0x002a8490  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 437
 *   +0x0004 -> line 438
 *   +0x0008 -> line 437
 *   +0x000c -> line 438
 *   +0x0014 -> line 439
 *   +0x001c -> line 441
 *   +0x0020 -> line 440
 *   +0x0024 -> line 441
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int DummyDMAHandler(void)
{
    scePrintf("DMA HANDLER CALLED !!!\n");
    sceGsResetPath();
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 430–434 */
/* addr: 0x002a84c0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 430
 *   +0x0008 -> line 431
 *   +0x0014 -> line 432
 *   +0x001c -> line 434
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int MyDMAInterruptHandler(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 385–385 */
/* addr: 0x002a84f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 385
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vEndSoundCounter(void)
{

}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Init_PS2GL.c lines 378–378 */
/* addr: 0x002a8500  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 378
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vStartSoundCounter(void)
{
    /* TODO: decompile from asm/... */
}
