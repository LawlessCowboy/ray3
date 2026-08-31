/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CIdObjPtr CIdObjPtr;
typedef struct sset sset;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct sstring sstring;
typedef struct CRefIdObj CRefIdObj;
typedef struct CResObj CResObj;
typedef struct CCmdInterface CCmdInterface;
typedef struct CActorResData CActorResData;
typedef struct _RollOffParam _RollOffParam;
typedef struct CIdObj CIdObj;
typedef struct iterator_base iterator_base;
typedef struct _stVector _stVector;
typedef struct CResData CResData;
typedef struct CLookupElement CLookupElement;
typedef struct sTreeNode sTreeNode;
typedef struct sTreeLink sTreeLink;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CActorResObj CActorResObj;
typedef struct smap smap;
typedef struct tdstUMP3Chunk tdstUMP3Chunk;
typedef struct CVar CVar;
typedef struct sset sset;
typedef struct CResObjParams CResObjParams;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct smap smap;
typedef struct CInitParams CInitParams;
typedef struct smap smap;
typedef struct CInitParams CInitParams;
typedef struct smultimap smultimap;
typedef struct TTypedVar TTypedVar;
typedef struct CRolloffParam CRolloffParam;
typedef struct V3Ds V3Ds;
typedef struct smap smap;
typedef struct streebase streebase;
typedef struct CEdiWaveFile CEdiWaveFile;
typedef struct CCueDescriptor CCueDescriptor;
typedef struct CSndVarType CSndVarType;
typedef struct CCritSect CCritSect;
typedef struct WAVEFORMAT WAVEFORMAT;
typedef struct tdstCueChunk tdstCueChunk;
typedef struct C3DDirection C3DDirection;
typedef struct CResType CResType;
typedef struct iterator iterator;
typedef struct C2DParams C2DParams;
typedef struct CWaveFile CWaveFile;
typedef struct CResObjState CResObjState;
typedef struct smap smap;
typedef struct C3DParam C3DParam;
typedef struct CLinkActor CLinkActor;
typedef struct smap smap;
typedef struct CWaveFileIdObj CWaveFileIdObj;

struct CIdObjPtr {
    int m_poElmt; /* +0x0 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
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

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CResObj {
    int m_roType; /* +0x4 */
    int m_poResData; /* +0x8 */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct iterator_base {
    int _Ptr; /* +0x0 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    /* aggregate */ int m_oId; /* +0x4 */
    int m_poIdObj; /* +0xc */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct tdstUMP3Chunk {
    unsigned int uiMP3Offset; /* +0x0 */
    unsigned int uiPCMOriginalDataSize; /* +0x4 */
};

struct CVar {
    int m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct sset {
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

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    int mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    /* aggregate */ int mstIActor; /* +0x88 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
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

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CInitParams {
    CInitParams m_oL1Params; /* +0x0 */
};

struct smultimap {
    /* aggregate */ int _Tr; /* +0x0 */
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

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct CEdiWaveFile {
    /* C++ base CWaveFile at +0x0. */
    unsigned int m_uiWaveFmtSize; /* +0x18 */
    int m_pucData; /* +0x1c */
    smultimap m_oCueNames; /* +0x20 */
    int m_paoCues; /* +0x30 */
    int m_poMP3Info; /* +0x34 */
    int m_poWaveFormat; /* +0x38 */
};

struct CCueDescriptor {
    sstring m_sName; /* +0x0 */
    tdstCueChunk m_stCueChunk; /* +0x4 */
    int m_pstRegionInfo; /* +0x1c */
};

struct CSndVarType {
    /* aggregate */ int m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct WAVEFORMAT {
    unsigned short wFormatTag; /* +0x0 */
    unsigned short nChannels; /* +0x2 */
    unsigned int nSamplesPerSec; /* +0x4 */
    unsigned int nAvgBytesPerSec; /* +0x8 */
    unsigned short nBlockAlign; /* +0xc */
    unsigned short nBitsPerSample; /* +0xe */
};

struct tdstCueChunk {
    unsigned int m_uiChunkID; /* +0x0 */
    unsigned int m_uiPosition; /* +0x4 */
    char m_fccChunk[4]; /* +0x8 */
    unsigned int m_uiChunkStart; /* +0xc */
    unsigned int m_uiBlockStart; /* +0x10 */
    unsigned int m_uiSampleOffset; /* +0x14 */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
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

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct CWaveFile {
    unsigned int m_uiDataOffset; /* +0x4 */
    unsigned long m_ulDataSize; /* +0x8 */
    unsigned int m_uiNbMarkers; /* +0x10 */
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

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
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

struct CWaveFileIdObj {
    /* C++ base CRefIdObj at +0x0. */
    float m_fVolume; /* +0x10 */
    unsigned int m_uiDataOffsetInFile; /* +0x14 */
    unsigned int m_uiWaveFileSize; /* +0x18 */
    int m_poEdiWaveFile; /* +0x1c */
    sstring m_strFilePath; /* +0x20 */
    sstring m_strRelativeFilePath; /* +0x24 */
    unsigned int m_uiVersionId; /* +0x28 */
    unsigned char m_uiFlags; /* +0x2c */
};

int gv_iCD_Opened;
_RollOffParam moACPRolloff;
int ss32CurrentRefreshChannel;
void (*RackTestCB)(void*);
sTreeLink _NilElmt;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 194–194 */
/* addr: 0x00189cc0  size: 104 bytes */
void _NilElmt__Q24usnd9streebase(less* _Parg, unsigned char _Marg, sallocator* _Al)
{
    /* line map: */
    /*   line 194 @ +0x000 */
    /*   line 194 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 385–387 */
/* addr: 0x00189d30  size: 76 bytes */
void SND_fn_p_stPS2SetReverbOn(int s32_Channels, int s32_On)
{
    /* line map: */
    /*   line 385 @ +0x000 */
    /*   line 387 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 368–375 */
/* addr: 0x00189d80  size: 132 bytes */
void SND_fn_p_stPS2ChangeReverb(int s32_Channels, int s32_Mode, int s32_Vol, int s32_Delay, int s32_FeedBack)
{
    /* aggregate */ int sRevAttr;
    /* line map: */
    /*   line 374 @ +0x000 */
    /*   line 368 @ +0x000 */
    /*   line 371 @ +0x000 */
    /*   line 369 @ +0x000 */
    /*   line 375 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 357–357 */
/* addr: 0x00189e10  size: 48 bytes */
void SND_fn_vSetDefaultRollOff(_RollOffParam* pst_RollOff)
{
    /* line map: */
    /*   line 357 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 347–347 */
/* addr: 0x00189e40  size: 72 bytes */
void SND_fn_vGetDefaultRollOff(_RollOffParam* pst_RollOff)
{
    /* line map: */
    /*   line 347 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 310–327 */
/* addr: 0x00189e90  size: 104 bytes */
int SND_fn_iDesInitSound(void)
{
    /* line map: */
    /*   line 310 @ +0x000 */
    /*   line 313 @ +0x000 */
    /*   line 318 @ +0x000 */
    /*   line 322 @ +0x000 */
    /*   line 327 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 218–290 */
/* addr: 0x00189f00  size: 428 bytes */
int SND_fn_iInitSound(/* function pointer */ int ro_TypeCont)
{
    _RollOffParam st_RollOff;
    char FileNames[4][256];
    CInitParams oInitParam;
    char buffer[256];
    /* line map: */
    /*   line 218 @ +0x000 */
    /*   line 218 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 241 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 247 @ +0x000 */
    /*   line 255 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp lines 198–208 */
/* addr: 0x0018a0b0  size: 68 bytes */
void RackTestCB__FPv(void* param)
{
    /* line map: */
    /*   line 198 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 205 @ +0x000 */
    /*   line 208 @ +0x000 */
    /* TODO: decompile from asm/... */
}
