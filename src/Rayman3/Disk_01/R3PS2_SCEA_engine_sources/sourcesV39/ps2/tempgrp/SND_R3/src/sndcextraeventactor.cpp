/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CLinkMicro CLinkMicro;
typedef struct CRTTIClass CRTTIClass;
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct pointer pointer;
typedef struct CStringIsLess CStringIsLess;
typedef struct stree stree;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct CResObjParams CResObjParams;
typedef struct _RollOffParam _RollOffParam;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct iterator_base iterator_base;
typedef struct CLinkActor CLinkActor;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct sstring sstring;
typedef struct CResData CResData;
typedef struct TTypedVar TTypedVar;
typedef struct CUUID CUUID;
typedef struct CIdObj CIdObj;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct less less;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct C2DParams C2DParams;
typedef struct const_iterator const_iterator;
typedef union CVal CVal;
typedef struct CRolloffParam CRolloffParam;
typedef struct sset sset;
typedef struct CVar CVar;
typedef struct CEventResData CEventResData;
typedef struct smap smap;
typedef struct CRefIdObj CRefIdObj;
typedef struct CResObj CResObj;
typedef struct CResObjState CResObjState;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct streebase streebase;
typedef struct TBaseVarType TBaseVarType;
typedef struct CMusicMarkerNotifTarget CMusicMarkerNotifTarget;
typedef struct CVarData CVarData;
typedef struct CSwitchResData CSwitchResData;
typedef struct C3DParam C3DParam;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CActorResObj CActorResObj;
typedef struct CFloatVarType CFloatVarType;
typedef struct _stVector _stVector;
typedef struct CBoolRefParam CBoolRefParam;
typedef struct CLookupElement CLookupElement;
typedef struct sTreeLink sTreeLink;
typedef struct CProgramHdr CProgramHdr;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CSrcFlow CSrcFlow;
typedef struct stMusicMarkerSlot stMusicMarkerSlot;
typedef struct CSndVarType CSndVarType;
typedef struct CCmdInterface CCmdInterface;
typedef struct CResType CResType;
typedef struct CIdObjPtrMgr CIdObjPtrMgr;
typedef struct CClassInfo CClassInfo;
typedef struct CActorResData CActorResData;
typedef struct TTypedVarData TTypedVarData;
typedef struct CBaseVarType CBaseVarType;
typedef struct CNotifTarget CNotifTarget;
typedef struct CSwitchElement CSwitchElement;
typedef struct CProgramContext CProgramContext;
typedef struct CActorModifiers CActorModifiers;
typedef struct stMiniStackDesc stMiniStackDesc;
typedef struct iterator iterator;
typedef struct CMarkerNotifTarget CMarkerNotifTarget;

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

typedef enum tdeBaseType {
    EINT = 0,
    EFLOAT = 1,
    ESTRING = 2,
    EBOOL = 3,
    ECHAR = 4,
} tdeBaseType;

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    CStringIsLess key_compare; /* +0xd */
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

struct CResObjParams {
    /* C++ base CInterface at +0x0. */
    CResObjParams* m_poNext; /* +0x4 */
    CResObjParams* m_poPrevious; /* +0x8 */
    unsigned int m_uiNbRefs; /* +0xc */
    int m_s32Handle; /* +0x10 */
    CResData* m_poResData; /* +0x14 */
    void (*m_pfn_Proc)(int); /* +0x18 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
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

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
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

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    sstring m_oValue; /* +0x1c */
};

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
};

struct less {
    /* C++ base binary_function at +0x0. */
};

struct CPitchActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct spair {
    int first; /* +0x0 */
    CClassInfo* second; /* +0x4 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    spair m_oValue; /* +0x10 */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct const_iterator {
    /* C++ base iterator_base at +0x0. */
};

union CVal {
    int pcBool; /* +0x0 */
    TTypedVar* poBoolVar; /* +0x0 */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
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

struct smap {
    stree _Tr; /* +0x0 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CResObj {
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
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

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct TBaseVarType {
    /* C++ base CBaseVarType at +0x0. */
};

struct CMusicMarkerNotifTarget {
    /* C++ base CVarNotifTarget at +0x0. */
};

struct CVarData {
    CSndVarType* m_poType; /* +0x4 */
};

struct CSwitchResData {
    /* C++ base CResData at +0x0. */
    unsigned int m_uiNbElmts; /* +0x18 */
    unsigned int m_uiInfoType; /* +0x1c */
    unsigned int m_uiDefaultIndex; /* +0x20 */
    float m_fVolume; /* +0x24 */
    CSwitchElement* m_paElements; /* +0x28 */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
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

struct CFloatVarType {
    /* C++ base TBaseVarType at +0x0. */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct CBoolRefParam {
    unsigned int uiRefType; /* +0x0 */
    CVal m_uValue; /* +0x4 */
    unsigned int m_uiValue; /* +0x8 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CProgramHdr {
    unsigned int m_uiConstHdrSize; /* +0x0 */
    unsigned int m_uiSectionNb; /* +0x4 */
    unsigned int m_uiMainStackSize; /* +0x8 */
    unsigned int m_uiInitStackSize; /* +0xc */
    unsigned int m_uiDestrStackSize; /* +0x10 */
    unsigned int m_uiHdlrNb; /* +0x14 */
    unsigned int m_uiLocalFnNb; /* +0x18 */
    unsigned int m_uiProgVarSize; /* +0x1c */
    unsigned int m_uiConstVarPos; /* +0x20 */
    unsigned int m_uiConstVarSize; /* +0x24 */
    unsigned int m_uiDestrCodePos; /* +0x28 */
    unsigned int m_uiDestrCodeSize; /* +0x2c */
    unsigned int m_uiInitCodePos; /* +0x30 */
    unsigned int m_uiInitCodeSize; /* +0x34 */
    unsigned int m_uiMainPos; /* +0x38 */
    unsigned int m_uiMainSize; /* +0x3c */
    unsigned int m_uiFnDescrPos; /* +0x40 */
    unsigned int m_uiFnDescrSize; /* +0x44 */
    unsigned int m_uiPrivCodePos; /* +0x48 */
    unsigned int m_uiPrivCodeSize; /* +0x4c */
    unsigned int m_uiVarDescrPos; /* +0x50 */
    unsigned int m_uiVarDescrSize; /* +0x54 */
    unsigned int m_uiPreDestrCodePos; /* +0x58 */
    unsigned int m_uiPreDestrCodeSize; /* +0x5c */
    unsigned int m_uiObjectVarNb; /* +0x60 */
    smap m_oHandlerIds; /* +0x64 */
    int m_aiStdHandlerIds[33]; /* +0x74 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct CSrcFlow {
    /* C++ base CFlow at +0x0. */
    CFlow CFlow; /* +0x8 */
};

struct stMusicMarkerSlot {
    char szName[32]; /* +0x0 */
    int szBuffer; /* +0x20 */
    int iBufferSize; /* +0x24 */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
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

struct CIdObjPtrMgr {
    sset m_oLookupTables; /* +0x0 */
    smap m_oElmtReferences; /* +0x10 */
    unsigned char m_bEnable; /* +0x20 */
};

struct CClassInfo {
    unsigned int m_uiObjSize; /* +0x0 */
    sTreeNode m_oNode; /* +0x4 */
    int m_czClassName; /* +0x1c */
    unsigned int m_uiVersionId; /* +0x20 */
    /* function pointer */ int m_pfnCreateObj; /* +0x24 */
    CRTTIClass* (*m_pfnStreamObj)(CSrcFlow*); /* +0x28 */
    CClassInfo* m_poBaseClass; /* +0x2c */
};

struct CActorResData {
    /* C++ base CResData at +0x0. */
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    CVarAccess* m_poGlobalVarAccess; /* +0x48 */
};

struct TTypedVarData {
    /* C++ base CVarData at +0x0. */
    float m_oValue; /* +0x8 */
};

struct CBaseVarType {
    /* C++ base CSndVarType at +0x0. */
    tdeBaseType m_eBaseType; /* +0xc */
};

struct CNotifTarget {
    /* C++ base CInterface at +0x0. */
};

struct CSwitchElement {
    CIdObjPtr m_pTarget; /* +0x0 */
    unsigned int m_uiValue; /* +0x4 */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0. */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct stMiniStackDesc {
    int s32System; /* +0x0 */
    int s32Address; /* +0x4 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CMarkerNotifTarget {
    /* C++ base CNotifTarget at +0x0. */
};

unsigned int g_uiLastSwitchValue;
unsigned int g_uiNextSwitchValue;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 83–138 */
/* addr: 0x001cd970  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 83
 *   +0x0024 -> line 90
 *   +0x0030 -> line 92
 *   +0x0038 -> line 94
 *   +0x0048 -> line 97
 *   +0x0050 -> line 105
 *   +0x0054 -> line 101
 *   +0x0058 -> line 110
 *   +0x0074 -> line 112
 *   +0x007c -> line 115
 *   +0x0090 -> line 112
 *   +0x0094 -> line 115
 *   +0x00d4 -> line 119
 *   +0x00e0 -> line 124
 *   +0x0110 -> line 127
 *   +0x0114 -> line 128
 *   +0x0118 -> line 129
 *   +0x011c -> line 127
 *   +0x0124 -> line 130
 *   +0x0130 -> line 131
 *   +0x013c -> line 132
 *   +0x0148 -> line 134
 *   +0x0154 -> line 135
 *   +0x015c -> line 137
 *   +0x0160 -> line 138
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int ms_czNil__Q24usnd7sstring(void* uiIOPAddr, unsigned int uiSize)
{
    int iTransfered;
    int iLength;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 1002–1006 */
/* addr: 0x001cdaf0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1002
 *   +0x0010 -> line 1005
 *   +0x003c -> line 1006
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActorPool::f_vSalvageActor(CExtraEventActor* poEventActor)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 985–998 */
/* addr: 0x001cdb40  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 985
 *   +0x0004 -> line 987
 *   +0x0008 -> line 985
 *   +0x0014 -> line 987
 *   +0x001c -> line 988
 *   +0x0028 -> line 990
 *   +0x0034 -> line 992
 *   +0x003c -> line 993
 *   +0x0070 -> line 995
 *   +0x00dc -> line 997
 *   +0x00e0 -> line 998
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActorPool::fs_poGetAnActor(int s32_ACPObjectId)
{
    CExtraEventActor* poEventActor;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 957–978 */
/* addr: 0x001cdc40  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 957
 *   +0x0028 -> line 961
 *   +0x002c -> line 962
 *   +0x0034 -> line 964
 *   +0x006c -> line 966
 *   +0x00f0 -> line 968
 *   +0x00f4 -> line 969
 *   +0x00f8 -> line 970
 *   +0x00fc -> line 971
 *   +0x0108 -> line 975
 *   +0x0120 -> line 978
 *   +0x0124 -> line 975
 *   +0x0128 -> line 978
 *   +0x012c -> line 975
 *   +0x0130 -> line 978
 *   +0x0134 -> line 975
 *   +0x0138 -> line 978
 *   +0x013c -> line 975
 *   +0x0140 -> line 978
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::mfn_bExecute(int s32_CmdId, CUUID* roId)
{
    CResObjParams* pParams;
    unsigned char bAnswer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 820–953 */
/* addr: 0x001cdd90  size: 1336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 820
 *   +0x0034 -> line 825
 *   +0x0048 -> line 828
 *   +0x0054 -> line 829
 *   +0x005c -> line 830
 *   +0x0064 -> line 833
 *   +0x0068 -> line 835
 *   +0x0080 -> line 837
 *   +0x0088 -> line 844
 *   +0x00a8 -> line 851
 *   +0x00b8 -> line 853
 *   +0x00c8 -> line 854
 *   +0x00d0 -> line 855
 *   +0x00d4 -> line 857
 *   +0x00e0 -> line 858
 *   +0x00e8 -> line 861
 *   +0x00fc -> line 862
 *   +0x0104 -> line 865
 *   +0x010c -> line 866
 *   +0x0114 -> line 871
 *   +0x013c -> line 873
 *   +0x0154 -> line 881
 *   +0x0158 -> line 880
 *   +0x015c -> line 881
 *   +0x0170 -> line 889
 *   +0x0204 -> line 890
 *   +0x0208 -> line 891
 *   +0x020c -> line 890
 *   +0x0214 -> line 891
 *   +0x0234 -> line 893
 *   +0x0258 -> line 895
 *   +0x0270 -> line 914
 *   +0x0274 -> line 905
 *   +0x0278 -> line 908
 *   +0x027c -> line 905
 *   +0x0280 -> line 908
 *   +0x0284 -> line 906
 *   +0x0288 -> line 908
 *   +0x028c -> line 906
 *   +0x0290 -> line 908
 *   +0x02bc -> line 914
 *   +0x02d0 -> line 915
 *   +0x02e4 -> line 917
 *   +0x02f8 -> line 918
 *   +0x0304 -> line 919
 *   +0x030c -> line 922
 *   +0x0318 -> line 923
 *   +0x031c -> line 922
 *   +0x0320 -> line 923
 *   +0x041c -> line 925
 *   +0x0424 -> line 927
 *   +0x0448 -> line 928
 *   +0x0450 -> line 932
 *   +0x0458 -> line 938
 *   +0x0470 -> line 940
 *   +0x04b0 -> line 942
 *   +0x04b8 -> line 940
 *   +0x04bc -> line 942
 *   +0x04d8 -> line 943
 *   +0x04f0 -> line 946
 *   +0x0508 -> line 947
 *   +0x050c -> line 953
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::mfn_bPlay(CEventResData* ro_EventResData, int s32_EventId, void (*pfn_Proc)(int))
{
    float fNewPitch;
    CEventResData* po_EventResData;
    CIdObjPtrMgr* ro_IdObjPtrMgr;
    CUUID o_PlayId;
    CUUID o_StopId;
    stMiniStackDesc st_Stack[4];
    int s32_PlayHighWord;
    int s32_PlayLowWord;
    int s32_StopHighWord;
    int s32_StopLowWord;
    int a1_Params[1];
    unsigned int uiInfoType;
    CSwitchResData* pSwitchResData;
    CResObj* po_ResObj;
    CResData* po_ResData;
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 815–815 */
/* addr: 0x001ce2d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 815
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSetSwitchMaterial(int iNB)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 811–811 */
/* addr: 0x001ce2e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 811
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_iGetSwitchMaterial(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 798–799 */
/* addr: 0x001ce2f0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 798
 *   +0x000c -> line 799
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CMarkerNotifTarget::fv_vNotify(void* pvParams)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 751–780 */
/* addr: 0x001ce310  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 751
 *   +0x0020 -> line 754
 *   +0x0024 -> line 755
 *   +0x002c -> line 757
 *   +0x0038 -> line 759
 *   +0x003c -> line 760
 *   +0x0048 -> line 762
 *   +0x0050 -> line 764
 *   +0x0078 -> line 766
 *   +0x0088 -> line 768
 *   +0x0090 -> line 769
 *   +0x00b4 -> line 770
 *   +0x00cc -> line 771
 *   +0x00d4 -> line 772
 *   +0x00e4 -> line 773
 *   +0x00e8 -> line 777
 *   +0x00f4 -> line 780
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::fn_bIsSoundPlaying(int s32_Handle)
{
    CBoolRefParam oBoolRef;
    unsigned int uiObjNum;
    unsigned int uiResult;
    CResObjParams* pParams;
    int apObjects[100];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 719–748 */
/* addr: 0x001ce430  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 719
 *   +0x0020 -> line 722
 *   +0x0024 -> line 723
 *   +0x002c -> line 725
 *   +0x0038 -> line 727
 *   +0x003c -> line 728
 *   +0x0048 -> line 730
 *   +0x0050 -> line 731
 *   +0x0058 -> line 733
 *   +0x0080 -> line 735
 *   +0x0090 -> line 737
 *   +0x0098 -> line 738
 *   +0x00bc -> line 739
 *   +0x00d4 -> line 740
 *   +0x00dc -> line 741
 *   +0x00f0 -> line 745
 *   +0x00fc -> line 748
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::fn_bIsSoundPlaying(CResData* po_ResData)
{
    CBoolRefParam oBoolRef;
    unsigned int uiObjNum;
    unsigned int uiResult;
    CResObjParams* pParams;
    int apObjects[100];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 650–698 */
/* addr: 0x001ce550  size: 572 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 650
 *   +0x0024 -> line 652
 *   +0x0034 -> line 654
 *   +0x0044 -> line 655
 *   +0x004c -> line 659
 *   +0x006c -> line 660
 *   +0x0074 -> line 666
 *   +0x0078 -> line 664
 *   +0x007c -> line 663
 *   +0x0080 -> line 664
 *   +0x0084 -> line 666
 *   +0x0148 -> line 667
 *   +0x0154 -> line 675
 *   +0x0158 -> line 676
 *   +0x0160 -> line 678
 *   +0x0168 -> line 679
 *   +0x0180 -> line 681
 *   +0x0188 -> line 685
 *   +0x01a8 -> line 687
 *   +0x01b8 -> line 689
 *   +0x01c0 -> line 690
 *   +0x01e4 -> line 691
 *   +0x01fc -> line 692
 *   +0x0204 -> line 693
 *   +0x0214 -> line 695
 *   +0x0218 -> line 697
 *   +0x021c -> line 698
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::fn_bIsResourcesAllowed(CResData* ro_ResData)
{
    CBoolRefParam oBoolRef;
    unsigned int uiObjNum;
    unsigned int uiResult;
    CResObjParams* pParams;
    char* czStrTheme;
    CProgramHdr* ro_ProgHdr;
    int apObjects[100];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 589–646 */
/* addr: 0x001ce790  size: 564 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 589
 *   +0x0004 -> line 592
 *   +0x0008 -> line 589
 *   +0x001c -> line 592
 *   +0x0028 -> line 593
 *   +0x0030 -> line 598
 *   +0x004c -> line 599
 *   +0x0054 -> line 603
 *   +0x005c -> line 608
 *   +0x0060 -> line 603
 *   +0x0064 -> line 604
 *   +0x0070 -> line 608
 *   +0x00cc -> line 610
 *   +0x00e0 -> line 613
 *   +0x010c -> line 616
 *   +0x0110 -> line 618
 *   +0x0114 -> line 616
 *   +0x011c -> line 618
 *   +0x0178 -> line 623
 *   +0x0190 -> line 627
 *   +0x0194 -> line 624
 *   +0x0198 -> line 627
 *   +0x019c -> line 624
 *   +0x01a4 -> line 627
 *   +0x01c8 -> line 630
 *   +0x01e0 -> line 631
 *   +0x01e8 -> line 634
 *   +0x01f0 -> line 635
 *   +0x01f8 -> line 638
 *   +0x0200 -> line 640
 *   +0x0218 -> line 645
 *   +0x021c -> line 646
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::mfn_bApplyPositionAndVelocity(void)
{
    float f32_Value;
    C3DParam* ro_Params;
    _stVector stVelocity;
    _stVector stPos;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 545–586 */
/* addr: 0x001ce9d0  size: 576 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 545
 *   +0x0028 -> line 548
 *   +0x002c -> line 552
 *   +0x0044 -> line 554
 *   +0x004c -> line 560
 *   +0x0050 -> line 562
 *   +0x0058 -> line 560
 *   +0x005c -> line 562
 *   +0x0098 -> line 564
 *   +0x00b4 -> line 571
 *   +0x00c8 -> line 572
 *   +0x01c8 -> line 573
 *   +0x01d4 -> line 574
 *   +0x01ec -> line 575
 *   +0x01f8 -> line 576
 *   +0x01fc -> line 580
 *   +0x0210 -> line 582
 *   +0x0218 -> line 585
 *   +0x021c -> line 586
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::mfn_bApplyAllParams(unsigned char bforce)
{
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 505–542 */
/* addr: 0x001cec10  size: 396 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 505
 *   +0x0004 -> line 509
 *   +0x0008 -> line 505
 *   +0x0018 -> line 509
 *   +0x0024 -> line 517
 *   +0x004c -> line 523
 *   +0x0078 -> line 524
 *   +0x007c -> line 523
 *   +0x0088 -> line 524
 *   +0x00c8 -> line 527
 *   +0x0108 -> line 528
 *   +0x010c -> line 530
 *   +0x0120 -> line 532
 *   +0x0138 -> line 533
 *   +0x013c -> line 534
 *   +0x0144 -> line 535
 *   +0x0158 -> line 537
 *   +0x0170 -> line 538
 *   +0x0174 -> line 541
 *   +0x0178 -> line 542
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CExtraEventActor::mfn_bApplySectorActivation(void)
{
    iterator it;
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 436–448 */
/* addr: 0x001cedc0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 436
 *   +0x0010 -> line 440
 *   +0x001c -> line 441
 *   +0x0034 -> line 442
 *   +0x0040 -> line 443
 *   +0x0058 -> line 444
 *   +0x005c -> line 447
 *   +0x0060 -> line 444
 *   +0x0064 -> line 447
 *   +0x0080 -> line 448
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::f_vDesInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 422–432 */
/* addr: 0x001cee50  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 422
 *   +0x001c -> line 423
 *   +0x0028 -> line 425
 *   +0x0098 -> line 426
 *   +0x00b4 -> line 428
 *   +0x00c0 -> line 429
 *   +0x00d8 -> line 431
 *   +0x00f4 -> line 432
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ~CExtraEventActor(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 330–418 */
/* addr: 0x001cef60  size: 632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 330
 *   +0x0004 -> line 336
 *   +0x0008 -> line 330
 *   +0x000c -> line 336
 *   +0x0010 -> line 330
 *   +0x0038 -> line 334
 *   +0x003c -> line 336
 *   +0x0048 -> line 338
 *   +0x006c -> line 339
 *   +0x0088 -> line 341
 *   +0x009c -> line 343
 *   +0x00a0 -> line 345
 *   +0x00c0 -> line 349
 *   +0x00cc -> line 352
 *   +0x00d4 -> line 354
 *   +0x00ec -> line 356
 *   +0x00f0 -> line 357
 *   +0x0114 -> line 363
 *   +0x0118 -> line 364
 *   +0x011c -> line 366
 *   +0x0120 -> line 370
 *   +0x0128 -> line 372
 *   +0x0130 -> line 373
 *   +0x0138 -> line 374
 *   +0x0140 -> line 375
 *   +0x0148 -> line 376
 *   +0x014c -> line 377
 *   +0x0154 -> line 380
 *   +0x0158 -> line 381
 *   +0x0168 -> line 388
 *   +0x0174 -> line 393
 *   +0x017c -> line 395
 *   +0x0180 -> line 393
 *   +0x0184 -> line 395
 *   +0x01a0 -> line 396
 *   +0x01c0 -> line 400
 *   +0x01e0 -> line 401
 *   +0x0200 -> line 407
 *   +0x0210 -> line 409
 *   +0x0224 -> line 410
 *   +0x0228 -> line 412
 *   +0x0230 -> line 410
 *   +0x0238 -> line 411
 *   +0x0240 -> line 412
 *   +0x0248 -> line 413
 *   +0x0250 -> line 415
 *   +0x0258 -> line 418
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::f_vInit(CLinkTypeActor* ro_ActorType, int s32_ACPObjectId, int s32_ACPChannelId, CEventResData* poResData)
{
    CFloatVarType* roFloatVarType;
    int min;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 287–326 */
/* addr: 0x001cf1e0  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 287
 *   +0x0004 -> line 299
 *   +0x0008 -> line 287
 *   +0x0010 -> line 288
 *   +0x0014 -> line 299
 *   +0x0020 -> line 302
 *   +0x002c -> line 305
 *   +0x003c -> line 307
 *   +0x0044 -> line 311
 *   +0x0050 -> line 313
 *   +0x0064 -> line 320
 *   +0x0084 -> line 321
 *   +0x008c -> line 323
 *   +0x0094 -> line 326
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::f_vInitActorObj(int s32_ACPObjectId)
{
    TTypedVar* pMarkerVar;
    CActorResData* poActorResData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 251–256 */
/* addr: 0x001cf290  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 251
 *   +0x0024 -> line 256
 *   +0x0028 -> line 251
 *   +0x004c -> line 256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 243–248 */
/* addr: 0x001cf2f0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 243
 *   +0x0008 -> line 244
 *   +0x000c -> line 245
 *   +0x0018 -> line 246
 *   +0x001c -> line 248
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::f_vInsertAfter(CExtraEventActor* pParam)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 232–239 */
/* addr: 0x001cf320  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 232
 *   +0x000c -> line 233
 *   +0x0014 -> line 234
 *   +0x0020 -> line 235
 *   +0x0028 -> line 237
 *   +0x002c -> line 239
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CExtraEventActor::f_vIsolate(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 173–174 */
/* addr: 0x001cf360  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 173
 *   +0x0008 -> line 174
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Q216CExtraEventActor13CResObjParams::fv_vAddRef(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 156–168 */
/* addr: 0x001cf370  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 156
 *   +0x000c -> line 157
 *   +0x0018 -> line 158
 *   +0x0024 -> line 161
 *   +0x0030 -> line 162
 *   +0x0038 -> line 164
 *   +0x0064 -> line 165
 *   +0x0068 -> line 164
 *   +0x006c -> line 165
 *   +0x0094 -> line 168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Q216CExtraEventActor13CResObjParams::fv_vRelease(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 136–136 */
/* addr: 0x001cf420  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 136
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_iSetNbMusicMarkerSlots(int iNB)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 131–131 */
/* addr: 0x001cf430  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 131
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_p_stSetMusicMarkerSlots(stMusicMarkerSlot* p_stPointer)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 126–126 */
/* addr: 0x001cf440  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_iGetNbMusicMarkerSlots(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 121–121 */
/* addr: 0x001cf450  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 121
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_p_stGetMusicMarkerSlots(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 92–109 */
/* addr: 0x001cf460  size: 412 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 92
 *   +0x0004 -> line 93
 *   +0x0008 -> line 92
 *   +0x0014 -> line 93
 *   +0x0070 -> line 96
 *   +0x007c -> line 98
 *   +0x0084 -> line 100
 *   +0x00b0 -> line 102
 *   +0x00c8 -> line 103
 *   +0x00e4 -> line 104
 *   +0x00e8 -> line 103
 *   +0x00ec -> line 105
 *   +0x0104 -> line 106
 *   +0x0134 -> line 107
 *   +0x016c -> line 108
 *   +0x0184 -> line 109
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CMusicMarkerNotifTarget::fv_vVarChanged(CVar* roVar)
{
    int i;
    sstring szMarker;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 110–110 */
/* addr: 0x001cf600  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CMusicMarkerNotifTarget::fv_vVarDestroyed(void)
{
    /* TODO: decompile from asm/... */
}
