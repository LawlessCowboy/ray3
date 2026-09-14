/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndpostponedplay.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct sTreeNode sTreeNode;
typedef struct spair spair;
typedef struct less less;
typedef struct CSndVarType CSndVarType;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct PostponedPlay PostponedPlay;
typedef struct CStringIsLess CStringIsLess;
typedef struct stree stree;
typedef struct smap smap;
typedef struct _RollOffParam _RollOffParam;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct CResObj CResObj;
typedef struct CUUID CUUID;
typedef struct CIdObj CIdObj;
typedef struct sstring sstring;
typedef struct CResData CResData;
typedef struct CResObjState CResObjState;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct CEventResData CEventResData;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct C2DParams C2DParams;
typedef struct _stVector _stVector;
typedef struct CRolloffParam CRolloffParam;
typedef struct C3DParam C3DParam;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CActorResObj CActorResObj;
typedef struct CRefIdObj CRefIdObj;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct streebase streebase;
typedef struct TTypedVar TTypedVar;
typedef struct CLookupElement CLookupElement;
typedef struct CCmdInterface CCmdInterface;
typedef struct CResType CResType;
typedef struct sset sset;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct sTreeLink sTreeLink;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CProgramContext CProgramContext;
typedef struct CVar CVar;
typedef struct CActorModifiers CActorModifiers;

/* Empty allocator support object used by the recovered STL tree. */
struct sallocator {};

typedef enum tdeType {
    EBASE = 0,
    EARRAY = 1,
    ESTRUCT = 2,
    EOBJECT = 3,
    ERESID = 4,
    EENUM = 5,
} tdeType;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

typedef enum tdeEventType {
    EPLAYEVENT = 0,
    ESTOPEVENT = 1,
    EPITCHEVENT = 2,
    EVOLUMEEVENT = 3,
    EEXTRAEVENT = 4,
    ESTOPALLEVENT = 5,
    ESTOPANDGO = 6,
} tdeEventType;

struct less {
    /* C++ base binary_function at +0x0. */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct PostponedPlay {
    PostponedPlay* m_pNext; /* +0x0 */
    PostponedPlay* m_pPrev; /* +0x4 */
    CEventResData* m_pData; /* +0x8 */
    int m_s32Handle; /* +0xc */
    int m_s32LastCmd; /* +0x10 */
    void (*m_pProc)(int); /* +0x14 */
    CExtraEventActor* m_pEActor; /* +0x18 */
    unsigned int m_u32EngineContext; /* +0x1c */
    void ms_uiMaxPlay(sTreeNode* _pNode, sTreeNode* _pNode2, spair* _roValue);
    unsigned char fs_bIsPending(CExtraEventActor* pEActor);
    void fs_vEmpty(void);
    unsigned char fs_bExecute(int s32_CmdId, CUUID* roId, CExtraEventActor* pEActor);
    unsigned char fs_bIsSoundPlaying(int s32_Handle, CExtraEventActor* pEActor);
    unsigned char fs_bIsSoundPlaying(CResData* po_ResData, CExtraEventActor* pEActor);
    void fs_vSynchro(void);
    unsigned char fs_bPlay(CEventResData* ro_EventResData, int s32_Handle, void (*pfn_Proc)(int), CExtraEventActor* pEActor);
};

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    CStringIsLess key_compare; /* +0xd */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct CResObjParams {
    /* C++ base CInterface at +0x0. */
    CResObjParams* m_poNext; /* +0x4 */
    CResObjParams* m_poPrevious; /* +0x8 */
    unsigned int m_uiNbRefs; /* +0xc */
    int m_s32Handle; /* +0x10 */
    CResData* m_poResData; /* +0x14 */
    void (*m_pfn_Proc)(int); /* +0x18 */
};

struct CExtraEventActor {
    CExtraEventActor* m_poNext; /* +0x0 */
    CExtraEventActor* m_poPrevious; /* +0x4 */
    TTypedVar* m_poIntSwitchVar; /* +0x8 */
    CActorResObj* mpoActorObj; /* +0xc */
    TTypedVar* mpoVolumeModifier; /* +0x10 */
    TTypedVar* mpoPitchModifier; /* +0x14 */
    CLinkTypeActor* mpoActorType; /* +0x18 */
    int ms32ACPObjectId; /* +0x1c */
    int ms32ACPChannelId; /* +0x20 */
    tdeEventType meExtraCoeff; /* +0x24 */
    float mfCoeffA; /* +0x28 */
    float mfCoeffB; /* +0x2c */
    float mfCoeffC; /* +0x30 */
    float mfCoeffD; /* +0x34 */
    int ms32RefreshChannel; /* +0x38 */
    _RollOffParam mstRollOff; /* +0x3c */
    unsigned char mbWaitForKill; /* +0x48 */
    unsigned char mbAllSoundPaused; /* +0x49 */
    CResObjParams m_oResObjParams; /* +0x4c */
};

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x8..0xb */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext; /* +0x74 */
    CLinkActor* m_poPrevious; /* +0x78 */
};

struct CResObj {
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct CResObjState {
    CResObj* m_poResObj; /* +0x0 */
    unsigned int m_uiInstance; /* +0x4 */
    unsigned char m_bPlayable; /* +0x8 */
    unsigned char m_b2DRes; /* +0x9 */
    unsigned char m_b3DRes; /* +0xa */
    unsigned char m_bHasPosition; /* +0xb */
    unsigned char m_bAcceptsSet2DParamsCmd; /* +0xc */
    unsigned char m_bOwnerIsAProgram; /* +0xd */
    unsigned char m_bResident; /* +0xe */
    int m_pvUserData; /* +0x10 */
    int m_iUserDataSize; /* +0x14 */
    CResObjState* m_poNext; /* +0x18 */
    CResObjState* m_poPrevious; /* +0x1c */
    CResObj* m_poOwner; /* +0x20 */
    unsigned int m_uiLockCount; /* +0x24 */
};

struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
};

struct CEventResData {
    /* C++ base CResData at +0x0. */
    float m_fCoeffA; /* +0x18 */
    float m_fCoeffB; /* +0x1c */
    float m_fCoeffC; /* +0x20 */
    float m_fCoeffD; /* +0x24 */
    tdeEventType m_eEventType; /* +0x28 */
    CIdObjPtr m_pTargetRes; /* +0x2c */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CActorProgramContext {
    /* C++ base CProgramContext at +0x0. */
    /* C++ base CVarAccess at +0xc. */
    CResObjState m_oObjStates; /* +0x10 */
    CActorResObj* m_pActor; /* +0x38 */
    smap m_oVariables; /* +0x3c */
    CCritSect m_oMutex; /* +0x4c */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct CPitchActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct CVolumeActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct CActorResObj {
    /* C++ base CResObj at +0x0. */
    C3DParam m_o3DParams; /* +0xc */
    CPitchActorModifier m_oPitchModifier; /* +0x3c */
    CRolloffParam m_oRolloff; /* +0x60 */
    C2DParams m_o2DParams; /* +0x6c */
    unsigned char m_b3DParamsChanged; /* +0x7c */
    unsigned char m_b3DRes; /* +0x7d */
    sstring m_sName; /* +0x80 */
    unsigned char m_b2DParamsComputed; /* +0x84 */
    CVolumeActorModifier m_oVolModifier; /* +0x88 */
    CActorProgramContext m_oProgramContext; /* +0xac */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct _tdstAllRetObjectSound {
    int (*X)(int); /* +0x0 */
    int (*Y)(int); /* +0x4 */
    int (*Z)(int); /* +0x8 */
    int (*VX)(int); /* +0xc */
    int (*VY)(int); /* +0x10 */
    int (*VZ)(int); /* +0x14 */
    unsigned char (*REVERB)(int); /* +0x18 */
    void (*ExtraCoef)(int, _SND_tduRefEvt, int*, int*, int*); /* +0x1c */
    int (*Switch)(int, int); /* +0x20 */
    int (*MicroLink)(int, int); /* +0x24 */
    int (*pfnPosition)(int, int, _stVector*); /* +0x28 */
    int (*pfnVelocity)(int, int, _stVector*); /* +0x2c */
    int (*pfnMicroLink)(int, int, int); /* +0x30 */
    int (*pfnRollOff)(int, int, _RollOffParam*); /* +0x34 */
    int (*pfnInfo)(int, int, char*, int); /* +0x38 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    TTypedVar* mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    _tdstAllRetObjectSound mstIActor; /* +0x88 */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0. */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndpostponedplay.cpp lines 452–478 */
/* addr: 0x001d0210  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 452
 *   +0x0030 -> line 453
 *   +0x0040 -> line 454
 *   +0x0044 -> line 453
 *   +0x004c -> line 454
 *   +0x0050 -> line 455
 *   +0x0054 -> line 454
 *   +0x0058 -> line 455
 *   +0x0070 -> line 456
 *   +0x007c -> line 457
 *   +0x00a8 -> line 459
 *   +0x00ac -> line 460
 *   +0x00b8 -> line 462
 *   +0x00bc -> line 463
 *   +0x00c0 -> line 464
 *   +0x00c8 -> line 465
 *   +0x00d4 -> line 467
 *   +0x00dc -> line 470
 *   +0x00e0 -> line 471
 *   +0x00f4 -> line 472
 *   +0x00f8 -> line 476
 *   +0x010c -> line 477
 *   +0x0114 -> line 478
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PostponedPlay::ms_uiMaxPlay(sTreeNode* _pNode, sTreeNode* _pNode2, spair* _roValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndpostponedplay.cpp lines 169–175 */
/* addr: 0x001d0350  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 169
 *   +0x0008 -> line 171
 *   +0x0010 -> line 172
 *   +0x0030 -> line 175
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PostponedPlay::fs_bIsPending(CExtraEventActor* pEActor)
{
    PostponedPlay* e;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndpostponedplay.cpp lines 151–161 */
/* addr: 0x001d0390  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 151
 *   +0x0008 -> line 154
 *   +0x000c -> line 156
 *   +0x0010 -> line 154
 *   +0x0014 -> line 156
 *   +0x0018 -> line 157
 *   +0x001c -> line 158
 *   +0x002c -> line 161
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PostponedPlay::fs_vEmpty(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndpostponedplay.cpp lines 127–142 */
/* addr: 0x001d03d0  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 127
 *   +0x0028 -> line 129
 *   +0x002c -> line 131
 *   +0x0034 -> line 133
 *   +0x0090 -> line 136
 *   +0x0094 -> line 135
 *   +0x0098 -> line 138
 *   +0x009c -> line 139
 *   +0x00a8 -> line 141
 *   +0x00ac -> line 142
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PostponedPlay::fs_bExecute(int s32_CmdId, CUUID* roId, CExtraEventActor* pEActor)
{
    PostponedPlay* e;
    unsigned char bRet;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndpostponedplay.cpp lines 114–122 */
/* addr: 0x001d04a0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 114
 *   +0x0004 -> line 115
 *   +0x000c -> line 117
 *   +0x002c -> line 118
 *   +0x0030 -> line 119
 *   +0x0038 -> line 121
 *   +0x003c -> line 122
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PostponedPlay::fs_bIsSoundPlaying(int s32_Handle, CExtraEventActor* pEActor)
{
    PostponedPlay* e;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndpostponedplay.cpp lines 98–106 */
/* addr: 0x001d04f0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 98
 *   +0x0004 -> line 99
 *   +0x000c -> line 101
 *   +0x002c -> line 102
 *   +0x0030 -> line 103
 *   +0x0038 -> line 105
 *   +0x003c -> line 106
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PostponedPlay::fs_bIsSoundPlaying(CResData* po_ResData, CExtraEventActor* pEActor)
{
    PostponedPlay* e;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndpostponedplay.cpp lines 65–92 */
/* addr: 0x001d0540  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 65
 *   +0x000c -> line 69
 *   +0x0014 -> line 71
 *   +0x0050 -> line 74
 *   +0x0054 -> line 75
 *   +0x005c -> line 77
 *   +0x0070 -> line 80
 *   +0x0074 -> line 83
 *   +0x0084 -> line 85
 *   +0x00a0 -> line 88
 *   +0x00ac -> line 89
 *   +0x00d0 -> line 91
 *   +0x00d4 -> line 92
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PostponedPlay::fs_vSynchro(void)
{
    unsigned char g_bUseMarkersForNextRequestBak;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndpostponedplay.cpp lines 43–60 */
/* addr: 0x001d0630  size: 304 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 43
 *   +0x0030 -> line 47
 *   +0x0044 -> line 49
 *   +0x0058 -> line 50
 *   +0x0060 -> line 54
 *   +0x00fc -> line 57
 *   +0x0100 -> line 59
 *   +0x0104 -> line 57
 *   +0x010c -> line 60
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PostponedPlay::fs_bPlay(CEventResData* ro_EventResData, int s32_Handle, void (*pfn_Proc)(int), CExtraEventActor* pEActor)
{
    unsigned char bRet;
    /* TODO: decompile from asm/... */
}
