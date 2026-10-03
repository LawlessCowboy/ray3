/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered from the original PS2 MTH floating-point helper convention. */
#define MTH_SQRT_IN_PLACE(_value) \
    asm { sqrt.s _value, _value } \
    asm { nop }
#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }  \
    asm { nop }
#define MTH_SQR3_TO(_result, _x, _y, _z) \
    asm { mula.s _x, _x }                       \
    asm { madda.s _y, _y }                      \
    asm { madd.s _result, _z, _z }
#define MTH_VECTOR_NORM_TO(_result, _vector)           \
    do {                                                   \
        float _mthX = (_vector).xX;                        \
        float _mthY = (_vector).xY;                        \
        float _mthZ = (_vector).xZ;                        \
        float _mthSquared;                                 \
        MTH_SQR3_TO(_mthSquared, _mthX, _mthY, _mthZ);    \
        MTH_SQRT_TO(_result, _mthSquared);                 \
    } while (0)

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef union RGBAStruct_ RGBAStruct_;
typedef union tduGetSetParamForNode_ tduGetSetParamForNode_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct LST2_tdstAnchorTotdxHandleToTransitionOpt LST2_tdstAnchorTotdxHandleToTransitionOpt;
typedef struct LST2_tdstAnchorTotdxHandleToProhibitOpt LST2_tdstAnchorTotdxHandleToProhibitOpt;
typedef struct tdstState_ tdstState_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef union tduIdInterpret_ tduIdInterpret_;
typedef union anon_0 anon_0;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct CAM_Shooter_ CAM_Shooter_;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef union tduGetSetParam_ tduGetSetParam_;
typedef struct anon_3 anon_3;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct LST2_tdstAnchorToWP_tdHandleOfArcDyn LST2_tdstAnchorToWP_tdHandleOfArcDyn;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct tdstTransition_ tdstTransition_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct stMorphData stMorphData;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstActionTableEntry_ tdstActionTableEntry_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstTreeInterpret_ tdstTreeInterpret_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstDsgVarInfo_ tdstDsgVarInfo_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct MTH_stMove MTH_stMove;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct DNM_stReport DNM_stReport;
typedef struct CAM_Shooter_CV_ CAM_Shooter_CV_;

typedef enum tdeKeyWordId_ {
    eKeyWord_If = 0,
    eKeyWord_IfNot = 1,
    eKeyWord_If2 = 2,
    eKeyWord_If4 = 3,
    eKeyWord_If8 = 4,
    eKeyWord_If16 = 5,
    eKeyWord_If32 = 6,
    eKeyWord_If64 = 7,
    eKeyWord_IfNot2 = 8,
    eKeyWord_IfNot4 = 9,
    eKeyWord_IfNot8 = 10,
    eKeyWord_IfNot16 = 11,
    eKeyWord_IfNot32 = 12,
    eKeyWord_IfNot64 = 13,
    eKeyWord_IfDebug = 14,
    eKeyWord_IfNotU64 = 15,
    eKeyWord_Then = 16,
    eKeyWord_Else = 17,
    eKeyWord_EngineGoto = 18,
    eKeyWord_Me = 19,
    eKeyWord_MainActor = 20,
    eKeyWord_Nobody = 21,
    eKeyWord_NoInput = 22,
    eKeyWord_NoSoundEvent = 23,
    eKeyWord_NoLight = 24,
    eKeyWord_NoSuperObject = 25,
    eKeyWord_Nowhere = 26,
    eKeyWord_NoSOL = 27,
    eKeyWord_EmptyText = 28,
    eKeyWord_CapsNull = 29,
    eKeyWord_NoGraph = 30,
    eKeyWord_NoAction = 31,
    eKeyWord_NoGameMaterial = 32,
    eKeyWord_NoVisualMaterial = 33,
    eKeyWord_While = 34,
    eKeyWord_BeginWhile = 35,
    eKeyWord_EndWhile = 36,
    eNbKeyWord = 37,
} tdeKeyWordId_;

typedef enum tdeObjectTreeInit_ {
    OTI_WhenGameStart = 0,
    OTI_MapLoaded = 1,
    OTI_ReinitTheMap = 2,
    OTI_LoadSavedGame = 3,
    OTI_PlayerDead = 4,
    OTI_WhenGoOutOfZone = 4,
    OTI_Always = 4,
    OTI_AlwaysCreated = 5,
} tdeObjectTreeInit_;

typedef enum tdeFuncId_ {
    eFunc_GetPersoAbsolutePosition = 0,
    eFunc_GetMyAbsolutePosition = 1,
    eFunc_GetAngleAroundZToPerso = 2,
    eFunc_DistanceToPerso = 3,
    eFunc_DistanceXToPerso = 4,
    eFunc_DistanceYToPerso = 5,
    eFunc_DistanceZToPerso = 6,
    eFunc_DistanceXYToPerso = 7,
    eFunc_DistanceXZToPerso = 8,
    eFunc_DistanceYZToPerso = 9,
    eFunc_DistanceToPersoCenter = 10,
    eFunc_DistanceXToPersoCenter = 11,
    eFunc_DistanceYToPersoCenter = 12,
    eFunc_DistanceZToPersoCenter = 13,
    eFunc_DistanceXYToPersoCenter = 14,
    eFunc_DistanceXZToPersoCenter = 15,
    eFunc_DistanceYZToPersoCenter = 16,
    eCond_GetRadiusWP = 17,
    eCond_CircularInterpolationBetween3WP = 18,
    eCond_BezierBetween3WP = 19,
    eFunc_DistanceToWP = 20,
    eFunc_GetWPAbsolutePosition = 21,
    eFunc_Int = 22,
    eFunc_RandomInt = 23,
    eFunc_Real = 24,
    eFunc_Sinus = 25,
    eFunc_Cosinus = 26,
    eFunc_Square = 27,
    eFunc_SquareRoot = 28,
    eFunc_RandomReal = 29,
    eFunc_MinimumReal = 30,
    eFunc_MaximumReal = 31,
    eFunc_DegreeToRadian = 32,
    eFunc_RadianToDegree = 33,
    eFunc_AbsoluteValue = 34,
    eFunc_LimitRealInRange = 35,
    eFunc_Sign = 36,
    eFunc_Cube = 37,
    eFunc_Modulo = 38,
    eFunc_TernInf = 39,
    eFunc_TernSup = 40,
    eFunc_TernEq = 41,
    eFunc_TernInfEq = 42,
    eFunc_TernSupEq = 43,
    eFunc_TernOp = 44,
    eFunc_TemporalRealCombination = 45,
    eFunc_GetHitPoints = 46,
    eFunc_AddAndGetHitPoints = 47,
    eFunc_SubAndGetHitPoints = 48,
    eFunc_GetHitPointsMax = 49,
    eFunc_AddAndGetHitPointsMax = 50,
    eFunc_SubAndGetHitPointsMax = 51,
    eFunc_ListSize = 52,
    eFunc_GivePersoInList = 53,
    eFunc_AbsoluteVector = 54,
    eFunc_RelativeVector = 55,
    eFunc_VecteurLocalToGlobal = 56,
    eFunc_VecteurGlobalToLocal = 57,
    eFunc_GetMagnetStrength = 58,
    eFunc_GetMagnetFar = 59,
    eFunc_GetMagnetNear = 60,
    eFunc_GetMagnetDuration = 61,
    eFunc_SPO_GetDrawFlag = 62,
    eFunc_GetSPO_GetCollidedSPO = 63,
    eFunc_GetSPO_GetCollidedWallSPO = 64,
    eFunc_GetSPO_GetCollidedCeilingSPO = 65,
    eFunc_GetTime = 66,
    eFunc_GetElapsedTime = 67,
    eFunc_GetDeltaT = 68,
    eFunc_GetFrameLength = 69,
    eFunc_GetFirstActivePad = 70,
    eFunc_InputAnalogicValueX = 71,
    eFunc_InputRealAnalogicValueX = 72,
    eFunc_InputAnalogicValueY = 73,
    eFunc_InputRealAnalogicValueY = 74,
    eFunc_InputAnalogicValue = 75,
    eFunc_InputRealAnalogicValue = 76,
    eFunc_VitessePadAnalogique = 77,
    eFunc_GenerateObject = 78,
    eFunc_CountGeneratedObjects = 79,
    eFunc_GetGlobalCounter = 80,
    eFunc_GetSubMapId = 81,
    eFunc_AddColor = 82,
    eFunc_AddRed = 83,
    eFunc_AddGreen = 84,
    eFunc_AddBlue = 85,
    eFunc_AddAlpha = 86,
    eFunc_ColorRedGreenBlueAlpha = 87,
    eFunc_ColorRedGreenBlue = 88,
    eFunc_ColorRed = 89,
    eFunc_ColorGreen = 90,
    eFunc_ColorBlue = 91,
    eFunc_ColorAlpha = 92,
    eFunc_GetVMTColor = 93,
    eFunc_GetVMTSpecularCoef = 94,
    eFunc_GetVMTSpecularExponent = 95,
    eFunc_GetVMTDiffuseCoef = 96,
    eFunc_GetVMTAmbientCoef = 97,
    eFunc_GetVMTTextureScrollingCoefU = 98,
    eFunc_GetVMTTextureScrollingCoefV = 99,
    eFunc_GetVMTFrame = 100,
    eFunc_GetVMTNumberOfFrames = 101,
    eFunc_MP_GetNumberOfPlayers = 102,
    eFunc_MP_GetMaxNumberOfPlayers = 103,
    eFunc_MP_GetViewPortOfPlayer = 104,
    eFunc_MP_GetActiveMainActors = 105,
    eFunc_PAD_GetHorizontalInvertion = 106,
    eFunc_PAD_GetVerticalInvertion = 107,
    eFunc_GetRLITableIndex = 108,
    eFunc_PAD2_GetGlobalVector = 109,
    eFunc_PAD2_GetHorizontalAxis = 110,
    eFunc_PAD2_GetVerticalAxis = 111,
    eFunc_PAD2_GetAnalogForce = 112,
    eFunc_PAD2_GetTrueAnalogForce = 113,
    eFunc_PAD2_GetRotationAngle = 114,
    eFunc_PAD2_GetPadSector = 115,
    eFunc_PAD2_GetLongDescValue = 116,
    eFunc_TXT_GetNumberOfLines = 117,
    eFunc_InputAnalogicValue2 = 118,
    eFunc_InputAnalogicValueV = 119,
    eFunc_InputRealAnalogicValueV = 120,
    eFunc_InputAnalogicValueZ = 121,
    eFunc_InputRealAnalogicValueZ = 122,
    eProc_SAV2_GetValue = 123,
    eProc_SAV2_GetValueIndex = 124,
    eProc_SAV2_GetNumberOfExistingSave = 125,
    eProc_SAV2_GetTimeSaveGame = 126,
    eProc_SAV2_GetDateSaveGame = 127,
    eFunc_GetTransitionSectorID = 128,
    eFunc_FFBPreCreateConstantEffect = 129,
    eFunc_FFBCreateAndLaunchConstantEffect = 130,
    eFunc_FFBStopEffectWithFade = 131,
    eFunc_CreateCheapCharacterList = 132,
    eFunc_TestCheapCharacterList = 133,
    eFunc_GetClosestCheapCharacter = 134,
    eFunc_GetFurthestCheapCharacter = 135,
    eFunc_GetReactivateCheapCharacter = 136,
    eFunc_LitPointsDeMagie = 137,
    eFunc_LitPointsDeMagieMax = 138,
    eFunc_AjouteEtLitPointsDeMagie = 139,
    eFunc_AjouteEtLitPointsDeMagieMax = 140,
    eFunc_EnleveEtLitPointsDeMagie = 141,
    eFunc_EnleveEtLitPointsDeMagieMax = 142,
    eFunc_LitPointsDair = 143,
    eFunc_LitPointsDairMax = 144,
    eFunc_AjouteEtLitPointsDair = 145,
    eFunc_AjouteEtLitPointsDairMax = 146,
    eFunc_EnleveEtLitPointsDair = 147,
    eFunc_EnleveEtLitPointsDairMax = 148,
    eFunc_PersoLePlusProche = 149,
    eFunc_PersoLePlusProcheExtended = 150,
    eFunc_PersoLePlusProcheDansSecteurCourant = 151,
    eFunc_PersoLePlusProcheDansSecteurCourantExtended = 152,
    eFunc_NearerActorInFieldOfVision = 153,
    eFunc_NearerActorInFieldOfVisionExtended = 154,
    eFunc_NearerActorOfFamilyInFieldOfVision = 155,
    eFunc_NearerActorOfFamilyInFieldOfVisionExtended = 156,
    eFunc_NearerActorInFieldOfVisionWithOffset = 157,
    eFunc_NearerActorInFieldOfVisionWithOffsetExtended = 158,
    eFunc_NearerActorOfFamilyInFOVWithOffset = 159,
    eFunc_NearerActorOfFamilyInFOVWithOffsetExtended = 160,
    eFunc_GetNbActivePerso = 161,
    eFunc_CibleLaPlusProche = 162,
    eFunc_CibleLaPlusProcheExtended = 163,
    eFunc_CibleLaPlusProcheAvecAngles = 164,
    eFunc_CibleLaPlusProcheAvecAnglesExtended = 165,
    eFunc_GetCloserNetwork = 166,
    eFunc_NetWorkCloserCollisionWP = 167,
    eFunc_ReseauWPLePlusProche = 168,
    eFunc_ReseauWPLePlusProcheZPoids = 169,
    eFunc_NetworkCloserWPOfType = 170,
    eFunc_NetworkCloserCollisionWPOfType = 171,
    eFunc_NetworkCloserWPOfExactType = 172,
    eFunc_ReseauWPLePlusDansLAxe = 173,
    eFunc_ReseauWPLePlusDansLAxe2 = 174,
    eFunc_ReseauWPLePlusProcheAvecAngle = 175,
    eFunc_NetworkNextWPWithCapa = 176,
    eFunc_NetworkNextWPWithExactCapa = 177,
    eFunc_NetworkNextWPWithCapaOptimalWeight = 178,
    eFunc_NetworkNextWPOfType = 179,
    eFunc_NetworkNextWPOfExactType = 180,
    eFunc_NetworkAffectTypeOfConnectedWP = 181,
    eFunc_NetworkAffectTypeOfConnectedWPWithCapa = 182,
    eFunc_ReseauCheminLePlusCourt = 183,
    eFunc_NetworkBuildOrderedPath = 184,
    eFunc_NetworkBuildOrderedPathCircular = 185,
    eFunc_NetworkAllocateGraphToMSWay = 186,
    eFunc_NetworkAllocateGraphToMSWayCircular = 187,
    eFunc_NetworkBuildRandomPath = 188,
    eFunc_NetworkBuildRandomCircularPath = 189,
    eFunc_ReseauLitIndexCourant = 190,
    eFunc_ReseauForceIndexCourant = 191,
    eFunc_ReseauLitPremierIndex = 192,
    eFunc_ReseauLitDernierIndex = 193,
    eFunc_ReseauIncrementIndex = 194,
    eFunc_ReseauDecrementIndex = 195,
    eFunc_ReseauLitWPAIndex = 196,
    eFunc_ReseauLitCapaciteLiaisonAIndex = 197,
    eFunc_ReseauChangeCapaciteLiaisonAIndex = 198,
    eFunc_ReseauLitPoidsLiaisonAIndex = 199,
    eFunc_ReseauChangePoidsLiaisonAIndex = 200,
    eFunc_NetworkGetIndexOfWPInMSWay = 201,
    eFunc_NetworkForceWPToCurrent = 202,
    eFunc_NetworkTestTheEnds = 203,
    eFunc_ReseauLitCapaciteLiaisonDansGraph = 204,
    eFunc_ReseauChangeCapaciteLiaisonDansGraph = 205,
    eFunc_ReseauLitPoidsLiaisonDansGraph = 206,
    eFunc_ReseauChangePoidsLiaisonDansGraph = 207,
    eFunc_NetworkGetTypeOfWP = 208,
    eFunc_GetCapabilities = 209,
    eFunc_CapabilityAtBitNumber = 210,
    eFunc_GetScrollSpeed = 211,
    eFunc_MTGetScrollSpeed = 212,
    eFunc_GetNbFrame = 213,
    eFunc_DotProduct = 214,
    eFunc_CrossProduct = 215,
    eFunc_Normalize = 216,
    eFunc_GetSPOCoordinates = 217,
    eFunc_GetSPOSighting = 218,
    eFunc_GetSPOHorizon = 219,
    eFunc_GetSPOBanking = 220,
    eFunc_GetTractionFactor = 221,
    eFunc_GetCenterZDEType = 222,
    eFunc_GetCenterZDMType = 223,
    eFunc_GetCenterZDRType = 224,
    eFunc_GetCenterZDDType = 225,
    eFunc_TextAffiche = 226,
    eFunc_MJTextAffiche = 227,
    eFunc_GetCPUCounter = 228,
    eFunc_TurnToPosition = 229,
    eFunc_FormatMemCard = 230,
    eFunc_GetDefaultLanguage = 231,
    eFunc_PS2_MagicBox = 232,
    eFunc_SAV2_DoVarsNeedToBeSet = 233,
    eFunc_CINEGetGenerateEvent = 234,
    eFunc_StringCompare = 235,
    eFunc_EmptyString = 236,
    eFunc_VitesseHorizontaleDuPerso = 237,
    eFunc_VitesseVerticaleDuPerso = 238,
    eFunc_GetPersoZoomFactor = 239,
    eFunc_GetPersoSighting = 240,
    eFunc_GetPersoHorizon = 241,
    eFunc_GetPersoBanking = 242,
    eFunc_LitPositionZDM = 243,
    eFunc_LitPositionZDE = 244,
    eFunc_LitPositionZDD = 245,
    eFunc_LitCentreZDM = 246,
    eFunc_LitCentreZDE = 247,
    eFunc_LitCentreZDD = 248,
    eFunc_LitAxeZDM = 249,
    eFunc_LitAxeZDE = 250,
    eFunc_LitAxeZDD = 251,
    eFunc_LitDimensionZDM = 252,
    eFunc_LitDimensionZDE = 253,
    eFunc_LitDimensionZDD = 254,
    eFunc_VecteurPointAxe = 255,
    eFunc_VecteurPointSegment = 256,
    eFunc_VectorContribution = 257,
    eFunc_VectorCombination = 258,
    eFunc_TemporalVectorCombination = 259,
    eFunc_ScaledVector = 260,
    eFunc_GetVectorNorm = 261,
    eFunc_RotateVector = 262,
    eFunc_VectorAngle = 263,
    eFunc_VectorCos = 264,
    eFunc_VectorSin = 265,
    eFunc_GetNormalCollideVector = 266,
    eFunc_GetNormalSlopeVector = 267,
    eFunc_GetNormalSlopeVectorAndAngle = 268,
    eFunc_GetNormalCollideVector2 = 269,
    eFunc_GetCollidePoint = 270,
    eFunc_GetCollidePoint2 = 271,
    eFunc_GetHandsCollidePoint = 272,
    eFunc_GetCollideRate = 273,
    eFunc_GetCollideRate2 = 274,
    eFunc_GetCollideMaterialType = 275,
    eFunc_GetCollideMaterialType2 = 276,
    eFunc_GetCollideMaterialDirection = 277,
    eFunc_GetCollideMaterialCoeff = 278,
    eFunc_GetCollideMaterialTypeForAi = 279,
    eFunc_GetCollisionPoint = 280,
    eFunc_GetCollisionVector = 281,
    eFunc_GetCollisionPerso = 282,
    eFunc_GetCollisionPointMaterial = 283,
    eFunc_GetFirstCollisionInfo = 284,
    eFunc_GetLastTraversedMaterialType = 285,
    eFunc_GetLastTraversedMaterial = 286,
    eFunc_GetCurrentCollidedGMT = 287,
    eFunc_GetColliderType = 288,
    eFunc_GetColliderActor = 289,
    eFunc_GetColliderVector = 290,
    eFunc_GetColliderReal = 291,
    eFunc_GetLastCollisionActor = 292,
    eFunc_ComputeRebondVector = 293,
    eFunc_GetModuleAbsolutePosition = 294,
    eFunc_GetModuleRelativePosition = 295,
    eFunc_GetModuleZoomFactor = 296,
    eFunc_GetModuleSighting = 297,
    eFunc_GetModuleHorizon = 298,
    eFunc_GetModuleBanking = 299,
    eFunc_CastIntegerToChannel = 300,
    eFunc_GetSlotDate = 301,
    eFunc_GetSlotName = 302,
    eFunc_GetSlotScore = 303,
    eFunc_GetStringCharAt = 304,
    eFunc_ScanAsciiKey = 305,
    eFunc_GetFormattedTextInfo = 306,
    eFunc_GetInputEntryName = 307,
    eFunc_GetMechanicGravityFactor = 308,
    eFunc_GetMechanicSlide = 309,
    eFunc_GetMechanicRebound = 310,
    eFunc_GetMechanicSlopeLimit = 311,
    eFunc_GetMechanicInertiaX = 312,
    eFunc_GetMechanicInertiaY = 313,
    eFunc_GetMechanicInertiaZ = 314,
    eFunc_GetMechanicTiltIntensity = 315,
    eFunc_GetMechanicTiltInertia = 316,
    eFunc_GetMechanicTiltOrigin = 317,
    eFunc_GetMechanicMaxSpeed = 318,
    eFunc_GetMechanicStreamPriority = 319,
    eFunc_GetMechanicStreamSpeed = 320,
    eFunc_GetMechanicStreamFactor = 321,
    eFunc_GetSlideFactorX = 322,
    eFunc_GetSlideFactorY = 323,
    eFunc_GetSlideFactorZ = 324,
    eFunc_JumpImpulsion = 325,
    eFunc_GetSpeedAnim = 326,
    eFunc_HierGetFather = 327,
    eFunc_GetActivationZDD = 328,
    eFunc_GetActivationZDM = 329,
    eFunc_GetActivationZDE = 330,
    eFunc_GetActivationZDR = 331,
    eFunc_GetCollisionFrequency = 332,
    eFunc_GetBrainFrequency = 333,
    eFunc_GetLightFrequency = 334,
    eFunc_GetBooleanInArray = 335,
    eFunc_GetNumberOfBooleanInArray = 336,
    eFunc_GetButtonName = 337,
    eFunc_GetOneCustomFloat = 338,
    eFunc_GetOneCustomLong = 339,
    eFunc_GetOneCustomVector = 340,
    eFunc_GetDriversAvailable = 341,
    eFunc_GetCurrentLanguageId = 342,
    eFunc_GetNbLanguages = 343,
    eFunc_GetLanguageText = 344,
    eFunc_TextToInt = 345,
    eFunc_NbAvailableResolution = 346,
    eFunc_CurrentResolution = 347,
    eFunc_SaveResolution = 348,
    eFunc_IsResolutionAvailable = 349,
    eFunc_GetBrightness = 350,
    eFunc_NameResolution = 351,
    eFunc_GetTextureFiltering = 352,
    eFunc_GetAntiAliasing = 353,
    eFunc_GetSaturationDistance = 354,
    eFunc_GetBackgroundDistance = 355,
    eFunc_GetTooFarLimit = 356,
    eFunc_GetTransparencyZoneMin = 357,
    eFunc_GetTransparencyZoneMax = 358,
    eFunc_GetCurrentFrame = 359,
    eFunc_ExecuteVariable = 360,
    eFunc_ComputeProtectKey = 361,
    eFunc_Xor = 362,
    eFunc_And = 363,
    eFunc_Or = 364,
    eFunc_Not = 365,
    eFunc_DivUnsigned = 366,
    eFunc_MulUnsigned = 367,
    eFunc_AddUnsigned = 368,
    eFunc_SubUnsigned = 369,
    eFunc_GetMemoryValue = 370,
    eFunc_GetXBoxRegion = 371,
    eFunc_CreditsBegin = 372,
    eFunc_CreditsGetChapter = 373,
    eFunc_CreditsGetPageFromCurrentChapter = 374,
    eFct_Cam_GetShiftTarget = 375,
    eFct_Cam_GetShiftPos = 376,
    eFct_Cam_GetDistMin = 377,
    eFct_Cam_GetDistMax = 378,
    eFct_Cam_GetBoundDistMin = 379,
    eFct_Cam_GetBoundDistMax = 380,
    eFct_Cam_GetAngleAlpha = 381,
    eFct_Cam_GetAngleShiftAlpha = 382,
    eFct_Cam_GetAngleTheta = 383,
    eFct_Cam_GetAngleShiftTheta = 384,
    eFct_Cam_GetLinearSpeed = 385,
    eFct_Cam_GetLinearIncreaseSpeed = 386,
    eFct_Cam_GetLinearDecreaseSpeed = 387,
    eFct_Cam_GetAngularSpeed = 388,
    eFct_Cam_GetAngularIncreaseSpeed = 389,
    eFct_Cam_GetAngularDecreaseSpeed = 390,
    eFct_Cam_GetTargetSpeed = 391,
    eFct_Cam_GetTargetIncreaseSpeed = 392,
    eFct_Cam_GetTargetDecreaseSpeed = 393,
    eFct_Cam_GetFocal = 394,
    eFct_Cam_GetZMin = 395,
    eFct_Cam_GetZMax = 396,
    eFct_Cam_GetTargetedSuperObject = 397,
    eFct_Cam_GetTypeOfViewport = 398,
    eFct_Cam_GetCameraOfViewport = 399,
    eFct_Cam_GetMainCamera = 400,
    eFct_Cam_ComputeTargetWithTgtPerso = 401,
    eFct_Cam_GetCurrentTargetPosition = 402,
    eFct_Cam_GetSectorCameraType = 403,
    eFct_Cam_GetBestPos = 404,
    eFct_Cam_GetTransparencyFlag = 405,
    eFct_Cam_SetMirrorFlag = 406,
    eFct_Cam_GetMirrorFlag = 407,
    eFunc_CAM_GetViewportCoordinates = 408,
    eFunc_CSHBackMode = 409,
    eFunc_CSHMarioMode = 410,
    eFunc_CSHStrafeLockMode = 411,
    eProc_GetViewFinderDistance = 412,
    eFunc_LinkInit = 413,
    eFunc_LinkDoBehaviour = 414,
    eFunc_LinkKill = 415,
    eFunc_LinkGetNoCutpoints = 416,
    eFunc_LinkGetCutPoint = 417,
    eFunc_FollowLinkDirection = 418,
    eFunc_SND_GetSoundHandle = 419,
    eFunc_SND_GetSendSoundRequestHandleState = 420,
    eFunc_SND_GetSendVoiceRequestHandleState = 421,
    eFunc_SND_GetSendMusicRequestHandleState = 422,
    eFunc_SND_GetSendAmbianceRequestHandleState = 423,
    eFunc_SND_GetSendMenuSndRequestHandleState = 424,
    eFunc_SND_GetSoundVolume = 425,
    eFunc_SND_GetVoiceVolume = 426,
    eFunc_SND_GetMusicVolume = 427,
    eFunc_SND_GetAmbianceVolume = 428,
    eFunc_SND_GetMenuSndVolume = 429,
    eFunc_IsSoundPlaying = 430,
    eProc_SND_GetMusicMarker = 431,
    eFunc_MonitoringSetVariable = 432,
    eFunc_R3GetScore = 433,
    eFunc_R3GetNbCage = 434,
    eFunc_PS2DemoGetParameter = 435,
    eFunc_GetScreenDisplayFrequency = 436,
    eFunc_GetLastSaveGameOperationResult = 437,
    eFunc_SinEffect_GetSinusPosition = 438,
    eFunc_SFX_GetLightReflectionStatus = 439,
    eFunc_SFX_GetWaterCirclesStatus = 440,
    eFunc_SFX_IsLightReflectionPossible = 441,
    eFunc_SFX_IsWaterCirclesPossible = 442,
    eFunc_AGO_GetHandle = 443,
    eFunc_IsMcValid = 444,
    eFunc_FormatMc = 445,
    eNbFunc = 446,
} tdeFuncId_;

typedef enum tdeCondId_ {
    eCond_Et = 0,
    eCond_Ou = 1,
    eCond_Not = 2,
    eCond_XOr = 3,
    eCond_Equal = 4,
    eCond_Different = 5,
    eCond_Lesser = 6,
    eCond_Greater = 7,
    eCond_LesserOrEqual = 8,
    eCond_GreaterOrEqual = 9,
    eCond_CollidePersoZDDNoWithPerso = 10,
    eCond_CollideModuleZDDNoWithPerso = 11,
    eCond_CollidePersoAllZDDWithPerso = 12,
    eCond_CollidePersoZDDWithAnyPerso = 13,
    eCond_CollideModuleZDDWithAnyPerso = 14,
    eCond_CollidePersoZDENoWithPersoZDENo = 15,
    eCond_CollideModuleZDENoWithPersoZDENo = 16,
    eCond_CollidePersoZDENoWithModuleZDENo = 17,
    eCond_CollideModuleZDENoWithModuleZDENo = 18,
    eCond_CollidePersoZDENoWithPersoTypeZDE = 19,
    eCond_CollideModuleZDENoWithPersoTypeZDE = 20,
    eCond_CollidePersoTypeZDEWithPersoTypeZDE = 21,
    eCond_CollidePersoAllZDEWithPersoAllZDE = 22,
    eCond_CollidePersoTypeZDEWithPersoAllZDE = 23,
    eCond_CollidePersoAllZDEWithPersoTypeZDE = 24,
    eCond_CollidePersoZDENoWithTypeZDE = 25,
    eCond_CollideModuleZDENoWithTypeZDE = 26,
    eCond_CollideWithGround = 27,
    eCond_CollideWithWall = 28,
    eCond_CollideWithNothing = 29,
    eCond_CollideWithCeiling = 30,
    eCond_CollideWithPerso = 31,
    eCond_CollideWithWater = 32,
    eCond_CollideWithThisPerso = 33,
    eCond_ZDMCollideWithGround = 34,
    eCond_ZDMCollideWithWall = 35,
    eCond_ZDMCollideWithNothing = 36,
    eCond_ZDMCollideWithCeiling = 37,
    eCond_IsPersoInList = 38,
    eCond_IsModelInList = 39,
    eCond_IsFamilyInList = 40,
    eCond_ListEmptyTest = 41,
    eCond_UserEvent_IsSet = 42,
    eCond_UserEvent_IsSet2 = 43,
    eCond_UserEvent_IsSet3 = 44,
    eCond_PressedBut = 45,
    eCond_JustPressedBut = 46,
    eCond_ReleasedBut = 47,
    eCond_JustReleasedBut = 48,
    eCond_IsTimeElapsed = 49,
    eCond_IsValidObject = 50,
    eCond_IsValidWayPoint = 51,
    eCond_IsValidGMT = 52,
    eCond_IsValidVMT = 53,
    eCond_IsValidAction = 54,
    eCond_IsValidText = 55,
    eCond_IsValidSPO = 56,
    eCond_IsValidGraph = 57,
    eCond_SeePerso = 58,
    eCond_IsActivable = 59,
    eCond_IsAlreadyHandled = 60,
    eCond_Alw_IsMine = 61,
    eCond_IsPersoLightOn = 62,
    eCond_IsPersoLightPulseOn = 63,
    eCond_IsPersoLightGyroPhareOn = 64,
    eCond_IsRLITransitionInProgress = 65,
    eCond_IsInAlwaysActiveList = 66,
    eCond_IsAlwaysActive = 67,
    eCond_IsAnActivePad = 68,
    eCond_IsMultitap = 69,
    eCond_SAV2_IsValid = 70,
    eCond_IsWidescreen = 71,
    eCond_EngineIsInPAL = 72,
    eCond_IsZDMCollideWithObstacle = 73,
    eCond_IsZDMCollideWithWall = 74,
    eCond_IsZDMCollideWithGround = 75,
    eCond_IsZDMCollideWithCeiling = 76,
    eCond_CmtIdentifierContainsMask = 77,
    eCond_HitByCollider = 78,
    eCond_IsTypeOfGMTCollide = 79,
    eCond_IsInComport = 80,
    eCond_IsInReflexComport = 81,
    eCond_IsInAction = 82,
    eCond_ChangeActionEnable = 83,
    eCond_EngineReinitRequested = 84,
    eCond_IsThereMechEvent = 85,
    eCond_CollisionWP = 86,
    eCond_IsCustomBitSet = 87,
    eCond_IsPersoActive = 88,
    eCond_CheckActionEnd = 89,
    eCond_IsCurrentStateCustomBitSet = 90,
    eCond_IsGiBlock = 91,
    eCond_IsMechanicBlock = 92,
    eCond_IsMechanicAnimation = 93,
    eCond_IsMechanicCollide = 94,
    eCond_IsMechanicGravity = 95,
    eCond_IsMechanicTilt = 96,
    eCond_IsMechanicGi = 97,
    eCond_IsMechanicClimb = 98,
    eCond_IsMechanicOnGround = 99,
    eCond_IsMechanicSpider = 100,
    eCond_IsMechanicShoot = 101,
    eCond_IsMechanicSwim = 102,
    eCond_IsMechanicNeverFall = 103,
    eCond_IsMechanicCollisionControl = 104,
    eCond_IsMechanicKeepSpeedZ = 105,
    eCond_IsMechanicSpeedLimit = 106,
    eCond_IsMechanicInertia = 107,
    eCond_IsMechanicStream = 108,
    eCond_IsMechanicStickOnPlatform = 109,
    eCond_IsMechanicPatformCrash = 110,
    eCond_IsMechanicScale = 111,
    eCond_IsMechanicExec = 112,
    eCond_CanFall = 113,
    eCond_IsMechanicCrash = 114,
    eCond_IsNullVector = 115,
    eCond_HierIsSonOfActor = 116,
    eCond_IsMorphing = 117,
    eCond_CheckAnimEnd = 118,
    eCond_CheckAnimSmooth = 119,
    eCond_HasTheCapability = 120,
    eCond_HasOneOfTheCapabilities = 121,
    eCond_HasTheCapabilityNumber = 122,
    eCond_PersoHasTheCapability = 123,
    eCond_PersoHasOneOfTheCapabilities = 124,
    eCond_PersoHasTheCapabilityNumber = 125,
    eCond_MagnetIsActivated = 126,
    eCond_NEstPasEnCollisionAvecMap = 127,
    eCond_NEstPasEnCollisionAvecProjectile = 128,
    eCond_NEstPasEnCollisionAvecSecondCharact = 129,
    eCond_NEstPasEnCollisionAvecMainCharact = 130,
    eCond_NEstPasEnCollisionAvecAutresSecteurs = 131,
    eCond_IsInFamily = 132,
    eCond_IsInModel = 133,
    eCond_AJoypadIsConnected = 134,
    eCond_AKeyJustPressed = 135,
    eCond_AButtonPadJustPressed = 136,
    eCond_IsInDemoMode = 137,
    eCond_IsShapnessMax = 138,
    eCond_IsTooFar = 139,
    eCond_IsSubAnimPlaying = 140,
    eCond_TestCBSubAnim = 141,
    eCond_IsInSubAnim = 142,
    eCond_IsSubAnimNearEnd = 143,
    eCond_IsSameSPO = 144,
    eCond_PressedPadBut = 145,
    eCond_JustPressedPadBut = 146,
    eCond_ReleasedPadBut = 147,
    eCond_JustReleasedPadBut = 148,
    eCond_IsCinePlaying = 149,
    eCond_LoadInProgress = 150,
    eCond_SAV2LastError = 151,
    eCond_CheckMCStatus = 152,
    eCond_Cam_IsActive = 153,
    eCond_Cam_IsViewportOwner = 154,
    eCond_Cam_IsFlagNoDynamicTarget = 155,
    eCond_Cam_IsFlagNoAverageMoveTgtPerso = 156,
    eCond_Cam_IsFlagNoParseCutAngle = 157,
    eCond_Cam_IsFlagNoVisibility = 158,
    eCond_Cam_IsFlagNoVisibilityWithDynHie = 159,
    eCond_Cam_IsFlagNoDynChangeTheta = 160,
    eCond_Cam_IsFlagNoShiftUntilPosReached = 161,
    eCond_Cam_IsFlagNoDynSpeed = 162,
    eCond_Cam_IsFlagNoLinearParsing = 163,
    eCond_Cam_IsFlagNoLinearInertia = 164,
    eCond_Cam_IsFlagNoAngularParsing = 165,
    eCond_Cam_IsFlagNoAngularInertia = 166,
    eCond_Cam_IsFlagNoTargetParsing = 167,
    eCond_Cam_IsFlagNoTargetInertia = 168,
    eCond_Cam_IsFlagNoObstacle = 169,
    eCond_Cam_IsFlagFixedOrientation = 170,
    eCond_Cam_IsFlagForcedPosition = 171,
    eCond_Cam_IsFlagForcedTarget = 172,
    eCond_Cam_IsFlagForcedAxis = 173,
    eCond_SND_IsInStereoMode = 174,
    eCond_SND_IsMusicPlaying = 175,
    eCond_SND_IsVoicePlaying = 176,
    eCond_SND_IsEventValid = 177,
    eNbCond = 178,
} tdeCondId_;

typedef enum tdeProcedureId_ {
    eProc_SetHitPoints = 0,
    eProc_SetHitPointsInit = 1,
    eProc_SetHitPointsToInitValue = 2,
    eProc_SetHitPointsToMaxValue = 3,
    eProc_AddHitPoints = 4,
    eProc_SubHitPoints = 5,
    eProc_SetHitPointsMax = 6,
    eProc_SetHitPointsMaxToInitValue = 7,
    eProc_SetHitPointsMaxToMaxValue = 8,
    eProc_AddHitPointsMax = 9,
    eProc_SubHitPointsMax = 10,
    eProc_TransparentDisplay = 11,
    eProc_SetTransparency = 12,
    eProc_ACT_SetDrawFlag = 13,
    eProc_SkinMaterial = 14,
    eProc_SkinIndex = 15,
    eProc_ModuleTransparentDisplay = 16,
    eProc_ModuleTransparentDisplay2 = 17,
    eProc_SetModuleTransparency = 18,
    eProc_SetModuleTransparency2 = 19,
    eProc_ListAffectPersoZDD = 20,
    eProc_ListAffectModuleZDD = 21,
    eProc_ListAffectPersoZDE = 22,
    eProc_ListAffectModuleZDE = 23,
    eProc_ListAffectPersoTypeZDE = 24,
    eProc_ListAffectModuleTypeZDE = 25,
    eProc_ListAffectTypeZDEWithTypeZDE = 26,
    eProc_AddPersoInList = 27,
    eProc_AddPersoInListAt = 28,
    eProc_DeletePersoAtInList = 29,
    eProc_FindPersoAndDeleteInList = 30,
    eProc_ListSelect = 31,
    eProc_ListUnSelect = 32,
    eProc_ListSort = 33,
    eProc_ListSortByFamily = 34,
    eProc_ListSortByModel = 35,
    eProc_FillListWithAllPersoOfAFamily = 36,
    eProc_FillListWithAllPersoOfAModel = 37,
    eProc_DeleteFamilyInList = 38,
    eProc_DeleteModelInList = 39,
    eProc_ListUnion = 40,
    eProc_ListInter = 41,
    eProc_ListDiff = 42,
    eProc_ListAdd = 43,
    eProc_FogActivate = 44,
    eProc_SetFogColor = 45,
    eProc_SetFogNearFarInf = 46,
    eProc_SetFogBlend = 47,
    eProc_RestoreFog = 48,
    eProc_SaveFog = 49,
    eProc_Magnet_ActiveMagnet = 50,
    eProc_Magnet_DeactiveMagnet = 51,
    eProc_Magnet_SetStrength = 52,
    eProc_Magnet_SetFar = 53,
    eProc_Magnet_SetNear = 54,
    eProc_Magnet_SetDuration = 55,
    eProc_FootPath_AddFootPrint = 56,
    eProc_FootPath_Clear = 57,
    eProc_SinEffect_SetFreq = 58,
    eProc_SinEffect_SetAmplitude = 59,
    eProc_SinEffect_SetState = 60,
    eProc_SinEffect_SetFreq3D = 61,
    eProc_SinEffect_SetFreq3DMesh = 62,
    eProc_SinEffect_SetFreq3DRLI = 63,
    eProc_SinEffect_SetRLIAmplitude = 64,
    eProc_SinEffect_SetRLIBase = 65,
    eProc_SPO_SetDrawFlag = 66,
    eProc_SPO_SetEngineDisplayModeFlag = 67,
    eProc_DeactivateBut = 68,
    eProc_ActivateBut = 69,
    eProc_None = 70,
    eProc_Trace = 71,
    eProc_ChangeComport = 72,
    eProc_ChangeComportReflex = 73,
    eProc_ChangeMyComport = 74,
    eProc_ChangeMyComportReflex = 75,
    eProc_ChangeMyComportAndMyReflex = 76,
    eProc_ChangeAction = 77,
    eProc_ChangeActionForce = 78,
    eProc_ChangeActionRandom = 79,
    eProc_ChangeActionWithEvents = 80,
    eProc_ChangeActionSmooth = 81,
    eProc_ChangeActionForceSmooth = 82,
    eProc_ChangeActionRandomSmooth = 83,
    eProc_ChangeActionWithEventsSmooth = 84,
    eProc_ChangeActionSmoothNL = 85,
    eProc_ChangeActionForceSmoothNL = 86,
    eProc_ChangeActionRandomSmoothNL = 87,
    eProc_ChangeActionWithEventsSmoothNL = 88,
    eKeyWord_Boucle = 89,
    eKeyWord_FinBoucle = 90,
    eKeyWord_Break = 91,
    eProc_PlayerIsDead = 92,
    eProc_ResetDynamicsWithCard = 93,
    eProc_BreakAI = 94,
    eProc_IgnoreTraceFlagForNextPicking = 95,
    eProc_SetMainActor = 96,
    eProc_ActivateObject = 97,
    eProc_DesactivateObject = 98,
    eProc_ChangeMap = 99,
    eProc_ChangeMapWithTransition = 100,
    eProc_ChangeMapNoAutosave = 101,
    eProc_SetActionReturn = 102,
    eProc_FactorAnimationFrameRate = 103,
    eProc_SetCharacterPriority = 104,
    eProc_ForcePersoHandling = 105,
    eProc_SetDynamicAlwaysActive = 106,
    eProc_PlayerIsDeadWithPlacement = 107,
    eProc_SwapLinkTableObjects = 108,
    eProc_ReinitTableObjects = 109,
    eProc_ChangeCurrentObjectTable = 110,
    eProc_BuildObjectTableFromTableAndString = 111,
    eProc_BuildObjectTableFromFormattedString = 112,
    eProc_TakeModuleControl = 113,
    eProc_TakeManyModulesControl = 114,
    eProc_ReleaseModuleControl = 115,
    eProc_QuitGame = 116,
    eProc_ActivateChannel = 117,
    eProc_DeactivateChannel = 118,
    eProc_PersoLightOn = 119,
    eProc_PersoLightOff = 120,
    eProc_SetPersoLightColor = 121,
    eProc_SetPersoLightNearFar = 122,
    eProc_SetPersoLightLittleBigAlpha = 123,
    eProc_SetPersoLightGyrophare = 124,
    eProc_SetPersoLightPulse = 125,
    eProc_SetPersoLightParalleleType = 126,
    eProc_SetPersoLightSphericalType = 127,
    eProc_SetPersoLightHotSpotType = 128,
    eProc_SetPersoLightAmbientType = 129,
    eProc_DefaultDisplay = 130,
    eProc_DisplayVignette = 131,
    eProc_DeleteVignette = 132,
    eProc_PRT_SetGeneratorOn = 133,
    eProc_PRT_SetGeneratorOff = 134,
    eProc_PRT_SetGenerator = 135,
    eProc_PRT_SetModeNone = 136,
    eProc_PRT_SetModeContinuous = 137,
    eProc_PRT_SetModeCrenel = 138,
    eProc_PRT_SetModeProbability = 139,
    eProc_PRT_SetNumberConstant = 140,
    eProc_PRT_SetNumberProbabilist = 141,
    eProc_PRT_SetInfiniteLifeTime = 142,
    eProc_PRT_SetConstantLifeTime = 143,
    eProc_PRT_SetPobabilistLifeTime = 144,
    eProc_Turn = 145,
    eProc_Turn2 = 146,
    eProc_DeltaTurnPerso = 147,
    eProc_TurnPerso = 148,
    eProc_KillPerso = 149,
    eProc_KillPersoAndClearVariable = 150,
    eProc_DeletePersoFromGame = 151,
    eProc_SetVMTColor = 152,
    eProc_SetVMTSpecularExponent = 153,
    eProc_SetVMTSpecularCoef = 154,
    eProc_SetVMTDiffuseCoef = 155,
    eProc_SetVMTAmbientCoef = 156,
    eProc_SetVMTAsChromed = 157,
    eProc_SetVMTTextureScrollingCoef = 158,
    eProc_LockVMT = 159,
    eProc_UnlockVMT = 160,
    eProc_SetVMTFrame = 161,
    eProc_OptionChangeDetailsValue = 162,
    eProc_OptionChangeActionKey = 163,
    eProc_OptionConfigureKey = 164,
    eProc_OptionGetCurrentKeyValue = 165,
    eProc_OptionChangeKeyValue = 166,
    eProc_OptionResetKeyValueToDefault = 167,
    eProc_BatchSetPersoAtModulePosition = 168,
    eProc_BatchSetPersoOrientation = 169,
    eProc_BatchSetPersoAtPerso = 170,
    eProc_SetPersoAbsolutePosition = 171,
    eProc_SetPersoAtModulePosition = 172,
    eProc_ForcePersoAveragePosition = 173,
    eProc_RelativeMovePerso = 174,
    eProc_ChangePersoAnySighting = 175,
    eProc_ChangePersoSightingWithOffset = 176,
    eProc_RotatePersoAroundX = 177,
    eProc_RotatePersoAroundY = 178,
    eProc_RotatePersoAroundZ = 179,
    eProc_RotatePersoAroundVector = 180,
    eProc_RotatePersoAroundVectorWithOffset = 181,
    eProc_RotatePersoAroundXwithOffset = 182,
    eProc_RotatePersoAroundYwithOffset = 183,
    eProc_RotatePersoAroundZwithOffset = 184,
    eProc_SetFullPersoOrientation = 185,
    eProc_SetFullPersoOrientationWithOffset = 186,
    eProc_ZoomPerso = 187,
    eProc_ChangeOneCustomBit = 188,
    eProc_ChangeManyCustomBits = 189,
    eProc_ChangeManyCustomBitsExtended = 190,
    eProc_ChangeOneCustomFloat = 191,
    eProc_ChangeOneCustomLong = 192,
    eProc_ChangeOneCustomVector = 193,
    eProc_ImposeSpeed = 194,
    eProc_ImposeSpeedX = 195,
    eProc_ImposeSpeedY = 196,
    eProc_ImposeSpeedZ = 197,
    eProc_ImposeSpeedXY = 198,
    eProc_ImposeSpeedXYZ = 199,
    eProc_ImposeAbsoluteSpeed = 200,
    eProc_ImposeAbsoluteSpeedX = 201,
    eProc_ImposeAbsoluteSpeedY = 202,
    eProc_ImposeAbsoluteSpeedZ = 203,
    eProc_ImposeAbsoluteSpeedXY = 204,
    eProc_ImposeAbsoluteSpeedXYZ = 205,
    eProc_ProposeSpeed = 206,
    eProc_ProposeSpeedX = 207,
    eProc_ProposeSpeedY = 208,
    eProc_ProposeSpeedZ = 209,
    eProc_ProposeSpeedXY = 210,
    eProc_ProposeSpeedXYZ = 211,
    eProc_ProposeAbsoluteSpeed = 212,
    eProc_ProposeAbsoluteSpeedX = 213,
    eProc_ProposeAbsoluteSpeedY = 214,
    eProc_ProposeAbsoluteSpeedZ = 215,
    eProc_ProposeAbsoluteSpeedXY = 216,
    eProc_ProposeAbsoluteSpeedXYZ = 217,
    eProc_FixePositionPerso = 218,
    eProc_FixePositionPersoWithInterpol = 219,
    eProc_AddSpeed = 220,
    eProc_AddSpeedX = 221,
    eProc_AddSpeedY = 222,
    eProc_AddSpeedZ = 223,
    eProc_AddSpeedXY = 224,
    eProc_AddSpeedXYZ = 225,
    eProc_AddAbsoluteSpeed = 226,
    eProc_AddAbsoluteSpeedX = 227,
    eProc_AddAbsoluteSpeedY = 228,
    eProc_AddAbsoluteSpeedZ = 229,
    eProc_AddAbsoluteSpeedXY = 230,
    eProc_AddAbsoluteSpeedXYZ = 231,
    eProc_PrepareMorph = 232,
    eProc_PrepareMorphMT = 233,
    eProc_StopMorph = 234,
    eProc_StopAllMorph = 235,
    eProc_Morphing = 236,
    eProc_MorphingMT = 237,
    eProc_ReleaseAllModulesControl = 238,
    eProc_ChangeModuleSighting = 239,
    eProc_SetModuleAbsolutePosition = 240,
    eProc_RelativeMoveModule = 241,
    eProc_ChangeModuleSightingWithOffset = 242,
    eProc_RotateModuleAroundX = 243,
    eProc_RotateModuleAroundY = 244,
    eProc_RotateModuleAroundZ = 245,
    eProc_RotateModuleAroundVector = 246,
    eProc_RotateModuleAroundVectorWithOffset = 247,
    eProc_RotateModuleAroundXwithOffset = 248,
    eProc_RotateModuleAroundYwithOffset = 249,
    eProc_RotateModuleAroundZwithOffset = 250,
    eProc_SetFullModuleOrientation = 251,
    eProc_SetFullModuleOrientationWithOffset = 252,
    eProc_ZoomModule = 253,
    eProc_SetColliderType = 254,
    eProc_SetColliderActor = 255,
    eProc_SetColliderVector = 256,
    eProc_SetColliderReal = 257,
    eProc_ReinitCollider = 258,
    eProc_ResetLastCollisionActor = 259,
    eProc_ClearCollisionReport = 260,
    eProc_SetGoThroughMechanicsHandling = 261,
    eProc_EraseLastGoThroughMaterial = 262,
    eProc_ChangeTextDefaultColor = 263,
    eProc_CreateTextWithParamFormat = 264,
    eProc_CreateTextWith2ParamsFormat = 265,
    eProc_StringAddChar = 266,
    eProc_StringReplaceChar = 267,
    eProc_StringRemoveChar = 268,
    eProc_ChangeLanguage = 269,
    eProc_IntToText = 270,
    eProc_FloatToText = 271,
    eProc_SetMechanicAnimation = 272,
    eProc_SetMechanicCollide = 273,
    eProc_SetMechanicGravity = 274,
    eProc_SetMechanicTilt = 275,
    eProc_SetMechanicGi = 276,
    eProc_SetMechanicClimb = 277,
    eProc_SetMechanicOnGround = 278,
    eProc_SetMechanicSpider = 279,
    eProc_SetMechanicShoot = 280,
    eProc_SetMechanicSwim = 281,
    eProc_SetMechanicNeverFall = 282,
    eProc_SetMechanicNewMechanic = 283,
    eProc_SetMechanicCollisionControl = 284,
    eProc_SetMechanicKeepSpeedZ = 285,
    eProc_SetMechanicSpeedLimit = 286,
    eProc_SetMechanicInertia = 287,
    eProc_SetMechanicStream = 288,
    eProc_SetMechanicStickOnPlatform = 289,
    eProc_SetMechanicScale = 290,
    eProc_SetMechanicGravityFactor = 291,
    eProc_SetMechanicSlide = 292,
    eProc_SetMechanicRebound = 293,
    eProc_SetMechanicSlopeLimit = 294,
    eProc_SetMechanicInertiaX = 295,
    eProc_SetMechanicInertiaY = 296,
    eProc_SetMechanicInertiaZ = 297,
    eProc_SetMechanicInertiaXYZ = 298,
    eProc_SetMechanicTiltIntensity = 299,
    eProc_SetMechanicTiltInertia = 300,
    eProc_SetMechanicTiltOrigin = 301,
    eProc_SetMechanicSpeedMax = 302,
    eProc_SetMechanicStreamPriority = 303,
    eProc_SetMechanicStreamSpeed = 304,
    eProc_SetMechanicStreamFactor = 305,
    eProc_AddMechanicStreamSpeed = 306,
    eProc_AddMechanicStreamSpeedList = 307,
    eProc_MoveLimit = 308,
    eProc_MoveLimitX = 309,
    eProc_MoveLimitY = 310,
    eProc_MoveLimitZ = 311,
    eProc_MoveLimitXYZ = 312,
    eProc_StopMoveLimitX = 313,
    eProc_StopMoveLimitY = 314,
    eProc_StopMoveLimitZ = 315,
    eProc_StopMoveLimitXYZ = 316,
    eProc_SetPlatformLink = 317,
    eProc_FreePlatformLink = 318,
    eProc_MecSetScale = 319,
    eProc_MecSetSlideFactorXYZ = 320,
    eProc_MecSetSlideFactorX = 321,
    eProc_MecSetSlideFactorY = 322,
    eProc_MecSetSlideFactorZ = 323,
    eProc_MecSetClimbSpeedLimit = 324,
    eProc_MecSetHangingLimit = 325,
    eProc_MecSetHangingOff = 326,
    eProc_MecSetBaseCoeff = 327,
    eProc_MecSetWalkCoeff = 328,
    eProc_HierSetFather = 329,
    eProc_HierFreeFather = 330,
    eProc_HierListOfSon = 331,
    eProc_HierSetPlatformType = 332,
    eProc_HierControlLink = 333,
    eProc_HierFreezeEngine = 334,
    eProc_FixePositionZDM = 335,
    eProc_FixePositionZDD = 336,
    eProc_FixePositionZDE = 337,
    eProc_ChangeGameMaterialZDE = 338,
    eProc_ChangeLightIntensity = 339,
    eProc_SPO_ChangeFlag = 340,
    eProc_SPO_ChangeFlagRecursively = 341,
    eProc_ActChangeSpoFlag = 342,
    eProc_ChangeScreenSize = 343,
    eProc_ChangeScreenClip = 344,
    eProc_ChangeScreenPos = 345,
    eProc_ChangeScreenPosPercent = 346,
    eProc_ChangeScreenPosPerThousand = 347,
    eProc_ChangeScreenRatio = 348,
    eProc_DisplayShadow = 349,
    eProc_ChangeShadowHeight = 350,
    eProc_ChangeShadowVector = 351,
    eProc_ForceActivationZDD = 352,
    eProc_ForceActivationZDM = 353,
    eProc_ForceActivationZDE = 354,
    eProc_ForceActivationZDR = 355,
    eProc_ForceDesactivationZDD = 356,
    eProc_ForceDesactivationZDM = 357,
    eProc_ForceDesactivationZDE = 358,
    eProc_ForceDesactivationZDR = 359,
    eProc_LibereActivationZDD = 360,
    eProc_LibereActivationZDM = 361,
    eProc_LibereActivationZDE = 362,
    eProc_LibereActivationZDR = 363,
    eProc_ActiveZDR = 364,
    eProc_SetNoCollisionWithMap = 365,
    eProc_SetNoCollisionWithProjectile = 366,
    eProc_SetNoCollisionWithSecondCharact = 367,
    eProc_SetNoCollisionWithMainCharact = 368,
    eProc_SetNoCollisionWithOtherSectors = 369,
    eProc_SetNoCollisionZdeWithProjectile = 370,
    eProc_SetCollComputeFrequency = 371,
    eProc_SetBrainComputeFrequency = 372,
    eProc_SetLightComputeFrequency = 373,
    eProc_SetUsedExitIdentifier = 374,
    eProc_GetUsedExitIdentifier = 375,
    eProc_SetGlobalCounter = 376,
    eProc_ReadAnalogJoystick = 377,
    eProc_SetAnalogJoystickAxes = 378,
    eProc_GetPadCalibration = 379,
    eProc_SetPadCalibration = 380,
    eProc_CancelKeyboardInertia = 381,
    eProc_SetAnalogJoystickAxes2 = 382,
    eProc_ReleaseAnalogJoystick = 383,
    eProc_SetBooleanInArray = 384,
    eProc_SetDefaultFormatCharacter = 385,
    eProc_SelectDriver = 386,
    eProc_SelectShapnessMax = 387,
    eProc_CenterScreen = 388,
    eProc_SelectResolution = 389,
    eProc_ChangeBrightness = 390,
    eProc_TexteEntier = 391,
    eProc_TexteReel = 392,
    eProc_SetTextureFiltering = 393,
    eProc_SetAntiAliasing = 394,
    eProc_DrawSegment = 395,
    eProc_UpdateChecksum = 396,
    eProc_ShellExecute = 397,
    eProc_ChangeSightingAccordingTime = 398,
    eProc_PAD2_SetGlobalVector = 399,
    eProc_PAD2_SetHorizontalAxis = 400,
    eProc_PAD2_SetVerticalAxis = 401,
    eProc_PAD2_SetAnalogForce = 402,
    eProc_PAD2_SetTrueAnalogForce = 403,
    eProc_PAD2_SetRotationAngle = 404,
    eProc_PAD2_SetPadSector = 405,
    eProc_PAD2_SetLongDescValue = 406,
    eProc_SetModifierModeNormal = 407,
    eProc_SetModifierModeLight = 408,
    eProc_SetModifierModeRGB = 409,
    eProc_ValidateMemoryCard = 410,
    eProc_AddMemoryCardString = 411,
    eProc_SetGlobalAccelerationFactorForAnims = 412,
    eProc_FixePointsDeMagie = 413,
    eProc_FixePointsDeMagieMax = 414,
    eProc_InitPointsDeMagie = 415,
    eProc_InitPointsDeMagieMax = 416,
    eProc_AjoutePointsDeMagie = 417,
    eProc_AjoutePointsDeMagieMax = 418,
    eProc_EnlevePointsDeMagie = 419,
    eProc_EnlevePointsDeMagieMax = 420,
    eProc_FixePointsDair = 421,
    eProc_FixePointsDairMax = 422,
    eProc_InitPointsDair = 423,
    eProc_InitPointsDairMax = 424,
    eProc_AjoutePointsDair = 425,
    eProc_AjoutePointsDairMax = 426,
    eProc_EnlevePointsDair = 427,
    eProc_EnlevePointsDairMax = 428,
    eProc_FixePositionFade = 429,
    eProc_FixeLumierePersoLocal = 430,
    eProc_FixeLumierePersoOnOff = 431,
    eProc_FixeLumiereStaticOnOff = 432,
    eProc_FixeLumiereStaticNearFar = 433,
    eProc_FixeLumiereStaticColor = 434,
    eProc_CalculeLumiere = 435,
    eProc_CalculeLumiereAvecOmbres = 436,
    eProc_NoRLI = 437,
    eProc_FixeRLI = 438,
    eProc_BlendRLI = 439,
    eProc_SetRadiusWP = 440,
    eProc_SetPositionAbsWP = 441,
    eProc_SetPositionRelWP = 442,
    eProc_ChangeTypeOfWP = 443,
    eProc_SetCapabilities = 444,
    eProc_AddCapabilities = 445,
    eProc_SubCapabilities = 446,
    eProc_ChangeCapabilities = 447,
    eProc_WPIndiquePlageValeur = 448,
    eProc_ReinitGraph = 449,
    eProc_FixeVitesseTexture = 450,
    eProc_ScrollingOnOff = 451,
    eProc_FixeDecalageTexture = 452,
    eProc_ScrollingPause = 453,
    eProc_ChangeCurrFrame = 454,
    eProc_ChangeRandomFrame = 455,
    eProc_FreezeAnim = 456,
    eProc_UnFreezeAnim = 457,
    eProc_SetDiscreetSpeed = 458,
    eProc_SetSuperimposed = 459,
    eProc_MJ_SetSuperimposed = 460,
    eProc_SetSuperimposed2 = 461,
    eProc_ReleaseSuperimposed = 462,
    eProc_SetSuperimposedClipping = 463,
    eProc_ResetSuperimposedClipping = 464,
    eProc_SetOutlineMode = 465,
    eProc_SetOutlineModeSPO = 466,
    eProc_SetSPOCoordinates = 467,
    eProc_SetSPOCoordinatesAndMoveType1 = 468,
    eProc_SetSPOCoordinatesAndMoveType2 = 469,
    eProc_SetSPOCoordinatesAndMoveType3 = 470,
    eProc_SetSPOCoordinatesAndMoveType4 = 471,
    eProc_SetSPOCoordsNoInt = 472,
    eProc_SetSPOCoordsAndMoveType1NoInt = 473,
    eProc_SetSPOCoordsAndMoveType2NoInt = 474,
    eProc_SetSPOCoordsAndMoveType3NoInt = 475,
    eProc_SetSPOCoordsAndMoveType4NoInt = 476,
    eProc_SetSOLFromWorldOrigin_SPOParam = 477,
    eProc_SetSOLFromInit_SPOParam = 478,
    eProc_SetSOLFromHere_SPOParam = 479,
    eProc_SetSOLToInit_SPOParam = 480,
    eProc_ReinitSOL_SPOParam = 481,
    eProc_SetSOLFromWorldOrigin_SOLParam = 482,
    eProc_SetSOLFromInit_SOLParam = 483,
    eProc_SetSOLFromHere_SOLParam = 484,
    eProc_SetSOLToInit_SOLParam = 485,
    eProc_ReinitSOL_SOLParam = 486,
    eProc_SOLAddCharacter = 487,
    eProc_SOLAddWaypoint = 488,
    eProc_SOLAddObject = 489,
    eProc_SOLDeleteCharacter = 490,
    eProc_SOLDeleteWaypoint = 491,
    eProc_SOLDeleteObject = 492,
    eProc_SwitchSuperimposedTab = 493,
    eProc_RotateSPOAroundX = 494,
    eProc_RotateSPOAroundXType1 = 495,
    eProc_RotateSPOAroundXType2 = 496,
    eProc_RotateSPOAroundXType3 = 497,
    eProc_RotateSPOAroundXType4 = 498,
    eProc_RotateSPOAroundY = 499,
    eProc_RotateSPOAroundYType1 = 500,
    eProc_RotateSPOAroundYType2 = 501,
    eProc_RotateSPOAroundYType3 = 502,
    eProc_RotateSPOAroundYType4 = 503,
    eProc_RotateSPOAroundZ = 504,
    eProc_RotateSPOAroundZType1 = 505,
    eProc_RotateSPOAroundZType2 = 506,
    eProc_RotateSPOAroundZType3 = 507,
    eProc_RotateSPOAroundZType4 = 508,
    eProc_RotateSPOAroundAxis = 509,
    eProc_RotateSPOAroundAxisType1 = 510,
    eProc_RotateSPOAroundAxisType2 = 511,
    eProc_RotateSPOAroundAxisType3 = 512,
    eProc_RotateSPOAroundAxisType4 = 513,
    eProc_RotateSPOToIdentity = 514,
    eProc_ChangeSPOSighting = 515,
    eProc_ChangeSPOSightingType1 = 516,
    eProc_ChangeSPOSightingType2 = 517,
    eProc_ChangeSPOSightingType3 = 518,
    eProc_ChangeSPOSightingType4 = 519,
    eProc_ChangeSPOAnySighting = 520,
    eProc_ChangeSPOAnySightingType1 = 521,
    eProc_ChangeSPOAnySightingType2 = 522,
    eProc_ChangeSPOAnySightingType3 = 523,
    eProc_ChangeSPOAnySightingType4 = 524,
    eProc_SetTractionFactor = 525,
    eProc_TurnToPositionAngle = 526,
    eProc_TurnToPositionSpeed = 527,
    eProc_SortArray = 528,
    eProc_ActiveJoystickAnal = 529,
    eProc_UnActiveJoystickAnal = 530,
    eProc_SetZDMSizeSphere = 531,
    eProc_SetZDDSizeCone = 532,
    eProc_ChangeCaractere = 533,
    eProc_FormateTexte = 534,
    eProc_FormateTexteTime = 535,
    eProc_ChangePersoSighting = 536,
    eProc_PlayDemo = 537,
    eProc_PlayAutoDemo = 538,
    eProc_SetCharacterNotResearched = 539,
    eProc_InitKeyBoardDirections = 540,
    eProc_InitKeyBoardBouton = 541,
    eProc_PadSetCenterposition = 542,
    eProc_PadSetMaximalValues = 543,
    eProc_ChangeTooFarLimit = 544,
    eProc_ChangeTransparencyZone = 545,
    eProc_SetBaseFrequenceForMenu = 546,
    eProc_SaveSinusContext = 547,
    eProc_RestoreSinusContext = 548,
    eProc_TextSuperImposed = 549,
    eProc_StartSubAnim = 550,
    eProc_StartSubAnimWithFrame = 551,
    eProc_StartSubAnimSmooth = 552,
    eProc_StartSubAnimSmoothWithFrame = 553,
    eProc_StopSubAnim = 554,
    eProc_WriteCBSubAnim = 555,
    eProc_EndSubAnim = 556,
    eProc_SetDynShadowLevel = 557,
    eProc_SetDynShadowClosed = 558,
    eProc_SetDynShadowSensitive = 559,
    eProc_SetCurrentLanguage = 560,
    eProc_CallSubRoutine = 561,
    eProc_ACTIndiquePlageValeur = 562,
    eProc_ActivateInternalLight = 563,
    eProc_SetInternalLightParams = 564,
    eProc_ToggleCinemascopeOn = 565,
    eProc_ToggleCinemascopeOff = 566,
    eProc_SetCinemascopeRatio = 567,
    eProc_Cam_UpdatePosition = 568,
    eProc_Cam_UpdatePositionLight = 569,
    eProc_Cam_ChangeShiftTarget = 570,
    eProc_Cam_ChangeShiftPos = 571,
    eProc_Cam_ChangeDistMin = 572,
    eProc_Cam_ChangeDistMax = 573,
    eProc_Cam_ChangeBoundDistMin = 574,
    eProc_Cam_ChangeBoundDistMax = 575,
    eProc_Cam_ChangeAngleAlpha = 576,
    eProc_Cam_ChangeAngleShiftAlpha = 577,
    eProc_Cam_ChangeAngleTheta = 578,
    eProc_Cam_ChangeAngleShiftTheta = 579,
    eProc_Cam_ChangeLinearSpeed = 580,
    eProc_Cam_ChangeLinearIncreaseSpeed = 581,
    eProc_Cam_ChangeLinearDecreaseSpeed = 582,
    eProc_Cam_ChangeAngularSpeed = 583,
    eProc_Cam_ChangeAngularIncreaseSpeed = 584,
    eProc_Cam_ChangeAngularDecreaseSpeed = 585,
    eProc_Cam_ChangeTargetSpeed = 586,
    eProc_Cam_ChangeTargetIncreaseSpeed = 587,
    eProc_Cam_ChangeTargetDecreaseSpeed = 588,
    eProc_Cam_ChangeFocal = 589,
    eProc_Cam_ChangeZMin = 590,
    eProc_Cam_ChangeZMax = 591,
    eProc_Cam_ChangeTgtPerso = 592,
    eProc_Cam_ChangeSecondTgtPerso = 593,
    eProc_Cam_ChangeChannel = 594,
    eProc_Cam_Activate = 595,
    eProc_Cam_AssociateViewport = 596,
    eProc_Cam_ResetIAFlags = 597,
    eProc_Cam_SetFlagNoDynamicTarget = 598,
    eProc_Cam_SetFlagNoAverageMoveTgtPerso = 599,
    eProc_Cam_SetFlagNoParseCutAngle = 600,
    eProc_Cam_SetFlagNoVisibility = 601,
    eProc_Cam_SetFlagNoVisibilityWithDynHie = 602,
    eProc_Cam_SetFlagNoDynChangeTheta = 603,
    eProc_Cam_SetFlagNoShiftUntilPosReached = 604,
    eProc_Cam_SetFlagNoDynSpeed = 605,
    eProc_Cam_ResetDNMFlags = 606,
    eProc_Cam_SetFlagNoLinearParsing = 607,
    eProc_Cam_SetFlagNoLinearInertia = 608,
    eProc_Cam_SetFlagNoAngularParsing = 609,
    eProc_Cam_SetFlagNoAngularInertia = 610,
    eProc_Cam_SetFlagNoTargetParsing = 611,
    eProc_Cam_SetFlagNoTargetInertia = 612,
    eProc_Cam_SetFlagFixedOrientation = 613,
    eProc_Cam_SetFlagNoObstacle = 614,
    eProc_Cam_SetFlagNoCollisionWhenNotMoving = 615,
    eProc_Cam_ChangeConstants = 616,
    eProc_Cam_SaveConstants = 617,
    eProc_Cam_RestoreConstants = 618,
    eProc_Cam_ShowInfo = 619,
    eProc_Cam_ForceTarget = 620,
    eProc_Cam_ForcePosition = 621,
    eProc_Cam_ForceRefAxis = 622,
    eProc_Cam_Reset = 623,
    eProc_Cam_ForceBestPos = 624,
    eProc_Cam_ForceNormalState = 625,
    eProc_Cam_ForceMovingOnRail = 626,
    eProc_Cam_SetCameraModeForEngine = 627,
    eProc_Cam_SetCameraTransparencyFlag = 628,
    eProc_InitCamShooter = 629,
    eProc_CSHRegisterIntegerVar = 630,
    eProc_CSHRegisterFloatVar = 631,
    eProc_CSHRegisterVectorVar = 632,
    eProc_CSHRegisterPersoVar = 633,
    eProc_CSHRegisterBooleanVar = 634,
    eProc_CSHGetViewFinderVMT = 635,
    eProc_CSHGetMAComports = 636,
    eProc_CSHInitBackMode = 637,
    eProc_CSHInitMarioMode = 638,
    eProc_CSHInitStrafeLockMode = 639,
    eProc_AddMainActor = 640,
    eProc_RemoveMainActor = 641,
    eProc_SetSkin = 642,
    eProc_SetGCubeVersion = 643,
    eProc_LinkInitAll = 644,
    eProc_SetAgoLink = 645,
    eProc_SetLag = 646,
    eProc_SetGaugeSpeed = 647,
    eProc_SetSendDataRate = 648,
    eProc_SetSendStatusPeriod = 649,
    eProc_SetLaunchSpeed = 650,
    eProc_SetFlagStraight = 651,
    eProc_SetUnlaunch = 652,
    eProc_LaunchAGO = 653,
    eProc_SetAGOClipping = 654,
    eProc_SetInGameMenu = 655,
    eProc_JffTxt_Affiche = 656,
    eProc_JffTxt_AfficheVmsInitPause = 657,
    eProc_JffTxt_AffichePadInitPause = 658,
    eProc_JffTxt_AfficheMultitapInitPause = 659,
    eProc_JffTxt_DemoPressStart = 660,
    eProc_JffTxt_Extend = 661,
    eProc_JffTxt_Modify = 662,
    eProc_JffTxt_PauseDrawStringGame = 663,
    eProc_JffTxt_PauseDrawStringInv = 664,
    eProc_JffTxt_PauseEnable = 665,
    eProc_JffTxt_IAmInTheInventory = 666,
    eProc_JffTxt_PauseInitVars = 667,
    eProc_JffTxt_SetColor = 668,
    eProc_JffTxt_SetTransp = 669,
    eProc_JffTxt_DoFadeIn = 670,
    eProc_JffTxt_DoFadeOut = 671,
    eProc_JffTxt_SetFrameMode = 672,
    eProc_JffTxt_GetBdBox = 673,
    eProc_FadeIn = 674,
    eProc_FadeOut = 675,
    eProc_CheatDoubleSpeed = 676,
    eProc_CheatInvertPad = 677,
    eProc_CheatRandomPad = 678,
    eProc_CheatRandomVignette = 679,
    eProc_MultiPlayer_SetAspectRatio = 680,
    eProc_MultiPlayer_SetNumberOfPlayers = 681,
    eProc_MultiPlayer_SetPlayerForViewport = 682,
    eProc_MultiPlayer_InvertViewports = 683,
    eProc_MultiPlayer_LanceIcone = 684,
    eProc_MultiPlayer_LanceGauge = 685,
    eProc_MultiPlayer_LanceBitmapFile = 686,
    eProc_MultiPlayer_LanceBitmapMemory = 687,
    eProc_MultiPlayer_JFFTXT_Affiche = 688,
    eProc_MultiPlayer_JFFTXT_AfficheOver3D = 689,
    eProc_MultiPlayer_JFFTXT_AfficheOver3DAttenuated = 690,
    eProc_MultiPlayer_SetViewportSizeAndPos = 691,
    eProc_MultiPlayer_SetViewportDisplayOrder = 692,
    eProc_SinEffect_SetSinusPreMultiplier = 693,
    eProc_MultiPlayer_LanceMask = 694,
    eProc_MultiPlayer_LanceBlur = 695,
    eProc_MultiPlayer_Prepare2DSprite = 696,
    eProc_PrintInLogWindow = 697,
    eProc_TransitionDeRLI = 698,
    eProc_AjoutDeRLI = 699,
    eProc_BlockingRLITransitions = 700,
    eProc_EnqueueVideo = 701,
    eProc_PlayVideo = 702,
    eProc_PlayVideoAfterLevel = 703,
    eProc_VideoQuality = 704,
    eProc_SetVsyncWait = 705,
    eProc_ActiveBrainDuringTransitions = 706,
    eProc_DeactiveBrainDuringTransitions = 707,
    eProc_DisplaySegment = 708,
    eProc_EndTransition = 709,
    eProc_StartCine = 710,
    eProc_EndCine = 711,
    eProc_SkipLoading_SetLoadingLevel = 712,
    eProc_SetDataPath = 713,
    eProc_SAV2_DeclareField = 714,
    eProc_SAV2_DeleteField = 715,
    eProc_SAV2_DeleteAllPipeline = 716,
    eProc_SAV2_DeleteAll = 717,
    eProc_SAV2_SetValue = 718,
    eProc_SAV2_SetValueIndex = 719,
    eProc_SAV2_AddSingleValueInPipeline = 720,
    eProc_SAV2_AddSingleValueForSave = 721,
    eProc_SAV2_GetValueString = 722,
    eProc_SAV2_GetValueStringIndex = 723,
    eProc_SAV2_AddArrayInPipeline = 724,
    eProc_SAV2_AddArrayForSave = 725,
    eProc_SAV2_GetArray = 726,
    eProc_SAV2_AutoSaveOnDisk = 727,
    eProc_SAV2_SaveOnDisk = 728,
    eProc_SAV2_LoadOnDisk = 729,
    eProc_SAV2_RemoveSaveOnDisk = 730,
    eProc_SAV2_ActualizeExistingSave = 731,
    eProc_SAV2_GetSaveNameFromSaveNumber = 732,
    eProc_SCT_EnableSectorSynchro = 733,
    eProc_SCT_DisableSectorSynchro = 734,
    eProc_ActivePortal = 735,
    eProc_DeactivePortal = 736,
    eProc_LogFileCreate = 737,
    eProc_LogFileAdd = 738,
    eProc_LogFileSeparator = 739,
    eProc_FFBStartPreCreatedEffect = 740,
    eProc_FFBStopPreCreatedEffect = 741,
    eProc_FFBStopAllEffectForAPad = 742,
    eProc_FFBStopAllEffectForAllPad = 743,
    eProc_FFBPauseAllEffectForAllPad = 744,
    eProc_FFBResumeAllEffectForAllPad = 745,
    eProc_FFBDeletePreCreatedEffect = 746,
    eProc_FFBDeleteAllPreCreatedEffectForAPad = 747,
    eProc_FFBDeleteAllPreCreatedEffectForAllPad = 748,
    eProc_FFBStopEffect = 749,
    eProc_SND_SetMechaSoundCharacter = 750,
    eProc_SND_SetMicroActivation = 751,
    eProc_SND_SaveCurrentTheme = 752,
    eProc_SND_RestoreLastTheme = 753,
    eProc_SND_SendSoundRequest = 754,
    eProc_SND_SendVoiceRequest = 755,
    eProc_SND_SendVoiceRequestWithLipsChannel = 756,
    eProc_SND_SendVoiceRequestWithLipsAuto = 757,
    eProc_SND_SendMusicRequest = 758,
    eProc_SND_SendMusicRequestWithMarkers = 759,
    eProc_SND_SendAmbianceRequest = 760,
    eProc_SND_SendMenuSndRequest = 761,
    eProc_SND_SendSoundRequestSemaphore = 762,
    eProc_SND_SendVoiceRequestSemaphore = 763,
    eProc_SND_SendVoiceRequestWithLipsChannelSemaphore = 764,
    eProc_SND_SendMusicRequestSemaphore = 765,
    eProc_SND_SendAmbianceRequestSemaphore = 766,
    eProc_SND_SendMenuSndRequestSemaphore = 767,
    eProc_SND_ChangeVolumeIdAmbiance = 768,
    eProc_SND_ChangeVolumeIdVoice = 769,
    eProc_SND_ChangeVolumeIdMusic = 770,
    eProc_SND_StopSound = 771,
    eProc_SND_StopVoice = 772,
    eProc_SND_StopMusic = 773,
    eProc_SND_StopAmbiance = 774,
    eProc_SND_StopMenuSnd = 775,
    eProc_SND_StopAllRequests = 776,
    eProc_SND_StopLipsChannel = 777,
    eProc_SND_StopLipsChannelAuto = 778,
    eProc_SND_SetSemaphoreCapacity = 779,
    eProc_SND_KillSemaphore = 780,
    eProc_SND_LoadBank = 781,
    eProc_SND_UnloadBank = 782,
    eProc_SND_SetVolumeSound = 783,
    eProc_SND_SetVolumeVoice = 784,
    eProc_SND_SetVolumeMusic = 785,
    eProc_SND_SetVolumeAmbiance = 786,
    eProc_SND_SetVolumeMenuSnd = 787,
    eProc_SND_ChangeVolumeSound = 788,
    eProc_SND_ChangeVolumeVoice = 789,
    eProc_SND_ChangeVolumeMusic = 790,
    eProc_SND_ChangeVolumeAmbiance = 791,
    eProc_SND_ChangeVolumeMenuSnd = 792,
    eProc_SND_PauseSound = 793,
    eProc_SND_PauseVoice = 794,
    eProc_SND_PauseMusic = 795,
    eProc_SND_PauseAmbiance = 796,
    eProc_SND_PauseMenuSound = 797,
    eProc_SND_PauseAllRequests = 798,
    eProc_SND_ResumeSound = 799,
    eProc_SND_ResumeVoice = 800,
    eProc_SND_ResumeMusic = 801,
    eProc_SND_ResumeAmbiance = 802,
    eProc_SND_ResumeMenuSound = 803,
    eProc_SND_ResumeAllRequests = 804,
    eProc_SND_SetDopplerEffect = 805,
    eProc_SND_SetInStereoMode = 806,
    eProc_SND_SetPrevMusicFadeOut = 807,
    eProc_SND_SetRollOffDistances = 808,
    eProc_SND_SetDefaultRollOffDistances = 809,
    eProc_SND_SaveSoundEventInSlotMemory = 810,
    eProc_SND_RestoreSoundEventInSlotMemory = 811,
    eProc_SND_ResetMusicMarkerSlot = 812,
    eProc_SND_PS2ChangeReverb = 813,
    eProc_SND_PS2SetReverbOn = 814,
    eProc_SND_SendJingleRequest = 815,
    eProc_SetSingleplayerMode = 816,
    eProc_SetMultiplayerMode = 817,
    eProc_DoNotLoadTextures = 818,
    eProc_DoNotLoadMaterialTextures = 819,
    eProc_SetFamilyToLoad = 820,
    eProc_SetActorToLoad = 821,
    eProc_MonitoringStart = 822,
    eProc_MonitoringStop = 823,
    eProc_TobyCreate = 824,
    eProc_TobyAddSegment = 825,
    eProc_TobySetTransparency = 826,
    eProc_TobyDestroy = 827,
    eProc_TobySetMaterial = 828,
    eProc_EnableWidescreen = 829,
    eProc_DisableWidescreen = 830,
    eProc_SetDisplayFrequency = 831,
    eProc_SetSaveGameAccessType = 832,
    eProc_SetFakeSpeedPercentage = 833,
    eProc_ExitFromDemo = 834,
    eProc_SetCurrentValueAsInit = 835,
    eProc_SetCheapCharacterListMinDistance = 836,
    eProc_SetCheapCharacterListMaxDistance = 837,
    eProc_SetCheapCharacterListTimer = 838,
    eProc_SetCheapCharacterListRefObj = 839,
    eProc_SetCheapCharacterListMode = 840,
    eProc_SetCheapCharacterListAura = 841,
    eProc_SetCheapCharacterNewPos = 842,
    eProc_SetCheapCharacterNewDir = 843,
    eProc_AddCheapCharacter = 844,
    eProc_ResetCheapCharacterList = 845,
    eProc_ActivateCheapCharacter = 846,
    eProc_DesactivateCheapCharacter = 847,
    eProc_SetCheapCharacterOptions = 848,
    eProc_R3SetScore = 849,
    eProc_R3SetNbCage = 850,
    eProc_R3SetCurrentEnvNumber = 851,
    eProc_R3SetNbCineOpen = 852,
    eProc_R3SetNbBonusOpen = 853,
    eProc_R3SetAutoSave = 854,
    eProc_R3SetEndOfGame = 855,
    eProc_WaterEffect_SetRandomPerturbationGeneration = 856,
    eProc_WaterEffect_GenerateImpulse = 857,
    eProc_WaterEffect_GenerateSplash = 858,
    eProc_AGO_Kill = 859,
    eProc_AGO_ReInit = 860,
    eProc_TakePicture = 861,
    eProc_ReleasePicture = 862,
    eProc_SFX_ActivateLightReflection = 863,
    eProc_SFX_ActivateWaterCircles = 864,
    eProc_SetActiveMcSlot = 865,
    eProc_GcResetToIpl = 866,
    eProc_ChangeActionSmoothProportional = 867,
    eProc_ChangeActionSmoothSymetric = 868,
    eProc_ChangeActionSmoothNoSpeed = 869,
    eProc_Begin2DMenu = 870,
    eProc_Begin2DMenuStart = 871,
    eProc_Begin2DMenuPhoto = 872,
    eProc_Begin2DMenuBonus = 873,
    eProc_Begin2DMenuBonusExit = 874,
    eProc_AllowNormalsRecomputing = 875,
    eNbProcedure = 876,
} tdeProcedureId_;

typedef enum tdeOperatorId_ {
    eOperator_ScalarPlusScalar = 0,
    eOperator_ScalarMinusScalar = 1,
    eOperator_ScalarMulScalar = 2,
    eOperator_ScalarDivScalar = 3,
    eOperator_ScalarUnaryMinus = 4,
    eOperator_ScalarModulo = 5,
    eOperator_PlusAffect = 6,
    eOperator_MinusAffect = 7,
    eOperator_MulAffect = 8,
    eOperator_DivAffect = 9,
    eOperator_PlusPlusAffect = 10,
    eOperator_MinusMinusAffect = 11,
    eOperator_Affect = 12,
    eOperator_Dot = 13,
    eOperator_GetVectorX = 14,
    eOperator_GetVectorY = 15,
    eOperator_GetVectorZ = 16,
    eOperator_VectorPlusVector = 17,
    eOperator_VectorMinusVector = 18,
    eOperator_VectorUnaryMinus = 19,
    eOperator_VectorMulScalar = 20,
    eOperator_VectorDivScalar = 21,
    eOperator_SetVectorX = 22,
    eOperator_SetVectorY = 23,
    eOperator_SetVectorZ = 24,
    eOperator_Ultra = 25,
    eOperator_ModelCast = 26,
    eOperator_Array = 27,
    eOperator_AffectArray = 28,
    eNbOperator = 29,
} tdeOperatorId_;

typedef enum tdeMetaActionId_ {
    eMetaAction_FrozenWait = 0,
    eMetaAction_ExecuteAction = 1,
    eMetaAction_ExecuteActionSmooth = 2,
    eMetaAction_WaitEndOfAction = 3,
    eMetaAction_WaitEndOfAnim = 4,
    eMetaAction_CamCineMoveAToBTgtC = 5,
    eMetaAction_CamCineMoveAToBTgtAC = 6,
    eMetaAction_CamCinePosATgtB = 7,
    eMetaAction_CamCinePosAMoveTgtBToC = 8,
    eMetaAction_CamCinePosATgtBTurnPosH = 9,
    eMetaAction_CamCinePosATgtBTurnTgtH = 10,
    eMetaAction_CamCinePosATgtBTurnPosV = 11,
    eMetaAction_CamCinePosATgtBTurnTgtV = 12,
    eNbMetaAction = 13,
} tdeMetaActionId_;

typedef enum tdeFieldId_ {
    eField_Position = 0,
    eField_Orientation = 1,
    eField_Speed = 2,
    eField_NormSpeed = 3,
    eField_AbsoluteAxisX = 4,
    eField_AbsoluteAxisY = 5,
    eField_AbsoluteAxisZ = 6,
    eField_PrevComportIntell = 7,
    eField_PrevComportReflex = 8,
    eField_ShadowScaleX = 9,
    eField_ShadowScaleY = 10,
    eField_PadGlobalVector = 11,
    eField_PadHorizontalAxis = 12,
    eField_PadVerticalAxis = 13,
    eField_PadAnalogForce = 14,
    eField_PadTrueAnalogForce = 15,
    eField_PadRotationAngle = 16,
    eField_PadSector = 17,
    eField_SystemData = 18,
    eField_SystemTime = 19,
    eNbField = 20,
} tdeFieldId_;

typedef enum tdeDsgVarTypeId_ {
    eDsgVarType_Boolean = 0,
    eDsgVarType__128To127 = 1,
    eDsgVarType_0To255 = 2,
    eDsgVarType__32768To32767 = 3,
    eDsgVarType_0To65535 = 4,
    eDsgVarType_Integer = 5,
    eDsgVarType_PositiveInteger = 6,
    eDsgVarType_Float = 7,
    eDsgVarType_Vector = 8,
    eDsgVarType_List = 9,
    eDsgVarType_Comport = 10,
    eDsgVarType_Action = 11,
    eDsgVarType_Caps = 12,
    eDsgVarType_Input = 13,
    eDsgVarType_SoundEvent = 14,
    eDsgVarType_Light = 15,
    eDsgVarType_GameMaterial = 16,
    eDsgVarType_VisualMaterial = 17,
    eDsgVarType_Perso = 18,
    eDsgVarType_WayPoint = 19,
    eDsgVarType_Graph = 20,
    eDsgVarType_Text = 21,
    eDsgVarType_SuperObject = 22,
    eDsgVarType_SOLinks = 23,
    eDsgVarType_IntegerArray = 24,
    eDsgVarType_FloatArray = 25,
    eDsgVarType_VectorArray = 26,
    eDsgVarType_PersoArray = 27,
    eDsgVarType_WayPointArray = 28,
    eDsgVarType_GraphArray = 29,
    eDsgVarType_TextArray = 30,
    eDsgVarType_SuperObjectArray = 31,
    eDsgVarType_SOLinksArray = 32,
    eDsgVarType_SoundEventArray = 33,
    eDsgVarType_VisualMatArray = 34,
    eNbDsgVarType = 35,
} tdeDsgVarTypeId_;

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

typedef enum tdeVariableType_ {
    E_vt_None = 0,
    E_vt_Boolean = 1,
    E_vt__128To127 = 2,
    E_vt_0To255 = 3,
    E_vt__32768To32767 = 4,
    E_vt_0To65535 = 5,
    E_vt_Integer = 6,
    E_vt_PositiveInteger = 7,
    E_vt_Float = 8,
    E_vt_String = 9,
    E_vt_WayPoint = 10,
    E_vt_Perso = 11,
    E_vt_List = 12,
    E_vt_1bit = 13,
    E_vt_2bit = 14,
    E_vt_3bit = 15,
    E_vt_4bit = 16,
    E_vt_5bit = 17,
    E_vt_6bit = 18,
    E_vt_7bit = 19,
    E_vt_MetaActionReturn = 20,
    E_vt_Vector = 21,
    E_vt_Module = 22,
    E_vt_DsgVarId = 23,
    E_vt_Action = 24,
    E_vt_Button = 25,
    E_vt_Mask = 26,
    E_vt_Surface = 27,
    E_vt_LipsSynchro = 28,
    E_vt_ObjectTable = 29,
    E_vt_SuperObject = 30,
    E_vt_Environment = 31,
    E_vt_Family = 32,
    E_vt_SoundEvent = 33,
    E_vt_Comport = 34,
    E_vt_Font = 35,
    E_vt_Text = 36,
    E_vt_ParticleGenerator = 37,
    E_vt_GameMaterial = 38,
    E_vt_VisualMaterial = 39,
    E_vt_Color = 40,
    E_vt_Model = 41,
    E_vt_Array = 42,
    E_vt_Light = 43,
    E_vt_Caps = 44,
    E_vt_Graph = 45,
    E_vt_SOLinks = 46,
    E_vt_Cine = 47,
    E_Nb_vt = 48,
} tdeVariableType_;

typedef enum e_ucListViewport_ {
    CAM_e_NoViewport = -1,
} e_ucListViewport_;

typedef enum e_ucCameraStates_ {
    CAM_e_State_GoToOptimal = 0,
    CAM_e_State_GoToComputedOptimal = 1,
    CAM_e_State_FailureVisibility = 2,
    CAM_e_State_FailureVisibilityWithoutCut = 3,
    CAM_e_TempState_GhostMode = 4,
    CAM_e_TempState_ApexMode = 5,
} e_ucCameraStates_;

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

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    HIE_tdstSuperObject_* hMechaCharacter; /* +0xc */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
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

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
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

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

union tduGetSetParamForNode_ {
    float xValue; /* +0x0 */
    int lValue; /* +0x0 */
    unsigned int ulValue; /* +0x0 */
    short wValue; /* +0x0 */
    unsigned short uwValue; /* +0x0 */
    char cValue; /* +0x0 */
    unsigned char ucValue; /* +0x0 */
    RGBAStruct_ ColorValue; /* +0x0 */
    int szString; /* +0x0 */
    tdstEngineObject_* p_stEngObjValue; /* +0x0 */
    tdstState_* tdxstHandleToState; /* +0x0 */
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    tdstSuperObjectLinks_* hSOLinks; /* +0x0 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0x0 */
    unsigned short xMask; /* +0x0 */
    tdstLipsSynchroTable_* hLipsSynchro; /* +0x0 */
    tdstObjectsTablesList_* hObjectTable; /* +0x0 */
    tdstFamilyList_* hFamily; /* +0x0 */
    _SND_tdstBlockEvent* pSoundEvent; /* +0x0 */
    tdstComport_* pComport; /* +0x0 */
    int hText; /* +0x0 */
    tdstParticleGenerator_* hParticleGenerator; /* +0x0 */
    GMT_tdstGameMaterial_* hGameMaterial; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    AI_tdstAIModel_* p_stModel; /* +0x0 */
    MTH3D_tdstVector_* p_stVectorValue; /* +0x0 */
    GLI_tdstLight_* p_stLight; /* +0x0 */
    WP_tdstGraph_* hGraph; /* +0x0 */
    tdstMacro_* p_stMacro; /* +0x0 */
    CINE_tdstCine_* p_stCine; /* +0x0 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct LST2_tdstAnchorTotdxHandleToTransitionOpt {
    tdstTransition_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToProhibitOpt {
    tdstProhibit_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstState_ {
    tdstAnim3d_* p_stAnim; /* +0x0 */
    LST2_tdstAnchorTotdxHandleToTransitionOpt hForTransitionArray; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToProhibitOpt hForProhibitArray; /* +0xc */
    tdstState_* h_NextState; /* +0x14 */
    int h_LinkedMechanicsIdCard; /* +0x18 */
    int szLevelList; /* +0x1c */
    int szAnimationSectionName; /* +0x20 */
    unsigned char ucRepeatAnimation; /* +0x24 */
    signed char scSpeedAnim; /* +0x25 */
    unsigned char ucTransitionStatusFlag; /* +0x26 */
    unsigned char ucCustomBits; /* +0x27 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

union tduIdInterpret_ {
    tdeCondId_ eCondId; /* +0x0 */
    tdeKeyWordId_ eKeyWordId; /* +0x0 */
    tdeOperatorId_ eOperatorId; /* +0x0 */
    tdeFuncId_ eFuncId; /* +0x0 */
    tdeProcedureId_ eProcedureId; /* +0x0 */
    tdeFieldId_ eFieldId; /* +0x0 */
    tdeMetaActionId_ eMetaActionId; /* +0x0 */
    IPT_tdstEntryElement_* hInputAction; /* +0x0 */
};

union anon_0 {
    tduIdInterpret_ uId; /* +0x0 */
    tduGetSetParamForNode_ uParam; /* +0x0 */
};

struct tdstNodeInterpret_ {
    anon_0 uDummy; /* +0x0 */
    unsigned short uwNodeToSkip; /* +0x4 */
    unsigned char ucDepth; /* +0x6 */
    unsigned char eType; /* +0x7 */
};

struct CAM_Shooter_ {
    int aiExternDsgVarInt[5]; /* +0x0 */
    int axExternDsgVarFloat[5]; /* +0x14 */
    int apExternDsgVarPerso[5]; /* +0x28 */
    int abExternDsgVarBoolean[5]; /* +0x3c */
    int avExternDsgVarVector[5]; /* +0x50 */
    HIE_tdstSuperObject_* pCamera; /* +0x64 */
    HIE_tdstSuperObject_* pTargetActor; /* +0x68 */
    HIE_tdstSuperObject_* pTargetSkin; /* +0x6c */
    HIE_tdstSuperObject_* pMultiControl; /* +0x70 */
    int apMainActors[4]; /* +0x74 */
    int apSkins[4]; /* +0x84 */
    short iNumberOfMainActors; /* +0x94 */
    GLD_tdstViewportAttributes_* p_stViewport; /* +0x98 */
    tdstCineinfo_* hCineInfo; /* +0x9c */
    HIE_tdstSuperObject_* pLockedActor; /* +0xa0 */
    MTH3D_tdstVector_* pTargetActor_position; /* +0xa4 */
    MTH3D_tdstVector_* pTargetActor_speed; /* +0xa8 */
    MTH3D_tdstVector_ vStartProjectilePosition; /* +0xac */
    MTH3D_tdstVector_ vViewFinderPosition; /* +0xb8 */
    MTH3D_tdstVector_ v2DViewFinderPosition; /* +0xc4 */
    MTH3D_tdstVector_ vRefAxis; /* +0xd0 */
    MTH3D_tdstVector_ vDirection; /* +0xdc */
    MTH3D_tdstVector_ vNormalCollision; /* +0xe8 */
    MTH3D_tdstVector_ vCollisionPoint; /* +0xf4 */
    MTH3D_tdstVector_ vCheckCollisionShift; /* +0x100 */
    MTH3D_tdstVector_ vCheckCollisionShift1; /* +0x10c */
    MTH3D_tdstVector_ vCollisionPointWall; /* +0x118 */
    MTH3D_tdstVector_ vRayCastCeiling; /* +0x124 */
    MTH3D_tdstVector_ vNormalCollisionWall; /* +0x130 */
    MTH3D_tdstVector_ vTheoreticalPosition; /* +0x13c */
    MTH3D_tdstVector_ vOldPosition; /* +0x148 */
    MTH3D_tdstVector_ vProposedSpeed; /* +0x154 */
    MTH3D_tdstVector_ vActualSpeed; /* +0x160 */
    MTH3D_tdstVector_ vCollisionDirectionV; /* +0x16c */
    MTH3D_tdstVector_ vCollisionDirectionH; /* +0x178 */
    MTH3D_tdstVector_ vRayCastOrigin; /* +0x184 */
    MTH3D_tdstVector_ vRayCastDirection; /* +0x190 */
    MTH3D_tdstVector_ vCameraSighting; /* +0x19c */
    MTH3D_tdstVector_ vOldSighting; /* +0x1a8 */
    MTH3D_tdstVector_* vCameraPosition; /* +0x1b4 */
    int iIndexSector; /* +0x1b8 */
    float xTheta_Default; /* +0x1bc */
    float xTheta_Min; /* +0x1c0 */
    float xTheta_Max; /* +0x1c4 */
    float xTheta_Current; /* +0x1c8 */
    float xTheta_User; /* +0x1cc */
    float xDeltaTheta_User; /* +0x1d0 */
    float xTheta_Imposed; /* +0x1d4 */
    float xAlpha_User; /* +0x1d8 */
    float xDistMax_Default; /* +0x1dc */
    float xDistMax; /* +0x1e0 */
    float xOldDistMax; /* +0x1e4 */
    float xTargetAngle; /* +0x1e8 */
    float xShift; /* +0x1ec */
    float xAlphaLock; /* +0x1f0 */
    float xThetaLock; /* +0x1f4 */
    float xStartAlignAngle; /* +0x1f8 */
    tdstComport_* pMAComport_Climb; /* +0x1fc */
    tdstComport_* pMAComport_Fall; /* +0x200 */
    tdstComport_* pMAComport_Reborn; /* +0x204 */
    tdstComport_* pMAComport_Heli; /* +0x208 */
    tdstComport_* pMAComport_Hang; /* +0x20c */
    tdstComport_* pMAComport_Wait; /* +0x210 */
    tdstComport_* pMAComport_Victory; /* +0x214 */
    tdstComport_* pMAComport_Run; /* +0x218 */
    int bWasClimbing; /* +0x21c */
    int bMouseDriven; /* +0x220 */
    int bIsDigitalInput; /* +0x224 */
    int bAlignCamera; /* +0x228 */
    int bStartAlignCamera; /* +0x22c */
    int bAutoAlign; /* +0x230 */
    int bCollision; /* +0x234 */
    int bCollisionAlign; /* +0x238 */
    int bSideCollision; /* +0x23c */
    int bVerticalCollision; /* +0x240 */
    int bObstacleCollision; /* +0x244 */
    int bIsJumpFalling; /* +0x248 */
    int bFastAlign; /* +0x24c */
    int bLowCeiling; /* +0x250 */
    int bIsBot; /* +0x254 */
    int bRaiseCamera; /* +0x258 */
    int bAutoAim; /* +0x25c */
    float xFastAlign_StartDistance; /* +0x260 */
    unsigned int ulDelayTime; /* +0x264 */
    unsigned int ulAlignDelayTime; /* +0x268 */
    unsigned int ulZeroPadStartTime; /* +0x26c */
    unsigned int iTime; /* +0x270 */
    unsigned int iTimeToRaiseCamera; /* +0x274 */
    unsigned int iViewFinderIconId; /* +0x278 */
    int iViewportIndex; /* +0x27c */
    unsigned char iMode; /* +0x280 */
    MTH3D_tdstVector_ vCeilingCollisionPoint; /* +0x284 */
    int iOldInputAxisZ; /* +0x290 */
    int iAxisVThreshold; /* +0x294 */
    unsigned int m_ulOldButtons; /* +0x298 */
    unsigned int m_ulJustPressedButtons; /* +0x29c */
    unsigned char _extractor_padding_04[16]; /* explicit retail gap; +0x2a0..0x2af */
    GMT_tdstGameMaterial_* hWaterGMT; /* +0x2b0 */
    float xViewFinderWidth_2; /* +0x2b4 */
    float xViewFinderHeight_2; /* +0x2b8 */
    unsigned char _extractor_padding_03[4];
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct tdstAveragePosition_ {
    MTH3D_tdstVector_ a_CheckedSpeed[8]; /* +0x0 */
    MTH3D_tdstVector_ a_CheckedPos[8]; /* +0x60 */
    float a_CheckedTime[8]; /* +0xc0 */
};

struct tdstSightAxisSystem_ {
    MTH3D_tdstVector_ SightAxis; /* +0x0 */
    MTH3D_tdstVector_ FirstComplementaryAxis; /* +0xc */
    MTH3D_tdstVector_ SecondComplementaryAxis; /* +0x18 */
};

struct tdstTransparentSuperObjectForCamera_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    int lInitialDrawMask; /* +0x4 */
    float fInitialTransparenceLevel; /* +0x8 */
    float fCurrentTransparencyLevel; /* +0xc */
    unsigned char bIncrease; /* +0x10 */
};

struct tdstCineinfo_ {
    tdstInternalStructurCineinfo_* hInit; /* +0x0 */
    tdstInternalStructurCineinfo_* hCurrent; /* +0x4 */
    tdstInternalStructurCineinfo_* hVisibility; /* +0x8 */
    tdstInternalStructurCineinfo_* hWork; /* +0xc */
    MTH3D_tdstVector_ stLastFailedOrigin; /* +0x10 */
    MTH3D_tdstVector_ stLastFailedWanted; /* +0x1c */
    MTH3D_tdstVector_ stForceTarget; /* +0x28 */
    MTH3D_tdstVector_ stForcePosition; /* +0x34 */
    MTH3D_tdstVector_ stForceRefAxisY; /* +0x40 */
    MTH3D_tdstVector_ stForceRefAxisZ; /* +0x4c */
    float xApexRatio; /* +0x58 */
    float xLastDeltaCut; /* +0x5c */
    e_ucCameraStates_ eState; /* +0x60 */
    float xCounter1; /* +0x64 */
    float xCounter2; /* +0x68 */
    float xCounter3; /* +0x6c */
    float xCounter4; /* +0x70 */
    unsigned char ucVolIAFlags; /* +0x74 */
    unsigned char ucPerIAFlags; /* +0x75 */
    char cLastCutAngleSens; /* +0x76 */
    tdstAveragePosition_ AveragePosition; /* +0x78 */
    tdstSightAxisSystem_ stSightAxisSystem; /* +0x158 */
    unsigned char bCanDoBestPos; /* +0x17c */
    tdstTransparentSuperObjectForCamera_ a10_stTransparentSuperObjectForCamera[10]; /* +0x180 */
    short xNumberOfTransparentSuperObjectForCamera; /* +0x248 */
    float fTransparency; /* +0x24c */
    float fTransparencySpeed; /* +0x250 */
    unsigned char ucTransparencyFlag; /* +0x254 */
    unsigned char bCameraIsMirrored; /* +0x255 */
    unsigned char bLightComputation; /* +0x256 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
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

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

union tduGetSetParam_ {
    float xValue; /* +0x0 */
    int lValue; /* +0x0 */
    unsigned int ulValue; /* +0x0 */
    short wValue; /* +0x0 */
    unsigned short uwValue; /* +0x0 */
    char cValue; /* +0x0 */
    unsigned char ucValue; /* +0x0 */
    unsigned char bf7Value : 7; /* bit 0, byte +0x0 */
    unsigned char bf6Value : 6; /* bit 0, byte +0x0 */
    unsigned char bf5Value : 5; /* bit 0, byte +0x0 */
    unsigned char bf4Value : 4; /* bit 0, byte +0x0 */
    unsigned char bf3Value : 3; /* bit 0, byte +0x0 */
    unsigned char bf2Value : 2; /* bit 0, byte +0x0 */
    unsigned char bf1Value : 1; /* bit 0, byte +0x0 */
    RGBAStruct_ ColorValue; /* +0x0 */
    int szString; /* +0x0 */
    tdstEngineObject_* p_stEngObjValue; /* +0x0 */
    tdstState_* tdxstHandleToState; /* +0x0 */
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    tdstSuperObjectLinks_* hSOLinks; /* +0x0 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0x0 */
    unsigned short xMask; /* +0x0 */
    tdstLipsSynchroTable_* hLipsSynchro; /* +0x0 */
    tdstObjectsTablesList_* hObjectTable; /* +0x0 */
    tdstFamilyList_* hFamily; /* +0x0 */
    _SND_tdstBlockEvent* pSoundEvent; /* +0x0 */
    tdstComport_* pComport; /* +0x0 */
    int hText; /* +0x0 */
    tdstParticleGenerator_* hParticleGenerator; /* +0x0 */
    GMT_tdstGameMaterial_* hGameMaterial; /* +0x0 */
    GLI_tdstMaterial_* hVisualMaterial; /* +0x0 */
    AI_tdstAIModel_* p_stModel; /* +0x0 */
    MTH3D_tdstVector_ stVectorValue; /* +0x0 */
    GLI_tdstLight_* p_stLight; /* +0x0 */
    WP_tdstGraph_* hGraph; /* +0x0 */
    tdstMacro_* p_stMacro; /* +0x0 */
    CINE_tdstCine_* p_stCine; /* +0x0 */
};

struct anon_3 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_3 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct tdstIntelligence_ {
    tdstScriptAI_** p_p_stScriptAI; /* +0x0 */
    tdstNodeInterpret_* p_stCurrentSchedule; /* +0x4 */
    tdstComport_* p_stCurrentComport; /* +0x8 */
    tdstComport_* p_stPrevComport; /* +0xc */
    tdstActionTable_* p_stActionTable; /* +0x10 */
    unsigned int ulNoComportInit; /* +0x14 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToWP_tdHandleOfArcDyn {
    WP_tdstArc_* hFirstElementDyn; /* +0x0 */
    WP_tdstArc_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstListOfArc_ {
    LST2_tdstAnchorToWP_tdHandleOfArcDyn m_hArc; /* +0x0 */
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

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    int d_xThresholdsTable; /* +0x8 */
    GEO_tduVSObject_* d_p_stLodDefinitions; /* +0xc */
    int d_hRLI; /* +0x10 */
    int lNumberOfRLI; /* +0x14 */
};

struct tdstComport_ {
    tdstTreeInterpret_* p_stRules; /* +0x0 */
    tdstTreeInterpret_* p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
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

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
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

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct anon_2 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    MTH3D_tdstVector_ m_stData1; /* +0x4 */
    MTH3D_tdstVector_ m_stData2; /* +0x10 */
    MTH3D_tdstVector_ m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_1 m_stData6; /* +0x34 */
    anon_2 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    MTH3D_tdstVector_ m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    MTH3D_tdstVector_ m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct DNM_stDynamicsComplexBlock {
    float m_xTiltIntensity; /* +0x0 */
    float m_xTiltInertia; /* +0x4 */
    float m_xTiltOrigin; /* +0x8 */
    float m_xTiltAngle; /* +0xc */
    float m_xHangingLimit; /* +0x10 */
    MTH3D_tdstVector_ m_stContact; /* +0x14 */
    MTH3D_tdstVector_ m_stFallTranslation; /* +0x20 */
    stMACDPID m_stExternalDatas; /* +0x2c */
    HIE_tdstSuperObject_* m_hPlatform; /* +0xa8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xac..0xaf */
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct tdstScriptAI_ {
    tdstComport_* p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
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

struct tdstTransition_ {
    tdstState_* h_TargetState; /* +0x0 */
    tdstState_* h_StateToGo; /* +0x4 */
    unsigned char ucLinkingType; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstMacro_ {
    tdstTreeInterpret_* p_stInitTree; /* +0x0 */
    tdstTreeInterpret_* p_stCurrentTree; /* +0x4 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    tdstDsgVarInfo_* p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

struct tdstActionParam_ {
    tduGetSetParam_ a_uParam[8]; /* +0x0 */
};

struct tdstActionTableEntry_ {
    tdstActionParam_ stActionParam; /* +0x0 */
    tdstNodeInterpret_* p_stNode; /* +0x60 */
    unsigned char bUsed; /* +0x64 */
    unsigned char ucNumRule; /* +0x65 */
    unsigned char bUseDefaultActionReturn; /* +0x66 */
    unsigned char ucNewActionReturn; /* +0x67 */
};

struct tdstProhibit_ {
    tdstState_* h_ProhibitedState; /* +0x0 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct tdstListOfMacro_ {
    tdstMacro_* p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

struct WP_tdstArc_ {
    WP_tdstArc_* hNextBrotherDyn; /* +0x0 */
    WP_tdstArc_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToWP_tdHandleOfArcDyn* hFatherDyn; /* +0x8 */
    WP_tdstGraphNode_* m_hNode; /* +0xc */
    unsigned int m_ulCapability; /* +0x10 */
    unsigned int m_ulCapabilityInit; /* +0x14 */
    int m_lWeight; /* +0x18 */
    int m_lWeightInit; /* +0x1c */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstTreeInterpret_ {
    tdstNodeInterpret_* p_stNodeInterpret; /* +0x0 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct DNM_stDynamicsBaseBlock {
    int m_lObjectType; /* +0x0 */
    int m_pCurrentIdCard; /* +0x4 */
    unsigned int ulFlags; /* +0x8 */
    unsigned int ulEndFlags; /* +0xc */
    float m_xGravity; /* +0x10 */
    float m_xSlopeLimit; /* +0x14 */
    float m_xCosSlope; /* +0x18 */
    float m_xSlide; /* +0x1c */
    float m_xRebound; /* +0x20 */
    MTH3D_tdstVector_ m_stImposeSpeed; /* +0x24 */
    MTH3D_tdstVector_ m_stProposeSpeed; /* +0x30 */
    MTH3D_tdstVector_ m_stPreviousSpeed; /* +0x3c */
    MTH3D_tdstVector_ m_stScale; /* +0x48 */
    MTH3D_tdstVector_ m_stSpeedAnim; /* +0x54 */
    MTH3D_tdstVector_ m_stSafeTranslation; /* +0x60 */
    MTH3D_tdstVector_ m_stAddTranslation; /* +0x6c */
    MAT_tdstTransformation_ m_stPreviousMatrix; /* +0x80 */
    MAT_tdstTransformation_ m_stCurrentMatrix; /* +0xe0 */
    MTH3D_tdstMatrix_ m_stImposeRotationMatrix; /* +0x140 */
    unsigned char m_ucNbFrame; /* +0x164 */
    DNM_stReport* m_pstReport; /* +0x168 */
};

struct DNM_stDynamicsAdvancedBlock {
    float m_xInertiaX; /* +0x0 */
    float m_xInertiaY; /* +0x4 */
    float m_xInertiaZ; /* +0x8 */
    float m_xStreamPrority; /* +0xc */
    float m_xStreamFactor; /* +0x10 */
    float m_xSlideFactorX; /* +0x14 */
    float m_xSlideFactorY; /* +0x18 */
    float m_xSlideFactorZ; /* +0x1c */
    float m_xPreviousSlide; /* +0x20 */
    MTH3D_tdstVector_ m_stMaxSpeed; /* +0x24 */
    MTH3D_tdstVector_ m_stStreamSpeed; /* +0x30 */
    MTH3D_tdstVector_ m_stAddSpeed; /* +0x3c */
    MTH3D_tdstVector_ m_stLimit; /* +0x48 */
    MTH3D_tdstVector_ m_stCollisionTranslation; /* +0x54 */
    MTH3D_tdstVector_ m_stInertiaTranslation; /* +0x60 */
    MTH3D_tdstVector_ m_stGroundNormal; /* +0x6c */
    MTH3D_tdstVector_ m_stWallNormal; /* +0x78 */
    char m_cCollideCounter; /* +0x84 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct GLI_tdstSpecificAttributesFor3D_ {
    GLI_tdstCamera_* p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
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

struct tdstInternalStructurCineinfo_ {
    MTH3D_tdstVector_ stShiftTarget; /* +0x0 */
    MTH3D_tdstVector_ stShiftPos; /* +0xc */
    float xDistMin; /* +0x18 */
    float xDistMax; /* +0x1c */
    float xBoundDistMin; /* +0x20 */
    float xBoundDistMax; /* +0x24 */
    float xAngleAlpha; /* +0x28 */
    float xAngleShiftAlpha; /* +0x2c */
    float xAngleTheta; /* +0x30 */
    float xAngleShiftTheta; /* +0x34 */
    float xLinearSpeed; /* +0x38 */
    float xLinearIncreaseSpeed; /* +0x3c */
    float xLinearDecreaseSpeed; /* +0x40 */
    float xAngularSpeed; /* +0x44 */
    float xAngularIncreaseSpeed; /* +0x48 */
    float xAngularDecreaseSpeed; /* +0x4c */
    float xTargetSpeed; /* +0x50 */
    float xTargetIncreaseSpeed; /* +0x54 */
    float xTargetDecreaseSpeed; /* +0x58 */
    float xFocal; /* +0x5c */
    float xZMin; /* +0x60 */
    float xZMax; /* +0x64 */
    HIE_tdstSuperObject_* hSuperObjectTargeted; /* +0x68 */
    HIE_tdstSuperObject_* hSecondSuperObjectTargeted; /* +0x6c */
    unsigned short uwDNMFlags; /* +0x70 */
    unsigned short uwIAFlags; /* +0x72 */
    e_ucListViewport_ eTypeOfViewport; /* +0x74 */
    char cChannel; /* +0x78 */
    unsigned char bIsActive; /* +0x79 */
    unsigned char bDebugCamera; /* +0x7a */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
};

struct tdstActionTable_ {
    tdstActionTableEntry_* p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
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

struct tdstDsgVarInfo_ {
    unsigned int ulOffsetInDsgMem; /* +0x0 */
    tdeDsgVarTypeId_ eDsgVarTypeId; /* +0x4 */
    unsigned short eSaveType; /* +0x8 */
    tdeObjectTreeInit_ eInitType; /* +0xc */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
};

struct tdstDsgMem_ {
    tdstDsgVar_** p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct MTH_stMove {
    MTH3D_tdstVector_ m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct DNM_stReport {
    unsigned int m_ulPrevSurfaceState; /* +0x0 */
    unsigned int m_ulCurrSurfaceState; /* +0x4 */
    DNM_stObstacle m_stObstacle; /* +0x8 */
    DNM_stObstacle m_stGround; /* +0x30 */
    DNM_stObstacle m_stWall; /* +0x58 */
    DNM_stObstacle m_stCharacter; /* +0x80 */
    DNM_stObstacle m_stWater; /* +0xa8 */
    DNM_stObstacle m_stCeil; /* +0xd0 */
    MTH_stMove m_stAbsolutePrevSpeed; /* +0xf8 */
    MTH_stMove m_stAbsoluteCurrSpeed; /* +0x114 */
    MTH_stMove m_stAbsolutePrevPosition; /* +0x130 */
    MTH_stMove m_stAbsoluteCurrPosition; /* +0x14c */
    char m_cBitField; /* +0x168 */
};

struct CAM_Shooter_CV_ {
    float xTheta_Init; /* +0x0 */
    float xDistMax_Init; /* +0x4 */
    float xTheta_Init_mario; /* +0x8 */
    float xDistMax_Init_mario; /* +0xc */
    float xTheta_Init_Climb; /* +0x10 */
    float xDistMax_Init_Climb; /* +0x14 */
    float xTheta_Init_Swim; /* +0x18 */
    float xDistMax_Init_Swim; /* +0x1c */
    float xMouseFactorX; /* +0x20 */
    float xMouseFactorY; /* +0x24 */
    GLI_tdstMaterial_* hVMTViewFinder_white; /* +0x28 */
    GLI_tdstMaterial_* hVMTViewFinder_red; /* +0x2c */
    MTH3D_tdstVector_ vViewFinderWhiteIconUV1; /* +0x30 */
    MTH3D_tdstVector_ vViewFinderWhiteIconUV2; /* +0x3c */
    MTH3D_tdstVector_ vViewFinderRedIconUV1; /* +0x48 */
    MTH3D_tdstVector_ vViewFinderRedIconUV2; /* +0x54 */
    float xAngleRotationCollisionShift[4]; /* +0x60 */
    int iMouseSensitivity; /* +0x70 */
};

float xMouseSensitivityFactor[4];
int bGCubeVersion;
float xCameraDelayAlign;
tdstCineinfo_* hCineInfo;
int lInputAxisV;
int lInputAxisZ;
int lInputAxisY;
int lInputAxisX;
int bMovedCameraY;
int bMovedCameraX;
int bMovedY;
int bMovedX;
CAM_Shooter_CV_ stCamShooter_CV;
CAM_Shooter_ a_stCamShooter[4];
MTH3D_tdstVector_ g_stCollideResultPoint;
int g_hColMatHit;
MTH3D_tdstVector_ vVectorZ;
tdstEngineStructure_ g_stEngineStructure;
int g_hSuperObjectHit;
MTH3D_tdstVector_ g_stCollideResultVector;

float fabsf(float x);
float sqrtf(float x);
void AGO_vAddParticle(unsigned int PartType, MTH3D_tdstVector_* p_stPosition, MTH3D_tdstVector_* p_stDirection, void* hVisualMaterial, float parameter);
void AGO_vSetIcon(int NumeroVp, int Num, float* V1, float* V2, float xTransparency, void* Mat);
void CAM_fn_vInitCompleteCineinfo(tdstCineinfo_* _hCineinfo);
void CAM_fn_vSetResetInternalFlag(tdstCineinfo_* _hCineInfo, unsigned short* _p_uwCurrentValue, unsigned short* _p_uwVisibilityValue, unsigned short* _p_uwWorkValue, int _lTypeOfChange, int _lChangingMode, unsigned short _uwFlag);
void CAM_fn_vUpdateTargetPosition(tdstCineinfo_* _hCineinfo);
unsigned char GAM_MultiVP_fn_ucGetNumberOfPlayers(void);
void fn_CollisionRayCast(HIE_tdstSuperObject_* hSender, MTH3D_tdstVector_* p_vPoint, MTH3D_tdstVector_* p_vDirection, unsigned long ulMode);
void fn_GetPersoHorizon(MTH3D_tdstVector_* p_stDest, HIE_tdstSuperObject_* hSuperObjPerso);
void fn_GetPersoBanking(MTH3D_tdstVector_* p_stDest, HIE_tdstSuperObject_* hSuperObjPerso);
void fn_GetPersoNegativeSighting(MTH3D_tdstVector_* p_stDest, HIE_tdstSuperObject_* hSuperObjPerso);
void fn_GetPersoSighting(MTH3D_tdstVector_* p_stDest, HIE_tdstSuperObject_* hSuperObjPerso);
void fn_RotateVectorByAngle(MTH3D_tdstVector_* vector1, float xAngle, MTH3D_tdstVector_* vector2);
int fn_bIsValidObject(HIE_tdstSuperObject_* pPerso);
int fn_bCollideWithGround(HIE_tdstSuperObject_* hPerso);
void fn_vGetViewportCoordinates(MTH3D_tdstVector_* pDestination2D, MTH3D_tdstVector_* pWorldPoint, GLD_tdstViewportAttributes_* _p_stViewport);
float fn_xAngleVectorVertical(MTH3D_tdstVector_* stVectorU, MTH3D_tdstVector_* stVectorV);
float fn_xAngleVectorXOY(MTH3D_tdstVector_* stVectorU, MTH3D_tdstVector_* stVectorV);
void fn_ChangeCameraRealParameter(tdstCineinfo_* hCineInfo, tdeProcedureId_ eProcedureId, int lTypeOfChange, int lChangingMode, float xValue);
void fn_InitBackMode(CAM_Shooter_* pcs);
void fn_InitMarioMode(CAM_Shooter_* pcs);
void fn_InitStrafeLockMode(CAM_Shooter_* pcs);
void fn_ChangeCameraVectorParameter(tdstCineinfo_* hCineInfo, tdeProcedureId_ eProcedureId, int lTypeOfChange, int lChangingMode, MTH3D_tdstVector_* p_stValue);
void fn_CreateRaycastDirection(CAM_Shooter_* pcs, MTH3D_tdstVector_* vRayCastDirection, MTH3D_tdstVector_* vCentralSegment);
void fn_GetTheoreticalPosition_UsingRealPosition(MTH3D_tdstVector_* vTPosition, CAM_Shooter_* pcs, unsigned int iMode);
void fn_PutCameraAgainstWall(CAM_Shooter_* pcs, float xDistanceToTarget);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 3662–3782 */
/* addr: 0x00241ad0  size: 6128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3662
 *   +0x0040 -> line 3668
 *   +0x004c -> line 3670
 *   +0x005c -> line 3672
 *   +0x01cc -> line 3673
 *   +0x0200 -> line 3675
 *   +0x02d4 -> line 3678
 *   +0x02e4 -> line 3679
 *   +0x02f0 -> line 3680
 *   +0x0300 -> line 3681
 *   +0x0310 -> line 3683
 *   +0x0314 -> line 3684
 *   +0x0318 -> line 3686
 *   +0x0320 -> line 3681
 *   +0x036c -> line 3682
 *   +0x0374 -> line 3683
 *   +0x037c -> line 3686
 *   +0x0384 -> line 3688
 *   +0x03dc -> line 3697
 *   +0x0404 -> line 3709
 *   +0x0410 -> line 3710
 *   +0x0418 -> line 3711
 *   +0x0454 -> line 3712
 *   +0x04d0 -> line 3713
 *   +0x04d8 -> line 3714
 *   +0x04e4 -> line 3718
 *   +0x04ec -> line 3720
 *   +0x04f8 -> line 3721
 *   +0x0504 -> line 3722
 *   +0x0540 -> line 3723
 *   +0x05c0 -> line 3724
 *   +0x05c8 -> line 3725
 *   +0x05d4 -> line 3727
 *   +0x05f4 -> line 3729
 *   +0x05fc -> line 3732
 *   +0x0600 -> line 3734
 *   +0x060c -> line 3735
 *   +0x0618 -> line 3736
 *   +0x0654 -> line 3737
 *   +0x06d4 -> line 3738
 *   +0x06dc -> line 3739
 *   +0x06e8 -> line 3741
 *   +0x0708 -> line 3745
 *   +0x0770 -> line 3748
 *   +0x077c -> line 3749
 *   +0x09e8 -> line 3751
 *   +0x0f00 -> line 3753
 *   +0x0f10 -> line 3755
 *   +0x0fc8 -> line 3757
 *   +0x0fe4 -> line 3759
 *   +0x154c -> line 3762
 *   +0x15fc -> line 3763
 *   +0x177c -> line 3765
 *   +0x1794 -> line 3766
 *   +0x17ac -> line 3768
 *   +0x17b0 -> line 3782
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_StrafeLockMode(CAM_Shooter_* pcs)
{
    float xNorm;
    float xD2r;
    MTH3D_tdstVector_ vTemp2;
    MTH3D_tdstVector_ vTemp1;

    fn_GetPersoSighting(&pcs->vCameraSighting, pcs->pCamera);
    if (*(char *)pcs->abExternDsgVarBoolean[0])
    {
        if (*(char *)pcs->abExternDsgVarBoolean[3])
        {
            float xDistanceX;
            float xDistanceY;
            float xDistanceZ;
            float xDistanceSquared;
            float xDistance;

            xDistanceX = pcs->pTargetActor_position->xX - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xX;
            xDistanceY = pcs->pTargetActor_position->xY - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xY;
            xDistanceZ = pcs->pTargetActor_position->xZ - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xZ;
            MTH_SQR3_TO(xDistanceSquared, xDistanceX, xDistanceY, xDistanceZ);
            MTH_SQRT_TO(xDistance, xDistanceSquared);
            if (xDistance < 1.0f)
            {
                tdstCineinfo_* hLocalCineInfo;
                HIE_tdstSuperObject_* pLocalTargetActor;

                CAM_fn_vInitCompleteCineinfo(hCineInfo);
                hLocalCineInfo = hCineInfo;
                pLocalTargetActor = pcs->pTargetActor;
                hLocalCineInfo->hCurrent->hSuperObjectTargeted = pLocalTargetActor;
                hLocalCineInfo->hVisibility->hSuperObjectTargeted = pLocalTargetActor;
                hLocalCineInfo->hWork->hSuperObjectTargeted = pLocalTargetActor;
                CAM_fn_vUpdateTargetPosition(hLocalCineInfo);
                switch (pcs->iMode)
                {
                case 2:
                    fn_InitMarioMode(pcs);
                    break;
                case 1:
                    fn_InitBackMode(pcs);
                    break;
                case 3:
                    fn_InitStrafeLockMode(pcs);
                    break;
                }
                fn_GetPersoNegativeSighting(&pcs->vRefAxis, pcs->pTargetActor);
                hLocalCineInfo = hCineInfo;
                hLocalCineInfo->stForceRefAxisY = pcs->vRefAxis;
                hLocalCineInfo->stForceRefAxisZ = vVectorZ;
                CAM_fn_vSetResetInternalFlag(hLocalCineInfo, &hLocalCineInfo->hCurrent->uwIAFlags, &hLocalCineInfo->hVisibility->uwIAFlags, &hLocalCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
                pcs->ulAlignDelayTime = 0;
                *(char *)pcs->abExternDsgVarBoolean[3] = 0;
            }
        }

        pcs->xTheta_Default = stCamShooter_CV.xTheta_Init;
        pcs->xTheta_Min = -0.8f;
        pcs->xTheta_Max = 1.2f;
        pcs->xDistMax_Default = stCamShooter_CV.xDistMax_Init;
        pcs->xDistMax = stCamShooter_CV.xDistMax_Init;

        lInputAxisV = *(int *)pcs->aiExternDsgVarInt[0];
        lInputAxisZ = *(int *)pcs->aiExternDsgVarInt[1];
        lInputAxisY = pcs->bIsBot ? 0 : *(int *)pcs->aiExternDsgVarInt[2];
        lInputAxisX = *(int *)pcs->aiExternDsgVarInt[3];
        bMovedCameraY = lInputAxisV < -25 || lInputAxisV >= 26;
        bMovedCameraX = lInputAxisZ < -25 || lInputAxisZ >= 26;
        if (pcs->bMouseDriven)
        {
            bMovedY = lInputAxisY != 0;
            bMovedX = lInputAxisX != 0;
        }
        else
        {
            bMovedY = lInputAxisY < -25 || lInputAxisY >= 26;
            bMovedX = lInputAxisX < -25 || lInputAxisX >= 26;
        }

        if (*(char *)pcs->abExternDsgVarBoolean[1])
        {
            pcs->pLockedActor = *(HIE_tdstSuperObject_ **)pcs->apExternDsgVarPerso[0];
            if (fn_bIsValidObject(pcs->pLockedActor))
            {
                vTemp1.xX = pcs->pTargetActor_position->xX - pcs->pLockedActor->hGlobalMatrix->stTransformMatrix.stCol_3.xX;
                vTemp1.xY = pcs->pTargetActor_position->xY - pcs->pLockedActor->hGlobalMatrix->stTransformMatrix.stCol_3.xY;
                vTemp1.xZ = pcs->pTargetActor_position->xZ - pcs->pLockedActor->hGlobalMatrix->stTransformMatrix.stCol_3.xZ;
                vTemp2 = vTemp1;
                vTemp2.xZ = 0.0f;
                xD2r = fn_xAngleVectorVertical(&vTemp1, &vTemp2);
                if (vTemp1.xZ == 0.0f)
                    xNorm = 0.0f;
                else
                    xNorm = vTemp1.xZ / fabsf(vTemp1.xZ);
                fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x242, 0, 1, 0.15f + xNorm * fabsf(xD2r));
                fn_GetPersoNegativeSighting(&vTemp1, pcs->pTargetActor);
                vTemp1.xZ = 0.0f;
                if (vTemp1.xX != 0.0f || vTemp1.xY != 0.0f || vTemp1.xZ != 0.0f)
                {
                    float xInvNorm;

                    MTH_VECTOR_NORM_TO(xInvNorm, vTemp1);
                    if (xInvNorm != 0.0f)
                    {
                        xInvNorm = 1.0f / xInvNorm;
                        pcs->vRefAxis.xX = xInvNorm * vTemp1.xX;
                        pcs->vRefAxis.xY = xInvNorm * vTemp1.xY;
                        pcs->vRefAxis.xZ = xInvNorm * vTemp1.xZ;
                    }
                    else
                        pcs->vRefAxis = vTemp1;
                }
                else
                    fn_GetPersoNegativeSighting(&vTemp1, pcs->pTargetActor);
            }
            else
            {
                fn_GetPersoNegativeSighting(&vTemp1, pcs->pTargetActor);
                vTemp1.xZ = 0.0f;
                if (vTemp1.xX != 0.0f || vTemp1.xY != 0.0f || vTemp1.xZ != 0.0f)
                {
                    float xInvNorm;

                    MTH_VECTOR_NORM_TO(xInvNorm, vTemp1);
                    if (xInvNorm != 0.0f)
                    {
                        xInvNorm = 1.0f / xInvNorm;
                        pcs->vRefAxis.xX = xInvNorm * vTemp1.xX;
                        pcs->vRefAxis.xY = xInvNorm * vTemp1.xY;
                        pcs->vRefAxis.xZ = xInvNorm * vTemp1.xZ;
                    }
                    else
                        pcs->vRefAxis = vTemp1;
                }
                else
                    fn_GetPersoNegativeSighting(&vTemp1, pcs->pTargetActor);
                fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x242, 0, 1, 0.15f);
            }
        }
        else
        {
            pcs->pLockedActor = 0;
            fn_GetPersoNegativeSighting(&vTemp1, pcs->pTargetActor);
            vTemp1.xZ = 0.0f;
            if (vTemp1.xX != 0.0f || vTemp1.xY != 0.0f || vTemp1.xZ != 0.0f)
            {
                float xInvNorm;

                MTH_VECTOR_NORM_TO(xInvNorm, vTemp1);
                if (xInvNorm != 0.0f)
                {
                    xInvNorm = 1.0f / xInvNorm;
                    pcs->vRefAxis.xX = xInvNorm * vTemp1.xX;
                    pcs->vRefAxis.xY = xInvNorm * vTemp1.xY;
                    pcs->vRefAxis.xZ = xInvNorm * vTemp1.xZ;
                }
                else
                    pcs->vRefAxis = vTemp1;
            }
            else
                fn_GetPersoNegativeSighting(&vTemp1, pcs->pTargetActor);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x242, 0, 1, 0.15f);
        }

        hCineInfo->stForceRefAxisY = pcs->vRefAxis;
        hCineInfo->stForceRefAxisZ = vVectorZ;
        CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);

        if (!g_stEngineStructure.bEngineIsInPaused)
        {
            if (pcs->axExternDsgVarFloat[0])
                xD2r = *(float *)pcs->axExternDsgVarFloat[0] * (float)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime;
            else
                xD2r = 0.001f * (float)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime;

            if (lInputAxisX < -25)
                xNorm = 0.45f * (((float)(lInputAxisX + 25) / 75.0f) * ((float)(lInputAxisX + 25) / 75.0f));
            else if (lInputAxisX >= 26)
                xNorm = 0.45f * (-((float)(lInputAxisX - 25) / 75.0f) * ((float)(lInputAxisX - 25) / 75.0f));
            else
                xNorm = 0.0f;
            if (!(fabsf(pcs->xThetaLock - xNorm) < xD2r))
                xNorm = pcs->xThetaLock + (pcs->xThetaLock < xNorm ? xD2r : -xD2r);
            pcs->xThetaLock = xNorm;

            if (lInputAxisY < -25)
                xNorm = 0.45f * (((float)(lInputAxisY + 25) / 75.0f) * ((float)(lInputAxisY + 25) / 75.0f));
            else if (lInputAxisY >= 26)
                xNorm = 0.45f * (-((float)(lInputAxisY - 25) / 75.0f) * ((float)(lInputAxisY - 25) / 75.0f));
            else
                xNorm = 0.0f;
            if (!(fabsf(pcs->xAlphaLock - xNorm) < xD2r))
                pcs->xAlphaLock += pcs->xAlphaLock < xNorm ? xD2r : -xD2r;
            else
                pcs->xAlphaLock = xNorm;
        }

        vTemp2 = *pcs->pTargetActor_position;
        vTemp2.xZ += 1.0f;
        if (*(char *)pcs->abExternDsgVarBoolean[1])
        {
            pcs->pLockedActor = *(HIE_tdstSuperObject_ **)pcs->apExternDsgVarPerso[0];
            if (fn_bIsValidObject(pcs->pLockedActor))
            {
                AGO_vAddParticle(50, &stCamShooter_CV.vViewFinderRedIconUV1, &stCamShooter_CV.vViewFinderRedIconUV2, stCamShooter_CV.hVMTViewFinder_white, 0.0f);
                vTemp1.xX = pcs->pLockedActor->hGlobalMatrix->stTransformMatrix.stCol_3.xX;
                vTemp1.xY = pcs->pLockedActor->hGlobalMatrix->stTransformMatrix.stCol_3.xY;
                vTemp1.xZ = pcs->pLockedActor->hGlobalMatrix->stTransformMatrix.stCol_3.xZ + 1.0f;
                xNorm = (vTemp1.xX - vTemp2.xX) * (vTemp1.xX - vTemp2.xX) + (vTemp1.xY - vTemp2.xY) * (vTemp1.xY - vTemp2.xY) + (vTemp1.xZ - vTemp2.xZ) * (vTemp1.xZ - vTemp2.xZ);
                MTH_SQRT_IN_PLACE(xNorm);
                fn_GetPersoSighting(&vTemp1, pcs->pTargetActor);
                vTemp1.xX *= xNorm;
                vTemp1.xY *= xNorm;
                vTemp1.xZ *= xNorm;
                vTemp1.xZ = pcs->pLockedActor->hGlobalMatrix->stTransformMatrix.stCol_3.xZ + 1.0f - vTemp2.xZ;
                if (pcs->xAlphaLock != 0.0f)
                    fn_RotateVectorByAngle(&vTemp1, pcs->xAlphaLock, &vVectorZ);
                if (pcs->xThetaLock != 0.0f)
                {
                    fn_GetPersoHorizon(&pcs->vRayCastDirection, pcs->pCamera);
                    fn_RotateVectorByAngle(&vTemp1, pcs->xThetaLock, &pcs->vRayCastDirection);
                }
                pcs->vViewFinderPosition.xX = vTemp2.xX + vTemp1.xX;
                pcs->vViewFinderPosition.xY = vTemp2.xY + vTemp1.xY;
                pcs->vViewFinderPosition.xZ = vTemp2.xZ + vTemp1.xZ;
            }
            else
                AGO_vAddParticle(50, &stCamShooter_CV.vViewFinderWhiteIconUV1, &stCamShooter_CV.vViewFinderWhiteIconUV2, stCamShooter_CV.hVMTViewFinder_white, 0.0f);
        }
        else
        {
            AGO_vAddParticle(50, &stCamShooter_CV.vViewFinderWhiteIconUV1, &stCamShooter_CV.vViewFinderWhiteIconUV2, stCamShooter_CV.hVMTViewFinder_white, 0.0f);
            fn_GetPersoSighting(&vTemp1, pcs->pTargetActor);
            if (pcs->xAlphaLock != 0.0f)
                fn_RotateVectorByAngle(&vTemp1, pcs->xAlphaLock, &vVectorZ);
            if (pcs->xThetaLock != 0.0f)
            {
                fn_GetPersoHorizon(&vTemp2, pcs->pCamera);
                fn_RotateVectorByAngle(&vTemp1, pcs->xThetaLock, &vTemp2);
            }
            vTemp1.xX *= 5.0f;
            vTemp1.xY *= 5.0f;
            vTemp1.xZ *= 5.0f;
            pcs->vViewFinderPosition.xX = pcs->pTargetActor_position->xX + vTemp1.xX;
            pcs->vViewFinderPosition.xY = pcs->pTargetActor_position->xY + vTemp1.xY;
            pcs->vViewFinderPosition.xZ = pcs->pTargetActor_position->xZ + 1.0f + vTemp1.xZ;
        }

        fn_vGetViewportCoordinates(&pcs->v2DViewFinderPosition, &pcs->vViewFinderPosition, pcs->p_stViewport);
        if (GAM_MultiVP_fn_ucGetNumberOfPlayers() == 2)
            pcs->v2DViewFinderPosition.xY *= 2.0f;
        if (pcs->v2DViewFinderPosition.xX >= -5.0f && pcs->v2DViewFinderPosition.xX <= 105.0f && pcs->v2DViewFinderPosition.xY >= 0.0f)
        {
            vTemp1.xX = pcs->vViewFinderPosition.xX - pcs->pTargetActor_position->xX;
            vTemp1.xY = pcs->vViewFinderPosition.xY - pcs->pTargetActor_position->xY;
            vTemp1.xZ = pcs->vViewFinderPosition.xZ - (pcs->pTargetActor_position->xZ + 1.0f);
            xNorm = vTemp1.xX * vTemp1.xX + vTemp1.xY * vTemp1.xY + vTemp1.xZ * vTemp1.xZ;
            MTH_SQRT_IN_PLACE(xNorm);
            if (xNorm != 0.0f)
            {
                ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0])->xX = vTemp1.xX / xNorm;
                ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0])->xY = vTemp1.xY / xNorm;
                ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0])->xZ = vTemp1.xZ / xNorm;
            }
            else
                *(MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0] = vTemp1;
        }
        else
        {
            pcs->v2DViewFinderPosition.xX = -300.0f;
            pcs->v2DViewFinderPosition.xY = -300.0f;
            pcs->v2DViewFinderPosition.xZ = 0.0f;
            fn_GetPersoSighting((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0], pcs->pTargetActor);
        }

        vTemp1 = pcs->v2DViewFinderPosition;
        vTemp2.xX = pcs->v2DViewFinderPosition.xX - pcs->xViewFinderWidth_2;
        vTemp2.xY = pcs->v2DViewFinderPosition.xY - pcs->xViewFinderHeight_2;
        vTemp1.xX += pcs->xViewFinderWidth_2;
        vTemp1.xY += pcs->xViewFinderHeight_2;
        AGO_vSetIcon(pcs->iViewportIndex, pcs->iViewFinderIconId, &vTemp2.xX, &vTemp1.xX, 255.0f, stCamShooter_CV.hVMTViewFinder_red);

        pcs->xTheta_Current = hCineInfo->hCurrent->xAngleTheta;
        if (pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport != pcs->pMAComport_Climb &&
            pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport != pcs->pMAComport_Hang &&
            pcs->xTheta_Current < pcs->xTheta_Default)
        {
            xNorm = 3.0f + (pcs->xDistMax_Default - 3.0f) * ((pcs->xTheta_Current - pcs->xTheta_Min) / (pcs->xTheta_Default - pcs->xTheta_Min));
            if (pcs->xDistMax > xNorm)
                pcs->xDistMax = xNorm;
        }

        fn_GetPersoSighting(&vTemp1, pcs->pTargetActor);
        pcs->xTargetAngle = fn_xAngleVectorXOY(&pcs->vCameraSighting, &vTemp1);
        vTemp2 = *pcs->pTargetActor_position;
        vTemp2.xZ += 1.5f;
        vTemp1.xX = vTemp1.xY = vTemp1.xZ = 0.0f;
        xNorm = pcs->xDistMax;
        {
            float xCameraDistanceX;
            float xCameraDistanceY;
            float xCameraDistanceZ;
            MTH3D_tdstVector_ vCollisionDirection;
            MTH3D_tdstVector_ vCollisionPoint;

            xCameraDistanceX = xNorm * pcs->vCameraSighting.xX;
            xCameraDistanceY = xNorm * pcs->vCameraSighting.xY;
            xCameraDistanceZ = xNorm * pcs->vCameraSighting.xZ;
            vCollisionPoint.xX = 0.0f;
            vCollisionPoint.xY = 0.0f;
            vCollisionPoint.xZ = 0.0f;
            fn_GetPersoHorizon(&vTemp1, pcs->pCamera);
            vTemp1.xX *= 0.7f;
            vTemp1.xY *= 0.7f;
            vTemp1.xZ *= 0.7f;
            vCollisionDirection.xX = vTemp1.xX - xCameraDistanceX;
            vCollisionDirection.xY = vTemp1.xY - xCameraDistanceY;
            vCollisionDirection.xZ = vTemp1.xZ - xCameraDistanceZ;
            fn_CollisionRayCast(pcs->pCamera, &vTemp2, &vCollisionDirection, 0);
        if (g_stCollideResultPoint.xX != 0.0f || g_stCollideResultPoint.xY != 0.0f || g_stCollideResultPoint.xZ != 0.0f)
        {
            if (pcs->hWaterGMT)
            {
                if (g_hColMatHit != (int)pcs->hWaterGMT->hCollideMaterial)
                {
                    float xCollisionX;
                    float xCollisionY;
                    float xCollisionZ;
                    float xCollisionDistance;

                    xCollisionX = g_stCollideResultPoint.xX - vTemp2.xX - vTemp1.xX;
                    xCollisionY = g_stCollideResultPoint.xY - vTemp2.xY - vTemp1.xY;
                    xCollisionZ = g_stCollideResultPoint.xZ - vTemp2.xZ - vTemp1.xZ;
                    MTH_SQR3_TO(xCollisionDistance, xCollisionX, xCollisionY, xCollisionZ);
                    MTH_SQRT_IN_PLACE(xCollisionDistance);
                    if (xCollisionDistance < xNorm)
                    {
                        xNorm = xCollisionDistance;
                        vCollisionPoint = g_stCollideResultPoint;
                    }
                }
            }
            else
            {
                float xCollisionX;
                float xCollisionY;
                float xCollisionZ;
                float xCollisionDistance;

                xCollisionX = g_stCollideResultPoint.xX - vTemp2.xX - vTemp1.xX;
                xCollisionY = g_stCollideResultPoint.xY - vTemp2.xY - vTemp1.xY;
                xCollisionZ = g_stCollideResultPoint.xZ - vTemp2.xZ - vTemp1.xZ;
                MTH_SQR3_TO(xCollisionDistance, xCollisionX, xCollisionY, xCollisionZ);
                MTH_SQRT_IN_PLACE(xCollisionDistance);
                if (xCollisionDistance < xNorm)
                {
                    xNorm = xCollisionDistance;
                    vCollisionPoint = g_stCollideResultPoint;
                }
            }
        }
        vTemp1.xX = -vTemp1.xX;
        vTemp1.xY = -vTemp1.xY;
        vTemp1.xZ = -vTemp1.xZ;
        vCollisionDirection.xX = vTemp1.xX - xCameraDistanceX;
        vCollisionDirection.xY = vTemp1.xY - xCameraDistanceY;
        vCollisionDirection.xZ = vTemp1.xZ - xCameraDistanceZ;
        fn_CollisionRayCast(pcs->pCamera, &vTemp2, &vCollisionDirection, 0);
        if (g_stCollideResultPoint.xX != 0.0f || g_stCollideResultPoint.xY != 0.0f || g_stCollideResultPoint.xZ != 0.0f)
        {
            if (pcs->hWaterGMT)
            {
                if (g_hColMatHit != (int)pcs->hWaterGMT->hCollideMaterial)
                {
                    float xCollisionX;
                    float xCollisionY;
                    float xCollisionZ;
                    float xCollisionDistance;

                    xCollisionX = g_stCollideResultPoint.xX - vTemp2.xX - vTemp1.xX;
                    xCollisionY = g_stCollideResultPoint.xY - vTemp2.xY - vTemp1.xY;
                    xCollisionZ = g_stCollideResultPoint.xZ - vTemp2.xZ - vTemp1.xZ;
                    MTH_SQR3_TO(xCollisionDistance, xCollisionX, xCollisionY, xCollisionZ);
                    MTH_SQRT_IN_PLACE(xCollisionDistance);
                    if (xCollisionDistance < xNorm)
                    {
                        xNorm = xCollisionDistance;
                        vCollisionPoint = g_stCollideResultPoint;
                    }
                }
            }
            else
            {
                float xCollisionX;
                float xCollisionY;
                float xCollisionZ;
                float xCollisionDistance;

                xCollisionX = g_stCollideResultPoint.xX - vTemp2.xX - vTemp1.xX;
                xCollisionY = g_stCollideResultPoint.xY - vTemp2.xY - vTemp1.xY;
                xCollisionZ = g_stCollideResultPoint.xZ - vTemp2.xZ - vTemp1.xZ;
                MTH_SQR3_TO(xCollisionDistance, xCollisionX, xCollisionY, xCollisionZ);
                MTH_SQRT_IN_PLACE(xCollisionDistance);
                if (xCollisionDistance < xNorm)
                {
                    xNorm = xCollisionDistance;
                    vCollisionPoint = g_stCollideResultPoint;
                }
            }
        }
        if (vCollisionPoint.xX != 0.0f || vCollisionPoint.xY != 0.0f || vCollisionPoint.xZ != 0.0f)
        {
            xNorm -= 0.6f;
            if (xNorm < 1.3f)
                xNorm = 1.3f;
            vCollisionPoint.xX -= vTemp1.xX;
            vCollisionPoint.xY -= vTemp1.xY;
            vCollisionPoint.xZ -= vTemp1.xZ;
            pcs->xDistMax = xNorm;
            if (xNorm < 2.0f)
            {
                CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
                CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
            }
        }
        }

        fn_GetPersoSighting(&vTemp1, pcs->pTargetActor);
        pcs->xTargetAngle = fn_xAngleVectorXOY(&pcs->vCameraSighting, &vTemp1);
        if (fabsf(pcs->xTargetAngle) > 0.2f &&
            pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport != pcs->pMAComport_Hang &&
            pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport != pcs->pMAComport_Climb)
        {
            pcs->bFastAlign = 1;
            pcs->xFastAlign_StartDistance = pcs->xDistMax;
        }
        if (pcs->bFastAlign)
        {
            fn_GetPersoNegativeSighting(&pcs->vRefAxis, pcs->pTargetActor);
            xNorm = fabsf(pcs->xTargetAngle);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x247, 1, 1, 180.0f);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x244, 1, 1, 180.0f);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x24A, 1, 1, 180.0f);
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
            if (xNorm > 1.5707964f)
            {
                xD2r = 6.0f + ((xNorm - 1.5707964f) / 1.5707964f) * (pcs->xFastAlign_StartDistance - 6.0f);
                if (pcs->xDistMax > xD2r)
                    pcs->xDistMax = xD2r;
            }
            else if (xNorm > 0.2f)
            {
                xD2r = 6.0f + ((xNorm - 1.5707964f) / 1.5707964f) * (pcs->xDistMax_Default - 6.0f);
                if (pcs->xDistMax > xD2r)
                    pcs->xDistMax = xD2r;
            }
            else
                pcs->bFastAlign = 0;
        }
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x23C, 0, 1, pcs->xDistMax);
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x23D, 0, 1, pcs->xDistMax);
        return 0;
    }
    return 2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 3407–3465 */
/* addr: 0x002432c0  size: 1160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3407
 *   +0x0004 -> line 3413
 *   +0x0008 -> line 3407
 *   +0x000c -> line 3415
 *   +0x0010 -> line 3407
 *   +0x0014 -> line 3415
 *   +0x0018 -> line 3407
 *   +0x0024 -> line 3413
 *   +0x0034 -> line 3415
 *   +0x0038 -> line 3413
 *   +0x003c -> line 3415
 *   +0x005c -> line 3416
 *   +0x0088 -> line 3417
 *   +0x00c0 -> line 3418
 *   +0x00ec -> line 3419
 *   +0x0118 -> line 3420
 *   +0x0144 -> line 3421
 *   +0x0170 -> line 3422
 *   +0x019c -> line 3423
 *   +0x01c8 -> line 3425
 *   +0x01f4 -> line 3426
 *   +0x020c -> line 3427
 *   +0x0224 -> line 3429
 *   +0x023c -> line 3430
 *   +0x024c -> line 3432
 *   +0x0280 -> line 3434
 *   +0x0288 -> line 3435
 *   +0x02bc -> line 3439
 *   +0x02f0 -> line 3440
 *   +0x02fc -> line 3442
 *   +0x030c -> line 3443
 *   +0x0318 -> line 3444
 *   +0x0328 -> line 3445
 *   +0x0338 -> line 3446
 *   +0x033c -> line 3445
 *   +0x0370 -> line 3446
 *   +0x0374 -> line 3447
 *   +0x03b0 -> line 3448
 *   +0x0424 -> line 3449
 *   +0x042c -> line 3450
 *   +0x0438 -> line 3452
 *   +0x0440 -> line 3453
 *   +0x044c -> line 3454
 *   +0x0454 -> line 3455
 *   +0x0460 -> line 3457
 *   +0x0464 -> line 3458
 *   +0x0468 -> line 3457
 *   +0x046c -> line 3458
 *   +0x0470 -> line 3465
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_InitStrafeLockMode(CAM_Shooter_* pcs)
{
    float xNorm;
    MTH3D_tdstVector_ vTemp1;
    MTH3D_tdstVector_ vShiftPos;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 1173–1213 */
/* addr: 0x00243750  size: 712 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1173
 *   +0x0004 -> line 1183
 *   +0x0008 -> line 1173
 *   +0x000c -> line 1185
 *   +0x0010 -> line 1173
 *   +0x0014 -> line 1185
 *   +0x0018 -> line 1181
 *   +0x0024 -> line 1185
 *   +0x0028 -> line 1181
 *   +0x0058 -> line 1185
 *   +0x005c -> line 1183
 *   +0x0068 -> line 1185
 *   +0x0084 -> line 1186
 *   +0x00b0 -> line 1187
 *   +0x00d0 -> line 1188
 *   +0x00fc -> line 1189
 *   +0x0128 -> line 1190
 *   +0x0154 -> line 1191
 *   +0x0180 -> line 1192
 *   +0x01ac -> line 1193
 *   +0x01d8 -> line 1195
 *   +0x0204 -> line 1196
 *   +0x021c -> line 1197
 *   +0x0234 -> line 1200
 *   +0x0250 -> line 1207
 *   +0x0264 -> line 1211
 *   +0x0268 -> line 1207
 *   +0x026c -> line 1211
 *   +0x0270 -> line 1207
 *   +0x028c -> line 1208
 *   +0x0298 -> line 1209
 *   +0x029c -> line 1211
 *   +0x02ac -> line 1212
 *   +0x02b8 -> line 1213
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_InitBackMode(CAM_Shooter_* pcs)
{
    MTH3D_tdstVector_ vShiftPos;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 1935–1984 */
/* addr: 0x00243a20  size: 856 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1935
 *   +0x0004 -> line 1943
 *   +0x0008 -> line 1935
 *   +0x000c -> line 1943
 *   +0x0010 -> line 1935
 *   +0x0014 -> line 1943
 *   +0x0018 -> line 1940
 *   +0x0054 -> line 1943
 *   +0x0074 -> line 1944
 *   +0x00a0 -> line 1945
 *   +0x00cc -> line 1946
 *   +0x00f8 -> line 1947
 *   +0x0124 -> line 1948
 *   +0x0150 -> line 1949
 *   +0x017c -> line 1952
 *   +0x0198 -> line 1953
 *   +0x01b4 -> line 1954
 *   +0x01d0 -> line 1955
 *   +0x01e8 -> line 1956
 *   +0x0204 -> line 1957
 *   +0x0220 -> line 1961
 *   +0x024c -> line 1962
 *   +0x0278 -> line 1963
 *   +0x0290 -> line 1965
 *   +0x02a8 -> line 1966
 *   +0x02b4 -> line 1969
 *   +0x02bc -> line 1972
 *   +0x02cc -> line 1975
 *   +0x02e4 -> line 1977
 *   +0x02f8 -> line 1980
 *   +0x02fc -> line 1977
 *   +0x0300 -> line 1980
 *   +0x0304 -> line 1977
 *   +0x0320 -> line 1978
 *   +0x032c -> line 1980
 *   +0x033c -> line 1982
 *   +0x0348 -> line 1984
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_InitMarioMode(CAM_Shooter_* pcs)
{
    MTH3D_tdstVector_ vShiftPos;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 3314–3398 */
/* addr: 0x00243d80  size: 10052 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3314
 *   +0x0038 -> line 3319
 *   +0x01a8 -> line 3321
 *   +0x01c4 -> line 3322
 *   +0x01cc -> line 3325
 *   +0x02a0 -> line 3327
 *   +0x02d4 -> line 3329
 *   +0x02e0 -> line 3331
 *   +0x05b8 -> line 3337
 *   +0x07c4 -> line 3339
 *   +0x07e0 -> line 3341
 *   +0x0a58 -> line 3347
 *   +0x0a64 -> line 3348
 *   +0x0bc0 -> line 3352
 *   +0x0bcc -> line 3353
 *   +0x0db4 -> line 3355
 *   +0x0e1c -> line 3357
 *   +0x0edc -> line 3362
 *   +0x0ee4 -> line 3357
 *   +0x0f04 -> line 3362
 *   +0x1bcc -> line 3364
 *   +0x1de0 -> line 3370
 *   +0x1f64 -> line 3374
 *   +0x2010 -> line 3376
 *   +0x2170 -> line 3379
 *   +0x217c -> line 3380
 *   +0x21a0 -> line 3382
 *   +0x21c8 -> line 3383
 *   +0x21d8 -> line 3384
 *   +0x21f4 -> line 3386
 *   +0x2208 -> line 3389
 *   +0x26c8 -> line 3393
 *   +0x26cc -> line 3397
 *   +0x26d0 -> line 3393
 *   +0x26f0 -> line 3395
 *   +0x2708 -> line 3398
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_MarioMode(CAM_Shooter_* pcs)
{
    float xAngularSpeed;

    if (*(char *)pcs->abExternDsgVarBoolean[3])
    {
        xAngularSpeed = sqrtf(
            (pcs->pTargetActor_position->xX - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xX) * (pcs->pTargetActor_position->xX - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xX) +
            (pcs->pTargetActor_position->xY - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xY) * (pcs->pTargetActor_position->xY - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xY) +
            (pcs->pTargetActor_position->xZ - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xZ) * (pcs->pTargetActor_position->xZ - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xZ));
        if (xAngularSpeed < 1.0f)
        {
            CAM_fn_vInitCompleteCineinfo(hCineInfo);
            hCineInfo->hCurrent->hSuperObjectTargeted = pcs->pTargetActor;
            hCineInfo->hVisibility->hSuperObjectTargeted = pcs->pTargetActor;
            hCineInfo->hWork->hSuperObjectTargeted = pcs->pTargetActor;
            CAM_fn_vUpdateTargetPosition(hCineInfo);
            switch (pcs->iMode)
            {
            case 2:
                fn_InitMarioMode(pcs);
                break;
            case 1:
                fn_InitBackMode(pcs);
                break;
            case 3:
                fn_InitStrafeLockMode(pcs);
                break;
            }
            fn_GetPersoNegativeSighting(&pcs->vRefAxis, pcs->pTargetActor);
            hCineInfo->stForceRefAxisY = pcs->vRefAxis;
            hCineInfo->stForceRefAxisZ = vVectorZ;
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
            pcs->ulAlignDelayTime = 0;
            *(char *)pcs->abExternDsgVarBoolean[3] = 0;
        }
    }
    if (*(char *)pcs->abExternDsgVarBoolean[0] && !pcs->bIsBot)
        return 3;

    lInputAxisV = *(int *)pcs->aiExternDsgVarInt[0];
    lInputAxisZ = *(int *)pcs->aiExternDsgVarInt[1];
    lInputAxisY = pcs->bIsBot ? 0 : *(int *)pcs->aiExternDsgVarInt[2];
    lInputAxisX = *(int *)pcs->aiExternDsgVarInt[3];
    bMovedCameraY = lInputAxisV < -25 || lInputAxisV >= 26;
    bMovedCameraX = lInputAxisZ < -25 || lInputAxisZ >= 26;
    if (pcs->bMouseDriven)
    {
        bMovedY = lInputAxisY != 0;
        bMovedX = lInputAxisX != 0;
    }
    else
    {
        bMovedY = lInputAxisY < -25 || lInputAxisY >= 26;
        bMovedX = lInputAxisX < -25 || lInputAxisX >= 26;
    }

    pcs->xTheta_Default = stCamShooter_CV.xTheta_Init_mario;
    pcs->xTheta_Min = -0.6f;
    pcs->xTheta_Max = 1.3f;
    pcs->xDistMax_Default = stCamShooter_CV.xDistMax_Init_mario;
    pcs->xDistMax = stCamShooter_CV.xDistMax_Init_mario;
    fn_GetPersoSighting(&pcs->vCameraSighting, pcs->pCamera);

    xAngularSpeed = bMovedY ? (float)(lInputAxisY < 0 ? lInputAxisY + 25 : lInputAxisY - 25) : 0.0f;
    fn_GetPersoHorizon(&pcs->vProposedSpeed, pcs->pCamera);
    pcs->vProposedSpeed.xX *= xAngularSpeed;
    pcs->vProposedSpeed.xY *= xAngularSpeed;
    pcs->vProposedSpeed.xZ *= xAngularSpeed;
    xAngularSpeed = bMovedX ? (float)((lInputAxisX < 0 ? 25 : -25) - lInputAxisX) : 0.0f;
    fn_GetPersoBanking(&pcs->vCheckCollisionShift, pcs->pCamera);
    pcs->vProposedSpeed.xX += xAngularSpeed * pcs->vCheckCollisionShift.xX;
    pcs->vProposedSpeed.xY += xAngularSpeed * pcs->vCheckCollisionShift.xY;
    pcs->vProposedSpeed.xZ += xAngularSpeed * pcs->vCheckCollisionShift.xZ;
    if (pcs->vProposedSpeed.xX != 0.0f || pcs->vProposedSpeed.xY != 0.0f || pcs->vProposedSpeed.xZ != 0.0f)
    {
        xAngularSpeed = sqrtf(pcs->vProposedSpeed.xX * pcs->vProposedSpeed.xX + pcs->vProposedSpeed.xY * pcs->vProposedSpeed.xY + pcs->vProposedSpeed.xZ * pcs->vProposedSpeed.xZ);
        if (xAngularSpeed != 0.0f)
        {
            pcs->vProposedSpeed.xX /= xAngularSpeed;
            pcs->vProposedSpeed.xY /= xAngularSpeed;
            pcs->vProposedSpeed.xZ /= xAngularSpeed;
        }
    }

    if (pcs->bAlignCamera)
    {
        fn_GetPersoHorizon(&pcs->vActualSpeed, pcs->pCamera);
        if (pcs->xTargetAngle > 0.0f)
        {
            pcs->vActualSpeed.xX = -pcs->vActualSpeed.xX;
            pcs->vActualSpeed.xY = -pcs->vActualSpeed.xY;
            pcs->vActualSpeed.xZ = -pcs->vActualSpeed.xZ;
        }
    }
    else
    {
        pcs->vActualSpeed.xX = pcs->vOldSighting.xX - pcs->vCameraSighting.xX;
        pcs->vActualSpeed.xY = pcs->vOldSighting.xY - pcs->vCameraSighting.xY;
        pcs->vActualSpeed.xZ = pcs->vOldSighting.xZ - pcs->vCameraSighting.xZ;
        xAngularSpeed = sqrtf(pcs->vActualSpeed.xX * pcs->vActualSpeed.xX + pcs->vActualSpeed.xY * pcs->vActualSpeed.xY + pcs->vActualSpeed.xZ * pcs->vActualSpeed.xZ);
        if (xAngularSpeed > 0.01f)
        {
            pcs->vActualSpeed.xX /= xAngularSpeed;
            pcs->vActualSpeed.xY /= xAngularSpeed;
            pcs->vActualSpeed.xZ /= xAngularSpeed;
        }
        else
        {
            pcs->vActualSpeed.xX = 0.0f;
            pcs->vActualSpeed.xY = 0.0f;
            pcs->vActualSpeed.xZ = 0.0f;
        }
    }

    if (pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport == pcs->pMAComport_Climb)
    {
        pcs->xDistMax_Default = stCamShooter_CV.xDistMax_Init_Climb;
        pcs->xDistMax = stCamShooter_CV.xDistMax_Init_Climb;
        if (!pcs->bWasClimbing)
        {
            pcs->bWasClimbing = 1;
            pcs->bStartAlignCamera = 1;
        }
    }
    else
    {
        pcs->bWasClimbing = 0;
        if (pcs->bLowCeiling)
        {
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
            pcs->xTheta_Default = 0.1f;
            bMovedX = 0;
        }
        else if (!fn_bCollideWithGround(pcs->pTargetSkin) && pcs->pTargetActor_speed->xZ < -0.2f &&
                 pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport != pcs->pMAComport_Climb)
        {
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
            xAngularSpeed = 1.1f * sqrtf(pcs->pTargetActor_speed->xX * pcs->pTargetActor_speed->xX + pcs->pTargetActor_speed->xY * pcs->pTargetActor_speed->xY + pcs->pTargetActor_speed->xZ * pcs->pTargetActor_speed->xZ);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x244, 1, 1, xAngularSpeed);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x24A, 1, 1, xAngularSpeed);
        }
        else
            pcs->bRaiseCamera = 0;
    }

    fn_GetPersoSighting(&pcs->vCheckCollisionShift, pcs->pTargetActor);
    pcs->xTargetAngle = fn_xAngleVectorXOY(&pcs->vCameraSighting, &pcs->vCheckCollisionShift);

    if (!g_stEngineStructure.bEngineIsInPaused)
    {
        if (!pcs->bIsDigitalInput)
        {
            if (!bMovedX)
            {
                pcs->xDeltaTheta_User /= 2.0f;
                if (fabsf(pcs->xDeltaTheta_User) < 0.05f)
                {
                    pcs->xDeltaTheta_User = 0.0f;
                    pcs->xTheta_User = pcs->xTheta_Default;
                }
                else
                    pcs->xTheta_User = pcs->xTheta_Default + pcs->xDeltaTheta_User;
            }
            else
            {
                xAngularSpeed = (float)lInputAxisX;
                xAngularSpeed = (xAngularSpeed < 0.0f ? xAngularSpeed + 12.0f : xAngularSpeed - 12.0f);
                xAngularSpeed = ((float)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime * xAngularSpeed) / 13000.0f;
                pcs->xDeltaTheta_User -= xAngularSpeed * fabsf(xAngularSpeed);
                pcs->xTheta_User = pcs->xTheta_Default + pcs->xDeltaTheta_User;
            }
        }
        if (pcs->xTheta_User > pcs->xTheta_Max)
        {
            pcs->xTheta_User = pcs->xTheta_Max;
            pcs->xDeltaTheta_User = pcs->xTheta_Max - pcs->xTheta_Default;
        }
        if (pcs->xTheta_User < pcs->xTheta_Min)
        {
            pcs->xTheta_User = pcs->xTheta_Min;
            pcs->xDeltaTheta_User = pcs->xTheta_Min - pcs->xTheta_Default;
        }
    }

    if (!pcs->bAlignCamera)
    {
        if (bMovedY)
        {
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x247, 1, 1, 6.0f);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x244, 1, 1, 67.0f);
            pcs->ulAlignDelayTime = 0;
            xAngularSpeed = (float)(lInputAxisY > 0 ? lInputAxisY - 12 : lInputAxisY + 12);
            fn_RotateVectorByAngle(&pcs->vRefAxis, (float)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime * (-0.000025f * xAngularSpeed), &vVectorZ);
        }
        else if (!pcs->bSideCollision)
        {
            fn_GetPersoNegativeSighting(&pcs->vRefAxis, pcs->pCamera);
            pcs->vRefAxis.xZ = 0.0f;
            xAngularSpeed = sqrtf(pcs->vRefAxis.xX * pcs->vRefAxis.xX + pcs->vRefAxis.xY * pcs->vRefAxis.xY + pcs->vRefAxis.xZ * pcs->vRefAxis.xZ);
            if (xAngularSpeed != 0.0f)
            {
                pcs->vRefAxis.xX /= xAngularSpeed;
                pcs->vRefAxis.xY /= xAngularSpeed;
                pcs->vRefAxis.xZ /= xAngularSpeed;
            }
            else
                fn_GetPersoNegativeSighting(&pcs->vRefAxis, pcs->pTargetActor);
        }
    }
    if (fn_bCollideWithGround(pcs->pTargetSkin) && fabsf(pcs->xTargetAngle) > 1.9634955f)
        CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);

    pcs->vTheoreticalPosition.xX = pcs->pTargetActor_position->xX + hCineInfo->hCurrent->stShiftPos.xX;
    pcs->vTheoreticalPosition.xY = pcs->pTargetActor_position->xY + hCineInfo->hCurrent->stShiftPos.xY;
    pcs->vTheoreticalPosition.xZ = pcs->pTargetActor_position->xZ + hCineInfo->hCurrent->stShiftPos.xZ;
    pcs->vCheckCollisionShift.xX = pcs->xDistMax * pcs->vRefAxis.xX;
    pcs->vCheckCollisionShift.xY = pcs->xDistMax * pcs->vRefAxis.xY;
    pcs->vCheckCollisionShift.xZ = pcs->xDistMax * pcs->vRefAxis.xZ;
    pcs->vCheckCollisionShift1 = pcs->vRefAxis;
    fn_RotateVectorByAngle(&pcs->vCheckCollisionShift1, -1.5707964f, &vVectorZ);
    fn_RotateVectorByAngle(&pcs->vCheckCollisionShift, pcs->xTheta_User, &pcs->vCheckCollisionShift1);
    pcs->vTheoreticalPosition.xX += pcs->vCheckCollisionShift.xX;
    pcs->vTheoreticalPosition.xY += pcs->vCheckCollisionShift.xY;
    pcs->vTheoreticalPosition.xZ += pcs->vCheckCollisionShift.xZ;

    pcs->vRayCastOrigin = *pcs->pTargetActor_position;
    xAngularSpeed = -hCineInfo->hWork->stShiftTarget.xY;
    pcs->vRayCastOrigin.xX += xAngularSpeed * pcs->vCameraSighting.xX;
    pcs->vRayCastOrigin.xY += xAngularSpeed * pcs->vCameraSighting.xY;
    pcs->vRayCastOrigin.xZ += xAngularSpeed * pcs->vCameraSighting.xZ;
    if (pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport == pcs->pMAComport_Hang ||
        pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport == pcs->pMAComport_Climb)
        pcs->vRayCastOrigin.xZ += 3.5f;
    else
        pcs->vRayCastOrigin.xZ += 1.5f;

    pcs->vCollisionDirectionV.xX = pcs->vTheoreticalPosition.xX - pcs->vRayCastOrigin.xX;
    pcs->vCollisionDirectionV.xY = pcs->vTheoreticalPosition.xY - pcs->vRayCastOrigin.xY;
    pcs->vCollisionDirectionV.xZ = pcs->vTheoreticalPosition.xZ - pcs->vRayCastOrigin.xZ;
    fn_GetPersoHorizon(&pcs->vCheckCollisionShift, pcs->pCamera);
    fn_CreateRaycastDirection(pcs, &pcs->vRayCastDirection, &pcs->vCollisionDirectionV);
    fn_CollisionRayCast(pcs->pCamera, &pcs->vRayCastOrigin, &pcs->vRayCastDirection, 0);
    pcs->bCollision = g_stCollideResultPoint.xX != 0.0f || g_stCollideResultPoint.xY != 0.0f || g_stCollideResultPoint.xZ != 0.0f;
    pcs->vNormalCollision = g_stCollideResultVector;
    pcs->vCollisionPoint = g_stCollideResultPoint;
    if (pcs->bCollision)
        fn_PutCameraAgainstWall(pcs, sqrtf(
            (pcs->vRayCastOrigin.xX - pcs->vCollisionPoint.xX) * (pcs->vRayCastOrigin.xX - pcs->vCollisionPoint.xX) +
            (pcs->vRayCastOrigin.xY - pcs->vCollisionPoint.xY) * (pcs->vRayCastOrigin.xY - pcs->vCollisionPoint.xY) +
            (pcs->vRayCastOrigin.xZ - pcs->vCollisionPoint.xZ) * (pcs->vRayCastOrigin.xZ - pcs->vCollisionPoint.xZ)));
    else
        pcs->bObstacleCollision = 0;

    if (bMovedCameraY || bMovedCameraX || bMovedY || bMovedX)
        pcs->ulAlignDelayTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
    else if ((float)(g_stEngineStructure.stEngineTimer.ulCurrentTimerCount - pcs->ulAlignDelayTime) > xCameraDelayAlign || *(char *)pcs->abExternDsgVarBoolean[2])
    {
        pcs->ulAlignDelayTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
        pcs->bAutoAlign = 1;
        pcs->bStartAlignCamera = 1;
    }

    if (pcs->bStartAlignCamera)
    {
        if (!pcs->bAlignCamera)
        {
            pcs->bAlignCamera = 1;
            fn_GetPersoNegativeSighting(&pcs->vRefAxis, pcs->pTargetActor);
        }
        fn_GetPersoNegativeSighting(&pcs->vCheckCollisionShift, pcs->pCamera);
        if (fabsf(fn_xAngleVectorXOY(&pcs->vCheckCollisionShift, &pcs->vRefAxis)) > 0.1f && !pcs->bSideCollision)
        {
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
        }
        else
        {
            pcs->bAutoAlign = 0;
            pcs->bAlignCamera = 0;
            pcs->bStartAlignCamera = 0;
        }
    }
    else if (!bMovedY && !pcs->bAlignCamera && !pcs->bFastAlign)
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x241, 1, 1, 3.2f);

    if (!pcs->bVerticalCollision && !pcs->bObstacleCollision)
        pcs->xTheta_Current = pcs->xTheta_User;
    else if (pcs->xTheta_User < pcs->xTheta_Default)
    {
        pcs->xTheta_Current = pcs->xTheta_Imposed + pcs->xTheta_User - pcs->xTheta_Default;
        if (pcs->xTheta_Current < 0.2f)
            pcs->xTheta_Current = 0.2f;
    }
    else
        pcs->xTheta_Current = pcs->xTheta_User > pcs->xTheta_Imposed ? pcs->xTheta_User : pcs->xTheta_Imposed;
    pcs->xTheta_Imposed = pcs->xTheta_Current;

    if (pcs->xTheta_User < pcs->xTheta_Default)
        xAngularSpeed = 4.5f + ((pcs->xDistMax_Default - 4.5f) * (pcs->xTheta_User - pcs->xTheta_Min)) / (pcs->xTheta_Default - pcs->xTheta_Min);
    else
        xAngularSpeed = 2.0f + ((pcs->xDistMax_Default - 2.0f) * (pcs->xTheta_User - pcs->xTheta_Max)) / (pcs->xTheta_Default - pcs->xTheta_Max);
    if (xAngularSpeed < pcs->xDistMax_Default && pcs->xDistMax > xAngularSpeed)
        pcs->xDistMax = xAngularSpeed;

    fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x242, 0, 1, pcs->xTheta_Current);
    hCineInfo->stForceRefAxisY = pcs->vRefAxis;
    hCineInfo->stForceRefAxisZ = vVectorZ;
    CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
    fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x23C, 0, 1, pcs->xDistMax);
    fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x23D, 0, 1, pcs->xDistMax);
    if (fabsf(pcs->xDistMax - pcs->xOldDistMax) > 0.2f || pcs->bObstacleCollision)
    {
        CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x244, 1, 1, 180.0f);
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x24A, 1, 1, 180.0f);
    }
    pcs->xOldDistMax = pcs->xDistMax;
    if (!pcs->bFastAlign)
    {
        xAngularSpeed = 3.5f * (pcs->xDistMax / 10.0f);
        if (xAngularSpeed > 3.5f || bMovedY || bMovedX)
            xAngularSpeed = 3.5f;
        else if (xAngularSpeed < 1.0f)
            xAngularSpeed = 1.0f;
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x247, 0, 1, xAngularSpeed);
    }

    if (pcs->xTargetAngle < -1.5707964f || pcs->xTargetAngle > 1.5707964f)
    {
        AGO_vSetIcon(pcs->iViewportIndex, pcs->iViewFinderIconId, &vVectorZ.xX, &vVectorZ.xX, 0.0f, stCamShooter_CV.hVMTViewFinder_red);
        fn_GetPersoSighting((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0], pcs->pTargetActor);
    }
    else
    {
        fn_GetPersoSighting(&pcs->vRayCastDirection, pcs->pTargetActor);
        pcs->vRayCastOrigin = *pcs->pTargetActor_position;
        pcs->vRayCastOrigin.xZ += 1.0f;
        pcs->vRayCastDirection.xX *= 200.0f;
        pcs->vRayCastDirection.xY *= 200.0f;
        pcs->vRayCastDirection.xZ *= 200.0f;
        fn_CollisionRayCast(pcs->pCamera, &pcs->vRayCastOrigin, &pcs->vRayCastDirection, g_stEngineStructure.bEngineIsInPaused ? 1 : 2);
        if (g_hSuperObjectHit && ((HIE_tdstSuperObject_ *)g_hSuperObjectHit)->ulTypeOfLinkedObject == 2 && (HIE_tdstSuperObject_ *)g_hSuperObjectHit != pcs->pTargetSkin)
        {
            pcs->vViewFinderPosition.xX = ((HIE_tdstSuperObject_ *)g_hSuperObjectHit)->hGlobalMatrix->stTransformMatrix.stCol_3.xX;
            pcs->vViewFinderPosition.xY = ((HIE_tdstSuperObject_ *)g_hSuperObjectHit)->hGlobalMatrix->stTransformMatrix.stCol_3.xY;
            pcs->vViewFinderPosition.xZ = ((HIE_tdstSuperObject_ *)g_hSuperObjectHit)->hGlobalMatrix->stTransformMatrix.stCol_3.xZ + 1.0f;
            *(int *)pcs->apExternDsgVarPerso[1] = 0;
        }
        else if (g_hSuperObjectHit)
        {
            pcs->vViewFinderPosition = g_stCollideResultPoint;
            *(int *)pcs->apExternDsgVarPerso[1] = 0;
        }
        else
        {
            pcs->vViewFinderPosition.xX = pcs->vRayCastOrigin.xX + pcs->vRayCastDirection.xX;
            pcs->vViewFinderPosition.xY = pcs->vRayCastOrigin.xY + pcs->vRayCastDirection.xY;
            pcs->vViewFinderPosition.xZ = pcs->vRayCastOrigin.xZ + pcs->vRayCastDirection.xZ;
            *(int *)pcs->apExternDsgVarPerso[1] = 0;
        }
        fn_vGetViewportCoordinates(&pcs->v2DViewFinderPosition, &pcs->vViewFinderPosition, pcs->p_stViewport);
        if (GAM_MultiVP_fn_ucGetNumberOfPlayers() == 2)
            pcs->v2DViewFinderPosition.xY *= 2.0f;
        if (pcs->v2DViewFinderPosition.xX < -5.0f || pcs->v2DViewFinderPosition.xX > 105.0f || pcs->v2DViewFinderPosition.xY < 0.0f)
        {
            pcs->v2DViewFinderPosition.xX = -300.0f;
            pcs->v2DViewFinderPosition.xY = -300.0f;
            pcs->v2DViewFinderPosition.xZ = 0.0f;
            fn_GetPersoSighting((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0], pcs->pTargetActor);
        }
        else
        {
            pcs->vCheckCollisionShift.xX = pcs->vViewFinderPosition.xX - pcs->vRayCastOrigin.xX;
            pcs->vCheckCollisionShift.xY = pcs->vViewFinderPosition.xY - pcs->vRayCastOrigin.xY;
            pcs->vCheckCollisionShift.xZ = pcs->vViewFinderPosition.xZ - pcs->vRayCastOrigin.xZ;
            xAngularSpeed = sqrtf(pcs->vCheckCollisionShift.xX * pcs->vCheckCollisionShift.xX + pcs->vCheckCollisionShift.xY * pcs->vCheckCollisionShift.xY + pcs->vCheckCollisionShift.xZ * pcs->vCheckCollisionShift.xZ);
            if (xAngularSpeed != 0.0f)
            {
                ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0])->xX = pcs->vCheckCollisionShift.xX / xAngularSpeed;
                ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0])->xY = pcs->vCheckCollisionShift.xY / xAngularSpeed;
                ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0])->xZ = pcs->vCheckCollisionShift.xZ / xAngularSpeed;
            }
        }
        pcs->vCheckCollisionShift = pcs->v2DViewFinderPosition;
        pcs->vCheckCollisionShift1.xX = pcs->v2DViewFinderPosition.xX - pcs->xViewFinderWidth_2;
        pcs->vCheckCollisionShift1.xY = pcs->v2DViewFinderPosition.xY - pcs->xViewFinderHeight_2;
        pcs->vCheckCollisionShift.xX += pcs->xViewFinderWidth_2;
        pcs->vCheckCollisionShift.xY += pcs->xViewFinderHeight_2;
        AGO_vAddParticle(50, &stCamShooter_CV.vViewFinderWhiteIconUV1, &stCamShooter_CV.vViewFinderWhiteIconUV2, stCamShooter_CV.hVMTViewFinder_white, 0.0f);
        AGO_vSetIcon(pcs->iViewportIndex, pcs->iViewFinderIconId, &pcs->vCheckCollisionShift1.xX, &pcs->vCheckCollisionShift.xX, 140.0f, stCamShooter_CV.hVMTViewFinder_red);
    }
    pcs->vOldPosition = *pcs->vCameraPosition;
    pcs->vOldSighting = pcs->vCameraSighting;
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 2823–2840 */
/* addr: 0x002464d0  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2823
 *   +0x0014 -> line 2830
 *   +0x0030 -> line 2832
 *   +0x0068 -> line 2833
 *   +0x0084 -> line 2834
 *   +0x00a0 -> line 2835
 *   +0x00a8 -> line 2836
 *   +0x00b4 -> line 2837
 *   +0x00fc -> line 2840
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_CreateRaycastDirection(CAM_Shooter_* pcs, MTH3D_tdstVector_* vRayCastDirection, MTH3D_tdstVector_* vCentralSegment)
{
    MTH3D_tdstVector_ vTemp;
    float xNorm;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 2695–2767 */
/* addr: 0x002465e0  size: 840 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2695
 *   +0x0004 -> line 2701
 *   +0x0008 -> line 2695
 *   +0x000c -> line 2701
 *   +0x0010 -> line 2695
 *   +0x0020 -> line 2701
 *   +0x0030 -> line 2704
 *   +0x0034 -> line 2702
 *   +0x0038 -> line 2704
 *   +0x0070 -> line 2706
 *   +0x0074 -> line 2707
 *   +0x0078 -> line 2709
 *   +0x0080 -> line 2713
 *   +0x0090 -> line 2717
 *   +0x0098 -> line 2713
 *   +0x009c -> line 2715
 *   +0x00ac -> line 2717
 *   +0x00bc -> line 2718
 *   +0x00c4 -> line 2720
 *   +0x00cc -> line 2722
 *   +0x00e8 -> line 2725
 *   +0x00f8 -> line 2726
 *   +0x00fc -> line 2728
 *   +0x0100 -> line 2731
 *   +0x0104 -> line 2730
 *   +0x0108 -> line 2731
 *   +0x010c -> line 2730
 *   +0x0120 -> line 2731
 *   +0x0124 -> line 2733
 *   +0x0160 -> line 2734
 *   +0x016c -> line 2736
 *   +0x01d8 -> line 2740
 *   +0x01dc -> line 2736
 *   +0x01e0 -> line 2740
 *   +0x01f0 -> line 2736
 *   +0x01f8 -> line 2740
 *   +0x01fc -> line 2736
 *   +0x0200 -> line 2739
 *   +0x0214 -> line 2740
 *   +0x021c -> line 2742
 *   +0x022c -> line 2744
 *   +0x0240 -> line 2746
 *   +0x0290 -> line 2747
 *   +0x029c -> line 2749
 *   +0x02c4 -> line 2750
 *   +0x02ec -> line 2754
 *   +0x0300 -> line 2758
 *   +0x0304 -> line 2756
 *   +0x0308 -> line 2758
 *   +0x0320 -> line 2761
 *   +0x0328 -> line 2762
 *   +0x032c -> line 2767
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_PutCameraAgainstWall(CAM_Shooter_* pcs, float xDistanceToTarget)
{
    MTH3D_tdstVector_ vHorizon;
    MTH3D_tdstVector_ vRayCast;
    float xFactor;
    float xAngle;
    float xTheoreticalDistance;
    float xNewTheta;
    float xMultiplier;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 2477–2509 */
/* addr: 0x00246930  size: 664 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2477
 *   +0x002c -> line 2483
 *   +0x00b0 -> line 2485
 *   +0x00b4 -> line 2483
 *   +0x00b8 -> line 2485
 *   +0x00bc -> line 2487
 *   +0x00c0 -> line 2485
 *   +0x00c4 -> line 2483
 *   +0x00c8 -> line 2485
 *   +0x00f4 -> line 2487
 *   +0x00f8 -> line 2489
 *   +0x0118 -> line 2491
 *   +0x0128 -> line 2492
 *   +0x0148 -> line 2493
 *   +0x0150 -> line 2496
 *   +0x0188 -> line 2498
 *   +0x0194 -> line 2500
 *   +0x01a0 -> line 2499
 *   +0x01a4 -> line 2500
 *   +0x01b8 -> line 2502
 *   +0x0220 -> line 2504
 *   +0x0248 -> line 2507
 *   +0x026c -> line 2509
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_GetTheoreticalPosition_UsingRealPosition(MTH3D_tdstVector_* vTPosition, CAM_Shooter_* pcs, unsigned int iMode)
{
    float xNorm;
    MTH3D_tdstVector_ vHorizon;
    MTH3D_tdstVector_ vDiff;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 1850–1915 */
/* addr: 0x00246bd0  size: 8388 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1850
 *   +0x003c -> line 1854
 *   +0x01ac -> line 1856
 *   +0x01b8 -> line 1858
 *   +0x028c -> line 1859
 *   +0x02c0 -> line 1861
 *   +0x0520 -> line 1865
 *   +0x052c -> line 1866
 *   +0x0594 -> line 1868
 *   +0x05d8 -> line 1870
 *   +0x0808 -> line 1872
 *   +0x0868 -> line 1873
 *   +0x0874 -> line 1874
 *   +0x0980 -> line 1876
 *   +0x0aa4 -> line 1877
 *   +0x0aac -> line 1878
 *   +0x0ab0 -> line 1880
 *   +0x0abc -> line 1881
 *   +0x1194 -> line 1883
 *   +0x158c -> line 1885
 *   +0x1594 -> line 1887
 *   +0x15a0 -> line 1889
 *   +0x1650 -> line 1890
 *   +0x17d0 -> line 1893
 *   +0x1d20 -> line 1895
 *   +0x1dd8 -> line 1897
 *   +0x1e6c -> line 1899
 *   +0x1e84 -> line 1900
 *   +0x1e9c -> line 1902
 *   +0x1eb4 -> line 1903
 *   +0x1ecc -> line 1905
 *   +0x1f00 -> line 1906
 *   +0x1f1c -> line 1907
 *   +0x1f38 -> line 1908
 *   +0x2004 -> line 1909
 *   +0x2008 -> line 1908
 *   +0x200c -> line 1909
 *   +0x2014 -> line 1908
 *   +0x203c -> line 1909
 *   +0x2080 -> line 1915
 *   +0x20a4 -> line 1914
 *   +0x20a8 -> line 1915
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_BackMode(CAM_Shooter_* pcs)
{
    MTH3D_tdstVector_ vPos;

    if (*(char *)pcs->abExternDsgVarBoolean[3])
    {
        vPos.xX = pcs->pTargetActor_position->xX - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xX;
        vPos.xY = pcs->pTargetActor_position->xY - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xY;
        vPos.xZ = pcs->pTargetActor_position->xZ - ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[1])->xZ;
        if (sqrtf(vPos.xX * vPos.xX + vPos.xY * vPos.xY + vPos.xZ * vPos.xZ) < 1.0f)
        {
            CAM_fn_vInitCompleteCineinfo(hCineInfo);
            hCineInfo->hCurrent->hSuperObjectTargeted = pcs->pTargetActor;
            hCineInfo->hVisibility->hSuperObjectTargeted = pcs->pTargetActor;
            hCineInfo->hWork->hSuperObjectTargeted = pcs->pTargetActor;
            CAM_fn_vUpdateTargetPosition(hCineInfo);
            switch (pcs->iMode)
            {
            case 2:
                fn_InitMarioMode(pcs);
                break;
            case 1:
                fn_InitBackMode(pcs);
                break;
            case 3:
                fn_InitStrafeLockMode(pcs);
                break;
            }
            fn_GetPersoNegativeSighting(&pcs->vRefAxis, pcs->pTargetActor);
            hCineInfo->stForceRefAxisY = pcs->vRefAxis;
            hCineInfo->stForceRefAxisZ = vVectorZ;
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
            pcs->ulAlignDelayTime = 0;
            *(char *)pcs->abExternDsgVarBoolean[3] = 0;
        }
    }

    fn_GetPersoSighting(&pcs->vCameraSighting, pcs->pCamera);
    lInputAxisV = *(int *)pcs->aiExternDsgVarInt[0];
    lInputAxisZ = *(int *)pcs->aiExternDsgVarInt[1];
    lInputAxisY = pcs->bIsBot ? 0 : *(int *)pcs->aiExternDsgVarInt[2];
    lInputAxisX = *(int *)pcs->aiExternDsgVarInt[3];
    bMovedCameraY = lInputAxisV < -25 || lInputAxisV >= 26;
    bMovedCameraX = lInputAxisZ < -25 || lInputAxisZ >= 26;
    if (pcs->bMouseDriven)
    {
        bMovedY = lInputAxisY != 0;
        bMovedX = lInputAxisX != 0;
    }
    else
    {
        bMovedY = lInputAxisY < -25 || lInputAxisY >= 26;
        bMovedX = lInputAxisX < -25 || lInputAxisX >= 26;
    }

    pcs->xTheta_Default = stCamShooter_CV.xTheta_Init;
    pcs->xTheta_Min = -0.8f;
    pcs->xTheta_Max = 1.2f;
    pcs->xDistMax_Default = stCamShooter_CV.xDistMax_Init;
    pcs->xDistMax = stCamShooter_CV.xDistMax_Init;
    if (pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport == pcs->pMAComport_Climb)
    {
        pcs->xTheta_Default = stCamShooter_CV.xTheta_Init_Climb;
        pcs->xDistMax_Default = stCamShooter_CV.xDistMax_Init_Climb;
        pcs->xDistMax = stCamShooter_CV.xDistMax_Init_Climb;
        if (!pcs->bWasClimbing)
        {
            pcs->bWasClimbing = 1;
            pcs->ulDelayTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
            pcs->bStartAlignCamera = 1;
        }
        else if (g_stEngineStructure.stEngineTimer.ulCurrentTimerCount - pcs->ulDelayTime < 1000)
        {
            vPos.xX = pcs->pTargetActor_speed->xX;
            vPos.xY = pcs->pTargetActor_speed->xY;
            vPos.xZ = pcs->pTargetActor_speed->xZ;
            if (sqrtf(vPos.xX * vPos.xX + vPos.xY * vPos.xY + vPos.xZ * vPos.xZ) < 0.1f)
            {
                fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x244, 1, 1, 8.0f);
                fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x247, 1, 1, 1.0f);
            }
            else
            {
                fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x244, 1, 1, 16.0f);
                fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x247, 1, 1, 2.0f);
            }
        }
    }
    else if (pcs->bWasClimbing)
    {
        pcs->bWasClimbing = 0;
        pcs->ulDelayTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
        pcs->xTheta_Default = stCamShooter_CV.xTheta_Init_Climb;
        pcs->xDistMax_Default = stCamShooter_CV.xDistMax_Init_Climb;
        pcs->xDistMax = stCamShooter_CV.xDistMax_Init_Climb;
    }
    else if (g_stEngineStructure.stEngineTimer.ulCurrentTimerCount - pcs->ulDelayTime < 1000 && fn_bCollideWithGround(pcs->pTargetSkin))
    {
        pcs->xTheta_Default = stCamShooter_CV.xTheta_Init_Climb;
        pcs->xDistMax_Default = stCamShooter_CV.xDistMax_Init_Climb;
        pcs->xDistMax = stCamShooter_CV.xDistMax_Init_Climb;
    }
    else if (g_stEngineStructure.stEngineTimer.ulCurrentTimerCount - pcs->ulDelayTime < 2000 &&
             pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport == pcs->pMAComport_Wait)
    {
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x244, 1, 1, 16.0f);
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x247, 1, 1, 1.0f);
    }

    fn_GetPersoNegativeSighting(&pcs->vRefAxis, pcs->pTargetActor);
    hCineInfo->stForceRefAxisY = pcs->vRefAxis;
    hCineInfo->stForceRefAxisZ = vVectorZ;
    CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);

    fn_CollisionRayCast(pcs->pCamera, pcs->vCameraPosition, &vVectorZ, 0);
    pcs->vCeilingCollisionPoint = g_stCollideResultPoint;
    if (bMovedX && (lInputAxisX <= 0 ||
        (pcs->vCeilingCollisionPoint.xX == 0.0f && pcs->vCeilingCollisionPoint.xY == 0.0f && pcs->vCeilingCollisionPoint.xZ == 0.0f)) &&
        !*(char *)pcs->abExternDsgVarBoolean[2])
    {
        if (pcs->bMouseDriven)
            vPos.xX = (-(float)lInputAxisX * (float)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime) / stCamShooter_CV.xMouseFactorY;
        else
        {
            vPos.xX = (float)(lInputAxisX < 0 ? lInputAxisX + 12 : lInputAxisX - 12) * (float)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime / 11000.0f;
            vPos.xX = lInputAxisX < 0 ? -(vPos.xX * vPos.xX) : vPos.xX * vPos.xX;
        }
        pcs->xDeltaTheta_User -= vPos.xX;
        pcs->xTheta_User = pcs->xTheta_Default + pcs->xDeltaTheta_User;
        if (pcs->xTheta_User > pcs->xTheta_Max)
        {
            pcs->xTheta_User = pcs->xTheta_Max;
            pcs->xDeltaTheta_User = pcs->xTheta_Max - pcs->xTheta_Default;
        }
        else if (pcs->xTheta_User < pcs->xTheta_Min)
        {
            pcs->xTheta_User = pcs->xTheta_Min;
            pcs->xDeltaTheta_User = pcs->xTheta_Min - pcs->xTheta_Default;
        }
    }
    else if (*(char *)pcs->abExternDsgVarBoolean[2])
    {
        pcs->xTheta_Current = pcs->xTheta_Default;
        pcs->xTheta_User = pcs->xTheta_Default;
        pcs->xDeltaTheta_User = 0.0f;
    }
    pcs->iOldInputAxisZ = lInputAxisX;

    if (pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport == pcs->pMAComport_Hang ||
        pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport == pcs->pMAComport_Climb)
    {
        if (bMovedY)
        {
            if (pcs->bMouseDriven)
                vPos.xX = (float)lInputAxisY * (float)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime / stCamShooter_CV.xMouseFactorX;
            else
            {
                vPos.xX = (float)(lInputAxisY < 0 ? lInputAxisY + 12 : lInputAxisY - 12) * (float)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime / 13000.0f;
                vPos.xX = lInputAxisY < 0 ? -(vPos.xX * vPos.xX) : vPos.xX * vPos.xX;
            }
            pcs->xAlpha_User -= vPos.xX;
            if (pcs->xAlpha_User > 1.0f)
                pcs->xAlpha_User = 1.0f;
            else if (pcs->xAlpha_User < -1.0f)
                pcs->xAlpha_User = -1.0f;
        }
    }
    else
        pcs->xAlpha_User = 0.0f;

    fn_GetPersoSighting(&pcs->vRayCastDirection, pcs->pTargetActor);
    pcs->vRayCastOrigin = *pcs->pTargetActor_position;
    pcs->vRayCastOrigin.xZ += 1.0f;
    if (pcs->bMouseDriven)
    {
        pcs->vRayCastDirection.xZ = 0.0f;
        vPos.xX = sqrtf(pcs->vRayCastDirection.xX * pcs->vRayCastDirection.xX + pcs->vRayCastDirection.xY * pcs->vRayCastDirection.xY);
        if (vPos.xX != 0.0f)
        {
            pcs->vRayCastDirection.xX *= 200.0f / vPos.xX;
            pcs->vRayCastDirection.xY *= 200.0f / vPos.xX;
        }
    }
    else
    {
        vPos.xX = sqrtf(pcs->vRayCastDirection.xX * pcs->vRayCastDirection.xX + pcs->vRayCastDirection.xY * pcs->vRayCastDirection.xY + pcs->vRayCastDirection.xZ * pcs->vRayCastDirection.xZ);
        if (vPos.xX != 0.0f)
        {
            pcs->vRayCastDirection.xX *= 200.0f / vPos.xX;
            pcs->vRayCastDirection.xY *= 200.0f / vPos.xX;
            pcs->vRayCastDirection.xZ *= 200.0f / vPos.xX;
        }
    }
    *(int *)pcs->apExternDsgVarPerso[1] = 0;
    fn_CollisionRayCast(pcs->pCamera, &pcs->vRayCastOrigin, &pcs->vRayCastDirection, pcs->bAutoAim ? 2 : 0);
    if (g_hSuperObjectHit)
    {
        if (((HIE_tdstSuperObject_ *)g_hSuperObjectHit)->ulTypeOfLinkedObject == 2 && (HIE_tdstSuperObject_ *)g_hSuperObjectHit != pcs->pTargetSkin)
        {
            pcs->vViewFinderPosition.xX = ((HIE_tdstSuperObject_ *)g_hSuperObjectHit)->hGlobalMatrix->stTransformMatrix.stCol_3.xX;
            pcs->vViewFinderPosition.xY = ((HIE_tdstSuperObject_ *)g_hSuperObjectHit)->hGlobalMatrix->stTransformMatrix.stCol_3.xY;
            pcs->vViewFinderPosition.xZ = ((HIE_tdstSuperObject_ *)g_hSuperObjectHit)->hGlobalMatrix->stTransformMatrix.stCol_3.xZ + 1.0f;
            *(HIE_tdstSuperObject_ **)pcs->apExternDsgVarPerso[1] = (HIE_tdstSuperObject_ *)g_hSuperObjectHit;
        }
        else
            pcs->vViewFinderPosition = g_stCollideResultPoint;
    }
    else
    {
        pcs->vViewFinderPosition.xX = pcs->vRayCastOrigin.xX + pcs->vRayCastDirection.xX;
        pcs->vViewFinderPosition.xY = pcs->vRayCastOrigin.xY + pcs->vRayCastDirection.xY;
        pcs->vViewFinderPosition.xZ = pcs->vRayCastOrigin.xZ + pcs->vRayCastDirection.xZ;
        fn_GetPersoSighting((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0], pcs->pTargetActor);
    }

    fn_vGetViewportCoordinates(&vPos, &pcs->vViewFinderPosition, pcs->p_stViewport);
    if (GAM_MultiVP_fn_ucGetNumberOfPlayers() == 2)
        vPos.xY *= 2.0f;
    if (pcs->bMouseDriven)
    {
        pcs->vCheckCollisionShift.xX = vPos.xX - pcs->v2DViewFinderPosition.xX;
        pcs->vCheckCollisionShift.xY = vPos.xY - pcs->v2DViewFinderPosition.xY;
        pcs->vCheckCollisionShift.xZ = vPos.xZ - pcs->v2DViewFinderPosition.xZ;
        if (pcs->v2DViewFinderPosition.xZ > 3.0f ||
            sqrtf(pcs->vCheckCollisionShift.xX * pcs->vCheckCollisionShift.xX + pcs->vCheckCollisionShift.xY * pcs->vCheckCollisionShift.xY + pcs->vCheckCollisionShift.xZ * pcs->vCheckCollisionShift.xZ) < 0.5f)
            pcs->v2DViewFinderPosition = vPos;
        else
        {
            pcs->v2DViewFinderPosition.xX += 0.5f * pcs->vCheckCollisionShift.xX;
            pcs->v2DViewFinderPosition.xY += 0.5f * pcs->vCheckCollisionShift.xY;
            pcs->v2DViewFinderPosition.xZ += 0.5f * pcs->vCheckCollisionShift.xZ;
        }
    }
    else
        pcs->v2DViewFinderPosition = vPos;

    pcs->vDirection.xX = pcs->vViewFinderPosition.xX - pcs->vRayCastOrigin.xX;
    pcs->vDirection.xY = pcs->vViewFinderPosition.xY - pcs->vRayCastOrigin.xY;
    pcs->vDirection.xZ = pcs->vViewFinderPosition.xZ - pcs->vRayCastOrigin.xZ;
    vPos.xX = sqrtf(pcs->vDirection.xX * pcs->vDirection.xX + pcs->vDirection.xY * pcs->vDirection.xY + pcs->vDirection.xZ * pcs->vDirection.xZ);
    if (vPos.xX != 0.0f)
    {
        ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0])->xX = pcs->vDirection.xX / vPos.xX;
        ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0])->xY = pcs->vDirection.xY / vPos.xX;
        ((MTH3D_tdstVector_ *)pcs->avExternDsgVarVector[0])->xZ = pcs->vDirection.xZ / vPos.xX;
    }
    pcs->vCheckCollisionShift1 = pcs->v2DViewFinderPosition;
    pcs->vCheckCollisionShift = pcs->v2DViewFinderPosition;
    pcs->vCheckCollisionShift1.xX -= pcs->xViewFinderWidth_2;
    pcs->vCheckCollisionShift1.xY -= pcs->xViewFinderHeight_2;
    pcs->vCheckCollisionShift.xX += pcs->xViewFinderWidth_2;
    pcs->vCheckCollisionShift.xY += pcs->xViewFinderHeight_2;
    if (*(int *)pcs->apExternDsgVarPerso[1])
        AGO_vAddParticle(50, &stCamShooter_CV.vViewFinderRedIconUV1, &stCamShooter_CV.vViewFinderRedIconUV2, stCamShooter_CV.hVMTViewFinder_white, 0.0f);
    else
        AGO_vAddParticle(50, &stCamShooter_CV.vViewFinderWhiteIconUV1, &stCamShooter_CV.vViewFinderWhiteIconUV2, stCamShooter_CV.hVMTViewFinder_white, 0.0f);
    AGO_vSetIcon(pcs->iViewportIndex, pcs->iViewFinderIconId, &pcs->vCheckCollisionShift1.xX, &pcs->vCheckCollisionShift.xX, 255.0f, stCamShooter_CV.hVMTViewFinder_red);

    pcs->xTheta_Current = pcs->xTheta_User;
    if (!pcs->bMouseDriven)
    {
        fn_GetPersoSighting(&vPos, pcs->pTargetActor);
        pcs->xTargetAngle = fn_xAngleVectorXOY(&pcs->vCameraSighting, &vPos);
        if (fabsf(pcs->xTargetAngle) > 0.2f &&
            pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport != pcs->pMAComport_Hang &&
            pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport != pcs->pMAComport_Climb)
        {
            pcs->bFastAlign = 1;
            pcs->xFastAlign_StartDistance = pcs->xDistMax;
        }
        if (pcs->bFastAlign)
        {
            fn_GetPersoNegativeSighting(&pcs->vRefAxis, pcs->pTargetActor);
            vPos.xX = fabsf(pcs->xTargetAngle);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x247, 1, 1, 180.0f);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x244, 1, 1, 180.0f);
            fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x24A, 1, 1, 180.0f);
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
            if (vPos.xX > 1.5707964f)
                vPos.xY = 6.0f + ((vPos.xX - 1.5707964f) / 1.5707964f) * (pcs->xFastAlign_StartDistance - 6.0f);
            else if (vPos.xX > 0.2f)
                vPos.xY = 6.0f + ((vPos.xX - 1.5707964f) / 1.5707964f) * (pcs->xDistMax_Default - 6.0f);
            else
            {
                pcs->bFastAlign = 0;
                vPos.xY = pcs->xDistMax;
            }
            if (pcs->xDistMax > vPos.xY)
                pcs->xDistMax = vPos.xY;
        }
    }

    vPos = *pcs->pTargetActor_position;
    vPos.xZ += 1.5f;
    fn_GetPersoHorizon(&pcs->vCheckCollisionShift, pcs->pCamera);
    pcs->vCheckCollisionShift.xX *= 0.7f;
    pcs->vCheckCollisionShift.xY *= 0.7f;
    pcs->vCheckCollisionShift.xZ *= 0.7f;
    pcs->vCollisionDirectionV.xX = pcs->vCheckCollisionShift.xX - pcs->xDistMax * pcs->vCameraSighting.xX;
    pcs->vCollisionDirectionV.xY = pcs->vCheckCollisionShift.xY - pcs->xDistMax * pcs->vCameraSighting.xY;
    pcs->vCollisionDirectionV.xZ = pcs->vCheckCollisionShift.xZ - pcs->xDistMax * pcs->vCameraSighting.xZ;
    fn_CollisionRayCast(pcs->pCamera, &vPos, &pcs->vCollisionDirectionV, 0);
    pcs->vCollisionPoint.xX = 0.0f;
    pcs->vCollisionPoint.xY = 0.0f;
    pcs->vCollisionPoint.xZ = 0.0f;
    pcs->xOldDistMax = pcs->xDistMax;
    if (g_stCollideResultPoint.xX != 0.0f || g_stCollideResultPoint.xY != 0.0f || g_stCollideResultPoint.xZ != 0.0f)
    {
        if (!pcs->hWaterGMT || g_hColMatHit != (int)pcs->hWaterGMT->hCollideMaterial)
        {
            pcs->xOldDistMax = sqrtf(
                (g_stCollideResultPoint.xX - vPos.xX) * (g_stCollideResultPoint.xX - vPos.xX) +
                (g_stCollideResultPoint.xY - vPos.xY) * (g_stCollideResultPoint.xY - vPos.xY) +
                (g_stCollideResultPoint.xZ - vPos.xZ) * (g_stCollideResultPoint.xZ - vPos.xZ));
            if (pcs->xOldDistMax < pcs->xDistMax)
                pcs->vCollisionPoint = g_stCollideResultPoint;
        }
    }
    pcs->vCheckCollisionShift.xX = -pcs->vCheckCollisionShift.xX;
    pcs->vCheckCollisionShift.xY = -pcs->vCheckCollisionShift.xY;
    pcs->vCheckCollisionShift.xZ = -pcs->vCheckCollisionShift.xZ;
    pcs->vCollisionDirectionV.xX = pcs->vCheckCollisionShift.xX - pcs->xDistMax * pcs->vCameraSighting.xX;
    pcs->vCollisionDirectionV.xY = pcs->vCheckCollisionShift.xY - pcs->xDistMax * pcs->vCameraSighting.xY;
    pcs->vCollisionDirectionV.xZ = pcs->vCheckCollisionShift.xZ - pcs->xDistMax * pcs->vCameraSighting.xZ;
    fn_CollisionRayCast(pcs->pCamera, &vPos, &pcs->vCollisionDirectionV, 0);
    if (g_stCollideResultPoint.xX != 0.0f || g_stCollideResultPoint.xY != 0.0f || g_stCollideResultPoint.xZ != 0.0f)
    {
        if (!pcs->hWaterGMT || g_hColMatHit != (int)pcs->hWaterGMT->hCollideMaterial)
        {
            vPos.xX = sqrtf(
                (g_stCollideResultPoint.xX - pcs->pTargetActor_position->xX) * (g_stCollideResultPoint.xX - pcs->pTargetActor_position->xX) +
                (g_stCollideResultPoint.xY - pcs->pTargetActor_position->xY) * (g_stCollideResultPoint.xY - pcs->pTargetActor_position->xY) +
                (g_stCollideResultPoint.xZ - pcs->pTargetActor_position->xZ - 1.5f) * (g_stCollideResultPoint.xZ - pcs->pTargetActor_position->xZ - 1.5f));
            if (vPos.xX < pcs->xOldDistMax)
            {
                pcs->xOldDistMax = vPos.xX;
                pcs->vCollisionPoint = g_stCollideResultPoint;
            }
        }
    }
    if (pcs->vCollisionPoint.xX != 0.0f || pcs->vCollisionPoint.xY != 0.0f || pcs->vCollisionPoint.xZ != 0.0f)
    {
        pcs->xOldDistMax -= 0.6f;
        if (pcs->xOldDistMax < 1.3f)
            pcs->xOldDistMax = 1.3f;
        pcs->xDistMax = pcs->xOldDistMax;
        if (pcs->xDistMax < 2.0f)
        {
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
            CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwDNMFlags, &hCineInfo->hVisibility->uwDNMFlags, &hCineInfo->hWork->uwDNMFlags, 0, 1, 0x4000);
        }
    }

    if (pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport != pcs->pMAComport_Climb &&
        pcs->pTargetActor->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stIntelligence->p_stCurrentComport != pcs->pMAComport_Hang &&
        pcs->xTheta_Current < pcs->xTheta_Default)
    {
        vPos.xX = 3.0f + (pcs->xDistMax_Default - 3.0f) * ((pcs->xTheta_Current - pcs->xTheta_Min) / (pcs->xTheta_Default - pcs->xTheta_Min));
        if (pcs->xDistMax > vPos.xX)
            pcs->xDistMax = vPos.xX;
    }
    if (pcs->xDistMax < 4.0f && pcs->vCollisionPoint.xZ > 0.0f)
    {
        vPos = hCineInfo->hCurrent->stShiftTarget;
        vPos.xZ += (4.0f - pcs->xDistMax) / 3.0f;
        fn_ChangeCameraVectorParameter(hCineInfo, (tdeProcedureId_)0x23B, 1, 1, &vPos);
    }
    fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x23C, 0, 1, pcs->xDistMax);
    fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x23D, 0, 1, pcs->xDistMax);
    fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x242, 0, 1, pcs->xTheta_Current);
    fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x240, 0, 1, pcs->xAlpha_User);

    if (pcs->bMouseDriven && fabsf((float)lInputAxisY) > 400.0f)
    {
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x247, 1, 1, 290.0f);
        fn_ChangeCameraRealParameter(hCineInfo, (tdeProcedureId_)0x244, 1, 1, 290.0f);
        vPos.xX = pcs->pTargetActor_position->xX + hCineInfo->hWork->stShiftTarget.xX;
        vPos.xY = pcs->pTargetActor_position->xY + hCineInfo->hWork->stShiftTarget.xY;
        vPos.xZ = pcs->pTargetActor_position->xZ + hCineInfo->hWork->stShiftTarget.xZ;
        fn_GetPersoNegativeSighting(&pcs->vDirection, pcs->pTargetActor);
        fn_GetPersoHorizon(&pcs->vCheckCollisionShift, pcs->pTargetActor);
        pcs->vDirection.xX *= pcs->xDistMax;
        pcs->vDirection.xY *= pcs->xDistMax;
        pcs->vDirection.xZ *= pcs->xDistMax;
        fn_RotateVectorByAngle(&pcs->vDirection, pcs->xTheta_Current, &pcs->vCheckCollisionShift);
        fn_RotateVectorByAngle(&pcs->vDirection, pcs->xAlpha_User, &vVectorZ);
        hCineInfo->stForcePosition.xX = vPos.xX + pcs->vDirection.xX;
        hCineInfo->stForcePosition.xY = vPos.xY + pcs->vDirection.xY;
        hCineInfo->stForcePosition.xZ = vPos.xZ + pcs->vDirection.xZ;
        CAM_fn_vSetResetInternalFlag(hCineInfo, &hCineInfo->hCurrent->uwIAFlags, &hCineInfo->hVisibility->uwIAFlags, &hCineInfo->hWork->uwIAFlags, 0, 1, 0x4000);
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 737–875 */
/* addr: 0x00248ca0  size: 716 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 742
 *   +0x0010 -> line 737
 *   +0x0014 -> line 738
 *   +0x0018 -> line 739
 *   +0x001c -> line 742
 *   +0x0040 -> line 746
 *   +0x0044 -> line 747
 *   +0x0048 -> line 748
 *   +0x004c -> line 749
 *   +0x0050 -> line 746
 *   +0x0054 -> line 747
 *   +0x0058 -> line 748
 *   +0x005c -> line 750
 *   +0x0064 -> line 753
 *   +0x0068 -> line 754
 *   +0x006c -> line 755
 *   +0x0070 -> line 756
 *   +0x0074 -> line 753
 *   +0x0078 -> line 754
 *   +0x007c -> line 755
 *   +0x0080 -> line 757
 *   +0x0088 -> line 760
 *   +0x008c -> line 761
 *   +0x0090 -> line 762
 *   +0x0094 -> line 763
 *   +0x0098 -> line 760
 *   +0x009c -> line 761
 *   +0x00a0 -> line 762
 *   +0x00a4 -> line 764
 *   +0x00ac -> line 768
 *   +0x00b0 -> line 769
 *   +0x00b4 -> line 770
 *   +0x00b8 -> line 771
 *   +0x00bc -> line 768
 *   +0x00c0 -> line 769
 *   +0x00c4 -> line 770
 *   +0x00c8 -> line 772
 *   +0x00d0 -> line 776
 *   +0x00d4 -> line 777
 *   +0x00d8 -> line 778
 *   +0x00dc -> line 779
 *   +0x00e0 -> line 776
 *   +0x00e4 -> line 777
 *   +0x00e8 -> line 778
 *   +0x00ec -> line 780
 *   +0x00f4 -> line 783
 *   +0x00f8 -> line 784
 *   +0x00fc -> line 785
 *   +0x0100 -> line 786
 *   +0x0104 -> line 783
 *   +0x0108 -> line 784
 *   +0x010c -> line 785
 *   +0x0110 -> line 787
 *   +0x0118 -> line 790
 *   +0x011c -> line 791
 *   +0x0120 -> line 792
 *   +0x0124 -> line 793
 *   +0x0128 -> line 790
 *   +0x012c -> line 791
 *   +0x0130 -> line 792
 *   +0x0134 -> line 794
 *   +0x013c -> line 797
 *   +0x0140 -> line 798
 *   +0x0144 -> line 799
 *   +0x0148 -> line 800
 *   +0x014c -> line 797
 *   +0x0150 -> line 798
 *   +0x0154 -> line 799
 *   +0x0158 -> line 801
 *   +0x0160 -> line 804
 *   +0x0164 -> line 805
 *   +0x0168 -> line 806
 *   +0x016c -> line 807
 *   +0x0170 -> line 804
 *   +0x0174 -> line 805
 *   +0x0178 -> line 806
 *   +0x017c -> line 808
 *   +0x0184 -> line 811
 *   +0x0188 -> line 812
 *   +0x018c -> line 813
 *   +0x0190 -> line 814
 *   +0x0194 -> line 811
 *   +0x0198 -> line 812
 *   +0x019c -> line 813
 *   +0x01a0 -> line 815
 *   +0x01a8 -> line 818
 *   +0x01ac -> line 819
 *   +0x01b0 -> line 820
 *   +0x01b4 -> line 821
 *   +0x01b8 -> line 818
 *   +0x01bc -> line 819
 *   +0x01c0 -> line 820
 *   +0x01c4 -> line 822
 *   +0x01cc -> line 825
 *   +0x01d0 -> line 826
 *   +0x01d4 -> line 827
 *   +0x01d8 -> line 828
 *   +0x01dc -> line 825
 *   +0x01e0 -> line 826
 *   +0x01e4 -> line 827
 *   +0x01e8 -> line 829
 *   +0x01f0 -> line 832
 *   +0x01f4 -> line 833
 *   +0x01f8 -> line 834
 *   +0x01fc -> line 835
 *   +0x0200 -> line 832
 *   +0x0204 -> line 833
 *   +0x0208 -> line 834
 *   +0x020c -> line 836
 *   +0x0214 -> line 839
 *   +0x0218 -> line 840
 *   +0x021c -> line 841
 *   +0x0220 -> line 842
 *   +0x0224 -> line 839
 *   +0x0228 -> line 840
 *   +0x022c -> line 841
 *   +0x0230 -> line 843
 *   +0x0238 -> line 846
 *   +0x023c -> line 847
 *   +0x0240 -> line 848
 *   +0x0244 -> line 849
 *   +0x0248 -> line 846
 *   +0x024c -> line 847
 *   +0x0250 -> line 848
 *   +0x0254 -> line 850
 *   +0x025c -> line 853
 *   +0x0260 -> line 854
 *   +0x0264 -> line 855
 *   +0x0268 -> line 856
 *   +0x026c -> line 853
 *   +0x0270 -> line 854
 *   +0x0274 -> line 855
 *   +0x0278 -> line 857
 *   +0x0280 -> line 860
 *   +0x0284 -> line 861
 *   +0x0288 -> line 862
 *   +0x028c -> line 863
 *   +0x0290 -> line 860
 *   +0x0294 -> line 861
 *   +0x0298 -> line 862
 *   +0x029c -> line 864
 *   +0x02a4 -> line 867
 *   +0x02a8 -> line 868
 *   +0x02ac -> line 869
 *   +0x02b0 -> line 870
 *   +0x02b4 -> line 867
 *   +0x02b8 -> line 868
 *   +0x02bc -> line 869
 *   +0x02c0 -> line 870
 *   +0x02c4 -> line 875
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern void CAM_fn_vChangeARealParameter(tdstCineinfo_* _hCineInfo, float* _p_xInitialValue, float* _p_xCurrentValue, float* _p_xVisibilityValue, float* _p_xWorkValue, int _lTypeOfChange, int _lChangingMode, float _xValue);

void fn_ChangeCameraRealParameter(tdstCineinfo_* hCineInfo, tdeProcedureId_ eProcedureId, int lTypeOfChange, int lChangingMode, float xValue)
{
    float* p_xWorkValue;
    float* p_xVisibilityValue;
    float* p_xCurrentValue;
    float* p_xInitialValue;

    p_xInitialValue = NULL;
    p_xCurrentValue = NULL;
    p_xVisibilityValue = NULL;
    p_xWorkValue = NULL;

    switch (eProcedureId)
    {
    case 0x23C:
        p_xInitialValue = &hCineInfo->hInit->xDistMin;
        p_xCurrentValue = &hCineInfo->hCurrent->xDistMin;
        p_xVisibilityValue = &hCineInfo->hVisibility->xDistMin;
        p_xWorkValue = &hCineInfo->hWork->xDistMin;
        break;
    case 0x23D:
        p_xInitialValue = &hCineInfo->hInit->xDistMax;
        p_xCurrentValue = &hCineInfo->hCurrent->xDistMax;
        p_xVisibilityValue = &hCineInfo->hVisibility->xDistMax;
        p_xWorkValue = &hCineInfo->hWork->xDistMax;
        break;
    case 0x23E:
        p_xInitialValue = &hCineInfo->hInit->xBoundDistMin;
        p_xCurrentValue = &hCineInfo->hCurrent->xBoundDistMin;
        p_xVisibilityValue = &hCineInfo->hVisibility->xBoundDistMin;
        p_xWorkValue = &hCineInfo->hWork->xBoundDistMin;
        break;
    case 0x23F:
        p_xInitialValue = &hCineInfo->hInit->xBoundDistMax;
        p_xCurrentValue = &hCineInfo->hCurrent->xBoundDistMax;
        p_xVisibilityValue = &hCineInfo->hVisibility->xBoundDistMax;
        p_xWorkValue = &hCineInfo->hWork->xBoundDistMax;
        break;
    case 0x240:
        p_xInitialValue = &hCineInfo->hInit->xAngleAlpha;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngleAlpha;
        p_xVisibilityValue = &hCineInfo->hVisibility->xAngleAlpha;
        p_xWorkValue = &hCineInfo->hWork->xAngleAlpha;
        break;
    case 0x241:
        p_xInitialValue = &hCineInfo->hInit->xAngleShiftAlpha;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngleShiftAlpha;
        p_xVisibilityValue = &hCineInfo->hVisibility->xAngleShiftAlpha;
        p_xWorkValue = &hCineInfo->hWork->xAngleShiftAlpha;
        break;
    case 0x242:
        p_xInitialValue = &hCineInfo->hInit->xAngleTheta;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngleTheta;
        p_xVisibilityValue = &hCineInfo->hVisibility->xAngleTheta;
        p_xWorkValue = &hCineInfo->hWork->xAngleTheta;
        break;
    case 0x243:
        p_xInitialValue = &hCineInfo->hInit->xAngleShiftTheta;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngleShiftTheta;
        p_xVisibilityValue = &hCineInfo->hVisibility->xAngleShiftTheta;
        p_xWorkValue = &hCineInfo->hWork->xAngleShiftTheta;
        break;
    case 0x244:
        p_xInitialValue = &hCineInfo->hInit->xLinearSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xLinearSpeed;
        p_xVisibilityValue = &hCineInfo->hVisibility->xLinearSpeed;
        p_xWorkValue = &hCineInfo->hWork->xLinearSpeed;
        break;
    case 0x245:
        p_xInitialValue = &hCineInfo->hInit->xLinearIncreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xLinearIncreaseSpeed;
        p_xVisibilityValue = &hCineInfo->hVisibility->xLinearIncreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xLinearIncreaseSpeed;
        break;
    case 0x246:
        p_xInitialValue = &hCineInfo->hInit->xLinearDecreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xLinearDecreaseSpeed;
        p_xVisibilityValue = &hCineInfo->hVisibility->xLinearDecreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xLinearDecreaseSpeed;
        break;
    case 0x247:
        p_xInitialValue = &hCineInfo->hInit->xAngularSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngularSpeed;
        p_xVisibilityValue = &hCineInfo->hVisibility->xAngularSpeed;
        p_xWorkValue = &hCineInfo->hWork->xAngularSpeed;
        break;
    case 0x248:
        p_xInitialValue = &hCineInfo->hInit->xAngularIncreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngularIncreaseSpeed;
        p_xVisibilityValue = &hCineInfo->hVisibility->xAngularIncreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xAngularIncreaseSpeed;
        break;
    case 0x249:
        p_xInitialValue = &hCineInfo->hInit->xAngularDecreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xAngularDecreaseSpeed;
        p_xVisibilityValue = &hCineInfo->hVisibility->xAngularDecreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xAngularDecreaseSpeed;
        break;
    case 0x24A:
        p_xInitialValue = &hCineInfo->hInit->xTargetSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xTargetSpeed;
        p_xVisibilityValue = &hCineInfo->hVisibility->xTargetSpeed;
        p_xWorkValue = &hCineInfo->hWork->xTargetSpeed;
        break;
    case 0x24B:
        p_xInitialValue = &hCineInfo->hInit->xTargetIncreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xTargetIncreaseSpeed;
        p_xVisibilityValue = &hCineInfo->hVisibility->xTargetIncreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xTargetIncreaseSpeed;
        break;
    case 0x24C:
        p_xInitialValue = &hCineInfo->hInit->xTargetDecreaseSpeed;
        p_xCurrentValue = &hCineInfo->hCurrent->xTargetDecreaseSpeed;
        p_xVisibilityValue = &hCineInfo->hVisibility->xTargetDecreaseSpeed;
        p_xWorkValue = &hCineInfo->hWork->xTargetDecreaseSpeed;
        break;
    case 0x24D:
        p_xInitialValue = &hCineInfo->hInit->xFocal;
        p_xCurrentValue = &hCineInfo->hCurrent->xFocal;
        p_xVisibilityValue = &hCineInfo->hVisibility->xFocal;
        p_xWorkValue = &hCineInfo->hWork->xFocal;
        break;
    }

    CAM_fn_vChangeARealParameter(hCineInfo, p_xInitialValue, p_xCurrentValue, p_xVisibilityValue, p_xWorkValue, lTypeOfChange, lChangingMode, xValue);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 708–730 */
/* addr: 0x00248f70  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x000c -> line 713
 *   +0x0010 -> line 708
 *   +0x0014 -> line 709
 *   +0x0018 -> line 710
 *   +0x001c -> line 713
 *   +0x0038 -> line 717
 *   +0x003c -> line 718
 *   +0x0040 -> line 719
 *   +0x0044 -> line 720
 *   +0x004c -> line 723
 *   +0x0050 -> line 725
 *   +0x0054 -> line 726
 *   +0x0058 -> line 724
 *   +0x005c -> line 723
 *   +0x0060 -> line 725
 *   +0x0064 -> line 726
 *   +0x0068 -> line 724
 *   +0x006c -> line 730
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_ChangeCameraVectorParameter(tdstCineinfo_* hCineInfo, tdeProcedureId_ eProcedureId, int lTypeOfChange, int lChangingMode, MTH3D_tdstVector_* p_stValue)
{
    MTH3D_tdstVector_* p_vWorkVectorValue;
    MTH3D_tdstVector_* p_vVisibilityVectorValue;
    MTH3D_tdstVector_* p_vCurrentVectorValue;
    MTH3D_tdstVector_* p_vInitialVectorValue;

    p_vInitialVectorValue = NULL;
    p_vCurrentVectorValue = NULL;
    p_vVisibilityVectorValue = NULL;
    p_vWorkVectorValue = NULL;

    switch (eProcedureId)
    {
    case 0x23A:
        p_vInitialVectorValue = &hCineInfo->hInit->stShiftTarget;
        p_vCurrentVectorValue = &hCineInfo->hCurrent->stShiftTarget;
        p_vVisibilityVectorValue = &hCineInfo->hVisibility->stShiftTarget;
        p_vWorkVectorValue = &hCineInfo->hWork->stShiftTarget;
        break;
    case 0x23B:
        p_vInitialVectorValue = &hCineInfo->hInit->stShiftPos;
        p_vCurrentVectorValue = &hCineInfo->hCurrent->stShiftPos;
        p_vVisibilityVectorValue = &hCineInfo->hVisibility->stShiftPos;
        p_vWorkVectorValue = &hCineInfo->hWork->stShiftPos;
        break;
    }

    CAM_fn_vChangeAVectorParameter(hCineInfo, p_vInitialVectorValue, p_vCurrentVectorValue, p_vVisibilityVectorValue, p_vWorkVectorValue, lTypeOfChange, lChangingMode, p_stValue);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 657–691 */
/* addr: 0x00248ff0  size: 368 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 657
 *   +0x0008 -> line 661
 *   +0x0020 -> line 664
 *   +0x0024 -> line 662
 *   +0x0028 -> line 664
 *   +0x0034 -> line 662
 *   +0x003c -> line 666
 *   +0x0040 -> line 662
 *   +0x0044 -> line 667
 *   +0x0048 -> line 663
 *   +0x004c -> line 665
 *   +0x0050 -> line 663
 *   +0x0054 -> line 666
 *   +0x005c -> line 667
 *   +0x0064 -> line 665
 *   +0x006c -> line 668
 *   +0x0070 -> line 669
 *   +0x0078 -> line 670
 *   +0x0080 -> line 671
 *   +0x0084 -> line 670
 *   +0x0088 -> line 671
 *   +0x0090 -> line 672
 *   +0x0094 -> line 671
 *   +0x0098 -> line 672
 *   +0x00a4 -> line 673
 *   +0x00a8 -> line 674
 *   +0x00ac -> line 673
 *   +0x00b0 -> line 674
 *   +0x00b8 -> line 675
 *   +0x00c4 -> line 673
 *   +0x00cc -> line 676
 *   +0x00d4 -> line 682
 *   +0x00e8 -> line 683
 *   +0x00ec -> line 682
 *   +0x00f8 -> line 683
 *   +0x0104 -> line 685
 *   +0x0108 -> line 684
 *   +0x010c -> line 685
 *   +0x0110 -> line 684
 *   +0x0114 -> line 683
 *   +0x011c -> line 684
 *   +0x0124 -> line 685
 *   +0x012c -> line 683
 *   +0x0134 -> line 684
 *   +0x0144 -> line 685
 *   +0x014c -> line 679
 *   +0x015c -> line 680
 *   +0x0164 -> line 691
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_InitCSH_Common(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 628–645 */
/* addr: 0x00249160  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 628
 *   +0x0008 -> line 635
 *   +0x0014 -> line 636
 *   +0x001c -> line 638
 *   +0x0028 -> line 639
 *   +0x0034 -> line 641
 *   +0x003c -> line 645
 *   +0x0040 -> line 643
 *   +0x0044 -> line 645
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);

tdstNodeInterpret_* fn_p_SetGCubeVersion(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stValue;






    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    bGCubeVersion = stValue.uDummy.uParam.ulValue;

    if (bGCubeVersion)
        xCameraDelayAlign = 500.0f;
    else
        xCameraDelayAlign = 2000.0f;

    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 593–624 */
/* addr: 0x002491b0  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 593
 *   +0x0008 -> line 600
 *   +0x000c -> line 593
 *   +0x001c -> line 600
 *   +0x0028 -> line 601
 *   +0x0034 -> line 603
 *   +0x003c -> line 601
 *   +0x0040 -> line 603
 *   +0x0048 -> line 606
 *   +0x004c -> line 603
 *   +0x0050 -> line 608
 *   +0x0054 -> line 610
 *   +0x0058 -> line 608
 *   +0x005c -> line 606
 *   +0x0060 -> line 604
 *   +0x0064 -> line 606
 *   +0x0068 -> line 608
 *   +0x0088 -> line 610
 *   +0x00b0 -> line 611
 *   +0x00bc -> line 622
 *   +0x00c0 -> line 624
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_SetSkin(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    int iSkinIndex;
    HIE_tdstSuperObject_* pSkin;
    CAM_Shooter_* pcs;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 558–589 */
/* addr: 0x00249290  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 558
 *   +0x0008 -> line 569
 *   +0x000c -> line 558
 *   +0x001c -> line 569
 *   +0x0028 -> line 570
 *   +0x0034 -> line 572
 *   +0x0038 -> line 574
 *   +0x0040 -> line 576
 *   +0x0048 -> line 572
 *   +0x0050 -> line 574
 *   +0x0070 -> line 576
 *   +0x0078 -> line 577
 *   +0x0088 -> line 578
 *   +0x0090 -> line 579
 *   +0x00a0 -> line 580
 *   +0x00a8 -> line 581
 *   +0x00b0 -> line 582
 *   +0x00b4 -> line 581
 *   +0x00b8 -> line 582
 *   +0x00c8 -> line 584
 *   +0x00d0 -> line 585
 *   +0x00d8 -> line 587
 *   +0x00dc -> line 589
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_RemoveMainActor(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* pMainActor;
    int bFound;
    int k;
    CAM_Shooter_* pcs;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 532–552 */
/* addr: 0x00249390  size: 192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 532
 *   +0x0008 -> line 538
 *   +0x000c -> line 532
 *   +0x0018 -> line 538
 *   +0x0024 -> line 539
 *   +0x0030 -> line 541
 *   +0x0034 -> line 539
 *   +0x0038 -> line 543
 *   +0x003c -> line 545
 *   +0x0040 -> line 543
 *   +0x0044 -> line 541
 *   +0x004c -> line 543
 *   +0x006c -> line 545
 *   +0x008c -> line 546
 *   +0x0098 -> line 547
 *   +0x00a4 -> line 550
 *   +0x00a8 -> line 552
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_AddMainActor(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* pMainActor;
    CAM_Shooter_* pcs;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 391–450 */
/* addr: 0x00249450  size: 684 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 391
 *   +0x0024 -> line 401
 *   +0x0028 -> line 406
 *   +0x0040 -> line 408
 *   +0x0044 -> line 410
 *   +0x004c -> line 413
 *   +0x0058 -> line 408
 *   +0x0064 -> line 410
 *   +0x0084 -> line 413
 *   +0x008c -> line 416
 *   +0x0090 -> line 413
 *   +0x0094 -> line 416
 *   +0x00c0 -> line 421
 *   +0x00c4 -> line 416
 *   +0x00d0 -> line 421
 *   +0x0110 -> line 424
 *   +0x0120 -> line 425
 *   +0x0150 -> line 426
 *   +0x0158 -> line 429
 *   +0x0168 -> line 430
 *   +0x019c -> line 431
 *   +0x01a4 -> line 434
 *   +0x01b4 -> line 435
 *   +0x01e8 -> line 436
 *   +0x01f0 -> line 439
 *   +0x0200 -> line 440
 *   +0x0234 -> line 441
 *   +0x023c -> line 444
 *   +0x0250 -> line 445
 *   +0x0288 -> line 449
 *   +0x028c -> line 450
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_RegisterDesignVar(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    HIE_tdstSuperObject_* hCamera;
    tdeProcedureId_ eProcedureId;
    AI_tdstMind_* param0;
    unsigned char ucVarId;
    CAM_Shooter_* pCamShooter;
    unsigned char iCSVarId;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 375–385 */
/* addr: 0x00249700  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 375
 *   +0x0008 -> line 378
 *   +0x000c -> line 375
 *   +0x0010 -> line 378
 *   +0x001c -> line 379
 *   +0x0024 -> line 380
 *   +0x0034 -> line 381
 *   +0x0040 -> line 385
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetViewFinderVMT(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 349–369 */
/* addr: 0x00249750  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 349
 *   +0x001c -> line 358
 *   +0x0038 -> line 360
 *   +0x003c -> line 362
 *   +0x0044 -> line 360
 *   +0x0050 -> line 362
 *   +0x0074 -> line 364
 *   +0x009c -> line 365
 *   +0x00b0 -> line 367
 *   +0x00b4 -> line 365
 *   +0x00bc -> line 369
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetViewFinderDistance(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hCamera;
    CAM_Shooter_* pcs;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 308–344 */
/* addr: 0x00249830  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 308
 *   +0x0018 -> line 317
 *   +0x0034 -> line 319
 *   +0x0038 -> line 321
 *   +0x0040 -> line 323
 *   +0x004c -> line 319
 *   +0x0058 -> line 321
 *   +0x0078 -> line 323
 *   +0x0084 -> line 326
 *   +0x0088 -> line 324
 *   +0x008c -> line 326
 *   +0x009c -> line 327
 *   +0x00a0 -> line 329
 *   +0x00b4 -> line 330
 *   +0x00b8 -> line 332
 *   +0x00cc -> line 333
 *   +0x00d0 -> line 335
 *   +0x00e4 -> line 336
 *   +0x00e8 -> line 338
 *   +0x00fc -> line 339
 *   +0x0104 -> line 344
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetMainActorComports(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hCamera;
    tdstGetSetParam_ stValue;
    CAM_Shooter_* pcs;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 296–303 */
/* addr: 0x00249950  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 296
 *   +0x0004 -> line 300
 *   +0x0008 -> line 296
 *   +0x000c -> line 300
 *   +0x0010 -> line 296
 *   +0x001c -> line 298
 *   +0x002c -> line 300
 *   +0x0064 -> line 301
 *   +0x0068 -> line 303
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_StrafeLockMode(HIE_tdstSuperObject_* hCamera, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    CAM_Shooter_* pcs;

    hCineInfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;
    pcs = &a_stCamShooter[hCineInfo->hCurrent->eTypeOfViewport];
    *(int *)p_stValue = fn_StrafeLockMode(pcs);
    p_stValue->eType = 6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 279–292 */
/* addr: 0x002499d0  size: 1232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 279
 *   +0x0004 -> line 284
 *   +0x0008 -> line 279
 *   +0x000c -> line 286
 *   +0x0010 -> line 279
 *   +0x0014 -> line 284
 *   +0x0018 -> line 279
 *   +0x0024 -> line 286
 *   +0x0028 -> line 279
 *   +0x002c -> line 286
 *   +0x0030 -> line 283
 *   +0x0034 -> line 286
 *   +0x0040 -> line 283
 *   +0x0048 -> line 284
 *   +0x0054 -> line 286
 *   +0x0058 -> line 284
 *   +0x005c -> line 286
 *   +0x0060 -> line 284
 *   +0x0064 -> line 286
 *   +0x0068 -> line 284
 *   +0x0070 -> line 286
 *   +0x0074 -> line 284
 *   +0x0078 -> line 286
 *   +0x007c -> line 284
 *   +0x0080 -> line 286
 *   +0x04a0 -> line 288
 *   +0x04a4 -> line 290
 *   +0x04a8 -> line 286
 *   +0x04b0 -> line 288
 *   +0x04b4 -> line 292
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_InitStrafeLockMode(HIE_tdstSuperObject_* hCamera, tdstNodeInterpret_* p_stTree)
{
    CAM_Shooter_* pcs;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 267–274 */
/* addr: 0x00249ea0  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 267
 *   +0x0004 -> line 271
 *   +0x0008 -> line 267
 *   +0x000c -> line 271
 *   +0x0010 -> line 267
 *   +0x001c -> line 269
 *   +0x002c -> line 271
 *   +0x0064 -> line 272
 *   +0x0068 -> line 274
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_MarioMode(HIE_tdstSuperObject_* hCamera, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    CAM_Shooter_* pcs;

    hCineInfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;
    pcs = &a_stCamShooter[hCineInfo->hCurrent->eTypeOfViewport];
    *(int *)p_stValue = fn_MarioMode(pcs);
    p_stValue->eType = 6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 250–263 */
/* addr: 0x00249f20  size: 932 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 250
 *   +0x0004 -> line 255
 *   +0x0008 -> line 250
 *   +0x000c -> line 255
 *   +0x0010 -> line 250
 *   +0x0014 -> line 257
 *   +0x0018 -> line 250
 *   +0x0020 -> line 254
 *   +0x0024 -> line 257
 *   +0x002c -> line 254
 *   +0x0034 -> line 255
 *   +0x0058 -> line 257
 *   +0x037c -> line 259
 *   +0x0380 -> line 261
 *   +0x0384 -> line 257
 *   +0x038c -> line 259
 *   +0x0390 -> line 263
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_InitMarioMode(HIE_tdstSuperObject_* hCamera, tdstNodeInterpret_* p_stTree)
{
    CAM_Shooter_* pcs;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 237–246 */
/* addr: 0x0024a2d0  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 237
 *   +0x0004 -> line 242
 *   +0x0008 -> line 237
 *   +0x000c -> line 242
 *   +0x0010 -> line 237
 *   +0x001c -> line 240
 *   +0x002c -> line 242
 *   +0x0064 -> line 244
 *   +0x0068 -> line 246
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_BackMode(HIE_tdstSuperObject_* hCamera, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    CAM_Shooter_* pcs;

    hCineInfo = hCamera->hLinkedObject.p_stCharacter->h_Cineinfo;
    pcs = &a_stCamShooter[hCineInfo->hCurrent->eTypeOfViewport];
    *(int *)p_stValue = (long)fn_BackMode(pcs);
    p_stValue->eType = 6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 216–232 */
/* addr: 0x0024a350  size: 788 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 216
 *   +0x0004 -> line 224
 *   +0x0008 -> line 216
 *   +0x000c -> line 224
 *   +0x0010 -> line 216
 *   +0x0014 -> line 226
 *   +0x0018 -> line 216
 *   +0x0020 -> line 223
 *   +0x0024 -> line 226
 *   +0x0030 -> line 223
 *   +0x0038 -> line 224
 *   +0x005c -> line 226
 *   +0x02ec -> line 228
 *   +0x02f0 -> line 226
 *   +0x02f4 -> line 230
 *   +0x02f8 -> line 226
 *   +0x02fc -> line 228
 *   +0x0300 -> line 232
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_InitBackMode(HIE_tdstSuperObject_* hCamera, tdstNodeInterpret_* p_stTree)
{
    CAM_Shooter_* pcs;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 102–208 */
/* addr: 0x0024a670  size: 708 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 102
 *   +0x0018 -> line 118
 *   +0x0034 -> line 120
 *   +0x0038 -> line 122
 *   +0x0040 -> line 135
 *   +0x004c -> line 120
 *   +0x0058 -> line 122
 *   +0x007c -> line 126
 *   +0x0080 -> line 128
 *   +0x0088 -> line 130
 *   +0x0094 -> line 135
 *   +0x00a0 -> line 136
 *   +0x00ac -> line 139
 *   +0x00b0 -> line 136
 *   +0x00b4 -> line 139
 *   +0x00c4 -> line 140
 *   +0x00d0 -> line 143
 *   +0x00d4 -> line 140
 *   +0x00d8 -> line 143
 *   +0x00e4 -> line 144
 *   +0x00e8 -> line 147
 *   +0x00fc -> line 148
 *   +0x0100 -> line 151
 *   +0x0118 -> line 152
 *   +0x0120 -> line 156
 *   +0x0130 -> line 159
 *   +0x013c -> line 160
 *   +0x0144 -> line 163
 *   +0x014c -> line 164
 *   +0x0154 -> line 165
 *   +0x0160 -> line 167
 *   +0x0174 -> line 169
 *   +0x017c -> line 170
 *   +0x0194 -> line 174
 *   +0x01ac -> line 190
 *   +0x01b0 -> line 176
 *   +0x01b4 -> line 190
 *   +0x01b8 -> line 177
 *   +0x01bc -> line 179
 *   +0x01c0 -> line 181
 *   +0x01c4 -> line 183
 *   +0x01cc -> line 184
 *   +0x01d0 -> line 190
 *   +0x01f0 -> line 192
 *   +0x0208 -> line 193
 *   +0x020c -> line 194
 *   +0x0210 -> line 193
 *   +0x0214 -> line 194
 *   +0x022c -> line 196
 *   +0x0234 -> line 198
 *   +0x0238 -> line 197
 *   +0x023c -> line 198
 *   +0x0254 -> line 199
 *   +0x0268 -> line 202
 *   +0x0270 -> line 204
 *   +0x0274 -> line 206
 *   +0x0278 -> line 204
 *   +0x02ac -> line 208
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_InitCamShooter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    DNM_stDynamics* p_stDynamic;
    HIE_tdstSuperObject_* hCamera;
    GLD_tdstViewportAttributes_* _p_stViewport;
    tdstDynam_* h_Dynam;
    tdstGetSetParam_ stValue;
    CAM_Shooter_* pcs;
    /* TODO: decompile from asm/... */
}
