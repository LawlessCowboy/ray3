/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/DNM.h"
#include "r3/ENG.h"
#include "r3/FIL.h"
#include "r3/GEO.h"
#include "r3/GLI.h"
#include "r3/GMT.h"
#include "r3/HIE.h"
#include "r3/LST2.h"
#include "r3/MAT.h"
#include "r3/MOR.h"
#include "r3/MTH.h"
#include "r3/SECT.h"
#include "r3/WP.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstCollideZdxList_ tdstCollideZdxList_;
typedef struct tdstZdxIndexList_ tdstZdxIndexList_;
typedef struct tdstZoneSetEncapsulation_ tdstZoneSetEncapsulation_;

typedef enum anon_enum_0091e2f9 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_0091e2f9;

struct LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt {
    tdstZoneSetEncapsulation_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstCsaList_ {
    LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt hZoneSetEncapsulationList; /* +0x0 */
};

struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt {
    tdstZdxIndexList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZoneSetList_ {
    LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt hZdxIndexList; /* +0x0 */
};

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_0091e2f9 eUsedMechanics; /* +0x8 */
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

struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt {
    tdstCollideZdxList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZdxList_ {
    LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt hGeoZdxList; /* +0x0 */
    unsigned short uwNumberOfZdx; /* +0x8 */
};

struct tdstCollideZdxList_ {
    COL_tdstCollideObject_* hGeoObj; /* +0x0 */
};

struct tdstZdxIndexList_ {
    unsigned short uwZdxIndex; /* +0x0 */
};

struct tdstZoneSetEncapsulation_ {
    tdstZoneSetList_* p_stZoneSetList; /* +0x0 */
    unsigned short uwIndex; /* +0x4 */
};

float g_fGlobalAccelerationFactorForAnims;
tdstEngineStructure_ g_stEngineStructure;
unsigned char g_ucGameModuleId;

void CINE_CheckEndCineActor(CINE_tdstCineActor_* hActor);
unsigned char CINE_fn_bIsCinePlaying(CINE_tdstCine_* hCine)
{
    CINE_tdstCineActor_* hElement;
    hElement = hCine->hActorList.hFirstElementDyn;
    if (hElement != NULL) {
        do {
            CINE_CheckEndCineActor(hElement);
            if (hElement->bPlayingAnim) return 1;
            hElement = hElement->hNextBrotherDyn;
        } while (hElement != NULL);
    }
    return 0;
}

int fn_bTestSubAnimNearEnd(HIE_tdstSuperObject_* _hCharacter, unsigned int ulNumberOfSubAnim)
{
    tdstSubAnimInUse_* param0;
    tdstSubAnim_* hSubAnimInFamily;

    hSubAnimInFamily = &_hCharacter->hLinkedObject.p_stCharacter->h_3dData->h_Family->hForSubAnimArray.hFirstElementOpt[ulNumberOfSubAnim];
    for (param0 = _hCharacter->hLinkedObject.p_stCharacter->h_3dData->hForSubAnimInUseArray.hFirstElementDyn; param0; param0 = param0->hNextBrotherDyn)
    {
        if (param0->p_stTheSubAnim == hSubAnimInFamily)
        {
            return ((((float)(g_stEngineStructure.stEngineTimer.ulCurrentTimerCount + g_stEngineStructure.stEngineTimer.ulDeltaTimerCount - param0->ulStartFrame) / 1000.0f)
                       * ((float)(unsigned int)param0->p_stTheSubAnim->p_stSubAnim->ucFrameRate * g_fGlobalAccelerationFactorForAnims)
                   > (float)(unsigned int)param0->p_stTheSubAnim->p_stSubAnim->uwNumberOfFrames) != 0);
        }
    }
    return 0;
}

int fn_bSubAnimRunning(HIE_tdstSuperObject_* _hCharacter)
{
    return *(int*)((char*)_hCharacter->hLinkedObject.p_stCharacter->h_3dData + 0x1bc) > 0;
}

void fn_vStopSubAnimationAtEnd(HIE_tdstSuperObject_* _hCharacter, unsigned int ulNumberOfSubAnim)
{
    tdstSubAnimInUse_* hSubAnimInUse;
    tdstSubAnim_* param0;
    tdst3dData_* h3dData;

    h3dData = _hCharacter->hLinkedObject.p_stCharacter->h_3dData;
    param0 = &h3dData->h_Family->hForSubAnimArray.hFirstElementOpt[ulNumberOfSubAnim];
    for (hSubAnimInUse = h3dData->hForSubAnimInUseArray.hFirstElementDyn; hSubAnimInUse; hSubAnimInUse = hSubAnimInUse->hNextBrotherDyn)
    {
        if (hSubAnimInUse->p_stTheSubAnim == param0)
        {
            hSubAnimInUse->ulLoop = 1;
            break;
        }
    }
}

void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc);
void fn_vDesInitAllSubEvents(HIE_tdstSuperObject_* _hCharacter, tdstSubAnimInUse_* hSubAnimInUse);

void fn_vRemoveAllSubAnimations(HIE_tdstSuperObject_* _hCharacter)
{
    tdstSubAnimInUse_* hNextSubAnimInUse;
    tdstSubAnimInUse_* hSubAnimInUse;

    for (hSubAnimInUse = _hCharacter->hLinkedObject.p_stCharacter->h_3dData->hForSubAnimInUseArray.hFirstElementDyn,
         hNextSubAnimInUse = hSubAnimInUse ? hSubAnimInUse->hNextBrotherDyn : NULL;
         hSubAnimInUse;
         hSubAnimInUse = hNextSubAnimInUse, hNextSubAnimInUse = hSubAnimInUse ? hSubAnimInUse->hNextBrotherDyn : NULL)
    {
        if (hSubAnimInUse->hNextBrotherDyn)
            hSubAnimInUse->hNextBrotherDyn->hPrevBrotherDyn = hSubAnimInUse->hPrevBrotherDyn;
        if (hSubAnimInUse->hPrevBrotherDyn)
            hSubAnimInUse->hPrevBrotherDyn->hNextBrotherDyn = hSubAnimInUse->hNextBrotherDyn;
        if (hSubAnimInUse->hFatherDyn)
        {
            hSubAnimInUse->hFatherDyn->lNumberOfElementsDyn--;
            if (hSubAnimInUse->hFatherDyn->hFirstElementDyn == hSubAnimInUse)
                hSubAnimInUse->hFatherDyn->hFirstElementDyn = hSubAnimInUse->hNextBrotherDyn;
            if (hSubAnimInUse->hFatherDyn->hLastElementDyn == hSubAnimInUse)
                hSubAnimInUse->hFatherDyn->hLastElementDyn = hSubAnimInUse->hPrevBrotherDyn;
        }
        hSubAnimInUse->hNextBrotherDyn = NULL;
        hSubAnimInUse->hPrevBrotherDyn = NULL;
        hSubAnimInUse->hFatherDyn = NULL;
        fn_vDesInitAllSubEvents(_hCharacter, hSubAnimInUse);
        HMU_fn_vFree((void**)&hSubAnimInUse, 1);
    }
}

#pragma auto_inline on
int fn_bTestSubAnim(HIE_tdstSuperObject_* _hCharacter, unsigned int ulNumberOfSubAnim)
{
    tdst3dData_* h3dData;
    tdstSubAnim_* hSubAnimInFamily;
    tdstSubAnimInUse_* param0;

    h3dData = _hCharacter->hLinkedObject.p_stCharacter->h_3dData;
    hSubAnimInFamily = &h3dData->h_Family->hForSubAnimArray.hFirstElementOpt[ulNumberOfSubAnim];
    for (param0 = h3dData->hForSubAnimInUseArray.hFirstElementDyn; param0; param0 = param0->hNextBrotherDyn)
    {
        if (param0->p_stTheSubAnim == hSubAnimInFamily)
            return 1;
    }
    return 0;
}
#pragma auto_inline reset

int fn_bTestCustomBitSubAnim(HIE_tdstSuperObject_* _hCharacter, unsigned int ulNumberOfSubAnim, unsigned int ulBitNumber)
{
    tdstSubAnim_* hSubAnimInFamily;
    tdstSubAnimInUse_* param0;
    tdstSubAnimInUse_* hNextSubAnimInUse;
    hSubAnimInFamily = &_hCharacter->hLinkedObject.p_stCharacter->h_3dData->h_Family->hForSubAnimArray.hFirstElementOpt[ulNumberOfSubAnim];
    param0 = _hCharacter->hLinkedObject.p_stCharacter->h_3dData->hForSubAnimInUseArray.hFirstElementDyn;
    hNextSubAnimInUse = param0 ? param0->hNextBrotherDyn : NULL;
    if (param0 != NULL) {
        do {
            if (param0->p_stTheSubAnim == hSubAnimInFamily) {
                return (param0->ulCustombit & (1U << ulBitNumber)) != 0;
            }
            param0 = hNextSubAnimInUse;
            hNextSubAnimInUse = param0 ? param0->hNextBrotherDyn : NULL;
        } while (param0 != NULL);
    }
    return 0;
}

void fn_vSetCustombitSubAnim(HIE_tdstSuperObject_* _hCharacter, unsigned int ulNumberOfSubAnim, unsigned int ulBitNumber, int bValue)
{
    unsigned int ulMask;
    tdstSubAnim_* hSubAnimInFamily;
    unsigned int ulClearMask;
    tdstSubAnimInUse_* hSubAnimInUse;
    tdstSubAnimInUse_* hNextSubAnimInUse;
    tdst3dData_* h3dData;
    h3dData = _hCharacter->hLinkedObject.p_stCharacter->h_3dData;
    hSubAnimInFamily = &h3dData->h_Family->hForSubAnimArray.hFirstElementOpt[ulNumberOfSubAnim];
    hSubAnimInUse = h3dData->hForSubAnimInUseArray.hFirstElementDyn;
    hNextSubAnimInUse = hSubAnimInUse ? hSubAnimInUse->hNextBrotherDyn : NULL;
    if (hSubAnimInUse != NULL) {
        ulMask = 1U << ulBitNumber;
        ulClearMask = ~ulMask;
        do {
            if (hSubAnimInUse->p_stTheSubAnim == hSubAnimInFamily) {
                if (!bValue) hSubAnimInUse->ulCustombit &= ulClearMask;
                else hSubAnimInUse->ulCustombit |= ulMask;
            }
            hSubAnimInUse = hNextSubAnimInUse;
            hNextSubAnimInUse = hSubAnimInUse ? hSubAnimInUse->hNextBrotherDyn : NULL;
        } while (hSubAnimInUse != NULL);
    }
}

void fn_vPushAllocModeAccordingToObject(HIE_tdstSuperObject_* _hCharacter);
void GAM_fn_vPopAllocMode(void);

void fn_vRemoveSubAnimation(HIE_tdstSuperObject_* _hCharacter, unsigned int ulNumberOfSubAnim)
{
    tdstSubAnimInUse_* hNextSubAnimInUse;
    tdstSubAnimInUse_* hSubAnimInUse;
    tdstSubAnim_* hSubAnimInFamily;
    tdst3dData_* h3dData;

    h3dData = _hCharacter->hLinkedObject.p_stCharacter->h_3dData;
    if (ulNumberOfSubAnim < (unsigned int)h3dData->h_Family->hForSubAnimArray.lNumberOfElementsOpt)
    {
        fn_vPushAllocModeAccordingToObject(_hCharacter);
        hSubAnimInFamily = &h3dData->h_Family->hForSubAnimArray.hFirstElementOpt[ulNumberOfSubAnim];
        for (hSubAnimInUse = h3dData->hForSubAnimInUseArray.hFirstElementDyn,
             hNextSubAnimInUse = hSubAnimInUse ? hSubAnimInUse->hNextBrotherDyn : NULL;
             hSubAnimInUse;
             hSubAnimInUse = hNextSubAnimInUse, hNextSubAnimInUse = hSubAnimInUse ? hSubAnimInUse->hNextBrotherDyn : NULL)
        {
            if (hSubAnimInUse->p_stTheSubAnim == hSubAnimInFamily)
            {
                if (hSubAnimInUse->hNextBrotherDyn)
                    hSubAnimInUse->hNextBrotherDyn->hPrevBrotherDyn = hSubAnimInUse->hPrevBrotherDyn;
                if (hSubAnimInUse->hPrevBrotherDyn)
                    hSubAnimInUse->hPrevBrotherDyn->hNextBrotherDyn = hSubAnimInUse->hNextBrotherDyn;
                if (hSubAnimInUse->hFatherDyn)
                {
                    hSubAnimInUse->hFatherDyn->lNumberOfElementsDyn--;
                    if (hSubAnimInUse->hFatherDyn->hFirstElementDyn == hSubAnimInUse)
                        hSubAnimInUse->hFatherDyn->hFirstElementDyn = hSubAnimInUse->hNextBrotherDyn;
                    if (hSubAnimInUse->hFatherDyn->hLastElementDyn == hSubAnimInUse)
                        hSubAnimInUse->hFatherDyn->hLastElementDyn = hSubAnimInUse->hPrevBrotherDyn;
                }
                hSubAnimInUse->hNextBrotherDyn = NULL;
                hSubAnimInUse->hPrevBrotherDyn = NULL;
                hSubAnimInUse->hFatherDyn = NULL;
                fn_vDesInitAllSubEvents(_hCharacter, hSubAnimInUse);
                HMU_fn_vFree((void**)&hSubAnimInUse, 1);
                break;
            }
        }
        GAM_fn_vPopAllocMode();
    }
}

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void fn_vInitAllSubEvents(HIE_tdstSuperObject_* _hCharacter, tdstSubAnimInUse_* hSubAnimInUse);

void fn_vAddSubAnimation(HIE_tdstSuperObject_* _hCharacter, unsigned int ulNumberOfSubAnim, unsigned char bStop, unsigned int ulLoop, unsigned char bMerge, float xFrame)
{
    tdst3dData_* h3dData;
    tdstSubAnimInUse_* hNewSubAnimInUse;
    tdstSubAnimInUse_* hSubAnimInUse;
    tdstSubAnim_* hSubAnimInFamily;

    h3dData = _hCharacter->hLinkedObject.p_stCharacter->h_3dData;
    fn_vPushAllocModeAccordingToObject(_hCharacter);
    if (fn_bTestSubAnim(_hCharacter, ulNumberOfSubAnim) == 1)
    {
        hSubAnimInFamily = &h3dData->h_Family->hForSubAnimArray.hFirstElementOpt[ulNumberOfSubAnim];
        for (hSubAnimInUse = h3dData->hForSubAnimInUseArray.hFirstElementDyn; hSubAnimInUse; hSubAnimInUse = hSubAnimInUse->hNextBrotherDyn)
        {
            if (hSubAnimInUse->p_stTheSubAnim == hSubAnimInFamily)
            {
                if (xFrame > (float)(unsigned int)hSubAnimInUse->p_stTheSubAnim->p_stSubAnim->uwNumberOfFrames)
                    xFrame = (float)(hSubAnimInUse->p_stTheSubAnim->p_stSubAnim->uwNumberOfFrames - 1);
                if (xFrame < 0.0f)
                    xFrame = 0.0f;
                hSubAnimInUse->xFrameNumber = xFrame;
                hSubAnimInUse->bStop = bStop;
                hSubAnimInUse->ulLoop = ulLoop;
                hSubAnimInUse->ulStartFrame = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
                fn_vInitAllSubEvents(_hCharacter, hSubAnimInUse);
                break;
            }
        }
    }
    else
    {
        hSubAnimInFamily = &h3dData->h_Family->hForSubAnimArray.hFirstElementOpt[ulNumberOfSubAnim];
        if (hSubAnimInFamily)
        {
            hNewSubAnimInUse = (tdstSubAnimInUse_*)HMU_fn_p_vMalloc(sizeof(tdstSubAnimInUse_), 1);
            hNewSubAnimInUse->p_stTheSubAnim = hSubAnimInFamily;
            hNewSubAnimInUse->ulCustombit = 0;
            if (xFrame > (float)(unsigned int)hNewSubAnimInUse->p_stTheSubAnim->p_stSubAnim->uwNumberOfFrames)
                xFrame = (float)(hNewSubAnimInUse->p_stTheSubAnim->p_stSubAnim->uwNumberOfFrames - 1);
            if (xFrame < 0.0f)
                xFrame = 0.0f;
            hNewSubAnimInUse->xFrameNumber = xFrame;
            hNewSubAnimInUse->bStop = bStop;
            hNewSubAnimInUse->ulLoop = ulLoop;
            hNewSubAnimInUse->bMerge = bMerge;
            hNewSubAnimInUse->ulStartFrame = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
            fn_vInitAllSubEvents(_hCharacter, hNewSubAnimInUse);
            hNewSubAnimInUse->hNextBrotherDyn = NULL;
            hNewSubAnimInUse->hPrevBrotherDyn = NULL;
            hNewSubAnimInUse->hFatherDyn = NULL;
            if (hNewSubAnimInUse->hNextBrotherDyn)
                hNewSubAnimInUse->hNextBrotherDyn->hPrevBrotherDyn = hNewSubAnimInUse->hPrevBrotherDyn;
            if (hNewSubAnimInUse->hPrevBrotherDyn)
                hNewSubAnimInUse->hPrevBrotherDyn->hNextBrotherDyn = hNewSubAnimInUse->hNextBrotherDyn;
            if (hNewSubAnimInUse->hFatherDyn)
            {
                hNewSubAnimInUse->hFatherDyn->lNumberOfElementsDyn--;
                if (hNewSubAnimInUse->hFatherDyn->hFirstElementDyn == hNewSubAnimInUse)
                    hNewSubAnimInUse->hFatherDyn->hFirstElementDyn = hNewSubAnimInUse->hNextBrotherDyn;
                if (hNewSubAnimInUse->hFatherDyn->hLastElementDyn == hNewSubAnimInUse)
                    hNewSubAnimInUse->hFatherDyn->hLastElementDyn = hNewSubAnimInUse->hPrevBrotherDyn;
            }
            hNewSubAnimInUse->hNextBrotherDyn = NULL;
            hNewSubAnimInUse->hPrevBrotherDyn = NULL;
            hNewSubAnimInUse->hFatherDyn = NULL;
            hNewSubAnimInUse->hNextBrotherDyn = NULL;
            hNewSubAnimInUse->hPrevBrotherDyn = h3dData->hForSubAnimInUseArray.hLastElementDyn;
            hNewSubAnimInUse->hFatherDyn = &h3dData->hForSubAnimInUseArray;
            if (h3dData->hForSubAnimInUseArray.hFirstElementDyn == NULL)
                h3dData->hForSubAnimInUseArray.hFirstElementDyn = hNewSubAnimInUse;
            else
                h3dData->hForSubAnimInUseArray.hLastElementDyn->hNextBrotherDyn = hNewSubAnimInUse;
            h3dData->hForSubAnimInUseArray.hLastElementDyn = hNewSubAnimInUse;
            h3dData->hForSubAnimInUseArray.lNumberOfElementsDyn++;
        }
    }
    GAM_fn_vPopAllocMode();
}

void fn_vFreeArrayOfElts3d(tdst3dData_* h_3dData)
{
    tdstElement3d_* p_stElts3d;

    p_stElts3d = h_3dData->stFrame3d.p_stArrayOfElts3d;
    if (p_stElts3d)
    {
        HMU_fn_vFree((void**)&p_stElts3d, 1);
    }
    h_3dData->stFrame3d.p_stArrayOfElts3d = NULL;
    h_3dData->wSizeOfArrayOfElts3d = 0;
}

void fn_vAllocArrayOfElts3d(tdst3dData_* h_3dData, unsigned short _wNumberOfElts3d)
{
    if (h_3dData->wSizeOfArrayOfElts3d < _wNumberOfElts3d) {
        if (h_3dData->stFrame3d.p_stArrayOfElts3d != NULL) {
            HMU_fn_vFree((void**)&h_3dData->stFrame3d.p_stArrayOfElts3d, 1);
        }
        h_3dData->stFrame3d.p_stArrayOfElts3d = (tdstElement3d_*)HMU_fn_p_vMalloc(_wNumberOfElts3d * sizeof(tdstElement3d_), 1);
        h_3dData->wSizeOfArrayOfElts3d = _wNumberOfElts3d;
    }
}

void fn_v3dDataSetUserEventFlag(tdst3dData_* h_3dData, unsigned char _ucFlagIndex, int _bSet, MAT_tdstTransformation_* _p_stPosition)
{
    unsigned char ucMask;

    ucMask = 1 << _ucFlagIndex;
    if (_bSet)
        h_3dData->ucUserEventFlags |= ucMask;
    else
        h_3dData->ucUserEventFlags &= ~ucMask;
    if (_p_stPosition)
        h_3dData->stLastEventGlobalPosition = *_p_stPosition;
}

int fn_b3dDataGetUserEventFlag(tdst3dData_* h_3dData, unsigned char _ucFlagIndex, MAT_tdstTransformation_* _p_stPosition)
{
    unsigned char ucMask;
    ucMask = 1 << _ucFlagIndex;
    if (_p_stPosition != NULL)
    {
        *_p_stPosition = h_3dData->stLastEventGlobalPosition;
    }
    return h_3dData->ucUserEventFlags & ucMask;
}

#pragma auto_inline on
void fn_v3dDataSetLightComputationFrequency(tdst3dData_* h_3dData, unsigned char _ucFrequency)
{
    h_3dData->ucLightComputationFrequency = _ucFrequency;
    if (h_3dData->cLightCounter >= h_3dData->ucLightComputationFrequency)
        h_3dData->cLightCounter = 0;
}
#pragma auto_inline reset

unsigned char fn_b3dDataCanComputeBrain(HIE_tdstSuperObject_* _hCharacter)
{
    if (_hCharacter && _hCharacter->hLinkedObject.p_stCharacter->h_3dData)



        return _hCharacter->hLinkedObject.p_stCharacter->h_3dData->cBrainCounter == 0;

    return 1;
}

void fn_v3dDataUpdateBrainCounter(HIE_tdstSuperObject_* _hCharacter)
{
    tdst3dData_* h_3dData;

    if (_hCharacter)
    {
        h_3dData = _hCharacter->hLinkedObject.p_stCharacter->h_3dData;
        if (h_3dData)
        {
            h_3dData->cBrainCounter++;
            if (h_3dData->cBrainCounter >= h_3dData->ucBrainComputationFrequency)
                h_3dData->cBrainCounter = 0;
        }
    }
}

#pragma auto_inline on
void fn_v3dDataSetBrainComputationFrequency(tdst3dData_* h_3dData, unsigned char _ucFrequency)
{
    h_3dData->ucBrainComputationFrequency = _ucFrequency;
    if (h_3dData->cBrainCounter >= h_3dData->ucBrainComputationFrequency)
        h_3dData->cBrainCounter = 0;
}
#pragma auto_inline reset

void fn_v3dDataSetGlobalAccelerationFactor(float fFactor)
{
    if (fFactor < 1.0f / 10.0f)
        fFactor = 1.0f / 10.0f;
    g_fGlobalAccelerationFactorForAnims = fFactor;
}

extern tdstEngineStructure_ g_stEngineStructure;
signed char fn_scGetSpeedInState(tdstState_* h_State);
void fn_v3dDataFactorFrameRate(tdst3dData_* _h3dData, unsigned int _ulFactor100)
{
    unsigned char ucFrameRate;
    ucFrameRate = fn_scGetSpeedInState(_h3dData->h_CurrentState) * _ulFactor100 / 100L;
    if (ucFrameRate > 1) {
        _h3dData->ulStartTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount -
            (_h3dData->ucFrameRate * (g_stEngineStructure.stEngineTimer.ulCurrentTimerCount - _h3dData->ulStartTime)) / ucFrameRate;
        _h3dData->ucFrameRate = ucFrameRate;
    }
}

extern float g_fGlobalAccelerationFactorForAnims;
void fn_v3dDataSetFrameRate(tdst3dData_* h_3dData, unsigned char ucFrameRate)
{
    unsigned char ucFrameRate2;
    ucFrameRate2 = ucFrameRate * g_fGlobalAccelerationFactorForAnims;
    if (ucFrameRate > 1) {
        h_3dData->ulStartTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount -
            (h_3dData->ucFrameRate * (g_stEngineStructure.stEngineTimer.ulCurrentTimerCount - h_3dData->ulStartTime)) / ucFrameRate2;
    }
    h_3dData->ucFrameRate = ucFrameRate2;
}

void* memcpy(void* dst, const void* src, size_t n);

void fn_v3dDataCopyClone(tdstEngineObject_* _p_stObjectDest, tdstEngineObject_* _p_stObjectSrc)
{
    void* pv_tmp4;
    void* pv_tmp3;
    void* pv_tmp2;
    void* pv_tmp1;
    unsigned short uwSizeOfArrayOfElts3d;

    pv_tmp4 = _p_stObjectDest->h_3dData->hArrayOfChannels;
    pv_tmp3 = _p_stObjectDest->h_3dData->stFrame3d.p_stArrayOfElts3d;
    pv_tmp2 = _p_stObjectDest->h_3dData->hFirstActiveChannel;
    pv_tmp1 = _p_stObjectDest->h_3dData->hMorphChannelList;
    uwSizeOfArrayOfElts3d = _p_stObjectDest->h_3dData->wSizeOfArrayOfElts3d;
    memcpy(_p_stObjectDest->h_3dData, _p_stObjectSrc->h_3dData, sizeof(tdst3dData_));
    _p_stObjectDest->h_3dData->hArrayOfChannels = (tdstAChannel_*)pv_tmp4;
    _p_stObjectDest->h_3dData->stFrame3d.p_stArrayOfElts3d = (tdstElement3d_*)pv_tmp3;
    _p_stObjectDest->h_3dData->hFirstActiveChannel = (tdstAChannel_*)pv_tmp2;
    _p_stObjectDest->h_3dData->hMorphChannelList = (LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn*)pv_tmp1;
    _p_stObjectDest->h_3dData->wSizeOfArrayOfElts3d = uwSizeOfArrayOfElts3d;
}

int SAI_fn_bInsertArrayInTable(void* param0, unsigned int _ulSize, int _eFlags);
#pragma auto_inline on
void fn_v3dDataInitValueSAI(tdst3dData_* h_3dData)
{
    SAI_fn_bInsertArrayInTable(&h_3dData->stGLIObjectMatrix.eType, 4, 50);
    SAI_fn_bInsertArrayInTable(&h_3dData->stGLIObjectMatrix.stTransformMatrix, 64, 50);
    SAI_fn_bInsertArrayInTable(&h_3dData->stGLIObjectMatrix.stScaleVector, 16, 50);
}
#pragma auto_inline reset

unsigned int fn_ul3dDataSizeOf(void)
{
    return 0x1E0;
}

HIE_tdstSuperObject_* fn_h_StandardGameGetSuperObject(tdstStandardGame_* h_StandardGame);
void PLA_fn_vDesInitAllChildOfCharacter(HIE_tdstSuperObject_* p_stSuperObject, tdstEngineObject_* p_stObject);
void fn_vFreeMorphList(LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn** p_hMorphList);

void fn_v3dDataDesinit(tdstEngineObject_* p_stObject, tdeObjectTreeInit_ eObjectInit)
{
    tdstSubAnimInUse_* hNextSubAnim;
    tdstSubAnimInUse_* hThisSubAnim;

    if (p_stObject == NULL)
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (p_stObject->h_3dData == NULL)
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }
    switch (eObjectInit)
    {
    case OTI_ReinitTheMap:
        break;
    case OTI_MapLoaded:
        PLA_fn_vDesInitAllChildOfCharacter(fn_h_StandardGameGetSuperObject(p_stObject->h_StandardGame), p_stObject);
        fn_vFreeMorphList(&p_stObject->h_3dData->hMorphChannelList);
        break;
    case OTI_PlayerDead:
        break;
    }
    for (hThisSubAnim = p_stObject->h_3dData->hForSubAnimInUseArray.hFirstElementDyn,
         hNextSubAnim = hThisSubAnim ? hThisSubAnim->hNextBrotherDyn : NULL;
         hThisSubAnim;
         hThisSubAnim = hNextSubAnim, hNextSubAnim = hThisSubAnim ? hThisSubAnim->hNextBrotherDyn : NULL)
    {
        if (hThisSubAnim->hNextBrotherDyn)
            hThisSubAnim->hNextBrotherDyn->hPrevBrotherDyn = hThisSubAnim->hPrevBrotherDyn;
        if (hThisSubAnim->hPrevBrotherDyn)
            hThisSubAnim->hPrevBrotherDyn->hNextBrotherDyn = hThisSubAnim->hNextBrotherDyn;
        if (hThisSubAnim->hFatherDyn)
        {
            hThisSubAnim->hFatherDyn->lNumberOfElementsDyn--;
            if (hThisSubAnim->hFatherDyn->hFirstElementDyn == hThisSubAnim)
                hThisSubAnim->hFatherDyn->hFirstElementDyn = hThisSubAnim->hNextBrotherDyn;
            if (hThisSubAnim->hFatherDyn->hLastElementDyn == hThisSubAnim)
                hThisSubAnim->hFatherDyn->hLastElementDyn = hThisSubAnim->hPrevBrotherDyn;
        }
        hThisSubAnim->hNextBrotherDyn = NULL;
        hThisSubAnim->hPrevBrotherDyn = NULL;
        hThisSubAnim->hFatherDyn = NULL;
        HMU_fn_vFree((void**)&hThisSubAnim, 1);
    }
}

void fn_vPushAllocModeAccordingToEngineObject(tdstEngineObject_* p_stObject);
void* SAI_fn_p_vGetTableValuePointerOf(void* p_vValue, unsigned short eFlags);
void MAT_fn_vCompose(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hA, MAT_tdstTransformation_* _hB);
void PLA_fn_vCleanMorphTargets(tdstEngineObject_* p_stObject);
int PLA_fn_vInitNewState(HIE_tdstSuperObject_* p_stSuperObject, tdstState_* h_State);
void fn_vTakeControlOfChannel(tdstEngineObject_* _hActor, unsigned short _uwChannel, unsigned char _bControlled);
void fn_vCorrectAllActivationLists(tdstEngineObject_* _p_stObject);
void fn_vInitMorphList(LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn** p_hMorphList);
void* fn_d_hGetInitObjectsTable(tdstObjectsTablesList_* h_ObjectsTablesListElement);
void fn_vReInitObjectTable(tdstObjectsTablesList_* param0);
int RND_fn_lGetLongRandomValue(unsigned int ulChannel, int lMin, int lMax);
void* memset(void* p_vDest, int c, size_t n);

void fn_v3dDataInit(tdstEngineObject_* p_stObject, tdeObjectTreeInit_ eObjectInit)
{
    HIE_tdstSuperObject_* h_SupObject;
    HIE_tdstSuperObject_* hCharacter;
    HIE_tdstSuperObject_* hFather;
    tdstSubAnimInUse_* hNextSubAnim;
    tdstSubAnimInUse_* hThisSubAnim;
    tdstObjectsTablesList_* hObjectsTable;
    tdst3dData_* h_3dData;
    float xFrameRate;

    fn_vPushAllocModeAccordingToEngineObject(p_stObject);
    if (p_stObject == NULL)
    {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (p_stObject->h_3dData == NULL)
    {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }
    if (eObjectInit == OTI_LoadSavedGame || eObjectInit == OTI_PlayerDead)
    {
        p_stObject->h_3dData->stGLIObjectMatrix = *(MAT_tdstTransformation_*)SAI_fn_p_vGetTableValuePointerOf(&p_stObject->h_3dData->stGLIObjectMatrix, 0x32);
        h_SupObject = fn_h_StandardGameGetSuperObject(p_stObject->h_StandardGame);
        if (h_SupObject && h_SupObject->hFatherDyn)
        {
            hFather = h_SupObject->hFatherDyn;
            MAT_fn_vCompose(p_stObject->h_3dData->p_stGLIObjectAbsoluteMatrix, hFather->hGlobalMatrix, &p_stObject->h_3dData->stGLIObjectMatrix);
        }
    }
    hCharacter = fn_h_StandardGameGetSuperObject(p_stObject->h_StandardGame);
    if (hCharacter)
    {
        hCharacter->fTransparenceLevel = (float)p_stObject->h_3dData->ucTransparency;
    }
    fn_vCorrectAllActivationLists(p_stObject);
    switch (eObjectInit)
    {
    case OTI_WhenGameStart:
        break;
    case OTI_MapLoaded:
        fn_v3dDataInitValueSAI(p_stObject->h_3dData);
        p_stObject->h_3dData->hArrayOfChannels = NULL;
        p_stObject->h_3dData->ulNumberOfChannels = p_stObject->h_3dData->h_Family->ulNumberOfChannels;
        /* fall through */
    case OTI_ReinitTheMap:
    case OTI_LoadSavedGame:
    case OTI_PlayerDead:
        p_stObject->h_3dData->bAnimMatrixChanged = 1;
        fn_vTakeControlOfChannel(p_stObject, 0xFFFF, 0);
        p_stObject->h_3dData->ulStartTime = 0;
        p_stObject->h_3dData->ulTimeDelay = 0;
        p_stObject->h_3dData->ulTimePreviousFrame = 0;
        PLA_fn_vDesInitAllChildOfCharacter(fn_h_StandardGameGetSuperObject(p_stObject->h_StandardGame), p_stObject);
        PLA_fn_vCleanMorphTargets(p_stObject);
        memset(&p_stObject->h_3dData->stFrame3d, 0, sizeof(tdstFrame3d_));
        p_stObject->h_3dData->p_stCurrentHieCouples = NULL;
        p_stObject->h_3dData->wCurrentHieNbCouples = 0;
        p_stObject->h_3dData->wSizeOfArrayOfElts3d = 0;
        p_stObject->h_3dData->lLastComputeFrame = 0;
        p_stObject->h_3dData->bStateJustModified = 0;
        xFrameRate = 0.0f;
        p_stObject->h_3dData->ucFrameRate = (unsigned int)(xFrameRate * g_fGlobalAccelerationFactorForAnims);
        p_stObject->h_3dData->h_CurrentState = NULL;
        p_stObject->h_3dData->stFrame3d.p_stArrayOfElts3d = NULL;
        p_stObject->h_3dData->stFrame3d.p_stAnim = NULL;
        p_stObject->h_3dData->lDrawMask = p_stObject->h_3dData->lDrawMaskInit;
        p_stObject->h_3dData->cBrainCounter = -1;
        p_stObject->h_3dData->bSkipCurrentFrame = 0;
        p_stObject->h_3dData->cLightCounter = -1;
        /* fall through */
    case OTI_AlwaysCreated:
        fn_vInitMorphList(&p_stObject->h_3dData->hMorphChannelList);
        hObjectsTable = p_stObject->h_3dData->h_InitialObjectsTable;
        if (hObjectsTable) { if (fn_d_hGetInitObjectsTable(hObjectsTable) != NULL) { fn_vReInitObjectTable(hObjectsTable); } }
        p_stObject->h_3dData->uwBrainMainCounter = (unsigned short)RND_fn_lGetLongRandomValue(0, 1, 17);
        h_3dData = p_stObject->h_3dData; h_3dData->ucBrainComputationFrequency = 1; if (h_3dData->cBrainCounter >= h_3dData->ucBrainComputationFrequency) h_3dData->cBrainCounter = 0;
        break;
    default:
        break;
    }
    h_SupObject = fn_h_StandardGameGetSuperObject(p_stObject->h_StandardGame); if (h_SupObject)
    {
        PLA_fn_vInitNewState(fn_h_StandardGameGetSuperObject(p_stObject->h_StandardGame), p_stObject->h_3dData->h_InitialState);
        fn_h_StandardGameGetSuperObject(p_stObject->h_StandardGame)->lDrawModeMask = p_stObject->h_3dData->lDrawMask;
    }
    for (hThisSubAnim = p_stObject->h_3dData->hForSubAnimInUseArray.hFirstElementDyn,
         hNextSubAnim = hThisSubAnim ? hThisSubAnim->hNextBrotherDyn : NULL;
         hThisSubAnim;
         hThisSubAnim = hNextSubAnim, hNextSubAnim = hThisSubAnim ? hThisSubAnim->hNextBrotherDyn : NULL)
    {
        if (hThisSubAnim->hNextBrotherDyn) hThisSubAnim->hNextBrotherDyn->hPrevBrotherDyn = hThisSubAnim->hPrevBrotherDyn; if (hThisSubAnim->hPrevBrotherDyn) hThisSubAnim->hPrevBrotherDyn->hNextBrotherDyn = hThisSubAnim->hNextBrotherDyn; if (hThisSubAnim->hFatherDyn) { hThisSubAnim->hFatherDyn->lNumberOfElementsDyn--; if (hThisSubAnim->hFatherDyn->hFirstElementDyn == hThisSubAnim) hThisSubAnim->hFatherDyn->hFirstElementDyn = hThisSubAnim->hNextBrotherDyn; if (hThisSubAnim->hFatherDyn->hLastElementDyn == hThisSubAnim) hThisSubAnim->hFatherDyn->hLastElementDyn = hThisSubAnim->hPrevBrotherDyn; } hThisSubAnim->hNextBrotherDyn = NULL; hThisSubAnim->hPrevBrotherDyn = NULL; hThisSubAnim->hFatherDyn = NULL;
        HMU_fn_vFree((void**)&hThisSubAnim, 1);
    }
    GAM_fn_vPopAllocMode();
    p_stObject->h_3dData->h_CurrentCineActor = NULL;
}

int SAI_fn_bRemoveValueFromTable(void* _p_vValue, int _eFlags);
void PLA_fn_vDesInitAllChildOfCharacter(HIE_tdstSuperObject_* p_stSuperObject, tdstEngineObject_* p_stObject);
void fn_vFreeMorphList(LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn** p_hMorphList);

void fn_v3dDataFree(tdstEngineObject_* p_stObject)
{
    tdstSubAnimInUse_* hNextSubAnim;
    tdstSubAnimInUse_* hThisSubAnim;

    if (p_stObject == NULL)
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (p_stObject->h_3dData == NULL)
    {
        Erm_fn_ClearLastError(0);
        Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }
    {
        tdst3dData_* h_3dData = p_stObject->h_3dData;
        SAI_fn_bRemoveValueFromTable(&h_3dData->stGLIObjectMatrix, 0x32);
        SAI_fn_bRemoveValueFromTable(&h_3dData->stGLIObjectMatrix.stTransformMatrix, 0x32);
        SAI_fn_bRemoveValueFromTable(&h_3dData->stGLIObjectMatrix.stScaleVector, 0x32);
    }
    PLA_fn_vDesInitAllChildOfCharacter(NULL, p_stObject);
    fn_vFreeMorphList(&p_stObject->h_3dData->hMorphChannelList);
    
    for (hThisSubAnim = p_stObject->h_3dData->hForSubAnimInUseArray.hFirstElementDyn,
         hNextSubAnim = hThisSubAnim ? hThisSubAnim->hNextBrotherDyn : NULL;
         hThisSubAnim;
         hThisSubAnim = hNextSubAnim, hNextSubAnim = hThisSubAnim ? hThisSubAnim->hNextBrotherDyn : NULL)
    {
        if (hThisSubAnim->hNextBrotherDyn)
            hThisSubAnim->hNextBrotherDyn->hPrevBrotherDyn = hThisSubAnim->hPrevBrotherDyn;
        if (hThisSubAnim->hPrevBrotherDyn)
            hThisSubAnim->hPrevBrotherDyn->hNextBrotherDyn = hThisSubAnim->hNextBrotherDyn;
        if (hThisSubAnim->hFatherDyn)
        {
            hThisSubAnim->hFatherDyn->lNumberOfElementsDyn--;
            if (hThisSubAnim->hFatherDyn->hFirstElementDyn == hThisSubAnim)
                hThisSubAnim->hFatherDyn->hFirstElementDyn = hThisSubAnim->hNextBrotherDyn;
            if (hThisSubAnim->hFatherDyn->hLastElementDyn == hThisSubAnim)
                hThisSubAnim->hFatherDyn->hLastElementDyn = hThisSubAnim->hPrevBrotherDyn;
        }
        hThisSubAnim->hNextBrotherDyn = NULL;
        hThisSubAnim->hPrevBrotherDyn = NULL;
        hThisSubAnim->hFatherDyn = NULL;
        HMU_fn_vFree((void**)&hThisSubAnim, 1);
    }
}

void MAT_fn_vSetIdentity(MAT_tdstTransformation_* p_stMatrix);
int RND_fn_lGetLongRandomValue(unsigned int ulChannel, int lMin, int lMax);

tdst3dData_* fn_h_3dDataRealAlloc(void)
{
    tdst3dData_* h_3dData;

    h_3dData = (tdst3dData_*)HMU_fn_p_vMalloc(sizeof(tdst3dData_), 0);
    MAT_fn_vSetIdentity(&h_3dData->stGLIObjectMatrix);
    h_3dData->ucFlagEndState = 0;
    h_3dData->ucFlagEndOfAnim = 0;
    h_3dData->ucFlagModifState = 0;
    h_3dData->xForcedFrame = 0.0f;
    h_3dData->stFrame3d.p_stArrayOfElts3d = NULL;
    h_3dData->wSizeOfArrayOfElts3d = 0;
    h_3dData->hMorphChannelList = NULL;
    h_3dData->h_StateInLastFrame = NULL;
    h_3dData->h_WantedState = NULL;
    h_3dData->h_CurrentState = NULL;
    h_3dData->h_CurrentObjectsTable = NULL;
    h_3dData->h_InitialObjectsTable = NULL;
    h_3dData->ulStartTime = g_stEngineStructure.stEngineTimer.ulCurrentTimerCount;
    h_3dData->bSkipCurrentFrame = 0;
    h_3dData->ulTimeDelay = 0;
    h_3dData->xLastFrame = -1.0f;
    h_3dData->bStateJustModified = 0;
    h_3dData->uwNbEngineFrameSinceLastMechEvent = 0xFFFF;
    h_3dData->ucFrameRate = 0;
    h_3dData->lDrawMask = -1;
    h_3dData->lDrawMaskInit = -1;
    h_3dData->xShadowScaleX = 1.0f;
    h_3dData->xShadowScaleY = 1.0f;
    h_3dData->xShadowQuality = 2;
    h_3dData->ucIsShadowClosed = 0;
    h_3dData->stLightDirForDynamicShadow.xX = 0.0f;
    h_3dData->stLightDirForDynamicShadow.xY = 0.0f;
    h_3dData->stLightDirForDynamicShadow.xZ = -1.0f;
    h_3dData->ucShadowRecLevel = 5;
    h_3dData->p_stShadowTexture = NULL;
    h_3dData->p_stShadowVisualMaterial = NULL;
    h_3dData->stSHWDeformationVector.xX = 0.0f;
    h_3dData->stSHWDeformationVector.xY = 0.0f;
    h_3dData->stSHWDeformationVector.xZ = 0.0f;
    h_3dData->xSHWHeight = 0.2f;
    fn_v3dDataSetBrainComputationFrequency(h_3dData, 1);
    h_3dData->cBrainCounter = -1;
    h_3dData->uwBrainMainCounter = (unsigned short)RND_fn_lGetLongRandomValue(0, 1, 17);
    fn_v3dDataSetLightComputationFrequency(h_3dData, 1);
    h_3dData->cLightCounter = -1;
    h_3dData->ucTransparency = 255;
    h_3dData->bDiscreetSpeed = 0;
    h_3dData->xDistNoInterpol = 30.0f;
    h_3dData->xDistNoDEnv = 50.0f;
    h_3dData->xDistNoMorphing = 10.0f;
    h_3dData->hForSubAnimInUseArray.hFirstElementDyn = NULL;
    h_3dData->hForSubAnimInUseArray.hLastElementDyn = NULL;
    h_3dData->hForSubAnimInUseArray.lNumberOfElementsDyn = 0;
    h_3dData->NbSkinMaterials = 0;
    h_3dData->d_ucEventActivation = 0;
    return h_3dData;
}
