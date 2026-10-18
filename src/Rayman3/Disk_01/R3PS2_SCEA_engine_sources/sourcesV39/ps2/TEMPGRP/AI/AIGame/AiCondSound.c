/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\AiCondSound.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/ENG.h"
#include "r3/GEO.h"
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
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef union anon_1 anon_1;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;
typedef struct anon_0 anon_0;
typedef struct tdstGetSetParam_ tdstGetSetParam_;

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

struct anon_0 {
    tduGetSetParam_ uParam; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_0 uDummy; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};

/* Cross-translation-unit declarations omitted from the recovered source. */
tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso,
                                    tdstNodeInterpret_* p_stTree,
                                    tdstGetSetParam_* p_stValue);
int SND_fn_bGetStereoSound(void);
int SND_fn_bIsTypePlayingSound(int s32_TypeId);

int g_lSoundObjectTypeVoice;
int g_lSoundObjectTypeMusic;

tdstNodeInterpret_* fn_p_stIsEventValid(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    int st_Param[4];
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, (tdstGetSetParam_*)st_Param);
    *p_lValue = st_Param[0] ? 1 : 0;
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stIsTypePlaying(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    tdeCondId_ eCondId;
    int s32_TypeId;
    (void)p_SuperObjPerso;
    s32_TypeId = 0;
    eCondId = *(tdeCondId_*)((char*)p_stTree - 8);
    switch (eCondId) {
    case 0xaf:
        s32_TypeId = g_lSoundObjectTypeMusic;
        break;
    case 0xb0:
        s32_TypeId = g_lSoundObjectTypeVoice;
        break;
    default:
        break;
    }
    *p_lValue = SND_fn_bIsTypePlayingSound(s32_TypeId);
    return p_stTree;
}

tdstNodeInterpret_* fn_p_stIsInStereoMode(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, int* p_lValue)
{
    (void)p_SuperObjPerso;
    *p_lValue = SND_fn_bGetStereoSound();
    return p_stTree;
}
