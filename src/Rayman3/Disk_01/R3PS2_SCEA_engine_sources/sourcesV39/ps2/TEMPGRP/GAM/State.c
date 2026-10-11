/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct LST2_tdstAnchorTotdxHandleToTransitionOpt LST2_tdstAnchorTotdxHandleToTransitionOpt;
typedef struct LST2_tdstAnchorTotdxHandleToProhibitOpt LST2_tdstAnchorTotdxHandleToProhibitOpt;
typedef struct tdstState_ tdstState_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstTransition_ tdstTransition_;

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

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstProhibit_ {
    tdstState_* h_ProhibitedState; /* +0x0 */
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

struct tdstTransition_ {
    tdstState_* h_TargetState; /* +0x0 */
    tdstState_* h_StateToGo; /* +0x4 */
    unsigned char ucLinkingType; /* +0x8 */
};

/* g_stObjectTypes is defined in ObjType.c. */
typedef struct tdstObjectTypeElement_ tdstObjectTypeElement_;
typedef struct LST2_tdstAnchorTotdhHandleToObjectTypeElementDyn {
    tdstObjectTypeElement_* hFirstElementDyn; /* +0x0 */
    tdstObjectTypeElement_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
} LST2_tdstAnchorTotdhHandleToObjectTypeElementDyn;
typedef struct tdstObjectType_ {
    LST2_tdstAnchorTotdhHandleToObjectTypeElementDyn hFamilyType; /* +0x0 */
    LST2_tdstAnchorTotdhHandleToObjectTypeElementDyn hModelType; /* +0xc */
    LST2_tdstAnchorTotdhHandleToObjectTypeElementDyn hPersonalType; /* +0x18 */
} tdstObjectType_;
extern tdstObjectType_ g_stObjectTypes;

void fn_vFirstInitObjectTypeStructure(void)
{
    g_stObjectTypes.hFamilyType.hFirstElementDyn = NULL; g_stObjectTypes.hFamilyType.hLastElementDyn = NULL; g_stObjectTypes.hFamilyType.lNumberOfElementsDyn = 0;
    g_stObjectTypes.hModelType.hFirstElementDyn = NULL; g_stObjectTypes.hModelType.hLastElementDyn = NULL; g_stObjectTypes.hModelType.lNumberOfElementsDyn = 0;
    g_stObjectTypes.hPersonalType.hFirstElementDyn = NULL; g_stObjectTypes.hPersonalType.hLastElementDyn = NULL; g_stObjectTypes.hPersonalType.lNumberOfElementsDyn = 0;
}

void fn_h_TmpStateFree(tdstState_* h_State)
{
    extern void HMU_fn_vFree(void*, int);
    HMU_fn_vFree(&h_State, 1);
}

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void* memset(void*, int, unsigned int);

tdstState_* fn_h_TmpStateAlloc(void)
{
    tdstState_* h_State;

    h_State = (tdstState_*)HMU_fn_p_vMalloc(sizeof(tdstState_), 1);
    if (h_State == NULL)
        return NULL;
    memset(h_State, 0, sizeof(tdstState_));
    h_State->ucTransitionStatusFlag = 0;
    h_State->scSpeedAnim = 1;
    return h_State;
}

int fn_hIfExistProhibitedState(tdstState_* h_State, tdstState_* h_TargetState)
{
    tdstProhibit_* p_stProhibit;
    int i;
    int max;

    p_stProhibit = h_State->hForProhibitArray.hFirstElementOpt;
    max = h_State->hForProhibitArray.lNumberOfElementsOpt;
    for (i = 0; (p_stProhibit != NULL) && (i < max); p_stProhibit++, i++)
    {
        if (p_stProhibit->h_ProhibitedState == h_TargetState)
            return 1;
    }
    return 0;
}

tdstTransition_* fn_hIfExistTransitionalWithTargetState(tdstState_* h_State, tdstState_* h_TargetState)
{
    tdstTransition_* p_stTransition;
    int i;

    p_stTransition = h_State->hForTransitionArray.hFirstElementOpt;
    i = 0;
    while (i < h_State->hForTransitionArray.lNumberOfElementsOpt)
    {
        if (p_stTransition->h_TargetState == h_TargetState)
            return p_stTransition;
        i++;
        p_stTransition++;
    }
    return NULL;
}

unsigned char fn_ucGetLinkingTypeInTransition(tdstTransition_* h_Transition)
{
    return h_Transition->ucLinkingType;
}

tdstState_* fn_hGetStateToGoInTransition(tdstTransition_* h_Transition)
{
    return h_Transition->h_StateToGo;
}

unsigned char fn_ucGetStateCustomBits(tdstState_* h_State)
{
    return h_State->ucCustomBits;
}

int fn_hGetStateMechanicsIdCard(tdstState_* h_State)
{
    return h_State->h_LinkedMechanicsIdCard;
}

void fn_vSetSpeedInState(tdstState_* h_State, signed char scSpeedAnim)
{
    h_State->scSpeedAnim = scSpeedAnim;
}

signed char fn_scGetSpeedInState(tdstState_* h_State)
{
    return h_State->scSpeedAnim;
}

void fn_vSetRepeatAnimationInState(tdstState_* h_State, unsigned char ucRepeatAnimation)
{
    h_State->ucRepeatAnimation = ucRepeatAnimation;
}

void fn_vSetNextStateInState(tdstState_* h_State, tdstState_* h_NextState)
{
    h_State->h_NextState = h_NextState;
}

tdstState_* fn_hGetNextStateInState(tdstState_* h_State)
{
    return h_State->h_NextState;
}

void fn_vSetAnimInState(tdstState_* h_State, tdstAnim3d_* p_stAnim)
{
    h_State->p_stAnim = p_stAnim;
}
