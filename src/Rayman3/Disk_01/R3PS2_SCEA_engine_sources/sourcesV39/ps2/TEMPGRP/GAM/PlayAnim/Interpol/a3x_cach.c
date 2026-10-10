/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_cach.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstA3dGENERAL_ tdstA3dGENERAL_;

struct tdstA3dGENERAL_ {
    unsigned short uwAnimationSpeed; /* +0x0 */
    unsigned short uwNumberOfVectors; /* +0x2 */
    unsigned short uwNumberOfQuaternions; /* +0x4 */
    unsigned short uwNumberOfHierarchies; /* +0x6 */
    unsigned short uwNumberOfNTTO; /* +0x8 */
    unsigned short uwNumberOfSavedFrames; /* +0xa */
    unsigned short uwNumberOfDeformations; /* +0xc */
    unsigned short uwNumberOfChannels; /* +0xe */
    unsigned short uwNumberOfFrames; /* +0x10 */
    unsigned int ulNumberOfKeyFrames; /* +0x14 */
    unsigned short uwNumberOfEvents; /* +0x18 */
    unsigned short uwNumOfFirstPosition; /* +0x1a */
    unsigned short uwStartFrame; /* +0x1c */
    unsigned short uwEndFrame; /* +0x1e */
    unsigned short uwFakeAnimSpeed; /* +0x20 */
    unsigned short uwFlags; /* +0x22 */
    unsigned short uwNumOfAnimationTranslationOffset; /* +0x24 */
    unsigned short uwNumOfAnimationRotationOffset; /* +0x26 */
    unsigned short uwNumberOfMorphData; /* +0x28 */
    unsigned short uwNumOfFirstVector; /* +0x2a */
    unsigned short uwNumOfFirstQuaternion; /* +0x2c */
    unsigned short uwNumOfFirstHierarchy; /* +0x2e */
    unsigned short uwNumOfFirstNTTO; /* +0x30 */
    unsigned short uwNumOfFirstDeformation; /* +0x32 */
    unsigned short uwNumOfFirstOnlyFrame; /* +0x34 */
    unsigned short uwNumOfFirstChannel; /* +0x36 */
    unsigned short uwNumOfFirstEvent; /* +0x38 */
    unsigned short uwNumOfFirstMorphData; /* +0x3a */
};

int p_uwLastA3dGENERAL;
int gp_stA3dGENERAL;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_cach.c lines 76–145 */
/* addr: 0x0027bc70  size: 528 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 76
 *   +0x0004 -> line 91
 *   +0x0008 -> line 76
 *   +0x0020 -> line 86
 *   +0x0024 -> line 76
 *   +0x0028 -> line 85
 *   +0x002c -> line 76
 *   +0x0034 -> line 91
 *   +0x0070 -> line 93
 *   +0x0078 -> line 94
 *   +0x0080 -> line 95
 *   +0x0084 -> line 101
 *   +0x008c -> line 102
 *   +0x0090 -> line 103
 *   +0x0098 -> line 104
 *   +0x00a0 -> line 106
 *   +0x00a4 -> line 104
 *   +0x00a8 -> line 106
 *   +0x00b8 -> line 109
 *   +0x00c0 -> line 111
 *   +0x00cc -> line 114
 *   +0x00d4 -> line 116
 *   +0x0118 -> line 119
 *   +0x0120 -> line 122
 *   +0x0138 -> line 123
 *   +0x0140 -> line 125
 *   +0x014c -> line 129
 *   +0x0154 -> line 130
 *   +0x018c -> line 131
 *   +0x0190 -> line 133
 *   +0x0198 -> line 135
 *   +0x01ac -> line 136
 *   +0x01bc -> line 138
 *   +0x01d0 -> line 139
 *   +0x01e0 -> line 141
 *   +0x01e8 -> line 145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstEventInTable_ tdstEventInTable_;

struct tdstEngineObject_ {
    tdst3dData_* h_3dData; /* +0x0 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    union {
        tdstEngineObject_* p_stCharacter; /* +0x0 */
        int p_Void; /* +0x0 */
    } hLinkedObject; /* +0x4 */
};

struct tdst3dData_ {
    struct tdstState_* h_InitialState; /* +0x0 */
    struct tdstState_* h_CurrentState; /* +0x4 */
    struct tdstState_* h_FirstStateOfAction; /* +0x8 */
    struct tdstObjectsTablesList_* h_InitialObjectsTable; /* +0xc */
    struct tdstObjectsTablesList_* h_CurrentObjectsTable; /* +0x10 */
    struct tdstFamilyList_* h_Family; /* +0x14 */
    unsigned char _padding_18[0x70]; /* +0x18..0x87 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    unsigned char* d_ucEventActivation; /* +0x8c */
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

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    tdstEvent_* d_stAnimEvent; /* +0x4 */
    struct stMorphData* d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

int fn_bIsInFix(tdstEngineObject_* p_stObject);
unsigned char GAM_fn_bIsEngineInFixMode(void);
unsigned char HMU_fn_ucGetActualNormalMemoryBlockUsed(void);
unsigned char HMU_fn_ucGetLevelNormalMemoryBlock(void);
void HMU_fn_vSetMemoriesInFixMode(void);
void HMU_fn_vSetMemoriesInLevelMode(void);
void HMU_fn_vSetMemoriesInTransition1Mode(void);
void HMU_fn_vSetMemoriesInTransition2Mode(void);
int fn_lGetTransitionBloc(void);
void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
tdstAnim3d_* fn_p_stGetAnimInState(struct tdstState_* h_State);
/* Retail passes three arguments here although the a3x_intn.c body reads only the first. */
tdstEvent_* fn_p_GetEventsAddress(tdstAnim3d_* _p_stAnim3d, int lFrame, struct tdstObjectsTablesList_* h_ObjectsTable);
signed char fn_scGetSpeedInState(struct tdstState_* h_State);

void fn_vInitAllEvents(HIE_tdstSuperObject_* p_stSuperObject, unsigned short uwFirstFrame)
{
    unsigned char ucMemoryType;
    unsigned char bBTLevel;
    unsigned char i;
    tdstEvent_* p_stEvent;
    tdstAnim3d_* p_stAnim;
    tdst3dData_* h_3dData;

    ucMemoryType = 0;
    bBTLevel = 0;
    if (fn_bIsInFix((p_stSuperObject->ulTypeOfLinkedObject != 2) ? NULL : p_stSuperObject->hLinkedObject.p_stCharacter) && !GAM_fn_bIsEngineInFixMode())
    {
        ucMemoryType = HMU_fn_ucGetActualNormalMemoryBlockUsed();
        HMU_fn_vSetMemoriesInFixMode();
        bBTLevel = 1;
    }

    h_3dData = p_stSuperObject->hLinkedObject.p_stCharacter->h_3dData;
    if (h_3dData->h_CurrentState)
    {
        p_stAnim = fn_p_stGetAnimInState(h_3dData->h_CurrentState);
        p_stEvent = fn_p_GetEventsAddress(p_stAnim, uwFirstFrame, h_3dData->h_CurrentObjectsTable);
        if (p_stEvent)
        {
            h_3dData->d_ucEventActivation = (unsigned char*)HMU_fn_p_vMalloc(p_stAnim->ucNumberOfEvents, 1);
            if (uwFirstFrame)
            {
                for (i = 0; i < p_stAnim->ucNumberOfEvents && p_stEvent[i].uwFrameNumber < uwFirstFrame; i++)
                    ;
                h_3dData->ucNextEvent = i;
            }
            else if (fn_scGetSpeedInState(h_3dData->h_CurrentState) > 0)
            {
                h_3dData->ucNextEvent = 0;
            }
            else
            {
                h_3dData->ucNextEvent = p_stAnim->ucNumberOfEvents - 1;
            }
            for (i = 0; i < p_stAnim->ucNumberOfEvents; i++)
            {
                h_3dData->d_ucEventActivation[i] = p_stEvent->p_stfEventInTBL->ucFirstCall;
                p_stEvent++;
            }
        }
        if (bBTLevel)
        {
            if (ucMemoryType == HMU_fn_ucGetLevelNormalMemoryBlock())
                HMU_fn_vSetMemoriesInLevelMode();
            else if (fn_lGetTransitionBloc() != 1)
                HMU_fn_vSetMemoriesInTransition1Mode();
            else
                HMU_fn_vSetMemoriesInTransition2Mode();
        }
    }
}
