/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;

struct anon_0 {
    anon_1 _Create; /* +0x0 */
    anon_1 _Modify; /* +0x8 */
    unsigned int FileSizeByte; /* +0x10 */
    unsigned short AttrFile; /* +0x14 */
    unsigned short Reserve1; /* +0x16 */
    unsigned int Reserve2; /* +0x18 */
    unsigned int PdaAplNo; /* +0x1c */
    unsigned char EntryName[32]; /* +0x20 */
};

struct anon_1 {
    unsigned char Resv2; /* +0x0 */
    unsigned char Sec; /* +0x1 */
    unsigned char Min; /* +0x2 */
    unsigned char Hour; /* +0x3 */
    unsigned char Day; /* +0x4 */
    unsigned char Month; /* +0x5 */
    unsigned short Year; /* +0x6 */
};

struct anon_2 {
    int szFileNameRead; /* +0x0 */
    int szFileNameSave; /* +0x4 */
    unsigned int u32Size; /* +0x8 */
    int pData; /* +0xc */
};

struct anon_3 {
    unsigned char Head[4]; /* +0x0 */
    unsigned short Reserv1; /* +0x4 */
    unsigned short OffsLF; /* +0x6 */
    unsigned int Reserv2; /* +0x8 */
    unsigned int TransRate; /* +0xc */
    /* array */ int BgColor[4]; /* +0x10 */
    /* array */ int LightDir[3]; /* +0x50 */
    /* array */ int LightColor[3]; /* +0x80 */
    float Ambient[4]; /* +0xb0 */
    unsigned char TitleName[68]; /* +0xc0 */
    unsigned char FnameView[64]; /* +0x104 */
    unsigned char FnameCopy[64]; /* +0x144 */
    unsigned char FnameDel[64]; /* +0x184 */
    unsigned char Reserve3[512]; /* +0x1c4 */
};

int gUpdateFielInfo;
int bSetMC;
int bCheckMC;
int bOverwriteMC;
static anon_2 SVG_gs_a3_stIconDesc[3];
static unsigned char gs_bSceMcOpIsSuccessful;
static int SVG_gs_lActiveVmsNumber;
static int gs_iSceMcOpStatus;
int gs_iSceMcOpChanged;
int gs_iSceMcOpWarned;
anon_0 gFileInfo;
anon_0 gFileInfo2;
int MC_g_GroupSaveGameAndOptions;
int SVG_g_iFreeClustersAfter;
int SVG_g_iFreeClustersBefore;
static /* array */ int gs_a_stCardStatus[2];
int (*SVG_fn_iMCStatusComparer)(/* function pointer */ int, /* function pointer */ int);
/* array */ int g_axPadMapping;

/* addr: 0x00133940  size: 8 bytes */
unsigned int MNC_fn_ulGetAreaChecksum(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 144–168 */
/* addr: 0x00133950  size: 424 bytes */
void SVG_fn_vCheckStatusChangeInMC0(void)
{
    unsigned int iResultInfo;
    int iType;
    unsigned int bResult;
    unsigned int u32RetryCount;
    /* line map: */
    /*   line 144 @ +0x000 */
    /*   line 146 @ +0x000 */
    /*   line 151 @ +0x000 */
    /*   line 153 @ +0x000 */
    /*   line 157 @ +0x000 */
    /*   line 160 @ +0x000 */
    /*   line 163 @ +0x000 */
    /*   line 168 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 173–177 */
/* addr: 0x00133b00  size: 56 bytes */
int SVG_fn_iGetChangeInMC0AndReset(void)
{
    int iReturn;
    /* line map: */
    /*   line 173 @ +0x000 */
    /*   line 175 @ +0x000 */
    /*   line 177 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 182–184 */
/* addr: 0x00133b40  size: 36 bytes */
int SVG_fn_iGetChangeInMC0(void)
{
    /* line map: */
    /*   line 182 @ +0x000 */
    /*   line 184 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 189–189 */
/* addr: 0x00133b70  size: 20 bytes */
void SVG_fn_vSetMC0AsChanged(void)
{
    /* line map: */
    /*   line 189 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 237–267 */
/* addr: 0x00133b90  size: 124 bytes */
void SVG_fn_szGetSonyCompliantDirName(char* _szUserName)
{
    /* line map: */
    /*   line 237 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 267 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 278–288 */
/* addr: 0x00133c10  size: 384 bytes */
int SVG_fn_s32Format(int _iPort, int _iSlot)
{
    unsigned int u32RetryCount;
    int iResult;
    /* line map: */
    /*   line 278 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 284 @ +0x000 */
    /*   line 288 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 318–327 */
/* addr: 0x00133d90  size: 404 bytes */
int SVG_fn_s32GetFileInfo(int _iPort, int _iSlot, char* _szFileName, anon_0* _pRes)
{
    unsigned int u32RetryCount;
    int iFd;
    /* line map: */
    /*   line 318 @ +0x000 */
    /*   line 322 @ +0x000 */
    /*   line 324 @ +0x000 */
    /*   line 327 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 332–355 */
/* addr: 0x00133f30  size: 576 bytes */
int SVG_fn_s32GetFileAttributes(int _iPort, int _iSlot, char* _szFileName)
{
    unsigned int u32RetryCount;
    int i;
    unsigned short t;
    int iFd;
    anon_0 Res;
    /* line map: */
    /*   line 332 @ +0x000 */
    /*   line 338 @ +0x000 */
    /*   line 341 @ +0x000 */
    /*   line 346 @ +0x000 */
    /*   line 349 @ +0x000 */
    /*   line 351 @ +0x000 */
    /*   line 355 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 412–420 */
/* addr: 0x00134170  size: 116 bytes */
int SVG_fn_s32GetFileSize(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* line map: */
    /*   line 412 @ +0x000 */
    /*   line 416 @ +0x000 */
    /*   line 420 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 425–425 */
/* addr: 0x001341f0  size: 28 bytes */
int SVG_fn_SetAsCurrentMemoryCard(int cmc)
{
    /* line map: */
    /*   line 425 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 438–468 */
/* addr: 0x00134210  size: 428 bytes */
int SVG_fn_s32GetFileCoherence(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* line map: */
    /*   line 438 @ +0x000 */
    /*   line 446 @ +0x000 */
    /*   line 453 @ +0x000 */
    /*   line 461 @ +0x000 */
    /*   line 468 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 475–505 */
/* addr: 0x001343c0  size: 296 bytes */
int SVG_fn_s32GetFileCoherence2(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* line map: */
    /*   line 475 @ +0x000 */
    /*   line 490 @ +0x000 */
    /*   line 498 @ +0x000 */
    /*   line 505 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 516–537 */
/* addr: 0x001344f0  size: 196 bytes */
int SVG_fn_s32SetFileCoherence(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* line map: */
    /*   line 516 @ +0x000 */
    /*   line 523 @ +0x000 */
    /*   line 525 @ +0x000 */
    /*   line 527 @ +0x000 */
    /*   line 531 @ +0x000 */
    /*   line 534 @ +0x000 */
    /*   line 537 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 544–565 */
/* addr: 0x001345c0  size: 196 bytes */
int SVG_fn_s32SetFileCoherence2(int _iPort, int _iSlot, char* _szFileName)
{
    char CompleteFilename[255];
    anon_0 Res;
    /* line map: */
    /*   line 544 @ +0x000 */
    /*   line 551 @ +0x000 */
    /*   line 553 @ +0x000 */
    /*   line 555 @ +0x000 */
    /*   line 559 @ +0x000 */
    /*   line 562 @ +0x000 */
    /*   line 565 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 573–607 */
/* addr: 0x00134690  size: 1672 bytes */
int SVG_fn_s32WriteToFile(int _iPort, int _iSlot, char* _szFileName, void* _pData, unsigned int _u32DataSize)
{
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    int iFd;
    int iResult;
    /* line map: */
    /*   line 573 @ +0x000 */
    /*   line 579 @ +0x000 */
    /*   line 583 @ +0x000 */
    /*   line 586 @ +0x000 */
    /*   line 591 @ +0x000 */
    /*   line 593 @ +0x000 */
    /*   line 602 @ +0x000 */
    /*   line 604 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 617–646 */
/* addr: 0x00134d20  size: 1060 bytes */
int SVG_fn_s32ReadFromFile(int _iPort, int _iSlot, char* _szFileName, void* _pData, unsigned int _u32DataSize)
{
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    char real_name[256];
    int iFd;
    int iResult;
    /* line map: */
    /*   line 617 @ +0x000 */
    /*   line 624 @ +0x000 */
    /*   line 627 @ +0x000 */
    /*   line 632 @ +0x000 */
    /*   line 636 @ +0x000 */
    /*   line 639 @ +0x000 */
    /*   line 646 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 655–682 */
/* addr: 0x00135150  size: 284 bytes */
int SVG_fn_s32ReadUnknownFile(int _iPort, int _iSlot, char* _szFileName, void** _ppData, unsigned int* _pu32DataSize)
{
    char real_name[256];
    anon_0 FileInfo;
    int iFd;
    int iResult;
    /* line map: */
    /*   line 655 @ +0x000 */
    /*   line 662 @ +0x000 */
    /*   line 666 @ +0x000 */
    /*   line 669 @ +0x000 */
    /*   line 672 @ +0x000 */
    /*   line 675 @ +0x000 */
    /*   line 677 @ +0x000 */
    /*   line 682 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 694–714 */
/* addr: 0x00135270  size: 552 bytes */
int SVG_fn_s32Query(int _iPort, int _iSlot, int* _p_iFreeClusters)
{
    unsigned int u32RetryCount;
    int iResult;
    int iFormat;
    int iType;
    /* line map: */
    /*   line 694 @ +0x000 */
    /*   line 699 @ +0x000 */
    /*   line 702 @ +0x000 */
    /*   line 704 @ +0x000 */
    /*   line 706 @ +0x000 */
    /*   line 708 @ +0x000 */
    /*   line 712 @ +0x000 */
    /*   line 714 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 735–811 */
/* addr: 0x001354a0  size: 524 bytes */
int SVG_fn_s32QueryAndCheckSpace(int _iPort, int _iSlot, int* _p_iFreeClusters)
{
    int iFreeSpace;
    unsigned int u32RetryCount;
    int iResult;
    int iFormat;
    int iType;
    /* line map: */
    /*   line 735 @ +0x000 */
    /*   line 740 @ +0x000 */
    /*   line 743 @ +0x000 */
    /*   line 745 @ +0x000 */
    /*   line 747 @ +0x000 */
    /*   line 755 @ +0x000 */
    /*   line 807 @ +0x000 */
    /*   line 811 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 921–987 */
/* addr: 0x001356b0  size: 820 bytes */
void SVG_fn_szAsciiToSJIS(char* _szOutSJIS, unsigned short _u16MaxNbChars, char* _szInASCII, unsigned short* _p_u16OffsLF)
{
    int iASCII;
    unsigned char stmp2;
    unsigned char stmp;
    unsigned short u16SJIS;
    unsigned char* p_szOutSJIS;
    unsigned short u16Count;
    unsigned short s_a3a2_u16AsciiTable[3][2];
    unsigned short s_a_u16AsciiKTable[33];
    /* line map: */
    /*   line 921 @ +0x000 */
    /*   line 926 @ +0x000 */
    /*   line 928 @ +0x000 */
    /*   line 932 @ +0x000 */
    /*   line 937 @ +0x000 */
    /*   line 939 @ +0x000 */
    /*   line 944 @ +0x000 */
    /*   line 947 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 999–1077 */
/* addr: 0x001359f0  size: 960 bytes */
int SVG_fn_s32CreateIconFilesForSave(int _iPort, int _iSlot, char* _szSonyCompliantDirName, char* _szTitleName)
{
    float ambient[4];
    float lightcol[3][4];
    float lightdir[3][4];
    int bgcolor[4][4];
    char Title[66];
    char szFileName[64];
    anon_3 stIcon;
    int s32Count;
    /* line map: */
    /*   line 999 @ +0x000 */
    /*   line 1012 @ +0x000 */
    /*   line 1023 @ +0x000 */
    /*   line 1030 @ +0x000 */
    /*   line 1033 @ +0x000 */
    /*   line 1038 @ +0x000 */
    /*   line 1040 @ +0x000 */
    /*   line 1046 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1127–1135 */
/* addr: 0x00135db0  size: 400 bytes */
int SVG_fn_s32MakeDir(int _iPort, int _iSlot, char* _szSonyCompliantDirName)
{
    int iResult;
    unsigned int u32RetryCount;
    /* line map: */
    /*   line 1127 @ +0x000 */
    /*   line 1131 @ +0x000 */
    /*   line 1135 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1150–1175 */
/* addr: 0x00135f40  size: 1164 bytes */
int SVG_fn_s32DestroySaveGame(int _iPort, int _iSlot, char* _szSonyCompliantDirName)
{
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    unsigned int u32RetryCount;
    anon_0 a18_stGetDirTable[18];
    int s32Count;
    int iResult;
    /* line map: */
    /*   line 1150 @ +0x000 */
    /*   line 1153 @ +0x000 */
    /*   line 1155 @ +0x000 */
    /*   line 1159 @ +0x000 */
    /*   line 1161 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /*   line 1169 @ +0x000 */
    /*   line 1171 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1204–1234 */
/* addr: 0x001363d0  size: 108 bytes */
int SVG_fn_s32SaveGame(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    int bSavingOptions;
    char* Name;
    /* line map: */
    /*   line 1204 @ +0x000 */
    /*   line 1234 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1259–1292 */
/* addr: 0x00136440  size: 664 bytes */
int SVG_fn_s32SaveGameReal(int _iPort, int _iSlot, char* _szSonyCompliantName, char* _szTitle, void* _pData, unsigned int _u32DataSize)
{
    unsigned int u32RetryCount;
    char szFileName[64];
    int iResult;
    anon_0 stGetDirTable[99];
    /* line map: */
    /*   line 1259 @ +0x000 */
    /*   line 1263 @ +0x000 */
    /*   line 1268 @ +0x000 */
    /*   line 1272 @ +0x000 */
    /*   line 1278 @ +0x000 */
    /*   line 1283 @ +0x000 */
    /*   line 1286 @ +0x000 */
    /*   line 1290 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1302–1323 */
/* addr: 0x001366e0  size: 280 bytes */
int SVG_fn_s32LoadGameReal(int _iPort, int _iSlot, char* _szSonyCompliantName, void* _pData, unsigned int _u32DataSize)
{
    char szFileName[64];
    int ret;
    int iResult;
    anon_0 stGetDirTable[99];
    /* line map: */
    /*   line 1302 @ +0x000 */
    /*   line 1306 @ +0x000 */
    /*   line 1308 @ +0x000 */
    /*   line 1315 @ +0x000 */
    /*   line 1319 @ +0x000 */
    /*   line 1323 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1590–1593 */
/* addr: 0x00136800  size: 104 bytes */
unsigned char SVG_fn_bIsVmsConnected(int _lVmsNumber)
{
    /* line map: */
    /*   line 1590 @ +0x000 */
    /*   line 1593 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1607–1611 */
/* addr: 0x00136870  size: 76 bytes */
unsigned char SVG_fn_bIsActivVmsConnected(void)
{
    /* line map: */
    /*   line 1607 @ +0x000 */
    /*   line 1611 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1669–1669 */
/* addr: 0x001368c0  size: 12 bytes */
int SVG_fn_bGetActiveVms(void)
{
    /* line map: */
    /*   line 1669 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\mcmngr.c lines 1702–1712 */
/* addr: 0x001368d0  size: 392 bytes */
int SVG_fn_s32ReadNextFileInfo(int _iPort, int _iSlot, char* _szFileName, int _not_first, anon_0* _pTable)
{
    unsigned int u32RetryCount;
    int iFd;
    /* line map: */
    /*   line 1702 @ +0x000 */
    /*   line 1708 @ +0x000 */
    /*   line 1712 @ +0x000 */
    /* TODO: decompile from asm/... */
}
