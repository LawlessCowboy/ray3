/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstState_ tdstState_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstAnim3d_ tdstAnim3d_;

struct tdstState_ {
    int p_stAnim; /* +0x0 */
    /* aggregate */ int hForTransitionArray; /* +0x4 */
    /* aggregate */ int hForProhibitArray; /* +0xc */
    int h_NextState; /* +0x14 */
    int h_LinkedMechanicsIdCard; /* +0x18 */
    int szLevelList; /* +0x1c */
    int szAnimationSectionName; /* +0x20 */
    unsigned char ucRepeatAnimation; /* +0x24 */
    signed char scSpeedAnim; /* +0x25 */
    unsigned char ucTransitionStatusFlag; /* +0x26 */
    unsigned char ucCustomBits; /* +0x27 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
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

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    int d_stAnimEvent; /* +0x4 */
    int d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 50–52 */
/* addr: 0x00268140  size: 76 bytes */
void fn_vFirstInitObjectTypeStructure(void)
{
    /* line map: */
    /*   line 50 @ +0x000 */
    /*   line 52 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 398–398 */
/* addr: 0x00268190  size: 36 bytes */
void fn_h_TmpStateFree(tdstState_* h_State)
{
    /* line map: */
    /*   line 398 @ +0x000 */
    /*   line 398 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 368–393 */
/* addr: 0x002681c0  size: 88 bytes */
void fn_h_TmpStateAlloc(tdstState_* h_State)
{
    /* line map: */
    /*   line 368 @ +0x000 */
    /*   line 368 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 389 @ +0x000 */
    /*   line 393 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 348–361 */
/* addr: 0x00268220  size: 76 bytes */
int fn_hIfExistProhibitedState(tdstState_* h_State, tdstState_* h_TargetState, tdstProhibit_* p_stProhibit)
{
    int max;
    int i;
    /* line map: */
    /*   line 348 @ +0x000 */
    /*   line 352 @ +0x000 */
    /*   line 356 @ +0x000 */
    /*   line 358 @ +0x000 */
    /*   line 361 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\State.c lines 317–323 */
/* addr: 0x00268270  size: 72 bytes */
void fn_hIfExistTransitionalWithTargetState(/* function pointer */ int p_stTransition)
{
    int i;
    /* line map: */
    /*   line 317 @ +0x000 */
    /*   line 321 @ +0x000 */
    /*   line 323 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002682c0  size: 8 bytes */
unsigned char fn_ucGetLinkingTypeInTransition(/* function pointer */ int h_Transition)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002682d0  size: 8 bytes */
void fn_hGetStateToGoInTransition(/* function pointer */ int h_Transition)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002682e0  size: 8 bytes */
unsigned char fn_ucGetStateCustomBits(tdstState_* h_State)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002682f0  size: 8 bytes */
void fn_hGetStateMechanicsIdCard(tdstState_* h_State)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00268300  size: 8 bytes */
void fn_vSetSpeedInState(tdstState_* h_State, signed char scSpeedAnim)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00268310  size: 8 bytes */
signed char fn_scGetSpeedInState(tdstState_* h_State)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00268320  size: 8 bytes */
void fn_vSetRepeatAnimationInState(tdstState_* h_State, unsigned char ucRepeatAnimation)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00268330  size: 8 bytes */
void fn_vSetNextStateInState(tdstState_* h_State, tdstState_* h_NextState)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00268340  size: 8 bytes */
void fn_hGetNextStateInState(tdstState_* h_State)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00268350  size: 8 bytes */
void fn_vSetAnimInState(tdstState_* h_State, tdstAnim3d_* p_stAnim)
{
    /* TODO: decompile from asm/... */
}
