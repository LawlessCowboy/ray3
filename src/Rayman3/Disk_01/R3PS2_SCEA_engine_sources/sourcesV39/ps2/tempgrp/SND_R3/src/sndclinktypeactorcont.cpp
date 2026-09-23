/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern char* strncpy(char*, const char*, unsigned int);

typedef int sallocator;

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CUUID CUUID;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct const_iterator const_iterator;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CResObjParams CResObjParams;
typedef struct sstring sstring;
typedef struct CPS2IdObjInfo CPS2IdObjInfo;
typedef struct CSndVarType CSndVarType;
typedef struct less less;
typedef struct stree stree;
typedef struct CResData CResData;
typedef struct _RollOffParam _RollOffParam;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct CLinkActor CLinkActor;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct CRolloffParam CRolloffParam;
typedef struct C2DParams C2DParams;
typedef struct CResObjState CResObjState;
typedef struct smap smap;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct iterator_base iterator_base;
typedef struct CResObj CResObj;
typedef struct sset sset;
typedef struct CActorResData CActorResData;
typedef struct sTreeLink sTreeLink;
typedef struct CAllocBlock CAllocBlock;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CProgramContext CProgramContext;
typedef struct iterator iterator;
typedef struct _Node _Node;
typedef struct _stVector _stVector;
typedef struct CCmdInterface CCmdInterface;
typedef struct CResType CResType;
typedef struct CStringIsLess CStringIsLess;
typedef struct CActorModifiers CActorModifiers;
typedef struct CIndexAllocator CIndexAllocator;
typedef struct TTypedVar TTypedVar;
typedef struct CBankDesc CBankDesc;
typedef struct streebase streebase;
typedef struct CPS2IdObjLoader CPS2IdObjLoader;
typedef struct CBankDescCont CBankDescCont;
typedef struct slist slist;
typedef struct CVar CVar;
typedef struct CIdObj CIdObj;
typedef struct CRefIdObj CRefIdObj;
typedef union _SND_tduRefEvt _SND_tduRefEvt;

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

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct spair {
    CUUID first; /* +0x0 */
    CIdObj* second; /* +0x8 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    spair m_oValue; /* +0x10 */
};

struct const_iterator {
    _Node* _Ptr; /* +0x0 */
};

struct CVolumeActorModifier {
    /* C++ base CActorModifiers at +0x0. */
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

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CPS2IdObjInfo {
    CUUID m_oId; /* +0x0 */
    unsigned int m_uiOffset; /* +0x8 */
    sstring m_strFileName; /* +0xc */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct less {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    less key_compare; /* +0xd */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
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

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x8..0xb */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext; /* +0x74 */
    CLinkActor* m_poPrevious; /* +0x78 */
};

struct CLinkTypeActorCont {
    /* C++ base smap at +0x0. */
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
    void mfn_vSetDefaultRolloff(_RollOffParam* pst_RollOff);
    CLinkTypeActor* mfn_poGetActorTypeFromId(int s32_TypeId);
    unsigned char mfn_bInitActorResData(void);
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

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

struct CResObj {
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
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

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CAllocBlock {
    CAllocBlock* m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    TTypedVar* mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    _tdstAllRetObjectSound mstIActor; /* +0x88 */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct _Node {
    _Node* _pNext; /* +0x0 */
    _Node* _pPrev; /* +0x4 */
    int _Value; /* +0x8 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
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

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0. */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct CIndexAllocator {
    CAllocBlock* m_poAllocBlocks; /* +0x0 */
    char m_cRootNodeBuffer[40]; /* +0x4 */
    unsigned int m_uiNbAllocs; /* +0x2c */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct CBankDesc {
    /* C++ base sset at +0x0. */
    CPS2IdObjLoader* mroLoader; /* +0x10 */
    sstring mostringName; /* +0x14 */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct CPS2IdObjLoader {
    smap m_oIdObjsCache; /* +0x0 */
    smap m_oIndex; /* +0x10 */
};

struct CBankDescCont {
    /* C++ base smap at +0x0. */
    CPS2IdObjLoader moLoader; /* +0x10 */
};

struct slist {
    sallocator m_oAllocator; /* +0x0 */
    _Node* _Head; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

static _tdstAllRetObjectSound gst_IGhostActor;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 521–526 */
/* addr: 0x001cb760  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 521
 *   +0x0004 -> line 522
 *   +0x0008 -> line 521
 *   +0x0018 -> line 522
 *   +0x0020 -> line 523
 *   +0x0024 -> line 524
 *   +0x0028 -> line 526
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
sTreeNode* ms_czNil__Q24usnd7sstring(sTreeLink* _pParent, _Redbl _eColor)
{
    sTreeNode* _pNode;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 396–404 */
/* addr: 0x001cbb50  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 396
 *   +0x0004 -> line 401
 *   +0x0008 -> line 396
 *   +0x000c -> line 401
 *   +0x0010 -> line 397
 *   +0x001c -> line 398
 *   +0x0028 -> line 399
 *   +0x0030 -> line 401
 *   +0x0034 -> line 403
 *   +0x003c -> line 401
 *   +0x004c -> line 402
 *   +0x0060 -> line 403
 *   +0x0070 -> line 404
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CLinkTypeActorCont::mfn_vSetDefaultRolloff(_RollOffParam* pst_RollOff)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 260–269 */
/* addr: 0x001cc620  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 260
 *   +0x0008 -> line 265
 *   +0x000c -> line 260
 *   +0x001c -> line 265
 *   +0x00a8 -> line 266
 *   +0x00ac -> line 265
 *   +0x00b0 -> line 266
 *   +0x00d0 -> line 267
 *   +0x00d8 -> line 268
 *   +0x00dc -> line 269
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CLinkTypeActor* CLinkTypeActorCont::mfn_poGetActorTypeFromId(int s32_TypeId)
{
    CLinkTypeActor* po_Type;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 148–254 */
/* addr: 0x001cc710  size: 548 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 148
 *   +0x0014 -> line 149
 *   +0x0020 -> line 150
 *   +0x0028 -> line 177
 *   +0x0038 -> line 178
 *   +0x004c -> line 179
 *   +0x0054 -> line 189
 *   +0x0100 -> line 202
 *   +0x0104 -> line 189
 *   +0x0108 -> line 202
 *   +0x0114 -> line 203
 *   +0x011c -> line 211
 *   +0x0124 -> line 227
 *   +0x0134 -> line 228
 *   +0x0148 -> line 229
 *   +0x014c -> line 228
 *   +0x0150 -> line 229
 *   +0x0158 -> line 228
 *   +0x015c -> line 229
 *   +0x016c -> line 231
 *   +0x0178 -> line 229
 *   +0x0180 -> line 231
 *   +0x0188 -> line 233
 *   +0x0194 -> line 234
 *   +0x0198 -> line 233
 *   +0x019c -> line 234
 *   +0x01a8 -> line 238
 *   +0x01c0 -> line 239
 *   +0x01c8 -> line 241
 *   +0x01e0 -> line 248
 *   +0x01f8 -> line 250
 *   +0x0200 -> line 251
 *   +0x0208 -> line 253
 *   +0x020c -> line 254
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CLinkTypeActorCont::mfn_bInitActorResData(void)
{
    CUUID oId2Load[2];
    unsigned char bOk;
    CPS2IdObjLoader* gro_BankLoader;
    char szDataPath[1024];
    CBankDescCont o_Singleton;
    signed char init;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 109–111 */
/* addr: 0x001cc940  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 109
 *   +0x0004 -> line 110
 *   +0x000c -> line 109
 *   +0x0010 -> line 110
 *   +0x001c -> line 111
 *   +0x0020 -> line 110
 *   +0x0024 -> line 111
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_bGhostObjectInfo__FiiPci(int s32_Unused0, int s32_Unused1, char* pch_String, int s32_Size)
{
    return strncpy(pch_String, "Ghost", s32_Size) != NULL;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 99–108 */
/* addr: 0x001cc970  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 99
 *   +0x0008 -> line 100
 *   +0x000c -> line 105
 *   +0x0010 -> line 101
 *   +0x0014 -> line 103
 *   +0x0018 -> line 108
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_bGhostObjectRollOff__FiiP13_RollOffParam(int s32_Unused0, int s32_Unused1, _RollOffParam* pst_RollOff)
{
    int b_Answer;
    b_Answer = 0;
    if (pst_RollOff != NULL) {
        pst_RollOff->rDistBackGround = 0;
        b_Answer = 1;
        pst_RollOff->rDistSatur = 0;
        pst_RollOff->ucBackgroundVol = 0;
    }
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 94–94 */
/* addr: 0x001cc990  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 94
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_bGhostObjectLinkBis__Fiii(void)
{
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 86–93 */
/* addr: 0x001cc9a0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 86
 *   +0x0008 -> line 87
 *   +0x000c -> line 90
 *   +0x0010 -> line 88
 *   +0x0014 -> line 89
 *   +0x0018 -> line 93
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_bObjectPosition__FiiP9_stVector(int s32_Unused0, int s32_Unused1, _stVector* pst_Vector)
{
    int b_Answer;
    b_Answer = 0;
    if (pst_Vector != NULL) {
        pst_Vector->f32x = 0;
        b_Answer = 1;
        pst_Vector->f32y = 0;
        pst_Vector->f32z = 0;
    }
    return b_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 81–81 */
/* addr: 0x001cc9c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 81
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_bGhostObjectLink__Fii(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 80–80 */
/* addr: 0x001cc9d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 80
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_s32GhostObjectSwitch__Fii(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 73–79 */
/* addr: 0x001cc9e0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 73
 *   +0x0008 -> line 74
 *   +0x000c -> line 75
 *   +0x0014 -> line 76
 *   +0x0018 -> line 77
 *   +0x0020 -> line 78
 *   +0x0024 -> line 79
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vGhostObjectExtraCoef__Fi14_SND_tduRefEvtPiPiPi(int* pr_Pitch, int* pr_Pan, int* pr_Vol)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndclinktypeactorcont.cpp lines 71–71 */
/* addr: 0x001cca10  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 71
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_u8GhostObjectReverb__Fi(void)
{
    /* TODO: decompile from asm/... */
}
