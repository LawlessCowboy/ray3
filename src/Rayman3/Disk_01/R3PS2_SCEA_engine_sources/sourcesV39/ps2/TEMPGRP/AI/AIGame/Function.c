/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
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
typedef struct type_0x23 type_0x23;
typedef struct type_0x83 type_0x83;
typedef union tduIdInterpret_ tduIdInterpret_;
typedef union tduGetSetParamForNode_ tduGetSetParamForNode_;
typedef union anon_1 anon_1;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef union tduGetSetParam_ tduGetSetParam_;
typedef struct anon_2 anon_2;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct _atexit _atexit;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct _RollOffParam _RollOffParam;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct stTfmtStatus_ stTfmtStatus_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct LST2_tdstAnchorToWP_tdHandleOfArcDyn LST2_tdstAnchorToWP_tdHandleOfArcDyn;
typedef struct LST2_tdstAnchorTotdxHandleToTransitionOpt LST2_tdstAnchorTotdxHandleToTransitionOpt;
typedef struct LST2_tdstAnchorTotdxHandleToProhibitOpt LST2_tdstAnchorTotdxHandleToProhibitOpt;
typedef struct tdstState_ tdstState_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct __sbuf __sbuf;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct anon_0 anon_0;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstActionTableEntry_ tdstActionTableEntry_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct stTfmtLineResults_ stTfmtLineResults_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct tdstTreeInterpret_ tdstTreeInterpret_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct stInfoTextAffiche_ stInfoTextAffiche_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef union anon_3 anon_3;
typedef struct _glue _glue;
typedef struct __sFILE __sFILE;
typedef struct _reent _reent;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstDsgVarInfo_ tdstDsgVarInfo_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct stMorphData stMorphData;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct _Bigint _Bigint;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct tdstTransition_ tdstTransition_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct anon_4 anon_4;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tm tm;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct tdstList_ tdstList_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct anon_7 anon_7;
typedef union RGBAStruct_ RGBAStruct_;

tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);
HIE_tdstSuperObject_* GAM_fn_hGetCurrentSector(HIE_tdstSuperObject_* _hCharacter);

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

typedef enum e_ucListViewport_ {
    CAM_e_NoViewport = -1,
} e_ucListViewport_;

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

typedef enum e_ucCameraStates_ {
    CAM_e_State_GoToOptimal = 0,
    CAM_e_State_GoToComputedOptimal = 1,
    CAM_e_State_FailureVisibility = 2,
    CAM_e_State_FailureVisibilityWithoutCut = 3,
    CAM_e_TempState_GhostMode = 4,
    CAM_e_TempState_ApexMode = 5,
} e_ucCameraStates_;

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

union tduIdInterpret_ {
    tdeCondId_ eCondId; /* +0x0 */
    tdeKeyWordId_ eKeyWordId; /* +0x0 */
    /*type_0x23*/ int eOperatorId; /* +0x0 */
    tdeFuncId_ eFuncId; /* +0x0 */
    tdeProcedureId_ eProcedureId; /* +0x0 */
    tdeFieldId_ eFieldId; /* +0x0 */
    tdeMetaActionId_ eMetaActionId; /* +0x0 */
    IPT_tdstEntryElement_* hInputAction; /* +0x0 */
};

union tduGetSetParamForNode_ {
    float xValue; /* +0x0 */
    int lValue; /* +0x0 */
    unsigned int ulValue; /* +0x0 */
    short wValue; /* +0x0 */
    unsigned short uwValue; /* +0x0 */
    char cValue; /* +0x0 */
    unsigned char ucValue; /* +0x0 */
    /*type_0x23*/ int ColorValue; /* +0x0 */
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

union anon_1 {
    tduIdInterpret_ uId; /* +0x0 */
    tduGetSetParamForNode_ uParam; /* +0x0 */
};

struct tdstNodeInterpret_ {
    anon_1 uDummy; /* +0x0 */
    unsigned short uwNodeToSkip; /* +0x4 */
    unsigned char ucDepth; /* +0x6 */
    unsigned char eType; /* +0x7 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
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

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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
    /*type_0x23*/ int hSkinMaterial; /* +0x1c4 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x1c8..0x1d3 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    short xSkinIndex[4]; /* +0x1d8 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct MTH_stMove {
    MTH3D_tdstVector_ m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
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
    /*type_0x23*/ int ColorValue; /* +0x0 */
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

struct anon_2 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_2 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

struct tdstComport_ {
    tdstTreeInterpret_* p_stRules; /* +0x0 */
    tdstTreeInterpret_* p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct WP_tdstWayPoint_ {
    MTH3D_tdstVector_ m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    HIE_tdstSuperObject_* m_hSuperObject; /* +0x10 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct _atexit {
    _atexit* _next; /* +0x0 */
    int _ind; /* +0x4 */
    int _fns[32]; /* +0x8 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
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

struct tdstAChannel_ {
    HIE_tdstSuperObject_* hSupObject; /* +0x0 */
    HIE_tdstSuperObject_* hZoomSupObject; /* +0x4 */
    tdstAChannel_* p_stNextActiveChannel; /* +0x8 */
    tdstAChannel_* p_stFatherChannel; /* +0xc */
    int ax_InterpolatedPositions[2]; /* +0x10 */
    unsigned char _extractor_padding_00[112]; /* explicit retail gap; +0x18..0x87 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
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

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    /*type_0x23*/ int p_stMorphObject; /* +0x0 */
};

struct stTfmtStatus_ {
    float xScreenWidth; /* +0x0 */
    float xBaseCharX; /* +0x4 */
    float xBaseCharZ; /* +0x8 */
    float xBaseToAddX; /* +0xc */
    float xRandomPosRadius; /* +0x10 */
    float xCharWidth; /* +0x14 */
    float xLineHeight; /* +0x18 */
    float xCharZoom; /* +0x1c */
    float xCurCharZoom; /* +0x20 */
    float xCurCharWidth; /* +0x24 */
    tdstObjectsTablesList_* hSourceObjectTable; /* +0x28 */
    char cJustificationMode; /* +0x2c */
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

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct LST2_tdstAnchorToWP_tdHandleOfArcDyn {
    WP_tdstArc_* hFirstElementDyn; /* +0x0 */
    WP_tdstArc_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToTransitionOpt {
    tdstTransition_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToProhibitOpt {
    /*type_0x23*/ int hFirstElementOpt; /* +0x0 */
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

struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstActionParam_ {
    tduGetSetParam_ a_uParam[8]; /* +0x0 */
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

struct stMACDPID {
    float m_xData0; /* +0x0 */
    MTH3D_tdstVector_ m_stData1; /* +0x4 */
    MTH3D_tdstVector_ m_stData2; /* +0x10 */
    MTH3D_tdstVector_ m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    /*type_0x23*/ int m_stData6; /* +0x34 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x38..0x43 */
    /*type_0x23*/ int m_stData7; /* +0x44 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x48..0x53 */
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

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct __sbuf {
    int _base; /* +0x0 */
    int _size; /* +0x4 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    HIE_tdstSuperObject_* hMechaCharacter; /* +0xc */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
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

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
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
    /*type_0x23*/ int hForObjectsTablesList; /* +0x24 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x28..0x2b */
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

struct GLI_tdstSpecificAttributesFor3D_ {
    GLI_tdstCamera_* p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct anon_0 {
    int iMagicPoints4Ray; /* +0x0 */
    int iMagicPointsMax4Ray; /* +0x4 */
    float xAirPoints4Ray; /* +0x8 */
    float xAirPointsMax4Ray; /* +0xc */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct tdstActionTableEntry_ {
    tdstActionParam_ stActionParam; /* +0x0 */
    tdstNodeInterpret_* p_stNode; /* +0x60 */
    unsigned char bUsed; /* +0x64 */
    unsigned char ucNumRule; /* +0x65 */
    unsigned char bUseDefaultActionReturn; /* +0x66 */
    unsigned char ucNewActionReturn; /* +0x67 */
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

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct stTfmtLineResults_ {
    short wStartChar; /* +0x0 */
    short wEndChar; /* +0x2 */
    MTH3D_tdstVector_ stLineOrigin; /* +0x4 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct tdstTreeInterpret_ {
    tdstNodeInterpret_* p_stNodeInterpret; /* +0x0 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct stInfoTextAffiche_ {
    int bFirstInit; /* +0x0 */
    unsigned int ulCurrentDelay; /* +0x4 */
    unsigned int ulTimer; /* +0x8 */
    unsigned int ulEvent; /* +0xc */
    short wCurrentLetterInString; /* +0x10 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct WP_tdstListOfArc_ {
    LST2_tdstAnchorToWP_tdHandleOfArcDyn m_hArc; /* +0x0 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    /*type_0x23*/ int p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
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

struct tdstMacro_ {
    tdstTreeInterpret_* p_stInitTree; /* +0x0 */
    tdstTreeInterpret_* p_stCurrentTree; /* +0x4 */
};

struct tdstIntelligence_ {
    tdstScriptAI_** p_p_stScriptAI; /* +0x0 */
    tdstNodeInterpret_* p_stCurrentSchedule; /* +0x4 */
    tdstComport_* p_stCurrentComport; /* +0x8 */
    tdstComport_* p_stPrevComport; /* +0xc */
    tdstActionTable_* p_stActionTable; /* +0x10 */
    unsigned int ulNoComportInit; /* +0x14 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct tdstDsgMem_ {
    tdstDsgVar_** p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct tdstScriptAI_ {
    tdstComport_* p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

union anon_3 {
    /*type_0x23*/ int _reent; /* +0x0 */
    /*type_0x23*/ int _unused; /* +0x0 */
};

struct _glue {
    _glue* _next; /* +0x0 */
    int _niobs; /* +0x4 */
    __sFILE* _iobs; /* +0x8 */
};

struct __sFILE {
    int _p; /* +0x0 */
    int _r; /* +0x4 */
    int _w; /* +0x8 */
    short _flags; /* +0xc */
    short _file; /* +0xe */
    __sbuf _bf; /* +0x10 */
    int _lbfsize; /* +0x18 */
    int _cookie; /* +0x1c */
    int (*_read)(void*, char*, int); /* +0x20 */
    int (*_write)(void*, char*, int); /* +0x24 */
    long (*_seek)(void*, long, int); /* +0x28 */
    int (*_close)(void*); /* +0x2c */
    __sbuf _ub; /* +0x30 */
    int _up; /* +0x38 */
    int _ur; /* +0x3c */
    unsigned char _ubuf[3]; /* +0x40 */
    unsigned char _nbuf[1]; /* +0x43 */
    __sbuf _lb; /* +0x44 */
    int _blksize; /* +0x4c */
    int _offset; /* +0x50 */
    _reent* _data; /* +0x54 */
};

struct _reent {
    int _errno; /* +0x0 */
    __sFILE* _stdin; /* +0x4 */
    __sFILE* _stdout; /* +0x8 */
    __sFILE* _stderr; /* +0xc */
    int _inc; /* +0x10 */
    char _emergency[25]; /* +0x14 */
    int _current_category; /* +0x30 */
    int _current_locale; /* +0x34 */
    int __sdidinit; /* +0x38 */
    void (*__cleanup)(_reent*); /* +0x3c */
    _Bigint* _result; /* +0x40 */
    int _result_k; /* +0x44 */
    _Bigint* _p5s; /* +0x48 */
    _Bigint** _freelist; /* +0x4c */
    int _cvtlen; /* +0x50 */
    int _cvtbuf; /* +0x54 */
    anon_3 _new; /* +0x58 */
    _atexit* _atexit; /* +0x148 */
    _atexit _atexit0; /* +0x14c */
    void (**_sig_func)(int); /* +0x1d4 */
    _glue __sglue; /* +0x1d8 */
    __sFILE __sf[3]; /* +0x1e4 */
};

struct tdstActionTable_ {
    tdstActionTableEntry_* p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct tdstDsgVarInfo_ {
    unsigned int ulOffsetInDsgMem; /* +0x0 */
    tdeDsgVarTypeId_ eDsgVarTypeId; /* +0x4 */
    unsigned short eSaveType; /* +0x8 */
    tdeObjectTreeInit_ eInitType; /* +0xc */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    tdstDsgVarInfo_* p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstLanguageStructure_ {
    /*type_0x23*/ int szLanguageCode; /* +0x0 */
    unsigned char _extractor_padding_00[16]; /* implicitly added by extractor; +0x4..0x13 */
    /*type_0x23*/ int szLanguageText; /* +0x14 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct _Bigint {
    _Bigint* _next; /* +0x0 */
    int _k; /* +0x4 */
    int _maxwds; /* +0x8 */
    int _sign; /* +0xc */
    int _wds; /* +0x10 */
    unsigned int _x[1]; /* +0x14 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct tdstTransition_ {
    tdstState_* h_TargetState; /* +0x0 */
    tdstState_* h_StateToGo; /* +0x4 */
    unsigned char ucLinkingType; /* +0x8 */
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

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct anon_4 {
    unsigned int _unused_rand; /* +0x0 */
    int _strtok_last; /* +0x4 */
    /*type_0x23*/ int _asctime_buf; /* +0x8 */
    unsigned char _extractor_padding_00[24]; /* implicitly added by extractor; +0xc..0x23 */
    /*type_0x23*/ int _localtime_buf; /* +0x24 */
    unsigned char _extractor_padding_01[32]; /* implicitly added by extractor; +0x28..0x47 */
    int _gamma_signgam; /* +0x48 */
    unsigned char _extractor_padding_02[4]; /* implicitly added by extractor; +0x4c..0x4f */
    int _rand_next; /* +0x50 */
};

struct tdstProhibit_ {
    tdstState_* h_ProhibitedState; /* +0x0 */
};

struct tm {
    int tm_sec; /* +0x0 */
    int tm_min; /* +0x4 */
    int tm_hour; /* +0x8 */
    int tm_mday; /* +0xc */
    int tm_mon; /* +0x10 */
    int tm_year; /* +0x14 */
    int tm_wday; /* +0x18 */
    int tm_yday; /* +0x1c */
    int tm_isdst; /* +0x20 */
};

struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt {
    tdstObjectsTablesList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct tdstList_ {
    unsigned char ucNbElt; /* +0x0 */
    unsigned char ucMaxSize; /* +0x1 */
    HIE_tdstSuperObject_** p_hTabElt; /* +0x4 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    /*type_0x23*/ int d_stMorphVector; /* +0x8 */
};

struct stInterpolatedPosition {
    float stRot[4]; /* +0x0 */
    float stRotSca[4]; /* +0x10 */
    MTH3D_tdstVector_ stPos; /* +0x20 */
    MTH3D_tdstVector_ stVecSca; /* +0x2c */
    float xPercent; /* +0x38 */
};

struct anon_5 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct anon_6 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct tdstListOfMacro_ {
    tdstMacro_* p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

struct anon_7 {
    int _nextf[30]; /* +0x0 */
    unsigned int _nmalloc[30]; /* +0x78 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

void MAT_fn_vRotateVector(MTH3D_tdstVector_* _p_stDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stSource);
void MAT_fn_vInvertRotation(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource);
void MAT_fn_vApplyOnVector(MTH3D_tdstVector_* _p_stDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stSource);
unsigned char IPO_fn_ucGetRLITableIndex(char* _szRLITableName);
unsigned char fn_ucGetFunctionUltraOperator(tdeFuncId_ eFuncId);
void fn_vGetUltraOperatorPerso(unsigned char bYouHaveRightToUseThisFunction, HIE_tdstSuperObject_* hCurrentSuperObjPerso, HIE_tdstSuperObject_** hNewSuperObjPerso);
char* fn_szGetStringFromTextOrStringParam(tdstGetSetParam_* p_stValue);
unsigned char GAM_MultiVP_fn_ucGetNumberOfPlayers(void);
unsigned char GAM_MultiVP_fn_ucGetMaxNumberOfPlayers(void);
unsigned char GAM_MultiVP_fn_vGetViewPortFromPlayer(HIE_tdstSuperObject_* hCameraTargetSO);
HIE_tdstSuperObject_* fn_h_StandardGameGetSuperObject(tdstStandardGame_* h_StdGame);
void WP_fnv_WayPoint_ComputeLocation(WP_tdstWayPoint_* _hWayPoint, MTH3D_tdstVector_* _p_stVertex);
unsigned int fn_ulR3GetEnvScoreWithRevisit(unsigned int ulIndE);
unsigned int fn_ulR3GetEnvNbCage(unsigned int ulIndE);

char* strstr(const char* _pszString, const char* _pszSubString);
unsigned int strlen(const char* _pszString);

unsigned int g_ulMode;
unsigned int g_ulCollideTimeCounter;
unsigned int g_ulTypeMode;
unsigned int g_ulOverRideRayTraceSpoMask;
int g_bReInitAllDynamicActors;
unsigned int g_MaxLinePerChapter;
float g_DistanceActMin;
float g_DistanceActMax;
int COLANTIBUG_hHandleOfCharacter;
char g_szDummyScore[6];
char g_szDummyDate[12];
/*type_0x23*/ int g_szDummy;
int g_hCharacterMaskedForResearch;
char g_CreditsPath[256];
/*type_0x23*/ int g_CreditsVariables;
int g_ppCreditsCurrentChapter;
int g_hColMatHit;
int g_hSuperObjectHit;
MTH3D_tdstVector_ g_stCollideResultVector;
MTH3D_tdstVector_ g_stCollideResultPoint;
MTH3D_tdstVector_ g_stCollideParameterVector;
MTH3D_tdstVector_ g_stCollideParameterPoint;
int MENU_g_bInversionVert;
int MENU_g_bInversionHor;
int GLI_g_50_or_60_HzMode;
tdstEngineStructure_ g_stEngineStructure;
HIE_tdstSuperObject_* gp_stInactiveDynamicWorld;
HIE_tdstSuperObject_* gp_stDynamicWorld;
int g_iNewImpulseTribe;
unsigned int g_xMask;
int HIE_gs_lCurrentFrame;
anon_0 stExtendDatas4Ray;
stInfoTextAffiche_ g_stInfoTextAffiche[30];
char TEXT_gc_ViewportFixed;
int gp_SuperObjPersoGenerated[30];
float TEXT_gaf_FloatParameters[10];
int TEXT_gai_IntParameters[10];
unsigned int g_ulSpoMask;
HIE_tdstSuperObject_* SECT_hFatherSector;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2983–2995 */
/* addr: 0x002120d0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2983
 *   +0x0014 -> line 2986
 *   +0x001c -> line 2993
 *   +0x0028 -> line 2994
 *   +0x002c -> line 2995
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_AGO_GetHandle(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int iHandle;
    iHandle = AGO3_dwGetLastHandle();
    *(int *)p_stValue = iHandle;
    *(int *)((char *)p_stValue + 0xc) = 6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2954–2969 */
/* addr: 0x00212110  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2954
 *   +0x0004 -> line 2956
 *   +0x0020 -> line 2959
 *   +0x0048 -> line 2960
 *   +0x0050 -> line 2962
 *   +0x007c -> line 2968
 *   +0x0080 -> line 2969
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_GetPadInversions(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId = *(tdeFuncId_ *)((char *)p_stTree - 8);

    switch (eFuncId)
    {

        case 0x6a:
            p_stValue->uDummy.uParam.xValue = MENU_g_bInversionHor ? -1.0f : 1.0f; p_stValue->eType = E_vt_Float;
            break;

        case 0x6b:
            p_stValue->uDummy.uParam.xValue = MENU_g_bInversionVert ? -1.0f : 1.0f; p_stValue->eType = E_vt_Float;
            break;

    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2919–2934 */
/* addr: 0x002121a0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2919
 *   +0x000c -> line 2923
 *   +0x0014 -> line 2932
 *   +0x0020 -> line 2934
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_FormatMC(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    *(int *)p_stValue = 0;
    *(int *)((char *)p_stValue + 0xc) = 6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2889–2889 */
/* addr: 0x002121d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2889
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stIsMcValid(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    return fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2872–2875 */
/* addr: 0x002121e0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2872
 *   +0x0008 -> line 2874
 *   +0x000c -> line 2875
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SFX_IsWaterCirclesPossible(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    *(int *)p_stValue = 0;
    *(int *)((char *)p_stValue + 0xc) = 6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2842–2845 */
/* addr: 0x00212200  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2842
 *   +0x0008 -> line 2844
 *   +0x000c -> line 2845
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SFX_IsLightReflectionPossible(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    *(int *)p_stValue = 0;
    *(int *)((char *)p_stValue + 0xc) = 6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2812–2815 */
/* addr: 0x00212220  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2812
 *   +0x0008 -> line 2814
 *   +0x000c -> line 2815
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SFX_GetWaterCirclesStatus(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    *(int *)p_stValue = 0;
    *(int *)((char *)p_stValue + 0xc) = 6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2788–2791 */
/* addr: 0x00212240  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2788
 *   +0x0008 -> line 2790
 *   +0x000c -> line 2791
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SFX_GetLightReflectionStatus(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    *(int *)p_stValue = 0;
    *(int *)((char *)p_stValue + 0xc) = 6;
    return p_stTree;
}

void GLI_vSinusEffetOn3DVertex(MTH3D_tdstVector_* p_stIn, MTH3D_tdstVector_* p_stOut);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2753–2767 */
/* addr: 0x00212260  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2753
 *   +0x0010 -> line 2757
 *   +0x0018 -> line 2758
 *   +0x0024 -> line 2757
 *   +0x0028 -> line 2758
 *   +0x002c -> line 2761
 *   +0x0030 -> line 2758
 *   +0x0038 -> line 2761
 *   +0x0040 -> line 2764
 *   +0x0048 -> line 2766
 *   +0x004c -> line 2764
 *   +0x0064 -> line 2767
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SinusEffect_GetPosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    union { MTH3D_tdstVector_ stVector; unsigned int a3_ulWord[3]; } uVector;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    uVector.stVector = p_stValue->uDummy.uParam.stVectorValue;
    GLI_vSinusEffetOn3DVertex(&uVector.stVector, &uVector.stVector);
    ((unsigned int*)p_stValue)[0] = uVector.a3_ulWord[0];
    ((unsigned int*)p_stValue)[1] = uVector.a3_ulWord[1];
    ((unsigned int*)p_stValue)[2] = uVector.a3_ulWord[2];
    p_stValue->eType = E_vt_Vector;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2716–2738 */
/* addr: 0x002122e0  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2716
 *   +0x0020 -> line 2724
 *   +0x002c -> line 2725
 *   +0x0034 -> line 2727
 *   +0x0038 -> line 2725
 *   +0x003c -> line 2727
 *   +0x0060 -> line 2732
 *   +0x00ac -> line 2736
 *   +0x00b0 -> line 2732
 *   +0x00b4 -> line 2736
 *   +0x00bc -> line 2737
 *   +0x00c0 -> line 2738
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stOperatorGetPerso(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, HIE_tdstSuperObject_** hSuperObjPersoFound);
short fn_wBbDeclareVariable2Monitor(void* p_pvVar, int lType, char* szName, int lFlag);

tdstNodeInterpret_* fn_p_stMonitoringSetVariable(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    long lChannel;
    char* szVarName;
    tdstGetSetParam_ stValue;
    tdstDsgMem_* p_stDsgMem;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    szVarName = fn_szGetStringFromTextOrStringParam(&stValue);
    if (p_stTree->eType == 2)
    {
        p_stTree = fn_p_stOperatorGetPerso(p_SuperObjPerso, p_stTree + 1, &p_stResultOwnerPerso);
    }
    else
    {
        p_stResultOwnerPerso = p_SuperObjPerso;
    }
    p_stDsgMem = p_stResultOwnerPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind->p_stDsgMem;
    lChannel = fn_wBbDeclareVariable2Monitor((void*)(p_stDsgMem->p_cDsgMemBuffer + (*p_stDsgMem->p_p_stDsgVar)->p_stDsgVarInfo[p_stTree->uDummy.uParam.ucValue].ulOffsetInDsgMem), 4, szVarName, 1);
    p_stValue->uDummy.uParam.lValue = lChannel;
    p_stValue->eType = (tdeVariableType_)6;
    return p_stTree + 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2682–2703 */
/* addr: 0x002123c0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2682
 *   +0x0004 -> line 2689
 *   +0x0018 -> line 2696
 *   +0x0024 -> line 2702
 *   +0x0028 -> line 2703
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMCFunc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    eFuncId = *(tdeFuncId_ *)((char *)p_stTree - 8);
    switch (eFuncId)
    {
        case 0x1b5:
            p_stValue->uDummy.uParam.lValue = 0; p_stValue->eType = (tdeVariableType_)6;
            break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2654–2675 */
/* addr: 0x002123f0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2654
 *   +0x0004 -> line 2661
 *   +0x0018 -> line 2668
 *   +0x0028 -> line 2674
 *   +0x002c -> line 2675
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stScreenFunctions(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    eFuncId = *(tdeFuncId_ *)((char *)p_stTree - 8);
    switch (eFuncId)
    {
        case 0x1b4:
            p_stValue->uDummy.uParam.lValue = GLI_g_50_or_60_HzMode; p_stValue->eType = (tdeVariableType_)6;
            break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2587–2641 */
/* addr: 0x00212430  size: 604 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2587
 *   +0x0004 -> line 2595
 *   +0x0008 -> line 2587
 *   +0x0028 -> line 2597
 *   +0x002c -> line 2587
 *   +0x0034 -> line 2588
 *   +0x0038 -> line 2595
 *   +0x003c -> line 2597
 *   +0x0044 -> line 2598
 *   +0x0048 -> line 2599
 *   +0x0058 -> line 2601
 *   +0x0084 -> line 2605
 *   +0x0090 -> line 2606
 *   +0x0094 -> line 2605
 *   +0x0098 -> line 2606
 *   +0x00a4 -> line 2607
 *   +0x00a8 -> line 2606
 *   +0x00ac -> line 2607
 *   +0x00b4 -> line 2608
 *   +0x00c4 -> line 2609
 *   +0x00cc -> line 2608
 *   +0x00d0 -> line 2609
 *   +0x00d8 -> line 2610
 *   +0x00dc -> line 2609
 *   +0x00e0 -> line 2610
 *   +0x00f4 -> line 2612
 *   +0x0118 -> line 2613
 *   +0x0120 -> line 2617
 *   +0x012c -> line 2618
 *   +0x013c -> line 2619
 *   +0x0144 -> line 2618
 *   +0x0148 -> line 2619
 *   +0x0150 -> line 2620
 *   +0x0160 -> line 2621
 *   +0x0168 -> line 2620
 *   +0x016c -> line 2621
 *   +0x0174 -> line 2622
 *   +0x0178 -> line 2621
 *   +0x017c -> line 2622
 *   +0x0188 -> line 2624
 *   +0x018c -> line 2622
 *   +0x0194 -> line 2624
 *   +0x01b8 -> line 2625
 *   +0x01c0 -> line 2629
 *   +0x01cc -> line 2630
 *   +0x01d0 -> line 2631
 *   +0x01e0 -> line 2632
 *   +0x01e4 -> line 2631
 *   +0x01e8 -> line 2632
 *   +0x01f4 -> line 2634
 *   +0x01fc -> line 2632
 *   +0x0204 -> line 2634
 *   +0x021c -> line 2639
 *   +0x0220 -> line 2640
 *   +0x0224 -> line 2639
 *   +0x0234 -> line 2641
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stFFBFunctions(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned int ulCurrentTime;
    MTH3D_tdstVector_ stFadeOut;
    MTH3D_tdstVector_ stConstant;
    MTH3D_tdstVector_ stFadeIn;
    unsigned char ucPadNumber;
    tdstGetSetParam_ stParam;
    signed char cEffectNumber;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2579–2583 */
/* addr: 0x00212690  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2579
 *   +0x0004 -> line 2580
 *   +0x0008 -> line 2579
 *   +0x0018 -> line 2580
 *   +0x0034 -> line 2582
 *   +0x0038 -> line 2580
 *   +0x003c -> line 2583
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetTransitionSectorIDFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.lValue = GAM_fn_hGetCurrentSector(g_stEngineStructure.h_StdCamCaracter)->hLinkedObject.p_stSector->xTransition; p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2525–2573 */
/* addr: 0x002126e0  size: 316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2525
 *   +0x0004 -> line 2533
 *   +0x0008 -> line 2525
 *   +0x0030 -> line 2526
 *   +0x0034 -> line 2533
 *   +0x003c -> line 2535
 *   +0x0048 -> line 2536
 *   +0x0054 -> line 2539
 *   +0x0094 -> line 2543
 *   +0x009c -> line 2544
 *   +0x00a4 -> line 2545
 *   +0x00ac -> line 2549
 *   +0x00b8 -> line 2550
 *   +0x00bc -> line 2549
 *   +0x00c0 -> line 2550
 *   +0x00e8 -> line 2551
 *   +0x00f4 -> line 2552
 *   +0x00fc -> line 2568
 *   +0x0114 -> line 2572
 *   +0x0118 -> line 2573
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSAV2SaveFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    char* p_szElementName;
    tdstGetSetParam_ stParam;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2483–2521 */
/* addr: 0x00212820  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2483
 *   +0x0004 -> line 2492
 *   +0x0008 -> line 2483
 *   +0x002c -> line 2484
 *   +0x0030 -> line 2492
 *   +0x0040 -> line 2495
 *   +0x004c -> line 2496
 *   +0x0058 -> line 2500
 *   +0x0060 -> line 2502
 *   +0x0074 -> line 2504
 *   +0x007c -> line 2506
 *   +0x0080 -> line 2508
 *   +0x008c -> line 2510
 *   +0x00a4 -> line 2511
 *   +0x00a8 -> line 2513
 *   +0x00b0 -> line 2516
 *   +0x00c0 -> line 2520
 *   +0x00c4 -> line 2521
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_TXT_Function(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    char* pszString;
    long lNumberOfLines;
    char* pszTempString;
    tdstGetSetParam_ stParam;
    tdeFuncId_ eFuncId;

    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    lNumberOfLines = 0;

    switch (eFuncId)
    {
    case eFunc_TXT_GetNumberOfLines:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        pszString = fn_szGetStringFromTextOrStringParam(&stParam);
        pszTempString = pszString;
        while (pszTempString != NULL)
        {
            pszTempString = strstr(pszTempString, "\\l");
            if (pszTempString != NULL)
            {
                lNumberOfLines++;
                pszTempString += strlen("\\l");
                if ((unsigned int)(pszTempString - pszString) >= strlen(pszString))
                    pszTempString = NULL;
            }
        }
        p_stValue->uDummy.uParam.lValue = lNumberOfLines + 1;
        p_stValue->eType = E_vt_Integer;
        break;
    }

    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2440–2477 */
/* addr: 0x00212910  size: 324 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2440
 *   +0x0014 -> line 2441
 *   +0x001c -> line 2446
 *   +0x0024 -> line 2447
 *   +0x0028 -> line 2448
 *   +0x0038 -> line 2450
 *   +0x0060 -> line 2453
 *   +0x0068 -> line 2454
 *   +0x0084 -> line 2455
 *   +0x008c -> line 2457
 *   +0x00a4 -> line 2458
 *   +0x00ac -> line 2460
 *   +0x00c4 -> line 2461
 *   +0x00cc -> line 2463
 *   +0x00dc -> line 2464
 *   +0x00e4 -> line 2466
 *   +0x00f4 -> line 2467
 *   +0x00fc -> line 2469
 *   +0x010c -> line 2470
 *   +0x0114 -> line 2472
 *   +0x0128 -> line 2476
 *   +0x012c -> line 2477
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_PAD2_Function(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MTH3D_tdstVector_ stVector;
    unsigned char ucPadNumber;
    tdstGetSetParam_ stParam;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2417–2437 */
/* addr: 0x00212a60  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2417
 *   +0x0004 -> line 2423
 *   +0x0008 -> line 2417
 *   +0x0018 -> line 2418
 *   +0x001c -> line 2423
 *   +0x002c -> line 2426
 *   +0x0038 -> line 2427
 *   +0x0040 -> line 2429
 *   +0x0058 -> line 2436
 *   +0x005c -> line 2437
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_RLIFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    char* pszString;
    tdstGetSetParam_ stParam;
    tdeFuncId_ eFuncId;

    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;

    switch (eFuncId)
    {
    case eFunc_GetRLITableIndex:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        pszString = fn_szGetStringFromTextOrStringParam(&stParam);
        p_stValue->uDummy.uParam.ulValue = IPO_fn_ucGetRLITableIndex(pszString);
        p_stValue->eType = E_vt_Integer;
        break;
    }

    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2369–2413 */
/* addr: 0x00212ad0  size: 364 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2369
 *   +0x0004 -> line 2378
 *   +0x0008 -> line 2369
 *   +0x0034 -> line 2370
 *   +0x0038 -> line 2378
 *   +0x0048 -> line 2384
 *   +0x0054 -> line 2386
 *   +0x005c -> line 2388
 *   +0x0090 -> line 2390
 *   +0x0098 -> line 2388
 *   +0x009c -> line 2390
 *   +0x00a0 -> line 2388
 *   +0x00ac -> line 2390
 *   +0x00c4 -> line 2392
 *   +0x00d8 -> line 2395
 *   +0x00e0 -> line 2398
 *   +0x0104 -> line 2399
 *   +0x0108 -> line 2400
 *   +0x011c -> line 2402
 *   +0x0120 -> line 2403
 *   +0x0130 -> line 2405
 *   +0x013c -> line 2412
 *   +0x0140 -> line 2413
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_GetActiveMainActors(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    int i;
    unsigned char ucVarId;
    AI_tdstMind_* p_stMind;
    int NumberOfActiveSPO;
    int pp_SuperObjArray[5];
    tdstGetSetParam_ stParam;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2330–2363 */
/* addr: 0x00212c40  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2330
 *   +0x001c -> line 2337
 *   +0x0020 -> line 2339
 *   +0x0024 -> line 2337
 *   +0x002c -> line 2341
 *   +0x0038 -> line 2343
 *   +0x0040 -> line 2345
 *   +0x0048 -> line 2347
 *   +0x0050 -> line 2349
 *   +0x0070 -> line 2350
 *   +0x0078 -> line 2352
 *   +0x009c -> line 2354
 *   +0x00a0 -> line 2355
 *   +0x00a4 -> line 2354
 *   +0x00ac -> line 2358
 *   +0x00b0 -> line 2359
 *   +0x00bc -> line 2360
 *   +0x00d8 -> line 2362
 *   +0x00dc -> line 2363
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeMainCharacter_* MC_fn_hGetFirstMainCharNode(void);
tdstNodeMainCharacter_* MC_fn_hGetNextMainCharNode(tdstNodeMainCharacter_* hMCN);
HIE_tdstSuperObject_* MC_fn_hGetCharacterInMainCharacterNode(tdstNodeMainCharacter_* hMainCharNode);

int fn_iGetActiveMainActors(HIE_tdstSuperObject_** pp_SuperObjArray)
{
    tdstEngineObject_* p_stEngObj;
    int i;
    HIE_tdstSuperObject_* hMainChar;
    tdstNodeMainCharacter_* hMCN;

    for (i = 0; i < 4; i++) pp_SuperObjArray[i] = NULL;
    i = 0;
    for (hMCN = MC_fn_hGetFirstMainCharNode(); i < 4 && hMCN; hMCN = MC_fn_hGetNextMainCharNode(hMCN))
    {
        hMainChar = MC_fn_hGetCharacterInMainCharacterNode(hMCN);
        if (hMainChar)
        {
            if (hMainChar->ulTypeOfLinkedObject != 2) p_stEngObj = NULL; else p_stEngObj = hMainChar->hLinkedObject.p_stCharacter;
            if (p_stEngObj && (unsigned char)((p_stEngObj->h_StandardGame->ucMiscFlags & 4) ? 1 : 0) == 1)
            {
                pp_SuperObjArray[i++] = hMainChar;
            }
        }
    }
    return i;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2295–2326 */
/* addr: 0x00212d40  size: 192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2295
 *   +0x0004 -> line 2299
 *   +0x0008 -> line 2295
 *   +0x0018 -> line 2296
 *   +0x001c -> line 2299
 *   +0x0040 -> line 2303
 *   +0x0054 -> line 2304
 *   +0x005c -> line 2308
 *   +0x0070 -> line 2309
 *   +0x0078 -> line 2315
 *   +0x0084 -> line 2317
 *   +0x00a8 -> line 2325
 *   +0x00ac -> line 2326
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_MultiPlayerFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam;
    tdeFuncId_ eFuncId;

    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;

    switch (eFuncId)
    {
    case eFunc_MP_GetNumberOfPlayers:
        p_stValue->uDummy.uParam.ulValue = GAM_MultiVP_fn_ucGetNumberOfPlayers();
        p_stValue->eType = E_vt_Integer;
        break;
    case eFunc_MP_GetMaxNumberOfPlayers:
        p_stValue->uDummy.uParam.ulValue = GAM_MultiVP_fn_ucGetMaxNumberOfPlayers();
        p_stValue->eType = E_vt_Integer;
        break;
    case eFunc_MP_GetViewPortOfPlayer:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_stValue->uDummy.uParam.ulValue = GAM_MultiVP_fn_vGetViewPortFromPlayer(fn_h_StandardGameGetSuperObject(stParam.uDummy.uParam.p_stEngObjValue->h_StandardGame));
        p_stValue->eType = E_vt_Integer;
        break;
    }

    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2274–2289 */
/* addr: 0x00212e00  size: 288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2274
 *   +0x0004 -> line 2280
 *   +0x0008 -> line 2274
 *   +0x0018 -> line 2280
 *   +0x0024 -> line 2283
 *   +0x0048 -> line 2284
 *   +0x0054 -> line 2285
 *   +0x005c -> line 2287
 *   +0x0070 -> line 2288
 *   +0x0108 -> line 2289
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vReinitAIWithFlags(AI_tdstMind_* p_stMind, unsigned char ucFlags);
HIE_tdstSuperObject_* HIE_fn_hForceGetSuperObjectNextBrother(HIE_tdstSuperObject_* hSuperObj);

#pragma auto_inline on
void fn_vReinitActors(HIE_tdstSuperObject_* hSuperObj)
{
    HIE_tdstSuperObject_* hNextChild;
    HIE_tdstSuperObject_* hChild;

    if (hSuperObj->ulTypeOfLinkedObject == 2)
    {
        tdstBrain_* hBrain = ((hSuperObj->ulTypeOfLinkedObject != 2) ? NULL : hSuperObj->hLinkedObject.p_stCharacter)->h_Brain;
        if (hBrain)
            fn_vReinitAIWithFlags(hBrain->p_stMind, 0);
    }
    else
    {
        for (hChild = hSuperObj->hFirstElementDyn, hNextChild = HIE_fn_hForceGetSuperObjectNextBrother(hChild); hChild != NULL; hChild = hNextChild, hNextChild = HIE_fn_hForceGetSuperObjectNextBrother(hChild))
            fn_vReinitActors(hChild);
    }
}
#pragma auto_inline reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2266–2271 */
/* addr: 0x00212f20  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2266
 *   +0x0004 -> line 2268
 *   +0x0008 -> line 2266
 *   +0x0014 -> line 2268
 *   +0x0090 -> line 2269
 *   +0x0110 -> line 2271
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vReInitAllDynamicActors(void)
{
    fn_vReinitActors(gp_stDynamicWorld);
    fn_vReinitActors(gp_stInactiveDynamicWorld);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2255–2257 */
/* addr: 0x00213050  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2255
 *   +0x000c -> line 2256
 *   +0x0010 -> line 2255
 *   +0x0014 -> line 2257
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetFrameLength(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uDummy.uParam.xValue = g_stEngineStructure.stEngineTimer.xFrameLength; p_stValue->eType = E_vt_Float;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2225–2244 */
/* addr: 0x00213070  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2225
 *   +0x001c -> line 2232
 *   +0x0028 -> line 2234
 *   +0x002c -> line 2232
 *   +0x0030 -> line 2233
 *   +0x0034 -> line 2234
 *   +0x003c -> line 2237
 *   +0x0054 -> line 2239
 *   +0x0068 -> line 2242
 *   +0x0074 -> line 2244
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_SPO_GetDrawFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int lBit;
    HIE_tdstSuperObject_* hSpo;
    int lReturn;
    tdstGetSetParam_ stParam;

    lReturn = -1;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hSpo = stParam.uDummy.uParam.hSuperObject;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lBit = stParam.uDummy.uParam.lValue;

    if ((hSpo != NULL) && (lBit >= 0) && (lBit < 32))
        lReturn = ((1 << lBit) & hSpo->lDrawModeMask) ? 1 : 0;

    p_stValue->uDummy.uParam.lValue = lReturn;
    p_stValue->eType = E_vt_Integer;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2119–2217 */
/* addr: 0x00213100  size: 936 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2119
 *   +0x0004 -> line 2121
 *   +0x0008 -> line 2119
 *   +0x0024 -> line 2120
 *   +0x0028 -> line 2127
 *   +0x0054 -> line 2130
 *   +0x0058 -> line 2131
 *   +0x00c0 -> line 2135
 *   +0x00c4 -> line 2136
 *   +0x0114 -> line 2141
 *   +0x011c -> line 2142
 *   +0x0120 -> line 2141
 *   +0x0128 -> line 2142
 *   +0x0130 -> line 2143
 *   +0x014c -> line 2144
 *   +0x0154 -> line 2148
 *   +0x0160 -> line 2149
 *   +0x0170 -> line 2150
 *   +0x0174 -> line 2149
 *   +0x0178 -> line 2150
 *   +0x01a4 -> line 2152
 *   +0x01bc -> line 2153
 *   +0x01c4 -> line 2157
 *   +0x01d0 -> line 2158
 *   +0x01e0 -> line 2159
 *   +0x01e4 -> line 2158
 *   +0x01e8 -> line 2159
 *   +0x0214 -> line 2161
 *   +0x022c -> line 2162
 *   +0x0234 -> line 2166
 *   +0x0240 -> line 2167
 *   +0x0250 -> line 2168
 *   +0x0254 -> line 2167
 *   +0x0258 -> line 2168
 *   +0x0284 -> line 2170
 *   +0x029c -> line 2171
 *   +0x02a4 -> line 2175
 *   +0x02b0 -> line 2176
 *   +0x02c0 -> line 2177
 *   +0x02c4 -> line 2176
 *   +0x02c8 -> line 2177
 *   +0x02f4 -> line 2179
 *   +0x030c -> line 2180
 *   +0x0314 -> line 2184
 *   +0x031c -> line 2185
 *   +0x0320 -> line 2186
 *   +0x0328 -> line 2189
 *   +0x0330 -> line 2190
 *   +0x0334 -> line 2191
 *   +0x033c -> line 2194
 *   +0x0344 -> line 2195
 *   +0x0348 -> line 2196
 *   +0x0350 -> line 2199
 *   +0x0358 -> line 2200
 *   +0x035c -> line 2199
 *   +0x0360 -> line 2214
 *   +0x037c -> line 2215
 *   +0x0384 -> line 2216
 *   +0x0388 -> line 2215
 *   +0x038c -> line 2217
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stColorFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    RGBAStruct_ rgba;
    int color1;
    int lValue;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 2087–2112 */
/* addr: 0x002134b0  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2087
 *   +0x0004 -> line 2093
 *   +0x0008 -> line 2094
 *   +0x000c -> line 2096
 *   +0x0014 -> line 2097
 *   +0x001c -> line 2098
 *   +0x0024 -> line 2099
 *   +0x0028 -> line 2096
 *   +0x002c -> line 2099
 *   +0x0030 -> line 2097
 *   +0x0034 -> line 2098
 *   +0x0038 -> line 2101
 *   +0x0058 -> line 2102
 *   +0x0074 -> line 2103
 *   +0x0090 -> line 2104
 *   +0x00ac -> line 2106
 *   +0x00b0 -> line 2107
 *   +0x00b4 -> line 2108
 *   +0x00b8 -> line 2109
 *   +0x00bc -> line 2111
 *   +0x00c0 -> line 2112
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_lAddColor(int color1, int color2)
{
    int a;
    int b;
    int g;
    int r;
    RGBAStruct_ c1;
    RGBAStruct_ c2;
    RGBAStruct_ c3;

    c1.Color = color1;
    c2.Color = color2;

    r = c1.Component.Red + c2.Component.Red;
    g = c1.Component.Green + c2.Component.Blue;
    b = c1.Component.Blue + c2.Component.Green;
    a = c1.Component.Alpha + c2.Component.Alpha;

    if (r < 0) r = 0; else if (r > 100) r = 100;
    if (g < 0) g = 0; else if (g > 100) g = 100;
    if (b < 0) b = 0; else if (b > 100) b = 100;
    if (a < 0) a = 0; else if (a > 100) a = 100;

    c3.Component.Red = r;
    c3.Component.Green = g;
    c3.Component.Blue = b;
    c3.Component.Alpha = a;

    return c3.Color;
}

/* Engine float-to-int conversion: retail converts through $f30 at 164 sites
 * in 77 game functions ("cvt.w.s $f30, x; mfc1 r, $f30"), a register MWCC
 * never picks for its own conversions. */
/* abs.s has no C form under MWCC; only that instruction is asm. */
inline float MTH_xAbs(float xValue)
{
    float xResult;
    asm { abs.s xResult, xValue }
    return xResult;
}

inline long MTH_M_xRealToLong(float _xValue)
{
    long _lResult;
    asm
    {
        cvt.w.s f30, _xValue
        mfc1 _lResult, f30
    }
    return _lResult;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1991–2005 */
/* addr: 0x00213580  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1991
 *   +0x0010 -> line 1994
 *   +0x001c -> line 1995
 *   +0x0020 -> line 1994
 *   +0x0024 -> line 1995
 *   +0x0050 -> line 2002
 *   +0x006c -> line 2003
 *   +0x0078 -> line 2005
 *   +0x0084 -> line 2004
 *   +0x0088 -> line 2005
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stEvalRedOrGreenOrBlueOrAlpha(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* lValue)
{
    tdstGetSetParam_ stParam;


    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    *lValue = (stParam.eType == E_vt_Float) ? MTH_M_xRealToLong(stParam.uDummy.uParam.xValue) : stParam.uDummy.uParam.lValue;






    if (*lValue > 100) *lValue = 100;
    else if (*lValue < 0) *lValue = 0;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1869–1969 */
/* addr: 0x00213610  size: 420 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1869
 *   +0x0014 -> line 1870
 *   +0x0018 -> line 1877
 *   +0x0020 -> line 1878
 *   +0x0024 -> line 1879
 *   +0x002c -> line 1881
 *   +0x0054 -> line 1887
 *   +0x005c -> line 1889
 *   +0x0068 -> line 1890
 *   +0x0070 -> line 1898
 *   +0x007c -> line 1900
 *   +0x0088 -> line 1901
 *   +0x0090 -> line 1909
 *   +0x009c -> line 1911
 *   +0x00a4 -> line 1912
 *   +0x00a8 -> line 1911
 *   +0x00ac -> line 1912
 *   +0x00b4 -> line 1919
 *   +0x00bc -> line 1921
 *   +0x00c8 -> line 1922
 *   +0x00d0 -> line 1929
 *   +0x00d8 -> line 1931
 *   +0x00e4 -> line 1932
 *   +0x00ec -> line 1936
 *   +0x0100 -> line 1938
 *   +0x0108 -> line 1939
 *   +0x010c -> line 1938
 *   +0x0110 -> line 1939
 *   +0x0118 -> line 1943
 *   +0x012c -> line 1945
 *   +0x0134 -> line 1946
 *   +0x0138 -> line 1945
 *   +0x013c -> line 1946
 *   +0x0144 -> line 1950
 *   +0x0158 -> line 1951
 *   +0x0160 -> line 1955
 *   +0x0174 -> line 1956
 *   +0x017c -> line 1967
 *   +0x0184 -> line 1968
 *   +0x0188 -> line 1967
 *   +0x018c -> line 1969
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stVisualMaterialFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float fV;
    float fU;
    int lValue;
    GEO_tdstColor_ stColor;
    GLI_tdstMaterial_* hVisualMaterial;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1808–1860 */
/* addr: 0x002137c0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1808
 *   +0x0004 -> line 1810
 *   +0x0008 -> line 1808
 *   +0x002c -> line 1810
 *   +0x0030 -> line 1809
 *   +0x0034 -> line 1817
 *   +0x004c -> line 1819
 *   +0x0074 -> line 1825
 *   +0x0088 -> line 1828
 *   +0x008c -> line 1829
 *   +0x009c -> line 1832
 *   +0x00a8 -> line 1835
 *   +0x00b0 -> line 1837
 *   +0x00bc -> line 1838
 *   +0x00c8 -> line 1840
 *   +0x00d4 -> line 1842
 *   +0x00dc -> line 1844
 *   +0x00e8 -> line 1847
 *   +0x00f0 -> line 1851
 *   +0x0100 -> line 1852
 *   +0x0108 -> line 1858
 *   +0x0110 -> line 1859
 *   +0x0114 -> line 1858
 *   +0x0118 -> line 1860
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
GMT_tdstCollideMaterial_* GMT_fn_hGetCollideMaterial(GMT_tdstGameMaterial_* hGameMat);
int GMT_fn_b_ulIsValid(GMT_tdstGameMaterial_* hGameMat);
unsigned short GMT_fn_hGetCollideMaterialIdentifier(GMT_tdstCollideMaterial_* hCollideMaterial);
DNM_stReport* fn_pstGetDNMReport(HIE_tdstSuperObject_* p_SuperObjPerso);

tdstNodeInterpret_* fn_p_stGameMaterialFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned short xMask;
    GMT_tdstCollideMaterial_* hMaterialCollide;
    tdstBrain_* hBrain;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    DNM_stReport* p_stDynamReport;
    GMT_tdstGameMaterial_* hGameMaterial;
    tdeFuncId_ eFuncId;

    hGameMaterial = (GMT_tdstGameMaterial_*)0xcdcdcdcd;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    switch (eFuncId)
    {
    case eFunc_GetLastTraversedMaterialType:
    case eFunc_GetLastTraversedMaterial:
        hBrain = hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_Brain;
        if (hBrain)
        {
            hGameMaterial = hBrain->hLastCollidedGoThroughMaterial;
            if (GMT_fn_b_ulIsValid(hGameMaterial))
            {
                if (eFuncId == eFunc_GetLastTraversedMaterialType)
                {
                    hMaterialCollide = GMT_fn_hGetCollideMaterial(hGameMaterial);
                    xMask = 0;
                    if ((int)hMaterialCollide != -1)
                        xMask = GMT_fn_hGetCollideMaterialIdentifier(hMaterialCollide);
                    p_stValue->uDummy.uParam.ulValue = xMask;
                    p_stValue->eType = E_vt_Mask;
                    return p_stTree;
                }
            }
            else
            {
                p_stValue->uDummy.uParam.lValue = 0;
            }
            p_stValue->eType = E_vt_Mask;
        }
        return p_stTree;
    case eFunc_GetCurrentCollidedGMT:
        p_stDynamReport = fn_pstGetDNMReport(hNewSuperObjPerso);
        if (p_stDynamReport) hGameMaterial = p_stDynamReport->m_stGround.hCollidedMaterial;
        break;
    default:
        break;
    }
    p_stValue->uDummy.uParam.lValue = (int)hGameMaterial;
    p_stValue->eType = E_vt_GameMaterial;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1699–1800 */
/* addr: 0x00213900  size: 488 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1699
 *   +0x0004 -> line 1701
 *   +0x0008 -> line 1699
 *   +0x0028 -> line 1700
 *   +0x002c -> line 1701
 *   +0x0068 -> line 1705
 *   +0x0084 -> line 1706
 *   +0x0090 -> line 1711
 *   +0x0098 -> line 1712
 *   +0x009c -> line 1711
 *   +0x00a0 -> line 1712
 *   +0x00a8 -> line 1719
 *   +0x00b4 -> line 1721
 *   +0x00c8 -> line 1723
 *   +0x00d4 -> line 1725
 *   +0x00dc -> line 1731
 *   +0x00e4 -> line 1733
 *   +0x00e8 -> line 1734
 *   +0x00f0 -> line 1744
 *   +0x00f8 -> line 1748
 *   +0x00fc -> line 1751
 *   +0x010c -> line 1775
 *   +0x0114 -> line 1777
 *   +0x0124 -> line 1780
 *   +0x012c -> line 1782
 *   +0x0134 -> line 1783
 *   +0x0154 -> line 1785
 *   +0x0164 -> line 1783
 *   +0x0178 -> line 1785
 *   +0x0188 -> line 1788
 *   +0x01c0 -> line 1790
 *   +0x01c4 -> line 1788
 *   +0x01c8 -> line 1800
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMiscFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MAT_tdstTransformation_ stMatrix;
    HIE_tdstSuperObject_* p_SuperObjPersoGenerated;
    tdstEngineObject_* p_stEngineObject;
    int lNbAlways;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1592–1691 */
/* addr: 0x00213af0  size: 1308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1592
 *   +0x0004 -> line 1598
 *   +0x0008 -> line 1592
 *   +0x0020 -> line 1593
 *   +0x0024 -> line 1598
 *   +0x00ac -> line 1601
 *   +0x00b4 -> line 1603
 *   +0x00c8 -> line 1604
 *   +0x00d0 -> line 1607
 *   +0x00dc -> line 1609
 *   +0x00e0 -> line 1607
 *   +0x00e4 -> line 1609
 *   +0x0150 -> line 1610
 *   +0x015c -> line 1612
 *   +0x0174 -> line 1613
 *   +0x017c -> line 1614
 *   +0x0184 -> line 1616
 *   +0x0194 -> line 1618
 *   +0x019c -> line 1622
 *   +0x01a8 -> line 1624
 *   +0x01ac -> line 1622
 *   +0x01b0 -> line 1624
 *   +0x021c -> line 1625
 *   +0x0228 -> line 1627
 *   +0x0240 -> line 1628
 *   +0x0248 -> line 1629
 *   +0x0250 -> line 1631
 *   +0x0260 -> line 1633
 *   +0x0268 -> line 1636
 *   +0x0270 -> line 1638
 *   +0x0274 -> line 1636
 *   +0x0278 -> line 1638
 *   +0x02e4 -> line 1639
 *   +0x02ec -> line 1643
 *   +0x02f8 -> line 1645
 *   +0x02fc -> line 1643
 *   +0x0300 -> line 1645
 *   +0x036c -> line 1646
 *   +0x0378 -> line 1648
 *   +0x0390 -> line 1649
 *   +0x0398 -> line 1650
 *   +0x03a0 -> line 1652
 *   +0x03b0 -> line 1654
 *   +0x03b8 -> line 1658
 *   +0x03c4 -> line 1660
 *   +0x03c8 -> line 1658
 *   +0x03cc -> line 1660
 *   +0x0438 -> line 1661
 *   +0x0444 -> line 1663
 *   +0x045c -> line 1664
 *   +0x0464 -> line 1665
 *   +0x046c -> line 1667
 *   +0x047c -> line 1669
 *   +0x0484 -> line 1673
 *   +0x0494 -> line 1674
 *   +0x04a0 -> line 1676
 *   +0x04b8 -> line 1677
 *   +0x04c0 -> line 1678
 *   +0x04cc -> line 1680
 *   +0x04dc -> line 1682
 *   +0x04e4 -> line 1684
 *   +0x04fc -> line 1690
 *   +0x0500 -> line 1691
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stInputFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    IPT_tdstEntryElement_* hJoystickAxeY;
    IPT_tdstEntryElement_* hJoystickAxeX;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1558–1585 */
/* addr: 0x00214010  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1558
 *   +0x001c -> line 1560
 *   +0x0020 -> line 1562
 *   +0x0028 -> line 1563
 *   +0x002c -> line 1565
 *   +0x004c -> line 1568
 *   +0x0054 -> line 1569
 *   +0x0058 -> line 1568
 *   +0x005c -> line 1569
 *   +0x00b4 -> line 1570
 *   +0x00c0 -> line 1574
 *   +0x00d0 -> line 1585
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* fn_p_stGetPersoInList(tdstList_* p_List, unsigned char ucPosition);

tdstNodeInterpret_* fn_p_stListFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstList_* p_stList;
    tdeFuncId_ eFuncId;

    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    p_stList = *(tdstList_**)p_stValue;
    switch (eFuncId)
    {
    case eFunc_GivePersoInList:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        p_stValue->uDummy.uParam.p_stEngObjValue = (fn_p_stGetPersoInList(p_stList, p_stValue->uDummy.uParam.ucValue) == NULL) ? NULL : ((fn_p_stGetPersoInList(p_stList, p_stValue->uDummy.uParam.ucValue)->ulTypeOfLinkedObject != 2) ? NULL : fn_p_stGetPersoInList(p_stList, p_stValue->uDummy.uParam.ucValue)->hLinkedObject.p_stCharacter);
        p_stValue->eType = E_vt_Perso;
        return p_stTree;
    case eFunc_ListSize:
        p_stValue->uDummy.uParam.lValue = p_stList->ucNbElt;
        p_stValue->eType = E_vt_Integer;
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1521–1551 */
/* addr: 0x00214100  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1521
 *   +0x0004 -> line 1523
 *   +0x0008 -> line 1521
 *   +0x000c -> line 1525
 *   +0x0010 -> line 1521
 *   +0x0018 -> line 1522
 *   +0x001c -> line 1523
 *   +0x0020 -> line 1525
 *   +0x003c -> line 1534
 *   +0x0044 -> line 1535
 *   +0x0048 -> line 1534
 *   +0x004c -> line 1536
 *   +0x0058 -> line 1539
 *   +0x0060 -> line 1542
 *   +0x0068 -> line 1549
 *   +0x0074 -> line 1550
 *   +0x0078 -> line 1551
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTimeFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned int ulSavedTime;
    unsigned int ulCurrentTime;
    tdeFuncId_ eFuncId;

    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    ulCurrentTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;

    switch (eFuncId)
    {
    case eFunc_GetTime:
        break;

    case eFunc_GetElapsedTime:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ulSavedTime = p_stValue->uDummy.uParam.ulValue;
        if (ulCurrentTime >= ulSavedTime)
            ulCurrentTime = ulCurrentTime - ulSavedTime;
        else
            ulCurrentTime = -(ulCurrentTime - ulSavedTime);
        break;
    }

    p_stValue->uDummy.uParam.ulValue = ulCurrentTime;
    p_stValue->eType = E_vt_PositiveInteger;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1460–1514 */
/* addr: 0x00214190  size: 528 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1460
 *   +0x0020 -> line 1461
 *   +0x0024 -> line 1466
 *   +0x0030 -> line 1472
 *   +0x005c -> line 1475
 *   +0x0064 -> line 1476
 *   +0x006c -> line 1480
 *   +0x007c -> line 1481
 *   +0x0080 -> line 1480
 *   +0x0084 -> line 1481
 *   +0x00b8 -> line 1482
 *   +0x00c0 -> line 1483
 *   +0x00c8 -> line 1487
 *   +0x00d8 -> line 1488
 *   +0x00dc -> line 1487
 *   +0x00e0 -> line 1488
 *   +0x0114 -> line 1489
 *   +0x011c -> line 1492
 *   +0x0124 -> line 1493
 *   +0x012c -> line 1496
 *   +0x013c -> line 1497
 *   +0x0140 -> line 1496
 *   +0x0144 -> line 1497
 *   +0x0178 -> line 1498
 *   +0x0180 -> line 1499
 *   +0x0188 -> line 1503
 *   +0x0198 -> line 1504
 *   +0x019c -> line 1503
 *   +0x01a0 -> line 1504
 *   +0x01d4 -> line 1505
 *   +0x01dc -> line 1509
 *   +0x01e0 -> line 1512
 *   +0x01ec -> line 1513
 *   +0x01f0 -> line 1514
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stHitPointsAndHitPointsMaxFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int lValue;
    tdstEngineObject_* p_stObject;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1391–1451 */
/* addr: 0x002143a0  size: 456 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1391
 *   +0x0020 -> line 1395
 *   +0x0028 -> line 1396
 *   +0x002c -> line 1395
 *   +0x0030 -> line 1396
 *   +0x004c -> line 1398
 *   +0x0058 -> line 1399
 *   +0x0078 -> line 1401
 *   +0x0088 -> line 1402
 *   +0x00a8 -> line 1406
 *   +0x0110 -> line 1415
 *   +0x0154 -> line 1423
 *   +0x015c -> line 1426
 *   +0x0160 -> line 1427
 *   +0x0168 -> line 1430
 *   +0x016c -> line 1432
 *   +0x0174 -> line 1435
 *   +0x0178 -> line 1436
 *   +0x017c -> line 1437
 *   +0x0184 -> line 1440
 *   +0x018c -> line 1441
 *   +0x0190 -> line 1445
 *   +0x0194 -> line 1449
 *   +0x0198 -> line 1446
 *   +0x019c -> line 1447
 *   +0x01a0 -> line 1449
 *   +0x01a8 -> line 1451
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stRealFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xTmp;
    float xResult;
    float xValue1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1223–1387 */
/* addr: 0x00214570  size: 1792 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1223
 *   +0x0020 -> line 1224
 *   +0x0024 -> line 1227
 *   +0x002c -> line 1229
 *   +0x0058 -> line 1234
 *   +0x0064 -> line 1240
 *   +0x0068 -> line 1234
 *   +0x006c -> line 1240
 *   +0x0070 -> line 1234
 *   +0x007c -> line 1238
 *   +0x0090 -> line 1240
 *   +0x0098 -> line 1241
 *   +0x00b8 -> line 1242
 *   +0x00d0 -> line 1245
 *   +0x00e4 -> line 1249
 *   +0x0108 -> line 1250
 *   +0x013c -> line 1251
 *   +0x0140 -> line 1250
 *   +0x0144 -> line 1251
 *   +0x0164 -> line 1253
 *   +0x02a0 -> line 1254
 *   +0x02a8 -> line 1258
 *   +0x02b4 -> line 1260
 *   +0x02b8 -> line 1258
 *   +0x02bc -> line 1260
 *   +0x02d8 -> line 1263
 *   +0x02e0 -> line 1272
 *   +0x02ec -> line 1274
 *   +0x02f0 -> line 1272
 *   +0x02f4 -> line 1274
 *   +0x02f8 -> line 1272
 *   +0x0300 -> line 1274
 *   +0x0308 -> line 1275
 *   +0x0328 -> line 1279
 *   +0x034c -> line 1280
 *   +0x0354 -> line 1283
 *   +0x03bc -> line 1292
 *   +0x0400 -> line 1300
 *   +0x0408 -> line 1303
 *   +0x040c -> line 1304
 *   +0x0414 -> line 1307
 *   +0x0418 -> line 1309
 *   +0x0420 -> line 1312
 *   +0x0424 -> line 1313
 *   +0x0428 -> line 1314
 *   +0x0430 -> line 1317
 *   +0x0438 -> line 1318
 *   +0x043c -> line 1322
 *   +0x044c -> line 1327
 *   +0x0484 -> line 1328
 *   +0x04a8 -> line 1329
 *   +0x04d0 -> line 1333
 *   +0x04d8 -> line 1340
 *   +0x04e4 -> line 1342
 *   +0x04e8 -> line 1340
 *   +0x04ec -> line 1342
 *   +0x04f0 -> line 1340
 *   +0x04f8 -> line 1342
 *   +0x0500 -> line 1344
 *   +0x0544 -> line 1346
 *   +0x05a8 -> line 1348
 *   +0x05cc -> line 1350
 *   +0x05e8 -> line 1353
 *   +0x05f0 -> line 1355
 *   +0x060c -> line 1357
 *   +0x0614 -> line 1366
 *   +0x0620 -> line 1367
 *   +0x0624 -> line 1366
 *   +0x0628 -> line 1367
 *   +0x062c -> line 1366
 *   +0x0634 -> line 1367
 *   +0x063c -> line 1368
 *   +0x065c -> line 1369
 *   +0x0668 -> line 1370
 *   +0x066c -> line 1369
 *   +0x068c -> line 1370
 *   +0x06a4 -> line 1372
 *   +0x06ac -> line 1376
 *   +0x06d4 -> line 1377
 *   +0x06dc -> line 1386
 *   +0x06e0 -> line 1387
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stVectorFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MTH3D_tdstVector_ stVertex;
    float xNorm;
    MTH3D_tdstVector_ stProjectedVector;
    MTH3D_tdstVector_ stV1;
    float xTmp;
    float xScalar;
    float xAngle;
    MTH4D_tdstMatrix_ stMatrix;
    MTH3D_tdstVector_ stRotated;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1200–1215 */
/* addr: 0x00214c70  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1200
 *   +0x001c -> line 1206
 *   +0x0038 -> line 1208
 *   +0x004c -> line 1211
 *   +0x005c -> line 1212
 *   +0x006c -> line 1214
 *   +0x0070 -> line 1215
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGlobalToLocal(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MAT_tdstTransformation_ stInvertRotation;
    HIE_tdstSuperObject_* hNewSuperObjPerso;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    MAT_fn_vInvertRotation(&stInvertRotation, hNewSuperObjPerso->hGlobalMatrix);
    MAT_fn_vApplyOnVector(&p_stValue->uDummy.uParam.stVectorValue, &stInvertRotation, &p_stValue->uDummy.uParam.stVectorValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1194–1194 */
/* addr: 0x00214d00  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1194
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDummyFunction(int lUnused, tdstNodeInterpret_* p_stTree)
{
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1173–1184 */
/* addr: 0x00214d10  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1173
 *   +0x001c -> line 1177
 *   +0x0038 -> line 1179
 *   +0x004c -> line 1181
 *   +0x0060 -> line 1183
 *   +0x0064 -> line 1184
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stLocalToGlobal(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    MAT_fn_vRotateVector(&p_stValue->uDummy.uParam.stVectorValue, hNewSuperObjPerso->hGlobalMatrix, &p_stValue->uDummy.uParam.stVectorValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 1013–1166 */
/* addr: 0x00214d90  size: 1008 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1013
 *   +0x0028 -> line 1014
 *   +0x002c -> line 1017
 *   +0x0034 -> line 1018
 *   +0x0038 -> line 1017
 *   +0x003c -> line 1018
 *   +0x0058 -> line 1020
 *   +0x0080 -> line 1026
 *   +0x0094 -> line 1027
 *   +0x009c -> line 1030
 *   +0x00b0 -> line 1031
 *   +0x00b8 -> line 1035
 *   +0x00c0 -> line 1038
 *   +0x00d4 -> line 1039
 *   +0x00dc -> line 1045
 *   +0x00ec -> line 1048
 *   +0x00f0 -> line 1045
 *   +0x00f4 -> line 1048
 *   +0x011c -> line 1050
 *   +0x0124 -> line 1053
 *   +0x0168 -> line 1056
 *   +0x0170 -> line 1060
 *   +0x0174 -> line 1061
 *   +0x017c -> line 1068
 *   +0x018c -> line 1069
 *   +0x0190 -> line 1068
 *   +0x0194 -> line 1069
 *   +0x01b0 -> line 1070
 *   +0x01c0 -> line 1071
 *   +0x01c4 -> line 1070
 *   +0x01c8 -> line 1071
 *   +0x01e4 -> line 1073
 *   +0x01f4 -> line 1076
 *   +0x01f8 -> line 1077
 *   +0x01fc -> line 1080
 *   +0x0200 -> line 1094
 *   +0x0210 -> line 1095
 *   +0x0230 -> line 1096
 *   +0x0240 -> line 1097
 *   +0x0260 -> line 1099
 *   +0x0268 -> line 1105
 *   +0x0278 -> line 1106
 *   +0x027c -> line 1105
 *   +0x0280 -> line 1106
 *   +0x029c -> line 1110
 *   +0x02a4 -> line 1116
 *   +0x02b4 -> line 1117
 *   +0x02b8 -> line 1116
 *   +0x02bc -> line 1117
 *   +0x02d8 -> line 1121
 *   +0x02e0 -> line 1124
 *   +0x02ec -> line 1125
 *   +0x02f4 -> line 1128
 *   +0x0300 -> line 1129
 *   +0x0308 -> line 1135
 *   +0x0318 -> line 1136
 *   +0x0338 -> line 1137
 *   +0x0348 -> line 1139
 *   +0x034c -> line 1141
 *   +0x0354 -> line 1142
 *   +0x035c -> line 1145
 *   +0x0368 -> line 1146
 *   +0x036c -> line 1145
 *   +0x0370 -> line 1146
 *   +0x038c -> line 1153
 *   +0x039c -> line 1157
 *   +0x03a4 -> line 1160
 *   +0x03ac -> line 1161
 *   +0x03b8 -> line 1164
 *   +0x03c0 -> line 1165
 *   +0x03c4 -> line 1164
 *   +0x03c8 -> line 1166
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMathFunctionReal(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xModulo;
    float xMax;
    float xMin;
    float xFirstReal;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 994–1006 */
/* addr: 0x00215180  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 994
 *   +0x000c -> line 998
 *   +0x0014 -> line 1001
 *   +0x0018 -> line 998
 *   +0x001c -> line 1001
 *   +0x0038 -> line 1004
 *   +0x0044 -> line 1005
 *   +0x0048 -> line 1004
 *   +0x004c -> line 1006
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMathAbsoluteValue(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xValue;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    xValue = (p_stValue->eType == E_vt_Float) ? p_stValue->uDummy.uParam.xValue : (float)p_stValue->uDummy.uParam.lValue;
    p_stValue->uDummy.uParam.xValue = MTH_xAbs(xValue);
    p_stValue->eType = E_vt_Float;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 956–984 */
/* addr: 0x002151e0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 956
 *   +0x0024 -> line 957
 *   +0x0028 -> line 960
 *   +0x0030 -> line 961
 *   +0x0034 -> line 960
 *   +0x0038 -> line 961
 *   +0x0060 -> line 963
 *   +0x0080 -> line 971
 *   +0x008c -> line 972
 *   +0x0090 -> line 971
 *   +0x0094 -> line 972
 *   +0x00bc -> line 974
 *   +0x00c8 -> line 976
 *   +0x00d0 -> line 978
 *   +0x00d4 -> line 979
 *   +0x00e0 -> line 982
 *   +0x00e8 -> line 983
 *   +0x00ec -> line 982
 *   +0x00f0 -> line 984
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMathFunctionInt(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int lFirstValue;
    tdeFuncId_ eFuncId;

    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    lFirstValue = (p_stValue->eType == E_vt_Float) ? MTH_M_xRealToLong(p_stValue->uDummy.uParam.xValue) : p_stValue->uDummy.uParam.lValue;
    if (eFuncId == eFunc_RandomInt)
    {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        lFirstValue = RND_fn_lGetLongRandomValue(0, lFirstValue, (p_stValue->eType == E_vt_Float) ? MTH_M_xRealToLong(p_stValue->uDummy.uParam.xValue) : p_stValue->uDummy.uParam.lValue);
    }
    else if (eFuncId == eFunc_Int)
    {
    }
    else
    {
        p_stValue->uDummy.uParam.lValue = lFirstValue;
        p_stValue->eType = E_vt_Integer;
        return p_stTree;
    }
    p_stValue->uDummy.uParam.lValue = lFirstValue;
    p_stValue->eType = E_vt_Integer;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 878–949 */
/* addr: 0x00215300  size: 504 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 878
 *   +0x001c -> line 879
 *   +0x0020 -> line 883
 *   +0x002c -> line 885
 *   +0x0038 -> line 888
 *   +0x0040 -> line 891
 *   +0x0060 -> line 892
 *   +0x006c -> line 893
 *   +0x0070 -> line 892
 *   +0x0074 -> line 893
 *   +0x0090 -> line 896
 *   +0x00cc -> line 899
 *   +0x00e0 -> line 900
 *   +0x00e8 -> line 903
 *   +0x00fc -> line 904
 *   +0x0104 -> line 907
 *   +0x0118 -> line 908
 *   +0x0120 -> line 911
 *   +0x0134 -> line 912
 *   +0x013c -> line 915
 *   +0x0154 -> line 929
 *   +0x015c -> line 932
 *   +0x0168 -> line 933
 *   +0x0188 -> line 935
 *   +0x0190 -> line 936
 *   +0x0198 -> line 940
 *   +0x01a0 -> line 942
 *   +0x01b0 -> line 943
 *   +0x01d0 -> line 947
 *   +0x01dc -> line 949
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stMathTernarReal(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned char bTestResult;
    float xRet;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 773–871 */
/* addr: 0x00215500  size: 776 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 773
 *   +0x002c -> line 774
 *   +0x0030 -> line 782
 *   +0x0048 -> line 785
 *   +0x0070 -> line 792
 *   +0x007c -> line 793
 *   +0x0080 -> line 794
 *   +0x0084 -> line 792
 *   +0x00a0 -> line 793
 *   +0x00b8 -> line 794
 *   +0x00c0 -> line 804
 *   +0x00d0 -> line 805
 *   +0x00e0 -> line 812
 *   +0x00e4 -> line 810
 *   +0x00fc -> line 812
 *   +0x010c -> line 813
 *   +0x0114 -> line 814
 *   +0x012c -> line 818
 *   +0x0130 -> line 814
 *   +0x0134 -> line 820
 *   +0x013c -> line 821
 *   +0x0140 -> line 818
 *   +0x0150 -> line 820
 *   +0x0154 -> line 818
 *   +0x0160 -> line 819
 *   +0x0170 -> line 820
 *   +0x0174 -> line 819
 *   +0x0178 -> line 820
 *   +0x017c -> line 819
 *   +0x0184 -> line 820
 *   +0x01a4 -> line 821
 *   +0x01ac -> line 822
 *   +0x01c4 -> line 824
 *   +0x01d4 -> line 827
 *   +0x01d8 -> line 824
 *   +0x01e0 -> line 826
 *   +0x01e4 -> line 824
 *   +0x01e8 -> line 826
 *   +0x01ec -> line 827
 *   +0x01f4 -> line 832
 *   +0x0200 -> line 833
 *   +0x0210 -> line 834
 *   +0x0218 -> line 835
 *   +0x0224 -> line 841
 *   +0x0234 -> line 842
 *   +0x0240 -> line 844
 *   +0x026c -> line 847
 *   +0x0274 -> line 848
 *   +0x027c -> line 849
 *   +0x0284 -> line 850
 *   +0x028c -> line 851
 *   +0x0294 -> line 853
 *   +0x029c -> line 854
 *   +0x02a4 -> line 856
 *   +0x02ac -> line 857
 *   +0x02b4 -> line 858
 *   +0x02bc -> line 860
 *   +0x02c4 -> line 861
 *   +0x02c8 -> line 865
 *   +0x02d4 -> line 866
 *   +0x02dc -> line 867
 *   +0x02e0 -> line 866
 *   +0x02e4 -> line 871
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDistanceFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* p_SuperObjTarget;
    HIE_tdstSuperObject_* hAimedPerso;
    float xDeltaAngle;
    float xAngleStart;
    float xAngleEnd;
    MTH3D_tdstVector_ stVector2;
    MTH3D_tdstVector_ stVector1;
    MTH3D_tdstVector_ stVector;
    /*type_0x83*/ int hNewSuperObjPerso;
    float xReal;
    unsigned char ucFlags;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 739–767 */
/* addr: 0x00215810  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 739
 *   +0x0010 -> line 742
 *   +0x0018 -> line 743
 *   +0x001c -> line 746
 *   +0x0024 -> line 748
 *   +0x0030 -> line 751
 *   +0x0038 -> line 753
 *   +0x003c -> line 754
 *   +0x0044 -> line 758
 *   +0x0060 -> line 760
 *   +0x0068 -> line 763
 *   +0x006c -> line 764
 *   +0x0070 -> line 763
 *   +0x0078 -> line 764
 *   +0x007c -> line 766
 *   +0x0080 -> line 767
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetWpAbsolutePosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    WP_tdstWayPoint_* hWP;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    hWP = p_stValue->uDummy.uParam.m_hWayPoint;
    if (hWP != NULL)
    {
        if (hWP->m_hSuperObject != NULL)
        {
            WP_fnv_WayPoint_ComputeLocation(hWP, &p_stValue->uDummy.uParam.stVectorValue);
            p_stValue->eType = E_vt_Vector;
        }
        else
        {
            *(int*)&p_stValue->uDummy.uParam.stVectorValue.xX = *(int*)&hWP->m_stVertex.xX; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xY = *(int*)&hWP->m_stVertex.xY; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xZ = *(int*)&hWP->m_stVertex.xZ; p_stValue->eType = E_vt_Vector;
        }
    }
    else
    {
        *(int*)&p_stValue->uDummy.uParam.stVectorValue.xX = 0; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xY = 0; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xZ = 0; p_stValue->eType = E_vt_Vector;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 449–730 */
/* addr: 0x002158b0  size: 3548 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 449
 *   +0x0068 -> line 487
 *   +0x0084 -> line 489
 *   +0x0088 -> line 493
 *   +0x0090 -> line 489
 *   +0x0094 -> line 493
 *   +0x00bc -> line 494
 *   +0x00c0 -> line 493
 *   +0x00c4 -> line 494
 *   +0x00ec -> line 496
 *   +0x00f0 -> line 494
 *   +0x00f4 -> line 496
 *   +0x00f8 -> line 494
 *   +0x0104 -> line 496
 *   +0x010c -> line 497
 *   +0x0110 -> line 496
 *   +0x0114 -> line 499
 *   +0x0124 -> line 502
 *   +0x012c -> line 500
 *   +0x0130 -> line 502
 *   +0x0138 -> line 503
 *   +0x013c -> line 505
 *   +0x0154 -> line 509
 *   +0x0158 -> line 510
 *   +0x015c -> line 509
 *   +0x0164 -> line 510
 *   +0x016c -> line 513
 *   +0x0174 -> line 514
 *   +0x0180 -> line 515
 *   +0x018c -> line 517
 *   +0x01d4 -> line 518
 *   +0x0240 -> line 519
 *   +0x0274 -> line 520
 *   +0x02e4 -> line 522
 *   +0x02ec -> line 523
 *   +0x02f8 -> line 524
 *   +0x0304 -> line 526
 *   +0x0310 -> line 528
 *   +0x0314 -> line 527
 *   +0x0318 -> line 526
 *   +0x0324 -> line 527
 *   +0x032c -> line 526
 *   +0x0330 -> line 527
 *   +0x0338 -> line 526
 *   +0x033c -> line 528
 *   +0x0358 -> line 527
 *   +0x0364 -> line 529
 *   +0x0370 -> line 531
 *   +0x039c -> line 532
 *   +0x03e0 -> line 534
 *   +0x03e4 -> line 535
 *   +0x03ec -> line 541
 *   +0x0454 -> line 543
 *   +0x0480 -> line 545
 *   +0x048c -> line 543
 *   +0x0490 -> line 545
 *   +0x04b0 -> line 546
 *   +0x04c4 -> line 550
 *   +0x04c8 -> line 547
 *   +0x04cc -> line 550
 *   +0x04d0 -> line 547
 *   +0x04e4 -> line 548
 *   +0x0508 -> line 550
 *   +0x052c -> line 551
 *   +0x0540 -> line 552
 *   +0x054c -> line 558
 *   +0x0550 -> line 553
 *   +0x0568 -> line 554
 *   +0x056c -> line 552
 *   +0x0570 -> line 554
 *   +0x0590 -> line 558
 *   +0x05c0 -> line 559
 *   +0x05cc -> line 562
 *   +0x05dc -> line 567
 *   +0x05e0 -> line 568
 *   +0x05e4 -> line 567
 *   +0x05ec -> line 568
 *   +0x05f4 -> line 572
 *   +0x0604 -> line 577
 *   +0x0608 -> line 578
 *   +0x060c -> line 577
 *   +0x0614 -> line 578
 *   +0x061c -> line 582
 *   +0x067c -> line 591
 *   +0x0680 -> line 592
 *   +0x0684 -> line 591
 *   +0x068c -> line 592
 *   +0x0694 -> line 596
 *   +0x06c4 -> line 598
 *   +0x06dc -> line 599
 *   +0x06ec -> line 598
 *   +0x06fc -> line 599
 *   +0x0704 -> line 600
 *   +0x0710 -> line 601
 *   +0x0720 -> line 600
 *   +0x0730 -> line 601
 *   +0x0738 -> line 603
 *   +0x073c -> line 604
 *   +0x0740 -> line 603
 *   +0x0748 -> line 604
 *   +0x0750 -> line 608
 *   +0x0780 -> line 610
 *   +0x0798 -> line 611
 *   +0x07a8 -> line 610
 *   +0x07b8 -> line 611
 *   +0x07c0 -> line 612
 *   +0x07cc -> line 613
 *   +0x07dc -> line 612
 *   +0x07ec -> line 613
 *   +0x07f4 -> line 615
 *   +0x07f8 -> line 616
 *   +0x07fc -> line 615
 *   +0x0804 -> line 616
 *   +0x080c -> line 620
 *   +0x0818 -> line 626
 *   +0x0844 -> line 627
 *   +0x0870 -> line 630
 *   +0x0890 -> line 632
 *   +0x08a4 -> line 633
 *   +0x08ac -> line 636
 *   +0x08c8 -> line 638
 *   +0x08d8 -> line 639
 *   +0x08e0 -> line 642
 *   +0x08fc -> line 644
 *   +0x090c -> line 645
 *   +0x0914 -> line 650
 *   +0x0918 -> line 651
 *   +0x091c -> line 650
 *   +0x0924 -> line 651
 *   +0x092c -> line 655
 *   +0x0940 -> line 659
 *   +0x0950 -> line 656
 *   +0x095c -> line 659
 *   +0x0968 -> line 660
 *   +0x096c -> line 659
 *   +0x0970 -> line 663
 *   +0x0974 -> line 659
 *   +0x0978 -> line 660
 *   +0x0994 -> line 661
 *   +0x09cc -> line 663
 *   +0x09fc -> line 664
 *   +0x0a64 -> line 666
 *   +0x0a9c -> line 668
 *   +0x0ab4 -> line 669
 *   +0x0ab8 -> line 668
 *   +0x0abc -> line 669
 *   +0x0acc -> line 672
 *   +0x0af0 -> line 673
 *   +0x0b08 -> line 676
 *   +0x0b24 -> line 677
 *   +0x0b2c -> line 679
 *   +0x0b48 -> line 680
 *   +0x0b50 -> line 686
 *   +0x0b54 -> line 685
 *   +0x0b5c -> line 686
 *   +0x0b64 -> line 689
 *   +0x0b6c -> line 693
 *   +0x0b7c -> line 694
 *   +0x0b8c -> line 689
 *   +0x0bac -> line 690
 *   +0x0bdc -> line 693
 *   +0x0bf4 -> line 694
 *   +0x0bfc -> line 695
 *   +0x0c08 -> line 696
 *   +0x0c18 -> line 695
 *   +0x0c28 -> line 696
 *   +0x0c30 -> line 698
 *   +0x0c38 -> line 699
 *   +0x0c44 -> line 708
 *   +0x0c60 -> line 709
 *   +0x0c74 -> line 710
 *   +0x0c8c -> line 713
 *   +0x0c90 -> line 712
 *   +0x0c94 -> line 713
 *   +0x0c98 -> line 716
 *   +0x0c9c -> line 713
 *   +0x0ca0 -> line 716
 *   +0x0ca4 -> line 714
 *   +0x0ca8 -> line 716
 *   +0x0cac -> line 712
 *   +0x0cb0 -> line 716
 *   +0x0cb4 -> line 712
 *   +0x0cb8 -> line 715
 *   +0x0cbc -> line 714
 *   +0x0cc8 -> line 712
 *   +0x0ccc -> line 714
 *   +0x0ce0 -> line 715
 *   +0x0cf8 -> line 716
 *   +0x0d00 -> line 717
 *   +0x0d08 -> line 721
 *   +0x0d10 -> line 722
 *   +0x0d14 -> line 721
 *   +0x0d18 -> line 722
 *   +0x0d1c -> line 721
 *   +0x0d20 -> line 722
 *   +0x0d28 -> line 721
 *   +0x0d30 -> line 722
 *   +0x0d38 -> line 724
 *   +0x0d44 -> line 725
 *   +0x0d48 -> line 724
 *   +0x0d4c -> line 725
 *   +0x0d50 -> line 724
 *   +0x0d54 -> line 725
 *   +0x0d5c -> line 724
 *   +0x0d64 -> line 725
 *   +0x0d6c -> line 727
 *   +0x0d74 -> line 728
 *   +0x0d78 -> line 727
 *   +0x0d7c -> line 730
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stInterpolationBt3WP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xNorm;
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    /*type_0x83*/ int hNewSuperObjPerso;
    AI_tdstMind_* p_stMind;
    unsigned char bWpAreAligned;
    unsigned char ucVarId2;
    unsigned char ucVarId1;
    float xTimeParameter;
    float xDC2;
    float xDC1;
    float xPlaneDist;
    MTH3D_tdstVector_ stSighting;
    MTH3D_tdstVector_ stPlaneNormal;
    MTH3D_tdstVector_ stPosNext;
    MTH3D_tdstVector_ stPosCurrent;
    MTH3D_tdstVector_ stPosPrevious;
    MTH3D_tdstVector_ stPV2;
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stPV1;
    MTH3D_tdstVector_ stV1;
    WP_tdstWayPoint_* hNext;
    WP_tdstWayPoint_* hCurrent;
    WP_tdstWayPoint_* hPrevious;
    MTH3D_tdstVector_ stProjCharPos;
    MTH3D_tdstVector_ stRadiusVec;
    float xRadiusNext;
    float xRadiusPrevious;
    float xRadius;
    float xReturnValue;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 312–439 */
/* addr: 0x00216690  size: 1184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 312
 *   +0x0038 -> line 337
 *   +0x0054 -> line 342
 *   +0x0080 -> line 343
 *   +0x0084 -> line 342
 *   +0x0088 -> line 343
 *   +0x00b0 -> line 346
 *   +0x00b4 -> line 343
 *   +0x00b8 -> line 346
 *   +0x00bc -> line 343
 *   +0x00c8 -> line 346
 *   +0x00d0 -> line 347
 *   +0x00d4 -> line 346
 *   +0x00d8 -> line 349
 *   +0x00e8 -> line 350
 *   +0x00ec -> line 352
 *   +0x00fc -> line 356
 *   +0x0104 -> line 353
 *   +0x0108 -> line 356
 *   +0x0110 -> line 357
 *   +0x0114 -> line 356
 *   +0x0118 -> line 357
 *   +0x0124 -> line 362
 *   +0x012c -> line 357
 *   +0x0138 -> line 358
 *   +0x013c -> line 362
 *   +0x0168 -> line 366
 *   +0x016c -> line 367
 *   +0x0170 -> line 366
 *   +0x0178 -> line 367
 *   +0x0180 -> line 370
 *   +0x01a0 -> line 374
 *   +0x01a4 -> line 375
 *   +0x01a8 -> line 374
 *   +0x01b0 -> line 375
 *   +0x01b8 -> line 378
 *   +0x01d0 -> line 382
 *   +0x01d4 -> line 383
 *   +0x01d8 -> line 382
 *   +0x01e0 -> line 383
 *   +0x01e8 -> line 387
 *   +0x01f0 -> line 388
 *   +0x01fc -> line 389
 *   +0x0208 -> line 392
 *   +0x0210 -> line 393
 *   +0x0214 -> line 400
 *   +0x021c -> line 406
 *   +0x0220 -> line 392
 *   +0x0224 -> line 407
 *   +0x0228 -> line 392
 *   +0x022c -> line 393
 *   +0x0230 -> line 392
 *   +0x0234 -> line 393
 *   +0x023c -> line 392
 *   +0x0244 -> line 393
 *   +0x024c -> line 392
 *   +0x0250 -> line 393
 *   +0x0254 -> line 392
 *   +0x0258 -> line 393
 *   +0x0260 -> line 392
 *   +0x026c -> line 393
 *   +0x0270 -> line 392
 *   +0x0278 -> line 393
 *   +0x027c -> line 401
 *   +0x0280 -> line 392
 *   +0x0288 -> line 400
 *   +0x028c -> line 412
 *   +0x0290 -> line 400
 *   +0x0294 -> line 401
 *   +0x0298 -> line 403
 *   +0x029c -> line 402
 *   +0x02a0 -> line 392
 *   +0x02a4 -> line 405
 *   +0x02b0 -> line 393
 *   +0x02b4 -> line 405
 *   +0x02bc -> line 406
 *   +0x02cc -> line 407
 *   +0x02d8 -> line 413
 *   +0x02dc -> line 406
 *   +0x02e0 -> line 407
 *   +0x02e4 -> line 413
 *   +0x02ec -> line 414
 *   +0x02f0 -> line 418
 *   +0x02f4 -> line 417
 *   +0x02f8 -> line 418
 *   +0x02fc -> line 417
 *   +0x0300 -> line 418
 *   +0x0304 -> line 424
 *   +0x0308 -> line 423
 *   +0x030c -> line 417
 *   +0x0310 -> line 418
 *   +0x0314 -> line 419
 *   +0x0318 -> line 422
 *   +0x0320 -> line 424
 *   +0x0324 -> line 422
 *   +0x0328 -> line 424
 *   +0x032c -> line 420
 *   +0x0330 -> line 422
 *   +0x0334 -> line 423
 *   +0x0344 -> line 422
 *   +0x0348 -> line 424
 *   +0x034c -> line 423
 *   +0x0350 -> line 424
 *   +0x0358 -> line 426
 *   +0x0388 -> line 427
 *   +0x03e8 -> line 431
 *   +0x0400 -> line 432
 *   +0x0410 -> line 431
 *   +0x0420 -> line 432
 *   +0x0428 -> line 433
 *   +0x0434 -> line 434
 *   +0x0444 -> line 433
 *   +0x0454 -> line 434
 *   +0x045c -> line 437
 *   +0x0464 -> line 438
 *   +0x0468 -> line 437
 *   +0x046c -> line 439
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stBezierBt3WP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xNorm;
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    /*type_0x83*/ int hNewSuperObjPerso;
    MTH3D_tdstVector_ p_stDirection;
    MTH3D_tdstVector_ p_stResult;
    float xIncrementStepOfU;
    float xU;
    float xC;
    float xB;
    float xA;
    MTH3D_tdstVector_ stParamatersVector;
    MTH3D_tdstVector_ stPosNext;
    MTH3D_tdstVector_ stP1;
    MTH3D_tdstVector_ stPosPrevious;
    WP_tdstWayPoint_* hNext;
    WP_tdstWayPoint_* hCurrent;
    WP_tdstWayPoint_* hPrevious;
    AI_tdstMind_* p_stMind;
    unsigned char ucVarId2;
    unsigned char ucVarId1;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 265–274 */
/* addr: 0x00216b30  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 265
 *   +0x0010 -> line 269
 *   +0x0018 -> line 271
 *   +0x0024 -> line 272
 *   +0x0030 -> line 273
 *   +0x0034 -> line 274
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float WP_fnx_WayPoint_GetRadius(WP_tdstWayPoint_* hWayPoint);

tdstNodeInterpret_* fn_p_stGetRadiusWP(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xReal;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    xReal = WP_fnx_WayPoint_GetRadius(p_stValue->uDummy.uParam.m_hWayPoint);
    p_stValue->uDummy.uParam.xValue = xReal;
    p_stValue->eType = E_vt_Float;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 259–261 */
/* addr: 0x00216b80  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 260
 *   +0x0004 -> line 259
 *   +0x002c -> line 261
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetMyAbsolutePosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    *(int*)&p_stValue->uDummy.uParam.stVectorValue.xX = *(int*)&p_SuperObjPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xX; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xY = *(int*)&p_SuperObjPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xY; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xZ = *(int*)&p_SuperObjPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xZ; p_stValue->eType = E_vt_Vector;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 236–245 */
/* addr: 0x00216bc0  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 236
 *   +0x001c -> line 240
 *   +0x0038 -> line 243
 *   +0x0040 -> line 244
 *   +0x0044 -> line 243
 *   +0x0074 -> line 245
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetPersoAbsolutePosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    *(int*)&p_stValue->uDummy.uParam.stVectorValue.xX = *(int*)&hNewSuperObjPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xX; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xY = *(int*)&hNewSuperObjPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xY; *(int*)&p_stValue->uDummy.uParam.stVectorValue.xZ = *(int*)&hNewSuperObjPerso->hGlobalMatrix->stTransformMatrix.stCol_3.xZ; p_stValue->eType = E_vt_Vector;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 191–226 */
/* addr: 0x00216c50  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 191
 *   +0x001c -> line 203
 *   +0x0038 -> line 207
 *   +0x0048 -> line 210
 *   +0x0064 -> line 213
 *   +0x0074 -> line 214
 *   +0x007c -> line 217
 *   +0x0088 -> line 219
 *   +0x008c -> line 220
 *   +0x0090 -> line 223
 *   +0x009c -> line 220
 *   +0x00a0 -> line 223
 *   +0x00b8 -> line 224
 *   +0x00cc -> line 225
 *   +0x00d0 -> line 224
 *   +0x00d8 -> line 226
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* PS2 MTH helpers: sqrt.s and the R5900 accumulator ops have no C form under
 * MWCC; only those instructions are asm. */
inline float MTH_xSqrt(float _xValue)
{
    float xResult;
    asm { sqrt.s xResult, _xValue }
    return xResult;
}

inline float MTH3D_xVectorGap(MTH3D_tdstVector_* _p_stA, MTH3D_tdstVector_* _p_stB)
{
    float xX, xY, xZ, xResult;
    xX = _p_stA->xX - _p_stB->xX; xY = _p_stA->xY - _p_stB->xY; xZ = _p_stA->xZ - _p_stB->xZ;
    asm { mula.s xX, xX }
    asm { madda.s xY, xY }
    asm { madd.s xResult, xZ, xZ }
    return MTH_xSqrt(xResult);
}

tdstNodeInterpret_* fn_p_stDistanceToPerso(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    HIE_tdstSuperObject_* p_SuperObjTarget;
    float xDistance;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    if (p_stValue->uDummy.uParam.xValue == 0)
    {
        p_stValue->uDummy.uParam.xValue = 3.402822e+38f;
        p_stValue->eType = E_vt_Float;
        return p_stTree;
    }
    else
    {
        p_SuperObjTarget = fn_h_StandardGameGetSuperObject(p_stValue->uDummy.uParam.p_stEngObjValue->h_StandardGame);
        xDistance = MTH3D_xVectorGap((MTH3D_tdstVector_*)&p_SuperObjTarget->hGlobalMatrix->stTransformMatrix.stCol_3, (MTH3D_tdstVector_*)&hNewSuperObjPerso->hGlobalMatrix->stTransformMatrix.stCol_3);
        p_stValue->uDummy.uParam.xValue = xDistance;
        p_stValue->eType = E_vt_Float;
        return p_stTree;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 134–182 */
/* addr: 0x00216d40  size: 476 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 134
 *   +0x001c -> line 146
 *   +0x0038 -> line 150
 *   +0x004c -> line 151
 *   +0x0058 -> line 157
 *   +0x005c -> line 156
 *   +0x0060 -> line 160
 *   +0x0068 -> line 164
 *   +0x0074 -> line 162
 *   +0x0078 -> line 164
 *   +0x00dc -> line 165
 *   +0x00e4 -> line 167
 *   +0x00ec -> line 169
 *   +0x00f4 -> line 173
 *   +0x0104 -> line 171
 *   +0x0108 -> line 173
 *   +0x016c -> line 174
 *   +0x0174 -> line 176
 *   +0x0180 -> line 179
 *   +0x01a4 -> line 180
 *   +0x01b8 -> line 181
 *   +0x01bc -> line 180
 *   +0x01c4 -> line 182
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stDistanceToPersoCenter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    /*type_0x83*/ int hNewSuperObjPerso;
    HIE_tdstSuperObject_* p_SuperObjTarget;
    MTH3D_tdstVector_* param0;
    MTH3D_tdstVector_ stCenter2;
    MTH3D_tdstVector_* p_stCenter1;
    MTH3D_tdstVector_ stCenter1;
    COL_tdstBoundingSphere_* hBoundingSphere2;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Function.c lines 100–121 */
/* addr: 0x00216f20  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 100
 *   +0x001c -> line 106
 *   +0x0020 -> line 101
 *   +0x0024 -> line 106
 *   +0x0030 -> line 109
 *   +0x0050 -> line 112
 *   +0x0058 -> line 113
 *   +0x0060 -> line 115
 *   +0x006c -> line 119
 *   +0x0078 -> line 120
 *   +0x007c -> line 121
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stR3GetValue(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned int ulIndEnv;
    tdstGetSetParam_ stParam;
    tdeFuncId_ eFuncId;
    unsigned int ulValue;

    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    ulValue = 0;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulIndEnv = stParam.uDummy.uParam.ulValue;

    switch (eFuncId)
    {
    case eFunc_R3GetScore:
        ulValue = fn_ulR3GetEnvScoreWithRevisit(ulIndEnv);
        break;
    case eFunc_R3GetNbCage:
        ulValue = fn_ulR3GetEnvNbCage(ulIndEnv);
        break;
    }

    p_stValue->uDummy.uParam.ulValue = ulValue;
    p_stValue->eType = E_vt_Integer;
    return p_stTree;
}
