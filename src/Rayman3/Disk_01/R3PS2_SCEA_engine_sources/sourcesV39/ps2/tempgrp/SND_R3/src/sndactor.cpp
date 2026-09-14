/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef int sallocator;

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct _stVector _stVector;
typedef struct less less;
typedef struct stree stree;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct CRolloffParam CRolloffParam;
typedef struct C2DParams C2DParams;
typedef struct sstring sstring;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CResObjState CResObjState;
typedef struct smap smap;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct CCmdInterface CCmdInterface;
typedef struct TTypedVar TTypedVar;
typedef struct iterator_base iterator_base;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct sTreeLink sTreeLink;
typedef struct _RollOffParam _RollOffParam;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct sset sset;
typedef struct CActorResData CActorResData;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CResType CResType;
typedef struct CSndVarType CSndVarType;
typedef struct CResObj CResObj;
typedef struct CResData CResData;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct CStringIsLess CStringIsLess;
typedef struct streebase streebase;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CRefIdObj CRefIdObj;
typedef struct CUUID CUUID;
typedef struct CIdObj CIdObj;
typedef struct CProgramContext CProgramContext;
typedef struct iterator iterator;
typedef struct CVar CVar;
typedef struct CActorModifiers CActorModifiers;

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

typedef enum tdeType {
    EBASE = 0,
    EARRAY = 1,
    ESTRUCT = 2,
    EOBJECT = 3,
    ERESID = 4,
    EENUM = 5,
} tdeType;

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct less {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    less key_compare; /* +0xd */
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

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct CPitchActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CVolumeActorModifier {
    /* C++ base CActorModifiers at +0x0. */
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

struct smap {
    stree _Tr; /* +0x0 */
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

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct CLinkTypeActorCont {
    /* C++ base smap at +0x0. */
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
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

struct sset {
    stree _Tr; /* +0x0 */
};

struct CActorResData {
    /* C++ base CResData at +0x0. */
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    CVarAccess* m_poGlobalVarAccess; /* +0x48 */
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

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct CResObj {
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct spair {
    int first; /* +0x0 */
    CLinkTypeActor* second; /* +0x4 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    spair m_oValue; /* +0x10 */
};

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    TTypedVar* mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    _tdstAllRetObjectSound mstIActor; /* +0x88 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
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

int g_pauseCnt;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp lines 48–54 */
/* addr: 0x001c99e0  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 48
 *   +0x001c -> line 53
 *   +0x0050 -> line 54
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void _NilElmt__Q24usnd9streebase(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp lines 148–175 */
/* addr: 0x001c9a50  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 148
 *   +0x0008 -> line 150
 *   +0x0010 -> line 152
 *   +0x0018 -> line 154
 *   +0x0044 -> line 157
 *   +0x0074 -> line 160
 *   +0x007c -> line 164
 *   +0x0084 -> line 165
 *   +0x008c -> line 166
 *   +0x00a8 -> line 168
 *   +0x00b8 -> line 169
 *   +0x00c0 -> line 172
 *   +0x00c8 -> line 174
 *   +0x00cc -> line 175
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vKillAllObjectSound(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp lines 131–145 */
/* addr: 0x001c9b30  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 131
 *   +0x0008 -> line 132
 *   +0x0014 -> line 133
 *   +0x0020 -> line 136
 *   +0x0038 -> line 145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vResumeSound(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp lines 115–128 */
/* addr: 0x001c9b80  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 115
 *   +0x0008 -> line 116
 *   +0x0014 -> line 118
 *   +0x002c -> line 127
 *   +0x0038 -> line 128
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vPauseSound(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp lines 106–108 */
/* addr: 0x001c9bd0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 106
 *   +0x000c -> line 107
 *   +0x0024 -> line 108
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vResumeAllObjectTypeSound(int s32_TypeId)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp lines 102–104 */
/* addr: 0x001c9c10  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 102
 *   +0x000c -> line 103
 *   +0x0024 -> line 104
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vPauseAllObjectTypeSound(int s32_TypeId)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp lines 95–100 */
/* addr: 0x001c9c50  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 95
 *   +0x000c -> line 98
 *   +0x0024 -> line 99
 *   +0x003c -> line 100
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vKillAllObjectTypeSound(int s32_TypeId)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp lines 89–93 */
/* addr: 0x001c9ca0  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 89
 *   +0x0014 -> line 90
 *   +0x002c -> line 91
 *   +0x0034 -> line 92
 *   +0x003c -> line 93
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vKillObjectSound2(int s32_ObjectId, int s32_TypeId)
{
    CLinkTypeActor* poType;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndactor.cpp lines 62–84 */
/* addr: 0x001c9cf0  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 62
 *   +0x0010 -> line 65
 *   +0x001c -> line 67
 *   +0x003c -> line 71
 *   +0x0044 -> line 72
 *   +0x0050 -> line 74
 *   +0x0054 -> line 75
 *   +0x0060 -> line 77
 *   +0x0078 -> line 79
 *   +0x007c -> line 80
 *   +0x0088 -> line 81
 *   +0x008c -> line 82
 *   +0x0098 -> line 83
 *   +0x00c8 -> line 84
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vScanActor__Fv(void)
{
    CExtraEventActor* poEEActor;
    CLinkActor* poActor;
    CLinkTypeActorCont* ro_TypeActorCont;
    iterator it_Type;
    /* TODO: decompile from asm/... */
}
