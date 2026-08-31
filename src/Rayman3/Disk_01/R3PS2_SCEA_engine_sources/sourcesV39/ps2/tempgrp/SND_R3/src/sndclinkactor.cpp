/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sTreeNode sTreeNode;
typedef struct const_iterator const_iterator;
typedef struct CResObjParams CResObjParams;
typedef struct CPS2IdObjInfo CPS2IdObjInfo;
typedef struct CSndVarType CSndVarType;
typedef struct CResData CResData;
typedef struct CLinkActor CLinkActor;
typedef struct CActorResObj CActorResObj;
typedef struct sTreeNode sTreeNode;
typedef struct smap smap;
typedef struct iterator_base iterator_base;
typedef struct CResObj CResObj;
typedef struct CActorResData CActorResData;
typedef struct sTreeLink sTreeLink;
typedef struct CAllocBlock CAllocBlock;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct sTreeNode sTreeNode;
typedef struct sstring sstring;
typedef struct iterator iterator;
typedef struct smap smap;
typedef struct _stVector _stVector;
typedef struct sTreeNode sTreeNode;
typedef struct CResType CResType;
typedef struct CCritSect CCritSect;
typedef struct C3DDirection C3DDirection;
typedef struct _RollOffParam _RollOffParam;
typedef struct iterator iterator;
typedef struct iterator iterator;
typedef struct CCmdInterface CCmdInterface;
typedef struct TTypedVar TTypedVar;
typedef struct smap smap;
typedef struct CBankDesc CBankDesc;
typedef struct smap smap;
typedef struct streebase streebase;
typedef struct sset sset;
typedef struct CBankDescCont CBankDescCont;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct sset sset;
typedef struct C3DParam C3DParam;
typedef struct iterator iterator;
typedef struct smap smap;
typedef struct sset sset;
typedef struct iterator iterator;
typedef struct V3Ds V3Ds;
typedef struct CResObjState CResObjState;
typedef struct CVar CVar;
typedef struct CIdObj CIdObj;
typedef struct CRefIdObj CRefIdObj;
typedef struct C2DParams C2DParams;
typedef struct smap smap;
typedef struct CRolloffParam CRolloffParam;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct smap smap;
typedef struct smap smap;
typedef struct smap smap;
typedef struct CResObjParams CResObjParams;
typedef struct C3DParam C3DParam;
typedef struct smap smap;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CActorResObj CActorResObj;
typedef struct TTypedVar TTypedVar;
typedef struct smap smap;
typedef struct CVar CVar;
typedef struct CResObjState CResObjState;
typedef struct CResData CResData;
typedef struct V3Ds V3Ds;
typedef struct sstring sstring;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct C2DParams C2DParams;
typedef struct smap smap;
typedef struct CResObj CResObj;
typedef struct _stVector _stVector;
typedef struct CSndVarType CSndVarType;
typedef struct CCmdInterface CCmdInterface;
typedef struct CCritSect CCritSect;
typedef struct CResType CResType;
typedef struct streebase streebase;
typedef struct sTreeLink sTreeLink;
typedef struct _RollOffParam _RollOffParam;
typedef struct smap smap;
typedef struct C3DDirection C3DDirection;
typedef struct CRolloffParam CRolloffParam;
typedef struct CIdObj CIdObj;
typedef struct sset sset;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CRefIdObj CRefIdObj;
typedef struct CLinkActor CLinkActor;
typedef struct CResObj CResObj;
typedef struct CEventResData CEventResData;
typedef struct CResObjState CResObjState;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CVar CVar;
typedef struct CResObjParams CResObjParams;
typedef struct smap smap;
typedef struct _stVector _stVector;
typedef struct CActorResObj CActorResObj;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct smap smap;
typedef struct sstring sstring;
typedef struct C2DParams C2DParams;
typedef struct CLookupElement CLookupElement;
typedef struct TTypedVar TTypedVar;
typedef struct CRolloffParam CRolloffParam;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CCmdInterface CCmdInterface;
typedef struct _RollOffParam _RollOffParam;
typedef struct CSndVarType CSndVarType;
typedef struct CIdObj CIdObj;
typedef struct CRefIdObj CRefIdObj;
typedef struct C3DDirection C3DDirection;
typedef struct streebase streebase;
typedef struct CResData CResData;
typedef struct CCritSect CCritSect;
typedef struct sTreeLink sTreeLink;
typedef struct smap smap;
typedef struct CResType CResType;
typedef struct C3DParam C3DParam;
typedef struct smap smap;
typedef struct sset sset;
typedef struct V3Ds V3Ds;

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct const_iterator {
    int _Ptr; /* +0x0 */
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

struct CPS2IdObjInfo {
    /* aggregate */ int m_oId; /* +0x0 */
    unsigned int m_uiOffset; /* +0x8 */
    sstring m_strFileName; /* +0xc */
};

struct CSndVarType {
    /* aggregate */ int m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct CLinkActor {
    int mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    CExtraEventActor m_oExtraActors; /* +0xc */
    int m_poNext; /* +0x74 */
    int m_poPrevious; /* +0x78 */
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

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct iterator_base {
    int _Ptr; /* +0x0 */
};

struct CResObj {
    int m_roType; /* +0x4 */
    int m_poResData; /* +0x8 */
};

struct CActorResData {
    /* C++ base CResData at +0x0. */
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    int m_poGlobalVarAccess; /* +0x48 */
};

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
};

struct CAllocBlock {
    int m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    int mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    /* aggregate */ int mstIActor; /* +0x88 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
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

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CBankDesc {
    /* C++ base sset at +0x0. */
    int mroLoader; /* +0x10 */
    sstring mostringName; /* +0x14 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CBankDescCont {
    /* C++ base smap at +0x0. */
    /* aggregate */ int moLoader; /* +0x10 */
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

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct iterator {
    /* C++ base const_iterator at +0x0. */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
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

struct CVar {
    int m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct CResObjParams {
    /* C++ base CInterface at +0x0. */
    int m_poNext; /* +0x4 */
    int m_poPrevious; /* +0x8 */
    unsigned int m_uiNbRefs; /* +0xc */
    int m_s32Handle; /* +0x10 */
    int m_poResData; /* +0x14 */
    int m_pfn_Proc; /* +0x18 */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    int mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    /* aggregate */ int mstIActor; /* +0x88 */
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

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct sstring {
    int m_pcData; /* +0x0 */
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

struct CLinkActor {
    int mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    CExtraEventActor m_oExtraActors; /* +0xc */
    int m_poNext; /* +0x74 */
    int m_poPrevious; /* +0x78 */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CResObj {
    int m_roType; /* +0x4 */
    int m_poResData; /* +0x8 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct CSndVarType {
    /* aggregate */ int m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CLinkActor {
    int mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    CExtraEventActor m_oExtraActors; /* +0xc */
    int m_poNext; /* +0x74 */
    int m_poPrevious; /* +0x78 */
};

struct CResObj {
    int m_roType; /* +0x4 */
    int m_poResData; /* +0x8 */
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

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    int mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    /* aggregate */ int mstIActor; /* +0x88 */
};

struct CVar {
    int m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
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

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
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

struct CIdObjPtr {
    int m_poElmt; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    /* aggregate */ int m_oId; /* +0x4 */
    int m_poIdObj; /* +0xc */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct CSndVarType {
    /* aggregate */ int m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
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

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

static /* aggregate */ int gst_IGhostActor;
CRolloffParam moRolloff;
_RollOffParam moACPRolloff;
/* aggregate */ int __dt;
sTreeLink _NilElmt;
/* aggregate */ int __dt;
int ms_czNil;
anon_0 __vt__14CLinkTypeActor;
CLinkActor ms_oPool;
anon_0 __vt__10CLinkActor;

/* addr: 0x001caf00  size: 12 bytes */
void CLinkActorPool::f_vSalvageActor(sTreeNode* _pNode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 229–235 */
/* addr: 0x001ccf60  size: 152 bytes */
void CLinkActorPool::fs_poGetAnActor(CLinkActor* poActor)
{
    /* line map: */
    /*   line 229 @ +0x000 */
    /*   line 229 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 235 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 213–221 */
/* addr: 0x001cd000  size: 96 bytes */
unsigned char CLinkActor::mfn_bSynchroniseActorInstance(CExtraEventActor* poEEActor)
{
    unsigned char b_Answer;
    /* line map: */
    /*   line 213 @ +0x000 */
    /*   line 216 @ +0x000 */
    /*   line 218 @ +0x000 */
    /*   line 221 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 179–204 */
/* addr: 0x001cd060  size: 252 bytes */
unsigned char CLinkActor::mfn_bExecuteActorInstance(void)
{
    unsigned char b_Answer;
    /* line map: */
    /*   line 180 @ +0x000 */
    /*   line 179 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 185 @ +0x000 */
    /*   line 188 @ +0x000 */
    /*   line 190 @ +0x000 */
    /*   line 194 @ +0x000 */
    /*   line 197 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 144–173 */
/* addr: 0x001cd160  size: 316 bytes */
void CLinkActor::mfn_poAddExtraEventActorInstance(int s32_ChannelId, CEventResData* poResData, CExtraEventActor* poEventActor)
{
    int s32_InstanceId;
    signed char init;
    /* line map: */
    /*   line 144 @ +0x000 */
    /*   line 149 @ +0x000 */
    /*   line 155 @ +0x000 */
    /*   line 155 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 172 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 122–137 */
/* addr: 0x001cd2a0  size: 92 bytes */
void this(int s32_ChannelId, CEventResData* po_ResData, CExtraEventActor* poEEActor)
{
    /* aggregate */ int e_Type;
    /* line map: */
    /*   line 122 @ +0x000 */
    /*   line 127 @ +0x000 */
    /*   line 130 @ +0x000 */
    /*   line 134 @ +0x000 */
    /*   line 137 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 108–110 */
/* addr: 0x001cd300  size: 36 bytes */
void CLinkActor::f_vInsertAfter(CLinkActor* pParam)
{
    /* line map: */
    /*   line 108 @ +0x000 */
    /*   line 110 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 97–103 */
/* addr: 0x001cd330  size: 52 bytes */
void CLinkActor::f_vIsolate(void)
{
    /* line map: */
    /*   line 97 @ +0x000 */
    /*   line 99 @ +0x000 */
    /*   line 103 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 83–91 */
/* addr: 0x001cd370  size: 84 bytes */
void CLinkActor::f_vDesInit(void)
{
    /* line map: */
    /*   line 83 @ +0x000 */
    /*   line 87 @ +0x000 */
    /*   line 89 @ +0x000 */
    /*   line 91 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 75–77 */
/* addr: 0x001cd3d0  size: 228 bytes */
void CLinkActor::f_vInit(CLinkTypeActor* ro_Type, int s32_ObjectId)
{
    /* line map: */
    /*   line 75 @ +0x000 */
    /*   line 77 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinkactor.cpp lines 70–70 */
/* addr: 0x001cd4c0  size: 148 bytes */
void ~CLinkActor(void)
{
    /* line map: */
    /*   line 70 @ +0x000 */
    /* TODO: decompile from asm/... */
}
