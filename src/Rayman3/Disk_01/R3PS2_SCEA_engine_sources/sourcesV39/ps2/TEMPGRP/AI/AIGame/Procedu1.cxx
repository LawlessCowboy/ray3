/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstBatchOrder_ AI_tdstBatchOrder_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct DNM_stReport DNM_stReport;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstList_ tdstList_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct tdstStandardGame_ tdstStandardGame_;

/* These shared value types are referenced by locals in this TU.  The
 * extractor previously emitted only forward declarations when their debug
 * records were owned by another source file. */
typedef enum tdeProcedureId_ { eProcedureId_Dummy = 0 } tdeProcedureId_;
typedef enum tdeVariableType_ { eVariableType_Dummy = 0, E_vt_Integer = 6, E_vt_Float = 8 } tdeVariableType_;
struct MTH3D_tdstVector_ { float xX; float xY; float xZ; };
/* Retail layout: the transformation is a 96-byte, 16-byte aligned blob (the
 * 4-byte transformation type plus padding, a 4x4 matrix and a scale vector).
 * The game copies whole transformations with lq/sq quadword pairs, so the
 * copy has to be one blob: a single nested struct of 16-byte aligned
 * vectors is copied as six lq/sq pairs, while a multi-member struct is
 * copied member by member and a float[24] member with a byte loop. */
struct MTH4D_tdstVector_ { float xX; float xY; float xZ; float xW; } __attribute__((aligned(16)));
struct MTH4D_tdstMatrix_ { MTH4D_tdstVector_ stCol_0; MTH4D_tdstVector_ stCol_1; MTH4D_tdstVector_ stCol_2; MTH4D_tdstVector_ stCol_3; } __attribute__((aligned(16)));
typedef struct { MTH4D_tdstVector_ stCol_0; MTH4D_tdstVector_ stCol_1; MTH4D_tdstVector_ stCol_2; MTH4D_tdstVector_ stCol_3; MTH4D_tdstVector_ stCol_4; MTH4D_tdstVector_ stCol_5; } MAT_stTransformationData_;
struct MAT_tdstTransformation_ { MAT_stTransformationData_ stData; } __attribute__((aligned(16)));
typedef union tduGetSetParam_ {
    int lValue;
    float xValue;
    MTH3D_tdstVector_ stVectorValue;
    void* pValue;
    unsigned char ucValue;
    unsigned short usValue;
    signed char scValue;
} tduGetSetParam_;
struct tdstGetSetParam_ { tduGetSetParam_ uParam; tdeVariableType_ eType; };

union tduIdInterpret_ { tdeProcedureId_ eProcedureId; };
union tduGetSetParamForNode_ { int lValue; unsigned int ulValue; float xValue; void* pValue; unsigned char ucValue; };
union tduNodeDummy_ { tduIdInterpret_ uId; tduGetSetParamForNode_ uParam; };
struct tdstNodeInterpret_ {
    tduNodeDummy_ uDummy;
    unsigned short uwNodeToSkip;
    unsigned char ucDepth;
    unsigned char eType;
};

/* Recovered HIE layout shared with ProcRay2.cxx. */
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

extern "C" void IPT_fn_vSetUniqueValueForHandle(IPT_tdstEntryElement_* _hElement, unsigned int _ulValue);
extern "C" tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso,
                                                 tdstNodeInterpret_* p_stTree,
                                                 tdstGetSetParam_* p_stValue);
extern "C" void GLI_fn_vSetBrightness(int);
extern "C" unsigned char fn_ucGetProcedureUltraOperator(tdeProcedureId_);
extern "C" void fn_vGetUltraOperatorPerso(unsigned char, HIE_tdstSuperObject_*, HIE_tdstSuperObject_**);
extern "C" float MEC_g_xClimbSpeedLimit;
struct tdst3dData_;
struct tdstEngineObject_ { tdst3dData_* h_3dData; tdstStandardGame_* h_StandardGame; tdstDynam_* h_Dynam; void* h_Brain; tdstCineinfo_* h_Cineinfo; tdstCollSet_* h_CollSet; void* h_MSWay; tdstMSLight_* h_MSLight; };
extern "C" void MEC_fn_vForcePlatformLink(DNM_stDynamics*, HIE_tdstSuperObject_*, HIE_tdstSuperObject_*);
extern "C" void MEC_fn_vFreePlatformLink(DNM_stDynamics*, HIE_tdstSuperObject_*);
extern "C" void fn_vMSLightSetColorRGBA(tdstMSLight_*, float, float, float, float);
extern "C" void fn_v3dDataSetBrainComputationFrequency(tdst3dData_*, unsigned char);
extern "C" void fn_v3dDataSetLightComputationFrequency(tdst3dData_*, unsigned char);
extern "C" void fn_vCollSetSetCollComputeFrequency(tdstCollSet_*, unsigned char);
extern "C" void fn_vCollSetSetCharacterNoCollisionWithMap(tdstCollSet_*, int);
extern "C" void fn_vCollSetSetCharacterNoCollisionWithSecondaryCharacter(tdstCollSet_*, int);
extern "C" void fn_vCollSetSetCharacterNoCollisionWithMainCharacter(tdstCollSet_*, int);
extern "C" void fn_vCollSetSetCharacterNoCollisionWithOtherSectors(tdstCollSet_*, int);
extern "C" void fn_vCollSetSetCharacterNoCollisionWithProjectile(tdstCollSet_*, int);
extern "C" void fn_vCollSetSetCharacterNoCollisionZdeWithProjectile(tdstCollSet_*, int);
union tduVector3Words { MTH3D_tdstVector_ v; unsigned int w[3]; };
struct DNM_stDynamics {
    int m_lObjectType;
    int m_pCurrentIdCard;
    unsigned int m_ulFlags; /* +0x8 */
    unsigned int m_ulEndFlags; /* +0xc */
    float m_aPad10[(0x48 - 0x10) / 4];
    MTH3D_tdstVector_ m_stScale; /* +0x48 */
    float m_aPad54[(0x170 - 0x54) / 4];
    MTH3D_tdstVector_ m_stInertia; /* +0x170 */
    float m_xStreamPrority;
    float m_xStreamFactor;
    MTH3D_tdstVector_ m_stSlideFactor; /* +0x184 */
    float m_aPad190[(0x1a0 - 0x190) / 4];
    tduVector3Words m_uStreamSpeed; /* +0x1a0 */
};
struct DNM_stReport { unsigned int m_ulPrevSurfaceState; unsigned int m_ulCurrSurfaceState; };
extern "C" DNM_stDynamics* fn_p_stDynamGetDynamics(tdstDynam_*);
extern "C" HIE_tdstSuperObject_* fn_h_StandardGameGetSuperObject(tdstStandardGame_*);
extern "C" void fn_hGetCollideZdxOfTypeAtIndex(unsigned char, unsigned short, HIE_tdstSuperObject_*);
extern "C" void fn_vOnAIErm_M_UpdateLastError(int, char*);
extern "C" DNM_stReport* fn_pstGetDNMReport(HIE_tdstSuperObject_*);
extern "C" void fn_vSuperObjectSetLastCollidedCharacter(HIE_tdstSuperObject_*, HIE_tdstSuperObject_*);
extern "C" void TXT_ChangeDefaultColor(float, float, float);
/* The batch order is a union: a "synchro" order carries the reference
 * perso and its channel, an "orientation" order carries two orientation
 * vectors.  Both views start at +0x4. */
typedef union AI_tduBatchOrderData_ {
    struct {
        HIE_tdstSuperObject_* hRefPerso;
        unsigned char ucRefChannel;
    } stPerso;
    struct {
        float xX;
        float xY;
        float xZ;
        float xW;
        float xV;
        float xU;
    } stOrientation;
} AI_tduBatchOrderData_;
struct AI_tdstBatchOrder_ {
    HIE_tdstSuperObject_* hPersoToMove;
    AI_tduBatchOrderData_ u;
    unsigned short uwChannel;
    unsigned char ucChannel;
    unsigned char ucPadding;
    unsigned char ucBatchOrderType;
};
static unsigned short AI_gs_uwNbrBatchOrder;
static AI_tdstBatchOrder_ AI_gs_a_stBatchSetPersoTab[20];
extern "C" void AI_vProcessSetPersoWithPerso(AI_tdstBatchOrder_*);
extern "C" void AI_vProcessSetPersoOrientation(AI_tdstBatchOrder_*);
extern "C" void AI_vProcessSetPersoAtModulePosition(AI_tdstBatchOrder_*);
extern "C" void HIE_fn_vUpdateGlobalMatrix(HIE_tdstSuperObject_*);
extern "C" void HIE_fn_vComputeNewRelativeMatrix(HIE_tdstSuperObject_*);
extern "C" void HIE_fn_vInvalidateHierarchy(HIE_tdstSuperObject_*);
extern "C" void HIE_fn_vRefreshHierarchy(HIE_tdstSuperObject_*);
extern "C" void MEC_vImposeRotationMatrix(DNM_stDynamics*, MAT_tdstTransformation_*);
extern "C" tdstNodeInterpret_* fn_p_stSwapNextParameter(tdstNodeInterpret_*);
extern "C" int sprintf(char*, const char*, ...);
extern "C" char* fn_szGetStringFromTextOrStringParam(tdstGetSetParam_* p_stValue);
/* The debug record says void itoa(int, ...); it returns the buffer and callers
 * pass the long result unextended. */
extern "C" char* itoa(long value, char* buffer, int radix);

/* Engine float-to-int conversion: retail converts through $f30 at 164 sites
 * in 77 game functions ("cvt.w.s $f30, x; mfc1 r, $f30"), a register MWCC
 * never picks for its own conversions. */
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
struct tdstList_ { unsigned char ucNbOfElements; };
extern "C" HIE_tdstSuperObject_* fn_p_stGetPersoInList(tdstList_*, unsigned char);
extern "C" int COLANTIBUG_hHandleOfCharacter;
extern "C" signed char INO_aJoyUsedByAI[16];
extern "C" void TFMT_vSetDefaultValuesCharacter(float, float, float);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 6566–6587 */
/* addr: 0x0022f360  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6566
 *   +0x0008 -> line 6575
 *   +0x0010 -> line 6576
 *   +0x0014 -> line 6575
 *   +0x0018 -> line 6576
 *   +0x007c -> line 6577
 *   +0x008c -> line 6581
 *   +0x0098 -> line 6586
 *   +0x009c -> line 6581
 *   +0x00a4 -> line 6587
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stReleaseAnalogJoystick(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned char ucPadNumber;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ucPadNumber = (unsigned char)((stParam.eType == E_vt_Float) ? stParam.uParam.xValue : (float)stParam.uParam.lValue);
    if (ucPadNumber > 15) ucPadNumber = 0;
    INO_aJoyUsedByAI[ucPadNumber] = 0;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 6508–6560 */
/* addr: 0x0022f410  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6508
 *   +0x0008 -> line 6518
 *   +0x000c -> line 6508
 *   +0x0020 -> line 6518
 *   +0x0028 -> line 6519
 *   +0x002c -> line 6518
 *   +0x0030 -> line 6519
 *   +0x0094 -> line 6520
 *   +0x00a4 -> line 6532
 *   +0x00b4 -> line 6537
 *   +0x00c4 -> line 6538
 *   +0x00c8 -> line 6541
 *   +0x00d8 -> line 6542
 *   +0x00dc -> line 6547
 *   +0x00ec -> line 6551
 *   +0x00f4 -> line 6548
 *   +0x00f8 -> line 6551
 *   +0x0100 -> line 6556
 *   +0x0104 -> line 6551
 *   +0x0108 -> line 6556
 *   +0x011c -> line 6559
 *   +0x0120 -> line 6560
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetAnalogJoystickAxes2(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    IPT_tdstEntryElement_* hJoystickAxeZ;
    IPT_tdstEntryElement_* hJoystickAxeY;
    IPT_tdstEntryElement_* hJoystickAxeX;
    unsigned char ucPadNumber;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 6457–6499 */
/* addr: 0x0022f550  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6457
 *   +0x0004 -> line 6461
 *   +0x0008 -> line 6457
 *   +0x0018 -> line 6458
 *   +0x001c -> line 6461
 *   +0x0044 -> line 6466
 *   +0x004c -> line 6468
 *   +0x0054 -> line 6473
 *   +0x0060 -> line 6475
 *   +0x0070 -> line 6477
 *   +0x0078 -> line 6482
 *   +0x0080 -> line 6484
 *   +0x0090 -> line 6486
 *   +0x00a0 -> line 6491
 *   +0x00a8 -> line 6494
 *   +0x00b0 -> line 6495
 *   +0x00b4 -> line 6499
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSHWSetShadowMode(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    tdstNodeInterpret_* p_stResult;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    switch (eProcedureId) {
    case 0x197:
        p_stResult = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        break;
    case 0x198:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_stResult = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        break;
    case 0x199:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        p_stResult = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(0x27, 0);
        p_stResult = p_stTree;
        break;
    }
    return p_stResult;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 6304–6445 */
/* addr: 0x0022f620  size: 860 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6304
 *   +0x0024 -> line 6318
 *   +0x0040 -> line 6320
 *   +0x0044 -> line 6324
 *   +0x004c -> line 6320
 *   +0x0050 -> line 6321
 *   +0x0058 -> line 6324
 *   +0x0064 -> line 6325
 *   +0x0074 -> line 6327
 *   +0x007c -> line 6325
 *   +0x0080 -> line 6327
 *   +0x0088 -> line 6328
 *   +0x008c -> line 6327
 *   +0x0090 -> line 6331
 *   +0x009c -> line 6335
 *   +0x00ac -> line 6332
 *   +0x00b0 -> line 6335
 *   +0x00b4 -> line 6337
 *   +0x00b8 -> line 6332
 *   +0x00c0 -> line 6335
 *   +0x00c4 -> line 6332
 *   +0x00c8 -> line 6341
 *   +0x00cc -> line 6332
 *   +0x00d0 -> line 6341
 *   +0x00d8 -> line 6342
 *   +0x00e0 -> line 6345
 *   +0x0148 -> line 6354
 *   +0x018c -> line 6362
 *   +0x0194 -> line 6365
 *   +0x0198 -> line 6366
 *   +0x01a0 -> line 6369
 *   +0x01a4 -> line 6371
 *   +0x01ac -> line 6374
 *   +0x01b0 -> line 6375
 *   +0x01b4 -> line 6376
 *   +0x01bc -> line 6379
 *   +0x01c4 -> line 6380
 *   +0x01c8 -> line 6385
 *   +0x01cc -> line 6387
 *   +0x01d0 -> line 6385
 *   +0x01d4 -> line 6387
 *   +0x01d8 -> line 6385
 *   +0x01dc -> line 6389
 *   +0x01e4 -> line 6385
 *   +0x01e8 -> line 6386
 *   +0x01ec -> line 6387
 *   +0x01f0 -> line 6385
 *   +0x01f4 -> line 6387
 *   +0x01f8 -> line 6386
 *   +0x01fc -> line 6385
 *   +0x0200 -> line 6387
 *   +0x0204 -> line 6386
 *   +0x0208 -> line 6387
 *   +0x0214 -> line 6389
 *   +0x0218 -> line 6391
 *   +0x0278 -> line 6396
 *   +0x027c -> line 6393
 *   +0x0280 -> line 6405
 *   +0x0290 -> line 6396
 *   +0x0294 -> line 6398
 *   +0x029c -> line 6400
 *   +0x02a8 -> line 6405
 *   +0x02b0 -> line 6408
 *   +0x02bc -> line 6410
 *   +0x02c4 -> line 6417
 *   +0x0300 -> line 6435
 *   +0x0308 -> line 6439
 *   +0x0320 -> line 6441
 *   +0x0334 -> line 6444
 *   +0x0338 -> line 6445
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTemporalChangeSighting(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xNorm;
    unsigned int ulCurrentBits;
    tdstDynam_* hDynam;
    float xTmp;
    float xScalar;
    float xValue;
    MTH3D_tdstVector_ stTmpV1;
    MTH3D_tdstVector_ stZvect;
    MTH3D_tdstVector_ stYvect;
    MTH3D_tdstVector_ stXvect;
    MTH3D_tdstVector_ stVect;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 6127–6154 */
/* addr: 0x0022f980  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6127
 *   +0x0008 -> line 6134
 *   +0x0010 -> line 6154
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetVideoOptions(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    return fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 6105–6115 */
/* addr: 0x0022f9a0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6105
 *   +0x0008 -> line 6109
 *   +0x0014 -> line 6112
 *   +0x0020 -> line 6114
 *   +0x0024 -> line 6115
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeBrightness(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    GLI_fn_vSetBrightness(stParam.uParam.lValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 6078–6096 */
/* addr: 0x0022f9e0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6078
 *   +0x0008 -> line 6082
 *   +0x0010 -> line 6096
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSelectResolution(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    return fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 6058–6067 */
/* addr: 0x0022fa00  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6058
 *   +0x0008 -> line 6062
 *   +0x0010 -> line 6067
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSelectDriver(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    return fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 6029–6047 */
/* addr: 0x0022fa20  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6029
 *   +0x0008 -> line 6035
 *   +0x000c -> line 6029
 *   +0x0018 -> line 6035
 *   +0x0020 -> line 6036
 *   +0x0024 -> line 6035
 *   +0x0028 -> line 6038
 *   +0x0034 -> line 6039
 *   +0x0038 -> line 6041
 *   +0x0048 -> line 6044
 *   +0x004c -> line 6041
 *   +0x0050 -> line 6044
 *   +0x005c -> line 6046
 *   +0x0060 -> line 6047
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetDefaultFormatCharacter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xCharWidth;
    float xLineHeight;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xCharWidth = stParam.uParam.xValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xLineHeight = stParam.uParam.xValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    TFMT_vSetDefaultValuesCharacter(xCharWidth, xLineHeight, stParam.uParam.xValue);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 5878–5950 */
/* addr: 0x0022faa0  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5878
 *   +0x0004 -> line 5888
 *   +0x0008 -> line 5878
 *   +0x0024 -> line 5888
 *   +0x0028 -> line 5880
 *   +0x002c -> line 5888
 *   +0x0050 -> line 5893
 *   +0x0054 -> line 5888
 *   +0x0058 -> line 5893
 *   +0x005c -> line 5888
 *   +0x0068 -> line 5893
 *   +0x0070 -> line 5894
 *   +0x0074 -> line 5899
 *   +0x0078 -> line 5893
 *   +0x007c -> line 5899
 *   +0x0084 -> line 5900
 *   +0x0088 -> line 5899
 *   +0x008c -> line 5900
 *   +0x0090 -> line 5902
 *   +0x0094 -> line 5900
 *   +0x0098 -> line 5902
 *   +0x00a8 -> line 5906
 *   +0x00ac -> line 5924
 *   +0x00b0 -> line 5906
 *   +0x00b4 -> line 5907
 *   +0x00b8 -> line 5924
 *   +0x00d8 -> line 5927
 *   +0x00e0 -> line 5929
 *   +0x00e4 -> line 5930
 *   +0x00ec -> line 5933
 *   +0x00f8 -> line 5936
 *   +0x0100 -> line 5938
 *   +0x0118 -> line 5940
 *   +0x0120 -> line 5946
 *   +0x0128 -> line 5949
 *   +0x012c -> line 5950
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetBooleanInArray(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulValue;
    unsigned int ulBit;
    unsigned int ulPos;
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    AI_tdstMind_* p_stMind;
    unsigned char bState;
    unsigned int ulIndex;
    unsigned char ucArrayId;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 5824–5861 */
/* addr: 0x0022fbf0  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5824
 *   +0x0004 -> line 5828
 *   +0x0008 -> line 5824
 *   +0x000c -> line 5828
 *   +0x0010 -> line 5824
 *   +0x0014 -> line 5828
 *   +0x0018 -> line 5824
 *   +0x001c -> line 5830
 *   +0x0020 -> line 5826
 *   +0x0024 -> line 5828
 *   +0x0030 -> line 5830
 *   +0x0038 -> line 5831
 *   +0x0040 -> line 5832
 *   +0x0050 -> line 5834
 *   +0x0078 -> line 5837
 *   +0x008c -> line 5838
 *   +0x0094 -> line 5839
 *   +0x009c -> line 5841
 *   +0x00a8 -> line 5842
 *   +0x00b0 -> line 5844
 *   +0x00bc -> line 5845
 *   +0x00c4 -> line 5847
 *   +0x00f0 -> line 5848
 *   +0x00f8 -> line 5850
 *   +0x0124 -> line 5851
 *   +0x012c -> line 5853
 *   +0x0158 -> line 5854
 *   +0x0160 -> line 5856
 *   +0x0168 -> line 5860
 *   +0x016c -> line 5861
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_PAD2_Procedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    MTH3D_tdstVector_ stVector;
    unsigned char ucPadNumber;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 5803–5821 */
/* addr: 0x0022fd70  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5803
 *   +0x0004 -> line 5809
 *   +0x0008 -> line 5803
 *   +0x0018 -> line 5805
 *   +0x001c -> line 5809
 *   +0x002c -> line 5812
 *   +0x0034 -> line 5814
 *   +0x0038 -> line 5812
 *   +0x003c -> line 5813
 *   +0x0040 -> line 5814
 *   +0x004c -> line 5816
 *   +0x0050 -> line 5814
 *   +0x0054 -> line 5816
 *   +0x005c -> line 5820
 *   +0x0060 -> line 5821
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st_InputProcedure(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    IPT_tdstEntryElement_* IPT_xHandle;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;

    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    switch (eProcedureId) {
    case 406:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        IPT_xHandle = (IPT_tdstEntryElement_*)stParam.uParam.pValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        IPT_fn_vSetUniqueValueForHandle(IPT_xHandle, stParam.uParam.lValue);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 5763–5800 */
/* addr: 0x0022fdf0  size: 440 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5763
 *   +0x0008 -> line 5776
 *   +0x000c -> line 5763
 *   +0x0018 -> line 5776
 *   +0x0020 -> line 5777
 *   +0x0024 -> line 5776
 *   +0x0028 -> line 5777
 *   +0x008c -> line 5778
 *   +0x009c -> line 5779
 *   +0x00ac -> line 5780
 *   +0x00bc -> line 5781
 *   +0x00cc -> line 5784
 *   +0x00e8 -> line 5785
 *   +0x0110 -> line 5787
 *   +0x0128 -> line 5788
 *   +0x0130 -> line 5789
 *   +0x0140 -> line 5790
 *   +0x0144 -> line 5791
 *   +0x015c -> line 5792
 *   +0x0164 -> line 5793
 *   +0x0174 -> line 5794
 *   +0x0178 -> line 5796
 *   +0x0188 -> line 5797
 *   +0x0198 -> line 5799
 *   +0x019c -> line 5800
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetMaximalValues(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    signed char cJoystickYmax;
    signed char cJoystickYmin;
    signed char cJoystickXmax;
    signed char cJoystickXmin;
    IPT_tdstEntryElement_* hJoystickAxeY;
    IPT_tdstEntryElement_* hJoystickAxeX;
    unsigned char ucPadNumber;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 5707–5751 */
/* addr: 0x0022ffb0  size: 440 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5707
 *   +0x0008 -> line 5721
 *   +0x000c -> line 5707
 *   +0x0018 -> line 5721
 *   +0x0020 -> line 5722
 *   +0x0024 -> line 5721
 *   +0x0028 -> line 5722
 *   +0x008c -> line 5723
 *   +0x009c -> line 5724
 *   +0x00ac -> line 5725
 *   +0x00bc -> line 5726
 *   +0x00cc -> line 5729
 *   +0x00e8 -> line 5730
 *   +0x0104 -> line 5733
 *   +0x0108 -> line 5732
 *   +0x010c -> line 5736
 *   +0x0110 -> line 5732
 *   +0x0114 -> line 5736
 *   +0x0120 -> line 5737
 *   +0x0128 -> line 5738
 *   +0x0138 -> line 5739
 *   +0x013c -> line 5740
 *   +0x0154 -> line 5741
 *   +0x0158 -> line 5742
 *   +0x0168 -> line 5743
 *   +0x0170 -> line 5746
 *   +0x0178 -> line 5747
 *   +0x0188 -> line 5748
 *   +0x0198 -> line 5750
 *   +0x019c -> line 5751
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCenterPosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    signed char cJoystickYcenter;
    signed char cJoystickXcenter;
    signed char cJoystickYmax;
    signed char cJoystickYmin;
    signed char cJoystickXmax;
    signed char cJoystickXmin;
    IPT_tdstEntryElement_* hJoystickAxeY;
    IPT_tdstEntryElement_* hJoystickAxeX;
    unsigned char ucPadNumber;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 5667–5695 */
/* addr: 0x00230170  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5667
 *   +0x0008 -> line 5675
 *   +0x000c -> line 5667
 *   +0x001c -> line 5675
 *   +0x0024 -> line 5676
 *   +0x0028 -> line 5675
 *   +0x002c -> line 5676
 *   +0x0094 -> line 5677
 *   +0x00a4 -> line 5680
 *   +0x00ac -> line 5681
 *   +0x0114 -> line 5682
 *   +0x0124 -> line 5685
 *   +0x0134 -> line 5689
 *   +0x013c -> line 5686
 *   +0x0140 -> line 5689
 *   +0x0148 -> line 5692
 *   +0x014c -> line 5689
 *   +0x0150 -> line 5692
 *   +0x0160 -> line 5694
 *   +0x0164 -> line 5695
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stInitKeyBoardPadButton(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    IPT_tdstEntryElement_* hPadButton;
    unsigned char ucButtonNumber;
    unsigned char ucPadNumber;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 5629–5664 */
/* addr: 0x002302f0  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5629
 *   +0x0008 -> line 5637
 *   +0x000c -> line 5629
 *   +0x0024 -> line 5637
 *   +0x002c -> line 5638
 *   +0x0030 -> line 5637
 *   +0x0034 -> line 5638
 *   +0x0098 -> line 5639
 *   +0x00a8 -> line 5642
 *   +0x00b0 -> line 5643
 *   +0x00b4 -> line 5646
 *   +0x00c4 -> line 5647
 *   +0x00c8 -> line 5650
 *   +0x00d8 -> line 5651
 *   +0x00dc -> line 5654
 *   +0x00ec -> line 5658
 *   +0x00f4 -> line 5655
 *   +0x00f8 -> line 5658
 *   +0x0100 -> line 5661
 *   +0x0104 -> line 5658
 *   +0x0108 -> line 5661
 *   +0x0120 -> line 5663
 *   +0x0124 -> line 5664
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stInitKeyBoardDirections(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    IPT_tdstEntryElement_* hKeyRight;
    IPT_tdstEntryElement_* hKeyLeft;
    IPT_tdstEntryElement_* hKeyDown;
    IPT_tdstEntryElement_* hKeyUp;
    unsigned char ucPadNumber;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 5464–5611 */
/* addr: 0x00230440  size: 1352 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5464
 *   +0x0004 -> line 5478
 *   +0x0008 -> line 5464
 *   +0x0020 -> line 5465
 *   +0x0024 -> line 5478
 *   +0x0058 -> line 5483
 *   +0x0060 -> line 5484
 *   +0x0064 -> line 5483
 *   +0x0068 -> line 5484
 *   +0x00cc -> line 5485
 *   +0x00dc -> line 5486
 *   +0x00e4 -> line 5489
 *   +0x00ec -> line 5500
 *   +0x00f4 -> line 5501
 *   +0x00f8 -> line 5500
 *   +0x00fc -> line 5501
 *   +0x0164 -> line 5502
 *   +0x0174 -> line 5503
 *   +0x0184 -> line 5504
 *   +0x0194 -> line 5505
 *   +0x01a4 -> line 5507
 *   +0x01d0 -> line 5510
 *   +0x01d8 -> line 5511
 *   +0x01dc -> line 5507
 *   +0x01e0 -> line 5511
 *   +0x01e4 -> line 5510
 *   +0x01e8 -> line 5507
 *   +0x01ec -> line 5510
 *   +0x01f0 -> line 5507
 *   +0x01f4 -> line 5510
 *   +0x01fc -> line 5507
 *   +0x0204 -> line 5510
 *   +0x0208 -> line 5511
 *   +0x0210 -> line 5514
 *   +0x023c -> line 5517
 *   +0x0244 -> line 5518
 *   +0x0248 -> line 5517
 *   +0x024c -> line 5518
 *   +0x0250 -> line 5517
 *   +0x0258 -> line 5514
 *   +0x0260 -> line 5517
 *   +0x0278 -> line 5514
 *   +0x0284 -> line 5517
 *   +0x0288 -> line 5518
 *   +0x0290 -> line 5520
 *   +0x0298 -> line 5529
 *   +0x02a0 -> line 5530
 *   +0x02a4 -> line 5529
 *   +0x02a8 -> line 5530
 *   +0x030c -> line 5531
 *   +0x031c -> line 5534
 *   +0x0328 -> line 5536
 *   +0x032c -> line 5540
 *   +0x0338 -> line 5537
 *   +0x033c -> line 5536
 *   +0x0340 -> line 5540
 *   +0x0348 -> line 5541
 *   +0x034c -> line 5540
 *   +0x0350 -> line 5542
 *   +0x0354 -> line 5543
 *   +0x0360 -> line 5544
 *   +0x0368 -> line 5545
 *   +0x0370 -> line 5546
 *   +0x037c -> line 5547
 *   +0x0384 -> line 5548
 *   +0x038c -> line 5549
 *   +0x0398 -> line 5550
 *   +0x03a0 -> line 5551
 *   +0x03a8 -> line 5552
 *   +0x03b4 -> line 5553
 *   +0x03b8 -> line 5558
 *   +0x03cc -> line 5559
 *   +0x03d4 -> line 5560
 *   +0x03e8 -> line 5561
 *   +0x03ec -> line 5562
 *   +0x0400 -> line 5563
 *   +0x0408 -> line 5564
 *   +0x041c -> line 5565
 *   +0x0420 -> line 5568
 *   +0x0430 -> line 5569
 *   +0x0440 -> line 5570
 *   +0x0450 -> line 5572
 *   +0x0458 -> line 5576
 *   +0x0460 -> line 5577
 *   +0x04c8 -> line 5578
 *   +0x04d8 -> line 5581
 *   +0x04e8 -> line 5582
 *   +0x04ec -> line 5585
 *   +0x0500 -> line 5599
 *   +0x0510 -> line 5603
 *   +0x0514 -> line 5599
 *   +0x051c -> line 5603
 *   +0x0528 -> line 5610
 *   +0x052c -> line 5611
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetAnalogJoystickAxes(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulBounds;
    HIE_tdstSuperObject_* p_stResultOwnerPerso;
    unsigned char ucVarId;
    AI_tdstMind_* p_stMind;
    signed char cJoystickYcenter;
    signed char cJoystickXcenter;
    signed char cJoystickYmax;
    signed char cJoystickYmin;
    signed char cJoystickXmax;
    signed char cJoystickXmin;
    IPT_tdstEntryElement_* hJoystickAxeX;
    unsigned char ucPadNumber;
    tdstGetSetParam_ stParam;
    tdeProcedureId_ eProcedureId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4781–5449 */
/* addr: 0x00230990  size: 5896 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4781
 *   +0x001c -> line 4803
 *   +0x0020 -> line 4781
 *   +0x0058 -> line 4826
 *   +0x005c -> line 4789
 *   +0x0064 -> line 4805
 *   +0x0068 -> line 4826
 *   +0x0080 -> line 4828
 *   +0x0088 -> line 4829
 *   +0x008c -> line 4832
 *   +0x0094 -> line 4829
 *   +0x009c -> line 4832
 *   +0x00a4 -> line 4833
 *   +0x00a8 -> line 4832
 *   +0x00ac -> line 4833
 *   +0x0114 -> line 4837
 *   +0x0124 -> line 4838
 *   +0x0134 -> line 4839
 *   +0x0150 -> line 4840
 *   +0x0160 -> line 4841
 *   +0x0170 -> line 4842
 *   +0x0180 -> line 4843
 *   +0x0188 -> line 4845
 *   +0x0190 -> line 4843
 *   +0x0194 -> line 4845
 *   +0x019c -> line 4846
 *   +0x01bc -> line 4847
 *   +0x01cc -> line 4848
 *   +0x01f0 -> line 4849
 *   +0x01f4 -> line 4848
 *   +0x01f8 -> line 4849
 *   +0x01fc -> line 4848
 *   +0x0200 -> line 4849
 *   +0x020c -> line 4850
 *   +0x022c -> line 4851
 *   +0x023c -> line 4852
 *   +0x025c -> line 4853
 *   +0x026c -> line 4854
 *   +0x0298 -> line 4855
 *   +0x02a8 -> line 4856
 *   +0x02ac -> line 4857
 *   +0x02c4 -> line 4866
 *   +0x02d0 -> line 4869
 *   +0x02dc -> line 4870
 *   +0x0318 -> line 4881
 *   +0x0334 -> line 4884
 *   +0x0338 -> line 4883
 *   +0x033c -> line 4884
 *   +0x0340 -> line 4886
 *   +0x035c -> line 4889
 *   +0x0360 -> line 4888
 *   +0x0364 -> line 4889
 *   +0x0370 -> line 4891
 *   +0x038c -> line 4894
 *   +0x03b8 -> line 4898
 *   +0x03d4 -> line 4901
 *   +0x0408 -> line 4906
 *   +0x0410 -> line 4914
 *   +0x042c -> line 4917
 *   +0x0430 -> line 4916
 *   +0x0434 -> line 4917
 *   +0x0438 -> line 4916
 *   +0x0440 -> line 4917
 *   +0x0444 -> line 4919
 *   +0x044c -> line 4921
 *   +0x0458 -> line 4934
 *   +0x0480 -> line 4936
 *   +0x0494 -> line 4937
 *   +0x0498 -> line 4940
 *   +0x04a0 -> line 4949
 *   +0x04cc -> line 4957
 *   +0x04d4 -> line 4960
 *   +0x04d8 -> line 4961
 *   +0x04e0 -> line 4964
 *   +0x04e4 -> line 4965
 *   +0x04e8 -> line 4968
 *   +0x04f8 -> line 4969
 *   +0x04fc -> line 4968
 *   +0x0500 -> line 4969
 *   +0x0508 -> line 4968
 *   +0x050c -> line 4969
 *   +0x0510 -> line 4968
 *   +0x0514 -> line 4969
 *   +0x0518 -> line 4968
 *   +0x051c -> line 4969
 *   +0x0520 -> line 4968
 *   +0x0524 -> line 4969
 *   +0x0528 -> line 4972
 *   +0x0530 -> line 4973
 *   +0x0538 -> line 4974
 *   +0x0540 -> line 4979
 *   +0x0568 -> line 4980
 *   +0x0590 -> line 4981
 *   +0x05a4 -> line 4982
 *   +0x05a8 -> line 4986
 *   +0x05b8 -> line 4987
 *   +0x05bc -> line 4986
 *   +0x05c0 -> line 4987
 *   +0x05c4 -> line 4986
 *   +0x05c8 -> line 4987
 *   +0x05d0 -> line 4990
 *   +0x05e0 -> line 4992
 *   +0x05e4 -> line 4993
 *   +0x05e8 -> line 4997
 *   +0x05f0 -> line 5002
 *   +0x0608 -> line 5003
 *   +0x0610 -> line 5004
 *   +0x0620 -> line 5005
 *   +0x0624 -> line 5007
 *   +0x063c -> line 5008
 *   +0x0644 -> line 5009
 *   +0x0654 -> line 5010
 *   +0x0658 -> line 5013
 *   +0x0668 -> line 5014
 *   +0x0678 -> line 5017
 *   +0x067c -> line 5018
 *   +0x0680 -> line 5017
 *   +0x0684 -> line 5021
 *   +0x068c -> line 5022
 *   +0x06c0 -> line 5023
 *   +0x06c8 -> line 5024
 *   +0x06f4 -> line 5026
 *   +0x06fc -> line 5027
 *   +0x0730 -> line 5028
 *   +0x0738 -> line 5029
 *   +0x0764 -> line 5057
 *   +0x0768 -> line 5056
 *   +0x076c -> line 5057
 *   +0x0770 -> line 5056
 *   +0x0774 -> line 5057
 *   +0x0778 -> line 5056
 *   +0x0788 -> line 5057
 *   +0x0798 -> line 5059
 *   +0x07a4 -> line 5060
 *   +0x07ac -> line 5061
 *   +0x07b4 -> line 5060
 *   +0x07bc -> line 5061
 *   +0x07c4 -> line 5060
 *   +0x07c8 -> line 5061
 *   +0x07cc -> line 5060
 *   +0x07d0 -> line 5061
 *   +0x07d8 -> line 5060
 *   +0x07dc -> line 5061
 *   +0x07e0 -> line 5060
 *   +0x07e4 -> line 5061
 *   +0x07e8 -> line 5060
 *   +0x07ec -> line 5061
 *   +0x07f0 -> line 5060
 *   +0x07f4 -> line 5061
 *   +0x07f8 -> line 5067
 *   +0x07fc -> line 5068
 *   +0x0800 -> line 5067
 *   +0x080c -> line 5068
 *   +0x0818 -> line 5071
 *   +0x081c -> line 5070
 *   +0x0820 -> line 5071
 *   +0x082c -> line 5072
 *   +0x0834 -> line 5075
 *   +0x0838 -> line 5076
 *   +0x083c -> line 5075
 *   +0x0844 -> line 5079
 *   +0x0864 -> line 5084
 *   +0x0868 -> line 5079
 *   +0x0874 -> line 5084
 *   +0x087c -> line 5087
 *   +0x088c -> line 5091
 *   +0x0890 -> line 5089
 *   +0x0894 -> line 5091
 *   +0x0898 -> line 5090
 *   +0x089c -> line 5091
 *   +0x08a0 -> line 5095
 *   +0x08b8 -> line 5098
 *   +0x08e4 -> line 5106
 *   +0x08ec -> line 5109
 *   +0x08f0 -> line 5110
 *   +0x08f8 -> line 5113
 *   +0x08fc -> line 5114
 *   +0x0900 -> line 5119
 *   +0x090c -> line 5123
 *   +0x0920 -> line 5126
 *   +0x0924 -> line 5125
 *   +0x0928 -> line 5126
 *   +0x092c -> line 5128
 *   +0x0934 -> line 5131
 *   +0x0938 -> line 5134
 *   +0x0948 -> line 5137
 *   +0x0958 -> line 5145
 *   +0x099c -> line 5147
 *   +0x0a00 -> line 5148
 *   +0x0a24 -> line 5152
 *   +0x0a38 -> line 5153
 *   +0x0a50 -> line 5154
 *   +0x0a7c -> line 5155
 *   +0x0b10 -> line 5168
 *   +0x0b14 -> line 5155
 *   +0x0b18 -> line 5168
 *   +0x0b40 -> line 5169
 *   +0x0bc8 -> line 5182
 *   +0x0bd0 -> line 5183
 *   +0x0bd8 -> line 5184
 *   +0x0bdc -> line 5182
 *   +0x0be0 -> line 5183
 *   +0x0be4 -> line 5184
 *   +0x0be8 -> line 5182
 *   +0x0bf0 -> line 5183
 *   +0x0bf4 -> line 5184
 *   +0x0bfc -> line 5182
 *   +0x0c00 -> line 5183
 *   +0x0c08 -> line 5184
 *   +0x0c0c -> line 5182
 *   +0x0c10 -> line 5184
 *   +0x0c18 -> line 5187
 *   +0x0c1c -> line 5184
 *   +0x0c24 -> line 5188
 *   +0x0c2c -> line 5191
 *   +0x0c38 -> line 5199
 *   +0x0c3c -> line 5191
 *   +0x0c44 -> line 5199
 *   +0x0c48 -> line 5200
 *   +0x0c4c -> line 5191
 *   +0x0c54 -> line 5196
 *   +0x0c7c -> line 5197
 *   +0x0c80 -> line 5199
 *   +0x0c84 -> line 5197
 *   +0x0c90 -> line 5199
 *   +0x0c94 -> line 5197
 *   +0x0c98 -> line 5199
 *   +0x0c9c -> line 5197
 *   +0x0ca4 -> line 5199
 *   +0x0cd0 -> line 5200
 *   +0x0d0c -> line 5203
 *   +0x0d14 -> line 5207
 *   +0x0d18 -> line 5206
 *   +0x0d1c -> line 5207
 *   +0x0d7c -> line 5213
 *   +0x0db4 -> line 5221
 *   +0x0dc4 -> line 5222
 *   +0x0dcc -> line 5223
 *   +0x0e08 -> line 5225
 *   +0x0e18 -> line 5226
 *   +0x0e1c -> line 5229
 *   +0x0e84 -> line 5231
 *   +0x0f44 -> line 5233
 *   +0x0f48 -> line 5237
 *   +0x0f4c -> line 5233
 *   +0x0f50 -> line 5237
 *   +0x0f54 -> line 5233
 *   +0x0f78 -> line 5237
 *   +0x0fc0 -> line 5238
 *   +0x0fc8 -> line 5241
 *   +0x0fd0 -> line 5243
 *   +0x100c -> line 5246
 *   +0x101c -> line 5248
 *   +0x1024 -> line 5250
 *   +0x1060 -> line 5256
 *   +0x10c8 -> line 5258
 *   +0x1188 -> line 5260
 *   +0x118c -> line 5264
 *   +0x1190 -> line 5260
 *   +0x1194 -> line 5264
 *   +0x1198 -> line 5260
 *   +0x11bc -> line 5264
 *   +0x1208 -> line 5267
 *   +0x124c -> line 5273
 *   +0x12b0 -> line 5276
 *   +0x12bc -> line 5277
 *   +0x12cc -> line 5278
 *   +0x12d4 -> line 5277
 *   +0x12f0 -> line 5278
 *   +0x12f4 -> line 5279
 *   +0x1330 -> line 5284
 *   +0x1394 -> line 5287
 *   +0x13b8 -> line 5288
 *   +0x13d4 -> line 5289
 *   +0x13dc -> line 5290
 *   +0x13f8 -> line 5291
 *   +0x13fc -> line 5293
 *   +0x1404 -> line 5294
 *   +0x1410 -> line 5293
 *   +0x1414 -> line 5295
 *   +0x141c -> line 5294
 *   +0x1424 -> line 5295
 *   +0x1434 -> line 5296
 *   +0x1438 -> line 5299
 *   +0x1458 -> line 5302
 *   +0x147c -> line 5312
 *   +0x14ac -> line 5314
 *   +0x14c4 -> line 5315
 *   +0x14c8 -> line 5318
 *   +0x14dc -> line 5326
 *   +0x14f4 -> line 5328
 *   +0x1504 -> line 5330
 *   +0x1508 -> line 5332
 *   +0x150c -> line 5333
 *   +0x1514 -> line 5338
 *   +0x151c -> line 5343
 *   +0x152c -> line 5347
 *   +0x1534 -> line 5348
 *   +0x154c -> line 5351
 *   +0x1560 -> line 5362
 *   +0x1574 -> line 5375
 *   +0x157c -> line 5377
 *   +0x158c -> line 5379
 *   +0x1598 -> line 5381
 *   +0x15a8 -> line 5382
 *   +0x15b0 -> line 5385
 *   +0x15b8 -> line 5388
 *   +0x15c8 -> line 5389
 *   +0x15d0 -> line 5391
 *   +0x15d4 -> line 5393
 *   +0x15dc -> line 5397
 *   +0x15e4 -> line 5396
 *   +0x15e8 -> line 5397
 *   +0x15f8 -> line 5400
 *   +0x1600 -> line 5401
 *   +0x161c -> line 5404
 *   +0x1624 -> line 5405
 *   +0x163c -> line 5408
 *   +0x1644 -> line 5420
 *   +0x1650 -> line 5418
 *   +0x1654 -> line 5419
 *   +0x1658 -> line 5420
 *   +0x165c -> line 5427
 *   +0x1664 -> line 5432
 *   +0x166c -> line 5430
 *   +0x1670 -> line 5432
 *   +0x1674 -> line 5431
 *   +0x1678 -> line 5432
 *   +0x167c -> line 5437
 *   +0x1680 -> line 5435
 *   +0x1684 -> line 5436
 *   +0x1688 -> line 5445
 *   +0x16b4 -> line 5448
 *   +0x16b8 -> line 5449
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stReadAnalogJoystickMario(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    MAT_tdstTransformation_ stTransform;
    tdstDynam_* hDynam;
    float xDynamicRotation;
    float xNorm;
    MTH3D_tdstVector_ Vtmp;
    MTH3D_tdstVector_ VectTmp;
    unsigned char bVectorToTargetIsNull;
    MTH3D_tdstVector_ stK;
    MTH3D_tdstVector_ stJ;
    MTH3D_tdstVector_ stI;
    MTH3D_tdstVector_ stCamV2;
    MTH3D_tdstVector_ stCamV1;
    MTH3D_tdstVector_ stCamV0;
    float xDotX;
    float xSquare;
    signed char cJoystickYcenter;
    signed char cJoystickXcenter;
    signed char cJoystickYmax;
    signed char cJoystickYmin;
    signed char cJoystickXmax;
    signed char cJoystickXmin;
    unsigned char bCancelKeyboardInertia;
    IPT_tdstEntryElement_* hKeySpeedUp;
    IPT_tdstEntryElement_* hKeyRight;
    IPT_tdstEntryElement_* hKeyLeft;
    IPT_tdstEntryElement_* hKeyDown;
    IPT_tdstEntryElement_* hKeyUp;
    IPT_tdstEntryElement_* hJoystickAxeY;
    IPT_tdstEntryElement_* hJoystickAxeX;
    unsigned char ucPadNumber;
    tdstCineinfo_* hCineinfo;
    float xKeyYValue;
    float xKeyXValue;
    float xKeyboardInertia;
    unsigned char bWithKeyboard;
    int iComputeStrafeSector;
    int iRotationAsked;
    int iDt;
    int iYValue;
    int iXValue;
    MTH3D_tdstVector_ stTmpV2;
    MTH3D_tdstVector_ stTmpV1;
    MTH3D_tdstVector_ stTmpV0;
    MTH3D_tdstVector_ stSightVector;
    MTH3D_tdstVector_ stJoyVector;
    float xTmp;
    float xRotationSpeed;
    float xMinimumAngle;
    float xAngleRotation;
    float xOldAnalogForce;
    float xTrueAnalogForce;
    float xAnalogForce;
    HIE_tdstSuperObject_* hCamera;
    tdstGetSetParam_ stParam;
    float s_xPrevKeyYValue[16];
    float s_xPrevKeyXValue[16];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4714–4757 */
/* addr: 0x002320a0  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4714
 *   +0x0014 -> line 4725
 *   +0x0030 -> line 4728
 *   +0x0040 -> line 4732
 *   +0x0044 -> line 4729
 *   +0x0048 -> line 4732
 *   +0x0050 -> line 4733
 *   +0x0058 -> line 4746
 *   +0x0060 -> line 4750
 *   +0x0068 -> line 4751
 *   +0x0070 -> line 4752
 *   +0x0078 -> line 4754
 *   +0x00ac -> line 4756
 *   +0x00b0 -> line 4757
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Not original source, needs cleaning up: the redundant second ulFlags store reproduces retail. */
tdstNodeInterpret_* fn_p_LinkControl(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    unsigned char bValue;
    unsigned int ulFlags;
    HIE_tdstSuperObject_* hPerso;
    tdstGetSetParam_ stParam;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(p_stTree[-1].uDummy.uId.eProcedureId), p_SuperObjPerso, &hPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    bValue = stParam.uParam.ucValue;
    h_Dynam = ((tdstEngineObject_*)hPerso->hLinkedObject.p_stCharacter)->h_Dynam;
    if (!h_Dynam)
        return p_stTree;
    pstDynamic = fn_p_stDynamGetDynamics(h_Dynam);
    if (!pstDynamic)
        return p_stTree;
    if (bValue)
        pstDynamic->m_ulFlags = ulFlags = pstDynamic->m_ulFlags | 0x40000000;
    else
        pstDynamic->m_ulFlags = ulFlags = pstDynamic->m_ulFlags & ~0x40000000;
    pstDynamic->m_ulFlags = ulFlags;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4691–4710 */
/* addr: 0x00232170  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4691
 *   +0x0014 -> line 4699
 *   +0x0030 -> line 4702
 *   +0x0044 -> line 4704
 *   +0x0050 -> line 4705
 *   +0x0068 -> line 4707
 *   +0x0078 -> line 4709
 *   +0x007c -> line 4710
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stActivationZDR(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hPerso;
    unsigned int ulFlags;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(p_stTree[-1].uDummy.uId.eProcedureId), p_SuperObjPerso, &hPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    if (stParam.uParam.lValue)
    { ulFlags = hPerso->ulFlags; hPerso->ulFlags = ulFlags & ~1; }
    else
    { ulFlags = hPerso->ulFlags; hPerso->ulFlags = ulFlags | 1; }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4648–4687 */
/* addr: 0x00232200  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4648
 *   +0x0018 -> line 4652
 *   +0x0020 -> line 4657
 *   +0x0038 -> line 4661
 *   +0x004c -> line 4664
 *   +0x0074 -> line 4667
 *   +0x0084 -> line 4668
 *   +0x008c -> line 4671
 *   +0x009c -> line 4672
 *   +0x00a4 -> line 4676
 *   +0x00b4 -> line 4678
 *   +0x00bc -> line 4682
 *   +0x00c4 -> line 4683
 *   +0x00cc -> line 4686
 *   +0x00d0 -> line 4687
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetComputationFrequency(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    unsigned char ucFrequency;
    HIE_tdstSuperObject_* hPerso;
    tdstGetSetParam_ stParam;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ucFrequency = stParam.uParam.ucValue;
    switch (eProcedureId) {
    case 0x174:
        fn_v3dDataSetBrainComputationFrequency(((tdstEngineObject_*)hPerso->hLinkedObject.p_stCharacter)->h_3dData, ucFrequency);
        break;
    case 0x173:
        fn_vCollSetSetCollComputeFrequency(((tdstEngineObject_*)hPerso->hLinkedObject.p_stCharacter)->h_CollSet, ucFrequency);
        break;
    case 0x175:
        fn_v3dDataSetLightComputationFrequency(((tdstEngineObject_*)hPerso->hLinkedObject.p_stCharacter)->h_3dData, ucFrequency);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(0x28, 0);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4579–4633 */
/* addr: 0x002322f0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4579
 *   +0x0018 -> line 4583
 *   +0x0020 -> line 4589
 *   +0x0038 -> line 4592
 *   +0x003c -> line 4595
 *   +0x0044 -> line 4592
 *   +0x004c -> line 4595
 *   +0x0058 -> line 4598
 *   +0x0084 -> line 4601
 *   +0x008c -> line 4602
 *   +0x0094 -> line 4605
 *   +0x009c -> line 4606
 *   +0x00a4 -> line 4609
 *   +0x00ac -> line 4610
 *   +0x00b4 -> line 4613
 *   +0x00bc -> line 4614
 *   +0x00c4 -> line 4618
 *   +0x00cc -> line 4619
 *   +0x00d4 -> line 4623
 *   +0x00dc -> line 4624
 *   +0x00e4 -> line 4628
 *   +0x00f0 -> line 4629
 *   +0x00f8 -> line 4632
 *   +0x00fc -> line 4633
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCollSetCollisionFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstCollSet_* hCollSet;
    tdeProcedureId_ eProcedureId;
    int bValue;
    HIE_tdstSuperObject_* hPerso;
    tdstGetSetParam_ stParam;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hPerso);
    hCollSet = ((tdstEngineObject_*)hPerso->hLinkedObject.p_stCharacter)->h_CollSet;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    bValue = stParam.uParam.ucValue;
    switch (eProcedureId) {
    case 0x16d:
        fn_vCollSetSetCharacterNoCollisionWithMap(hCollSet, bValue);
        break;
    case 0x16e:
        fn_vCollSetSetCharacterNoCollisionWithSecondaryCharacter(hCollSet, bValue);
        break;
    case 0x16f:
        fn_vCollSetSetCharacterNoCollisionWithMainCharacter(hCollSet, bValue);
        break;
    case 0x170:
        fn_vCollSetSetCharacterNoCollisionWithOtherSectors(hCollSet, bValue);
        break;
    case 0x171:
        fn_vCollSetSetCharacterNoCollisionWithProjectile(hCollSet, bValue);
        break;
    case 0x172:
        fn_vCollSetSetCharacterNoCollisionZdeWithProjectile(hCollSet, bValue);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(0x28, 0);
        return p_stTree;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4473–4560 */
/* addr: 0x00232410  size: 612 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4473
 *   +0x0018 -> line 4477
 *   +0x0020 -> line 4483
 *   +0x0038 -> line 4486
 *   +0x003c -> line 4491
 *   +0x0044 -> line 4486
 *   +0x004c -> line 4491
 *   +0x0058 -> line 4495
 *   +0x0084 -> line 4499
 *   +0x00a0 -> line 4500
 *   +0x00a8 -> line 4503
 *   +0x00c4 -> line 4504
 *   +0x00cc -> line 4508
 *   +0x00e8 -> line 4509
 *   +0x00f0 -> line 4513
 *   +0x010c -> line 4514
 *   +0x0114 -> line 4518
 *   +0x0130 -> line 4519
 *   +0x0138 -> line 4522
 *   +0x0154 -> line 4523
 *   +0x015c -> line 4526
 *   +0x0178 -> line 4527
 *   +0x0180 -> line 4531
 *   +0x019c -> line 4532
 *   +0x01a4 -> line 4536
 *   +0x01c0 -> line 4537
 *   +0x01c8 -> line 4540
 *   +0x01e4 -> line 4541
 *   +0x01ec -> line 4545
 *   +0x0208 -> line 4546
 *   +0x0210 -> line 4549
 *   +0x022c -> line 4550
 *   +0x0234 -> line 4555
 *   +0x0240 -> line 4556
 *   +0x0248 -> line 4559
 *   +0x024c -> line 4560
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetPrivilegeActivationZDx(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstCollSet_* hCollSet;
    tdeProcedureId_ eProcedureId;
    int lZoneNumber;
    HIE_tdstSuperObject_* hPerso;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4360–4439 */
/* addr: 0x00232680  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4360
 *   +0x0018 -> line 4366
 *   +0x0020 -> line 4371
 *   +0x0038 -> line 4373
 *   +0x0064 -> line 4377
 *   +0x0068 -> line 4379
 *   +0x0070 -> line 4377
 *   +0x0078 -> line 4378
 *   +0x007c -> line 4379
 *   +0x0088 -> line 4382
 *   +0x0094 -> line 4386
 *   +0x009c -> line 4390
 *   +0x00a4 -> line 4397
 *   +0x00ac -> line 4405
 *   +0x00bc -> line 4407
 *   +0x00cc -> line 4408
 *   +0x00d4 -> line 4414
 *   +0x00e4 -> line 4417
 *   +0x011c -> line 4422
 *   +0x0124 -> line 4433
 *   +0x012c -> line 4438
 *   +0x0130 -> line 4439
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stShadow(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstStandardGame_* hStdGame;
    unsigned int lCustomBits;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4335–4351 */
/* addr: 0x002327d0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4335
 *   +0x0014 -> line 4344
 *   +0x0030 -> line 4346
 *   +0x0040 -> line 4349
 *   +0x0048 -> line 4351
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_SetMechanicClimbSpeedLimit(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stValue;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(p_stTree[-1].uDummy.uId.eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    MEC_g_xClimbSpeedLimit = stValue.uParam.xValue;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4264–4326 */
/* addr: 0x00232830  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4264
 *   +0x0028 -> line 4270
 *   +0x002c -> line 4275
 *   +0x0044 -> line 4279
 *   +0x0050 -> line 4280
 *   +0x0058 -> line 4293
 *   +0x0060 -> line 4297
 *   +0x006c -> line 4298
 *   +0x007c -> line 4300
 *   +0x0088 -> line 4301
 *   +0x008c -> line 4300
 *   +0x0090 -> line 4302
 *   +0x00a0 -> line 4303
 *   +0x00a4 -> line 4304
 *   +0x00b4 -> line 4307
 *   +0x00d4 -> line 4311
 *   +0x00e0 -> line 4312
 *   +0x00ec -> line 4313
 *   +0x00f4 -> line 4316
 *   +0x00f8 -> line 4317
 *   +0x00fc -> line 4318
 *   +0x0100 -> line 4326
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Not original source, needs cleaning up: the redundant second ulFlags store reproduces retail. */
tdstNodeInterpret_* fn_p_SetMechanic3Real(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulFlags;
    tdstGetSetParam_ stValue;
    DNM_stDynamics* pstDynamic;
    tdstDynam_* h_Dynam;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    float xValue1;
    float xValue2;
    float xValue3;
    tdeProcedureId_ eProcedureId;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    h_Dynam = ((tdstEngineObject_*)hNewSuperObjPerso->hLinkedObject.p_stCharacter)->h_Dynam;
    if (!h_Dynam)
        return p_stTree;
    pstDynamic = fn_p_stDynamGetDynamics(h_Dynam);
    if (!pstDynamic)
        return p_stTree;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    xValue1 = stValue.uParam.xValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    xValue2 = stValue.uParam.xValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    xValue3 = stValue.uParam.xValue;
    switch (eProcedureId) {
    case 0x13f:
        pstDynamic->m_stScale.xX = xValue1;
        pstDynamic->m_stScale.xY = xValue2;
        pstDynamic->m_stScale.xZ = xValue3;
        pstDynamic->m_ulEndFlags = ulFlags = pstDynamic->m_ulEndFlags | 0x1000;
        pstDynamic->m_ulEndFlags = ulFlags;
        break;
    case 0x140:
        pstDynamic->m_stSlideFactor.xX = xValue1;
        pstDynamic->m_stSlideFactor.xY = xValue2;
        pstDynamic->m_stSlideFactor.xZ = xValue3;
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4227–4254 */
/* addr: 0x00232960  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4227
 *   +0x001c -> line 4228
 *   +0x0020 -> line 4235
 *   +0x0038 -> line 4237
 *   +0x0054 -> line 4240
 *   +0x0068 -> line 4241
 *   +0x0070 -> line 4242
 *   +0x0078 -> line 4245
 *   +0x0088 -> line 4247
 *   +0x008c -> line 4253
 *   +0x0090 -> line 4254
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stResetLastCollisionActor(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    DNM_stReport* p_stDynamReport;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    switch (eProcedureId) {
    case 0x103:
        if (((tdstEngineObject_*)hNewSuperObjPerso->hLinkedObject.p_stCharacter)->h_StandardGame)
            fn_vSuperObjectSetLastCollidedCharacter(hNewSuperObjPerso, 0);
        break;
    case 0x104:
        p_stDynamReport = fn_pstGetDNMReport(hNewSuperObjPerso);
        if (p_stDynamReport)
            p_stDynamReport->m_ulCurrSurfaceState = 0;
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4159–4216 */
/* addr: 0x00232a10  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4159
 *   +0x0008 -> line 4169
 *   +0x000c -> line 4159
 *   +0x0024 -> line 4166
 *   +0x0028 -> line 4169
 *   +0x0030 -> line 4172
 *   +0x0034 -> line 4169
 *   +0x0038 -> line 4170
 *   +0x003c -> line 4172
 *   +0x0048 -> line 4175
 *   +0x005c -> line 4178
 *   +0x0060 -> line 4179
 *   +0x006c -> line 4184
 *   +0x0078 -> line 4185
 *   +0x0080 -> line 4187
 *   +0x009c -> line 4200
 *   +0x00a4 -> line 4204
 *   +0x00ac -> line 4206
 *   +0x00b0 -> line 4208
 *   +0x00b4 -> line 4206
 *   +0x00b8 -> line 4208
 *   +0x00bc -> line 4206
 *   +0x00c8 -> line 4207
 *   +0x00cc -> line 4206
 *   +0x00e8 -> line 4207
 *   +0x00f8 -> line 4208
 *   +0x0100 -> line 4215
 *   +0x0104 -> line 4216
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_SetMechanicListParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tduVector3Words stVector;
    HIE_tdstSuperObject_* hSuperObject;
    tdeProcedureId_ eProcedureId;
    unsigned int ulCounter;
    unsigned int ulMaxList;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    MTH3D_tdstVector_* p_stVector;
    tdstList_* p_stList;
    tdstGetSetParam_ stValue;
    int lNoDynam;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    p_stList = (tdstList_*)stValue.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    p_stVector = &stValue.uParam.stVectorValue;
    switch (eProcedureId) {
    case 0x133:
        ulMaxList = p_stList->ucNbOfElements;
        for (ulCounter = 0; ulCounter < ulMaxList; ulCounter++) {
            hSuperObject = fn_p_stGetPersoInList(p_stList, ulCounter);
            h_Dynam = ((tdstEngineObject_*)hSuperObject->hLinkedObject.p_stCharacter)->h_Dynam;
            lNoDynam = (int)h_Dynam & (int)fn_p_stDynamGetDynamics(h_Dynam);
            if (!lNoDynam)
                return p_stTree;
            pstDynamic = fn_p_stDynamGetDynamics(h_Dynam);
            stVector.v.xX = pstDynamic->m_uStreamSpeed.v.xX + p_stVector->xX;
            stVector.v.xY = pstDynamic->m_uStreamSpeed.v.xY + p_stVector->xY;
            stVector.v.xZ = pstDynamic->m_uStreamSpeed.v.xZ + p_stVector->xZ;
            pstDynamic->m_uStreamSpeed.w[0] = stVector.w[0];
            pstDynamic->m_uStreamSpeed.w[1] = stVector.w[1];
            pstDynamic->m_uStreamSpeed.w[2] = stVector.w[2];
        }
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 4048–4143 */
/* addr: 0x00232b40  size: 544 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4048
 *   +0x0020 -> line 4057
 *   +0x0024 -> line 4062
 *   +0x003c -> line 4065
 *   +0x0048 -> line 4066
 *   +0x0050 -> line 4067
 *   +0x005c -> line 4071
 *   +0x0084 -> line 4074
 *   +0x0094 -> line 4077
 *   +0x00a0 -> line 4079
 *   +0x00bc -> line 4080
 *   +0x00c4 -> line 4089
 *   +0x00cc -> line 4093
 *   +0x0100 -> line 4095
 *   +0x0110 -> line 4096
 *   +0x0118 -> line 4100
 *   +0x0128 -> line 4103
 *   +0x0130 -> line 4106
 *   +0x0164 -> line 4107
 *   +0x0178 -> line 4109
 *   +0x0180 -> line 4110
 *   +0x0188 -> line 4113
 *   +0x0194 -> line 4114
 *   +0x0198 -> line 4113
 *   +0x019c -> line 4115
 *   +0x01a0 -> line 4117
 *   +0x01ac -> line 4119
 *   +0x01bc -> line 4121
 *   +0x01c4 -> line 4123
 *   +0x01d4 -> line 4125
 *   +0x01dc -> line 4128
 *   +0x01ec -> line 4130
 *   +0x01f4 -> line 4135
 *   +0x0200 -> line 4142
 *   +0x0204 -> line 4143
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_HierFatherLink(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstList_* p_stList;
    HIE_tdstSuperObject_* hPlatform;
    HIE_tdstSuperObject_* hChildSuperObject;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 3981–4037 */
/* addr: 0x00232d60  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3981
 *   +0x0020 -> line 3987
 *   +0x0024 -> line 3992
 *   +0x003c -> line 3995
 *   +0x0048 -> line 3997
 *   +0x0050 -> line 4010
 *   +0x0058 -> line 4014
 *   +0x0064 -> line 4015
 *   +0x006c -> line 4016
 *   +0x0074 -> line 4019
 *   +0x0090 -> line 4022
 *   +0x00a0 -> line 4023
 *   +0x00ac -> line 4025
 *   +0x00bc -> line 4026
 *   +0x00c4 -> line 4029
 *   +0x00d0 -> line 4036
 *   +0x00d4 -> line 4037
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_PlatformLink(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stValue;
    DNM_stDynamics* pstDynamic;
    tdstDynam_* h_Dynam;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    HIE_tdstSuperObject_* hPlatform;
    tdeProcedureId_ eProcedureId;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    h_Dynam = ((tdstEngineObject_*)hNewSuperObjPerso->hLinkedObject.p_stCharacter)->h_Dynam;
    if (!h_Dynam)
        return p_stTree;
    pstDynamic = fn_p_stDynamGetDynamics(h_Dynam);
    if (!pstDynamic)
        return p_stTree;
    switch (eProcedureId) {
    case 0x13d:
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
        hPlatform = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stValue.uParam.pValue)->h_StandardGame);
        MEC_fn_vForcePlatformLink(pstDynamic, hNewSuperObjPerso, hPlatform);
        break;
    case 0x13e:
        MEC_fn_vFreePlatformLink(pstDynamic, hNewSuperObjPerso);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 3933–3972 */
/* addr: 0x00232e50  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3933
 *   +0x0014 -> line 3947
 *   +0x0030 -> line 3949
 *   +0x0044 -> line 3951
 *   +0x004c -> line 3950
 *   +0x0050 -> line 3951
 *   +0x0058 -> line 3960
 *   +0x005c -> line 3964
 *   +0x0064 -> line 3965
 *   +0x0068 -> line 3960
 *   +0x006c -> line 3963
 *   +0x0070 -> line 3965
 *   +0x0078 -> line 3966
 *   +0x0080 -> line 3968
 *   +0x0088 -> line 3969
 *   +0x008c -> line 3972
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeActorSpoFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned int ulMask;
    unsigned int ulFlags;
    int lFlag;
    tdstGetSetParam_ stValue;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(p_stTree[-1].uDummy.uId.eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    lFlag = stValue.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    ulMask = 1 << lFlag;
    COLANTIBUG_hHandleOfCharacter = (int)hNewSuperObjPerso;
    ulFlags = hNewSuperObjPerso->ulFlags;
    if (stValue.uParam.lValue)
        ulFlags |= ulMask;
    else
        ulFlags &= ~ulMask;
    hNewSuperObjPerso->ulFlags = ulFlags;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 3858–3922 */
/* addr: 0x00232ef0  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3858
 *   +0x0008 -> line 3872
 *   +0x000c -> line 3858
 *   +0x0018 -> line 3869
 *   +0x001c -> line 3872
 *   +0x0024 -> line 3873
 *   +0x0028 -> line 3872
 *   +0x002c -> line 3874
 *   +0x0038 -> line 3876
 *   +0x0040 -> line 3875
 *   +0x0044 -> line 3876
 *   +0x004c -> line 3894
 *   +0x006c -> line 3897
 *   +0x0078 -> line 3900
 *   +0x007c -> line 3904
 *   +0x0080 -> line 3901
 *   +0x0088 -> line 3902
 *   +0x0090 -> line 3904
 *   +0x0098 -> line 3905
 *   +0x009c -> line 3906
 *   +0x00a8 -> line 3910
 *   +0x00ac -> line 3911
 *   +0x00b0 -> line 3912
 *   +0x00b8 -> line 3913
 *   +0x00c0 -> line 3915
 *   +0x00c8 -> line 3916
 *   +0x00cc -> line 3922
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_SPO_p_stChangeFlag(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stValue;
    HIE_tdstSuperObject_* hSPO;
    HIE_tdstSuperObject_* param0;
    int lFlag;
    int lSet;
    unsigned int ulFlags;
    unsigned int ulMask;
    tdeProcedureId_ eProcedureId;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    hSPO = (HIE_tdstSuperObject_*)stValue.uParam.pValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    lFlag = stValue.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    lSet = stValue.uParam.lValue;
    switch (eProcedureId) {
    case 0x155:
        param0 = hSPO->hFirstElementDyn;
        if (param0) {
            ulMask = 1 << lFlag;
            do {
                ulFlags = param0->ulFlags;
                if (lSet)
                    ulFlags |= ulMask;
                else
                    ulFlags &= ~ulMask;
                param0->ulFlags = ulFlags;
                param0 = param0->hNextBrotherDyn;
            } while (param0);
        }
    case 0x154:
        ulFlags = hSPO->ulFlags;
        ulMask = 1 << lFlag;
        if (lSet)
            ulFlags |= ulMask;
        else
            ulFlags &= ~ulMask;
        hSPO->ulFlags = ulFlags;
        break;
    default:
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 3416–3845 */
/* addr: 0x00232fe0  size: 3928 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3416
 *   +0x0028 -> line 3422
 *   +0x002c -> line 3427
 *   +0x0044 -> line 3435
 *   +0x0050 -> line 3437
 *   +0x0058 -> line 3450
 *   +0x0060 -> line 3453
 *   +0x006c -> line 3454
 *   +0x0074 -> line 3455
 *   +0x007c -> line 3458
 *   +0x024c -> line 3462
 *   +0x0258 -> line 3464
 *   +0x0260 -> line 3463
 *   +0x0264 -> line 3462
 *   +0x0268 -> line 3465
 *   +0x026c -> line 3464
 *   +0x0278 -> line 3465
 *   +0x0288 -> line 3467
 *   +0x0290 -> line 3470
 *   +0x029c -> line 3472
 *   +0x02a4 -> line 3471
 *   +0x02a8 -> line 3470
 *   +0x02ac -> line 3473
 *   +0x02b0 -> line 3472
 *   +0x02bc -> line 3473
 *   +0x02cc -> line 3475
 *   +0x02d4 -> line 3478
 *   +0x02e0 -> line 3480
 *   +0x02e8 -> line 3479
 *   +0x02ec -> line 3478
 *   +0x02f0 -> line 3481
 *   +0x02f4 -> line 3480
 *   +0x0300 -> line 3481
 *   +0x0310 -> line 3483
 *   +0x0318 -> line 3486
 *   +0x0324 -> line 3487
 *   +0x0328 -> line 3486
 *   +0x032c -> line 3488
 *   +0x033c -> line 3490
 *   +0x0344 -> line 3489
 *   +0x0348 -> line 3488
 *   +0x034c -> line 3491
 *   +0x0350 -> line 3492
 *   +0x0354 -> line 3490
 *   +0x0360 -> line 3491
 *   +0x0370 -> line 3492
 *   +0x0380 -> line 3493
 *   +0x0384 -> line 3495
 *   +0x038c -> line 3498
 *   +0x0398 -> line 3499
 *   +0x039c -> line 3500
 *   +0x03ac -> line 3501
 *   +0x03b0 -> line 3502
 *   +0x03c0 -> line 3504
 *   +0x03c8 -> line 3503
 *   +0x03cc -> line 3502
 *   +0x03d0 -> line 3505
 *   +0x03d4 -> line 3506
 *   +0x03d8 -> line 3507
 *   +0x03dc -> line 3504
 *   +0x03e8 -> line 3505
 *   +0x03f8 -> line 3506
 *   +0x0408 -> line 3507
 *   +0x0418 -> line 3508
 *   +0x041c -> line 3509
 *   +0x0420 -> line 3511
 *   +0x0428 -> line 3514
 *   +0x0434 -> line 3516
 *   +0x0438 -> line 3514
 *   +0x043c -> line 3515
 *   +0x0440 -> line 3516
 *   +0x0448 -> line 3517
 *   +0x044c -> line 3516
 *   +0x0458 -> line 3517
 *   +0x0468 -> line 3519
 *   +0x0470 -> line 3522
 *   +0x047c -> line 3524
 *   +0x0480 -> line 3522
 *   +0x0484 -> line 3523
 *   +0x0488 -> line 3524
 *   +0x0490 -> line 3525
 *   +0x0494 -> line 3524
 *   +0x04a0 -> line 3525
 *   +0x04b0 -> line 3527
 *   +0x04b8 -> line 3530
 *   +0x04c4 -> line 3532
 *   +0x04c8 -> line 3530
 *   +0x04cc -> line 3531
 *   +0x04d0 -> line 3532
 *   +0x04d8 -> line 3533
 *   +0x04dc -> line 3532
 *   +0x04e8 -> line 3533
 *   +0x04f8 -> line 3535
 *   +0x0500 -> line 3539
 *   +0x050c -> line 3540
 *   +0x0510 -> line 3541
 *   +0x0520 -> line 3543
 *   +0x0524 -> line 3541
 *   +0x0528 -> line 3542
 *   +0x052c -> line 3543
 *   +0x0534 -> line 3544
 *   +0x0538 -> line 3545
 *   +0x053c -> line 3543
 *   +0x0548 -> line 3544
 *   +0x0558 -> line 3545
 *   +0x0568 -> line 3546
 *   +0x056c -> line 3548
 *   +0x0574 -> line 3551
 *   +0x0580 -> line 3552
 *   +0x0584 -> line 3553
 *   +0x0594 -> line 3554
 *   +0x0598 -> line 3555
 *   +0x05a8 -> line 3557
 *   +0x05ac -> line 3555
 *   +0x05b0 -> line 3556
 *   +0x05b4 -> line 3557
 *   +0x05bc -> line 3558
 *   +0x05c0 -> line 3559
 *   +0x05c4 -> line 3560
 *   +0x05c8 -> line 3557
 *   +0x05d4 -> line 3558
 *   +0x05e4 -> line 3559
 *   +0x05f4 -> line 3560
 *   +0x0604 -> line 3561
 *   +0x0608 -> line 3562
 *   +0x060c -> line 3564
 *   +0x0614 -> line 3567
 *   +0x0620 -> line 3569
 *   +0x0624 -> line 3567
 *   +0x0628 -> line 3568
 *   +0x062c -> line 3570
 *   +0x0630 -> line 3569
 *   +0x063c -> line 3570
 *   +0x064c -> line 3572
 *   +0x0654 -> line 3575
 *   +0x0660 -> line 3577
 *   +0x0664 -> line 3575
 *   +0x0668 -> line 3576
 *   +0x066c -> line 3578
 *   +0x0670 -> line 3577
 *   +0x067c -> line 3578
 *   +0x068c -> line 3580
 *   +0x0694 -> line 3584
 *   +0x06a0 -> line 3586
 *   +0x06a4 -> line 3584
 *   +0x06a8 -> line 3585
 *   +0x06ac -> line 3587
 *   +0x06b0 -> line 3586
 *   +0x06bc -> line 3587
 *   +0x06cc -> line 3589
 *   +0x06d4 -> line 3592
 *   +0x06e0 -> line 3593
 *   +0x06e4 -> line 3594
 *   +0x06f4 -> line 3596
 *   +0x06f8 -> line 3594
 *   +0x06fc -> line 3595
 *   +0x0700 -> line 3597
 *   +0x0704 -> line 3598
 *   +0x0708 -> line 3596
 *   +0x0714 -> line 3597
 *   +0x0724 -> line 3598
 *   +0x0734 -> line 3599
 *   +0x0738 -> line 3601
 *   +0x0740 -> line 3604
 *   +0x074c -> line 3605
 *   +0x0750 -> line 3606
 *   +0x0760 -> line 3607
 *   +0x0764 -> line 3608
 *   +0x0774 -> line 3610
 *   +0x0778 -> line 3608
 *   +0x077c -> line 3609
 *   +0x0780 -> line 3611
 *   +0x0784 -> line 3612
 *   +0x0788 -> line 3613
 *   +0x078c -> line 3610
 *   +0x0798 -> line 3611
 *   +0x07a8 -> line 3612
 *   +0x07b8 -> line 3613
 *   +0x07c8 -> line 3614
 *   +0x07cc -> line 3615
 *   +0x07d0 -> line 3617
 *   +0x07d8 -> line 3621
 *   +0x07e4 -> line 3623
 *   +0x07e8 -> line 3621
 *   +0x07ec -> line 3622
 *   +0x07f0 -> line 3624
 *   +0x07f4 -> line 3623
 *   +0x0800 -> line 3624
 *   +0x0810 -> line 3626
 *   +0x0818 -> line 3629
 *   +0x0824 -> line 3631
 *   +0x0828 -> line 3629
 *   +0x082c -> line 3630
 *   +0x0830 -> line 3632
 *   +0x0834 -> line 3631
 *   +0x0840 -> line 3632
 *   +0x0850 -> line 3634
 *   +0x0858 -> line 3640
 *   +0x0864 -> line 3642
 *   +0x0868 -> line 3640
 *   +0x086c -> line 3641
 *   +0x0870 -> line 3643
 *   +0x0874 -> line 3642
 *   +0x0880 -> line 3643
 *   +0x0890 -> line 3645
 *   +0x0898 -> line 3648
 *   +0x08a4 -> line 3649
 *   +0x08a8 -> line 3650
 *   +0x08b8 -> line 3652
 *   +0x08bc -> line 3650
 *   +0x08c0 -> line 3651
 *   +0x08c4 -> line 3653
 *   +0x08c8 -> line 3654
 *   +0x08cc -> line 3652
 *   +0x08d8 -> line 3653
 *   +0x08e8 -> line 3654
 *   +0x08f8 -> line 3655
 *   +0x08fc -> line 3657
 *   +0x0904 -> line 3661
 *   +0x0910 -> line 3662
 *   +0x0914 -> line 3663
 *   +0x0924 -> line 3664
 *   +0x0928 -> line 3665
 *   +0x0938 -> line 3667
 *   +0x093c -> line 3665
 *   +0x0940 -> line 3666
 *   +0x0944 -> line 3668
 *   +0x0948 -> line 3669
 *   +0x094c -> line 3670
 *   +0x0950 -> line 3667
 *   +0x095c -> line 3668
 *   +0x096c -> line 3669
 *   +0x097c -> line 3670
 *   +0x098c -> line 3671
 *   +0x0990 -> line 3672
 *   +0x0994 -> line 3674
 *   +0x099c -> line 3677
 *   +0x09a8 -> line 3679
 *   +0x09ac -> line 3677
 *   +0x09b0 -> line 3678
 *   +0x09b4 -> line 3679
 *   +0x09bc -> line 3680
 *   +0x09c0 -> line 3679
 *   +0x09cc -> line 3680
 *   +0x09dc -> line 3682
 *   +0x09e4 -> line 3685
 *   +0x09f0 -> line 3687
 *   +0x09f4 -> line 3685
 *   +0x09f8 -> line 3686
 *   +0x09fc -> line 3687
 *   +0x0a04 -> line 3688
 *   +0x0a08 -> line 3687
 *   +0x0a14 -> line 3688
 *   +0x0a24 -> line 3690
 *   +0x0a2c -> line 3693
 *   +0x0a38 -> line 3695
 *   +0x0a3c -> line 3693
 *   +0x0a40 -> line 3694
 *   +0x0a44 -> line 3695
 *   +0x0a4c -> line 3696
 *   +0x0a50 -> line 3695
 *   +0x0a5c -> line 3696
 *   +0x0a6c -> line 3698
 *   +0x0a74 -> line 3701
 *   +0x0a80 -> line 3702
 *   +0x0a84 -> line 3703
 *   +0x0a94 -> line 3705
 *   +0x0a98 -> line 3703
 *   +0x0a9c -> line 3704
 *   +0x0aa0 -> line 3705
 *   +0x0aa8 -> line 3706
 *   +0x0aac -> line 3707
 *   +0x0ab0 -> line 3705
 *   +0x0abc -> line 3706
 *   +0x0acc -> line 3707
 *   +0x0adc -> line 3708
 *   +0x0ae0 -> line 3710
 *   +0x0ae8 -> line 3713
 *   +0x0af4 -> line 3714
 *   +0x0af8 -> line 3715
 *   +0x0b08 -> line 3716
 *   +0x0b0c -> line 3717
 *   +0x0b1c -> line 3719
 *   +0x0b20 -> line 3717
 *   +0x0b24 -> line 3718
 *   +0x0b28 -> line 3719
 *   +0x0b30 -> line 3720
 *   +0x0b34 -> line 3721
 *   +0x0b38 -> line 3722
 *   +0x0b3c -> line 3719
 *   +0x0b48 -> line 3720
 *   +0x0b58 -> line 3721
 *   +0x0b68 -> line 3722
 *   +0x0b78 -> line 3723
 *   +0x0b7c -> line 3724
 *   +0x0b80 -> line 3726
 *   +0x0b88 -> line 3730
 *   +0x0b94 -> line 3732
 *   +0x0b9c -> line 3731
 *   +0x0ba0 -> line 3730
 *   +0x0ba4 -> line 3733
 *   +0x0ba8 -> line 3732
 *   +0x0bb4 -> line 3733
 *   +0x0bc4 -> line 3735
 *   +0x0bcc -> line 3738
 *   +0x0bd8 -> line 3740
 *   +0x0be0 -> line 3739
 *   +0x0be4 -> line 3738
 *   +0x0be8 -> line 3741
 *   +0x0bec -> line 3740
 *   +0x0bf8 -> line 3741
 *   +0x0c08 -> line 3743
 *   +0x0c10 -> line 3746
 *   +0x0c1c -> line 3748
 *   +0x0c24 -> line 3747
 *   +0x0c28 -> line 3746
 *   +0x0c2c -> line 3749
 *   +0x0c30 -> line 3748
 *   +0x0c3c -> line 3749
 *   +0x0c4c -> line 3751
 *   +0x0c54 -> line 3754
 *   +0x0c60 -> line 3755
 *   +0x0c64 -> line 3756
 *   +0x0c74 -> line 3758
 *   +0x0c7c -> line 3757
 *   +0x0c80 -> line 3756
 *   +0x0c84 -> line 3759
 *   +0x0c88 -> line 3760
 *   +0x0c8c -> line 3758
 *   +0x0c98 -> line 3759
 *   +0x0ca8 -> line 3760
 *   +0x0cb8 -> line 3761
 *   +0x0cbc -> line 3763
 *   +0x0cc4 -> line 3766
 *   +0x0cd0 -> line 3767
 *   +0x0cd4 -> line 3768
 *   +0x0ce4 -> line 3769
 *   +0x0ce8 -> line 3770
 *   +0x0cf8 -> line 3772
 *   +0x0d00 -> line 3771
 *   +0x0d04 -> line 3770
 *   +0x0d08 -> line 3773
 *   +0x0d0c -> line 3774
 *   +0x0d10 -> line 3775
 *   +0x0d14 -> line 3772
 *   +0x0d20 -> line 3773
 *   +0x0d30 -> line 3774
 *   +0x0d40 -> line 3775
 *   +0x0d50 -> line 3776
 *   +0x0d54 -> line 3777
 *   +0x0d58 -> line 3779
 *   +0x0d60 -> line 3782
 *   +0x0d6c -> line 3784
 *   +0x0d70 -> line 3782
 *   +0x0d74 -> line 3783
 *   +0x0d78 -> line 3784
 *   +0x0d88 -> line 3786
 *   +0x0d90 -> line 3789
 *   +0x0d9c -> line 3791
 *   +0x0da0 -> line 3789
 *   +0x0da4 -> line 3790
 *   +0x0da8 -> line 3791
 *   +0x0db8 -> line 3793
 *   +0x0dc0 -> line 3796
 *   +0x0dcc -> line 3797
 *   +0x0dd0 -> line 3798
 *   +0x0de0 -> line 3799
 *   +0x0de4 -> line 3800
 *   +0x0df4 -> line 3802
 *   +0x0dfc -> line 3801
 *   +0x0e00 -> line 3800
 *   +0x0e04 -> line 3803
 *   +0x0e08 -> line 3804
 *   +0x0e0c -> line 3802
 *   +0x0e18 -> line 3803
 *   +0x0e28 -> line 3804
 *   +0x0e38 -> line 3805
 *   +0x0e3c -> line 3806
 *   +0x0e40 -> line 3808
 *   +0x0e48 -> line 3811
 *   +0x0e54 -> line 3813
 *   +0x0e58 -> line 3811
 *   +0x0e5c -> line 3812
 *   +0x0e60 -> line 3813
 *   +0x0e70 -> line 3815
 *   +0x0e78 -> line 3818
 *   +0x0e8c -> line 3819
 *   +0x0e94 -> line 3822
 *   +0x0ea8 -> line 3823
 *   +0x0eb0 -> line 3826
 *   +0x0ec4 -> line 3827
 *   +0x0ecc -> line 3831
 *   +0x0ed8 -> line 3832
 *   +0x0ee0 -> line 3833
 *   +0x0ee8 -> line 3831
 *   +0x0ef4 -> line 3832
 *   +0x0f04 -> line 3833
 *   +0x0f10 -> line 3834
 *   +0x0f18 -> line 3837
 *   +0x0f30 -> line 3844
 *   +0x0f34 -> line 3845
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_SetMechanicSpeedReal(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    float xValueZ;
    float xValueY;
    float xValueX;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 3295–3404 */
/* addr: 0x00233f40  size: 964 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3295
 *   +0x0018 -> line 3301
 *   +0x0020 -> line 3306
 *   +0x0038 -> line 3309
 *   +0x0048 -> line 3313
 *   +0x004c -> line 3309
 *   +0x0050 -> line 3313
 *   +0x0058 -> line 3315
 *   +0x0060 -> line 3328
 *   +0x0068 -> line 3331
 *   +0x0070 -> line 3332
 *   +0x0078 -> line 3333
 *   +0x0080 -> line 3336
 *   +0x00cc -> line 3340
 *   +0x00d8 -> line 3341
 *   +0x00dc -> line 3342
 *   +0x00e0 -> line 3343
 *   +0x00e4 -> line 3340
 *   +0x00f0 -> line 3341
 *   +0x0100 -> line 3342
 *   +0x0110 -> line 3343
 *   +0x0120 -> line 3344
 *   +0x0134 -> line 3345
 *   +0x013c -> line 3348
 *   +0x0144 -> line 3349
 *   +0x0148 -> line 3350
 *   +0x014c -> line 3351
 *   +0x0150 -> line 3348
 *   +0x015c -> line 3349
 *   +0x016c -> line 3350
 *   +0x017c -> line 3351
 *   +0x018c -> line 3352
 *   +0x01a0 -> line 3353
 *   +0x01a8 -> line 3357
 *   +0x01b4 -> line 3358
 *   +0x01b8 -> line 3359
 *   +0x01bc -> line 3360
 *   +0x01c0 -> line 3357
 *   +0x01cc -> line 3358
 *   +0x01dc -> line 3359
 *   +0x01ec -> line 3360
 *   +0x01fc -> line 3361
 *   +0x0210 -> line 3362
 *   +0x0218 -> line 3366
 *   +0x021c -> line 3367
 *   +0x0220 -> line 3368
 *   +0x0224 -> line 3369
 *   +0x0228 -> line 3366
 *   +0x0234 -> line 3367
 *   +0x0244 -> line 3368
 *   +0x0254 -> line 3369
 *   +0x0264 -> line 3370
 *   +0x0278 -> line 3371
 *   +0x0280 -> line 3375
 *   +0x0284 -> line 3376
 *   +0x0288 -> line 3377
 *   +0x028c -> line 3378
 *   +0x0290 -> line 3375
 *   +0x029c -> line 3376
 *   +0x02ac -> line 3377
 *   +0x02bc -> line 3378
 *   +0x02cc -> line 3379
 *   +0x02e0 -> line 3380
 *   +0x02e8 -> line 3383
 *   +0x02f0 -> line 3384
 *   +0x02f4 -> line 3385
 *   +0x02f8 -> line 3386
 *   +0x02fc -> line 3383
 *   +0x0308 -> line 3384
 *   +0x0318 -> line 3385
 *   +0x0328 -> line 3386
 *   +0x0338 -> line 3387
 *   +0x034c -> line 3388
 *   +0x0354 -> line 3392
 *   +0x035c -> line 3393
 *   +0x0360 -> line 3394
 *   +0x0364 -> line 3392
 *   +0x0370 -> line 3393
 *   +0x0380 -> line 3394
 *   +0x0390 -> line 3395
 *   +0x03a8 -> line 3403
 *   +0x03ac -> line 3404
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_SetMechanicSpeedVector(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    MTH3D_tdstVector_* p_stVector;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 3206–3284 */
/* addr: 0x00234310  size: 444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3206
 *   +0x0018 -> line 3212
 *   +0x0020 -> line 3217
 *   +0x0038 -> line 3219
 *   +0x0048 -> line 3223
 *   +0x004c -> line 3219
 *   +0x0050 -> line 3223
 *   +0x0058 -> line 3225
 *   +0x0060 -> line 3238
 *   +0x0068 -> line 3242
 *   +0x0070 -> line 3243
 *   +0x0078 -> line 3244
 *   +0x0080 -> line 3246
 *   +0x00a4 -> line 3252
 *   +0x00b4 -> line 3255
 *   +0x00bc -> line 3252
 *   +0x00c8 -> line 3254
 *   +0x00cc -> line 3255
 *   +0x00dc -> line 3256
 *   +0x00e0 -> line 3257
 *   +0x00e4 -> line 3258
 *   +0x00fc -> line 3259
 *   +0x0100 -> line 3260
 *   +0x0104 -> line 3261
 *   +0x011c -> line 3262
 *   +0x0120 -> line 3264
 *   +0x0134 -> line 3266
 *   +0x013c -> line 3269
 *   +0x0150 -> line 3270
 *   +0x0158 -> line 3274
 *   +0x016c -> line 3275
 *   +0x0170 -> line 3274
 *   +0x018c -> line 3275
 *   +0x01a0 -> line 3283
 *   +0x01a4 -> line 3284
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_SetMechanicVectorParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xTmp;
    tdeProcedureId_ eProcedureId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_* p_stVector;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 3136–3197 */
/* addr: 0x002344d0  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3136
 *   +0x0028 -> line 3142
 *   +0x002c -> line 3147
 *   +0x0044 -> line 3150
 *   +0x0054 -> line 3151
 *   +0x0058 -> line 3150
 *   +0x005c -> line 3153
 *   +0x006c -> line 3154
 *   +0x0070 -> line 3156
 *   +0x0080 -> line 3160
 *   +0x0084 -> line 3157
 *   +0x0088 -> line 3160
 *   +0x0090 -> line 3162
 *   +0x0098 -> line 3175
 *   +0x00a0 -> line 3179
 *   +0x00a8 -> line 3180
 *   +0x00b0 -> line 3181
 *   +0x00b8 -> line 3184
 *   +0x00c8 -> line 3187
 *   +0x00cc -> line 3188
 *   +0x00d0 -> line 3189
 *   +0x00d4 -> line 3196
 *   +0x00d8 -> line 3197
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_SetMechanic3RealParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stValue;
    float xValue1;
    float xValue2;
    float xValue3;
    DNM_stDynamics* pstDynamic;
    tdstDynam_* h_Dynam;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    xValue1 = stValue.uParam.xValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    xValue2 = stValue.uParam.xValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stValue);
    xValue3 = stValue.uParam.xValue;
    h_Dynam = ((tdstEngineObject_*)hNewSuperObjPerso->hLinkedObject.p_stCharacter)->h_Dynam;
    if (!h_Dynam)
        return p_stTree;
    pstDynamic = fn_p_stDynamGetDynamics(h_Dynam);
    if (!pstDynamic)
        return p_stTree;
    switch (eProcedureId) {
    case 0x12a:
        pstDynamic->m_stInertia.xX = xValue1;
        pstDynamic->m_stInertia.xY = xValue2;
        pstDynamic->m_stInertia.xZ = xValue3;
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 2992–3126 */
/* addr: 0x002345d0  size: 652 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2992
 *   +0x0020 -> line 2998
 *   +0x0024 -> line 3003
 *   +0x003c -> line 3006
 *   +0x004c -> line 3010
 *   +0x0050 -> line 3007
 *   +0x0054 -> line 3010
 *   +0x005c -> line 3012
 *   +0x0064 -> line 3025
 *   +0x006c -> line 3029
 *   +0x0078 -> line 3030
 *   +0x0080 -> line 3031
 *   +0x0088 -> line 3033
 *   +0x0148 -> line 3038
 *   +0x0150 -> line 3042
 *   +0x0158 -> line 3046
 *   +0x0160 -> line 3049
 *   +0x0174 -> line 3051
 *   +0x019c -> line 3052
 *   +0x01a4 -> line 3056
 *   +0x01ac -> line 3060
 *   +0x01b4 -> line 3064
 *   +0x01bc -> line 3069
 *   +0x01c4 -> line 3073
 *   +0x01cc -> line 3077
 *   +0x01d4 -> line 3082
 *   +0x01dc -> line 3086
 *   +0x01e4 -> line 3091
 *   +0x01ec -> line 3095
 *   +0x01f4 -> line 3099
 *   +0x01fc -> line 3103
 *   +0x0204 -> line 3107
 *   +0x0208 -> line 3110
 *   +0x0210 -> line 3103
 *   +0x021c -> line 3104
 *   +0x022c -> line 3105
 *   +0x023c -> line 3106
 *   +0x024c -> line 3107
 *   +0x0250 -> line 3110
 *   +0x0258 -> line 3111
 *   +0x0260 -> line 3115
 *   +0x0268 -> line 3118
 *   +0x026c -> line 3125
 *   +0x0270 -> line 3126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_SetMechanicRealParameter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    float xValue;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 2951–2981 */
/* addr: 0x00234860  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2951
 *   +0x0008 -> line 2962
 *   +0x000c -> line 2951
 *   +0x0028 -> line 2959
 *   +0x002c -> line 2962
 *   +0x0034 -> line 2964
 *   +0x003c -> line 2965
 *   +0x0044 -> line 2966
 *   +0x004c -> line 2968
 *   +0x0058 -> line 2969
 *   +0x0068 -> line 2970
 *   +0x006c -> line 2969
 *   +0x0070 -> line 2971
 *   +0x007c -> line 2972
 *   +0x0080 -> line 2973
 *   +0x0090 -> line 2974
 *   +0x0094 -> line 2975
 *   +0x00a4 -> line 2977
 *   +0x00a8 -> line 2975
 *   +0x00ac -> line 2977
 *   +0x00c4 -> line 2980
 *   +0x00c8 -> line 2981
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeLigthIntensity(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    tdstMSLight_* h_MSLight;
    float xR;
    float xG;
    float xB;
    tdeProcedureId_ eProcedureId;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    h_MSLight = ((tdstEngineObject_*)stParam.uParam.pValue)->h_MSLight;
    if (!h_MSLight)
        return p_stTree;
    if (eProcedureId == 0x153) {
        float xFactor;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xR = stParam.uParam.xValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xG = stParam.uParam.xValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xB = stParam.uParam.xValue;
        p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
        xFactor = stParam.uParam.xValue;
        fn_vMSLightSetColorRGBA(h_MSLight, xR * xFactor, xG * xFactor, xB * xFactor, 0.0f);
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 2804–2942 */
/* addr: 0x00234950  size: 1384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2804
 *   +0x0018 -> line 2809
 *   +0x0020 -> line 2814
 *   +0x0038 -> line 2818
 *   +0x0048 -> line 2821
 *   +0x0054 -> line 2823
 *   +0x005c -> line 2836
 *   +0x0064 -> line 2839
 *   +0x006c -> line 2841
 *   +0x0074 -> line 2842
 *   +0x007c -> line 2845
 *   +0x00a0 -> line 2850
 *   +0x00d4 -> line 2851
 *   +0x00dc -> line 2855
 *   +0x0114 -> line 2857
 *   +0x0120 -> line 2858
 *   +0x0134 -> line 2859
 *   +0x013c -> line 2862
 *   +0x0170 -> line 2863
 *   +0x0178 -> line 2867
 *   +0x01ac -> line 2868
 *   +0x01b4 -> line 2871
 *   +0x01e8 -> line 2872
 *   +0x01f0 -> line 2875
 *   +0x0224 -> line 2876
 *   +0x022c -> line 2880
 *   +0x0260 -> line 2881
 *   +0x0268 -> line 2885
 *   +0x029c -> line 2886
 *   +0x02a4 -> line 2890
 *   +0x02d8 -> line 2891
 *   +0x02e0 -> line 2894
 *   +0x031c -> line 2895
 *   +0x0324 -> line 2898
 *   +0x0360 -> line 2899
 *   +0x0368 -> line 2902
 *   +0x039c -> line 2903
 *   +0x03a4 -> line 2907
 *   +0x03d8 -> line 2908
 *   +0x03e0 -> line 2912
 *   +0x0414 -> line 2913
 *   +0x041c -> line 2916
 *   +0x0450 -> line 2917
 *   +0x0458 -> line 2920
 *   +0x048c -> line 2921
 *   +0x0494 -> line 2924
 *   +0x04c8 -> line 2925
 *   +0x04d0 -> line 2928
 *   +0x0504 -> line 2929
 *   +0x050c -> line 2932
 *   +0x054c -> line 2941
 *   +0x0550 -> line 2942
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_SetMechanicOption(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstDynam_* h_Dynam;
    DNM_stDynamics* pstDynamic;
    tdstGetSetParam_ stValue;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 2701–2794 */
/* addr: 0x00234ec0  size: 548 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2701
 *   +0x0008 -> line 2717
 *   +0x000c -> line 2701
 *   +0x0020 -> line 2713
 *   +0x0024 -> line 2717
 *   +0x0030 -> line 2718
 *   +0x003c -> line 2723
 *   +0x0044 -> line 2718
 *   +0x0048 -> line 2723
 *   +0x0050 -> line 2724
 *   +0x0054 -> line 2727
 *   +0x0068 -> line 2731
 *   +0x0094 -> line 2734
 *   +0x00a4 -> line 2735
 *   +0x00ac -> line 2739
 *   +0x00bc -> line 2740
 *   +0x00c4 -> line 2743
 *   +0x00d8 -> line 2744
 *   +0x00e0 -> line 2750
 *   +0x00e8 -> line 2751
 *   +0x00f0 -> line 2758
 *   +0x00f8 -> line 2760
 *   +0x0120 -> line 2765
 *   +0x012c -> line 2767
 *   +0x0134 -> line 2772
 *   +0x0148 -> line 2775
 *   +0x0158 -> line 2776
 *   +0x0168 -> line 2779
 *   +0x0174 -> line 2783
 *   +0x0178 -> line 2779
 *   +0x017c -> line 2783
 *   +0x0180 -> line 2779
 *   +0x0184 -> line 2786
 *   +0x0188 -> line 2779
 *   +0x019c -> line 2782
 *   +0x01a8 -> line 2779
 *   +0x01ac -> line 2782
 *   +0x01c0 -> line 2783
 *   +0x01e4 -> line 2786
 *   +0x01f0 -> line 2787
 *   +0x0200 -> line 2793
 *   +0x0204 -> line 2794
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stFixePositionZDx(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    int lZoneNumber;
    COL_tdstCollideObject_* hGeoObj;
    short xMinPoint;
    short xMaxPoint;
    MTH3D_tdstVector_ stVectorMax;
    MTH3D_tdstVector_ stVectorMin;
    MTH3D_tdstVector_* p_stVector;
    HIE_tdstSuperObject_* hPerso;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 2622–2685 */
/* addr: 0x002350f0  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2622
 *   +0x0008 -> line 2632
 *   +0x000c -> line 2622
 *   +0x001c -> line 2628
 *   +0x0020 -> line 2632
 *   +0x002c -> line 2633
 *   +0x0038 -> line 2637
 *   +0x0040 -> line 2633
 *   +0x0044 -> line 2637
 *   +0x004c -> line 2641
 *   +0x0054 -> line 2638
 *   +0x0058 -> line 2641
 *   +0x0064 -> line 2645
 *   +0x0078 -> line 2649
 *   +0x008c -> line 2650
 *   +0x0094 -> line 2655
 *   +0x009c -> line 2656
 *   +0x00a0 -> line 2685
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeGameMaterialZDx(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    HIE_tdstSuperObject_* hPerso;
    int lZoneNumber;
    tdeProcedureId_ eProcedureId;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hPerso = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lZoneNumber = stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    switch (eProcedureId) {
    case 0x152:
        fn_hGetCollideZdxOfTypeAtIndex(2, (unsigned short)(lZoneNumber - 1), hPerso);
        break;
    default:
        fn_vOnAIErm_M_UpdateLastError(0x28, 0);
        break;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 2532–2619 */
/* addr: 0x002351b0  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2532
 *   +0x0008 -> line 2543
 *   +0x000c -> line 2532
 *   +0x0020 -> line 2540
 *   +0x0024 -> line 2543
 *   +0x0030 -> line 2544
 *   +0x003c -> line 2579
 *   +0x0044 -> line 2544
 *   +0x0048 -> line 2579
 *   +0x0054 -> line 2583
 *   +0x0074 -> line 2588
 *   +0x007c -> line 2590
 *   +0x0094 -> line 2592
 *   +0x009c -> line 2593
 *   +0x00ac -> line 2594
 *   +0x00b4 -> line 2597
 *   +0x00b8 -> line 2598
 *   +0x00d4 -> line 2599
 *   +0x00d8 -> line 2598
 *   +0x00ec -> line 2599
 *   +0x00f4 -> line 2603
 *   +0x0100 -> line 2604
 *   +0x0108 -> line 2607
 *   +0x0114 -> line 2614
 *   +0x011c -> line 2615
 *   +0x0120 -> line 2619
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stFixePositionPerso(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    DNM_stDynamics* p_stDynamics;
    tdstDynam_* h_Dynam;
    MTH3D_tdstVector_* p_stVector;
    HIE_tdstSuperObject_* hPerso;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 2428–2516 */
/* addr: 0x002352f0  size: 712 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2428
 *   +0x0008 -> line 2435
 *   +0x000c -> line 2428
 *   +0x0024 -> line 2432
 *   +0x0028 -> line 2435
 *   +0x0034 -> line 2438
 *   +0x0060 -> line 2441
 *   +0x0070 -> line 2442
 *   +0x0074 -> line 2441
 *   +0x0078 -> line 2443
 *   +0x0084 -> line 2444
 *   +0x0088 -> line 2445
 *   +0x0098 -> line 2447
 *   +0x00a0 -> line 2446
 *   +0x00a4 -> line 2447
 *   +0x00b0 -> line 2452
 *   +0x00e4 -> line 2453
 *   +0x00ec -> line 2456
 *   +0x00fc -> line 2457
 *   +0x0100 -> line 2458
 *   +0x0110 -> line 2459
 *   +0x0114 -> line 2461
 *   +0x0120 -> line 2462
 *   +0x0130 -> line 2463
 *   +0x013c -> line 2464
 *   +0x014c -> line 2470
 *   +0x0178 -> line 2471
 *   +0x0180 -> line 2474
 *   +0x0184 -> line 2478
 *   +0x0194 -> line 2480
 *   +0x019c -> line 2479
 *   +0x01a0 -> line 2480
 *   +0x01ac -> line 2490
 *   +0x01f8 -> line 2491
 *   +0x0200 -> line 2494
 *   +0x0210 -> line 2495
 *   +0x0214 -> line 2496
 *   +0x0224 -> line 2501
 *   +0x0228 -> line 2496
 *   +0x022c -> line 2501
 *   +0x025c -> line 2502
 *   +0x0264 -> line 2505
 *   +0x0274 -> line 2506
 *   +0x0278 -> line 2505
 *   +0x027c -> line 2506
 *   +0x02a4 -> line 2515
 *   +0x02a8 -> line 2516
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeScreen(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulChangeScreenPositionInPercent;
    tdeProcedureId_ eProcedureId;
    int lVal3;
    int lVal2;
    int lVal1;
    unsigned int ulMode;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 2349–2424 */
/* addr: 0x002355c0  size: 356 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2349
 *   +0x0008 -> line 2352
 *   +0x000c -> line 2349
 *   +0x0018 -> line 2351
 *   +0x001c -> line 2352
 *   +0x0028 -> line 2354
 *   +0x0050 -> line 2360
 *   +0x0058 -> line 2361
 *   +0x0060 -> line 2360
 *   +0x0064 -> line 2361
 *   +0x006c -> line 2363
 *   +0x0084 -> line 2364
 *   +0x008c -> line 2371
 *   +0x0094 -> line 2370
 *   +0x0098 -> line 2371
 *   +0x00a0 -> line 2373
 *   +0x00a4 -> line 2372
 *   +0x00a8 -> line 2373
 *   +0x00b4 -> line 2374
 *   +0x00c8 -> line 2375
 *   +0x00e8 -> line 2376
 *   +0x00f0 -> line 2382
 *   +0x00f8 -> line 2383
 *   +0x0100 -> line 2392
 *   +0x0108 -> line 2391
 *   +0x010c -> line 2392
 *   +0x0114 -> line 2394
 *   +0x0118 -> line 2392
 *   +0x011c -> line 2394
 *   +0x0124 -> line 2399
 *   +0x012c -> line 2405
 *   +0x0138 -> line 2410
 *   +0x0140 -> line 2413
 *   +0x0148 -> line 2423
 *   +0x014c -> line 2424
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stOptionChangerProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    IPT_tdstEntryElement_* IPT_xHandleToChange;
    unsigned char ucWhichTest;
    IPT_tdstEntryElement_* IPT_xHandle;
    char* p_szString;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 2273–2343 */
/* addr: 0x00235730  size: 408 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2273
 *   +0x0004 -> line 2276
 *   +0x0008 -> line 2273
 *   +0x001c -> line 2275
 *   +0x0020 -> line 2276
 *   +0x0048 -> line 2279
 *   +0x0054 -> line 2280
 *   +0x005c -> line 2281
 *   +0x0064 -> line 2289
 *   +0x0070 -> line 2291
 *   +0x0074 -> line 2292
 *   +0x0078 -> line 2291
 *   +0x007c -> line 2292
 *   +0x0088 -> line 2293
 *   +0x0090 -> line 2296
 *   +0x00a8 -> line 2298
 *   +0x00c0 -> line 2308
 *   +0x00c4 -> line 2305
 *   +0x00c8 -> line 2308
 *   +0x00d4 -> line 2310
 *   +0x00d8 -> line 2311
 *   +0x00dc -> line 2310
 *   +0x00e0 -> line 2311
 *   +0x00ec -> line 2312
 *   +0x00f4 -> line 2314
 *   +0x0104 -> line 2316
 *   +0x0108 -> line 2314
 *   +0x010c -> line 2316
 *   +0x0120 -> line 2324
 *   +0x0128 -> line 2327
 *   +0x0134 -> line 2328
 *   +0x0144 -> line 2329
 *   +0x0150 -> line 2331
 *   +0x0160 -> line 2332
 *   +0x0170 -> line 2333
 *   +0x017c -> line 2342
 *   +0x0180 -> line 2343
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stWorldMapProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned char ucVarId;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 1617–2261 */
/* addr: 0x002358d0  size: 5168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1617
 *   +0x0008 -> line 1622
 *   +0x000c -> line 1617
 *   +0x001c -> line 1620
 *   +0x0020 -> line 1617
 *   +0x0030 -> line 1624
 *   +0x0034 -> line 1617
 *   +0x0038 -> line 1623
 *   +0x003c -> line 1617
 *   +0x0048 -> line 1619
 *   +0x004c -> line 1625
 *   +0x0050 -> line 1622
 *   +0x0054 -> line 1623
 *   +0x0058 -> line 1622
 *   +0x005c -> line 1620
 *   +0x0060 -> line 1622
 *   +0x0068 -> line 1631
 *   +0x006c -> line 1622
 *   +0x0070 -> line 1631
 *   +0x0088 -> line 1632
 *   +0x008c -> line 1638
 *   +0x0094 -> line 1635
 *   +0x009c -> line 1638
 *   +0x00a4 -> line 1640
 *   +0x01cc -> line 1644
 *   +0x01d0 -> line 1645
 *   +0x01dc -> line 1647
 *   +0x01ec -> line 1650
 *   +0x0224 -> line 1653
 *   +0x0238 -> line 1659
 *   +0x0248 -> line 1661
 *   +0x0250 -> line 1659
 *   +0x0254 -> line 1661
 *   +0x025c -> line 1663
 *   +0x0260 -> line 1661
 *   +0x0264 -> line 1663
 *   +0x0284 -> line 1665
 *   +0x0288 -> line 1663
 *   +0x028c -> line 1665
 *   +0x0290 -> line 1663
 *   +0x0294 -> line 1665
 *   +0x0298 -> line 1663
 *   +0x029c -> line 1665
 *   +0x02a4 -> line 1666
 *   +0x02a8 -> line 1665
 *   +0x02ac -> line 1666
 *   +0x02b8 -> line 1669
 *   +0x02bc -> line 1670
 *   +0x02c0 -> line 1666
 *   +0x02c4 -> line 1671
 *   +0x02cc -> line 1675
 *   +0x02d0 -> line 1676
 *   +0x02dc -> line 1678
 *   +0x02ec -> line 1681
 *   +0x0324 -> line 1683
 *   +0x0338 -> line 1689
 *   +0x0348 -> line 1691
 *   +0x0350 -> line 1689
 *   +0x0354 -> line 1691
 *   +0x035c -> line 1693
 *   +0x0360 -> line 1691
 *   +0x0364 -> line 1693
 *   +0x0384 -> line 1696
 *   +0x0388 -> line 1693
 *   +0x0398 -> line 1697
 *   +0x03a0 -> line 1702
 *   +0x03b0 -> line 1706
 *   +0x03bc -> line 1708
 *   +0x03cc -> line 1712
 *   +0x03d8 -> line 1713
 *   +0x03dc -> line 1712
 *   +0x03e0 -> line 1714
 *   +0x03ec -> line 1716
 *   +0x03fc -> line 1720
 *   +0x0434 -> line 1722
 *   +0x043c -> line 1724
 *   +0x044c -> line 1728
 *   +0x0450 -> line 1734
 *   +0x0458 -> line 1738
 *   +0x045c -> line 1739
 *   +0x0468 -> line 1741
 *   +0x0478 -> line 1746
 *   +0x04b0 -> line 1748
 *   +0x04c4 -> line 1753
 *   +0x04d4 -> line 1755
 *   +0x04d8 -> line 1753
 *   +0x04dc -> line 1756
 *   +0x04e4 -> line 1763
 *   +0x04e8 -> line 1764
 *   +0x04f4 -> line 1766
 *   +0x0504 -> line 1771
 *   +0x0540 -> line 1773
 *   +0x0554 -> line 1784
 *   +0x0578 -> line 1786
 *   +0x057c -> line 1784
 *   +0x0580 -> line 1786
 *   +0x0584 -> line 1784
 *   +0x0588 -> line 1786
 *   +0x0594 -> line 1787
 *   +0x0598 -> line 1786
 *   +0x059c -> line 1787
 *   +0x05a8 -> line 1789
 *   +0x05ac -> line 1792
 *   +0x05b0 -> line 1787
 *   +0x05b4 -> line 1793
 *   +0x05bc -> line 1799
 *   +0x05c0 -> line 1800
 *   +0x05cc -> line 1802
 *   +0x05dc -> line 1806
 *   +0x0618 -> line 1808
 *   +0x062c -> line 1815
 *   +0x064c -> line 1819
 *   +0x0668 -> line 1825
 *   +0x0684 -> line 1826
 *   +0x068c -> line 1828
 *   +0x0690 -> line 1832
 *   +0x0694 -> line 1828
 *   +0x069c -> line 1833
 *   +0x06a4 -> line 1837
 *   +0x06a8 -> line 1836
 *   +0x06b4 -> line 1838
 *   +0x06b8 -> line 1836
 *   +0x06bc -> line 1839
 *   +0x06c4 -> line 1843
 *   +0x06d0 -> line 1844
 *   +0x06d4 -> line 1843
 *   +0x06d8 -> line 1844
 *   +0x06e0 -> line 1846
 *   +0x06ec -> line 1847
 *   +0x06f0 -> line 1846
 *   +0x06f4 -> line 1847
 *   +0x0700 -> line 1848
 *   +0x0704 -> line 1847
 *   +0x070c -> line 1852
 *   +0x0714 -> line 1855
 *   +0x0720 -> line 1857
 *   +0x0728 -> line 1855
 *   +0x072c -> line 1857
 *   +0x0734 -> line 1858
 *   +0x0738 -> line 1857
 *   +0x073c -> line 1860
 *   +0x0744 -> line 1870
 *   +0x0754 -> line 1872
 *   +0x075c -> line 1870
 *   +0x0760 -> line 1872
 *   +0x0768 -> line 1873
 *   +0x076c -> line 1874
 *   +0x0778 -> line 1876
 *   +0x0788 -> line 1880
 *   +0x07c4 -> line 1882
 *   +0x07d8 -> line 1886
 *   +0x07e4 -> line 1888
 *   +0x07f4 -> line 1889
 *   +0x07f8 -> line 1888
 *   +0x07fc -> line 1889
 *   +0x0808 -> line 1890
 *   +0x080c -> line 1889
 *   +0x0810 -> line 1894
 *   +0x0818 -> line 1900
 *   +0x0820 -> line 1906
 *   +0x0830 -> line 1909
 *   +0x0838 -> line 1910
 *   +0x0840 -> line 1916
 *   +0x0844 -> line 1919
 *   +0x084c -> line 1922
 *   +0x0850 -> line 1925
 *   +0x0858 -> line 1928
 *   +0x088c -> line 1932
 *   +0x09b0 -> line 1945
 *   +0x09bc -> line 1953
 *   +0x0a30 -> line 1954
 *   +0x0a3c -> line 1957
 *   +0x0a44 -> line 1960
 *   +0x0a50 -> line 1962
 *   +0x0a80 -> line 1964
 *   +0x0a88 -> line 1971
 *   +0x0ab8 -> line 1973
 *   +0x0ac0 -> line 1977
 *   +0x0ac4 -> line 1982
 *   +0x0ad8 -> line 1984
 *   +0x0ae0 -> line 1988
 *   +0x0aec -> line 1991
 *   +0x0af4 -> line 1992
 *   +0x0af8 -> line 1999
 *   +0x0b0c -> line 2007
 *   +0x0b10 -> line 2009
 *   +0x0b14 -> line 2007
 *   +0x0b18 -> line 2009
 *   +0x0b1c -> line 2007
 *   +0x0b28 -> line 2009
 *   +0x0b30 -> line 2012
 *   +0x0b38 -> line 2023
 *   +0x0b48 -> line 2036
 *   +0x0b54 -> line 2037
 *   +0x0b60 -> line 2038
 *   +0x0be8 -> line 2046
 *   +0x0bf0 -> line 2048
 *   +0x0bf4 -> line 2046
 *   +0x0bf8 -> line 2047
 *   +0x0bfc -> line 2046
 *   +0x0c00 -> line 2048
 *   +0x0c04 -> line 2047
 *   +0x0c0c -> line 2048
 *   +0x0c10 -> line 2049
 *   +0x0c18 -> line 2058
 *   +0x0c1c -> line 2057
 *   +0x0c20 -> line 2059
 *   +0x0c24 -> line 2058
 *   +0x0c28 -> line 2057
 *   +0x0c2c -> line 2058
 *   +0x0c30 -> line 2057
 *   +0x0c34 -> line 2058
 *   +0x0c38 -> line 2059
 *   +0x0c40 -> line 2060
 *   +0x0c48 -> line 2069
 *   +0x0c4c -> line 2070
 *   +0x0c50 -> line 2068
 *   +0x0c54 -> line 2070
 *   +0x0c58 -> line 2068
 *   +0x0c60 -> line 2069
 *   +0x0c6c -> line 2070
 *   +0x0c74 -> line 2077
 *   +0x0c84 -> line 2078
 *   +0x0c94 -> line 2079
 *   +0x0ca4 -> line 2082
 *   +0x0cb8 -> line 2084
 *   +0x0cc0 -> line 2087
 *   +0x0ccc -> line 2089
 *   +0x0d00 -> line 2091
 *   +0x0d08 -> line 2102
 *   +0x0d14 -> line 2111
 *   +0x0d28 -> line 2113
 *   +0x0d6c -> line 2114
 *   +0x0d84 -> line 2118
 *   +0x0da8 -> line 2120
 *   +0x0db0 -> line 2121
 *   +0x0dc0 -> line 2124
 *   +0x0e3c -> line 2127
 *   +0x0e78 -> line 2134
 *   +0x0ea8 -> line 2140
 *   +0x0eb8 -> line 2142
 *   +0x0ec0 -> line 2145
 *   +0x0eec -> line 2147
 *   +0x0f64 -> line 2150
 *   +0x0f68 -> line 2147
 *   +0x0f6c -> line 2150
 *   +0x0fa8 -> line 2151
 *   +0x0fb0 -> line 2153
 *   +0x0fe0 -> line 2155
 *   +0x1050 -> line 2156
 *   +0x1074 -> line 2158
 *   +0x10a4 -> line 2160
 *   +0x1104 -> line 2161
 *   +0x1160 -> line 2164
 *   +0x1174 -> line 2166
 *   +0x117c -> line 2169
 *   +0x1188 -> line 2171
 *   +0x11b8 -> line 2183
 *   +0x11c0 -> line 2184
 *   +0x11cc -> line 2186
 *   +0x11d0 -> line 2187
 *   +0x11dc -> line 2186
 *   +0x11e4 -> line 2187
 *   +0x11e8 -> line 2186
 *   +0x11ec -> line 2187
 *   +0x11f0 -> line 2186
 *   +0x11f4 -> line 2187
 *   +0x11f8 -> line 2186
 *   +0x11fc -> line 2187
 *   +0x1218 -> line 2189
 *   +0x1220 -> line 2193
 *   +0x1228 -> line 2195
 *   +0x12a0 -> line 2200
 *   +0x12a4 -> line 2202
 *   +0x12a8 -> line 2200
 *   +0x12c0 -> line 2202
 *   +0x12dc -> line 2204
 *   +0x12e0 -> line 2202
 *   +0x12f4 -> line 2204
 *   +0x1320 -> line 2209
 *   +0x1334 -> line 2212
 *   +0x1340 -> line 2218
 *   +0x1350 -> line 2220
 *   +0x1358 -> line 2221
 *   +0x1370 -> line 2227
 *   +0x1384 -> line 2229
 *   +0x138c -> line 2230
 *   +0x1394 -> line 2232
 *   +0x13a0 -> line 2239
 *   +0x13b8 -> line 2240
 *   +0x13c8 -> line 2242
 *   +0x13dc -> line 2247
 *   +0x13e8 -> line 2250
 *   +0x13f8 -> line 2260
 *   +0x13fc -> line 2261
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st3DProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    DNM_stDynamics* pstDynamic;
    HIE_tdstSuperObject_* hChild;
    float xNorm;
    unsigned char b_ucKisUp;
    MTH3D_tdstVector_ stK;
    MTH3D_tdstVector_ stJ;
    MTH3D_tdstVector_ stI;
    float xDummy;
    MTH3D_tdstVector_ stV3;
    MTH3D_tdstVector_ stV2;
    MTH3D_tdstVector_ stV1;
    MTH3D_tdstVector_ stScale;
    tdstDynam_* hDynam;
    float xAngle;
    unsigned char ucChannel;
    unsigned char bScaleChanged;
    unsigned char bTranslationChanged;
    unsigned char bGlobalAxis;
    MTH3D_tdstVector_ stGlobalTranslation;
    MTH3D_tdstVector_ stTempVector;
    MTH3D_tdstVector_ stPositionToReach;
    MAT_tdstTransformation_ stPersoToWorldMatrix;
    HIE_tdstSuperObject_* hCharSO;
    HIE_tdstSuperObject_* hChannelSuperObject;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 1496–1518 */
/* addr: 0x00236d00  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1496
 *   +0x0014 -> line 1500
 *   +0x001c -> line 1504
 *   +0x0020 -> line 1502
 *   +0x0028 -> line 1504
 *   +0x004c -> line 1506
 *   +0x0050 -> line 1507
 *   +0x0058 -> line 1508
 *   +0x0060 -> line 1510
 *   +0x0068 -> line 1511
 *   +0x0070 -> line 1513
 *   +0x0078 -> line 1516
 *   +0x007c -> line 1513
 *   +0x0080 -> line 1516
 *   +0x009c -> line 1517
 *   +0x00a0 -> line 1518
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AI_vBatchProccessOrder(void)
{
    AI_tdstBatchOrder_* p_stBatchOrder;
    unsigned short uwCpt;
    for (uwCpt = 0; uwCpt < AI_gs_uwNbrBatchOrder; uwCpt++) {
        p_stBatchOrder = &AI_gs_a_stBatchSetPersoTab[uwCpt];
        switch (p_stBatchOrder->ucBatchOrderType) {
        case 0:
            AI_vProcessSetPersoAtModulePosition(p_stBatchOrder);
            break;
        case 1:
            AI_vProcessSetPersoOrientation(p_stBatchOrder);
            break;
        case 2:
            AI_vProcessSetPersoWithPerso(p_stBatchOrder);
            break;
        }
    }
    AI_gs_uwNbrBatchOrder = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 1444–1489 */
/* addr: 0x00236dc0  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1444
 *   +0x0014 -> line 1452
 *   +0x0018 -> line 1455
 *   +0x0020 -> line 1458
 *   +0x0024 -> line 1460
 *   +0x002c -> line 1461
 *   +0x0038 -> line 1462
 *   +0x0040 -> line 1474
 *   +0x0044 -> line 1464
 *   +0x0048 -> line 1468
 *   +0x004c -> line 1474
 *   +0x0050 -> line 1464
 *   +0x0054 -> line 1474
 *   +0x007c -> line 1477
 *   +0x0094 -> line 1478
 *   +0x00a8 -> line 1480
 *   +0x00b4 -> line 1481
 *   +0x00bc -> line 1483
 *   +0x00c8 -> line 1485
 *   +0x00d0 -> line 1486
 *   +0x00e8 -> line 1488
 *   +0x00f0 -> line 1489
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AI_vProcessSetPersoWithPerso(AI_tdstBatchOrder_* p_stBatchOrder)
{
    HIE_tdstSuperObject_* hRefSPO;
    HIE_tdstSuperObject_* hPersoToMove;
    HIE_tdstSuperObject_* hChild;
    tdstDynam_* h_Dynam;
    MAT_tdstTransformation_* hGlobalMatrix;
    hRefSPO = p_stBatchOrder->u.stPerso.hRefPerso;
    if (hRefSPO == NULL)
        return;
    hPersoToMove = p_stBatchOrder->hPersoToMove;
    HIE_fn_vUpdateGlobalMatrix(hRefSPO);
    if (hPersoToMove->hFatherDyn != NULL)
        HIE_fn_vUpdateGlobalMatrix(hPersoToMove->hFatherDyn);
    h_Dynam = ((tdstEngineObject_*)hPersoToMove->hLinkedObject.p_stCharacter)->h_Dynam;
    hGlobalMatrix = hPersoToMove->hGlobalMatrix;
    *hGlobalMatrix = *hRefSPO->hGlobalMatrix;
    if (h_Dynam != NULL && fn_p_stDynamGetDynamics(h_Dynam) != NULL)
        MEC_vImposeRotationMatrix(fn_p_stDynamGetDynamics(h_Dynam), hGlobalMatrix);
    if (hPersoToMove->hFatherDyn != NULL)
        HIE_fn_vComputeNewRelativeMatrix(hPersoToMove);
    for (hChild = hPersoToMove->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn)
    {
        HIE_fn_vInvalidateHierarchy(hChild);
    }
    HIE_fn_vRefreshHierarchy(hPersoToMove);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 1398–1440 */
/* addr: 0x00236ed0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1398
 *   +0x001c -> line 1406
 *   +0x0020 -> line 1407
 *   +0x0028 -> line 1409
 *   +0x002c -> line 1413
 *   +0x0030 -> line 1409
 *   +0x0034 -> line 1413
 *   +0x003c -> line 1416
 *   +0x004c -> line 1417
 *   +0x005c -> line 1418
 *   +0x0064 -> line 1421
 *   +0x0070 -> line 1422
 *   +0x0074 -> line 1421
 *   +0x0084 -> line 1422
 *   +0x009c -> line 1425
 *   +0x00b0 -> line 1428
 *   +0x00b8 -> line 1430
 *   +0x00c4 -> line 1432
 *   +0x00cc -> line 1433
 *   +0x00e8 -> line 1434
 *   +0x00f0 -> line 1436
 *   +0x0108 -> line 1438
 *   +0x011c -> line 1440
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AI_vProcessSetPersoOrientation(AI_tdstBatchOrder_* p_stBatchOrder)
{
    tdstDynam_* hDynam;
    MTH3D_tdstVector_ stProposedAxis;
    MTH3D_tdstVector_ stImposedAxis;
    HIE_tdstSuperObject_* hChild;
    HIE_tdstSuperObject_* hPerso;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 1342–1394 */
/* addr: 0x00237010  size: 604 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1342
 *   +0x0018 -> line 1351
 *   +0x005c -> line 1356
 *   +0x0064 -> line 1359
 *   +0x0068 -> line 1360
 *   +0x0070 -> line 1361
 *   +0x0078 -> line 1363
 *   +0x007c -> line 1369
 *   +0x0080 -> line 1365
 *   +0x0084 -> line 1369
 *   +0x0088 -> line 1367
 *   +0x008c -> line 1363
 *   +0x0090 -> line 1369
 *   +0x0098 -> line 1370
 *   +0x009c -> line 1371
 *   +0x00a8 -> line 1370
 *   +0x00b0 -> line 1371
 *   +0x00b4 -> line 1370
 *   +0x00b8 -> line 1371
 *   +0x00bc -> line 1370
 *   +0x00c0 -> line 1371
 *   +0x00c4 -> line 1370
 *   +0x00c8 -> line 1371
 *   +0x00e4 -> line 1373
 *   +0x00fc -> line 1375
 *   +0x0114 -> line 1377
 *   +0x0118 -> line 1378
 *   +0x011c -> line 1377
 *   +0x0148 -> line 1378
 *   +0x0160 -> line 1379
 *   +0x0164 -> line 1378
 *   +0x0178 -> line 1379
 *   +0x018c -> line 1380
 *   +0x0194 -> line 1381
 *   +0x019c -> line 1384
 *   +0x01a0 -> line 1385
 *   +0x01a4 -> line 1384
 *   +0x01d0 -> line 1385
 *   +0x01e8 -> line 1386
 *   +0x01ec -> line 1385
 *   +0x0200 -> line 1386
 *   +0x0208 -> line 1389
 *   +0x0214 -> line 1391
 *   +0x021c -> line 1392
 *   +0x0238 -> line 1393
 *   +0x0240 -> line 1394
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AI_vProcessSetPersoAtModulePosition(AI_tdstBatchOrder_* p_stBatchOrder)
{
    tdstDynam_* hDynam;
    HIE_tdstSuperObject_* hChild;
    MTH3D_tdstVector_ stTempVector2;
    MTH3D_tdstVector_ stTempVector1;
    HIE_tdstSuperObject_* hPersoToMove;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 1301–1337 */
/* addr: 0x00237270  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1301
 *   +0x001c -> line 1307
 *   +0x0020 -> line 1303
 *   +0x0024 -> line 1307
 *   +0x0030 -> line 1308
 *   +0x0040 -> line 1310
 *   +0x0058 -> line 1312
 *   +0x0070 -> line 1313
 *   +0x0074 -> line 1316
 *   +0x008c -> line 1319
 *   +0x009c -> line 1332
 *   +0x00a0 -> line 1330
 *   +0x00a8 -> line 1332
 *   +0x00ac -> line 1336
 *   +0x00b0 -> line 1334
 *   +0x00bc -> line 1337
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stBatchSynchroPersoWithPerso(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    AI_tdstBatchOrder_* p_stBatchOrder;
    HIE_tdstSuperObject_* hNewSuperObjPerso = p_SuperObjPerso;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    if (AI_gs_uwNbrBatchOrder >= 20)
        return fn_p_stSwapNextParameter(p_stTree);
    p_stBatchOrder = &AI_gs_a_stBatchSetPersoTab[AI_gs_uwNbrBatchOrder];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stBatchOrder->hPersoToMove = hNewSuperObjPerso;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_stBatchOrder->u.stPerso.hRefPerso = fn_h_StandardGameGetSuperObject(((tdstEngineObject_*)stParam.uParam.pValue)->h_StandardGame);
    p_stBatchOrder->u.stPerso.ucRefChannel = 0xff;
    p_stBatchOrder->ucBatchOrderType = 2;
    AI_gs_uwNbrBatchOrder++;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 1267–1297 */
/* addr: 0x00237350  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1267
 *   +0x001c -> line 1273
 *   +0x0020 -> line 1269
 *   +0x0024 -> line 1273
 *   +0x0030 -> line 1274
 *   +0x0040 -> line 1276
 *   +0x0058 -> line 1278
 *   +0x0070 -> line 1279
 *   +0x0074 -> line 1281
 *   +0x008c -> line 1284
 *   +0x0090 -> line 1282
 *   +0x0094 -> line 1284
 *   +0x00a4 -> line 1285
 *   +0x00a8 -> line 1286
 *   +0x00ac -> line 1285
 *   +0x00b0 -> line 1286
 *   +0x00b4 -> line 1285
 *   +0x00c4 -> line 1286
 *   +0x00cc -> line 1287
 *   +0x00d0 -> line 1289
 *   +0x00d4 -> line 1287
 *   +0x00d8 -> line 1289
 *   +0x00dc -> line 1287
 *   +0x00ec -> line 1289
 *   +0x00f4 -> line 1290
 *   +0x00f8 -> line 1292
 *   +0x00fc -> line 1290
 *   +0x0100 -> line 1292
 *   +0x0104 -> line 1294
 *   +0x0110 -> line 1297
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stBatchSetPersoOrientation(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    AI_tdstBatchOrder_* p_stBatchOrder;
    HIE_tdstSuperObject_* hNewSuperObjPerso = p_SuperObjPerso;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    float* p_fVector;
    float xZ;
    float xY;
    float xX;
    eProcedureId = p_stTree[-1].uDummy.uId.eProcedureId;
    if (AI_gs_uwNbrBatchOrder >= 20)
        return fn_p_stSwapNextParameter(p_stTree);
    p_stBatchOrder = &AI_gs_a_stBatchSetPersoTab[AI_gs_uwNbrBatchOrder];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(eProcedureId), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stBatchOrder->hPersoToMove = hNewSuperObjPerso;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_stBatchOrder->ucChannel = stParam.uParam.scValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_fVector = (float*)&stParam.uParam.stVectorValue;
    xX = p_fVector[0];
    xY = p_fVector[1];
    xZ = p_fVector[2];
    p_stBatchOrder->u.stOrientation.xX = xX;
    p_stBatchOrder->u.stOrientation.xY = xY;
    p_stBatchOrder->u.stOrientation.xZ = xZ;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_fVector = (float*)&stParam.uParam.stVectorValue;
    /* The second orientation vector is read back to front: that is the order
     * that keeps MWCC's $f0/$f1/$f2 assignment of this group identical to the
     * retail's. */
    xZ = p_fVector[2];
    xY = p_fVector[1];
    xX = p_fVector[0];
    p_stBatchOrder->u.stOrientation.xW = xX;
    p_stBatchOrder->u.stOrientation.xV = xY;
    p_stBatchOrder->u.stOrientation.xU = xZ;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    p_stBatchOrder->uwChannel = stParam.uParam.usValue;
    p_stBatchOrder->ucBatchOrderType = 1;
    AI_gs_uwNbrBatchOrder++;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 1219–1263 */
/* addr: 0x00237480  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1219
 *   +0x001c -> line 1225
 *   +0x0020 -> line 1221
 *   +0x0024 -> line 1225
 *   +0x0030 -> line 1226
 *   +0x0040 -> line 1228
 *   +0x0058 -> line 1230
 *   +0x0070 -> line 1231
 *   +0x0074 -> line 1234
 *   +0x008c -> line 1237
 *   +0x009c -> line 1241
 *   +0x00ac -> line 1243
 *   +0x00bc -> line 1247
 *   +0x00c8 -> line 1248
 *   +0x00cc -> line 1249
 *   +0x00d0 -> line 1248
 *   +0x00d4 -> line 1249
 *   +0x00e0 -> line 1251
 *   +0x00f0 -> line 1255
 *   +0x00fc -> line 1256
 *   +0x0118 -> line 1258
 *   +0x011c -> line 1260
 *   +0x0128 -> line 1263
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stBatchSetPersoAtModulePosition(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    AI_tdstBatchOrder_* p_stBatchOrder;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 1077–1179 */
/* addr: 0x002375c0  size: 772 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1077
 *   +0x0024 -> line 1089
 *   +0x0040 -> line 1093
 *   +0x0050 -> line 1094
 *   +0x0054 -> line 1093
 *   +0x0058 -> line 1094
 *   +0x0064 -> line 1103
 *   +0x006c -> line 1094
 *   +0x0074 -> line 1097
 *   +0x0080 -> line 1098
 *   +0x0084 -> line 1099
 *   +0x008c -> line 1103
 *   +0x0090 -> line 1106
 *   +0x00cc -> line 1109
 *   +0x00d4 -> line 1110
 *   +0x00d8 -> line 1111
 *   +0x00e0 -> line 1110
 *   +0x0100 -> line 1111
 *   +0x0104 -> line 1113
 *   +0x0140 -> line 1115
 *   +0x0150 -> line 1122
 *   +0x01b8 -> line 1128
 *   +0x01bc -> line 1125
 *   +0x01c0 -> line 1124
 *   +0x01c4 -> line 1136
 *   +0x01c8 -> line 1125
 *   +0x01cc -> line 1136
 *   +0x01d0 -> line 1125
 *   +0x01d4 -> line 1136
 *   +0x01d8 -> line 1125
 *   +0x01dc -> line 1136
 *   +0x01e0 -> line 1128
 *   +0x01e4 -> line 1129
 *   +0x01ec -> line 1130
 *   +0x01f8 -> line 1136
 *   +0x0200 -> line 1139
 *   +0x020c -> line 1142
 *   +0x0224 -> line 1145
 *   +0x022c -> line 1146
 *   +0x0234 -> line 1149
 *   +0x0248 -> line 1151
 *   +0x0274 -> line 1165
 *   +0x027c -> line 1167
 *   +0x0294 -> line 1169
 *   +0x02b0 -> line 1170
 *   +0x02bc -> line 1171
 *   +0x02dc -> line 1178
 *   +0x02e0 -> line 1179
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangePersoHorizSighting(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xNorm;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned int ulCustomBits;
    tdstDynam_* hDynam;
    MTH3D_tdstVector_ stZvect;
    MTH3D_tdstVector_ stXvect;
    MTH3D_tdstVector_ stSightVector;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 878–1064 */
/* addr: 0x002378d0  size: 1060 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 878
 *   +0x0014 -> line 885
 *   +0x0018 -> line 878
 *   +0x0024 -> line 881
 *   +0x0028 -> line 878
 *   +0x002c -> line 885
 *   +0x0030 -> line 878
 *   +0x0034 -> line 883
 *   +0x0038 -> line 878
 *   +0x003c -> line 880
 *   +0x0044 -> line 892
 *   +0x0060 -> line 895
 *   +0x0098 -> line 902
 *   +0x00a4 -> line 903
 *   +0x00a8 -> line 902
 *   +0x00ac -> line 904
 *   +0x00b8 -> line 907
 *   +0x00c8 -> line 912
 *   +0x00d0 -> line 913
 *   +0x00e4 -> line 914
 *   +0x00ec -> line 916
 *   +0x011c -> line 923
 *   +0x012c -> line 924
 *   +0x0130 -> line 923
 *   +0x0134 -> line 927
 *   +0x0144 -> line 934
 *   +0x0154 -> line 935
 *   +0x0164 -> line 936
 *   +0x016c -> line 935
 *   +0x0170 -> line 936
 *   +0x0178 -> line 937
 *   +0x0188 -> line 939
 *   +0x0190 -> line 937
 *   +0x0194 -> line 939
 *   +0x01a0 -> line 957
 *   +0x01b0 -> line 958
 *   +0x01b8 -> line 960
 *   +0x01c8 -> line 961
 *   +0x01cc -> line 960
 *   +0x01d0 -> line 961
 *   +0x01e0 -> line 963
 *   +0x01e8 -> line 969
 *   +0x01f0 -> line 973
 *   +0x01f8 -> line 977
 *   +0x0208 -> line 979
 *   +0x0210 -> line 982
 *   +0x0214 -> line 984
 *   +0x021c -> line 982
 *   +0x0220 -> line 984
 *   +0x0228 -> line 985
 *   +0x0238 -> line 988
 *   +0x0240 -> line 1000
 *   +0x0244 -> line 1006
 *   +0x0248 -> line 1009
 *   +0x0250 -> line 1012
 *   +0x0260 -> line 1016
 *   +0x0274 -> line 1018
 *   +0x027c -> line 1021
 *   +0x0288 -> line 1023
 *   +0x029c -> line 1025
 *   +0x02a4 -> line 1027
 *   +0x02a8 -> line 1025
 *   +0x02ac -> line 1023
 *   +0x02d0 -> line 1025
 *   +0x02e8 -> line 1026
 *   +0x0318 -> line 1027
 *   +0x034c -> line 1030
 *   +0x03a8 -> line 1042
 *   +0x03b8 -> line 1044
 *   +0x03c0 -> line 1045
 *   +0x03d8 -> line 1048
 *   +0x03e4 -> line 1051
 *   +0x03f4 -> line 1063
 *   +0x03f8 -> line 1064
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_st3DProc_ForReorientation(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    HIE_tdstSuperObject_* hChild;
    MTH3D_tdstVector_ stTmp;
    unsigned char bGlobalVectors;
    unsigned char bTranslationChanged;
    MTH3D_tdstVector_ stInducedTranslation;
    MTH3D_tdstVector_ stGlobalTranslation;
    MTH3D_tdstVector_ stProposedAxis;
    MTH3D_tdstVector_ stImposedAxis;
    unsigned char uwSecondaryMode;
    unsigned char uwChannel;
    HIE_tdstSuperObject_* hCharSO;
    HIE_tdstSuperObject_* hChannelSuperObject;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 670–818 */
/* addr: 0x00237d00  size: 2792 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 670
 *   +0x0028 -> line 674
 *   +0x002c -> line 670
 *   +0x0034 -> line 674
 *   +0x0038 -> line 670
 *   +0x0050 -> line 674
 *   +0x0054 -> line 670
 *   +0x0058 -> line 674
 *   +0x0060 -> line 675
 *   +0x00a4 -> line 677
 *   +0x00c8 -> line 681
 *   +0x00dc -> line 682
 *   +0x00e4 -> line 686
 *   +0x00f8 -> line 687
 *   +0x0100 -> line 691
 *   +0x0114 -> line 694
 *   +0x011c -> line 697
 *   +0x0188 -> line 698
 *   +0x0198 -> line 701
 *   +0x01bc -> line 705
 *   +0x0200 -> line 707
 *   +0x0224 -> line 711
 *   +0x0238 -> line 712
 *   +0x0240 -> line 716
 *   +0x0254 -> line 717
 *   +0x025c -> line 721
 *   +0x0270 -> line 724
 *   +0x0278 -> line 727
 *   +0x02e4 -> line 728
 *   +0x02f8 -> line 731
 *   +0x031c -> line 736
 *   +0x0344 -> line 741
 *   +0x038c -> line 742
 *   +0x03d0 -> line 744
 *   +0x0444 -> line 747
 *   +0x0470 -> line 748
 *   +0x0478 -> line 752
 *   +0x04c0 -> line 753
 *   +0x0504 -> line 755
 *   +0x0578 -> line 758
 *   +0x05a4 -> line 759
 *   +0x05ac -> line 763
 *   +0x05f4 -> line 764
 *   +0x0638 -> line 766
 *   +0x06ac -> line 769
 *   +0x06d8 -> line 770
 *   +0x06e0 -> line 774
 *   +0x0728 -> line 775
 *   +0x076c -> line 777
 *   +0x07e0 -> line 780
 *   +0x080c -> line 781
 *   +0x0814 -> line 785
 *   +0x085c -> line 786
 *   +0x08a0 -> line 788
 *   +0x0914 -> line 791
 *   +0x0940 -> line 792
 *   +0x0948 -> line 796
 *   +0x0990 -> line 797
 *   +0x09d4 -> line 799
 *   +0x0a48 -> line 802
 *   +0x0a78 -> line 806
 *   +0x0a84 -> line 808
 *   +0x0a98 -> line 809
 *   +0x0aa0 -> line 810
 *   +0x0aa8 -> line 812
 *   +0x0abc -> line 813
 *   +0x0ac4 -> line 816
 *   +0x0ad4 -> line 818
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AI_vComputeNewRotationMatrix(MAT_tdstTransformation_* hMatrix, unsigned short uwMode)
{
    float xNorm;
    MTH3D_tdstVector_ stTmp;
    MTH3D_tdstVector_ stK;
    MTH3D_tdstVector_ stJ;
    MTH3D_tdstVector_ stI;
    MTH3D_tdstVector_ stProposedAxis;
    MTH3D_tdstVector_ stImposedAxis;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 629–663 */
/* addr: 0x002387f0  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 629
 *   +0x0018 -> line 630
 *   +0x001c -> line 638
 *   +0x0038 -> line 639
 *   +0x003c -> line 641
 *   +0x0040 -> line 639
 *   +0x0048 -> line 641
 *   +0x0050 -> line 642
 *   +0x005c -> line 644
 *   +0x0064 -> line 646
 *   +0x0070 -> line 647
 *   +0x0094 -> line 648
 *   +0x009c -> line 652
 *   +0x00a4 -> line 651
 *   +0x00ac -> line 652
 *   +0x00b4 -> line 653
 *   +0x00d4 -> line 654
 *   +0x00dc -> line 656
 *   +0x00ec -> line 657
 *   +0x010c -> line 663
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCollideReinitCommunicationProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    MTH3D_tdstVector_ stV;
    short wIndex;
    tdstCollSet_* hCollSet;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 549–625 */
/* addr: 0x00238920  size: 488 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 549
 *   +0x0018 -> line 556
 *   +0x001c -> line 549
 *   +0x002c -> line 551
 *   +0x0030 -> line 554
 *   +0x0034 -> line 561
 *   +0x004c -> line 562
 *   +0x0050 -> line 565
 *   +0x0058 -> line 562
 *   +0x0060 -> line 565
 *   +0x0068 -> line 566
 *   +0x006c -> line 565
 *   +0x0070 -> line 569
 *   +0x0080 -> line 570
 *   +0x00b4 -> line 580
 *   +0x00b8 -> line 581
 *   +0x00c8 -> line 582
 *   +0x00d0 -> line 588
 *   +0x00d8 -> line 593
 *   +0x00fc -> line 596
 *   +0x0104 -> line 597
 *   +0x0134 -> line 600
 *   +0x0140 -> line 601
 *   +0x0148 -> line 605
 *   +0x014c -> line 606
 *   +0x0178 -> line 607
 *   +0x0180 -> line 611
 *   +0x018c -> line 612
 *   +0x0194 -> line 617
 *   +0x01c0 -> line 624
 *   +0x01c4 -> line 625
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCollideCommunicationProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    short wIndex;
    unsigned char ucPriority;
    tdeProcedureId_ eProcedureId;
    tdstCollSet_* hCollSet;
    tdstEngineObject_* p_stEngineObject;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 496–528 */
/* addr: 0x00238b10  size: 248 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 496
 *   +0x0008 -> line 507
 *   +0x000c -> line 496
 *   +0x0020 -> line 507
 *   +0x002c -> line 508
 *   +0x0034 -> line 515
 *   +0x003c -> line 508
 *   +0x0040 -> line 515
 *   +0x0048 -> line 516
 *   +0x006c -> line 517
 *   +0x007c -> line 518
 *   +0x0080 -> line 517
 *   +0x0084 -> line 518
 *   +0x00ac -> line 520
 *   +0x00bc -> line 521
 *   +0x00d4 -> line 527
 *   +0x00d8 -> line 528
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stRealToText(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    long lPrecision;
    float xValue;
    tdstGetSetParam_ stParam;
    char* pszString;
    char cFormater[32];
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    pszString = fn_szGetStringFromTextOrStringParam(&stParam);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xValue = (stParam.eType == E_vt_Float) ? stParam.uParam.xValue : (float)stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lPrecision = (stParam.eType == E_vt_Float) ? MTH_M_xRealToLong(stParam.uParam.xValue) : stParam.uParam.lValue;
    sprintf(cFormater, "%%.%uf", lPrecision);
    sprintf(pszString, cFormater, xValue);
    return p_stTree;
}


/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 462–489 */
/* addr: 0x00238c10  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 462
 *   +0x0008 -> line 471
 *   +0x000c -> line 462
 *   +0x0018 -> line 471
 *   +0x0024 -> line 472
 *   +0x002c -> line 479
 *   +0x0034 -> line 472
 *   +0x0038 -> line 479
 *   +0x0040 -> line 480
 *   +0x0044 -> line 479
 *   +0x0048 -> line 480
 *   +0x0070 -> line 482
 *   +0x007c -> line 488
 *   +0x0080 -> line 489
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stIntToText(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    char* pszString;
    tdstGetSetParam_ stParam;
    long lValue;






    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    pszString = fn_szGetStringFromTextOrStringParam(&stParam);






    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    lValue = (stParam.eType == E_vt_Float) ? MTH_M_xRealToLong(stParam.uParam.xValue) : stParam.uParam.lValue;

    itoa(lValue, pszString, 10);





    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 357–454 */
/* addr: 0x00238cb0  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 357
 *   +0x0008 -> line 364
 *   +0x000c -> line 357
 *   +0x0014 -> line 360
 *   +0x0018 -> line 357
 *   +0x002c -> line 359
 *   +0x0030 -> line 364
 *   +0x003c -> line 366
 *   +0x0048 -> line 368
 *   +0x0054 -> line 370
 *   +0x005c -> line 371
 *   +0x006c -> line 372
 *   +0x0080 -> line 386
 *   +0x00b4 -> line 404
 *   +0x00e4 -> line 407
 *   +0x00ec -> line 413
 *   +0x010c -> line 415
 *   +0x0118 -> line 416
 *   +0x011c -> line 415
 *   +0x0120 -> line 419
 *   +0x012c -> line 426
 *   +0x0140 -> line 434
 *   +0x0148 -> line 438
 *   +0x016c -> line 440
 *   +0x0170 -> line 442
 *   +0x0180 -> line 453
 *   +0x0184 -> line 454
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stStringProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    short wStringLength;
    short wNewCharacter;
    short wAffectedPos;
    char* pszString;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 294–354 */
/* addr: 0x00238e60  size: 476 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 294
 *   +0x0004 -> line 305
 *   +0x0008 -> line 294
 *   +0x0028 -> line 303
 *   +0x002c -> line 294
 *   +0x0030 -> line 296
 *   +0x0034 -> line 305
 *   +0x0050 -> line 308
 *   +0x0058 -> line 310
 *   +0x005c -> line 317
 *   +0x0074 -> line 318
 *   +0x007c -> line 321
 *   +0x0080 -> line 318
 *   +0x0084 -> line 321
 *   +0x0094 -> line 322
 *   +0x00a0 -> line 324
 *   +0x00a8 -> line 326
 *   +0x00b8 -> line 327
 *   +0x00c8 -> line 330
 *   +0x00dc -> line 331
 *   +0x00e0 -> line 330
 *   +0x00e4 -> line 331
 *   +0x0118 -> line 334
 *   +0x012c -> line 335
 *   +0x0138 -> line 336
 *   +0x0140 -> line 339
 *   +0x015c -> line 340
 *   +0x0168 -> line 341
 *   +0x0170 -> line 344
 *   +0x0178 -> line 345
 *   +0x0184 -> line 350
 *   +0x0188 -> line 351
 *   +0x01a4 -> line 352
 *   +0x01b0 -> line 353
 *   +0x01b4 -> line 354
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCreateTextWithFormat(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned char i;
    unsigned char ucNbParam;
    char* szStringDest;
    char* szTmp;
    char* szStringParam;
    char szNumTmp[20];
    char szFormatedText[200];
    char* szStringFormat;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 270–288 */
/* addr: 0x00239040  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 270
 *   +0x0008 -> line 275
 *   +0x000c -> line 270
 *   +0x0018 -> line 275
 *   +0x0020 -> line 276
 *   +0x0024 -> line 275
 *   +0x0028 -> line 276
 *   +0x002c -> line 279
 *   +0x0030 -> line 276
 *   +0x0034 -> line 279
 *   +0x0038 -> line 276
 *   +0x0048 -> line 279
 *   +0x0050 -> line 280
 *   +0x005c -> line 283
 *   +0x0068 -> line 280
 *   +0x0078 -> line 283
 *   +0x0080 -> line 286
 *   +0x0084 -> line 283
 *   +0x0088 -> line 286
 *   +0x00b0 -> line 287
 *   +0x00b4 -> line 288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stChangeTextDefaultColor(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float xR;
    float xG;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xR = (float)stParam.uParam.lValue / 255.0f;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    xG = (float)stParam.uParam.lValue / 255.0f;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    TXT_ChangeDefaultColor(xR, xG, (float)stParam.uParam.lValue / 255.0f);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 208–264 */
/* addr: 0x00239110  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 208
 *   +0x0018 -> line 210
 *   +0x0020 -> line 217
 *   +0x0038 -> line 219
 *   +0x0064 -> line 225
 *   +0x0070 -> line 226
 *   +0x0074 -> line 225
 *   +0x0078 -> line 227
 *   +0x0088 -> line 229
 *   +0x0094 -> line 227
 *   +0x0098 -> line 229
 *   +0x00a0 -> line 231
 *   +0x00a8 -> line 237
 *   +0x00b4 -> line 238
 *   +0x00b8 -> line 239
 *   +0x00c8 -> line 241
 *   +0x00d4 -> line 239
 *   +0x00d8 -> line 241
 *   +0x00e0 -> line 243
 *   +0x00e8 -> line 249
 *   +0x00f4 -> line 250
 *   +0x00f8 -> line 251
 *   +0x0108 -> line 252
 *   +0x010c -> line 251
 *   +0x0110 -> line 252
 *   +0x011c -> line 253
 *   +0x0120 -> line 252
 *   +0x0128 -> line 253
 *   +0x0134 -> line 263
 *   +0x0138 -> line 264
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCustomValuesProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    MTH3D_tdstVector_ stTmpVec;
    short xIndex;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedu1.cxx lines 88–204 */
/* addr: 0x00239260  size: 404 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 88
 *   +0x0020 -> line 90
 *   +0x0024 -> line 98
 *   +0x003c -> line 100
 *   +0x0040 -> line 105
 *   +0x0048 -> line 100
 *   +0x0050 -> line 105
 *   +0x005c -> line 106
 *   +0x0088 -> line 115
 *   +0x008c -> line 117
 *   +0x0098 -> line 115
 *   +0x00a0 -> line 117
 *   +0x00a8 -> line 120
 *   +0x00ac -> line 117
 *   +0x00b0 -> line 126
 *   +0x00b4 -> line 120
 *   +0x00b8 -> line 126
 *   +0x00c0 -> line 120
 *   +0x00c4 -> line 126
 *   +0x00cc -> line 130
 *   +0x00d0 -> line 128
 *   +0x00d4 -> line 133
 *   +0x00dc -> line 136
 *   +0x00e4 -> line 139
 *   +0x00ec -> line 142
 *   +0x00f4 -> line 145
 *   +0x0100 -> line 149
 *   +0x0108 -> line 152
 *   +0x0110 -> line 155
 *   +0x0118 -> line 160
 *   +0x0120 -> line 174
 *   +0x0124 -> line 168
 *   +0x0128 -> line 174
 *   +0x0134 -> line 178
 *   +0x0140 -> line 179
 *   +0x0148 -> line 181
 *   +0x0150 -> line 184
 *   +0x0154 -> line 186
 *   +0x0158 -> line 184
 *   +0x015c -> line 190
 *   +0x0168 -> line 191
 *   +0x0170 -> line 193
 *   +0x0174 -> line 203
 *   +0x0178 -> line 204
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCustomBitsProc(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulNewBits;
    unsigned int ulBitMask;
    unsigned int ulMask;
    unsigned char bSet;
    short xBit;
    tdstStandardGame_* hStdGame;
    unsigned int ulCurrentBits;
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}
