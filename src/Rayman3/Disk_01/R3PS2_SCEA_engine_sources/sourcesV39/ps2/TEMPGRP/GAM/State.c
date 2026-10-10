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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 49–52 */
/* addr: 0x00268140  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 49
 *   +0x0018 -> line 50
 *   +0x0030 -> line 51
 *   +0x0044 -> line 52
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 397–399 */
/* addr: 0x00268190  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 397
 *   +0x0004 -> line 398
 *   +0x0008 -> line 397
 *   +0x0010 -> line 398
 *   +0x0018 -> line 399
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_h_TmpStateFree(tdstState_* h_State)
{
    extern void HMU_fn_vFree(void*, int);
    HMU_fn_vFree(&h_State, 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 365–394 */
/* addr: 0x002681c0  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 365
 *   +0x0004 -> line 368
 *   +0x0008 -> line 365
 *   +0x000c -> line 368
 *   +0x001c -> line 369
 *   +0x0024 -> line 370
 *   +0x002c -> line 386
 *   +0x0038 -> line 389
 *   +0x003c -> line 390
 *   +0x0044 -> line 393
 *   +0x0048 -> line 394
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 347–361 */
/* addr: 0x00268220  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 347
 *   +0x0004 -> line 348
 *   +0x0008 -> line 350
 *   +0x0010 -> line 352
 *   +0x001c -> line 354
 *   +0x0024 -> line 356
 *   +0x0028 -> line 357
 *   +0x002c -> line 358
 *   +0x0040 -> line 360
 *   +0x0044 -> line 361
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 315–323 */
/* addr: 0x00268270  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 315
 *   +0x0010 -> line 317
 *   +0x001c -> line 319
 *   +0x0024 -> line 321
 *   +0x003c -> line 322
 *   +0x0040 -> line 323
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 299–299 */
/* addr: 0x002682c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 299
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucGetLinkingTypeInTransition(tdstTransition_* h_Transition)
{
    return h_Transition->ucLinkingType;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 285–285 */
/* addr: 0x002682d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 285
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstState_* fn_hGetStateToGoInTransition(tdstTransition_* h_Transition)
{
    return h_Transition->h_StateToGo;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 230–230 */
/* addr: 0x002682e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 230
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucGetStateCustomBits(tdstState_* h_State)
{
    return h_State->ucCustomBits;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 217–217 */
/* addr: 0x002682f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 217
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_hGetStateMechanicsIdCard(tdstState_* h_State)
{
    return h_State->h_LinkedMechanicsIdCard;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 212–212 */
/* addr: 0x00268300  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 212
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vSetSpeedInState(tdstState_* h_State, signed char scSpeedAnim)
{
    h_State->scSpeedAnim = scSpeedAnim;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 208–208 */
/* addr: 0x00268310  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 208
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
signed char fn_scGetSpeedInState(tdstState_* h_State)
{
    return h_State->scSpeedAnim;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 198–198 */
/* addr: 0x00268320  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 198
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vSetRepeatAnimationInState(tdstState_* h_State, unsigned char ucRepeatAnimation)
{
    h_State->ucRepeatAnimation = ucRepeatAnimation;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 185–185 */
/* addr: 0x00268330  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 185
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vSetNextStateInState(tdstState_* h_State, tdstState_* h_NextState)
{
    h_State->h_NextState = h_NextState;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 181–181 */
/* addr: 0x00268340  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 181
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstState_* fn_hGetNextStateInState(tdstState_* h_State)
{
    return h_State->h_NextState;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 176–176 */
/* addr: 0x00268350  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 176
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vSetAnimInState(tdstState_* h_State, tdstAnim3d_* p_stAnim)
{
    h_State->p_stAnim = p_stAnim;
}
