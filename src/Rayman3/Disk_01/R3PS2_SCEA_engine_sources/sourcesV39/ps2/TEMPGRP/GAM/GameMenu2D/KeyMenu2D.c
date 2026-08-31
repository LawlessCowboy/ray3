/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\KeyMenu2D.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct stMorphData stMorphData;

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct SECT_tdstSector_ {
    /* aggregate */ int stListOfCharacters; /* +0x0 */
    /* aggregate */ int stListOfStaticLights; /* +0xc */
    /* aggregate */ int stListOfDNMLights; /* +0x14 */
    /* aggregate */ int stListOfSectorsInGraphicInteraction; /* +0x20 */
    /* aggregate */ int stListOfSectorsInCollisionInteraction; /* +0x28 */
    /* aggregate */ int stListOfSectorsInActivityInteraction; /* +0x30 */
    /* aggregate */ int stListOfSectorsInSoundInteraction; /* +0x38 */
    /* aggregate */ int stListOfSoundEvent; /* +0x40 */
    /* array */ int stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    int h_PreviousSectorInList; /* +0x70 */
    int h_NextSectorInList; /* +0x74 */
    int lModifierMulIntensity; /* +0x78 */
    int lModifierAddIntensity; /* +0x7c */
    unsigned int glOpaqueDisplayList; /* +0x80 */
    unsigned int glTransparentDisplayList; /* +0x84 */
    char cCurrentActivity; /* +0x88 */
    char cWantedActivity; /* +0x89 */
    unsigned char ucInList; /* +0x8a */
    int xTransition; /* +0x8c */
    _SND_tduRefEvt hTransitionSoundEvent; /* +0x90 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    int hFirstElementDyn; /* +0x0 */
    int hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
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
    _stTimerCount stRealTimeCount; /* +0x60 */
    _stTimerCount stPauseTime; /* +0x70 */
    unsigned int ulTickPerMS; /* +0x80 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

unsigned int g_uiAnotherRandom;
/* aggregate */ int g_stEngineStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\KeyMenu2D.c lines 44–65 */
/* addr: 0x0029ffe0  size: 248 bytes */
void fn_vInitSoundInGameMenu2D(unsigned int uiPause)
{
    int i;
    /* line map: */
    /*   line 44 @ +0x000 */
    /*   line 44 @ +0x000 */
    /*   line 49 @ +0x000 */
    /*   line 49 @ +0x000 */
    /*   line 49 @ +0x000 */
    /*   line 52 @ +0x000 */
    /*   line 59 @ +0x000 */
    /*   line 65 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\KeyMenu2D.c lines 327–370 */
/* addr: 0x002a00e0  size: 616 bytes */
void fn_vEncodeKey(unsigned char* _Key, unsigned int _Score, unsigned int _Cages, unsigned int _Id)
{
    unsigned char Key[256];
    unsigned char Value[256];
    int total;
    int i;
    int iLength;
    unsigned int Cages_Platform_Score;
    /* line map: */
    /*   line 327 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 332 @ +0x000 */
    /*   line 342 @ +0x000 */
    /*   line 342 @ +0x000 */
    /*   line 342 @ +0x000 */
    /*   line 343 @ +0x000 */
    /*   line 343 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\KeyMenu2D.c lines 201–253 */
/* addr: 0x002a0350  size: 468 bytes */
void fn_vEncrypt(unsigned char* _LastKey, int length)
{
    int i;
    unsigned char* p;
    /* line map: */
    /*   line 201 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 207 @ +0x000 */
    /*   line 214 @ +0x000 */
    /*   line 214 @ +0x000 */
    /*   line 214 @ +0x000 */
    /*   line 214 @ +0x000 */
    /*   line 216 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\KeyMenu2D.c lines 166–186 */
/* addr: 0x002a0530  size: 96 bytes */
void fn_vXorEncrypt(unsigned char* _LastKey, int length, int direction)
{
    int last_val;
    int i;
    unsigned char* p;
    unsigned int pval;
    unsigned int val2;
    unsigned int val;
    /* line map: */
    /*   line 166 @ +0x000 */
    /*   line 166 @ +0x000 */
    /*   line 178 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 184 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 186 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\KeyMenu2D.c lines 120–146 */
/* addr: 0x002a0590  size: 308 bytes */
int fn_iAppendKey(unsigned char* _LastKey, int _LastKeyLength, unsigned char* _NewValues, int _NewValuesLength)
{
    unsigned char OldKey[256];
    int NewLength;
    int OffsetInInt;
    /* line map: */
    /*   line 120 @ +0x000 */
    /*   line 129 @ +0x000 */
    /*   line 123 @ +0x000 */
    /*   line 123 @ +0x000 */
    /*   line 131 @ +0x000 */
    /*   line 131 @ +0x000 */
    /*   line 134 @ +0x000 */
    /*   line 137 @ +0x000 */
    /* TODO: decompile from asm/... */
}
