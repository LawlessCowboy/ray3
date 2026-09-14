/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndswitch.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct _RollOffParam _RollOffParam;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CRolloffParam CRolloffParam;
typedef struct C2DParams C2DParams;
typedef struct sstring sstring;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CResObjState CResObjState;
typedef struct less less;
typedef struct stree stree;
typedef struct smap smap;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct TTypedVar TTypedVar;
typedef struct CProgramContext CProgramContext;
typedef struct CSwitchNotif CSwitchNotif;
typedef struct sset sset;
typedef struct CVar CVar;
typedef struct CLinkActor CLinkActor;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CCmdInterface CCmdInterface;
typedef struct CSndVarType CSndVarType;
typedef struct CResObj CResObj;
typedef struct CResData CResData;
typedef struct _stVector _stVector;
typedef struct streebase streebase;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct sTreeLink sTreeLink;
typedef struct CResType CResType;
typedef struct CRefIdObj CRefIdObj;
typedef struct CUUID CUUID;
typedef struct CActorModifiers CActorModifiers;
typedef struct CStringIsLess CStringIsLess;
typedef struct CIdObj CIdObj;

typedef enum _SIF_eInfoTypeId {
    SIF_E_UNDEFINED_INFO = -1,
    SIF_E_ENVIRONMENT_INFO = 0,
    SIF_E_MATERIAL_INFO = 1,
    SIF_E_SIZE_INFO = 2,
} _SIF_eInfoTypeId;

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

struct CPitchActorModifier {
    /* C++ base CActorModifiers at +0x0. */
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

struct less {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    less key_compare; /* +0xd */
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

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct CSwitchNotif {
    /* C++ base CVarNotifTarget at +0x0. */
    CExtraEventActor* m_roEventActor; /* +0x4 */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x8..0xb */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext; /* +0x74 */
    CLinkActor* m_poPrevious; /* +0x78 */
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

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    TTypedVar* mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    _tdstAllRetObjectSound mstIActor; /* +0x88 */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
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

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
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

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0. */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

anon_0 __vt__12CSwitchNotif;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndswitch.cpp lines 42–60 */
/* addr: 0x001867c0  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 42
 *   +0x000c -> line 47
 *   +0x0020 -> line 56
 *   +0x003c -> line 57
 *   +0x0050 -> line 58
 *   +0x005c -> line 59
 *   +0x0060 -> line 60
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_s32AddVolumeLineSound(void)
{
    int s32_Answer;
    char ch_Buffer[256];
    int s32_LineId;
    signed char init;
    /* TODO: decompile from asm/... */
}
