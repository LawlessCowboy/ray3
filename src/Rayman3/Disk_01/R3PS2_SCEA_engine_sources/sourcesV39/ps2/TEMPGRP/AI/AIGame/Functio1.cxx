/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct DNM_stReport DNM_stReport;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct __sFILE __sFILE;
typedef struct stTfmtLineResults_ stTfmtLineResults_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct tdstStandardGame_ tdstStandardGame_;

typedef int tdeFuncId_;
struct MTH3D_tdstVector_ {
    float xX;
    float xY;
    float xZ;
};
/* Shared recovered AI value layout, also used by FuncRay2.cxx. */
typedef enum tdeVariableType_ { eVariableType_Dummy = 0 } tdeVariableType_;
union tduGetSetParam_ {
    int lValue;
    unsigned int ulValue;
    float xValue;
    MTH3D_tdstVector_ stVectorValue;
    void* pValue;
};
struct tdstGetSetParam_ {
    tduGetSetParam_ uParam;
    tdeVariableType_ eType;
};
union tduIdInterpret_ {
    tdeFuncId_ eFuncId;
};
union tduGetSetParamForNode_ {
    int lValue;
    unsigned int ulValue;
    float xValue;
    void* pValue;
};
union tduNodeDummy_ {
    tduIdInterpret_ uId;
    tduGetSetParamForNode_ uParam;
};
struct tdstNodeInterpret_ {
    tduNodeDummy_ uDummy;
    unsigned short uwNodeToSkip;
    unsigned char ucDepth;
    unsigned char eType;
};
typedef struct stTfmtStatus_ stTfmtStatus_;
struct stTfmtStatus_ {
    int data[8];
};

/* Recovered engine prefix and dependencies from 3dData.c; fields beyond the
 * language table are not used here. Preserve the recovered padding evidence. */
struct GLI_tdstCamera_;
struct tdstNodeCamera_;
struct tdstFamilyList_;
struct tdstAlwaysActiveCharacter_;
struct tdstNodeMainCharacter_;
struct tdstViewportManagement_;
struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    /* unsigned long is eight bytes on this compiler. The extractor's
     * +4..+7 padding overlapped m_ulLowPart and moved the +8 field. */
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
struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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
struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};
struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
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
    void* hLevelNameList; /* +0x638 */
    unsigned char _extractor_padding_01[0x1b6b - 0x63c]; /* +0x63c: matrices, level and demo names */
    unsigned char ucNumberOfDemos; /* +0x1b6b */
    unsigned char ucNumberOfLevels; /* +0x1b6c */
    unsigned char ucCurrentLevel; /* +0x1b6d */
    unsigned char ucPreviousLevel; /* +0x1b6e */
    unsigned char ucExitIdToQuitPrevLevel; /* +0x1b6f */
    unsigned char ucLevelGlobalCounter; /* +0x1b70 */
    unsigned char xDemoMode; /* +0x1b71 */
    unsigned char ucCurrentLanguage; /* +0x1b72 */
    unsigned char ucNbLanguages; /* +0x1b73 */
};
extern "C" tdstEngineStructure_ g_stEngineStructure;

struct tdstEngineObject_;
struct MAT_tdstTransformation_;
struct tdstBrain_ { AI_tdstMind_* p_stMind; /* +0x0 */ };
/* Recovered HIE layouts, as in MECTools.c. */
struct GEO_tdstGeometricObject_;
struct PO_tdstPhysicalObject_;
struct IPO_tdstInstanciatedPhysicalObject_;
struct SECT_tdstSector_;
struct GLI_tdstLight_;
struct HIE_tdstModifierObject_;
union HIE_tduLinkedObject_ {
    HIE_tdstSuperObject_* p_stSuperObject;
    GEO_tdstGeometricObject_* p_stGeometricObject;
    PO_tdstPhysicalObject_* p_stPhysicalObject;
    IPO_tdstInstanciatedPhysicalObject_* p_stInstanciatedPhysicalObject;
    SECT_tdstSector_* p_stSector;
    tdstEngineObject_* p_stCharacter;
    GLI_tdstLight_* p_stLight;
    HIE_tdstModifierObject_* p_stModifierObject;
    int p_Void;
};
struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject;
    HIE_tduLinkedObject_ hLinkedObject;
    HIE_tdstSuperObject_* hFirstElementDyn;
    HIE_tdstSuperObject_* hLastElementDyn;
    int lNumberOfElementsDyn;
    HIE_tdstSuperObject_* hNextBrotherDyn;
    HIE_tdstSuperObject_* hPrevBrotherDyn;
    HIE_tdstSuperObject_* hFatherDyn;
    MAT_tdstTransformation_* hLocalMatrix;
    MAT_tdstTransformation_* hGlobalMatrix;
    int lLastComputeFrame;
    int lDrawModeMask;
    unsigned int ulFlags;
    int hVisualBoundingVolume;
    int hCollideBoundingVolume;
    MTH3D_tdstVector_ stSemiLookAtVector;
    float fTransparenceLevel;
    unsigned int ulOutlineColor;
    int lDisplayPrioriry;
    int lIL_Status;
    MTH3D_tdstVector_ stIL_AmbientColor;
    MTH3D_tdstVector_ stIL_ParallelDirection;
    MTH3D_tdstVector_ stIL_ParallelColor;
    unsigned char ucSuperImposedOnWhichViewport;
    unsigned char bIsSPO;
    unsigned char xTransition;
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
struct tdst3dData_ {
    unsigned char _pad_00[0x84];
    float xCurrentFrame; /* +0x84 */
    unsigned char _pad_01[0x182 - 0x88];
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    unsigned char _pad_02[0x196 - 0x183];
    unsigned char ucLightComputationFrequency; /* +0x196 */
};
struct tdstEngineObject_ {
    tdst3dData_* h_3dData; /* +0x0 */
    tdstStandardGame_* h_StandardGame; /* +0x4 */
    tdstDynam_* h_Dynam; /* +0x8 */
    tdstBrain_* h_Brain; /* +0xc */
    void* h_Cineinfo; /* +0x10 */
    tdstCollSet_* h_CollSet; /* +0x14 */
    void* h_MSWay; /* +0x18 */
    void* h_MSLight; /* +0x1c */
    void* h_SectInfo; /* +0x20 */
    void* h_Micro; /* +0x24 */
    tdstMSSound_* h_MSSound; /* +0x28 */
};
extern "C" void fn_vOnAIErm_M_UpdateLastError(int FatalErrorNum, void* szMsg);

struct tdstMSSound_ { int dummy; };
extern "C" int fn_xMSSoundGetBackGroundDistance(tdstMSSound_*);
extern "C" int fn_xMSSoundGetSaturationDistance(tdstMSSound_*);
extern "C" HIE_tdstSuperObject_* fn_h_StandardGameGetSuperObject(tdstStandardGame_*);
extern "C" HIE_tdstSuperObject_* fn_hSuperObjectGetLastCollidedCharacter(HIE_tdstSuperObject_*);
struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    void* hMyMaterial; /* +0x1c */
    void* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
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
};
extern "C" DNM_stReport* fn_pstGetDNMReport(HIE_tdstSuperObject_*);
extern "C" unsigned char fn_ucCollSetGetCollComputeFrequency(tdstCollSet_*);
extern "C" float fn_xStandardGameGetCustomFloatSO(HIE_tdstSuperObject_*, long);
extern "C" int fn_lStandardGameGetCustomLongSO(HIE_tdstSuperObject_*, long);
extern "C" void fn_vStandardGameGetCustomVectorSO(HIE_tdstSuperObject_*, long, MTH3D_tdstVector_*);
extern "C" DNM_stDynamics* fn_p_stDynamGetDynamics(tdstDynam_*);
extern "C" unsigned char CS_fn_eGetPrivilegedActivationZone(unsigned char, tdstCollSet_*, short);
struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    short* d_xListOfElementsTypes; /* +0xc */
};
extern "C" COL_tdstCollideObject_* fn_hGetCollideZdxOfTypeAtIndex(unsigned char, unsigned short, HIE_tdstSuperObject_*);
extern "C" void COL_vGetMinMaxPointOfIndexedAlignedBox(COL_tdstCollideObject_*, short, short, short*, short*);
extern "C" void COL_vGetPointOfObject(COL_tdstCollideObject_*, MTH3D_tdstVector_*, short);
extern "C" void COL_fn_vGetInfoFromGeometricSphere(MTH3D_tdstVector_*, float*, COL_tdstCollideObject_*);
/* Statement-level asm for abs.s, which MWCC cannot emit from C. */
inline float MTH_xAbs(float _x) { float _r; asm { abs.s _r, _x } return _r; }
/* R5900 accumulator square of three components and the R5900 square root. */
inline float MTH_xSqr3(float _x, float _y, float _z) { float _r; asm { mula.s _x, _x } asm { madda.s _y, _y } asm { madd.s _r, _z, _z } return _r; }
inline float MTH_xSqrt(float _x) { float _r; asm { sqrt.s _r, _x } return _r; }
inline void MTH3D_M_vAddVector(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A, MTH3D_tdstVector_* B)
{
    R->xX = A->xX + B->xX;
    R->xY = A->xY + B->xY;
    R->xZ = A->xZ + B->xZ;
}
inline void MTH3D_M_vMulScalar(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A, float k)
{
    R->xX = k * A->xX;
    R->xY = k * A->xY;
    R->xZ = k * A->xZ;
}
inline void MTH3D_M_vAbsSubVector(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A, MTH3D_tdstVector_* B)
{
    R->xX = MTH_xAbs(A->xX - B->xX);
    R->xY = MTH_xAbs(A->xY - B->xY);
    R->xZ = MTH_xAbs(A->xZ - B->xZ);
}
inline float MTH3D_xScalarProduct(MTH3D_tdstVector_* left, MTH3D_tdstVector_* right)
{
    float rz, lz, ry, ly, rx, lx;
    rx = right->xX; lx = left->xX;
    ry = right->xY; ly = left->xY;
    rz = right->xZ; lz = left->xZ;
    float xResult;
    asm { mula.s lx, rx }
    asm { madda.s ly, ry }
    asm { madd.s xResult, lz, rz }
    return xResult;
}
inline void MTH3D_M_vCopy(MTH3D_tdstVector_* R, MTH3D_tdstVector_* A)
{
    R->xX = A->xX;
    R->xY = A->xY;
    R->xZ = A->xZ;
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
extern "C" unsigned char fn_ucGetFunctionUltraOperator(tdeFuncId_);
extern "C" void fn_vGetUltraOperatorPerso(unsigned char, HIE_tdstSuperObject_*, HIE_tdstSuperObject_**);
extern "C" void MAT_fn_vGetRotationVectorBaseJ(MAT_tdstTransformation_*, MTH3D_tdstVector_*);
extern "C" int printf(const char*, ...);
extern "C" int atoi(const char*);
extern "C" char* fn_szGetStringFromTextOrStringParam(tdstGetSetParam_*);
struct IPT_tdstEntryElement_;
/* Debug recovery says void, but the callee returns a string pointer in v0
 * and this callback stores it as its type-9 result. */
extern "C" char* IPT_fn_szGetStringOf(IPT_tdstEntryElement_*);
extern "C" tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_*, tdstNodeInterpret_*, tdstGetSetParam_*);
extern "C" tdstNodeInterpret_* fn_p_stOperatorGetPerso(HIE_tdstSuperObject_*, tdstNodeInterpret_*, HIE_tdstSuperObject_**);
extern "C" unsigned char fn_ucGetDsgVar(unsigned char, unsigned char, AI_tdstMind_*, tdstGetSetParam_*);
extern "C" unsigned char fn_ucSetDsgVar(unsigned char, unsigned char, AI_tdstMind_*, tdstGetSetParam_*);
extern "C" void fn_vComputeCollideResult(HIE_tdstSuperObject_*, int);
extern "C" int GMT_fn_hGetCollideMaterialIdentifier(int);
/* Sector list / border layouts as seen by the retail collide code. */
struct SECT_tdstSectorElement_ {
    unsigned char ucField0; /* +0x0 */
    unsigned char ucField1; /* +0x1 */
    unsigned char ucType; /* +0x2 */
    void* hSector; /* +0x4 */
    void* hNext; /* +0x8 */
};
struct SECT_tdstCharElement_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    struct SECT_tdstCharElement_* p_stNextElement; /* +0x4 */
};
struct SECT_tdstCharList_ {
    SECT_tdstCharElement_* p_stFirstElement; /* +0x0 */
    struct SECT_tdstCharList_* p_stNextElement; /* +0x4 */
};
struct SECT_tdstBorder_ {
    void* p_stBorder; /* +0x0 */
    SECT_tdstCharList_* p_stCharacterList; /* +0x4 */
};
struct SECT_tdstSectorList_ {
    SECT_tdstCharElement_* p_stFirstElement; /* +0x0 */
    SECT_tdstSectorElement_* p_aElement; /* +0x20 */
    unsigned int ulNbElement; /* +0x24 */
    SECT_tdstBorder_* p_aBorder; /* +0x30 */
    unsigned int ulNbBorder; /* +0x34 */
    SECT_tdstCharList_* p_aCharacterList; /* +0x38 */
};
struct SECT_tdstSector_ {
    void* hField0; /* +0x0 */
    SECT_tdstSectorList_* p_stSectorList; /* +0x4 */
};
extern "C" {
    extern HIE_tdstSuperObject_* SECT_hFatherSector;
    extern unsigned int g_ulSpoMask;
    extern SECT_tdstSector_* SECT_fn_hResearchInWhatSectorIAm(void*, MTH3D_tdstVector_*);
    extern int SECT_fn_bIsThisSectorVirtual(void*);
    extern void SECT_fn_vGetMinPointInBorder(void*, MTH3D_tdstVector_*);
    extern void SECT_fn_vGetMaxPointInBorder(void*, MTH3D_tdstVector_*);
    extern int HIE_bIntersectSegmentWithFirstSuperObject(MTH3D_tdstVector_*, MTH3D_tdstVector_*, void*, MTH3D_tdstVector_*, MTH3D_tdstVector_*, HIE_tdstSuperObject_**, GMT_tdstCollideMaterial_**);
    extern int INT_fn_bDetectIntersectSegmentWithBox(MTH3D_tdstVector_*, MTH3D_tdstVector_*, MTH3D_tdstVector_*, MTH3D_tdstVector_*);
    extern unsigned int fn_ulStandardGameGetCustomBitsSO(HIE_tdstSuperObject_*);
}
/* Collide globals used by the AI collision queries. The retail object writes
 * the y/z components of the parameter vector through its own unnamed
 * symbols, so those two are declared separately to keep the relocations. */
extern "C" {
    extern MTH3D_tdstVector_ g_stCollideResultVector;
    extern MTH3D_tdstVector_ g_stCollideResultPoint;
    extern MTH3D_tdstVector_ g_stCollideParameterVector;
    extern MTH3D_tdstVector_ g_stCollideParameterPoint;
    extern int D_4FAE5C;
    extern int D_4FAE60;
    extern unsigned int g_ulTypeMode;
    extern unsigned int g_ulCollideTimeCounter;
    extern unsigned int g_ulMode;
    extern unsigned int g_xMask;
    extern unsigned int g_ulOverRideRayTraceSpoMask;
    extern HIE_tdstSuperObject_* g_hSuperObjectHit;
    extern GMT_tdstCollideMaterial_* g_hColMatHit;}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3961–4404 */
/* addr: 0x00216fc0  size: 2348 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3961
 *   +0x0004 -> line 3965
 *   +0x0008 -> line 3961
 *   +0x003c -> line 3962
 *   +0x0040 -> line 3965
 *   +0x0068 -> line 3980
 *   +0x0080 -> line 3981
 *   +0x0094 -> line 3983
 *   +0x00ac -> line 3998
 *   +0x00b0 -> line 4000
 *   +0x00cc -> line 4012
 *   +0x00d8 -> line 4014
 *   +0x00f0 -> line 4017
 *   +0x0118 -> line 4019
 *   +0x0130 -> line 4020
 *   +0x0134 -> line 4019
 *   +0x0140 -> line 4023
 *   +0x0160 -> line 4024
 *   +0x0170 -> line 4025
 *   +0x0188 -> line 4027
 *   +0x0198 -> line 4028
 *   +0x01b0 -> line 4041
 *   +0x01c0 -> line 4043
 *   +0x01c8 -> line 4059
 *   +0x01cc -> line 4063
 *   +0x01d0 -> line 4059
 *   +0x01f8 -> line 4063
 *   +0x0208 -> line 4064
 *   +0x0214 -> line 4066
 *   +0x0228 -> line 4067
 *   +0x022c -> line 4066
 *   +0x0238 -> line 4067
 *   +0x0248 -> line 4071
 *   +0x0254 -> line 4072
 *   +0x0258 -> line 4071
 *   +0x025c -> line 4072
 *   +0x0260 -> line 4074
 *   +0x0268 -> line 4088
 *   +0x026c -> line 4103
 *   +0x0278 -> line 4104
 *   +0x02a8 -> line 4106
 *   +0x02b8 -> line 4107
 *   +0x02e4 -> line 4109
 *   +0x02f4 -> line 4111
 *   +0x0304 -> line 4119
 *   +0x0310 -> line 4121
 *   +0x0318 -> line 4122
 *   +0x0348 -> line 4123
 *   +0x0360 -> line 4128
 *   +0x0370 -> line 4125
 *   +0x0374 -> line 4128
 *   +0x0380 -> line 4129
 *   +0x039c -> line 4142
 *   +0x03a4 -> line 4143
 *   +0x03ac -> line 4145
 *   +0x03b8 -> line 4148
 *   +0x03c4 -> line 4151
 *   +0x03f0 -> line 4154
 *   +0x03f8 -> line 4157
 *   +0x0410 -> line 4159
 *   +0x0428 -> line 4161
 *   +0x042c -> line 4164
 *   +0x0438 -> line 4166
 *   +0x0460 -> line 4170
 *   +0x0474 -> line 4173
 *   +0x0480 -> line 4175
 *   +0x04a8 -> line 4177
 *   +0x04b0 -> line 4181
 *   +0x04b4 -> line 4179
 *   +0x04b8 -> line 4181
 *   +0x04bc -> line 4179
 *   +0x04d0 -> line 4181
 *   +0x04d8 -> line 4186
 *   +0x04e0 -> line 4191
 *   +0x04f4 -> line 4192
 *   +0x0500 -> line 4194
 *   +0x0504 -> line 4196
 *   +0x0508 -> line 4197
 *   +0x0530 -> line 4198
 *   +0x0548 -> line 4217
 *   +0x0558 -> line 4218
 *   +0x055c -> line 4219
 *   +0x056c -> line 4218
 *   +0x0570 -> line 4219
 *   +0x0578 -> line 4220
 *   +0x057c -> line 4219
 *   +0x0580 -> line 4220
 *   +0x0590 -> line 4238
 *   +0x05a8 -> line 4240
 *   +0x05b0 -> line 4256
 *   +0x05b4 -> line 4258
 *   +0x05c0 -> line 4262
 *   +0x0600 -> line 4266
 *   +0x0604 -> line 4267
 *   +0x0608 -> line 4270
 *   +0x0648 -> line 4277
 *   +0x0650 -> line 4279
 *   +0x0670 -> line 4283
 *   +0x067c -> line 4290
 *   +0x0680 -> line 4291
 *   +0x069c -> line 4292
 *   +0x06a0 -> line 4291
 *   +0x06a4 -> line 4293
 *   +0x06b8 -> line 4295
 *   +0x06bc -> line 4296
 *   +0x06c0 -> line 4295
 *   +0x06c4 -> line 4296
 *   +0x06c8 -> line 4298
 *   +0x06d0 -> line 4318
 *   +0x06dc -> line 4319
 *   +0x070c -> line 4321
 *   +0x071c -> line 4322
 *   +0x0748 -> line 4324
 *   +0x0758 -> line 4325
 *   +0x0784 -> line 4327
 *   +0x0794 -> line 4329
 *   +0x07a4 -> line 4337
 *   +0x07a8 -> line 4338
 *   +0x07b4 -> line 4341
 *   +0x07bc -> line 4344
 *   +0x07d8 -> line 4347
 *   +0x07e8 -> line 4350
 *   +0x0808 -> line 4354
 *   +0x0810 -> line 4356
 *   +0x0830 -> line 4359
 *   +0x083c -> line 4366
 *   +0x0840 -> line 4367
 *   +0x085c -> line 4369
 *   +0x0868 -> line 4373
 *   +0x086c -> line 4376
 *   +0x0874 -> line 4379
 *   +0x0880 -> line 4387
 *   +0x0888 -> line 4389
 *   +0x08c4 -> line 4393
 *   +0x08cc -> line 4395
 *   +0x08e0 -> line 4397
 *   +0x08e4 -> line 4398
 *   +0x08e8 -> line 4397
 *   +0x08ec -> line 4398
 *   +0x08f4 -> line 4403
 *   +0x08f8 -> line 4404
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCreditsManagementFunctions(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int begin;
    char* hText;
    unsigned int i;
    unsigned int NbNames;
    unsigned int ligne;
    unsigned int lIndex;
    unsigned int lLanguage;
    unsigned int lPage;
    tdstGetSetParam_ stParam;
    long offset;
    int r;
    char buffer[101];
    int end;
    unsigned int pages;
    unsigned int caract;
    unsigned int lChapter;
    __sFILE* pCreditsFile;
    unsigned int header;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3943–3943 */
/* addr: 0x002178f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3943
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetXBoxRegion(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3897–3912 */
/* addr: 0x00217900  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3897
 *   +0x0010 -> line 3902
 *   +0x0018 -> line 3908
 *   +0x001c -> line 3909
 *   +0x0020 -> line 3908
 *   +0x0028 -> line 3909
 *   +0x002c -> line 3912
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stComputeNot(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam1;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam1);
    p_stValue->uParam.lValue = ~stParam1.uParam.lValue;
    p_stValue->eType = (tdeVariableType_)7;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3837–3894 */
/* addr: 0x00217940  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3837
 *   +0x0020 -> line 3851
 *   +0x0024 -> line 3837
 *   +0x0028 -> line 3841
 *   +0x002c -> line 3851
 *   +0x0038 -> line 3855
 *   +0x0044 -> line 3858
 *   +0x004c -> line 3861
 *   +0x005c -> line 3865
 *   +0x0088 -> line 3869
 *   +0x0090 -> line 3872
 *   +0x0098 -> line 3875
 *   +0x00a0 -> line 3877
 *   +0x00b0 -> line 3878
 *   +0x00b8 -> line 3881
 *   +0x00c0 -> line 3884
 *   +0x00c8 -> line 3886
 *   +0x00cc -> line 3890
 *   +0x00d0 -> line 3891
 *   +0x00d8 -> line 3893
 *   +0x00dc -> line 3894
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stComputeXor(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam1;
    tdstGetSetParam_ stParam2;
    tdeFuncId_ eFuncId;
    unsigned int ulValue;
    unsigned int ulParam1;
    unsigned int ulParam2;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    ulValue = 0;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam1);
    ulParam1 = stParam1.uParam.ulValue;
    if (eFuncId == 0x172) {
        ulValue = *(unsigned int*)ulParam1;
    } else {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam2);
        ulParam2 = stParam2.uParam.ulValue;
        switch (eFuncId) {
        case 0x16A: ulValue = ulParam1 ^ ulParam2; break;
        case 0x16B: ulValue = ulParam1 & ulParam2; break;
        case 0x16C: ulValue = ulParam1 | ulParam2; break;
        case 0x16E: ulValue = ulParam1 / ulParam2; break;
        case 0x16F: ulValue = ulParam1 * ulParam2; break;
        case 0x170: ulValue = ulParam1 + ulParam2; break;
        case 0x171: ulValue = ulParam1 - ulParam2; break;
        }
    }
    p_stValue->uParam.ulValue = ulValue;
    p_stValue->eType = (tdeVariableType_)7;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3672–3701 */
/* addr: 0x00217a40  size: 192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3672
 *   +0x0028 -> line 3676
 *   +0x002c -> line 3672
 *   +0x0030 -> line 3674
 *   +0x0034 -> line 3681
 *   +0x004c -> line 3683
 *   +0x0058 -> line 3685
 *   +0x0060 -> line 3687
 *   +0x0070 -> line 3690
 *   +0x007c -> line 3691
 *   +0x0084 -> line 3693
 *   +0x008c -> line 3698
 *   +0x0098 -> line 3700
 *   +0x009c -> line 3701
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetCurrentFrame(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hPerso;
    tdeFuncId_ eFuncId;
    tdst3dData_* h3dData;
    unsigned int ulValue;
    ulValue = 0;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hPerso);
    h3dData = hPerso->hLinkedObject.p_stCharacter->h_3dData;
    if (h3dData != NULL) {
        switch (eFuncId) {
        case 359:
            ulValue = (unsigned short)MTH_M_xRealToLong(h3dData->xCurrentFrame);
            break;
        default:
            fn_vOnAIErm_M_UpdateLastError(39, NULL);
            break;
        }
    }
    p_stValue->uParam.lValue = ulValue; p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3628–3663 */
/* addr: 0x00217b00  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3628
 *   +0x0028 -> line 3632
 *   +0x002c -> line 3630
 *   +0x0030 -> line 3637
 *   +0x0048 -> line 3639
 *   +0x0054 -> line 3641
 *   +0x005c -> line 3643
 *   +0x0080 -> line 3647
 *   +0x0088 -> line 3650
 *   +0x0090 -> line 3653
 *   +0x0098 -> line 3655
 *   +0x00a0 -> line 3660
 *   +0x00ac -> line 3662
 *   +0x00b0 -> line 3663
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetStdGameLimit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hPerso;
    tdeFuncId_ eFuncId;
    tdstStandardGame_* hStdGame;
    unsigned int ulValue;
    ulValue = 0;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hPerso);
    hStdGame = hPerso->hLinkedObject.p_stCharacter->h_StandardGame;
    if (hStdGame != NULL) {
        switch (eFuncId) {
        case 356:
            ulValue = hStdGame->ucTooFarLimit;
            break;
        case 357:
            ulValue = hStdGame->ucTransparencyZoneMin;
            break;
        case 358:
            ulValue = hStdGame->ucTransparencyZoneMax;
            break;
        default:
            fn_vOnAIErm_M_UpdateLastError(39, NULL);
            break;
        }
    }
    p_stValue->uParam.lValue = ulValue;
    p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3577–3616 */
/* addr: 0x00217bd0  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3577
 *   +0x0028 -> line 3581
 *   +0x002c -> line 3579
 *   +0x0030 -> line 3587
 *   +0x0048 -> line 3589
 *   +0x0054 -> line 3591
 *   +0x005c -> line 3593
 *   +0x0078 -> line 3596
 *   +0x0080 -> line 3598
 *   +0x0088 -> line 3600
 *   +0x0090 -> line 3602
 *   +0x0098 -> line 3604
 *   +0x00a0 -> line 3613
 *   +0x00ac -> line 3615
 *   +0x00b0 -> line 3616
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetMSSoundValues(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hPerso;
    tdeFuncId_ eFuncId;
    tdstMSSound_* hMSSound;
    unsigned int ulValue;
    int xSndValue;
    ulValue = 0;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hPerso);
    hMSSound = hPerso->hLinkedObject.p_stCharacter->h_MSSound;
    if (hMSSound != NULL) {
        switch (eFuncId) {
        case 354:
            xSndValue = fn_xMSSoundGetSaturationDistance(hMSSound);
            ulValue = xSndValue >> 16;
            break;
        case 355:
            xSndValue = fn_xMSSoundGetBackGroundDistance(hMSSound);
            ulValue = xSndValue >> 16;
            break;
        default:
            fn_vOnAIErm_M_UpdateLastError(39, NULL);
            break;
        }
    }
    p_stValue->uParam.lValue = ulValue;
    p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3562–3565 */
/* addr: 0x00217ca0  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3562
 *   +0x000c -> line 3564
 *   +0x0010 -> line 3565
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetVideoOptions(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uParam.lValue = 1;
    p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3517–3525 */
/* addr: 0x00217cc0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3517
 *   +0x0004 -> line 3522
 *   +0x0008 -> line 3517
 *   +0x000c -> line 3522
 *   +0x0010 -> line 3517
 *   +0x0014 -> line 3522
 *   +0x001c -> line 3524
 *   +0x0020 -> line 3525
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The callback's unused a0 parameter is omitted by debug recovery; the target
 * preserves p_stTree from a1 across printf. */
tdstNodeInterpret_* fn_p_stGetBrightness(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    printf("jt :  fn_p_stGetBrightness non implementee dans functio1.cxx");
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3481–3507 */
/* addr: 0x00217cf0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3481
 *   +0x0010 -> line 3486
 *   +0x0018 -> line 3493
 *   +0x001c -> line 3486
 *   +0x0020 -> line 3493
 *   +0x0028 -> line 3495
 *   +0x0034 -> line 3506
 *   +0x0038 -> line 3495
 *   +0x0040 -> line 3505
 *   +0x0048 -> line 3507
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetNameResolution(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    static char szName[60];
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    printf("jt : fn_p_stGetNameResolution non impl\xe9ment\xe9" "e dans functio1.cxx");
    p_stValue->uParam.pValue = szName;
    p_stValue->eType = (tdeVariableType_)9;
    p_stValue->uParam.pValue = szName;
    p_stValue->eType = (tdeVariableType_)9;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3465–3465 */
/* addr: 0x00217d50  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3465
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stIsDisplayModeAvailable(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    return fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3451–3451 */
/* addr: 0x00217d60  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3451
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSaveCurrentResolution(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    (void)p_SuperObjPerso;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3421–3430 */
/* addr: 0x00217d70  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3421
 *   +0x0004 -> line 3426
 *   +0x0008 -> line 3421
 *   +0x000c -> line 3426
 *   +0x0010 -> line 3421
 *   +0x0014 -> line 3426
 *   +0x001c -> line 3429
 *   +0x0020 -> line 3430
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetCurrentResolution(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    printf(" jt : fn_p_stGetCurrentResolution non impl�ment�e dans functi1.cxx");
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3402–3411 */
/* addr: 0x00217da0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3402
 *   +0x0004 -> line 3407
 *   +0x0008 -> line 3402
 *   +0x000c -> line 3407
 *   +0x0010 -> line 3402
 *   +0x0014 -> line 3407
 *   +0x001c -> line 3410
 *   +0x0020 -> line 3411
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetNbAvailableResolution(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    printf(" jt : fn_p_stGetNbAvailableResolution pas impl�ment�e dasn functio1.cxx");
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3362–3373 */
/* addr: 0x00217dd0  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3362
 *   +0x0014 -> line 3367
 *   +0x0020 -> line 3368
 *   +0x0028 -> line 3370
 *   +0x003c -> line 3372
 *   +0x0040 -> line 3373
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTextToInt(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    char* pszString;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    pszString = fn_szGetStringFromTextOrStringParam(&stParam);
    p_stValue->uParam.lValue = atoi(pszString); p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3346–3352 */
/* addr: 0x00217e30  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3346
 *   +0x0010 -> line 3348
 *   +0x0018 -> line 3350
 *   +0x0044 -> line 3352
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetLanguageText(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_stValue->uParam.pValue = g_stEngineStructure.p_stLanguageTable[stParam.uParam.lValue].szLanguageText; p_stValue->eType = (tdeVariableType_)9;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3336–3338 */
/* addr: 0x00217e90  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3336
 *   +0x000c -> line 3337
 *   +0x0010 -> line 3336
 *   +0x0014 -> line 3338
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetNbLanguages(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uParam.lValue = g_stEngineStructure.ucNbLanguages; p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3326–3328 */
/* addr: 0x00217eb0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3326
 *   +0x000c -> line 3327
 *   +0x0010 -> line 3326
 *   +0x0014 -> line 3328
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetCurrentLanguageId(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uParam.lValue = g_stEngineStructure.ucCurrentLanguage; p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3315–3317 */
/* addr: 0x00217ed0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3315
 *   +0x0008 -> line 3316
 *   +0x000c -> line 3317
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetDriversAvailable(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uParam.lValue = 0; p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3289–3303 */
/* addr: 0x00217ef0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3289
 *   +0x0014 -> line 3292
 *   +0x001c -> line 3298
 *   +0x0034 -> line 3302
 *   +0x0038 -> line 3303
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetButtonName(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_stValue->uParam.pValue = IPT_fn_szGetStringOf((IPT_tdstEntryElement_*)stParam.uParam.pValue); p_stValue->eType = (tdeVariableType_)9;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3181–3282 */
/* addr: 0x00217f40  size: 544 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3181
 *   +0x0004 -> line 3195
 *   +0x0008 -> line 3181
 *   +0x0038 -> line 3195
 *   +0x003c -> line 3182
 *   +0x0040 -> line 3195
 *   +0x0068 -> line 3208
 *   +0x006c -> line 3195
 *   +0x0074 -> line 3208
 *   +0x0078 -> line 3195
 *   +0x0084 -> line 3208
 *   +0x0090 -> line 3221
 *   +0x0094 -> line 3209
 *   +0x0098 -> line 3223
 *   +0x009c -> line 3213
 *   +0x00a0 -> line 3221
 *   +0x00a8 -> line 3213
 *   +0x00ac -> line 3223
 *   +0x00c8 -> line 3227
 *   +0x00e8 -> line 3231
 *   +0x0100 -> line 3233
 *   +0x0108 -> line 3244
 *   +0x011c -> line 3255
 *   +0x0120 -> line 3245
 *   +0x0124 -> line 3256
 *   +0x0128 -> line 3249
 *   +0x0130 -> line 3256
 *   +0x013c -> line 3258
 *   +0x0160 -> line 3261
 *   +0x0174 -> line 3262
 *   +0x0180 -> line 3265
 *   +0x0190 -> line 3267
 *   +0x01a8 -> line 3268
 *   +0x01b8 -> line 3270
 *   +0x01c8 -> line 3271
 *   +0x01d0 -> line 3272
 *   +0x01d8 -> line 3277
 *   +0x01e0 -> line 3278
 *   +0x01e8 -> line 3281
 *   +0x01f0 -> line 3282
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetBooleanInArray(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    AI_tdstMind_* p_stMind;
    unsigned char ucArrayId;
    tdeFuncId_ eFuncId;
    unsigned int ulIndexLong;
    unsigned int ulValue;
    unsigned int ulIndexBit;
    unsigned int ulLastIndex;
    unsigned int ulIndexLastLong;
    unsigned int ulIndexLastBit;
    unsigned int ulNumberOfBits;
    unsigned int ulIndexFirstBit;
    unsigned int ulIndexFirstLong;
    unsigned int ulFirstIndex;
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    if (p_stTree->eType == 2) {
        p_stTree = fn_p_stOperatorGetPerso(p_SuperObjPerso, p_stTree + 1, &p_stResultOwnerPerso);
    } else {
        p_stResultOwnerPerso = p_SuperObjPerso;
    }
    p_stMind = p_stResultOwnerPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind;
    ucArrayId = (unsigned char)p_stTree->uDummy.uId.eFuncId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree + 1, p_stValue);
    ulValue = p_stValue->uParam.lValue - 1;
    ulIndexLong = ulValue >> 5;
    ulIndexBit = ulValue & 0x1F;
    p_stValue->uParam.lValue = 0;
    p_stValue->eType = (tdeVariableType_)6;
    switch (eFuncId) {
    case 0x14F:
        if (fn_ucGetDsgVar(ucArrayId, (unsigned char)ulIndexLong, p_stMind, p_stValue) == 1) {
            p_stValue->uParam.lValue = (p_stValue->uParam.lValue & (1u << ulIndexBit)) ? 1 : 0;

            p_stValue->eType = (tdeVariableType_)6;
        }
        break;
    case 0x150:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
        ulNumberOfBits = 0;
        ulFirstIndex = ulIndexLong;
        ulValue = p_stValue->uParam.lValue - 1;
        ulLastIndex = ulValue >> 5;
        ulIndexLastBit = ulValue & 0x1F;
        for (ulIndexFirstLong = ulFirstIndex; ulIndexFirstLong <= ulLastIndex; ulIndexFirstLong++) {
            if (fn_ucGetDsgVar(ucArrayId, (unsigned char)ulIndexFirstLong, p_stMind, p_stValue) != 1) { continue; }
            ulValue = p_stValue->uParam.lValue;
            ulIndexFirstBit = (ulIndexFirstLong == ulFirstIndex) ? ulIndexBit : 0;
            ulIndexLastLong = (ulIndexFirstLong == ulLastIndex) ? ulIndexLastBit : 0x1F;
            for (; ulIndexFirstBit <= ulIndexLastLong; ulIndexFirstBit++) {
                if (ulValue & (1 << ulIndexFirstBit)) { ulNumberOfBits++; }
            }
        }
        p_stValue->uParam.lValue = ulNumberOfBits;
        p_stValue->eType = (tdeVariableType_)6;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3060–3177 */
/* addr: 0x00218160  size: 920 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3060
 *   +0x003c -> line 3081
 *   +0x0058 -> line 3084
 *   +0x0060 -> line 3087
 *   +0x0064 -> line 3084
 *   +0x006c -> line 3087
 *   +0x0080 -> line 3088
 *   +0x0090 -> line 3090
 *   +0x0098 -> line 3088
 *   +0x009c -> line 3090
 *   +0x00a4 -> line 3091
 *   +0x00b4 -> line 3093
 *   +0x00bc -> line 3091
 *   +0x00c0 -> line 3093
 *   +0x00c8 -> line 3094
 *   +0x00cc -> line 3093
 *   +0x00d0 -> line 3094
 *   +0x00ec -> line 3096
 *   +0x0104 -> line 3098
 *   +0x010c -> line 3099
 *   +0x0110 -> line 3098
 *   +0x0124 -> line 3099
 *   +0x012c -> line 3103
 *   +0x0130 -> line 3104
 *   +0x0134 -> line 3103
 *   +0x0138 -> line 3104
 *   +0x0148 -> line 3105
 *   +0x014c -> line 3108
 *   +0x0160 -> line 3110
 *   +0x0164 -> line 3109
 *   +0x0168 -> line 3110
 *   +0x016c -> line 3109
 *   +0x0174 -> line 3110
 *   +0x0190 -> line 3113
 *   +0x019c -> line 3114
 *   +0x01a4 -> line 3127
 *   +0x01a8 -> line 3128
 *   +0x01ac -> line 3127
 *   +0x01c0 -> line 3128
 *   +0x01c8 -> line 3130
 *   +0x01d0 -> line 3131
 *   +0x01d8 -> line 3133
 *   +0x01e0 -> line 3134
 *   +0x01e4 -> line 3133
 *   +0x01f8 -> line 3134
 *   +0x0200 -> line 3137
 *   +0x0204 -> line 3138
 *   +0x021c -> line 3140
 *   +0x0224 -> line 3141
 *   +0x0228 -> line 3140
 *   +0x023c -> line 3141
 *   +0x0244 -> line 3151
 *   +0x0248 -> line 3148
 *   +0x024c -> line 3145
 *   +0x0250 -> line 3151
 *   +0x0254 -> line 3148
 *   +0x0258 -> line 3151
 *   +0x0260 -> line 3145
 *   +0x0268 -> line 3151
 *   +0x026c -> line 3145
 *   +0x0280 -> line 3149
 *   +0x0284 -> line 3151
 *   +0x028c -> line 3152
 *   +0x029c -> line 3154
 *   +0x02a4 -> line 3155
 *   +0x02a8 -> line 3154
 *   +0x02bc -> line 3155
 *   +0x02c4 -> line 3158
 *   +0x02c8 -> line 3164
 *   +0x02d0 -> line 3158
 *   +0x02d4 -> line 3161
 *   +0x02dc -> line 3158
 *   +0x02e0 -> line 3164
 *   +0x02e4 -> line 3158
 *   +0x02e8 -> line 3161
 *   +0x02ec -> line 3158
 *   +0x02f0 -> line 3161
 *   +0x02f4 -> line 3164
 *   +0x02f8 -> line 3161
 *   +0x02fc -> line 3164
 *   +0x0300 -> line 3166
 *   +0x030c -> line 3169
 *   +0x0328 -> line 3171
 *   +0x033c -> line 3175
 *   +0x0344 -> line 3176
 *   +0x0348 -> line 3175
 *   +0x0360 -> line 3177
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_ComputeJumpImpulsion(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstDynam_* h_Dynam;
    DNM_stDynamics* p_stDynamic;
    float xb;
    float xa;
    float xt;
    float xDelta;
    float xG;
    float xZmax;
    MTH3D_tdstVector_ stNullVector;
    MTH3D_tdstVector_ stImpulsion;
    MTH3D_tdstVector_ stEndPosition;
    MTH3D_tdstVector_ stStartPosition;
    HIE_tdstSuperObject_* hPerso;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 3000–3043 */
/* addr: 0x00218500  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3000
 *   +0x0024 -> line 3004
 *   +0x0028 -> line 3009
 *   +0x0040 -> line 3011
 *   +0x0054 -> line 3014
 *   +0x007c -> line 3017
 *   +0x0094 -> line 3018
 *   +0x009c -> line 3021
 *   +0x00b4 -> line 3022
 *   +0x00bc -> line 3030
 *   +0x00d0 -> line 3031
 *   +0x00ec -> line 3033
 *   +0x00f4 -> line 3037
 *   +0x00fc -> line 3038
 *   +0x0104 -> line 3042
 *   +0x0108 -> line 3043
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetCustomValuesFunc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hPerso;
    tdstGetSetParam_ stParam;
    short xIndex;
    tdeFuncId_ eFuncId;
    union { MTH3D_tdstVector_ stTmpVec; unsigned int vectorBits[3]; };
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xIndex = (short)stParam.uParam.lValue;
    switch (eFuncId) {
    case 338:
        p_stValue->uParam.xValue = fn_xStandardGameGetCustomFloatSO(hPerso, xIndex);
        p_stValue->eType = (tdeVariableType_)8;
        break;
    case 339:
        p_stValue->uParam.lValue = fn_lStandardGameGetCustomLongSO(hPerso, xIndex);
        p_stValue->eType = (tdeVariableType_)6;
        break;
    case 340:
        fn_vStandardGameGetCustomVectorSO(hPerso, xIndex, &stTmpVec);
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = vectorBits[0];
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = vectorBits[1];
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = vectorBits[2];
        p_stValue->eType = (tdeVariableType_)21;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2951–2995 */
/* addr: 0x00218630  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2951
 *   +0x0020 -> line 2954
 *   +0x0028 -> line 2959
 *   +0x0040 -> line 2961
 *   +0x0068 -> line 2964
 *   +0x0074 -> line 2965
 *   +0x008c -> line 2966
 *   +0x0090 -> line 2967
 *   +0x0098 -> line 2971
 *   +0x00a8 -> line 2972
 *   +0x00ac -> line 2973
 *   +0x00b0 -> line 2974
 *   +0x00b8 -> line 2980
 *   +0x00c4 -> line 2982
 *   +0x00dc -> line 2983
 *   +0x00e0 -> line 2984
 *   +0x00e8 -> line 2989
 *   +0x00f0 -> line 2990
 *   +0x00f8 -> line 2994
 *   +0x00fc -> line 2995
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetComputationFrequency(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hPerso;
    unsigned char ucFrequency;
    tdeFuncId_ eFuncId;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hPerso);
    switch (eFuncId) {
    case 333:
        ucFrequency = (hPerso->hLinkedObject.p_stCharacter->h_3dData != NULL) ? hPerso->hLinkedObject.p_stCharacter->h_3dData->ucBrainComputationFrequency : 1;
        *(unsigned char*)&p_stValue->uParam.lValue = ucFrequency;
        p_stValue->eType = (tdeVariableType_)3;
        break;
    case 332:
        ucFrequency = fn_ucCollSetGetCollComputeFrequency(hPerso->hLinkedObject.p_stCharacter->h_CollSet);
        *(unsigned char*)&p_stValue->uParam.lValue = ucFrequency;
        p_stValue->eType = (tdeVariableType_)3;
        break;
    case 334:
        ucFrequency = (hPerso->hLinkedObject.p_stCharacter->h_3dData != NULL) ? hPerso->hLinkedObject.p_stCharacter->h_3dData->ucLightComputationFrequency : 1;
        *(unsigned char*)&p_stValue->uParam.lValue = ucFrequency;
        p_stValue->eType = (tdeVariableType_)3;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2888–2935 */
/* addr: 0x00218750  size: 380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2888
 *   +0x0024 -> line 2893
 *   +0x0028 -> line 2899
 *   +0x0040 -> line 2901
 *   +0x0044 -> line 2903
 *   +0x004c -> line 2901
 *   +0x0054 -> line 2903
 *   +0x0060 -> line 2907
 *   +0x0098 -> line 2910
 *   +0x00b4 -> line 2911
 *   +0x00bc -> line 2912
 *   +0x00c4 -> line 2915
 *   +0x00e0 -> line 2916
 *   +0x00e8 -> line 2917
 *   +0x00f0 -> line 2919
 *   +0x010c -> line 2920
 *   +0x0114 -> line 2921
 *   +0x011c -> line 2923
 *   +0x013c -> line 2924
 *   +0x0144 -> line 2925
 *   +0x014c -> line 2929
 *   +0x0154 -> line 2930
 *   +0x015c -> line 2934
 *   +0x0160 -> line 2935
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetPriviligedActivationZdx(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hPerso;
    int lZoneNumber;
    unsigned char ePrivilege;
    tdeFuncId_ eFuncId;
    tdstCollSet_* hCollSet;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hPerso);
    hCollSet = hPerso->hLinkedObject.p_stCharacter->h_CollSet;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lZoneNumber = stParam.uParam.lValue;
    switch (eFuncId) {
    case 328:
        ePrivilege = CS_fn_eGetPrivilegedActivationZone(0, hCollSet, (unsigned short)(lZoneNumber - 1));
        p_stValue->uParam.lValue = ePrivilege;
        p_stValue->eType = (tdeVariableType_)6;
        break;
    case 329:
        ePrivilege = CS_fn_eGetPrivilegedActivationZone(1, hCollSet, (unsigned short)(lZoneNumber - 1));
        p_stValue->uParam.lValue = ePrivilege;
        p_stValue->eType = (tdeVariableType_)6;
        break;
    case 330:
        ePrivilege = CS_fn_eGetPrivilegedActivationZone(2, hCollSet, (unsigned short)(lZoneNumber - 1));
        p_stValue->uParam.lValue = ePrivilege;
        p_stValue->eType = (tdeVariableType_)6;
        break;
    case 331:
        ePrivilege = CS_fn_eGetPrivilegedActivationZone(3, hCollSet, (unsigned short)(lZoneNumber - 1));
        p_stValue->uParam.lValue = ePrivilege;
        p_stValue->eType = (tdeVariableType_)6;
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2812–2869 */
/* addr: 0x002188d0  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2812
 *   +0x0024 -> line 2817
 *   +0x0028 -> line 2822
 *   +0x0040 -> line 2827
 *   +0x004c -> line 2829
 *   +0x0064 -> line 2842
 *   +0x0070 -> line 2846
 *   +0x0078 -> line 2848
 *   +0x008c -> line 2852
 *   +0x0094 -> line 2856
 *   +0x0098 -> line 2855
 *   +0x009c -> line 2856
 *   +0x00b0 -> line 2859
 *   +0x00e8 -> line 2860
 *   +0x00f4 -> line 2867
 *   +0x00fc -> line 2868
 *   +0x0100 -> line 2869
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetHierarchyLink(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstDynam_* h_Dynam;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    HIE_tdstSuperObject_* hFather;
    tdeFuncId_ eFuncId;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    h_Dynam = (tdstDynam_*)hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_Dynam;
    if (h_Dynam == NULL || fn_p_stDynamGetDynamics(h_Dynam) == NULL) {
        return p_stTree;
    }
    fn_p_stDynamGetDynamics(h_Dynam);
    switch (eFuncId) {
    case 327:
        hFather = hNewSuperObjPerso;
        do {
            hFather = hFather->hFatherDyn;
        } while (hFather != NULL && hFather->ulTypeOfLinkedObject != 2);
        p_stValue->uParam.pValue = (hFather == NULL) ? NULL : ((hFather->ulTypeOfLinkedObject != 2) ? NULL : (void*)hFather->hLinkedObject.p_stCharacter);
        p_stValue->eType = (tdeVariableType_)11;
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2744–2804 */
/* addr: 0x002189f0  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2744
 *   +0x0024 -> line 2753
 *   +0x0040 -> line 2757
 *   +0x0048 -> line 2759
 *   +0x0054 -> line 2772
 *   +0x005c -> line 2774
 *   +0x0064 -> line 2775
 *   +0x006c -> line 2777
 *   +0x0070 -> line 2778
 *   +0x0098 -> line 2781
 *   +0x00ac -> line 2785
 *   +0x00b4 -> line 2787
 *   +0x00c8 -> line 2791
 *   +0x00d0 -> line 2793
 *   +0x00e4 -> line 2795
 *   +0x00ec -> line 2802
 *   +0x00f4 -> line 2803
 *   +0x00f8 -> line 2802
 *   +0x00fc -> line 2804
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetCollidedSPO(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    DNM_stReport* p_stDynamReport;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    HIE_tdstSuperObject_* p_CollidedSPO;
    tdeFuncId_ param0;
    p_CollidedSPO = NULL;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(63), p_SuperObjPerso, &hNewSuperObjPerso);
    if (hNewSuperObjPerso->hLinkedObject.p_stCharacter->h_Dynam == NULL) {
        return p_stTree;
    }
    p_stDynamReport = fn_pstGetDNMReport(hNewSuperObjPerso);
    if (p_stDynamReport != NULL) {
        param0 = p_stTree[-1].uDummy.uId.eFuncId;
        switch (param0) {
        case 63:
            if ((p_stDynamReport->m_ulCurrSurfaceState & 1) == 1) {
                p_CollidedSPO = p_stDynamReport->m_stGround.mp_stSupObj;
            }
            break;
        case 64:
            if ((p_stDynamReport->m_ulCurrSurfaceState & 4) == 4) {
                p_CollidedSPO = p_stDynamReport->m_stWall.mp_stSupObj;
            }
            break;
        case 65:
            if ((p_stDynamReport->m_ulCurrSurfaceState & 16) == 16) {
                p_CollidedSPO = p_stDynamReport->m_stCeil.mp_stSupObj;
            }
            break;
        default:
            break;
        }
    }
    p_stValue->uParam.pValue = p_CollidedSPO;
    p_stValue->eType = (tdeVariableType_)30;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2552–2740 */
/* addr: 0x00218b10  size: 780 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2552
 *   +0x0024 -> line 2556
 *   +0x0028 -> line 2562
 *   +0x0040 -> line 2567
 *   +0x004c -> line 2568
 *   +0x0064 -> line 2581
 *   +0x006c -> line 2582
 *   +0x0078 -> line 2585
 *   +0x0080 -> line 2587
 *   +0x00ac -> line 2592
 *   +0x00b8 -> line 2594
 *   +0x00c4 -> line 2601
 *   +0x00d0 -> line 2603
 *   +0x00dc -> line 2609
 *   +0x00e8 -> line 2611
 *   +0x00f4 -> line 2616
 *   +0x010c -> line 2617
 *   +0x0114 -> line 2619
 *   +0x0120 -> line 2625
 *   +0x012c -> line 2627
 *   +0x0138 -> line 2633
 *   +0x0144 -> line 2635
 *   +0x0150 -> line 2641
 *   +0x015c -> line 2643
 *   +0x0168 -> line 2649
 *   +0x0174 -> line 2651
 *   +0x0180 -> line 2657
 *   +0x018c -> line 2659
 *   +0x0198 -> line 2665
 *   +0x01a4 -> line 2667
 *   +0x01b0 -> line 2673
 *   +0x01bc -> line 2674
 *   +0x01c0 -> line 2673
 *   +0x01d4 -> line 2674
 *   +0x01d8 -> line 2676
 *   +0x01dc -> line 2674
 *   +0x01f0 -> line 2676
 *   +0x01f8 -> line 2682
 *   +0x0204 -> line 2684
 *   +0x0210 -> line 2690
 *   +0x021c -> line 2691
 *   +0x0220 -> line 2690
 *   +0x0234 -> line 2691
 *   +0x0238 -> line 2693
 *   +0x023c -> line 2691
 *   +0x0250 -> line 2693
 *   +0x0258 -> line 2699
 *   +0x0264 -> line 2701
 *   +0x0270 -> line 2707
 *   +0x027c -> line 2709
 *   +0x0288 -> line 2715
 *   +0x0294 -> line 2717
 *   +0x02a0 -> line 2723
 *   +0x02ac -> line 2725
 *   +0x02b8 -> line 2730
 *   +0x02d4 -> line 2731
 *   +0x02e0 -> line 2738
 *   +0x02ec -> line 2739
 *   +0x02f0 -> line 2740
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_GetMechanicParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MTH3D_tdstVector_ stStreamSpeed;
    MTH3D_tdstVector_ stSpeedLimit;
    float xSlopeLimit;
    tdeFuncId_ eFuncId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2371–2541 */
/* addr: 0x00218e20  size: 1452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2371
 *   +0x0034 -> line 2372
 *   +0x0038 -> line 2386
 *   +0x0040 -> line 2387
 *   +0x0044 -> line 2386
 *   +0x0048 -> line 2387
 *   +0x0054 -> line 2389
 *   +0x005c -> line 2387
 *   +0x0064 -> line 2389
 *   +0x006c -> line 2390
 *   +0x0070 -> line 2389
 *   +0x0074 -> line 2390
 *   +0x0078 -> line 2394
 *   +0x007c -> line 2390
 *   +0x0084 -> line 2394
 *   +0x0090 -> line 2390
 *   +0x009c -> line 2394
 *   +0x00e4 -> line 2396
 *   +0x0148 -> line 2397
 *   +0x0150 -> line 2399
 *   +0x0154 -> line 2400
 *   +0x01a8 -> line 2402
 *   +0x0210 -> line 2403
 *   +0x0218 -> line 2405
 *   +0x021c -> line 2408
 *   +0x0244 -> line 2411
 *   +0x024c -> line 2414
 *   +0x0254 -> line 2416
 *   +0x0258 -> line 2417
 *   +0x0260 -> line 2421
 *   +0x026c -> line 2425
 *   +0x0270 -> line 2421
 *   +0x0274 -> line 2425
 *   +0x0278 -> line 2422
 *   +0x027c -> line 2425
 *   +0x0298 -> line 2427
 *   +0x02b4 -> line 2428
 *   +0x02bc -> line 2429
 *   +0x02d8 -> line 2430
 *   +0x02dc -> line 2434
 *   +0x02e4 -> line 2437
 *   +0x030c -> line 2442
 *   +0x0330 -> line 2445
 *   +0x0338 -> line 2450
 *   +0x0354 -> line 2453
 *   +0x035c -> line 2458
 *   +0x0380 -> line 2459
 *   +0x0384 -> line 2462
 *   +0x0398 -> line 2464
 *   +0x03a0 -> line 2465
 *   +0x03a8 -> line 2468
 *   +0x03b0 -> line 2471
 *   +0x03b4 -> line 2472
 *   +0x03bc -> line 2476
 *   +0x03e0 -> line 2478
 *   +0x03fc -> line 2479
 *   +0x0404 -> line 2480
 *   +0x041c -> line 2481
 *   +0x0420 -> line 2484
 *   +0x0428 -> line 2485
 *   +0x0430 -> line 2489
 *   +0x0438 -> line 2492
 *   +0x0440 -> line 2494
 *   +0x0444 -> line 2495
 *   +0x044c -> line 2499
 *   +0x0458 -> line 2503
 *   +0x045c -> line 2499
 *   +0x0460 -> line 2503
 *   +0x048c -> line 2504
 *   +0x0498 -> line 2507
 *   +0x049c -> line 2504
 *   +0x04a8 -> line 2507
 *   +0x04d0 -> line 2510
 *   +0x04e8 -> line 2512
 *   +0x04f0 -> line 2515
 *   +0x0508 -> line 2517
 *   +0x0510 -> line 2520
 *   +0x0528 -> line 2521
 *   +0x052c -> line 2528
 *   +0x0548 -> line 2529
 *   +0x0550 -> line 2530
 *   +0x0568 -> line 2531
 *   +0x056c -> line 2533
 *   +0x0578 -> line 2539
 *   +0x057c -> line 2541
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stVectorAndAngle(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xNorm;
    float xAngle;
    float xCos;
    float xSin;
    MTH3D_tdstVector_ stVectorV;
    MTH3D_tdstVector_ stVectorU;
    unsigned char bASourceVectorIsNull;
    unsigned char ucPlan;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2310–2354 */
/* addr: 0x002193d0  size: 356 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2310
 *   +0x0014 -> line 2325
 *   +0x001c -> line 2326
 *   +0x0020 -> line 2325
 *   +0x0024 -> line 2326
 *   +0x0030 -> line 2328
 *   +0x0038 -> line 2326
 *   +0x0040 -> line 2328
 *   +0x0048 -> line 2329
 *   +0x0054 -> line 2332
 *   +0x0058 -> line 2329
 *   +0x005c -> line 2332
 *   +0x0064 -> line 2329
 *   +0x006c -> line 2332
 *   +0x0074 -> line 2333
 *   +0x0094 -> line 2336
 *   +0x00c0 -> line 2338
 *   +0x00c8 -> line 2336
 *   +0x00cc -> line 2346
 *   +0x00d0 -> line 2338
 *   +0x00e8 -> line 2340
 *   +0x0110 -> line 2342
 *   +0x0134 -> line 2346
 *   +0x0150 -> line 2354
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stComputeRebondVector(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    MTH3D_tdstVector_ stInitVector = p_stValue->uParam.stVectorValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    MTH3D_tdstVector_ stNormalVector = p_stValue->uParam.stVectorValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    float xDot, xCoef, xNorm;
    MTH3D_tdstVector_* p_stOut;
    MTH3D_tdstVector_ stReactionVector;
    if (p_stValue->eType == 8) { xNorm = p_stValue->uParam.xValue; } else { xNorm = (float)p_stValue->uParam.lValue; }
    xDot = MTH3D_xScalarProduct(&stInitVector, &stNormalVector);
    xCoef = -2.0f * xDot;
    MTH3D_M_vMulScalar(&stReactionVector, &stNormalVector, xCoef);
    MTH3D_M_vAddVector(&stReactionVector, &stReactionVector, &stInitVector);
    MTH3D_M_vMulScalar(&stReactionVector, &stReactionVector, xNorm);
    *(int*)&p_stValue->uParam.stVectorValue.xX = *(int*)&stReactionVector.xX; *(int*)&p_stValue->uParam.stVectorValue.xY = *(int*)&stReactionVector.xY; *(int*)&p_stValue->uParam.stVectorValue.xZ = *(int*)&stReactionVector.xZ;
    p_stValue->eType = (tdeVariableType_)21;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2240–2300 */
/* addr: 0x00219540  size: 876 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2240
 *   +0x0034 -> line 2250
 *   +0x0040 -> line 2252
 *   +0x0050 -> line 2255
 *   +0x0058 -> line 2252
 *   +0x0070 -> line 2255
 *   +0x0078 -> line 2257
 *   +0x0088 -> line 2260
 *   +0x008c -> line 2257
 *   +0x0094 -> line 2260
 *   +0x009c -> line 2257
 *   +0x00ac -> line 2260
 *   +0x00b4 -> line 2264
 *   +0x00b8 -> line 2260
 *   +0x00bc -> line 2264
 *   +0x00c4 -> line 2261
 *   +0x00c8 -> line 2264
 *   +0x00cc -> line 2268
 *   +0x00d0 -> line 2269
 *   +0x00d4 -> line 2264
 *   +0x00d8 -> line 2266
 *   +0x00dc -> line 2264
 *   +0x00ec -> line 2268
 *   +0x00f0 -> line 2266
 *   +0x00f4 -> line 2267
 *   +0x00f8 -> line 2265
 *   +0x00fc -> line 2269
 *   +0x0104 -> line 2270
 *   +0x0120 -> line 2273
 *   +0x0138 -> line 2274
 *   +0x0148 -> line 2276
 *   +0x014c -> line 2279
 *   +0x0150 -> line 2281
 *   +0x0154 -> line 2279
 *   +0x0158 -> line 2281
 *   +0x0180 -> line 2282
 *   +0x0184 -> line 2281
 *   +0x0188 -> line 2282
 *   +0x018c -> line 2283
 *   +0x0194 -> line 2281
 *   +0x01a4 -> line 2282
 *   +0x01a8 -> line 2283
 *   +0x01b0 -> line 2285
 *   +0x01dc -> line 2286
 *   +0x01e8 -> line 2285
 *   +0x01ec -> line 2287
 *   +0x01f4 -> line 2285
 *   +0x01f8 -> line 2286
 *   +0x0200 -> line 2285
 *   +0x0208 -> line 2286
 *   +0x020c -> line 2285
 *   +0x0210 -> line 2286
 *   +0x0220 -> line 2287
 *   +0x0228 -> line 2289
 *   +0x0254 -> line 2290
 *   +0x0260 -> line 2289
 *   +0x0264 -> line 2291
 *   +0x026c -> line 2289
 *   +0x0270 -> line 2290
 *   +0x0278 -> line 2289
 *   +0x0280 -> line 2290
 *   +0x0284 -> line 2289
 *   +0x0288 -> line 2290
 *   +0x0298 -> line 2291
 *   +0x02a0 -> line 2293
 *   +0x02cc -> line 2294
 *   +0x02d0 -> line 2293
 *   +0x02dc -> line 2294
 *   +0x0310 -> line 2295
 *   +0x0314 -> line 2294
 *   +0x0318 -> line 2295
 *   +0x0324 -> line 2297
 *   +0x032c -> line 2299
 *   +0x0330 -> line 2297
 *   +0x033c -> line 2300
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetFirstCollisionInfo(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam;
    MTH3D_tdstVector_ stVectorSave;
    unsigned int ulMaterialId;
    unsigned int ulMode;
    unsigned int xTestedMask;
    unsigned char ucVarId;
    AI_tdstMind_* p_stMind;
    int* pVecY;
    int* pVecZ;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    *(int*)&g_stCollideParameterPoint.xX = *(int*)&stParam.uParam.stVectorValue.xX;
    *(int*)&g_stCollideParameterPoint.xY = *(int*)&stParam.uParam.stVectorValue.xY;
    *(int*)&g_stCollideParameterPoint.xZ = *(int*)&stParam.uParam.stVectorValue.xZ;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    pVecY = (int*)&g_stCollideParameterVector.xY;
    pVecZ = (int*)&g_stCollideParameterVector.xZ;
    *(int*)&g_stCollideParameterVector.xX = *(int*)&stParam.uParam.stVectorValue.xX;
    *pVecY = *(int*)&stParam.uParam.stVectorValue.xY;
    *pVecZ = *(int*)&stParam.uParam.stVectorValue.xZ;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    *(int*)&stVectorSave.xX = *(int*)&g_stCollideParameterVector.xX;
    *(int*)&stVectorSave.xY = *(int*)&g_stCollideParameterVector.xY;
    *(int*)&stVectorSave.xZ = *(int*)&g_stCollideParameterVector.xZ;
    g_ulTypeMode = stParam.uParam.lValue;
    g_ulCollideTimeCounter = g_ulMode;
    g_ulMode = stParam.uParam.lValue;
    g_xMask = 0;
    fn_vComputeCollideResult(p_SuperObjPerso, stParam.uParam.lValue);
    *(int*)&g_stCollideParameterVector.xX = *(int*)&stVectorSave.xX;
    *pVecY = *(int*)&stVectorSave.xY;
    *pVecZ = *(int*)&stVectorSave.xZ;
    ulMaterialId = 0;
    if (g_hColMatHit != NULL) {
        if (g_hColMatHit != (GMT_tdstCollideMaterial_*)-1) {
            ulMaterialId = GMT_fn_hGetCollideMaterialIdentifier((int)g_hColMatHit) & 0xFFFF;
        }
    }
    g_ulOverRideRayTraceSpoMask = 0x40;
    {
        HIE_tdstSuperObject_* p_stResultOwnerPerso;
        if (p_stTree->eType == 2) {
            p_stTree = fn_p_stOperatorGetPerso(p_SuperObjPerso, p_stTree + 1, &p_stResultOwnerPerso);
        } else {
            p_stResultOwnerPerso = p_SuperObjPerso;
        }
        ucVarId = *(unsigned char*)p_stTree;
        p_stMind = p_stResultOwnerPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind;
        stParam.uParam.lValue = ulMaterialId;
        stParam.eType = (tdeVariableType_)26;
        fn_ucSetDsgVar(ucVarId, 0, p_stMind, &stParam);
        p_stTree = p_stTree + 1;
    }
    {
        HIE_tdstSuperObject_* p_stResultOwnerPerso;
        if (p_stTree->eType == 2) {
            p_stTree = fn_p_stOperatorGetPerso(p_SuperObjPerso, p_stTree + 1, &p_stResultOwnerPerso);
        } else {
            p_stResultOwnerPerso = p_SuperObjPerso;
        }
        ucVarId = *(unsigned char*)p_stTree;
        p_stMind = p_stResultOwnerPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind;
        *(int*)&stParam.uParam.stVectorValue.xX = *(int*)&g_stCollideResultPoint.xX;
        *(int*)&stParam.uParam.stVectorValue.xY = *(int*)&g_stCollideResultPoint.xY;
        *(int*)&stParam.uParam.stVectorValue.xZ = *(int*)&g_stCollideResultPoint.xZ;
        stParam.eType = (tdeVariableType_)21;
        fn_ucSetDsgVar(ucVarId, 0, p_stMind, &stParam);
        p_stTree = p_stTree + 1;
    }
    {
        HIE_tdstSuperObject_* p_stResultOwnerPerso;
        if (p_stTree->eType == 2) {
            p_stTree = fn_p_stOperatorGetPerso(p_SuperObjPerso, p_stTree + 1, &p_stResultOwnerPerso);
        } else {
            p_stResultOwnerPerso = p_SuperObjPerso;
        }
        ucVarId = *(unsigned char*)p_stTree;
        p_stMind = p_stResultOwnerPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind;
        *(int*)&stParam.uParam.stVectorValue.xX = *(int*)&g_stCollideResultVector.xX;
        *(int*)&stParam.uParam.stVectorValue.xY = *(int*)&g_stCollideResultVector.xY;
        *(int*)&stParam.uParam.stVectorValue.xZ = *(int*)&g_stCollideResultVector.xZ;
        stParam.eType = (tdeVariableType_)21;
        fn_ucSetDsgVar(ucVarId, 0, p_stMind, &stParam);
        p_stTree = p_stTree + 1;
    }
    {
        HIE_tdstSuperObject_* p_stResultOwnerPerso;
        if (p_stTree->eType == 2) {
            p_stTree = fn_p_stOperatorGetPerso(p_SuperObjPerso, p_stTree + 1, &p_stResultOwnerPerso);
        } else {
            p_stResultOwnerPerso = p_SuperObjPerso;
        }
        ucVarId = *(unsigned char*)p_stTree;
        p_stMind = p_stResultOwnerPerso->hLinkedObject.p_stCharacter->h_Brain->p_stMind;
        if (g_hSuperObjectHit != NULL) {
            if (g_hSuperObjectHit->ulTypeOfLinkedObject == 2) {
                stParam.uParam.lValue = (int)g_hSuperObjectHit->hLinkedObject.p_stCharacter;
            } else {
                stParam.uParam.lValue = 0;
            }
        } else {
            stParam.uParam.lValue = 0;
        }
        stParam.eType = (tdeVariableType_)11;
        fn_ucSetDsgVar(ucVarId, 0, p_stMind, &stParam);
        p_stTree = p_stTree + 1;
    }
    p_stValue->uParam.lValue = (g_hSuperObjectHit != NULL);
    p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2171–2235 */
/* addr: 0x002198b0  size: 632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2171
 *   +0x002c -> line 2179
 *   +0x0034 -> line 2181
 *   +0x0084 -> line 2183
 *   +0x008c -> line 2184
 *   +0x0090 -> line 2183
 *   +0x00ac -> line 2188
 *   +0x00b8 -> line 2190
 *   +0x0108 -> line 2192
 *   +0x0110 -> line 2193
 *   +0x0114 -> line 2192
 *   +0x0130 -> line 2197
 *   +0x0140 -> line 2202
 *   +0x0150 -> line 2203
 *   +0x0154 -> line 2207
 *   +0x0164 -> line 2208
 *   +0x0168 -> line 2211
 *   +0x01a0 -> line 2216
 *   +0x01ac -> line 2221
 *   +0x01b0 -> line 2216
 *   +0x01c4 -> line 2220
 *   +0x01c8 -> line 2216
 *   +0x01cc -> line 2218
 *   +0x01d0 -> line 2216
 *   +0x01e0 -> line 2220
 *   +0x01e4 -> line 2218
 *   +0x01e8 -> line 2217
 *   +0x01ec -> line 2219
 *   +0x01f0 -> line 2221
 *   +0x01f8 -> line 2222
 *   +0x0214 -> line 2223
 *   +0x0218 -> line 2233
 *   +0x021c -> line 2231
 *   +0x0220 -> line 2233
 *   +0x0224 -> line 2234
 *   +0x0228 -> line 2231
 *   +0x022c -> line 2233
 *   +0x0250 -> line 2235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetCollisionWithCollideMaterial(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int bCompute;
    unsigned int xTestedMask;
    unsigned int ulMode;
    MTH3D_tdstVector_ stVectorSave;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2082–2154 */
/* addr: 0x00219b30  size: 744 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2082
 *   +0x002c -> line 2083
 *   +0x0030 -> line 2090
 *   +0x0038 -> line 2092
 *   +0x0088 -> line 2094
 *   +0x0090 -> line 2095
 *   +0x0094 -> line 2094
 *   +0x00b0 -> line 2099
 *   +0x00bc -> line 2101
 *   +0x010c -> line 2103
 *   +0x0114 -> line 2104
 *   +0x0118 -> line 2103
 *   +0x0134 -> line 2108
 *   +0x0144 -> line 2109
 *   +0x0148 -> line 2112
 *   +0x0180 -> line 2117
 *   +0x018c -> line 2122
 *   +0x0190 -> line 2117
 *   +0x01a4 -> line 2120
 *   +0x01a8 -> line 2117
 *   +0x01ac -> line 2118
 *   +0x01b0 -> line 2117
 *   +0x01c0 -> line 2120
 *   +0x01c4 -> line 2118
 *   +0x01c8 -> line 2119
 *   +0x01cc -> line 2121
 *   +0x01d0 -> line 2122
 *   +0x01d8 -> line 2123
 *   +0x01f4 -> line 2126
 *   +0x021c -> line 2129
 *   +0x0240 -> line 2130
 *   +0x0248 -> line 2133
 *   +0x026c -> line 2138
 *   +0x0274 -> line 2142
 *   +0x02b4 -> line 2151
 *   +0x02b8 -> line 2153
 *   +0x02bc -> line 2151
 *   +0x02c0 -> line 2154
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetCollision(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    int bCompute;
    unsigned int ulMode;
    MTH3D_tdstVector_ stVectorSave;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 2035–2059 */
/* addr: 0x00219e20  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2035
 *   +0x0004 -> line 2041
 *   +0x0008 -> line 2035
 *   +0x0018 -> line 2036
 *   +0x001c -> line 2041
 *   +0x0024 -> line 2044
 *   +0x0030 -> line 2045
 *   +0x003c -> line 2050
 *   +0x0044 -> line 2053
 *   +0x007c -> line 2055
 *   +0x0088 -> line 2057
 *   +0x0094 -> line 2058
 *   +0x0098 -> line 2059
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetLastCollisionActor(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    HIE_tdstSuperObject_* p_SuperObjPersoTreated;
    HIE_tdstSuperObject_* p_SuperObjCollidedActor;
    tdstGetSetParam_ stParam;
    eFuncId = p_stTree[-1].uDummy.uId.eFuncId;
    if (eFuncId == 292) {
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_SuperObjPersoTreated = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
        p_SuperObjCollidedActor = fn_hSuperObjectGetLastCollidedCharacter(p_SuperObjPersoTreated);
        p_stValue->uParam.pValue = (p_SuperObjCollidedActor == NULL) ? NULL : ((p_SuperObjCollidedActor->ulTypeOfLinkedObject != 2) ? NULL : (void*)p_SuperObjCollidedActor->hLinkedObject.p_stCharacter);
        p_stValue->eType = (tdeVariableType_)11;
        return p_stTree;
    }
    fn_vOnAIErm_M_UpdateLastError(39, NULL);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 1699–2026 */
/* addr: 0x00219ed0  size: 1996 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1699
 *   +0x002c -> line 1703
 *   +0x0030 -> line 1700
 *   +0x0034 -> line 1709
 *   +0x004c -> line 1713
 *   +0x0058 -> line 1715
 *   +0x0084 -> line 1721
 *   +0x0094 -> line 1724
 *   +0x009c -> line 1725
 *   +0x00a8 -> line 1729
 *   +0x00ac -> line 1730
 *   +0x00bc -> line 1732
 *   +0x00c0 -> line 1733
 *   +0x0110 -> line 1735
 *   +0x0120 -> line 1737
 *   +0x0124 -> line 1738
 *   +0x0174 -> line 1740
 *   +0x0184 -> line 1742
 *   +0x0188 -> line 1743
 *   +0x01d8 -> line 1745
 *   +0x01e8 -> line 1747
 *   +0x01ec -> line 1748
 *   +0x023c -> line 1750
 *   +0x024c -> line 1753
 *   +0x029c -> line 1755
 *   +0x02a4 -> line 1757
 *   +0x02a8 -> line 1758
 *   +0x02f8 -> line 1761
 *   +0x02fc -> line 1762
 *   +0x0300 -> line 1761
 *   +0x0308 -> line 1762
 *   +0x0310 -> line 1768
 *   +0x0320 -> line 1769
 *   +0x0324 -> line 1771
 *   +0x0334 -> line 1772
 *   +0x0338 -> line 1774
 *   +0x035c -> line 1778
 *   +0x0364 -> line 1779
 *   +0x0370 -> line 1784
 *   +0x0378 -> line 1788
 *   +0x0380 -> line 1792
 *   +0x0388 -> line 1796
 *   +0x0390 -> line 1800
 *   +0x0398 -> line 1803
 *   +0x039c -> line 1806
 *   +0x03ec -> line 1808
 *   +0x03f0 -> line 1806
 *   +0x03f4 -> line 1808
 *   +0x03fc -> line 1813
 *   +0x0408 -> line 1815
 *   +0x040c -> line 1813
 *   +0x0414 -> line 1815
 *   +0x041c -> line 1813
 *   +0x0420 -> line 1815
 *   +0x0428 -> line 1816
 *   +0x042c -> line 1818
 *   +0x043c -> line 1819
 *   +0x0440 -> line 1821
 *   +0x0464 -> line 1825
 *   +0x046c -> line 1826
 *   +0x0470 -> line 1825
 *   +0x0484 -> line 1826
 *   +0x048c -> line 1831
 *   +0x0494 -> line 1835
 *   +0x049c -> line 1839
 *   +0x04a4 -> line 1843
 *   +0x04ac -> line 1847
 *   +0x04b4 -> line 1850
 *   +0x04b8 -> line 1853
 *   +0x04c0 -> line 1855
 *   +0x04c4 -> line 1853
 *   +0x04d8 -> line 1855
 *   +0x04e0 -> line 1863
 *   +0x04e4 -> line 1865
 *   +0x04e8 -> line 1863
 *   +0x04ec -> line 1865
 *   +0x0500 -> line 1867
 *   +0x0514 -> line 1868
 *   +0x051c -> line 1871
 *   +0x0528 -> line 1874
 *   +0x0530 -> line 1880
 *   +0x0538 -> line 1882
 *   +0x053c -> line 1880
 *   +0x0550 -> line 1882
 *   +0x0558 -> line 1889
 *   +0x0568 -> line 1891
 *   +0x0590 -> line 1895
 *   +0x0598 -> line 1896
 *   +0x05a0 -> line 1901
 *   +0x05a8 -> line 1905
 *   +0x05b0 -> line 1909
 *   +0x05b8 -> line 1913
 *   +0x05c0 -> line 1917
 *   +0x05c8 -> line 1920
 *   +0x05cc -> line 1923
 *   +0x05d8 -> line 1925
 *   +0x05e0 -> line 1931
 *   +0x05e4 -> line 1934
 *   +0x05e8 -> line 1931
 *   +0x05f4 -> line 1932
 *   +0x05fc -> line 1934
 *   +0x0604 -> line 1945
 *   +0x060c -> line 1947
 *   +0x061c -> line 1949
 *   +0x0624 -> line 1950
 *   +0x0628 -> line 1949
 *   +0x063c -> line 1950
 *   +0x0644 -> line 1955
 *   +0x0650 -> line 1956
 *   +0x0664 -> line 1958
 *   +0x0698 -> line 1959
 *   +0x06a0 -> line 1962
 *   +0x06c0 -> line 1965
 *   +0x06c8 -> line 1973
 *   +0x06d8 -> line 1975
 *   +0x06e0 -> line 1976
 *   +0x06ec -> line 1981
 *   +0x06f4 -> line 1982
 *   +0x0704 -> line 1984
 *   +0x0714 -> line 1985
 *   +0x071c -> line 1988
 *   +0x0728 -> line 1991
 *   +0x0730 -> line 1999
 *   +0x0740 -> line 2001
 *   +0x0748 -> line 2002
 *   +0x0754 -> line 2007
 *   +0x075c -> line 2008
 *   +0x076c -> line 2010
 *   +0x0780 -> line 2011
 *   +0x0788 -> line 2014
 *   +0x0794 -> line 2017
 *   +0x079c -> line 2024
 *   +0x07a4 -> line 2025
 *   +0x07a8 -> line 2026
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetCollidePoint(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    GMT_tdstCollideMaterial_* hCollideMat;
    MTH3D_tdstVector_ stVec;
    DNM_stObstacle* p_stObstacle;
    int lWhichObstacle;
    MTH3D_tdstVector_ stNullVector;
    unsigned int ulSurfState;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned short xMask;
    DNM_stReport* p_stDynamReport;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 1508–1674 */
/* addr: 0x0021a6a0  size: 924 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1508
 *   +0x0004 -> line 1511
 *   +0x0008 -> line 1508
 *   +0x0044 -> line 1509
 *   +0x0048 -> line 1511
 *   +0x0078 -> line 1518
 *   +0x0080 -> line 1525
 *   +0x0088 -> line 1535
 *   +0x0094 -> line 1536
 *   +0x009c -> line 1537
 *   +0x00a4 -> line 1536
 *   +0x00a8 -> line 1537
 *   +0x00b0 -> line 1538
 *   +0x00d0 -> line 1539
 *   +0x00d4 -> line 1545
 *   +0x00e0 -> line 1539
 *   +0x00e4 -> line 1541
 *   +0x00ec -> line 1543
 *   +0x00f0 -> line 1545
 *   +0x00f8 -> line 1546
 *   +0x00fc -> line 1545
 *   +0x0100 -> line 1546
 *   +0x012c -> line 1555
 *   +0x0130 -> line 1550
 *   +0x0134 -> line 1555
 *   +0x0138 -> line 1550
 *   +0x013c -> line 1555
 *   +0x0140 -> line 1550
 *   +0x014c -> line 1555
 *   +0x0150 -> line 1550
 *   +0x0154 -> line 1555
 *   +0x0158 -> line 1550
 *   +0x0160 -> line 1555
 *   +0x0170 -> line 1557
 *   +0x0184 -> line 1559
 *   +0x0188 -> line 1560
 *   +0x018c -> line 1559
 *   +0x0194 -> line 1560
 *   +0x0198 -> line 1559
 *   +0x01a0 -> line 1560
 *   +0x01c0 -> line 1562
 *   +0x01c8 -> line 1563
 *   +0x01d0 -> line 1562
 *   +0x01d8 -> line 1563
 *   +0x01f8 -> line 1565
 *   +0x0200 -> line 1566
 *   +0x0208 -> line 1565
 *   +0x0220 -> line 1566
 *   +0x0240 -> line 1568
 *   +0x0244 -> line 1566
 *   +0x0248 -> line 1568
 *   +0x0250 -> line 1570
 *   +0x025c -> line 1572
 *   +0x0268 -> line 1631
 *   +0x027c -> line 1632
 *   +0x0288 -> line 1641
 *   +0x0294 -> line 1642
 *   +0x029c -> line 1645
 *   +0x02a4 -> line 1642
 *   +0x02a8 -> line 1645
 *   +0x02b0 -> line 1646
 *   +0x02b4 -> line 1645
 *   +0x02b8 -> line 1649
 *   +0x02c4 -> line 1651
 *   +0x02e8 -> line 1652
 *   +0x0308 -> line 1653
 *   +0x0318 -> line 1656
 *   +0x033c -> line 1658
 *   +0x0348 -> line 1659
 *   +0x0350 -> line 1662
 *   +0x035c -> line 1665
 *   +0x0360 -> line 1674
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stNamesFunc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    char* pszString;
    short wIndexInString;
    short wCpt;
    stTfmtLineResults_* d_stLineResults;
    stTfmtStatus_ stStatus;
    unsigned char ucCurrentLine;
    unsigned char ucMaxNbLines;
    unsigned char ucArrayPosVectorId;
    unsigned char ucArrayEndCharId;
    unsigned char ucArrayStartCharId;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 1330–1488 */
/* addr: 0x0021aa40  size: 916 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1330
 *   +0x0030 -> line 1333
 *   +0x0034 -> line 1331
 *   +0x0038 -> line 1341
 *   +0x0050 -> line 1343
 *   +0x0060 -> line 1345
 *   +0x00c4 -> line 1350
 *   +0x00cc -> line 1367
 *   +0x00dc -> line 1368
 *   +0x00e0 -> line 1367
 *   +0x00e4 -> line 1370
 *   +0x00f0 -> line 1372
 *   +0x00f8 -> line 1373
 *   +0x00fc -> line 1372
 *   +0x0110 -> line 1373
 *   +0x0120 -> line 1377
 *   +0x015c -> line 1379
 *   +0x0164 -> line 1386
 *   +0x0168 -> line 1390
 *   +0x0184 -> line 1394
 *   +0x0190 -> line 1395
 *   +0x0194 -> line 1406
 *   +0x019c -> line 1409
 *   +0x01a4 -> line 1410
 *   +0x01ac -> line 1415
 *   +0x01b8 -> line 1416
 *   +0x01d8 -> line 1418
 *   +0x0248 -> line 1427
 *   +0x025c -> line 1429
 *   +0x0284 -> line 1431
 *   +0x0290 -> line 1432
 *   +0x0298 -> line 1436
 *   +0x02ac -> line 1438
 *   +0x02b4 -> line 1443
 *   +0x02bc -> line 1445
 *   +0x02c4 -> line 1450
 *   +0x02d4 -> line 1452
 *   +0x02dc -> line 1456
 *   +0x02e4 -> line 1458
 *   +0x02ec -> line 1462
 *   +0x02f4 -> line 1464
 *   +0x0314 -> line 1466
 *   +0x031c -> line 1473
 *   +0x0328 -> line 1475
 *   +0x0330 -> line 1480
 *   +0x0348 -> line 1486
 *   +0x0350 -> line 1487
 *   +0x0354 -> line 1486
 *   +0x036c -> line 1488
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st3DFunc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stV1;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* p_stDynamic;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    MTH3D_tdstVector_ stDstVector;
    int lGlobalAxis;
    unsigned char ucChannel;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 1298–1313 */
/* addr: 0x0021ade0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1298
 *   +0x001c -> line 1303
 *   +0x0038 -> line 1307
 *   +0x0048 -> line 1308
 *   +0x004c -> line 1311
 *   +0x0050 -> line 1312
 *   +0x0054 -> line 1308
 *   +0x0074 -> line 1311
 *   +0x0078 -> line 1313
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetPersoSighting(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy.uId.eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    MAT_fn_vGetRotationVectorBaseJ(hNewSuperObjPerso->hGlobalMatrix, &p_stValue->uParam.stVectorValue);
    p_stValue->uParam.stVectorValue.xX = -p_stValue->uParam.stVectorValue.xX; p_stValue->uParam.stVectorValue.xY = -p_stValue->uParam.stVectorValue.xY; p_stValue->uParam.stVectorValue.xZ = -p_stValue->uParam.stVectorValue.xZ;
    p_stValue->eType = (tdeVariableType_)21;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 1230–1290 */
/* addr: 0x0021ae70  size: 516 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1230
 *   +0x002c -> line 1232
 *   +0x0030 -> line 1231
 *   +0x0034 -> line 1236
 *   +0x004c -> line 1238
 *   +0x0050 -> line 1240
 *   +0x0054 -> line 1238
 *   +0x0058 -> line 1240
 *   +0x008c -> line 1243
 *   +0x0094 -> line 1244
 *   +0x00a8 -> line 1245
 *   +0x00b8 -> line 1246
 *   +0x00c0 -> line 1249
 *   +0x00cc -> line 1250
 *   +0x00d0 -> line 1253
 *   +0x00d8 -> line 1254
 *   +0x0134 -> line 1256
 *   +0x013c -> line 1259
 *   +0x0144 -> line 1265
 *   +0x0150 -> line 1266
 *   +0x0154 -> line 1269
 *   +0x015c -> line 1270
 *   +0x0188 -> line 1272
 *   +0x0194 -> line 1273
 *   +0x0198 -> line 1275
 *   +0x01a0 -> line 1279
 *   +0x01b0 -> line 1280
 *   +0x01b4 -> line 1282
 *   +0x01dc -> line 1289
 *   +0x01e0 -> line 1290
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCollideCommunicationFunc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstCollSet_* _hCollSet;
    short wIndex;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 1072–1218 */
/* addr: 0x0021b080  size: 1548 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1072
 *   +0x0034 -> line 1073
 *   +0x0038 -> line 1082
 *   +0x0050 -> line 1084
 *   +0x0064 -> line 1087
 *   +0x0070 -> line 1089
 *   +0x00a4 -> line 1094
 *   +0x00b0 -> line 1095
 *   +0x00b4 -> line 1097
 *   +0x00c4 -> line 1098
 *   +0x00c8 -> line 1100
 *   +0x00ec -> line 1104
 *   +0x00f4 -> line 1105
 *   +0x00f8 -> line 1104
 *   +0x010c -> line 1105
 *   +0x0114 -> line 1110
 *   +0x011c -> line 1114
 *   +0x0124 -> line 1118
 *   +0x012c -> line 1122
 *   +0x0134 -> line 1126
 *   +0x013c -> line 1129
 *   +0x0140 -> line 1132
 *   +0x0148 -> line 1134
 *   +0x014c -> line 1132
 *   +0x0160 -> line 1134
 *   +0x0168 -> line 1141
 *   +0x016c -> line 1142
 *   +0x017c -> line 1145
 *   +0x01ac -> line 1147
 *   +0x01b8 -> line 1150
 *   +0x01e8 -> line 1152
 *   +0x01f8 -> line 1155
 *   +0x0228 -> line 1157
 *   +0x0234 -> line 1160
 *   +0x0264 -> line 1162
 *   +0x0274 -> line 1165
 *   +0x02a4 -> line 1167
 *   +0x02ac -> line 1170
 *   +0x02dc -> line 1172
 *   +0x0320 -> line 1174
 *   +0x0380 -> line 1179
 *   +0x0398 -> line 1182
 *   +0x03a0 -> line 1189
 *   +0x03a4 -> line 1182
 *   +0x03b0 -> line 1189
 *   +0x03b8 -> line 1191
 *   +0x03cc -> line 1194
 *   +0x03f8 -> line 1196
 *   +0x03fc -> line 1194
 *   +0x0400 -> line 1196
 *   +0x0414 -> line 1194
 *   +0x0418 -> line 1196
 *   +0x0420 -> line 1194
 *   +0x042c -> line 1196
 *   +0x0448 -> line 1197
 *   +0x0458 -> line 1196
 *   +0x045c -> line 1197
 *   +0x04a0 -> line 1198
 *   +0x04e4 -> line 1200
 *   +0x04e8 -> line 1198
 *   +0x04ec -> line 1200
 *   +0x04f0 -> line 1198
 *   +0x04f4 -> line 1200
 *   +0x052c -> line 1202
 *   +0x058c -> line 1205
 *   +0x0590 -> line 1206
 *   +0x0594 -> line 1205
 *   +0x0598 -> line 1206
 *   +0x059c -> line 1205
 *   +0x05a0 -> line 1206
 *   +0x05ac -> line 1208
 *   +0x05b4 -> line 1210
 *   +0x05b8 -> line 1208
 *   +0x05cc -> line 1210
 *   +0x05d4 -> line 1216
 *   +0x05dc -> line 1217
 *   +0x05e0 -> line 1218
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetNormalCollideVector(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xNorm;
    MTH3D_tdstVector_ VectTmp;
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    tdstGetSetParam_ stParam;
    AI_tdstMind_* p_stMind;
    unsigned char ucVarId;
    float xTmp;
    MTH3D_tdstVector_ stVertical;
    unsigned int ulSurfState;
    int lWhichObstacle;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    DNM_stObstacle* p_stObstacle;
    DNM_stReport* p_stDynamReport;
    MTH3D_tdstVector_ stNormalVector;
    tdeFuncId_ eFuncId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 1041–1062 */
/* addr: 0x0021b690  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1041
 *   +0x003c -> line 1061
 *   +0x0040 -> line 1062
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The target uses a1 for the tree and a2 for the result; a0 is unused. */
tdstNodeInterpret_* fn_p_stGetDTFunction(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    p_stValue->uParam.xValue = (float)g_stEngineStructure.stEngineTimer.ulUsefulDeltaTime;
    p_stValue->eType = (tdeVariableType_)8;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 977–1023 */
/* addr: 0x00220860  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 977
 *   +0x0024 -> line 980
 *   +0x0028 -> line 986
 *   +0x0040 -> line 988
 *   +0x0050 -> line 990
 *   +0x0058 -> line 993
 *   +0x0074 -> line 1000
 *   +0x007c -> line 1001
 *   +0x0088 -> line 1009
 *   +0x0090 -> line 1010
 *   +0x009c -> line 1019
 *   +0x00a4 -> line 1022
 *   +0x00a8 -> line 1023
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4VitesseHorizontaleDuPerso(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    DNM_stReport* p_stDynamReport;
    tdeFuncId_ eFuncId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stDynamReport = fn_pstGetDNMReport(hNewSuperObjPerso);
    if (p_stDynamReport == NULL) {
        return p_stTree;
    }
    switch (eFuncId) {
    case 237:
        p_stValue->uParam.lValue = 0;
        p_stValue->eType = (tdeVariableType_)8;
        return p_stTree;
    case 238:
        p_stValue->uParam.lValue = 0;
        p_stValue->eType = (tdeVariableType_)8;
        return p_stTree;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 876–962 */
/* addr: 0x00220930  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 876
 *   +0x0024 -> line 885
 *   +0x0028 -> line 891
 *   +0x0040 -> line 894
 *   +0x0054 -> line 898
 *   +0x007c -> line 902
 *   +0x0090 -> line 903
 *   +0x0098 -> line 907
 *   +0x00ac -> line 908
 *   +0x00b4 -> line 913
 *   +0x00c8 -> line 914
 *   +0x00d0 -> line 920
 *   +0x00d8 -> line 921
 *   +0x00e0 -> line 937
 *   +0x00e8 -> line 939
 *   +0x0110 -> line 942
 *   +0x0118 -> line 943
 *   +0x011c -> line 942
 *   +0x013c -> line 943
 *   +0x0144 -> line 949
 *   +0x0158 -> line 952
 *   +0x0168 -> line 954
 *   +0x0170 -> line 955
 *   +0x0174 -> line 954
 *   +0x0188 -> line 955
 *   +0x0190 -> line 960
 *   +0x0194 -> line 962
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4LitPositionZDx(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hPerso;
    COL_tdstCollideObject_* hGeoObj;
    int lZoneNumber;
    union { MTH3D_tdstVector_ stVectorMin; unsigned int vectorBits[3]; };
    short xMaxPoint;
    short xMinPoint;
    tdeFuncId_ eFuncId;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lZoneNumber = stParam.uParam.lValue;
    switch (eFuncId) {
    case 243:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(1, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    case 244:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(2, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    case 245:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(0, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        return p_stTree;
    }
    if (hGeoObj != NULL) {
        switch (*hGeoObj->d_xListOfElementsTypes) {
        case 7:
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = ((unsigned int*)hGeoObj->d_stListOfPoints)[0];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = ((unsigned int*)hGeoObj->d_stListOfPoints)[1];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = ((unsigned int*)hGeoObj->d_stListOfPoints)[2];
            p_stValue->eType = (tdeVariableType_)21;
            return p_stTree;
        case 8:
            COL_vGetMinMaxPointOfIndexedAlignedBox(hGeoObj, 0, 0, &xMinPoint, &xMaxPoint);
            COL_vGetPointOfObject(hGeoObj, &stVectorMin, xMinPoint);
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = vectorBits[0];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = vectorBits[1];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = vectorBits[2];
            p_stValue->eType = (tdeVariableType_)21;
            return p_stTree;
        }
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 727–862 */
/* addr: 0x00220ae0  size: 1008 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 727
 *   +0x0018 -> line 749
 *   +0x001c -> line 727
 *   +0x0024 -> line 730
 *   +0x0028 -> line 749
 *   +0x0034 -> line 753
 *   +0x0044 -> line 757
 *   +0x005c -> line 760
 *   +0x007c -> line 767
 *   +0x0080 -> line 774
 *   +0x0084 -> line 767
 *   +0x0088 -> line 774
 *   +0x008c -> line 767
 *   +0x0094 -> line 774
 *   +0x0098 -> line 767
 *   +0x00a4 -> line 770
 *   +0x00a8 -> line 773
 *   +0x00ac -> line 770
 *   +0x00c0 -> line 773
 *   +0x00c4 -> line 770
 *   +0x00c8 -> line 773
 *   +0x00d4 -> line 770
 *   +0x00d8 -> line 773
 *   +0x00f0 -> line 774
 *   +0x0138 -> line 782
 *   +0x014c -> line 783
 *   +0x0154 -> line 787
 *   +0x016c -> line 788
 *   +0x01c4 -> line 791
 *   +0x01dc -> line 793
 *   +0x01f4 -> line 796
 *   +0x0208 -> line 797
 *   +0x0210 -> line 803
 *   +0x0214 -> line 801
 *   +0x021c -> line 803
 *   +0x0224 -> line 806
 *   +0x0250 -> line 807
 *   +0x0258 -> line 811
 *   +0x026c -> line 816
 *   +0x0274 -> line 822
 *   +0x0278 -> line 825
 *   +0x027c -> line 822
 *   +0x0280 -> line 825
 *   +0x0284 -> line 822
 *   +0x0294 -> line 825
 *   +0x0298 -> line 822
 *   +0x029c -> line 825
 *   +0x02a8 -> line 822
 *   +0x02ac -> line 825
 *   +0x02ec -> line 833
 *   +0x02f4 -> line 834
 *   +0x02fc -> line 838
 *   +0x035c -> line 839
 *   +0x0374 -> line 842
 *   +0x0394 -> line 845
 *   +0x039c -> line 851
 *   +0x03a4 -> line 852
 *   +0x03ac -> line 858
 *   +0x03b4 -> line 860
 *   +0x03b8 -> line 858
 *   +0x03d0 -> line 862
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4VecteurPointAxe(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xNorm;
    MTH3D_tdstVector_ stPVector;
    tdeFuncId_ eFuncId;
    MTH3D_tdstVector_* param0;
    MTH3D_tdstVector_* p_stOVector;
    MTH3D_tdstVector_* p_stMVector;
    MTH3D_tdstVector_ stdVector;
    tdstGetSetParam_ stParam3;
    tdstGetSetParam_ stParam2;
    tdstGetSetParam_ stParam1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 581–715 */
/* addr: 0x00220ed0  size: 640 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 581
 *   +0x0030 -> line 599
 *   +0x0034 -> line 605
 *   +0x004c -> line 608
 *   +0x005c -> line 609
 *   +0x0060 -> line 608
 *   +0x0064 -> line 612
 *   +0x0078 -> line 615
 *   +0x00a0 -> line 619
 *   +0x00b4 -> line 620
 *   +0x00bc -> line 624
 *   +0x00d0 -> line 625
 *   +0x00d8 -> line 629
 *   +0x00ec -> line 630
 *   +0x00f4 -> line 635
 *   +0x00fc -> line 636
 *   +0x0104 -> line 642
 *   +0x0118 -> line 644
 *   +0x0120 -> line 646
 *   +0x013c -> line 651
 *   +0x0150 -> line 654
 *   +0x0160 -> line 655
 *   +0x0170 -> line 659
 *   +0x0174 -> line 662
 *   +0x0178 -> line 659
 *   +0x017c -> line 663
 *   +0x0180 -> line 659
 *   +0x0184 -> line 664
 *   +0x0188 -> line 662
 *   +0x018c -> line 663
 *   +0x0190 -> line 667
 *   +0x01b0 -> line 669
 *   +0x01b4 -> line 672
 *   +0x01d4 -> line 674
 *   +0x01d8 -> line 677
 *   +0x01f8 -> line 682
 *   +0x0200 -> line 687
 *   +0x0204 -> line 691
 *   +0x020c -> line 695
 *   +0x0218 -> line 699
 *   +0x0224 -> line 707
 *   +0x0234 -> line 711
 *   +0x023c -> line 713
 *   +0x0240 -> line 711
 *   +0x0258 -> line 715
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4LitAxeZDx(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    short xMinPoint;
    short xMaxPoint;
    MTH3D_tdstVector_ stAxisVector;
    MTH3D_tdstVector_ stVectorMax;
    MTH3D_tdstVector_ stVectorMin;
    float fMaxZ;
    float fMaxY;
    float fMaxX;
    int lLocalGlobal;
    int lZoneNumber;
    COL_tdstCollideObject_* hGeoObj;
    HIE_tdstSuperObject_* hPerso;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 469–565 */
/* addr: 0x00221150  size: 516 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 469
 *   +0x0024 -> line 479
 *   +0x0028 -> line 485
 *   +0x0040 -> line 488
 *   +0x0054 -> line 492
 *   +0x007c -> line 496
 *   +0x0090 -> line 497
 *   +0x0098 -> line 502
 *   +0x00ac -> line 503
 *   +0x00b4 -> line 508
 *   +0x00c8 -> line 509
 *   +0x00d0 -> line 514
 *   +0x00d8 -> line 515
 *   +0x00e0 -> line 520
 *   +0x00e8 -> line 522
 *   +0x0110 -> line 528
 *   +0x011c -> line 529
 *   +0x0128 -> line 531
 *   +0x0130 -> line 536
 *   +0x0144 -> line 539
 *   +0x0154 -> line 540
 *   +0x0164 -> line 545
 *   +0x01a4 -> line 547
 *   +0x01ac -> line 552
 *   +0x01b0 -> line 556
 *   +0x01b8 -> line 559
 *   +0x01c4 -> line 562
 *   +0x01cc -> line 563
 *   +0x01d0 -> line 562
 *   +0x01e8 -> line 565
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4LitDimensionZDx(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hPerso;
    COL_tdstCollideObject_* hGeoObj;
    int lZoneNumber;
    union { MTH3D_tdstVector_ stVectorMin; unsigned int vectorBits[3]; };
    MTH3D_tdstVector_ stVectorMax;
    short xMaxPoint;
    short xMinPoint;
    tdeFuncId_ eFuncId;
    float xRadius;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lZoneNumber = stParam.uParam.lValue;
    switch (eFuncId) {
    case 252:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(1, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    case 253:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(2, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    case 254:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(0, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        return p_stTree;
    }
    if (hGeoObj != NULL) {
        switch (*hGeoObj->d_xListOfElementsTypes) {
        case 7:
            COL_fn_vGetInfoFromGeometricSphere(&stVectorMin, &xRadius, hGeoObj);
            stVectorMin.xX = xRadius;
            stVectorMin.xY = xRadius;
            stVectorMin.xZ = xRadius;
            break;
        case 8:
            COL_vGetMinMaxPointOfIndexedAlignedBox(hGeoObj, 0, 0, &xMinPoint, &xMaxPoint);
            COL_vGetPointOfObject(hGeoObj, &stVectorMin, xMinPoint);
            COL_vGetPointOfObject(hGeoObj, &stVectorMax, xMaxPoint);
            MTH3D_M_vAbsSubVector(&stVectorMin, &stVectorMin, &stVectorMax);
            break;
        default:
            stVectorMin.xX = 0.0f;
            stVectorMin.xY = 0.0f;
            stVectorMin.xZ = 0.0f;
            break;
        }
    } else {
        stVectorMin.xX = 0.0f;
        stVectorMin.xY = 0.0f;
        stVectorMin.xZ = 0.0f;
    }
    ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = vectorBits[0];
    ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = vectorBits[1];
    ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = vectorBits[2];
    p_stValue->eType = (tdeVariableType_)21;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 361–456 */
/* addr: 0x00221360  size: 628 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 361
 *   +0x0024 -> line 371
 *   +0x0028 -> line 377
 *   +0x0040 -> line 380
 *   +0x0054 -> line 384
 *   +0x007c -> line 389
 *   +0x0090 -> line 390
 *   +0x0098 -> line 394
 *   +0x00ac -> line 395
 *   +0x00b4 -> line 400
 *   +0x00c8 -> line 401
 *   +0x00d0 -> line 405
 *   +0x00d8 -> line 406
 *   +0x00e0 -> line 410
 *   +0x00e8 -> line 412
 *   +0x0110 -> line 417
 *   +0x0138 -> line 419
 *   +0x0140 -> line 424
 *   +0x0154 -> line 427
 *   +0x0164 -> line 428
 *   +0x0174 -> line 431
 *   +0x0190 -> line 434
 *   +0x0194 -> line 431
 *   +0x01dc -> line 434
 *   +0x01f4 -> line 436
 *   +0x01fc -> line 442
 *   +0x0204 -> line 441
 *   +0x020c -> line 442
 *   +0x0220 -> line 446
 *   +0x0228 -> line 450
 *   +0x022c -> line 451
 *   +0x0234 -> line 450
 *   +0x023c -> line 451
 *   +0x0254 -> line 454
 *   +0x0258 -> line 456
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4LitCentreZDx(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hPerso;
    COL_tdstCollideObject_* hGeoObj;
    int lZoneNumber;
    union { MTH3D_tdstVector_ stVectorMin; unsigned int vectorBits[3]; };
    MTH3D_tdstVector_ stVectorMax;
    short xMaxPoint;
    short xMinPoint;
    tdeFuncId_ eFuncId;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator(eFuncId), p_SuperObjPerso, &hPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lZoneNumber = stParam.uParam.lValue;
    switch (eFuncId) {
    case 246:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(1, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    case 247:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(2, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    case 248:
        hGeoObj = fn_hGetCollideZdxOfTypeAtIndex(0, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(39, NULL);
        return p_stTree;
    }
    if (hGeoObj != NULL) {
        switch (*hGeoObj->d_xListOfElementsTypes) {
        case 7:
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = ((unsigned int*)hGeoObj->d_stListOfPoints)[0];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = ((unsigned int*)hGeoObj->d_stListOfPoints)[1];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = ((unsigned int*)hGeoObj->d_stListOfPoints)[2];
            p_stValue->eType = (tdeVariableType_)21;
            break;
        case 8:
            COL_vGetMinMaxPointOfIndexedAlignedBox(hGeoObj, 0, 0, &xMinPoint, &xMaxPoint);
            COL_vGetPointOfObject(hGeoObj, &stVectorMin, xMinPoint);
            COL_vGetPointOfObject(hGeoObj, &stVectorMax, xMaxPoint);
            MTH3D_M_vAddVector(&stVectorMin, &stVectorMin, &stVectorMax);
            MTH3D_M_vMulScalar(&stVectorMin, &stVectorMin, 0.5f);
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = vectorBits[0];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = vectorBits[1];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = vectorBits[2];
            p_stValue->eType = (tdeVariableType_)21;
            break;
        default:
            stVectorMin.xX = 0.0f;
            stVectorMin.xY = 0.0f;
            stVectorMin.xZ = 0.0f;
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = vectorBits[0];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = vectorBits[1];
            ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = vectorBits[2];
            p_stValue->eType = (tdeVariableType_)21;
            break;
        }
    } else {
        stVectorMin.xX = 0.0f;
        stVectorMin.xY = 0.0f;
        stVectorMin.xZ = 0.0f;
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = vectorBits[0];
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = vectorBits[1];
        ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = vectorBits[2];
        p_stValue->eType = (tdeVariableType_)21;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 289–346 */
/* addr: 0x002215e0  size: 476 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 289
 *   +0x0004 -> line 292
 *   +0x0008 -> line 289
 *   +0x0024 -> line 290
 *   +0x0028 -> line 292
 *   +0x0038 -> line 304
 *   +0x0040 -> line 305
 *   +0x0044 -> line 304
 *   +0x0048 -> line 305
 *   +0x0068 -> line 308
 *   +0x0074 -> line 309
 *   +0x0098 -> line 312
 *   +0x00a8 -> line 313
 *   +0x00d4 -> line 323
 *   +0x00d8 -> line 322
 *   +0x00dc -> line 323
 *   +0x00e0 -> line 322
 *   +0x00e4 -> line 323
 *   +0x00e8 -> line 322
 *   +0x00ec -> line 323
 *   +0x00f0 -> line 322
 *   +0x00f8 -> line 324
 *   +0x00fc -> line 323
 *   +0x0104 -> line 324
 *   +0x0108 -> line 323
 *   +0x010c -> line 324
 *   +0x0110 -> line 325
 *   +0x0118 -> line 322
 *   +0x011c -> line 325
 *   +0x0170 -> line 326
 *   +0x0174 -> line 329
 *   +0x0178 -> line 326
 *   +0x01a0 -> line 329
 *   +0x01bc -> line 346
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCode4VitessePadAnalogique(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    float xNorm;
    union { MTH3D_tdstVector_ stSpeedVector; unsigned int aSpeed[3]; };
    tdeFuncId_ eFuncId;
    float xA, xB;
    int lC;
    eFuncId = (p_stTree - 1)->uDummy.uId.eFuncId;
    if (eFuncId != 77) { return p_stTree; }
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    xA = -(p_stValue->eType == 8 ? p_stValue->uParam.xValue : (float)p_stValue->uParam.lValue);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    xB = -(p_stValue->eType == 8 ? p_stValue->uParam.xValue : (float)p_stValue->uParam.lValue);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, p_stValue);
    if (p_stValue->eType == 8) { lC = MTH_M_xRealToLong(p_stValue->uParam.xValue); } else { lC = p_stValue->uParam.lValue; }
    stSpeedVector.xX = 0.0f; stSpeedVector.xY = 0.0f; stSpeedVector.xZ = 0.0f;
    stSpeedVector.xX = (float)lC * (xB / 100.0f);
    stSpeedVector.xZ = (float)lC * (xA / 100.0f);
    xNorm = MTH_xSqrt(MTH_xSqr3(stSpeedVector.xX, stSpeedVector.xY, stSpeedVector.xZ)); if (xNorm != 0.0f) { xNorm = 1.0f / xNorm; stSpeedVector.xX = xNorm * stSpeedVector.xX; stSpeedVector.xY = xNorm * stSpeedVector.xY; stSpeedVector.xZ = xNorm * stSpeedVector.xZ; }
    stSpeedVector.xX = (float)lC * stSpeedVector.xX; stSpeedVector.xY = (float)lC * stSpeedVector.xY; stSpeedVector.xZ = (float)lC * stSpeedVector.xZ;
    ((unsigned int*)&p_stValue->uParam.stVectorValue)[0] = aSpeed[0]; ((unsigned int*)&p_stValue->uParam.stVectorValue)[1] = aSpeed[1]; ((unsigned int*)&p_stValue->uParam.stVectorValue)[2] = aSpeed[2]; p_stValue->eType = (tdeVariableType_)21;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Functio1.cxx lines 124–277 */
/* addr: 0x002217c0  size: 952 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 124
 *   +0x0004 -> line 161
 *   +0x0008 -> line 124
 *   +0x000c -> line 138
 *   +0x0010 -> line 124
 *   +0x0014 -> line 161
 *   +0x0018 -> line 124
 *   +0x0028 -> line 138
 *   +0x0034 -> line 161
 *   +0x0038 -> line 138
 *   +0x0040 -> line 135
 *   +0x0044 -> line 138
 *   +0x0048 -> line 139
 *   +0x004c -> line 140
 *   +0x0050 -> line 139
 *   +0x0058 -> line 141
 *   +0x005c -> line 139
 *   +0x0064 -> line 143
 *   +0x0068 -> line 161
 *   +0x0070 -> line 166
 *   +0x0080 -> line 171
 *   +0x0084 -> line 172
 *   +0x008c -> line 175
 *   +0x00bc -> line 176
 *   +0x00c4 -> line 180
 *   +0x00f4 -> line 183
 *   +0x0104 -> line 186
 *   +0x0114 -> line 188
 *   +0x0118 -> line 190
 *   +0x0128 -> line 192
 *   +0x0154 -> line 193
 *   +0x0158 -> line 194
 *   +0x0164 -> line 195
 *   +0x0168 -> line 198
 *   +0x0174 -> line 200
 *   +0x0178 -> line 201
 *   +0x0180 -> line 206
 *   +0x0184 -> line 208
 *   +0x0194 -> line 210
 *   +0x0198 -> line 212
 *   +0x01a0 -> line 214
 *   +0x01d8 -> line 217
 *   +0x020c -> line 221
 *   +0x0218 -> line 224
 *   +0x0220 -> line 225
 *   +0x0238 -> line 227
 *   +0x0240 -> line 228
 *   +0x0244 -> line 231
 *   +0x0248 -> line 232
 *   +0x0258 -> line 236
 *   +0x0268 -> line 241
 *   +0x026c -> line 245
 *   +0x0270 -> line 242
 *   +0x0274 -> line 245
 *   +0x027c -> line 246
 *   +0x0288 -> line 247
 *   +0x02b0 -> line 250
 *   +0x02c0 -> line 252
 *   +0x02c4 -> line 253
 *   +0x02cc -> line 255
 *   +0x0304 -> line 258
 *   +0x0338 -> line 261
 *   +0x0340 -> line 264
 *   +0x0348 -> line 265
 *   +0x0360 -> line 267
 *   +0x0368 -> line 268
 *   +0x036c -> line 271
 *   +0x0370 -> line 272
 *   +0x037c -> line 273
 *   +0x0380 -> line 274
 *   +0x0390 -> line 276
 *   +0x0398 -> line 277
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vComputeCollideResult(HIE_tdstSuperObject_* hSender, int lCollideType)
{
    SECT_tdstSector_* hSectorObject;
    SECT_tdstSector_* hSector1;
    MTH3D_tdstVector_ stMax;
    MTH3D_tdstVector_ stMin;
    GMT_tdstCollideMaterial_* hColMatHit;
    int i;
    SECT_tdstCharList_* hInterList;
    SECT_tdstCharList_* hList;
    SECT_tdstCharElement_* hCharacterList;
    HIE_tdstSuperObject_* hSuperObjectHit;
    GMT_tdstCollideMaterial_* spColMatHit;
    *(int*)&g_stCollideResultPoint.xX = 0;
    *(int*)&g_stCollideResultPoint.xY = 0;
    *(int*)&g_stCollideResultPoint.xZ = 0;
    *(int*)&g_stCollideResultVector.xX = 0;
    *(int*)&g_stCollideResultVector.xY = 0;
    *(int*)&g_stCollideResultVector.xZ = 0;
    g_hSuperObjectHit = NULL;
    g_hColMatHit = NULL;
    spColMatHit = NULL;
    hColMatHit = NULL;
    hSectorObject = SECT_fn_hResearchInWhatSectorIAm(SECT_hFatherSector, &g_stCollideParameterPoint);
    if (g_ulMode != 1) {
        g_ulSpoMask = g_ulOverRideRayTraceSpoMask;
        if (hSectorObject == NULL) {
            HIE_bIntersectSegmentWithFirstSuperObject(&g_stCollideParameterPoint, &g_stCollideParameterVector, SECT_hFatherSector, &g_stCollideResultPoint, &g_stCollideResultVector, &g_hSuperObjectHit, &spColMatHit);
        } else {
            HIE_bIntersectSegmentWithFirstSuperObject(&g_stCollideParameterPoint, &g_stCollideParameterVector, hSectorObject, &g_stCollideResultPoint, &g_stCollideResultVector, &g_hSuperObjectHit, &spColMatHit);
            for (i = hSectorObject->p_stSectorList->ulNbElement; i > 0; i--) {
                if (hSectorObject->p_stSectorList->p_aElement[i].ucType == 2) { break; }
                if (!SECT_fn_bIsThisSectorVirtual(hSectorObject->p_stSectorList->p_aElement[i].hSector)) {
                    HIE_bIntersectSegmentWithFirstSuperObject(&g_stCollideParameterPoint, &g_stCollideParameterVector, hSectorObject->p_stSectorList->p_aElement[i].hSector, &g_stCollideResultPoint, &g_stCollideResultVector, &g_hSuperObjectHit, &spColMatHit);
                }
            }
        }
        if (g_ulMode == 0) {
            g_hColMatHit = spColMatHit;
        }
    } else {
        g_ulSpoMask = 0;
        hList = hSectorObject->p_stSectorList->p_aCharacterList;
        while (hList != NULL) {
            hCharacterList = hList->p_stFirstElement;
            if (hCharacterList->hSuperObject != hSender) {
                if ((fn_ulStandardGameGetCustomBitsSO(hCharacterList->hSuperObject) & 0x10) != 0) {
                    if ((hCharacterList->hSuperObject->hLinkedObject.p_stCharacter->h_StandardGame->ucMiscFlags & 4) == 0) {
                        if (HIE_bIntersectSegmentWithFirstSuperObject(&g_stCollideParameterPoint, &g_stCollideParameterVector, hCharacterList->hSuperObject, &g_stCollideResultPoint, &g_stCollideResultVector, &g_hSuperObjectHit, &spColMatHit) != 0) {
                            hSuperObjectHit = hCharacterList->hSuperObject;
                            while ((hSuperObjectHit != NULL) && (hSuperObjectHit->ulTypeOfLinkedObject != 2)) {
                                hSuperObjectHit = hSuperObjectHit->hNextBrotherDyn;
                            }
                            if (hSuperObjectHit != NULL) {
                                g_hSuperObjectHit = hSuperObjectHit;
                            }
                        }
                    }
                }
            }
            hList = hList->p_stNextElement;
        }
        for (i = hSectorObject->p_stSectorList->ulNbBorder; i > 0; i--) {
            SECT_fn_vGetMinPointInBorder(hSectorObject->p_stSectorList->p_aBorder[i - 1].p_stBorder, &stMin);
            SECT_fn_vGetMaxPointInBorder(hSectorObject->p_stSectorList->p_aBorder[i - 1].p_stBorder, &stMax);
            if (INT_fn_bDetectIntersectSegmentWithBox(&g_stCollideParameterPoint, &g_stCollideParameterVector, &stMin, &stMax) != 0) {
                hInterList = hSectorObject->p_stSectorList->p_aBorder[i - 1].p_stCharacterList;
                while (hInterList != NULL) {
                    hSuperObjectHit = hInterList->p_stFirstElement->hSuperObject;
                    if (hSuperObjectHit != hSender) {
                        if ((fn_ulStandardGameGetCustomBitsSO(hSuperObjectHit) & 0x10) != 0) {
                            if ((hSuperObjectHit->hLinkedObject.p_stCharacter->h_StandardGame->ucMiscFlags & 4) == 0) {
                                if (HIE_bIntersectSegmentWithFirstSuperObject(&g_stCollideParameterPoint, &g_stCollideParameterVector, hSuperObjectHit, &g_stCollideResultPoint, &g_stCollideResultVector, &g_hSuperObjectHit, &spColMatHit) != 0) {
                                    while ((hSuperObjectHit != NULL) && (hSuperObjectHit->ulTypeOfLinkedObject != 2)) {
                                        hSuperObjectHit = hSuperObjectHit->hNextBrotherDyn;
                                    }
                                    if (hSuperObjectHit != NULL) {
                                        g_hSuperObjectHit = hSuperObjectHit;
                                    }
                                }
                            }
                        }
                    }
                    hInterList = hInterList->p_stNextElement;
                }
            }
        }
        g_hColMatHit = spColMatHit;
    }
    return;
}
