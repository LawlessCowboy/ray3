/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\HitPts.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/DNM.h"
#include "r3/GMT.h"
#include "r3/MOR.h"
#include "r3/SECT.h"
#include "r3/WP.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstAlwaysModelList_ tdstAlwaysModelList_;
typedef struct LST2_tdstAnchorToALW_tdxHandleToModelListDyn LST2_tdstAnchorToALW_tdxHandleToModelListDyn;
typedef struct tdstAlways_ tdstAlways_;
typedef struct tdst3DOSLinkTable_ tdst3DOSLinkTable_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct tdstDynam_ tdstDynam_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstStructureHandleFunction_ tdstStructureHandleFunction_;

typedef enum anon_enum_0075f80a {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_0075f80a;

struct tdstAlwaysModelList_ {
    tdstAlwaysModelList_* hNextBrotherDyn; /* +0x0 */
    tdstAlwaysModelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToALW_tdxHandleToModelListDyn* hFatherDyn; /* +0x8 */
    int otObjectModelType; /* +0xc */
    tdstEngineObject_* p_stAlwaysObject; /* +0x10 */
};

struct LST2_tdstAnchorToALW_tdxHandleToModelListDyn {
    tdstAlwaysModelList_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysModelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstAlways_ {
    unsigned int ulMaxNumberOfAlways; /* +0x0 */
    LST2_tdstAnchorToALW_tdxHandleToModelListDyn ALW_h_LstAlwaysModel; /* +0x4 */
    HIE_tdstSuperObject_* d_stAlwaysSuperObject; /* +0x10 */
    tdstEngineObject_* d_stAlwaysEngineObjectInit; /* +0x14 */
    HIE_tdstSuperObject_** d_hAlwaysGenerator; /* +0x18 */
};

struct tdst3DOSLinkTable_ {
    char cNotEmpty; /* +0x0 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct anon_1 {
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
    anon_0 m_stData6; /* +0x34 */
    anon_1 m_stData7; /* +0x44 */
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

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_0075f80a eUsedMechanics; /* +0x8 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct tdstStructureHandleFunction_ {
    void (*p_fn_vCopyCloneMSFunction)(tdstEngineObject_*, tdstEngineObject_*); /* +0x0 */
    unsigned int (*p_fn_ulSizeOfFunction)(void); /* +0x4 */
    void (*p_fn_vAllocFunction)(tdstEngineObject_*); /* +0x8 */
    void (*p_fn_vFreeFunction)(tdstEngineObject_*); /* +0xc */
    void (*p_fn_vInitFunction)(tdstEngineObject_*, tdeObjectTreeInit_); /* +0x10 */
    void (*p_fn_vDesinitFunction)(tdstEngineObject_*, tdeObjectTreeInit_); /* +0x14 */
};

tdstStructureHandleFunction_ g_a_stStructureHandleFunction[12];
unsigned char g_ucGameModuleId;
unsigned int g_SCR_a9MemTable[9];
tdstAlways_ g_stAlways;
short hDevice;
tdstDisplayVignetteDuringPlaying_ g_stDisplayVignetteDuringPlaying;
char g_cChooseLevel;
tdst_EntryActions_ g_st_3DOS_EntryActions;
int g_a_pfnDynamicFunction[2];
_SND_tduRefEvt g_stBeginMapSoundEvent;
int gp_lBeginMapSoundEventID;
int g_hStaticCollisionGeoObj;
int g_hCollisionGeoObj;
tdstObjectType_ g_stObjectTypes;
int g_a_hSOCurrentMainSector[4];
int gp_stLight;
unsigned char g_ucIsEdInGhostMode;
int gp_stNewInactiveDynamicWorld;
int SECT_hNewFatherSector;
int gp_stNewDynamicWorld;
int gp_stNewActualWorld;
int gp_stInactiveDynamicWorld;
int SECT_hFatherSector;
int gp_stDynamicWorld;
int gp_stActualWorld;
char g_cIsLevelOk;
tdstEngineStructure_ g_stEngineStructure;
tdst3DOSLinkTable_ g_st3DOSLinkTable;

void fn_vTreatCharactersInSector(HIE_tdstSuperObject_* hCharacter)
{
    tdstAnim3d_* p_stCurrentAnim;
    tdstState_* p_stCurrentState;
    unsigned int ulCurrentBits;
    unsigned char bNoDisplay;
    unsigned char bSkip;
    tdst3dData_* h_Current3dData;
    unsigned char bSectorChange;
    DNM_stDynamics* p_stDynamic;
    tdstDynam_* h_Dynam;
    MTH3D_tdstVector_ stOldV;
    /* TODO: decompile from asm/... */
}

unsigned char fn_ucSubHitPointsMax(tdstEngineObject_* _p_stObject, unsigned char _ucValue)
{
    int value = _ucValue; unsigned char* p = &_p_stObject->h_StandardGame->ucHitPointsMax; if (*p - value > 0)
        *p = (char)*p - value;
    else

        *p = 0;

    { unsigned char m = _p_stObject->h_StandardGame->ucHitPointsMax; unsigned char* p2 = &_p_stObject->h_StandardGame->ucHitPoints; unsigned char hp = *p2; if (hp <= m) *p2 = hp; else *p2 = m; }
    return _p_stObject->h_StandardGame->ucHitPointsMax;
}

void fn_vAddHitPointsMax(tdstEngineObject_* _p_stObject, unsigned char _ucValue)
{
    int value = _ucValue; tdstStandardGame_* h = _p_stObject->h_StandardGame; unsigned char m = h->ucHitPointsMaxMax; unsigned char* p = &h->ucHitPointsMax; if (value + *p <= m)
        *p = value + (char)*p;
    else
        *p = m;
}

void fn_vSetHitPointsMaxToMaxValue(tdstEngineObject_* _p_stObject)
{
    _p_stObject->h_StandardGame->ucHitPointsMax = _p_stObject->h_StandardGame->ucHitPointsMaxMax;
}

void fn_vSetHitPointsMax(tdstEngineObject_* _p_stObject, unsigned char _ucValue)
{
    _p_stObject->h_StandardGame->ucHitPointsMax = _ucValue;
}

unsigned char fn_ucGetHitPointsMax(tdstEngineObject_* _p_stObject)
{
    return _p_stObject->h_StandardGame->ucHitPointsMax;
}

unsigned char fn_ucSubHitPoints(tdstEngineObject_* _p_stObject, unsigned char _ucValue)
{
    int value = _p_stObject->h_StandardGame->ucHitPoints - _ucValue;
    if (value > 0)
        _p_stObject->h_StandardGame->ucHitPoints = (signed char)_p_stObject->h_StandardGame->ucHitPoints - _ucValue;
    else
        _p_stObject->h_StandardGame->ucHitPoints = 0;
    return _p_stObject->h_StandardGame->ucHitPoints;
}

void fn_vAddHitPoints(tdstEngineObject_* _p_stObject, unsigned char _ucValue)
{
    int value = _ucValue; tdstStandardGame_* h = _p_stObject->h_StandardGame; unsigned char m = h->ucHitPointsMax; unsigned char* p = &h->ucHitPoints; if (value + *p <= m)
        *p = value + (char)*p;
    else
        *p = m;
}

void fn_vSetHitPointsToMaxValue(tdstEngineObject_* _p_stObject)
{
    _p_stObject->h_StandardGame->ucHitPoints = _p_stObject->h_StandardGame->ucHitPointsMax;
}

void fn_vSetHitPoints(tdstEngineObject_* _p_stObject, unsigned char _ucValue)
{
    _p_stObject->h_StandardGame->ucHitPoints = _ucValue;
}

void fn_vSetHitPointsInit(tdstEngineObject_* _p_stObject, unsigned char _ucValue)
{
    _p_stObject->h_StandardGame->ucSaveHitPoints = _ucValue;
}
