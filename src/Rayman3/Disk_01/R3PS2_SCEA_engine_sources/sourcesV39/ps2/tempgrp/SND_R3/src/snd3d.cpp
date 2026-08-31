/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CLinkActor CLinkActor;
typedef struct V3Ds V3Ds;
typedef struct CProgramHdr CProgramHdr;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct CResType CResType;
typedef struct sTreeLink sTreeLink;
typedef struct CActorResObj CActorResObj;
typedef struct CResObj CResObj;
typedef struct iterator_base iterator_base;
typedef struct smap smap;
typedef struct sTreeNode sTreeNode;
typedef struct CLookupElement CLookupElement;
typedef struct CResObjParams CResObjParams;
typedef struct CResData CResData;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct sstring sstring;
typedef struct CActorResData CActorResData;
typedef struct sset sset;
typedef struct _RollOffParam _RollOffParam;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct sset sset;
typedef struct sTreeNode sTreeNode;
typedef struct CCritSect CCritSect;
typedef struct CEventResData CEventResData;
typedef struct CRefIdObj CRefIdObj;
typedef struct const_iterator const_iterator;
typedef struct streebase streebase;
typedef struct C2DParams C2DParams;
typedef struct CRolloffParam CRolloffParam;
typedef struct _stVector _stVector;
typedef struct TTypedVar TTypedVar;
typedef struct smap smap;
typedef struct CVar CVar;
typedef struct smap smap;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct iterator iterator;
typedef struct const_iterator const_iterator;
typedef struct C3DDirection C3DDirection;
typedef struct CIdObj CIdObj;
typedef struct CSndVarType CSndVarType;
typedef struct smap smap;
typedef struct iterator iterator;
typedef struct CResObjState CResObjState;
typedef struct smap smap;
typedef struct CCmdInterface CCmdInterface;
typedef struct C3DParam C3DParam;
typedef struct smap smap;
typedef struct smap smap;
typedef struct smap smap;

struct CLinkActor {
    int mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    CExtraEventActor m_oExtraActors; /* +0xc */
    int m_poNext; /* +0x74 */
    int m_poPrevious; /* +0x78 */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
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
    int m_poElmt; /* +0x0 */
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
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
};

struct CActorResObj {
    /* C++ base CResObj at +0x0. */
    C3DParam m_o3DParams; /* +0xc */
    /* aggregate */ int m_oPitchModifier; /* +0x3c */
    CRolloffParam m_oRolloff; /* +0x60 */
    C2DParams m_o2DParams; /* +0x6c */
    unsigned char m_b3DParamsChanged; /* +0x7c */
    unsigned char m_b3DRes; /* +0x7d */
    sstring m_sName; /* +0x80 */
    unsigned char m_b2DParamsComputed; /* +0x84 */
    /* aggregate */ int m_oVolModifier; /* +0x88 */
    /* aggregate */ int m_oProgramContext; /* +0xac */
};

struct CResObj {
    int m_roType; /* +0x4 */
    int m_poResData; /* +0x8 */
};

struct iterator_base {
    int _Ptr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    /* aggregate */ int m_oId; /* +0x4 */
    int m_poIdObj; /* +0xc */
};

struct CResObjParams {
    /* C++ base CInterface at +0x0. */
    int m_poNext; /* +0x4 */
    int m_poPrevious; /* +0x8 */
    unsigned int m_uiNbRefs; /* +0xc */
    int m_s32Handle; /* +0x10 */
    int m_poResData; /* +0x14 */
    int m_pfn_Proc; /* +0x18 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct CExtraEventActor {
    int m_poNext; /* +0x0 */
    int m_poPrevious; /* +0x4 */
    int m_poIntSwitchVar; /* +0x8 */
    int mpoActorObj; /* +0xc */
    int mpoVolumeModifier; /* +0x10 */
    int mpoPitchModifier; /* +0x14 */
    int mpoActorType; /* +0x18 */
    int ms32ACPObjectId; /* +0x1c */
    int ms32ACPChannelId; /* +0x20 */
    /* aggregate */ int meExtraCoeff; /* +0x24 */
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

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CActorResData {
    /* C++ base CResData at +0x0. */
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    int m_poGlobalVarAccess; /* +0x48 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    int mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    /* aggregate */ int mstIActor; /* +0x88 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CEventResData {
    /* C++ base CResData at +0x0. */
    float m_fCoeffA; /* +0x18 */
    float m_fCoeffB; /* +0x1c */
    float m_fCoeffC; /* +0x20 */
    float m_fCoeffD; /* +0x24 */
    /* aggregate */ int m_eEventType; /* +0x28 */
    CIdObjPtr m_pTargetRes; /* +0x2c */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct const_iterator {
    /* C++ base iterator_base at +0x0. */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CVar {
    int m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct iterator {
    /* C++ base const_iterator at +0x0. */
};

struct const_iterator {
    int _Ptr; /* +0x0 */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct CSndVarType {
    /* aggregate */ int m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CResObjState {
    int m_poResObj; /* +0x0 */
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
    int m_poNext; /* +0x18 */
    int m_poPrevious; /* +0x1c */
    int m_poOwner; /* +0x20 */
    unsigned int m_uiLockCount; /* +0x24 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

_SND_tduRefEvt g_oLastTheme;
_SND_tduRefEvt g_oLastSavedTheme;
unsigned int gs_uiCritSect;
int g_bInStereo;
static int g_bUseNearestMicro;
unsigned char ms_bPanOn;
int ss32CurrentRefreshChannel;
/* aggregate */ int __dt;
int g_lSoundVolumeLineMenu;
int g_lSoundVolumeLineAmbiance;
int g_lSoundVolumeLineVoices;
int g_lSoundVolumeLineSound;
int g_lSoundVolumeLineMusic;
char g_szMarker[2];
sTreeLink _NilElmt;
int g_lSoundObjectTypeMusic;
float ms_fVolReduction;

/* addr: 0x00186830  size: 8 bytes */
void ms_fVolReduction__6Jingle(int oValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 1042–1045 */
/* addr: 0x00186840  size: 68 bytes */
int SND_fn_bIsTypePlayingSound(int s32_TypeId, CLinkTypeActor* po_TypeActor)
{
    /* line map: */
    /*   line 1042 @ +0x000 */
    /*   line 1045 @ +0x000 */
    /*   line 1045 @ +0x000 */
    /*   line 1045 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00186890  size: 8 bytes */
void SND_fn_pstGetLastEventForObjectTypeSound(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001868a0  size: 8 bytes */
void SND_fn_vSetMusicFadeOut(void)
{
}

/* addr: 0x001868b0  size: 8 bytes */
int SND_fn_bGetStereoSound(void)
{
    return g_bInStereo;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 964–964 */
/* addr: 0x001868c0  size: 48 bytes */
void SND_fn_vSetPan(int b_pan)
{
    /* line map: */
    /*   line 964 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 947–947 */
/* addr: 0x00186900  size: 16 bytes */
void SND_fn_vSetStereoSound(int b_Stereo)
{
    /* line map: */
    /*   line 947 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00186910  size: 8 bytes */
void SND_fn_vSetDopplerFactorSound(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 823–928 */
/* addr: 0x00186920  size: 444 bytes */
void SND_fn_vSynchroSound(void)
{
    int currentPause;
    /* aggregate */ int o_Singleton;
    signed char init;
    int inPause;
    signed char init;
    /* line map: */
    /*   line 823 @ +0x000 */
    /*   line 864 @ +0x000 */
    /*   line 870 @ +0x000 */
    /*   line 872 @ +0x000 */
    /*   line 874 @ +0x000 */
    /*   line 876 @ +0x000 */
    /*   line 887 @ +0x000 */
    /*   line 898 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 806–806 */
/* addr: 0x00186d00  size: 12 bytes */
void SND_fn_vResetLastMarker(void)
{
    /* line map: */
    /*   line 806 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00186d10  size: 8 bytes */
int SND_fn_s32GetLastMarker(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00186d20  size: 8 bytes */
void SND_fn_vChangeVolumeSound(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 654–685 */
/* addr: 0x00186de0  size: 300 bytes */
int SND_fn_bIsSoundPlaying(_SND_tduRefEvt u_RefEvt, CExtraEventActor* poEEActor, CLinkActor* poActor, /* function pointer */ int ro_TypeActorCont, CResData* po_ResData)
{
    iterator it_Type;
    /* line map: */
    /*   line 654 @ +0x000 */
    /*   line 654 @ +0x000 */
    /*   line 658 @ +0x000 */
    /*   line 660 @ +0x000 */
    /*   line 667 @ +0x000 */
    /*   line 672 @ +0x000 */
    /*   line 675 @ +0x000 */
    /*   line 678 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 608–648 */
/* addr: 0x00186f10  size: 204 bytes */
int SND_fn_s32GetSoundHandleState(int s32_ObjectId, int s32_TypeId, int s32_HandleId, CExtraEventActor* po_EventActor, CLinkActor* po_LinkActor, CLinkTypeActor* po_TypeActor)
{
    int s32_Answer;
    /* line map: */
    /*   line 608 @ +0x000 */
    /*   line 608 @ +0x000 */
    /*   line 614 @ +0x000 */
    /*   line 618 @ +0x000 */
    /*   line 624 @ +0x000 */
    /*   line 633 @ +0x000 */
    /*   line 636 @ +0x000 */
    /*   line 640 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 451–572 */
/* addr: 0x00186fe0  size: 940 bytes */
int SND_fn_s32SendRequestSound(int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, void (*pfn_Proc)(int), CExtraEventActor* po_EventActor, CLinkTypeActor* po_TypeActor, CLinkActor* po_LinkActor, CResData* po_ResData, /* function pointer */ int po_Channel, CExtraEventActor* po_EventActor, CLinkTypeActor* po_TypeActor, CLinkActor* po_LinkActor, CEventResData* ro_EventResData)
{
    int s32_SemId;
    int s32_Answer;
    int s32_SoundHandle;
    signed char init;
    int s32_Handle;
    signed char init;
    /* line map: */
    /*   line 451 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 457 @ +0x000 */
    /*   line 466 @ +0x000 */
    /*   line 484 @ +0x000 */
    /*   line 489 @ +0x000 */
    /*   line 497 @ +0x000 */
    /*   line 502 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 407–422 */
/* addr: 0x001874e0  size: 224 bytes */
int SND_fn_s32SendRequestJingle(int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int), int s32_VolumeLine)
{
    int s32_Answer;
    /* line map: */
    /*   line 407 @ +0x000 */
    /*   line 407 @ +0x000 */
    /*   line 413 @ +0x000 */
    /*   line 418 @ +0x000 */
    /*   line 422 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 374–391 */
/* addr: 0x001875c0  size: 284 bytes */
int SND_fn_s32SendRequestSemaphoreSound(int s32_SemaphoreId, int s32_ObjectId, int s32_ChannelId, int s32_TypeId, _SND_tduRefEvt u_RefEvt, int s32_Prio, void (*pfn_Proc)(int), /* function pointer */ int po_Channel)
{
    int s32_Answer;
    /* line map: */
    /*   line 374 @ +0x000 */
    /*   line 374 @ +0x000 */
    /*   line 379 @ +0x000 */
    /*   line 383 @ +0x000 */
    /*   line 387 @ +0x000 */
    /*   line 391 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 352–354 */
/* addr: 0x001876e0  size: 76 bytes */
int SND_fn_bRemoveSemaphoreSound(int s32_SemaphoreId)
{
    int b_Answer;
    /* line map: */
    /*   line 352 @ +0x000 */
    /*   line 354 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 337–339 */
/* addr: 0x00187730  size: 92 bytes */
int SND_fn_s32AddSemaphoreSound(int s32_SemaphoreId, int s32_SemaphoreSize)
{
    int s32_Answer;
    /* line map: */
    /*   line 337 @ +0x000 */
    /*   line 339 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 324–324 */
/* addr: 0x00187790  size: 32 bytes */
int SND_fn_hGetCurrentSoundHandle(void)
{
    /* line map: */
    /*   line 324 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 297–297 */
/* addr: 0x001877b0  size: 12 bytes */
void SND_fn_vClearLastTheme(void)
{
    /* line map: */
    /*   line 297 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 280–286 */
/* addr: 0x001877c0  size: 48 bytes */
int SND_fn_bGetLastTheme(_SND_tduRefEvt* p_RefEvt)
{
    int bRet;
    /* line map: */
    /*   line 280 @ +0x000 */
    /*   line 280 @ +0x000 */
    /*   line 286 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001877f0  size: 8 bytes */
void fn_vUnlockSound__Fv(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 240–254 */
/* addr: 0x00187800  size: 104 bytes */
unsigned char fn_bLockSound__Fb(unsigned char bIgnoreIfCantAccess)
{
    unsigned char bRet;
    /* line map: */
    /*   line 240 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 248 @ +0x000 */
    /*   line 254 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\snd3d.cpp lines 176–225 */
/* addr: 0x00187870  size: 272 bytes */
void SND_fn_vSaveLastTheme(CResObjParams* pParams, CResData* po_ResData, CExtraEventActor* po_EventActor, CLinkActor* po_LinkActor, CLinkTypeActor* po_TypeActor, CEventResData* ro_EventResData)
{
    unsigned int uiResult;
    unsigned char flag;
    /* line map: */
    /*   line 176 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 188 @ +0x000 */
    /*   line 193 @ +0x000 */
    /*   line 199 @ +0x000 */
    /*   line 202 @ +0x000 */
    /*   line 205 @ +0x000 */
    /*   line 209 @ +0x000 */
    /* TODO: decompile from asm/... */
}
