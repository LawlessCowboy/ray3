/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct C3DDirection C3DDirection;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct iterator_base iterator_base;
typedef struct CLinkActor CLinkActor;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CResData CResData;
typedef struct TTypedVar TTypedVar;
typedef struct CIdObj CIdObj;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct _RollOffParam _RollOffParam;
typedef struct sTreeNode sTreeNode;
typedef struct C2DParams C2DParams;
typedef struct const_iterator const_iterator;
typedef union CVal CVal;
typedef struct CRolloffParam CRolloffParam;
typedef struct CVar CVar;
typedef struct CEventResData CEventResData;
typedef struct smap smap;
typedef struct CRefIdObj CRefIdObj;
typedef struct CResObj CResObj;
typedef struct streebase streebase;
typedef struct smap smap;
typedef struct TBaseVarType TBaseVarType;
typedef struct sTreeNode sTreeNode;
typedef struct CVarData CVarData;
typedef struct CSwitchResData CSwitchResData;
typedef struct CActorResObj CActorResObj;
typedef struct CFloatVarType CFloatVarType;
typedef struct _stVector _stVector;
typedef struct C3DParam C3DParam;
typedef struct CResObjState CResObjState;
typedef struct CBoolRefParam CBoolRefParam;
typedef struct CLookupElement CLookupElement;
typedef struct smap smap;
typedef struct sTreeLink sTreeLink;
typedef struct smap smap;
typedef struct CProgramHdr CProgramHdr;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CSrcFlow CSrcFlow;
typedef struct sset sset;
typedef struct CSndVarType CSndVarType;
typedef struct CResType CResType;
typedef struct CIdObjPtrMgr CIdObjPtrMgr;
typedef struct TTypedVar TTypedVar;
typedef struct sstring sstring;
typedef struct CClassInfo CClassInfo;
typedef struct CActorResData CActorResData;
typedef struct TTypedVarData TTypedVarData;
typedef struct CBaseVarType CBaseVarType;
typedef struct smap smap;
typedef struct CNotifTarget CNotifTarget;
typedef struct sTreeNode sTreeNode;
typedef struct CSwitchElement CSwitchElement;
typedef struct V3Ds V3Ds;
typedef struct TTypedVar TTypedVar;
typedef struct CCmdInterface CCmdInterface;
typedef struct smap smap;
typedef struct sset sset;
typedef struct iterator iterator;
typedef struct sset sset;
typedef struct smap smap;
typedef struct CCritSect CCritSect;

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
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

struct iterator_base {
    int _Ptr; /* +0x0 */
};

struct CLinkActor {
    int mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    CExtraEventActor m_oExtraActors; /* +0xc */
    int m_poNext; /* +0x74 */
    int m_poPrevious; /* +0x78 */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    int mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    /* aggregate */ int mstIActor; /* +0x88 */
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

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct CIdObjPtr {
    int m_poElmt; /* +0x0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
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
    int poBoolVar; /* +0x0 */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct CVar {
    int m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
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

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CResObj {
    int m_roType; /* +0x4 */
    int m_poResData; /* +0x8 */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct TBaseVarType {
    /* C++ base CBaseVarType at +0x0. */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct CVarData {
    int m_poType; /* +0x4 */
};

struct CSwitchResData {
    /* C++ base CResData at +0x0. */
    unsigned int m_uiNbElmts; /* +0x18 */
    unsigned int m_uiInfoType; /* +0x1c */
    unsigned int m_uiDefaultIndex; /* +0x20 */
    float m_fVolume; /* +0x24 */
    int m_paElements; /* +0x28 */
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

struct CFloatVarType {
    /* C++ base TBaseVarType at +0x0. */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
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

struct CBoolRefParam {
    unsigned int uiRefType; /* +0x0 */
    CVal m_uValue; /* +0x4 */
    unsigned int m_uiValue; /* +0x8 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    /* aggregate */ int m_oId; /* +0x4 */
    int m_poIdObj; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
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
    int pstPtr; /* +0x0 */
};

struct CSrcFlow {
    /* aggregate */ int CFlow; /* +0x8 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CSndVarType {
    /* aggregate */ int m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
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

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CClassInfo {
    unsigned int m_uiObjSize; /* +0x0 */
    sTreeNode m_oNode; /* +0x4 */
    int m_czClassName; /* +0x1c */
    unsigned int m_uiVersionId; /* +0x20 */
    int m_pfnCreateObj; /* +0x24 */
    int m_pfnStreamObj; /* +0x28 */
    int m_poBaseClass; /* +0x2c */
};

struct CActorResData {
    /* C++ base CResData at +0x0. */
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    int m_poGlobalVarAccess; /* +0x48 */
};

struct TTypedVarData {
    /* C++ base CVarData at +0x0. */
    float m_oValue; /* +0x8 */
};

struct CBaseVarType {
    /* C++ base CSndVarType at +0x0. */
    /* aggregate */ int m_eBaseType; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CNotifTarget {
    /* C++ base CInterface at +0x0. */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct CSwitchElement {
    CIdObjPtr m_pTarget; /* +0x0 */
    unsigned int m_uiValue; /* +0x4 */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    int m_oValue; /* +0x1c */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

unsigned int g_uiLastSwitchValue;
unsigned int g_uiNextSwitchValue;
int ss32RefreshChannelCount[5];
int ss32CurrentRefreshChannel;
int SND_g_a_tdstMusicMarkerSlots;
int SND_g_iNbMusicMarkerSlots;
/* aggregate */ int g_oMusicMarkerNotifTarget;
CResObjParams ms_oPool;
char g_szMarker[2];
/* aggregate */ int g_oMarkerNotifTarget;
CExtraEventActor ms_oPosPool;
CExtraEventActor ms_oNoPosPool;
anon_0 __vt__18CMarkerNotifTarget;
anon_4 __vt__Q216CExtraEventActor13CResObjParams;
anon_7 __vt__Q24usnd10CInterface;
unsigned char g_bUseMarkersForNextRequest;
sTreeLink _NilElmt;
anon_3 __vt__Q24usnd12TTypedVar<i>;
anon_5 __vt__Q24usnd12TTypedVar<f>;
anon_6 __vt__Q24usnd12CNotifTarget;
anon_1 __vt__23CMusicMarkerNotifTarget;
int ms_czNil;
anon_2 __vt__Q24usnd15CVarNotifTarget;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 90–137 */
/* addr: 0x001cd970  size: 384 bytes */
unsigned int ms_czNil__Q24usnd7sstring(void* uiIOPAddr, unsigned int uiSize)
{
    int iTransfered;
    int iLength;
    /* line map: */
    /*   line 90 @ +0x000 */
    /*   line 94 @ +0x000 */
    /*   line 105 @ +0x000 */
    /*   line 110 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 124 @ +0x000 */
    /*   line 128 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 1005–1005 */
/* addr: 0x001cdaf0  size: 68 bytes */
void CExtraEventActorPool::f_vSalvageActor(CExtraEventActor* poEventActor)
{
    /* line map: */
    /*   line 1005 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 987–997 */
/* addr: 0x001cdb40  size: 244 bytes */
void CExtraEventActorPool::fs_poGetAnActor(int s32_ACPObjectId, CExtraEventActor* poEventActor)
{
    /* line map: */
    /*   line 987 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 990 @ +0x000 */
    /*   line 993 @ +0x000 */
    /*   line 997 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 961–975 */
/* addr: 0x001cdc40  size: 336 bytes */
unsigned char CExtraEventActor::mfn_bExecute(int s32_CmdId, /* function pointer */ int roId, CResObjParams* pParams)
{
    unsigned char bAnswer;
    /* line map: */
    /*   line 961 @ +0x000 */
    /*   line 964 @ +0x000 */
    /*   line 968 @ +0x000 */
    /*   line 970 @ +0x000 */
    /*   line 975 @ +0x000 */
    /*   line 975 @ +0x000 */
    /*   line 975 @ +0x000 */
    /*   line 975 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 825–953 */
/* addr: 0x001cdd90  size: 1336 bytes */
unsigned char CExtraEventActor::mfn_bPlay(CEventResData* ro_EventResData, int s32_EventId, void (*pfn_Proc)(int), CEventResData* po_EventResData, CIdObjPtrMgr* ro_IdObjPtrMgr, CSwitchResData* pSwitchResData, CResObj* po_ResObj, CResData* po_ResData)
{
    float fNewPitch;
    /* aggregate */ int o_PlayId;
    /* aggregate */ int o_StopId;
    /* array */ int st_Stack[4];
    int s32_PlayHighWord;
    int s32_PlayLowWord;
    int s32_StopHighWord;
    int s32_StopLowWord;
    /* aggregate */ int a1_Params;
    unsigned int uiInfoType;
    unsigned char b_Answer;
    /* line map: */
    /*   line 825 @ +0x000 */
    /*   line 829 @ +0x000 */
    /*   line 833 @ +0x000 */
    /*   line 837 @ +0x000 */
    /*   line 851 @ +0x000 */
    /*   line 854 @ +0x000 */
    /*   line 857 @ +0x000 */
    /*   line 861 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001ce2d0  size: 8 bytes */
void SND_fn_vSetSwitchMaterial(int iNB)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001ce2e0  size: 8 bytes */
int SND_fn_iGetSwitchMaterial(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 799–799 */
/* addr: 0x001ce2f0  size: 20 bytes */
void CMarkerNotifTarget::fv_vNotify(void* pvParams)
{
    /* line map: */
    /*   line 799 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 754–777 */
/* addr: 0x001ce310  size: 276 bytes */
unsigned char CExtraEventActor::fn_bIsSoundPlaying(int s32_Handle, CResObjParams* pParams)
{
    CBoolRefParam oBoolRef;
    unsigned int uiObjNum;
    unsigned int uiResult;
    /* aggregate */ int apObjects;
    /* line map: */
    /*   line 754 @ +0x000 */
    /*   line 757 @ +0x000 */
    /*   line 760 @ +0x000 */
    /*   line 764 @ +0x000 */
    /*   line 768 @ +0x000 */
    /*   line 770 @ +0x000 */
    /*   line 772 @ +0x000 */
    /*   line 777 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 722–745 */
/* addr: 0x001ce430  size: 284 bytes */
unsigned char CExtraEventActor::fn_bIsSoundPlaying(CResData* po_ResData, CResObjParams* pParams)
{
    CBoolRefParam oBoolRef;
    unsigned int uiObjNum;
    unsigned int uiResult;
    /* aggregate */ int apObjects;
    /* line map: */
    /*   line 722 @ +0x000 */
    /*   line 725 @ +0x000 */
    /*   line 728 @ +0x000 */
    /*   line 731 @ +0x000 */
    /*   line 735 @ +0x000 */
    /*   line 738 @ +0x000 */
    /*   line 740 @ +0x000 */
    /*   line 745 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 652–697 */
/* addr: 0x001ce550  size: 572 bytes */
unsigned char CExtraEventActor::fn_bIsResourcesAllowed(CResData* ro_ResData, CResObjParams* pParams, CProgramHdr* ro_ProgHdr)
{
    CBoolRefParam oBoolRef;
    unsigned int uiObjNum;
    unsigned int uiResult;
    char* czStrTheme;
    /* aggregate */ int apObjects;
    /* line map: */
    /*   line 652 @ +0x000 */
    /*   line 655 @ +0x000 */
    /*   line 660 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 667 @ +0x000 */
    /*   line 676 @ +0x000 */
    /*   line 679 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 592–646 */
/* addr: 0x001ce790  size: 564 bytes */
unsigned char CExtraEventActor::mfn_bApplyPositionAndVelocity(C3DParam* ro_Params)
{
    float f32_Value;
    _stVector stVelocity;
    _stVector stPos;
    /* line map: */
    /*   line 592 @ +0x000 */
    /*   line 592 @ +0x000 */
    /*   line 598 @ +0x000 */
    /*   line 603 @ +0x000 */
    /*   line 603 @ +0x000 */
    /*   line 608 @ +0x000 */
    /*   line 613 @ +0x000 */
    /*   line 618 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 548–585 */
/* addr: 0x001ce9d0  size: 576 bytes */
unsigned char CExtraEventActor::mfn_bApplyAllParams(unsigned char bforce)
{
    unsigned char b_Answer;
    /* line map: */
    /*   line 548 @ +0x000 */
    /*   line 554 @ +0x000 */
    /*   line 562 @ +0x000 */
    /*   line 562 @ +0x000 */
    /*   line 571 @ +0x000 */
    /*   line 573 @ +0x000 */
    /*   line 575 @ +0x000 */
    /*   line 580 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 509–542 */
/* addr: 0x001cec10  size: 396 bytes */
unsigned char CExtraEventActor::mfn_bApplySectorActivation(void)
{
    iterator it;
    unsigned char b_Answer;
    /* line map: */
    /*   line 509 @ +0x000 */
    /*   line 509 @ +0x000 */
    /*   line 523 @ +0x000 */
    /*   line 523 @ +0x000 */
    /*   line 527 @ +0x000 */
    /*   line 530 @ +0x000 */
    /*   line 533 @ +0x000 */
    /*   line 535 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 440–448 */
/* addr: 0x001cedc0  size: 144 bytes */
void CExtraEventActor::f_vDesInit(void)
{
    /* line map: */
    /*   line 440 @ +0x000 */
    /*   line 442 @ +0x000 */
    /*   line 444 @ +0x000 */
    /*   line 444 @ +0x000 */
    /*   line 448 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 423–432 */
/* addr: 0x001cee50  size: 264 bytes */
void ~CExtraEventActor(void)
{
    /* line map: */
    /*   line 423 @ +0x000 */
    /*   line 426 @ +0x000 */
    /*   line 429 @ +0x000 */
    /*   line 432 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 334–415 */
/* addr: 0x001cef60  size: 632 bytes */
void CExtraEventActor::f_vInit(CLinkTypeActor* ro_ActorType, int s32_ACPObjectId, int s32_ACPChannelId, CEventResData* poResData, CFloatVarType* roFloatVarType)
{
    int i;
    /* line map: */
    /*   line 336 @ +0x000 */
    /*   line 336 @ +0x000 */
    /*   line 334 @ +0x000 */
    /*   line 338 @ +0x000 */
    /*   line 341 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 352 @ +0x000 */
    /*   line 356 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 288–326 */
/* addr: 0x001cf1e0  size: 164 bytes */
void CExtraEventActor::f_vInitActorObj(int s32_ACPObjectId, TTypedVar* pMarkerVar, CActorResData* poActorResData)
{
    /* line map: */
    /*   line 299 @ +0x000 */
    /*   line 288 @ +0x000 */
    /*   line 302 @ +0x000 */
    /*   line 307 @ +0x000 */
    /*   line 313 @ +0x000 */
    /*   line 321 @ +0x000 */
    /*   line 326 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 256–256 */
/* addr: 0x001cf290  size: 84 bytes */
void CExtraEventActor(void)
{
    /* line map: */
    /*   line 256 @ +0x000 */
    /*   line 256 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 244–246 */
/* addr: 0x001cf2f0  size: 36 bytes */
void CExtraEventActor::f_vInsertAfter(CExtraEventActor* pParam)
{
    /* line map: */
    /*   line 244 @ +0x000 */
    /*   line 246 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 233–239 */
/* addr: 0x001cf320  size: 52 bytes */
void CExtraEventActor::f_vIsolate(void)
{
    /* line map: */
    /*   line 233 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 239 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 174–174 */
/* addr: 0x001cf360  size: 16 bytes */
void Q216CExtraEventActor13CResObjParams::fv_vAddRef(void)
{
    /* line map: */
    /*   line 174 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 157–168 */
/* addr: 0x001cf370  size: 164 bytes */
void Q216CExtraEventActor13CResObjParams::fv_vRelease(void)
{
    /* line map: */
    /*   line 157 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 168 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001cf420  size: 8 bytes */
void SND_fn_iSetNbMusicMarkerSlots(int iNB)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001cf430  size: 8 bytes */
void SND_fn_p_stSetMusicMarkerSlots(/* function pointer */ int p_stPointer)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001cf440  size: 8 bytes */
int SND_fn_iGetNbMusicMarkerSlots(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001cf450  size: 8 bytes */
void SND_fn_p_stGetMusicMarkerSlots(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcextraeventactor.cpp lines 93–109 */
/* addr: 0x001cf460  size: 412 bytes */
void CMusicMarkerNotifTarget::fv_vVarChanged(CVar* roVar)
{
    int i;
    sstring szMarker;
    /* line map: */
    /*   line 93 @ +0x000 */
    /*   line 93 @ +0x000 */
    /*   line 98 @ +0x000 */
    /*   line 102 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 105 @ +0x000 */
    /*   line 107 @ +0x000 */
    /*   line 109 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001cf600  size: 8 bytes */
void CMusicMarkerNotifTarget::fv_vVarDestroyed(void)
{
    /* TODO: decompile from asm/... */
}
