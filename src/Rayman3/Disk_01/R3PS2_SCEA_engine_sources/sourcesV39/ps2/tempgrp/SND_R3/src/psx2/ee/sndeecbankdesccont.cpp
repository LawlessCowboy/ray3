/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesccont.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sTreeNode sTreeNode;
typedef struct CPS2IdObjInfo CPS2IdObjInfo;
typedef struct smap smap;
typedef struct CResData CResData;
typedef struct CLinkActor CLinkActor;
typedef struct smap smap;
typedef struct sstring sstring;
typedef struct CBankDescCont CBankDescCont;
typedef struct CResObj CResObj;
typedef struct iterator_base iterator_base;
typedef struct CVar CVar;
typedef struct CCritSect CCritSect;
typedef struct sTreeNode sTreeNode;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CBankDesc CBankDesc;
typedef struct CResObjState CResObjState;
typedef struct sTreeLink sTreeLink;
typedef struct CResObjParams CResObjParams;
typedef struct CActorResData CActorResData;
typedef struct CBoolRefParam CBoolRefParam;
typedef struct sset sset;
typedef struct smap smap;
typedef struct iterator iterator;
typedef struct _RollOffParam _RollOffParam;
typedef struct sTreeNode sTreeNode;
typedef struct C3DParam C3DParam;
typedef struct sTreeNode sTreeNode;
typedef struct CResType CResType;
typedef struct CActorResObj CActorResObj;
typedef struct CAllocBlock CAllocBlock;
typedef struct smap smap;
typedef struct iterator iterator;
typedef struct V3Ds V3Ds;
typedef struct CSndVarType CSndVarType;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct C2DParams C2DParams;
typedef struct smap smap;
typedef struct _stVector _stVector;
typedef struct TTypedVar TTypedVar;
typedef struct PostponedPlay PostponedPlay;
typedef struct streebase streebase;
typedef struct CIdObj CIdObj;
typedef struct smap smap;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct smap smap;
typedef struct CRolloffParam CRolloffParam;
typedef struct sTreeNode sTreeNode;
typedef struct smap smap;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct sset sset;
typedef struct CLookupElement CLookupElement;
typedef struct CCmdInterface CCmdInterface;
typedef struct CEventResData CEventResData;
typedef struct sset sset;
typedef struct iterator iterator;
typedef struct CRefIdObj CRefIdObj;
typedef struct C3DDirection C3DDirection;
typedef struct smap smap;
typedef union CVal CVal;

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct CPS2IdObjInfo {
    /* aggregate */ int m_oId; /* +0x0 */
    unsigned int m_uiOffset; /* +0x8 */
    sstring m_strFileName; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
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

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CBankDescCont {
    /* C++ base smap at +0x0. */
    /* aggregate */ int moLoader; /* +0x10 */
};

struct CResObj {
    int m_roType; /* +0x4 */
    int m_poResData; /* +0x8 */
};

struct iterator_base {
    int _Ptr; /* +0x0 */
};

struct CVar {
    int m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    int m_oValue; /* +0x10 */
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

struct CBankDesc {
    /* C++ base sset at +0x0. */
    int mroLoader; /* +0x10 */
    sstring mostringName; /* +0x14 */
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

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
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

struct CActorResData {
    /* C++ base CResData at +0x0. */
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    int m_poGlobalVarAccess; /* +0x48 */
};

struct CBoolRefParam {
    unsigned int uiRefType; /* +0x0 */
    CVal m_uValue; /* +0x4 */
    unsigned int m_uiValue; /* +0x8 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
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

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
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

struct CAllocBlock {
    int m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct CSndVarType {
    /* aggregate */ int m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    int mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    /* aggregate */ int mstIActor; /* +0x88 */
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

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct PostponedPlay {
    int m_pNext; /* +0x0 */
    int m_pPrev; /* +0x4 */
    int m_pData; /* +0x8 */
    int m_s32Handle; /* +0xc */
    int m_s32LastCmd; /* +0x10 */
    int m_pProc; /* +0x14 */
    int m_pEActor; /* +0x18 */
    unsigned int m_u32EngineContext; /* +0x1c */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CIdObjPtr {
    int m_poElmt; /* +0x0 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    /* aggregate */ int m_oId; /* +0x4 */
    int m_poIdObj; /* +0xc */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
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

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

union CVal {
    int pcBool; /* +0x0 */
    int poBoolVar; /* +0x0 */
};

int ss32CurrentRefreshChannel;
int ms_pFree;
int ms_pLast;
int ms_pFirst;
int ms_czNil;
sTreeLink _NilElmt;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesccont.cpp lines 36–40 */
/* addr: 0x0018beb0  size: 304 bytes */
void _NilElmt__Q24usnd9streebase(char* pch_FilePath)
{
    /* line map: */
    /*   line 36 @ +0x000 */
    /*   line 38 @ +0x000 */
    /*   line 40 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesccont.cpp lines 64–67 */
/* addr: 0x0018cad0  size: 468 bytes */
void CBankDescCont::mfn_poAddBankDesc(char* pch_FileName)
{
    sstring o_Key;
    /* line map: */
    /*   line 64 @ +0x000 */
    /*   line 67 @ +0x000 */
    /* TODO: decompile from asm/... */
}
