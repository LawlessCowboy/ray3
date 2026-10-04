/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct CIdObjPtr CIdObjPtr;
typedef struct CStringIsLess CStringIsLess;
typedef int sallocator;
typedef struct stree stree;
typedef struct sset sset;
typedef struct _RollOffParam _RollOffParam;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct sstring sstring;
typedef struct CRefIdObj CRefIdObj;
typedef struct CResObj CResObj;
typedef struct smap smap;
typedef struct CCmdInterface CCmdInterface;
typedef struct CRolloffParam CRolloffParam;
typedef struct CActorResData CActorResData;
typedef struct CUUID CUUID;
typedef struct CIdObj CIdObj;
typedef struct iterator_base iterator_base;
typedef struct _stVector _stVector;
typedef struct CProgramContext CProgramContext;
typedef struct less less;
typedef struct CResData CResData;
typedef struct CLookupElement CLookupElement;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct sTreeLink sTreeLink;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct C2DParams C2DParams;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CResObjState CResObjState;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct tdstUMP3Chunk tdstUMP3Chunk;
typedef struct CVar CVar;
typedef struct CLinkActor CLinkActor;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CInitParams CInitParams;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
typedef struct smultimap smultimap;
typedef struct TTypedVar TTypedVar;
namespace usnd { struct CPS2BoxReverbAttribute; }
typedef usnd::CPS2BoxReverbAttribute CPS2BoxReverbAttribute;
typedef struct tdstRegionChunk tdstRegionChunk;
typedef struct streebase streebase;
typedef struct CEdiWaveFile CEdiWaveFile;
typedef struct tdstCueChunk tdstCueChunk;
typedef struct CCueDescriptor CCueDescriptor;
typedef struct CSndVarType CSndVarType;
typedef struct WAVEFORMAT WAVEFORMAT;
typedef struct CActorModifiers CActorModifiers;
typedef struct CResType CResType;
typedef struct iterator iterator;
typedef struct CWaveFile CWaveFile;
typedef struct CWaveFileIdObj CWaveFileIdObj;

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

struct CIdObjPtr {
    CLookupElement* m_poElmt; /* +0x0 */
};

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    CStringIsLess key_compare; /* +0xd */
};

struct sset {
    stree _Tr; /* +0x0 */
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
    static int ss32CurrentRefreshChannel;
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

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CResObj {
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct CActorResData {
    /* C++ base CResData at +0x0. */
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    CVarAccess* m_poGlobalVarAccess; /* +0x48 */
};

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
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

struct less {
    /* C++ base binary_function at +0x0. */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    CUUID m_oId; /* +0x4 */
    CIdObj* m_poIdObj; /* +0xc */
};

struct spair {
    int first; /* +0x0 */
    CLinkTypeActor* second; /* +0x4 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    spair m_oValue; /* +0x10 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CPitchActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
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

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
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

struct tdstUMP3Chunk {
    unsigned int uiMP3Offset; /* +0x0 */
    unsigned int uiPCMOriginalDataSize; /* +0x4 */
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

struct CInitParams {
    int pLibSDIRXPath; /* +0x0 */
    int pBoxIRXPath; /* +0x4 */
    int pFileMgrIRXPath; /* +0x8 */
    int pFlowIRXPath; /* +0xc */
    unsigned int uiOptions; /* +0x10 */
    unsigned int uiNbADPCMStream; /* +0x14 */
    unsigned int uiNbPCMStream; /* +0x18 */
};

struct CLinkTypeActorCont {
    static CLinkTypeActorCont* mfn_roGetInstance();
    static _RollOffParam moACPRolloff;
    /* C++ base smap at +0x0. */
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
};

struct smultimap {
    stree _Tr; /* +0x0 */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct usnd::CPS2BoxReverbAttribute {
    unsigned int m_iMode; /* +0x0 */
    unsigned int m_iDepthL; /* +0x4 */
    unsigned int m_iDepthR; /* +0x8 */
    short m_iDelay; /* +0xc */
    int m_iFeedback; /* +0x10 */
};

struct tdstRegionChunk {
    unsigned int m_uiChunkID; /* +0x0 */
    unsigned int m_uiSampleLength; /* +0x4 */
    unsigned int m_uiPurpose; /* +0x8 */
    unsigned short m_uiCountry; /* +0xc */
    unsigned short m_uiLanguage; /* +0xe */
    unsigned short m_uiDialect; /* +0x10 */
    unsigned short m_uiCodePage; /* +0x12 */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct CEdiWaveFile {
    /* C++ base CWaveFile at +0x0. */
    unsigned int m_uiWaveFmtSize; /* +0x18 */
    int m_pucData; /* +0x1c */
    smultimap m_oCueNames; /* +0x20 */
    CCueDescriptor* m_paoCues; /* +0x30 */
    tdstUMP3Chunk* m_poMP3Info; /* +0x34 */
    WAVEFORMAT* m_poWaveFormat; /* +0x38 */
};

struct tdstCueChunk {
    unsigned int m_uiChunkID; /* +0x0 */
    unsigned int m_uiPosition; /* +0x4 */
    char m_fccChunk[4]; /* +0x8 */
    unsigned int m_uiChunkStart; /* +0xc */
    unsigned int m_uiBlockStart; /* +0x10 */
    unsigned int m_uiSampleOffset; /* +0x14 */
};

struct CCueDescriptor {
    sstring m_sName; /* +0x0 */
    tdstCueChunk m_stCueChunk; /* +0x4 */
    tdstRegionChunk* m_pstRegionInfo; /* +0x1c */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct WAVEFORMAT {
    unsigned short wFormatTag; /* +0x0 */
    unsigned short nChannels; /* +0x2 */
    unsigned int nSamplesPerSec; /* +0x4 */
    unsigned int nAvgBytesPerSec; /* +0x8 */
    unsigned short nBlockAlign; /* +0xc */
    unsigned short nBitsPerSample; /* +0xe */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0. */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CWaveFile {
    unsigned int m_uiDataOffset; /* +0x4 */
    unsigned long m_ulDataSize; /* +0x8 */
    unsigned int m_uiNbMarkers; /* +0x10 */
};

struct CWaveFileIdObj {
    /* C++ base CRefIdObj at +0x0. */
    float m_fVolume; /* +0x10 */
    unsigned int m_uiDataOffsetInFile; /* +0x14 */
    unsigned int m_uiWaveFileSize; /* +0x18 */
    CEdiWaveFile* m_poEdiWaveFile; /* +0x1c */
    sstring m_strFilePath; /* +0x20 */
    sstring m_strRelativeFilePath; /* +0x24 */
    unsigned int m_uiVersionId; /* +0x28 */
    unsigned char m_uiFlags; /* +0x2c */
};

int gv_iCD_Opened;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 384–387 */
/* addr: 0x00189d30  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 384
 *   +0x0010 -> line 385
 *   +0x0028 -> line 386
 *   +0x0038 -> line 387
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
namespace usnd {
struct CL2PS2CoreMgr {
    static void fs_vDesInit();
};
struct CPS2Box {
    static void fs_vSetReverbOn(unsigned int channel, bool on);
    static void fs_vSetReverbAttribute(unsigned int channel, CPS2BoxReverbAttribute* attribute);
};
}

void SND_fn_p_stPS2SetReverbOn(int s32_Channels, int s32_On)
{
    if (s32_Channels & 1) usnd::CPS2Box::fs_vSetReverbOn(0, s32_On != 0);
    if (s32_Channels & 1) usnd::CPS2Box::fs_vSetReverbOn(1, s32_On != 0);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 366–376 */
/* addr: 0x00189d80  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 366
 *   +0x0004 -> line 374
 *   +0x0008 -> line 366
 *   +0x0010 -> line 368
 *   +0x0018 -> line 369
 *   +0x0030 -> line 371
 *   +0x0034 -> line 372
 *   +0x0038 -> line 369
 *   +0x004c -> line 374
 *   +0x0060 -> line 375
 *   +0x0074 -> line 376
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma optimize_for_size off
void SND_fn_p_stPS2ChangeReverb(int s32_Channels, int s32_Mode, int s32_Vol, int s32_Delay, int s32_FeedBack)
{
    CPS2BoxReverbAttribute sRevAttr;
    sRevAttr.m_iMode = s32_Mode;
    sRevAttr.m_iDepthR = sRevAttr.m_iDepthL = s32_Vol * 0x3fff / 127;
    sRevAttr.m_iFeedback = s32_FeedBack;
    sRevAttr.m_iDelay = s32_Delay;
    if (s32_Channels & 1) usnd::CPS2Box::fs_vSetReverbAttribute(0, &sRevAttr);
    if (s32_Channels & 2) usnd::CPS2Box::fs_vSetReverbAttribute(1, &sRevAttr);
}

#pragma optimize_for_size reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 356–358 */
/* addr: 0x00189e10  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 356
 *   +0x000c -> line 357
 *   +0x0020 -> line 358
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSetDefaultRollOff(_RollOffParam* pst_RollOff)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 346–348 */
/* addr: 0x00189e40  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 346
 *   +0x000c -> line 347
 *   +0x0038 -> line 348
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vGetDefaultRollOff(_RollOffParam* pst_RollOff)
{
    CLinkTypeActorCont::mfn_roGetInstance(); *pst_RollOff = CLinkTypeActorCont::moACPRolloff;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 309–328 */
/* addr: 0x00189e90  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 309
 *   +0x0008 -> line 310
 *   +0x0010 -> line 311
 *   +0x0018 -> line 313
 *   +0x0020 -> line 317
 *   +0x0028 -> line 318
 *   +0x0030 -> line 319
 *   +0x0050 -> line 322
 *   +0x0058 -> line 328
 *   +0x005c -> line 327
 *   +0x0060 -> line 328
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" void SND_fn_vKillAllObjectSound(void);
extern "C" void SND_fn_vSynchroSound(void);
int SND_fn_iDesInitSound(void)
{
    SND_fn_vKillAllObjectSound();
    SND_fn_vSynchroSound();
    for (CExtraEventActor::ss32CurrentRefreshChannel = 0; CExtraEventActor::ss32CurrentRefreshChannel < 5; CExtraEventActor::ss32CurrentRefreshChannel++) {
        SND_fn_vSynchroSound();
        SND_fn_vSynchroSound();
    }
    usnd::CL2PS2CoreMgr::fs_vDesInit();
    return 3;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 216–290 */
/* addr: 0x00189f00  size: 428 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 216
 *   +0x0008 -> line 218
 *   +0x000c -> line 216
 *   +0x0014 -> line 218
 *   +0x001c -> line 223
 *   +0x0024 -> line 231
 *   +0x0030 -> line 238
 *   +0x0050 -> line 239
 *   +0x0074 -> line 240
 *   +0x0098 -> line 241
 *   +0x00bc -> line 242
 *   +0x00c0 -> line 255
 *   +0x00c4 -> line 243
 *   +0x00c8 -> line 247
 *   +0x00cc -> line 242
 *   +0x00d0 -> line 255
 *   +0x00d4 -> line 244
 *   +0x00d8 -> line 255
 *   +0x00dc -> line 245
 *   +0x00e0 -> line 247
 *   +0x00e4 -> line 254
 *   +0x00ec -> line 255
 *   +0x00f4 -> line 256
 *   +0x0104 -> line 258
 *   +0x0108 -> line 261
 *   +0x010c -> line 258
 *   +0x0110 -> line 261
 *   +0x0118 -> line 266
 *   +0x011c -> line 268
 *   +0x0120 -> line 266
 *   +0x0124 -> line 267
 *   +0x0128 -> line 270
 *   +0x0130 -> line 271
 *   +0x013c -> line 275
 *   +0x0180 -> line 287
 *   +0x0190 -> line 290
 *   +0x0194 -> line 289
 *   +0x0198 -> line 290
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_iInitSound(void)
{
    CLinkTypeActorCont* ro_TypeCont;
    _RollOffParam st_RollOff;
    char FileNames[4][256];
    CInitParams oInitParam;
    char buffer[256];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 197–208 */
/* addr: 0x0018a0b0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 197
 *   +0x0004 -> line 198
 *   +0x0010 -> line 200
 *   +0x001c -> line 201
 *   +0x0020 -> line 202
 *   +0x0028 -> line 205
 *   +0x0034 -> line 206
 *   +0x0038 -> line 208
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void RackTestCB__FPv(void* param)
{
    /* TODO: decompile from asm/... */
}
