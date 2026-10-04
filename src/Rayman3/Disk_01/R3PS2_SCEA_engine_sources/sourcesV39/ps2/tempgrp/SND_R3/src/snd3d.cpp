/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CLinkCallbackResObj CLinkCallbackResObj;
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct less less;
typedef struct stree stree;
typedef struct _RollOffParam _RollOffParam;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct V3Ds V3Ds;
typedef struct smap smap;
typedef struct CProgramHdr CProgramHdr;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct CCmdInterface CCmdInterface;
typedef struct CResType CResType;
typedef struct sTreeLink sTreeLink;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct CRolloffParam CRolloffParam;
typedef struct C2DParams C2DParams;
typedef struct sstring sstring;
typedef struct CResObjState CResObjState;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct CResObj CResObj;
typedef struct iterator_base iterator_base;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct CUUID CUUID;
typedef struct CLookupElement CLookupElement;
typedef struct CResData CResData;
typedef struct _Node _Node;
typedef struct sset sset;
typedef struct CActorResData CActorResData;
typedef struct CSoundSemaphore CSoundSemaphore;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct TTypedVar TTypedVar;
typedef struct slist slist;
typedef struct CEventResData CEventResData;
typedef struct CRefIdObj CRefIdObj;
typedef struct const_iterator const_iterator;
typedef struct streebase streebase;
typedef struct CLinkCallbackResObjCont CLinkCallbackResObjCont;
typedef struct CProgramContext CProgramContext;
typedef struct CActorModifiers CActorModifiers;
typedef struct _stVector _stVector;
typedef struct CVar CVar;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct iterator iterator;
typedef struct CIdObj CIdObj;
typedef struct CSndVarType CSndVarType;
typedef struct CStringIsLess CStringIsLess;

/* The original STL allocator is only present as an empty base/member in the
 * recovered declarations used by this translation unit.  Keep it opaque
 * until its complete library layout is recovered. */
struct sallocator {};

/* This TU contains one recovered out-of-line Jingle helper. */
struct Jingle {
    static void ms_fVolReduction(int);
};

namespace usnd {
struct CMicroManager {
    static CMicroManager& fs_roGetInst(void);
    static void fs_vSetPanOn(bool);
};
struct CPS2Box {
    static void fs_vSetMono(bool);
};
}

extern "C" void usnd_vLeaveCritSect(unsigned int);

struct CSoundSemaphoreCont {
    /* The singleton call has no incoming this argument in the target. */
    static CSoundSemaphoreCont* mfn_roGetInstance(void);
    unsigned char mfn_bRemoveSoundSemaphore(int);
    CSoundSemaphore* mfn_poAddSoundSemaphore(int, int);
};

typedef enum tdeEventType {
    EPLAYEVENT = 0,
    ESTOPEVENT = 1,
    EPITCHEVENT = 2,
    EVOLUMEEVENT = 3,
    EEXTRAEVENT = 4,
    ESTOPALLEVENT = 5,
    ESTOPANDGO = 6,
} tdeEventType;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

typedef enum tdeType {
    EBASE = 0,
    EARRAY = 1,
    ESTRUCT = 2,
    EOBJECT = 3,
    ERESID = 4,
    EENUM = 5,
} tdeType;

struct less {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    less key_compare; /* +0xd */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct CResObjParams {
    /* C++ base CInterface at +0x0: vtable pointer (retail
     * __vt__Q216CExtraEventActor13CResObjParams: fv_vRelease, fv_vAddRef). */
    virtual void fv_vRelease(void);
    virtual void fv_vAddRef(void);
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

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct smap {
    stree _Tr; /* +0x0 */
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

struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
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

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CVolumeActorModifier {
    /* C++ base CActorModifiers at +0x0. */
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

struct CResObj {
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

struct spair {
    int first; /* +0x0 */
    CLinkTypeActor* second; /* +0x4 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    spair m_oValue; /* +0x10 */
};

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct _Node {
    _Node* _pNext; /* +0x0 */
    _Node* _pPrev; /* +0x4 */
    CLinkCallbackResObj* _Value; /* +0x8 */
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

struct CSoundSemaphore {
    /* C++ base smap at +0x0. */
    unsigned int mu32ChannelId; /* +0x10 */
    unsigned int mu32ChannelSize; /* +0x14 */
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

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct slist {
    sallocator m_oAllocator; /* +0x0 */
    _Node* _Head; /* +0x4 */
    unsigned int _Size; /* +0x8 */
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

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct const_iterator {
    _Node* _Ptr; /* +0x0 */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct CLinkCallbackResObjCont {
    /* C++ base slist at +0x0. */
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

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct CLinkTypeActorCont {
    /* C++ base smap at +0x0. */
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct iterator {
    /* C++ base const_iterator at +0x0. */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

_SND_tduRefEvt g_oLastTheme;
_SND_tduRefEvt g_oLastSavedTheme;
unsigned int gs_uiCritSect;
int g_bInStereo;
static int g_bUseNearestMicro;

char g_szMarker[2];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 132–132 */
/* addr: 0x00186830  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 132
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Jingle::ms_fVolReduction(int oValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 1041–1045 */
/* addr: 0x00186840  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1041
 *   +0x000c -> line 1042
 *   +0x0020 -> line 1044
 *   +0x0028 -> line 1045
 *   +0x002c -> line 1044
 *   +0x0030 -> line 1045
 *   +0x0034 -> line 1044
 *   +0x003c -> line 1045
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_bIsTypePlayingSound(int s32_TypeId)
{
    CLinkTypeActor* po_TypeActor;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 1035–1035 */
/* addr: 0x00186890  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1035
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
_SND_tdstBlockEvent* SND_fn_pstGetLastEventForObjectTypeSound(void)
{
    return (_SND_tdstBlockEvent*)0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 1029–1029 */
/* addr: 0x001868a0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1029
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSetMusicFadeOut(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 1025–1025 */
/* addr: 0x001868b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1025
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_bGetStereoSound(void)
{
    return g_bInStereo;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 963–965 */
/* addr: 0x001868c0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 963
 *   +0x000c -> line 964
 *   +0x0020 -> line 965
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSetPan(int b_pan)
{
    usnd::CMicroManager::fs_roGetInst(); usnd::CMicroManager::fs_vSetPanOn(b_pan == 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 946–947 */
/* addr: 0x00186900  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 946
 *   +0x0004 -> line 947
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSetStereoSound(int b_Stereo)
{
    g_bInStereo = b_Stereo;
    return usnd::CPS2Box::fs_vSetMono(b_Stereo ^ 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 934–934 */
/* addr: 0x00186910  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 934
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSetDopplerFactorSound(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 821–930 */
/* addr: 0x00186920  size: 444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 821
 *   +0x0008 -> line 823
 *   +0x0010 -> line 863
 *   +0x0024 -> line 864
 *   +0x002c -> line 866
 *   +0x0034 -> line 870
 *   +0x0044 -> line 871
 *   +0x0050 -> line 872
 *   +0x005c -> line 873
 *   +0x0068 -> line 874
 *   +0x0074 -> line 875
 *   +0x007c -> line 876
 *   +0x0088 -> line 879
 *   +0x0090 -> line 887
 *   +0x00c4 -> line 896
 *   +0x00cc -> line 898
 *   +0x0140 -> line 899
 *   +0x0150 -> line 902
 *   +0x015c -> line 903
 *   +0x016c -> line 904
 *   +0x0170 -> line 906
 *   +0x0180 -> line 907
 *   +0x0190 -> line 910
 *   +0x0198 -> line 919
 *   +0x01a0 -> line 920
 *   +0x01a8 -> line 928
 *   +0x01b0 -> line 930
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSynchroSound(void)
{
    int currentPause;
    CLinkCallbackResObjCont o_Singleton;
    signed char init;
    int inPause;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 805–806 */
/* addr: 0x00186d00  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 805
 *   +0x0004 -> line 806
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vResetLastMarker(void)
{
    g_szMarker[0] = '*';
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 790–790 */
/* addr: 0x00186d10  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 790
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_s32GetLastMarker(void)
{
    return g_szMarker[0];
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 767–767 */
/* addr: 0x00186d20  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 767
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vChangeVolumeSound(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 652–685 */
/* addr: 0x00186de0  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 652
 *   +0x0004 -> line 654
 *   +0x0008 -> line 652
 *   +0x0020 -> line 654
 *   +0x0034 -> line 655
 *   +0x003c -> line 658
 *   +0x0048 -> line 659
 *   +0x0050 -> line 660
 *   +0x0058 -> line 665
 *   +0x0064 -> line 667
 *   +0x0084 -> line 671
 *   +0x008c -> line 672
 *   +0x0098 -> line 674
 *   +0x009c -> line 675
 *   +0x00a8 -> line 677
 *   +0x00bc -> line 678
 *   +0x00c4 -> line 679
 *   +0x00c8 -> line 680
 *   +0x00d0 -> line 681
 *   +0x00d4 -> line 682
 *   +0x00e0 -> line 683
 *   +0x0110 -> line 685
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_bIsSoundPlaying(_SND_tduRefEvt u_RefEvt)
{
    CExtraEventActor* poEEActor;
    CLinkActor* poActor;
    CLinkTypeActorCont* ro_TypeActorCont;
    iterator it_Type;
    CResData* po_ResData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 603–648 */
/* addr: 0x00186f10  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 603
 *   +0x0004 -> line 608
 *   +0x0008 -> line 603
 *   +0x0020 -> line 608
 *   +0x0028 -> line 609
 *   +0x0030 -> line 614
 *   +0x0044 -> line 617
 *   +0x004c -> line 618
 *   +0x0054 -> line 623
 *   +0x005c -> line 624
 *   +0x0064 -> line 625
 *   +0x006c -> line 633
 *   +0x0070 -> line 634
 *   +0x0078 -> line 636
 *   +0x0084 -> line 638
 *   +0x0094 -> line 640
 *   +0x0098 -> line 643
 *   +0x00a0 -> line 644
 *   +0x00b0 -> line 646
 *   +0x00b4 -> line 648
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_s32GetSoundHandleState(int s32_ObjectId, int s32_TypeId, int s32_HandleId)
{
    CExtraEventActor* po_EventActor;
    CLinkActor* po_LinkActor;
    CLinkTypeActor* po_TypeActor;
    int s32_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 447–573 */
/* addr: 0x00186fe0  size: 940 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 447
 *   +0x003c -> line 451
 *   +0x0040 -> line 449
 *   +0x0044 -> line 451
 *   +0x0070 -> line 454
 *   +0x0078 -> line 457
 *   +0x0090 -> line 464
 *   +0x009c -> line 466
 *   +0x01a0 -> line 469
 *   +0x01cc -> line 484
 *   +0x01e8 -> line 486
 *   +0x01f0 -> line 489
 *   +0x0210 -> line 491
 *   +0x0228 -> line 497
 *   +0x0248 -> line 499
 *   +0x025c -> line 502
 *   +0x026c -> line 505
 *   +0x027c -> line 506
 *   +0x0284 -> line 508
 *   +0x029c -> line 511
 *   +0x02b8 -> line 513
 *   +0x02c0 -> line 517
 *   +0x02c8 -> line 518
 *   +0x02dc -> line 523
 *   +0x02e4 -> line 529
 *   +0x02ec -> line 536
 *   +0x0300 -> line 539
 *   +0x030c -> line 541
 *   +0x0314 -> line 543
 *   +0x0320 -> line 544
 *   +0x0328 -> line 546
 *   +0x033c -> line 554
 *   +0x0344 -> line 557
 *   +0x034c -> line 558
 *   +0x0350 -> line 563
 *   +0x035c -> line 567
 *   +0x036c -> line 569
 *   +0x0378 -> line 572
 *   +0x037c -> line 573
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_s32SendRequestSound(int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, void (*pfn_Proc)(int))
{
    CExtraEventActor* po_EventActor;
    CLinkTypeActor* po_TypeActor;
    CLinkActor* po_LinkActor;
    CResData* po_ResData;
    int s32_SemId;
    CSoundSemaphore* po_Channel;
    CEventResData* ro_EventResData;
    int s32_Answer;
    int s32_SoundHandle;
    signed char init;
    int s32_Handle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 404–422 */
/* addr: 0x001874e0  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 404
 *   +0x003c -> line 407
 *   +0x0040 -> line 405
 *   +0x0044 -> line 407
 *   +0x0070 -> line 410
 *   +0x0090 -> line 413
 *   +0x009c -> line 415
 *   +0x00ac -> line 418
 *   +0x00b4 -> line 421
 *   +0x00b8 -> line 422
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_s32SendRequestJingle(int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int), int s32_VolumeLine)
{
    int s32_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 370–391 */
/* addr: 0x001875c0  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 370
 *   +0x003c -> line 374
 *   +0x0040 -> line 371
 *   +0x0044 -> line 374
 *   +0x0070 -> line 377
 *   +0x0088 -> line 379
 *   +0x00a8 -> line 382
 *   +0x00c4 -> line 383
 *   +0x00d8 -> line 384
 *   +0x00e8 -> line 387
 *   +0x00f0 -> line 390
 *   +0x00f4 -> line 391
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_s32SendRequestSemaphoreSound(int s32_SemaphoreId, int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int))
{
    CSoundSemaphore* po_Channel;
    int s32_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 348–355 */
/* addr: 0x001876e0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 348
 *   +0x0014 -> line 352
 *   +0x0030 -> line 353
 *   +0x0034 -> line 354
 *   +0x0038 -> line 355
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_bRemoveSemaphoreSound(int s32_SemaphoreId)
{
    int b_Answer;
    b_Answer = 0;
    if (CSoundSemaphoreCont::mfn_roGetInstance()->mfn_bRemoveSoundSemaphore(s32_SemaphoreId))
        b_Answer = 1;
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 333–340 */
/* addr: 0x00187730  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 333
 *   +0x001c -> line 337
 *   +0x003c -> line 338
 *   +0x0040 -> line 339
 *   +0x0044 -> line 340
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_s32AddSemaphoreSound(int s32_SemaphoreId, int s32_SemaphoreSize)
{
    int s32_Answer;
    s32_Answer = -3;
    if (CSoundSemaphoreCont::mfn_roGetInstance()->mfn_poAddSoundSemaphore(s32_SemaphoreId, s32_SemaphoreSize))
        s32_Answer = s32_SemaphoreId;
    return s32_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 323–324 */
/* addr: 0x00187790  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 323
 *   +0x0018 -> line 324
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_hGetCurrentSoundHandle(void)
{
    static int s32_SoundHandle = -2;
    return s32_SoundHandle;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 295–297 */
/* addr: 0x001877b0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 295
 *   +0x0004 -> line 297
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vClearLastTheme(void)
{
    g_oLastTheme.Id = 0;
    g_oLastSavedTheme.Id = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 278–286 */
/* addr: 0x001877c0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 278
 *   +0x0014 -> line 280
 *   +0x0018 -> line 282
 *   +0x001c -> line 280
 *   +0x0020 -> line 281
 *   +0x0028 -> line 286
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_bGetLastTheme(_SND_tduRefEvt* p_RefEvt)
{
    int bRet;
    bRet = 0;
    if (g_oLastSavedTheme.Id && p_RefEvt) {
        *p_RefEvt = g_oLastSavedTheme;
        g_oLastTheme.Id = 0; g_oLastSavedTheme.Id = 0;
        bRet = 1;
    }
    return bRet;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 264–264 */
/* addr: 0x001877f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 264
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUnlockSound__Fv(void)
{
    return usnd_vLeaveCritSect(gs_uiCritSect);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 237–255 */
/* addr: 0x00187800  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 237
 *   +0x0014 -> line 240
 *   +0x0020 -> line 242
 *   +0x002c -> line 245
 *   +0x0034 -> line 247
 *   +0x0040 -> line 248
 *   +0x0048 -> line 251
 *   +0x0050 -> line 254
 *   +0x0054 -> line 255
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bLockSound__Fb(unsigned char bIgnoreIfCantAccess)
{
    unsigned char bRet;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 169–225 */
/* addr: 0x00187870  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 169
 *   +0x0014 -> line 176
 *   +0x0020 -> line 182
 *   +0x0038 -> line 183
 *   +0x0040 -> line 187
 *   +0x004c -> line 188
 *   +0x0054 -> line 192
 *   +0x0060 -> line 193
 *   +0x0068 -> line 197
 *   +0x0070 -> line 199
 *   +0x0074 -> line 200
 *   +0x007c -> line 202
 *   +0x0084 -> line 203
 *   +0x00a0 -> line 205
 *   +0x00a8 -> line 207
 *   +0x00c8 -> line 209
 *   +0x00cc -> line 210
 *   +0x00e0 -> line 213
 *   +0x00e8 -> line 215
 *   +0x00ec -> line 216
 *   +0x00f4 -> line 219
 *   +0x00f8 -> line 225
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSaveLastTheme(void)
{
    unsigned int uiResult;
    CResObjParams* pParams;
    CResData* po_ResData;
    unsigned char flag;
    CExtraEventActor* po_EventActor;
    CLinkActor* po_LinkActor;
    CLinkTypeActor* po_TypeActor;
    CEventResData* ro_EventResData;
    /* TODO: decompile from asm/... */
}
