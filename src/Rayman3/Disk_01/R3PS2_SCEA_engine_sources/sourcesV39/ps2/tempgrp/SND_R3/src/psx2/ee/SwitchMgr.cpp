/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CSndVarType CSndVarType;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CResData CResData;
typedef struct CResObjState CResObjState;
typedef struct C3DParam C3DParam;
typedef struct CActorResObj CActorResObj;
typedef struct smap smap;
typedef struct iterator_base iterator_base;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CResType CResType;
typedef struct TTypedVar TTypedVar;
typedef struct CLinkActor CLinkActor;
typedef struct CSwitchElement CSwitchElement;
typedef struct SwitchElt SwitchElt;
typedef struct CIdObj CIdObj;
typedef struct SwitchData SwitchData;
typedef struct sTreeLink sTreeLink;
typedef struct _RollOffParam _RollOffParam;
typedef struct smap smap;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct sset sset;
typedef struct sstring sstring;
typedef struct CSwitchResData CSwitchResData;
typedef struct C2DParams C2DParams;
typedef struct V3Ds V3Ds;
typedef struct CAllocBlock CAllocBlock;
typedef struct CResObj CResObj;
typedef struct CResObjParams CResObjParams;
typedef struct _stVector _stVector;
typedef struct sset sset;
typedef union CVal CVal;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct sTreeNode sTreeNode;
typedef struct CVar CVar;
typedef struct streebase streebase;
typedef struct iterator iterator;
typedef struct CLookupElement CLookupElement;
typedef struct CCritSect CCritSect;
typedef struct CRolloffParam CRolloffParam;
typedef struct CBoolRefParam CBoolRefParam;
typedef struct smap smap;
typedef struct CRefIdObj CRefIdObj;
typedef struct smap smap;
typedef struct C3DDirection C3DDirection;
typedef struct smap smap;
typedef struct smap smap;
typedef struct CCmdInterface CCmdInterface;
typedef struct CActorResData CActorResData;
typedef struct smap smap;
typedef struct smap smap;

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

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
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

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
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

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct iterator_base {
    int _Ptr; /* +0x0 */
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

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct CLinkActor {
    int mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    CExtraEventActor m_oExtraActors; /* +0xc */
    int m_poNext; /* +0x74 */
    int m_poPrevious; /* +0x78 */
};

struct CSwitchElement {
    CIdObjPtr m_pTarget; /* +0x0 */
    unsigned int m_uiValue; /* +0x4 */
};

struct SwitchElt {
    unsigned int m_uiVal; /* +0x0 */
    int m_pData; /* +0x4 */
    /* aggregate */ int m_oId; /* +0x8 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct SwitchData {
    int m_pSwitchData; /* +0x0 */
    int m_pElt; /* +0x4 */
    int m_pNext; /* +0x8 */
    unsigned int m_uiDefault; /* +0xc */
    unsigned int m_nbElt; /* +0x10 */
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

struct CIdObjPtr {
    int m_poElmt; /* +0x0 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CSwitchResData {
    /* C++ base CResData at +0x0. */
    unsigned int m_uiNbElmts; /* +0x18 */
    unsigned int m_uiInfoType; /* +0x1c */
    unsigned int m_uiDefaultIndex; /* +0x20 */
    float m_fVolume; /* +0x24 */
    int m_paElements; /* +0x28 */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct CAllocBlock {
    int m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct CResObj {
    int m_roType; /* +0x4 */
    int m_poResData; /* +0x8 */
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

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

union CVal {
    int pcBool; /* +0x0 */
    int poBoolVar; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct CVar {
    int m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    /* aggregate */ int m_oId; /* +0x4 */
    int m_poIdObj; /* +0xc */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct CBoolRefParam {
    unsigned int uiRefType; /* +0x0 */
    CVal m_uValue; /* +0x4 */
    unsigned int m_uiValue; /* +0x8 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
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

struct CActorResData {
    /* C++ base CResData at +0x0. */
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    int m_poGlobalVarAccess; /* +0x48 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

int ms_pList;
int ms_pTex;
unsigned int ms_nbTex;
unsigned int ms_nbTexMax;
unsigned int ms_uiMutex;
int ms_pDel;
unsigned int ms_nbDel;
unsigned int ms_maxDel;
int ss32CurrentRefreshChannel;
sTreeLink _NilElmt;
/* aggregate */ int ms_NULL;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 32–58 */
/* addr: 0x001d0a40  size: 364 bytes */
void ms_NULL__Q24usnd5CUUID(int s32_ObjectId, int s32_TypeId, int s32_HandleId, int iVolumeLine, JingleList* pList)
{
    int uVol;
    /* line map: */
    /*   line 32 @ +0x000 */
    /*   line 38 @ +0x000 */
    /*   line 41 @ +0x000 */
    /*   line 47 @ +0x000 */
    /*   line 54 @ +0x000 */
    /*   line 58 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 436–459 */
/* addr: 0x001d0bb0  size: 204 bytes */
void SwitchMgr::fs_vAddDataToDelete(CResData* pData, CResData* pDel)
{
    int i;
    /* line map: */
    /*   line 436 @ +0x000 */
    /*   line 436 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 447 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 455 @ +0x000 */
    /*   line 459 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 368–412 */
/* addr: 0x001d0c80  size: 528 bytes */
void SwitchMgr::fs_vStopAll(SwitchData* pTmp, CResObjParams* pParams, CExtraEventActor* poEEActor, CLinkActor* poActor, /* function pointer */ int rLTAC)
{
    iterator itLTAC;
    /* line map: */
    /*   line 368 @ +0x000 */
    /*   line 373 @ +0x000 */
    /*   line 376 @ +0x000 */
    /*   line 379 @ +0x000 */
    /*   line 379 @ +0x000 */
    /*   line 383 @ +0x000 */
    /*   line 386 @ +0x000 */
    /*   line 389 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 325–362 */
/* addr: 0x001d0e90  size: 328 bytes */
void SwitchMgr::fs_vUpdateWaves(/* function pointer */ int pLoader, SwitchData* pTmp)
{
    /* line map: */
    /*   line 325 @ +0x000 */
    /*   line 329 @ +0x000 */
    /*   line 331 @ +0x000 */
    /*   line 337 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 350 @ +0x000 */
    /*   line 353 @ +0x000 */
    /*   line 357 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 319–319 */
/* addr: 0x001d0fe0  size: 12 bytes */
void SwitchMgr::fs_vClearTexture(void)
{
    /* line map: */
    /*   line 319 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 293–310 */
/* addr: 0x001d0ff0  size: 136 bytes */
void SwitchMgr::fs_vAddTexture(unsigned int uiTexture)
{
    char* pTex;
    /* line map: */
    /*   line 293 @ +0x000 */
    /*   line 298 @ +0x000 */
    /*   line 302 @ +0x000 */
    /*   line 306 @ +0x000 */
    /*   line 310 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 236–240 */
/* addr: 0x001d1080  size: 328 bytes */
void SwitchMgr::fs_vAdd(CSwitchResData* pSwitchData)
{
    void* ptr;
    /* line map: */
    /*   line 236 @ +0x000 */
    /*   line 240 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 211–211 */
/* addr: 0x001d11d0  size: 68 bytes */
unsigned char SwitchData::f_bFindData(CResData* pData)
{
    unsigned int i;
    /* line map: */
    /*   line 211 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 158–201 */
/* addr: 0x001d1220  size: 488 bytes */
void SwitchData::f_vUpdateWaves(char* pTex, unsigned int nbTex, /* function pointer */ int pLoader)
{
    /* array */ int aId[20];
    int nb;
    unsigned int j;
    unsigned int i;
    /* line map: */
    /*   line 158 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 167 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 177 @ +0x000 */
    /*   line 180 @ +0x000 */
    /*   line 184 @ +0x000 */
    /* TODO: decompile from asm/... */
}
