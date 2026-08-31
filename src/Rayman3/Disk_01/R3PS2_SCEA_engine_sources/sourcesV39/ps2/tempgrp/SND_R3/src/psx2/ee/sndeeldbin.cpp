/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CIdObjPtr CIdObjPtr;
typedef struct CSwitchResData CSwitchResData;
typedef struct sTreeNode sTreeNode;
typedef struct sTreeNode sTreeNode;
typedef struct smap smap;
typedef struct sTreeLink sTreeLink;
typedef struct smap smap;
typedef struct sTreeNode sTreeNode;
typedef struct iterator iterator;
typedef struct CBankDesc CBankDesc;
typedef struct iterator_base iterator_base;
typedef struct iterator iterator;
typedef struct _stCdBlock _stCdBlock;
typedef struct _tdstThemePart _tdstThemePart;
typedef struct CSrcFlow CSrcFlow;
typedef struct sTreeNode sTreeNode;
typedef struct CAllocBlock CAllocBlock;
typedef union _tduDataSample _tduDataSample;
typedef struct iterator iterator;
typedef struct CSwitchElement CSwitchElement;
typedef struct CResData CResData;
typedef struct sstring sstring;
typedef struct CEventResData CEventResData;
typedef struct sset sset;
typedef struct CBankDescCont CBankDescCont;
typedef struct CIdObj CIdObj;
typedef struct CLookupElement CLookupElement;
typedef struct streebase streebase;
typedef struct smap smap;
typedef union _tduDataMidi _tduDataMidi;
typedef struct CTextFile CTextFile;
typedef struct CRefIdObj CRefIdObj;
typedef struct CPS2IdObjInfo CPS2IdObjInfo;
typedef struct _tdstTypeCD _tdstTypeCD;
typedef struct stSampleMemory stSampleMemory;
typedef struct iterator iterator;
typedef struct CTextFileSrc CTextFileSrc;
typedef struct _stMemBlockA _stMemBlockA;
typedef union _tduRefRes _tduRefRes;
typedef struct sset sset;

struct CIdObjPtr {
    int m_poElmt; /* +0x0 */
};

struct CSwitchResData {
    /* C++ base CResData at +0x0. */
    unsigned int m_uiNbElmts; /* +0x18 */
    unsigned int m_uiInfoType; /* +0x1c */
    unsigned int m_uiDefaultIndex; /* +0x20 */
    float m_fVolume; /* +0x24 */
    int m_paElements; /* +0x28 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
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

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CBankDesc {
    /* C++ base sset at +0x0. */
    int mroLoader; /* +0x10 */
    sstring mostringName; /* +0x14 */
};

struct iterator_base {
    int _Ptr; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct _stCdBlock {
    unsigned int u32Size; /* +0x0 */
    unsigned int u32Sector; /* +0x4 */
};

struct _tdstThemePart {
    _tduRefRes uRes; /* +0x0 */
    int bLoopStart : 1; /* bit 0, byte +0x4 */
    int bLoopEnd : 1; /* bit 1, byte +0x4 */
    int lNbLoops; /* +0x8 */
    /* aggregate */ int eTransition; /* +0xc */
    int rFadeDuration; /* +0x10 */
};

struct CSrcFlow {
    /* aggregate */ int CFlow; /* +0x8 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct CAllocBlock {
    int m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

union _tduDataSample {
    stSampleMemory stRAMMem; /* +0x0 */
    stSampleMemory stRAMStream; /* +0x0 */
    stSampleMemory stCDMem; /* +0x0 */
    /* aggregate */ int stCDStream; /* +0x0 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CSwitchElement {
    CIdObjPtr m_pTarget; /* +0x0 */
    unsigned int m_uiValue; /* +0x4 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct sstring {
    int m_pcData; /* +0x0 */
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

struct CBankDescCont {
    /* C++ base smap at +0x0. */
    /* aggregate */ int moLoader; /* +0x10 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct CLookupElement {
    int m_iNbRef; /* +0x0 */
    /* aggregate */ int m_oId; /* +0x4 */
    int m_poIdObj; /* +0xc */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

union _tduDataMidi {
    /* aggregate */ int stMem; /* +0x0 */
    /* aggregate */ int stStream; /* +0x0 */
};

struct CTextFile {
    /* aggregate */ int m_File; /* +0x0 */
    sstring mostringName; /* +0x28 */
    unsigned char m_bOpened; /* +0x2c */
    /* aggregate */ int eState; /* +0x30 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CPS2IdObjInfo {
    /* aggregate */ int m_oId; /* +0x0 */
    unsigned int m_uiOffset; /* +0x8 */
    sstring m_strFileName; /* +0xc */
};

struct _tdstTypeCD {
    int iBidon; /* +0x0 */
};

struct stSampleMemory {
    _stMemBlockA stLeft; /* +0x0 */
    _stMemBlockA stRight; /* +0x8 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CTextFileSrc {
    /* C++ base CTextFile at +0x0. */
    /* aggregate */ int eCTextFileSrc; /* +0x34 */
    int mpchBuffer1; /* +0x38 */
    int mpchBuffer2; /* +0x3c */
    int mpchBufferEnd; /* +0x40 */
    char mchBuffer[2048]; /* +0x44 */
    int mpchCurrent; /* +0x844 */
    unsigned int mdwPosition; /* +0x848 */
};

struct _stMemBlockA {
    unsigned int u32Size; /* +0x0 */
    unsigned int u32Addr; /* +0x4 */
};

union _tduRefRes {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

int CD_ProgressCallBack;
static int gro_BankCont;
static int gro_BankLoader;
static char gch_Title[256];
static char gch_SoundFolder[1024];
static char gch_DivertSoundFolder[1024];
sset gs_oListToLoad;
int g_pSoundCache;
int ms_czNil;
sTreeLink _NilElmt;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 254–254 */
/* addr: 0x00187a60  size: 32 bytes */
void _NilElmt__Q24usnd9streebase(void)
{
    /* line map: */
    /*   line 254 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 425–478 */
/* addr: 0x00187a80  size: 616 bytes */
void fn_vUpdateSwitches__FPCc(char* pIdStr)
{
    /* aggregate */ int oLoader;
    sstring o_Sentence;
    CTextFileSrc o_File;
    char ch_Path[1024];
    /* line map: */
    /*   line 425 @ +0x000 */
    /*   line 427 @ +0x000 */
    /*   line 440 @ +0x000 */
    /*   line 443 @ +0x000 */
    /*   line 443 @ +0x000 */
    /*   line 449 @ +0x000 */
    /*   line 452 @ +0x000 */
    /*   line 457 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 359–412 */
/* addr: 0x00188700  size: 424 bytes */
void fn_vLoadSwitches__FP9CBankDesc(CBankDesc* po_BankDesc, CSwitchResData* pSwitchData, CEventResData* pEventData)
{
    /* aggregate */ int switchId;
    iterator it;
    /* line map: */
    /*   line 359 @ +0x000 */
    /*   line 359 @ +0x000 */
    /*   line 365 @ +0x000 */
    /*   line 371 @ +0x000 */
    /*   line 378 @ +0x000 */
    /*   line 381 @ +0x000 */
    /*   line 386 @ +0x000 */
    /*   line 386 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 296–343 */
/* addr: 0x00188ad0  size: 472 bytes */
void SND_fn_vFinishLoad(char* pIdStr, CBankDesc* po_BankDesc)
{
    iterator it;
    unsigned int uiTime;
    int iStepSize;
    int iNbBanks;
    /* line map: */
    /*   line 296 @ +0x000 */
    /*   line 296 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 307 @ +0x000 */
    /*   line 311 @ +0x000 */
    /*   line 315 @ +0x000 */
    /*   line 319 @ +0x000 */
    /*   line 322 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 285–288 */
/* addr: 0x00188cb0  size: 52 bytes */
void SND_fn_vStartLoad(void)
{
    /* line map: */
    /*   line 285 @ +0x000 */
    /*   line 285 @ +0x000 */
    /*   line 288 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 269–269 */
/* addr: 0x00188cf0  size: 48 bytes */
void SND_fn_pstGetBlockEventFromId(unsigned int u32_EvtId, CEventResData* po_Answer)
{
    /* line map: */
    /*   line 269 @ +0x000 */
    /*   line 269 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 242–261 */
/* addr: 0x00188d20  size: 168 bytes */
int SND_fn_bUnloadBank(char* pIdStr)
{
    int b_Answer;
    /* line map: */
    /*   line 242 @ +0x000 */
    /*   line 246 @ +0x000 */
    /*   line 250 @ +0x000 */
    /*   line 257 @ +0x000 */
    /*   line 261 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 166–232 */
/* addr: 0x00188dd0  size: 980 bytes */
int SND_fn_bLoadBank(char* pch_NameWithoutExt)
{
    sstring o_Sentence;
    CTextFileSrc o_File;
    unsigned int uiTime;
    char ch_Path[1024];
    /* line map: */
    /*   line 166 @ +0x000 */
    /*   line 166 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 185 @ +0x000 */
    /*   line 187 @ +0x000 */
    /*   line 200 @ +0x000 */
    /*   line 203 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 121–129 */
/* addr: 0x00189560  size: 108 bytes */
unsigned char fn_s8Digit__FUc(unsigned char s8_Digit)
{
    unsigned char s8_Answer;
    /* line map: */
    /*   line 121 @ +0x000 */
    /*   line 124 @ +0x000 */
    /*   line 126 @ +0x000 */
    /*   line 129 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001895d0  size: 8 bytes */
int SND_fn_bDesInitDataLoadSnd(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 101–103 */
/* addr: 0x001895e0  size: 32 bytes */
int SND_fn_bInitDataLoadSnd(void)
{
    /* line map: */
    /*   line 101 @ +0x000 */
    /*   line 103 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeldbin.cpp lines 91–93 */
/* addr: 0x00189600  size: 76 bytes */
void fs_vUppercase__FPc(char* p)
{
    /* line map: */
    /*   line 91 @ +0x000 */
    /*   line 93 @ +0x000 */
    /* TODO: decompile from asm/... */
}
