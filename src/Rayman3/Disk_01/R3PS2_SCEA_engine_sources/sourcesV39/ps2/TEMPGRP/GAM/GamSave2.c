/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SAV2_tdstList_ SAV2_tdstList_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef union SAV2_tduData_ SAV2_tduData_;
typedef struct SAV2_tdstHeader_ SAV2_tdstHeader_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct _reent _reent;
typedef struct __sFILE __sFILE;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct anon_0 anon_0;
typedef struct _Bigint _Bigint;
typedef union anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct tm tm;
typedef struct anon_3 anon_3;
typedef struct tdstBlockInfo_ tdstBlockInfo_;
typedef struct tdstGameOptions_ tdstGameOptions_;
typedef struct anon_4 anon_4;
typedef struct _atexit _atexit;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct __sbuf __sbuf;
typedef struct _stTimerCount _stTimerCount;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;

struct SAV2_tdstList_ {
    SAV2_tdstHeader_ stListHeader; /* +0x0 */
    /* aggregate */ int SAV2_ListAnchor; /* +0xb4 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

union SAV2_tduData_ {
    unsigned char u8Data; /* +0x0 */
    unsigned short u16Data; /* +0x0 */
    unsigned int u32Data; /* +0x0 */
    float fFloat; /* +0x0 */
    int p_stVector; /* +0x0 */
    int p_szString; /* +0x0 */
    int p_vArray; /* +0x0 */
};

struct SAV2_tdstHeader_ {
    anon_3 aEnvValue[10]; /* +0x0 */
    unsigned int aForKeyAlgo[4]; /* +0x50 */
    int EndOfGameIsDone; /* +0x60 */
    int MaxIndCurrentEnv; /* +0x64 */
    /* aggregate */ int stMenuOptions; /* +0x68 */
    unsigned int ulWarnedUserAboutAutoSave; /* +0x74 */
    int RevisitMode; /* +0x78 */
    int RevisitEnvScore; /* +0x7c */
    int RevisitGlobalScore; /* +0x80 */
    int RevisitEnvironment; /* +0x84 */
    int RevisitOriginEnvironment; /* +0x88 */
    char szLevelName[20]; /* +0x8c */
    char szLevelNameAfterRevisit[20]; /* +0xa0 */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    int d_stAnimEvent; /* +0x4 */
    int d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct tdstGetSetParam_ {
    anon_0 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    int hFirstElementDyn; /* +0x0 */
    int hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

struct _reent {
    int _errno; /* +0x0 */
    int _stdin; /* +0x4 */
    int _stdout; /* +0x8 */
    int _stderr; /* +0xc */
    int _inc; /* +0x10 */
    char _emergency[25]; /* +0x14 */
    int _current_category; /* +0x30 */
    int _current_locale; /* +0x34 */
    int __sdidinit; /* +0x38 */
    int __cleanup; /* +0x3c */
    int _result; /* +0x40 */
    int _result_k; /* +0x44 */
    int _p5s; /* +0x48 */
    int _freelist; /* +0x4c */
    int _cvtlen; /* +0x50 */
    int _cvtbuf; /* +0x54 */
    anon_1 _new; /* +0x58 */
    int _atexit; /* +0x148 */
    _atexit _atexit0; /* +0x14c */
    int _sig_func; /* +0x1d4 */
    /* aggregate */ int __sglue; /* +0x1d8 */
    __sFILE __sf[3]; /* +0x1e4 */
};

struct __sFILE {
    int _p; /* +0x0 */
    int _r; /* +0x4 */
    int _w; /* +0x8 */
    short _flags; /* +0xc */
    short _file; /* +0xe */
    __sbuf _bf; /* +0x10 */
    int _lbfsize; /* +0x18 */
    int _cookie; /* +0x1c */
    int _read; /* +0x20 */
    int _write; /* +0x24 */
    int _seek; /* +0x28 */
    int _close; /* +0x2c */
    __sbuf _ub; /* +0x30 */
    int _up; /* +0x38 */
    int _ur; /* +0x3c */
    unsigned char _ubuf[3]; /* +0x40 */
    unsigned char _nbuf[1]; /* +0x43 */
    __sbuf _lb; /* +0x44 */
    int _blksize; /* +0x4c */
    int _offset; /* +0x50 */
    int _data; /* +0x54 */
};

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct anon_0 {
    /* aggregate */ int uParam; /* +0x0 */
};

struct _Bigint {
    int _next; /* +0x0 */
    int _k; /* +0x4 */
    int _maxwds; /* +0x8 */
    int _sign; /* +0xc */
    int _wds; /* +0x10 */
    unsigned int _x[1]; /* +0x14 */
};

union anon_1 {
    anon_2 _reent; /* +0x0 */
    anon_4 _unused; /* +0x0 */
};

struct anon_2 {
    unsigned int _unused_rand; /* +0x0 */
    int _strtok_last; /* +0x4 */
    char _asctime_buf[26]; /* +0x8 */
    tm _localtime_buf; /* +0x24 */
    int _gamma_signgam; /* +0x48 */
    int _rand_next; /* +0x50 */
};

struct tm {
    int tm_sec; /* +0x0 */
    int tm_min; /* +0x4 */
    int tm_hour; /* +0x8 */
    int tm_mday; /* +0xc */
    int tm_mon; /* +0x10 */
    int tm_year; /* +0x14 */
    int tm_wday; /* +0x18 */
    int tm_yday; /* +0x1c */
    int tm_isdst; /* +0x20 */
};

struct anon_3 {
    unsigned int ulNbCage; /* +0x0 */
    unsigned int ulScore; /* +0x4 */
};

struct tdstBlockInfo_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
};

struct tdstGameOptions_ {
    char szDefaultFileName[256]; /* +0x0 */
    char szCurrentFileName[256]; /* +0x100 */
    /* array */ int a_stSaveGameSlots[1]; /* +0x200 */
    unsigned int ulNbOfSlots; /* +0x208 */
    unsigned int ulCurrentSlot; /* +0x20c */
    unsigned int ulDetails; /* +0x210 */
    unsigned int ulScreenSize; /* +0x214 */
    unsigned int ulPal60; /* +0x218 */
    unsigned int ulScreenSizeLoad; /* +0x21c */
    int s32VolumeSound; /* +0x220 */
    int s32VolumeVoice; /* +0x224 */
    int s32VolumeMusic; /* +0x228 */
    int s32VolumeAmbiance; /* +0x22c */
    int s32VolumeMenu; /* +0x230 */
};

struct anon_4 {
    /* aggregate */ int _nextf; /* +0x0 */
    unsigned int _nmalloc[30]; /* +0x78 */
};

struct _atexit {
    int _next; /* +0x0 */
    int _ind; /* +0x4 */
    /* aggregate */ int _fns; /* +0x8 */
};

struct tdstEngineTimerStructure_ {
    unsigned int ulTrameNumber; /* +0x0 */
    short sTimerHandle; /* +0x4 */
    unsigned int ulCurrentTimerCount; /* +0x8 */
    unsigned int ulDeltaTimerCount; /* +0xc */
    unsigned int a_ulCounter[16]; /* +0x10 */
    unsigned int ulUsefulDeltaTime; /* +0x50 */
    unsigned int ulPauseTime; /* +0x54 */
    float xFrameLength; /* +0x58 */
    _stTimerCount stRealTimeCount; /* +0x60 */
    _stTimerCount stPauseTime; /* +0x70 */
    unsigned int ulTickPerMS; /* +0x80 */
};

struct SECT_tdstSector_ {
    /* aggregate */ int stListOfCharacters; /* +0x0 */
    /* aggregate */ int stListOfStaticLights; /* +0xc */
    /* aggregate */ int stListOfDNMLights; /* +0x14 */
    /* aggregate */ int stListOfSectorsInGraphicInteraction; /* +0x20 */
    /* aggregate */ int stListOfSectorsInCollisionInteraction; /* +0x28 */
    /* aggregate */ int stListOfSectorsInActivityInteraction; /* +0x30 */
    /* aggregate */ int stListOfSectorsInSoundInteraction; /* +0x38 */
    /* aggregate */ int stListOfSoundEvent; /* +0x40 */
    /* array */ int stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    int h_PreviousSectorInList; /* +0x70 */
    int h_NextSectorInList; /* +0x74 */
    int lModifierMulIntensity; /* +0x78 */
    int lModifierAddIntensity; /* +0x7c */
    unsigned int glOpaqueDisplayList; /* +0x80 */
    unsigned int glTransparentDisplayList; /* +0x84 */
    char cCurrentActivity; /* +0x88 */
    char cWantedActivity; /* +0x89 */
    unsigned char ucInList; /* +0x8a */
    int xTransition; /* +0x8c */
    _SND_tduRefEvt hTransitionSoundEvent; /* +0x90 */
};

struct __sbuf {
    int _base; /* +0x0 */
    int _size; /* +0x4 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

unsigned char g_ucSAV2ModuleId;
unsigned int g_SAV2_ActiveMemoryCard;
unsigned char SAV2_ExitCode;
int SAV2_g_hExistSaveOnDisk;
unsigned int g_UserWarnedAboutAutoSave;
int PS2_g_SaveBloc;
char SAV2_g_LevelNameAfterReinitToSave[20];
char SAV2_g_LevelNameToSave[20];
unsigned char SAV2_g_ulSizeByType[7];
SAV2_tdstList_ SAV2_g_stList;
tdstBlockInfo_ g_a_stSAV2BlocksInfo[1];
int MENU_g_bVibration;
/* aggregate */ int g_stEngineStructure;
int g_IndCurrentEnv;
int g_RevisitIndCurrentEnv;
int g_RevisitCurrentGlobalScore;
int g_RevisitGlobalScoreAtBeginingOfLevel;
int g_RevisitCurrentEnvScore;
int g_RevisitEnvScoreAtBeginingOfLevel;
int g_RevisitMode;
int g_RevisitIndEnvironementFromWhereWeCome;
int g_MaxIndCurrentEnv;
int g_EndOfGameIsDone;
unsigned int g_aForKeyAlgo;
anon_3 g_aEnvValue;
tdstGameOptions_ g_stGameOptions;
int MENU_g_bInversionVert;
int MENU_g_bInversionHor;
int GLI_g_bWideScreenMode;
float GLI_g_ScreenPos_DY;
float GLI_g_ScreenPos_DX;
/* array */ int g_axPadMapping;
/* aggregate */ int g_a_p_stMmgModuleBlocksInfo;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 68–464 */
/* addr: 0x0028a050  size: 2036 bytes */
void fn_vComputeDeformationPS2(/* function pointer */ int p_stGeoObj, unsigned int ulNbVertices, unsigned int ulChannelNumber, /* function pointer */ int p_stDeformation, /* function pointer */ int p_stDeformationSetInfo, /* function pointer */ int p_stDeformationInfluence, /* function pointer */ int p_stDeformationVertexEnd, /* function pointer */ int p_stDeformationVertex, tdstAChannel_* ChannelArray, tdstAChannel_* p_stChannel, /* function pointer */ int p_stObjectGlobalMatrix, /* function pointer */ int p_stMyGlobalMatrix, /* function pointer */ int pLastVectorToUpdate, /* function pointer */ int p_stVectorInObject)
{
    int* p;
    int f3;
    int f2;
    int f1;
    int pref3;
    int pref2;
    int pref1;
    unsigned int ulIndex4;
    unsigned int ulIndex3;
    unsigned int ulIndex2;
    unsigned int ulIndex;
    /* line map: */
    /*   line 68 @ +0x000 */
    /*   line 68 @ +0x000 */
    /*   line 87 @ +0x000 */
    /*   line 89 @ +0x000 */
    /*   line 95 @ +0x000 */
    /*   line 105 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 113 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1599–1660 */
/* addr: 0x0028a850  size: 660 bytes */
void SAV2_fn_vActualizeMenuOptionsAfterLoad(/* function pointer */ int p)
{
    int i;
    /* line map: */
    /*   line 1599 @ +0x000 */
    /*   line 1599 @ +0x000 */
    /*   line 1618 @ +0x000 */
    /*   line 1603 @ +0x000 */
    /*   line 1610 @ +0x000 */
    /*   line 1612 @ +0x000 */
    /*   line 1619 @ +0x000 */
    /*   line 1623 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1582–1592 */
/* addr: 0x0028aaf0  size: 60 bytes */
void SAV2_fn_vUpdateVibrations(void)
{
    unsigned int ulCurrentTime;
    /* line map: */
    /*   line 1582 @ +0x000 */
    /*   line 1584 @ +0x000 */
    /*   line 1587 @ +0x000 */
    /*   line 1592 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1506–1519 */
/* addr: 0x0028ab30  size: 88 bytes */
int SAV2_CheckMCStatus(int _id)
{
    int Value;
    int Bidon;
    /* line map: */
    /*   line 1506 @ +0x000 */
    /*   line 1506 @ +0x000 */
    /*   line 1508 @ +0x000 */
    /*   line 1519 @ +0x000 */
    /*   line 1519 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1503–1503 */
/* addr: 0x0028ab90  size: 16 bytes */
int SAV2_LastError(void)
{
    /* line map: */
    /*   line 1503 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1486–1486 */
/* addr: 0x0028aba0  size: 60 bytes */
void SAV2_fn_p_szGetSaveNameOfSaveNumber(void)
{
    int start;
    /* line map: */
    /*   line 1486 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1475–1475 */
/* addr: 0x0028abe0  size: 44 bytes */
unsigned char SAV2_fn_ucGetNumberOfExistingSave(void)
{
    /* line map: */
    /*   line 1475 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1454–1469 */
/* addr: 0x0028ac10  size: 64 bytes */
unsigned char SAV2_fn_bActualizeExistingSave(void)
{
    int start;
    /* line map: */
    /*   line 1454 @ +0x000 */
    /*   line 1469 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1421–1435 */
/* addr: 0x0028ac50  size: 68 bytes */
unsigned char SAV2_fn_bRemoveSaveFromDisk(void)
{
    int start;
    /* line map: */
    /*   line 1421 @ +0x000 */
    /*   line 1435 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1304–1414 */
/* addr: 0x0028aca0  size: 1756 bytes */
unsigned char SAV2_fn_bUpdateAllDataFromLoadedFile(void)
{
    unsigned char* pStartAddress;
    signed char* pData;
    char szElementName[256];
    unsigned char ucElementNumber;
    unsigned char ucDataInformation;
    unsigned char ucTempU8;
    /* line map: */
    /*   line 1304 @ +0x000 */
    /*   line 1312 @ +0x000 */
    /*   line 1324 @ +0x000 */
    /*   line 1329 @ +0x000 */
    /*   line 1329 @ +0x000 */
    /*   line 1333 @ +0x000 */
    /*   line 1337 @ +0x000 */
    /*   line 1339 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 1081–1284 */
/* addr: 0x0028b380  size: 64 bytes */
unsigned char SAV2_fn_bReadAllFromDisk(char* p_szSaveName)
{
    /* line map: */
    /*   line 1081 @ +0x000 */
    /*   line 1284 @ +0x000 */
    /*   line 1284 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 701–950 */
/* addr: 0x0028b3c0  size: 2268 bytes */
unsigned char SAV2_fn_bSaveAllOnDisk(char* p_szSaveName, /* function pointer */ int p_stElement)
{
    unsigned char* pStartAddress;
    signed char* pData;
    unsigned char ucElementNumber;
    unsigned char ucTempU8;
    int i;
    /* line map: */
    /*   line 701 @ +0x000 */
    /*   line 720 @ +0x000 */
    /*   line 788 @ +0x000 */
    /*   line 788 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 799 @ +0x000 */
    /*   line 804 @ +0x000 */
    /*   line 820 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 642–642 */
/* addr: 0x0028bca0  size: 32 bytes */
/*type_0x00*/ int GAM_vAllocateSaveBloc(void)
{
    /* line map: */
    /*   line 642 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 594–596 */
/* addr: 0x0028bcc0  size: 92 bytes */
void SAV2_fn_vSetValueForSave(char* p_szElementName, void* p_stParam)
{
    /* line map: */
    /*   line 594 @ +0x000 */
    /*   line 596 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 586–588 */
/* addr: 0x0028bd20  size: 92 bytes */
void SAV2_fn_vSetValueInPipeline(char* p_szElementName, void* p_stParam)
{
    /* line map: */
    /*   line 586 @ +0x000 */
    /*   line 588 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0028bd80  size: 12 bytes */
void SAV2_fn_xGetASingleValue(char* p_szElementName, void* p_stParam)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0028bd90  size: 12 bytes */
void SAV2_fn_vSetASingleValue(char* p_szElementName, void* p_stParam)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 483–556 */
/* addr: 0x0028bda0  size: 660 bytes */
void SAV2_fn_xGetAValueAtIndex(char* p_szElementName, unsigned int ulElementNumber, void* p_stParam, tdstGetSetParam_* p_stParamAI)
{
    char* p_szString;
    char* p_szString;
    /* line map: */
    /*   line 483 @ +0x000 */
    /*   line 483 @ +0x000 */
    /*   line 486 @ +0x000 */
    /*   line 490 @ +0x000 */
    /*   line 494 @ +0x000 */
    /*   line 495 @ +0x000 */
    /*   line 498 @ +0x000 */
    /*   line 499 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 373–476 */
/* addr: 0x0028c040  size: 1292 bytes */
void SAV2_fn_vSetAValueAtIndex(char* p_szElementName, unsigned int ulElementNumber, void* p_stParam, tdstGetSetParam_* p_stParamAI)
{
    char* p_szString;
    char* p_szString;
    /* line map: */
    /*   line 373 @ +0x000 */
    /*   line 373 @ +0x000 */
    /*   line 376 @ +0x000 */
    /*   line 380 @ +0x000 */
    /*   line 385 @ +0x000 */
    /*   line 388 @ +0x000 */
    /*   line 391 @ +0x000 */
    /*   line 394 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 361–366 */
/* addr: 0x0028c550  size: 120 bytes */
void SAV2_fn_vDeleteAllList(/* function pointer */ int p_stNextElement, /* function pointer */ int p_stElement)
{
    /* line map: */
    /*   line 361 @ +0x000 */
    /*   line 361 @ +0x000 */
    /*   line 364 @ +0x000 */
    /*   line 366 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 336–338 */
/* addr: 0x0028c5d0  size: 128 bytes */
void SAV2_fn_vDeletePipelineElement(char* p_szElementName)
{
    /* line map: */
    /*   line 336 @ +0x000 */
    /*   line 336 @ +0x000 */
    /*   line 338 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 326–329 */
/* addr: 0x0028c650  size: 144 bytes */
void SAV2_fn_vDeleteAllPipeline(/* function pointer */ int p_stNextElement, /* function pointer */ int p_stElement)
{
    /* line map: */
    /*   line 326 @ +0x000 */
    /*   line 326 @ +0x000 */
    /*   line 329 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 316–318 */
/* addr: 0x0028c6e0  size: 112 bytes */
void SAV2_fn_vDeleteAField(char* p_szElementName)
{
    /* line map: */
    /*   line 316 @ +0x000 */
    /*   line 316 @ +0x000 */
    /*   line 318 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 297–309 */
/* addr: 0x0028c750  size: 716 bytes */
void SAV2_fn_vDeclareAField(char* p_szElementName, /* aggregate */ int ucType, unsigned int ulNumberOfElement, unsigned char bStatic, unsigned char bSave)
{
    /* line map: */
    /*   line 297 @ +0x000 */
    /*   line 297 @ +0x000 */
    /*   line 299 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 309 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 290–290 */
/* addr: 0x0028ca20  size: 108 bytes */
unsigned char SAV2_fn_bIsExist(char* p_szElementName)
{
    /* line map: */
    /*   line 290 @ +0x000 */
    /*   line 290 @ +0x000 */
    /*   line 290 @ +0x000 */
    /*   line 290 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 279–285 */
/* addr: 0x0028ca90  size: 96 bytes */
void SAV2_fn_p_stFindElementByName(char* p_szElementName, /* function pointer */ int p_stElement)
{
    /* line map: */
    /*   line 279 @ +0x000 */
    /*   line 279 @ +0x000 */
    /*   line 282 @ +0x000 */
    /*   line 285 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 249–271 */
/* addr: 0x0028caf0  size: 644 bytes */
void SAV2_fn_vFreeAnElement(/* function pointer */ int p_stElement)
{
    unsigned int i;
    /* line map: */
    /*   line 249 @ +0x000 */
    /*   line 249 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 256 @ +0x000 */
    /*   line 258 @ +0x000 */
    /*   line 261 @ +0x000 */
    /*   line 264 @ +0x000 */
    /*   line 266 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 205–215 */
/* addr: 0x0028cd80  size: 156 bytes */
void SAV2_fn_eGiveElementTypeFromAIType(/* aggregate */ int _eIAType)
{
    /* aggregate */ int eDataType;
    /* line map: */
    /*   line 205 @ +0x000 */
    /*   line 207 @ +0x000 */
    /*   line 209 @ +0x000 */
    /*   line 211 @ +0x000 */
    /*   line 213 @ +0x000 */
    /*   line 215 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GamSave2.c lines 159–188 */
/* addr: 0x0028ce20  size: 536 bytes */
void SAV2_fn_vFindGoodTypeAndOptionsFromString(char* p_szElementOptions, /* function pointer */ int p_ucType, unsigned char* p_bStatic, unsigned char* p_bSave)
{
    /* line map: */
    /*   line 159 @ +0x000 */
    /*   line 159 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 166 @ +0x000 */
    /*   line 170 @ +0x000 */
    /*   line 172 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 178 @ +0x000 */
    /* TODO: decompile from asm/... */
}
