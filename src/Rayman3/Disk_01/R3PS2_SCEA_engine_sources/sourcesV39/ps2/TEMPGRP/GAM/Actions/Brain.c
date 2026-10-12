/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\Brain.c */
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
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;

typedef enum anon_enum_0080171c {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_0080171c;

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_0080171c eUsedMechanics; /* +0x8 */
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

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

unsigned char g_ucGameModuleId;

unsigned char HMU_fn_ucGetLevelNormalMemoryBlock(void);
void GLI_TEX_vKillMemoryChannel(unsigned char ucCurrentChannel);
void PLD_fn_vUnLoadLevel(void);
void HMU_fn_vSetMemoriesInFixMode(void);

void fn_vFreeLevelAllowedMemory(void)
{
    GLI_TEX_vKillMemoryChannel(HMU_fn_ucGetLevelNormalMemoryBlock());
    PLD_fn_vUnLoadLevel();
    HMU_fn_vSetMemoriesInFixMode();
}

void fn_vBrainCopyClone(tdstEngineObject_* _p_stObjectDest, tdstEngineObject_* _p_stObjectSrc)
{
    fn_vSimulateMindAllocationFromAnotherMind(_p_stObjectSrc->h_Brain->p_stMind, _p_stObjectDest->h_Brain->p_stMind);
}

void fn_vBrainDesinit(tdstEngineObject_* p_stObject)
{
    if (!p_stObject) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (!p_stObject->h_Brain) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }
}

unsigned char fn_bLevelHadTransitionMemory(void);
void* MC_fn_hGetFirstMainCharNode(void);
HIE_tdstSuperObject_* MC_fn_hGetCharacterInMainCharacterNode(void* hMainCharNode);
unsigned char fn_bIsInFix(tdstEngineObject_* p_stObject);
void fn_vReinitAIWithFlags(AI_tdstMind_* p_stMind, tdeObjectTreeInit_ eObjIniType);
void fn_vReinitAI(AI_tdstMind_* p_stMind);
void fn_vSecondPassOfMindLoading(AI_tdstMind_* p_stMind, unsigned char bIsInFix, tdeObjectTreeInit_ eObjectInit);
void AI_fn_vInsertDsgVarInSAI(AI_tdstMind_* p_stMind);

/* Inlined mind accessor (original name unknown). Retail loads the mind before
 * calling fn_bIsInFix for fn_vSecondPassOfMindLoading's arguments, which MWCC
 * only does when both arguments are calls; a plain field chain is loaded after. */
static inline AI_tdstMind_* AI_M_p_stGetMind(tdstEngineObject_* p_stObject) { return p_stObject->h_Brain->p_stMind; }

void fn_vBrainInit(tdstEngineObject_* p_stObject, tdeObjectTreeInit_ eObjectInit)
{
    if (fn_bLevelHadTransitionMemory()
        && MC_fn_hGetFirstMainCharNode()
        && MC_fn_hGetCharacterInMainCharacterNode(MC_fn_hGetFirstMainCharNode())
        && ((MC_fn_hGetCharacterInMainCharacterNode(MC_fn_hGetFirstMainCharNode())->ulTypeOfLinkedObject != 2) ? NULL : MC_fn_hGetCharacterInMainCharacterNode(MC_fn_hGetFirstMainCharNode())->hLinkedObject.p_stCharacter) == p_stObject)
        return;

    if (!p_stObject) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (!p_stObject->h_Brain) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }

    p_stObject->h_Brain->hLastCollidedGoThroughMaterial = (GMT_tdstGameMaterial_*)0xCDCDCDCD;
    p_stObject->h_Brain->bWarnMechanicsFlag = 0;

    switch (eObjectInit)
    {
    case OTI_ReinitTheMap:
    case OTI_LoadSavedGame:
    case OTI_PlayerDead:
        fn_vReinitAIWithFlags(p_stObject->h_Brain->p_stMind, eObjectInit);
        break;
    case OTI_WhenGameStart:
        p_stObject->h_Brain->bActiveDuringTransition = 0;
    case OTI_MapLoaded:
        if (!(unsigned char)((p_stObject->h_StandardGame->ucMiscFlags & 8) ? 1 : 0))
            fn_vSecondPassOfMindLoading(AI_M_p_stGetMind(p_stObject), fn_bIsInFix(p_stObject), eObjectInit);
        else
            fn_vReinitAI(p_stObject->h_Brain->p_stMind);
        AI_fn_vInsertDsgVarInSAI(p_stObject->h_Brain->p_stMind);
        break;
    case OTI_AlwaysCreated:
        break;
    }
}

void fn_vBrainFree(void)
{
}

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
AI_tdstMind_* fn_pstAllocMind(void);

void fn_vBrainAlloc(tdstEngineObject_* p_stObject)
{
    if (!p_stObject) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (p_stObject->h_Brain) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 13, -1, 255, 255, NULL);
    }

    {
        tdstBrain_* hBrain = (tdstBrain_*)HMU_fn_p_vMalloc(sizeof(tdstBrain_), 0);
        hBrain->p_stMind = fn_pstAllocMind();
        hBrain->hLastCollidedGoThroughMaterial = (GMT_tdstGameMaterial_*)0xCDCDCDCD;
        hBrain->bWarnMechanicsFlag = 0;
        p_stObject->h_Brain = hBrain;
    }
}
