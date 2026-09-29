/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>


/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct JingleList JingleList;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct TTypedVar TTypedVar;
typedef struct CStringIsLess CStringIsLess;
typedef struct stree stree;
typedef struct CSndVarType CSndVarType;
typedef struct _RollOffParam _RollOffParam;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct sstring sstring;
typedef struct CResData CResData;
typedef struct less less;
typedef struct CResObjState CResObjState;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct CRolloffParam CRolloffParam;
typedef struct C2DParams C2DParams;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct smap smap;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct iterator_base iterator_base;
typedef struct CCmdInterface CCmdInterface;
typedef struct CResType CResType;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct CSwitchElement CSwitchElement;
typedef struct CUUID CUUID;
typedef struct SwitchElt SwitchElt;
typedef struct CIdObj CIdObj;
typedef struct SwitchData SwitchData;
typedef struct sTreeLink sTreeLink;
typedef struct CActorModifiers CActorModifiers;
typedef struct sset sset;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
typedef struct CSwitchResData CSwitchResData;
typedef struct spair spair;
typedef struct CAllocBlock CAllocBlock;
typedef struct CPS2IdObjLoader CPS2IdObjLoader;
typedef struct CResObj CResObj;
typedef struct _stVector _stVector;
typedef struct CProgramContext CProgramContext;
typedef union CVal CVal;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct sTreeNode sTreeNode;
typedef struct CVar CVar;
typedef struct streebase streebase;
typedef struct iterator iterator;
typedef struct CLookupElement CLookupElement;
typedef struct CBoolRefParam CBoolRefParam;
typedef struct CRefIdObj CRefIdObj;
typedef struct CIndexAllocator CIndexAllocator;
typedef struct CActorResData CActorResData;

typedef struct sallocator sallocator;
struct sallocator { int data[8]; };

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

typedef enum tdeEventType {
    EPLAYEVENT = 0,
    ESTOPEVENT = 1,
    EPITCHEVENT = 2,
    EVOLUMEEVENT = 3,
    EEXTRAEVENT = 4,
    ESTOPALLEVENT = 5,
    ESTOPANDGO = 6,
} tdeEventType;

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct stree : streebase {
    sallocator allocator; /* +0xc */
    CStringIsLess key_compare; /* +0xd */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct TTypedVar : CVar {
    float m_oValue; /* +0x1c */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
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

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct CRefIdObj : CIdObj {
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CResData : CRefIdObj {
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct less {
    /* C++ base binary_function at +0x0. */
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

struct CVolumeActorModifier {
    /* C++ base CActorModifiers at +0x0. */
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

struct CResObj {
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct CActorResObj : CResObj {
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

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
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

struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
};

struct CSwitchElement {
    CIdObjPtr m_pTarget; /* +0x0 */
    unsigned int m_uiValue; /* +0x4 */
};

struct SwitchElt {
    unsigned int m_uiVal; /* +0x0 */
    CResData* m_pData; /* +0x4 */
    CUUID m_oId; /* +0x8 */
};

struct SwitchData {
    CSwitchResData* m_pSwitchData; /* +0x0 */
    SwitchElt* m_pElt; /* +0x4 */
    SwitchData* m_pNext; /* +0x8 */
    unsigned int m_uiDefault; /* +0xc */
    unsigned int m_nbElt; /* +0x10 */
    unsigned char f_bFindData(CResData* pData);
    void f_vUpdateWaves(char* pTex, unsigned int nbTex, CPS2IdObjLoader* pLoader);
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0. */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct CLinkTypeActorCont : smap {
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
};

struct CSwitchResData : CResData {
    unsigned int m_uiNbElmts; /* +0x18 */
    unsigned int m_uiInfoType; /* +0x1c */
    unsigned int m_uiDefaultIndex; /* +0x20 */
    float m_fVolume; /* +0x24 */
    CSwitchElement* m_paElements; /* +0x28 */
};

struct spair {
    int first; /* +0x0 */
    CLinkTypeActor* second; /* +0x4 */
};

struct CAllocBlock {
    CAllocBlock* m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct CPS2IdObjLoader {
    smap m_oIdObjsCache; /* +0x0 */
    smap m_oIndex; /* +0x10 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

union CVal {
    int pcBool; /* +0x0 */
    TTypedVar* poBoolVar; /* +0x0 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct sTreeNode : sTreeLink {
    spair m_oValue; /* +0x10 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

struct CBoolRefParam {
    unsigned int uiRefType; /* +0x0 */
    CVal m_uValue; /* +0x4 */
    unsigned int m_uiValue; /* +0x8 */
};

struct CIndexAllocator {
    CAllocBlock* m_poAllocBlocks; /* +0x0 */
    char m_cRootNodeBuffer[40]; /* +0x4 */
    unsigned int m_uiNbAllocs; /* +0x2c */
};

struct CActorResData : CResData {
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    CVarAccess* m_poGlobalVarAccess; /* +0x48 */
};

struct Jingle {
    void fs_vAddJingle(int, int, int, int);
};

struct SwitchMgr {
    static unsigned int ms_nbTex;
    static unsigned int ms_nbTexMax;
    void fs_vAddDataToDelete(CResData*);
    void fs_vStopAll(void);
    void fs_vUpdateWaves(CPS2IdObjLoader*);
    void fs_vClearTexture(void);
    void fs_vAddTexture(unsigned int);
    void fs_vAdd(CSwitchResData*);
};



























































unsigned int SwitchMgr::ms_nbTex;
unsigned int SwitchMgr::ms_nbTexMax;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 31–61 */
/* addr: 0x001d0a40  size: 364 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 31
 *   +0x002c -> line 32
 *   +0x0058 -> line 35
 *   +0x0060 -> line 38
 *   +0x0068 -> line 39
 *   +0x00a8 -> line 41
 *   +0x00b0 -> line 44
 *   +0x00cc -> line 47
 *   +0x00d8 -> line 52
 *   +0x00e0 -> line 54
 *   +0x0120 -> line 56
 *   +0x0128 -> line 58
 *   +0x0148 -> line 61
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Jingle::fs_vAddJingle(int s32_ObjectId, int s32_TypeId, int s32_HandleId, int iVolumeLine)
{
    int uVol;
    JingleList* pList;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 432–461 */
/* addr: 0x001d0bb0  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 432
 *   +0x0004 -> line 436
 *   +0x0008 -> line 432
 *   +0x0018 -> line 436
 *   +0x0048 -> line 439
 *   +0x0050 -> line 441
 *   +0x005c -> line 446
 *   +0x0064 -> line 447
 *   +0x0070 -> line 449
 *   +0x007c -> line 451
 *   +0x008c -> line 452
 *   +0x0094 -> line 455
 *   +0x0098 -> line 458
 *   +0x00ac -> line 459
 *   +0x00b8 -> line 461
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SwitchMgr::fs_vAddDataToDelete(CResData* pData)
{
    CResData** pDel;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 367–413 */
/* addr: 0x001d0c80  size: 528 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 367
 *   +0x0020 -> line 368
 *   +0x002c -> line 370
 *   +0x004c -> line 373
 *   +0x0054 -> line 374
 *   +0x0060 -> line 376
 *   +0x0064 -> line 377
 *   +0x0070 -> line 379
 *   +0x0074 -> line 380
 *   +0x0078 -> line 379
 *   +0x007c -> line 380
 *   +0x0090 -> line 383
 *   +0x0094 -> line 384
 *   +0x00a0 -> line 386
 *   +0x00a4 -> line 387
 *   +0x00b0 -> line 389
 *   +0x00c0 -> line 392
 *   +0x013c -> line 393
 *   +0x0140 -> line 394
 *   +0x0144 -> line 395
 *   +0x0150 -> line 396
 *   +0x0154 -> line 397
 *   +0x015c -> line 398
 *   +0x0160 -> line 399
 *   +0x0164 -> line 400
 *   +0x0170 -> line 401
 *   +0x0174 -> line 402
 *   +0x0180 -> line 403
 *   +0x01b0 -> line 406
 *   +0x01b8 -> line 410
 *   +0x01c0 -> line 411
 *   +0x01c8 -> line 412
 *   +0x01e8 -> line 413
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SwitchMgr::fs_vStopAll(void)
{
    SwitchData* pTmp;
    CResObjParams* pParams;
    CExtraEventActor* poEEActor;
    CLinkActor* poActor;
    iterator itLTAC;
    CLinkTypeActorCont* rLTAC;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 324–362 */
/* addr: 0x001d0e90  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 324
 *   +0x0018 -> line 325
 *   +0x001c -> line 327
 *   +0x0024 -> line 329
 *   +0x0038 -> line 330
 *   +0x003c -> line 331
 *   +0x0048 -> line 335
 *   +0x0050 -> line 337
 *   +0x0058 -> line 343
 *   +0x0064 -> line 345
 *   +0x006c -> line 348
 *   +0x0070 -> line 350
 *   +0x0078 -> line 352
 *   +0x0080 -> line 353
 *   +0x0084 -> line 354
 *   +0x0098 -> line 357
 *   +0x00a0 -> line 361
 *   +0x012c -> line 362
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SwitchMgr::fs_vUpdateWaves(CPS2IdObjLoader* pLoader)
{
    SwitchData* pTmp;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 317–319 */
/* addr: 0x001d0fe0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 317
 *   +0x0004 -> line 319
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SwitchMgr::fs_vClearTexture(void)
{
    SwitchMgr::ms_nbTexMax = 0;
    SwitchMgr::ms_nbTex = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 292–311 */
/* addr: 0x001d0ff0  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 292
 *   +0x0014 -> line 293
 *   +0x0024 -> line 297
 *   +0x002c -> line 298
 *   +0x0034 -> line 300
 *   +0x0040 -> line 302
 *   +0x004c -> line 303
 *   +0x0054 -> line 306
 *   +0x0058 -> line 309
 *   +0x0068 -> line 310
 *   +0x0074 -> line 311
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SwitchMgr::fs_vAddTexture(unsigned int uiTexture)
{
    char* pTex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 235–242 */
/* addr: 0x001d1080  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 235
 *   +0x001c -> line 236
 *   +0x0028 -> line 238
 *   +0x0030 -> line 240
 *   +0x012c -> line 242
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SwitchMgr::fs_vAdd(CSwitchResData* pSwitchData)
{
    void* ptr;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 209–212 */
/* addr: 0x001d11d0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 209
 *   +0x0038 -> line 211
 *   +0x003c -> line 212
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SwitchData::f_bFindData(CResData* pData)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\SwitchMgr.cpp lines 149–201 */
/* addr: 0x001d1220  size: 488 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 149
 *   +0x0010 -> line 158
 *   +0x0014 -> line 149
 *   +0x0038 -> line 158
 *   +0x0040 -> line 161
 *   +0x0078 -> line 164
 *   +0x00a8 -> line 166
 *   +0x00c8 -> line 167
 *   +0x00dc -> line 169
 *   +0x00f0 -> line 172
 *   +0x0104 -> line 175
 *   +0x0124 -> line 177
 *   +0x0130 -> line 179
 *   +0x0140 -> line 180
 *   +0x014c -> line 181
 *   +0x0170 -> line 184
 *   +0x0178 -> line 186
 *   +0x01a0 -> line 192
 *   +0x01ac -> line 194
 *   +0x01c0 -> line 201
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SwitchData::f_vUpdateWaves(char* pTex, unsigned int nbTex, CPS2IdObjLoader* pLoader)
{
    CUUID aId[20];
    int nb;
    unsigned int j;
    unsigned int i;
    /* TODO: decompile from asm/... */
}
