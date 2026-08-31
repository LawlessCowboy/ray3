/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _tdstBinarizedDataForMenu _tdstBinarizedDataForMenu;
typedef struct anon_0 anon_0;
typedef struct tdstMenu2DPages_ tdstMenu2DPages_;
typedef struct tdst_Album_ tdst_Album_;

struct _tdstBinarizedDataForMenu {
    int hText; /* +0x0 */
};

struct anon_0 {
    unsigned int Reserved_Key; /* +0x0 */
    unsigned int Reserved_Key2; /* +0x4 */
    char Name[8]; /* +0x8 */
    char DateTime[26]; /* +0x10 */
    unsigned int ulScore; /* +0x2c */
    unsigned int ulNbCage; /* +0x30 */
};

struct tdstMenu2DPages_ {
    int hMaterial; /* +0x0 */
    /* aggregate */ int eTypePage; /* +0x4 */
    char Title[50]; /* +0x8 */
    char aText[10][50]; /* +0x3a */
    char abGrayed[10]; /* +0x22e */
    char aValue[10]; /* +0x238 */
    unsigned int NbSelection; /* +0x244 */
    unsigned int NbEntry; /* +0x248 */
    unsigned int CurrentFirstEntry; /* +0x24c */
};

struct tdst_Album_ {
    float fPicturePercentage; /* +0x0 */
    int bMoveForward; /* +0x4 */
    int bMoveBackward; /* +0x8 */
    char szFileName[256]; /* +0xc */
    int lPreviousNextInc; /* +0x10c */
    int lSnapID; /* +0x110 */
    int lSnapID2; /* +0x114 */
};

float g_OffsetStepForScroll;
unsigned int g_NumFirstCharForScroll;
float g_OffsetXForScroll;
int g_CurrentSelectedTextSize;
int g_IsIncreaseSelectedTextSize;
int g_IsUpdateSelectedTextSize;
float g_CurrentSelectedSpriteScale;
int g_IsIncreaseSelectedSpriteScale;
float g_YTitle;
float g_XTextLeft;
float g_XText;
float g_YButtonText;
float g_AngleGear1;
float g_AngleGear2;
int g_NbCageMax[10];
int g_szAreYouSureQuestion;
int g_AreYouSureValue;
int g_szHelp;
unsigned char g_aNbGradOn[3];
char g_CurrentSaveName[6];
char g_CurrentNameForSavePage[10];
int g_CurrentColForSelection;
int g_CurrentLineForSelection;
int g_CurrentSelectedCharNumber;
unsigned char g_NbArcadeOpen;
unsigned char g_NbCinematicOpen;
char g_aNumLesson[11][4];
int g_bAlbumIsWorking;
int g_bAlbumLoadInProgress;
int g_bCurrentMaterialBuffer;
int g_bAlbumInitialized;
int g_bAlbumLoadSucess;
float g_StepShake;
char g_SignStepShake;
int g_NumStepAnimeStamp;
float g_SpeedScaleStamp;
float g_XCenterStamp;
float g_YCenterStamp;
float g_ScaleStamp;
unsigned int g_aMaxHappyScoreByLevel[9];
tdst_Album_ g_stAlbum;
char g_szHallOfFameKeyString[20];
int g_p_stVpt;
int g_InGameMenu2DActivated;
tdstMenu2DPages_ aMenu2DPages[35];
int g_CurrentMenu2DPage;
int g_hFixMaterialForMenu2D;
/* aggregate */ int g_CurrentActionMenu2D;
int g_NoValidate;
int g_NoGameShortcut;
int g_NoBonusShortcut;
int g_CurrentIndSubMenu;
int g_ExitForbidden;
int g_StartMenuPage;
int g_NotRight;
int g_NotLeft;
int g_hBGMaterialForMenu2D;
_tdstBinarizedDataForMenu g_aBinDataForMenu;
int g_hSelectedFrameMaterialForMenu2D;
unsigned int g_CurrentSelection;
unsigned int g_aForKeyAlgo;
int g_AlbumPage;
/* aggregate */ int g_hFixMaterialForAlbum;
anon_0 g_aFileEntryArray;
int g_RevisitMode;
int g_EndOfGameIsDone;
int g_MaxIndCurrentEnv;
int g_2DMenuID;
int g_FirstCineNameText;
int g_NbColForSelection;
int g_NbLineForSelection;
int g_hFixMaterialForArcadeAndFilms;
int g_hFixMaterialForSelectedFilms;
int g_FirstArcadeNameText;
unsigned char g_NbCharForSaveName;
int g_NextPage;
int g_GotoRight;

/* addr: 0x0028dd30  size: 8 bytes */
unsigned int fn_uiOpenStream(char* szFilename)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 2439–2532 */
/* addr: 0x0028dd40  size: 4424 bytes */
void fn_vDisplayInGameMenu2D(/* function pointer */ int p_stVpt)
{
    /* line map: */
    /*   line 2439 @ +0x000 */
    /*   line 2447 @ +0x000 */
    /*   line 2454 @ +0x000 */
    /*   line 2460 @ +0x000 */
    /*   line 2466 @ +0x000 */
    /*   line 2469 @ +0x000 */
    /*   line 2472 @ +0x000 */
    /*   line 2475 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 2194–2243 */
/* addr: 0x0028ee90  size: 2692 bytes */
void DrawTitle(void)
{
    int D2;
    int D1;
    int D;
    int _y2;
    int _x2;
    int _y1;
    int _x1;
    int y2;
    int x2;
    int y1f;
    int x1;
    char szTitle2[50];
    char szTitle1[50];
    char* szTmp;
    /* line map: */
    /*   line 2194 @ +0x000 */
    /*   line 2194 @ +0x000 */
    /*   line 2194 @ +0x000 */
    /*   line 2198 @ +0x000 */
    /*   line 2201 @ +0x000 */
    /*   line 2201 @ +0x000 */
    /*   line 2201 @ +0x000 */
    /*   line 2203 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 2116–2182 */
/* addr: 0x0028f920  size: 5604 bytes */
void DrawCurrentPage(void)
{
    /* line map: */
    /*   line 2116 @ +0x000 */
    /*   line 2116 @ +0x000 */
    /*   line 2116 @ +0x000 */
    /*   line 2120 @ +0x000 */
    /*   line 2128 @ +0x000 */
    /*   line 2131 @ +0x000 */
    /*   line 2134 @ +0x000 */
    /*   line 2137 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 2039–2112 */
/* addr: 0x00290f10  size: 1408 bytes */
void fn_vDrawGlobalInfo(void)
{
    float XChar;
    unsigned int ulNbCage;
    unsigned int ulValue;
    unsigned int ulScore;
    char* szGlobalScore;
    char szTmp1[50];
    /* line map: */
    /*   line 2039 @ +0x000 */
    /*   line 2039 @ +0x000 */
    /*   line 2041 @ +0x000 */
    /*   line 2041 @ +0x000 */
    /*   line 2061 @ +0x000 */
    /*   line 2063 @ +0x000 */
    /*   line 2063 @ +0x000 */
    /*   line 2063 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1622–1639 */
/* addr: 0x00291490  size: 160 bytes */
void fn_vNextSnapShot(void)
{
    int lSnapID;
    /* line map: */
    /*   line 1622 @ +0x000 */
    /*   line 1627 @ +0x000 */
    /*   line 1629 @ +0x000 */
    /*   line 1629 @ +0x000 */
    /*   line 1632 @ +0x000 */
    /*   line 1632 @ +0x000 */
    /*   line 1639 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1594–1618 */
/* addr: 0x00291530  size: 168 bytes */
void fn_vPreviousSnapShot(void)
{
    int lSnapID;
    /* line map: */
    /*   line 1594 @ +0x000 */
    /*   line 1599 @ +0x000 */
    /*   line 1601 @ +0x000 */
    /*   line 1601 @ +0x000 */
    /*   line 1605 @ +0x000 */
    /*   line 1605 @ +0x000 */
    /*   line 1613 @ +0x000 */
    /*   line 1613 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1475–1485 */
/* addr: 0x002915e0  size: 268 bytes */
void fn_vDrawRecapPage(void)
{
    unsigned int i;
    char szTmp[2048];
    /* line map: */
    /*   line 1475 @ +0x000 */
    /*   line 1475 @ +0x000 */
    /*   line 1479 @ +0x000 */
    /*   line 1481 @ +0x000 */
    /*   line 1485 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1403–1438 */
/* addr: 0x002916f0  size: 2316 bytes */
void fn_vDrawXTraPage(void)
{
    char szMsg[50];
    unsigned int N;
    unsigned int j;
    unsigned int i;
    /* line map: */
    /*   line 1403 @ +0x000 */
    /*   line 1407 @ +0x000 */
    /*   line 1413 @ +0x000 */
    /*   line 1417 @ +0x000 */
    /*   line 1419 @ +0x000 */
    /*   line 1423 @ +0x000 */
    /*   line 1428 @ +0x000 */
    /*   line 1432 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1318–1376 */
/* addr: 0x00292000  size: 1120 bytes */
void fn_vDrawCinematicPage(void)
{
    int j;
    int c;
    int l;
    /* line map: */
    /*   line 1318 @ +0x000 */
    /*   line 1331 @ +0x000 */
    /*   line 1334 @ +0x000 */
    /*   line 1337 @ +0x000 */
    /*   line 1345 @ +0x000 */
    /*   line 1354 @ +0x000 */
    /*   line 1362 @ +0x000 */
    /*   line 1369 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1227–1254 */
/* addr: 0x00292460  size: 2288 bytes */
void fn_vDrawArcadePage(void)
{
    char szMsg[50];
    unsigned int j;
    unsigned int i;
    /* line map: */
    /*   line 1227 @ +0x000 */
    /*   line 1227 @ +0x000 */
    /*   line 1227 @ +0x000 */
    /*   line 1233 @ +0x000 */
    /*   line 1237 @ +0x000 */
    /*   line 1240 @ +0x000 */
    /*   line 1244 @ +0x000 */
    /*   line 1248 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1091–1179 */
/* addr: 0x00292d50  size: 4676 bytes */
void fn_vDrawSavePage(void)
{
    char szChar[50];
    char* szTmp;
    unsigned int j;
    int N;
    int i;
    int c;
    int l;
    float fH;
    float fL;
    /* line map: */
    /*   line 1091 @ +0x000 */
    /*   line 1091 @ +0x000 */
    /*   line 1097 @ +0x000 */
    /*   line 1097 @ +0x000 */
    /*   line 1097 @ +0x000 */
    /*   line 1101 @ +0x000 */
    /*   line 1106 @ +0x000 */
    /*   line 1106 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1056–1081 */
/* addr: 0x00293fa0  size: 320 bytes */
void fn_vChangeCurrentSelectedChar(void)
{
    char* szTmp;
    unsigned int N;
    /* line map: */
    /*   line 1056 @ +0x000 */
    /*   line 1056 @ +0x000 */
    /*   line 1056 @ +0x000 */
    /*   line 1061 @ +0x000 */
    /*   line 1065 @ +0x000 */
    /*   line 1065 @ +0x000 */
    /*   line 1071 @ +0x000 */
    /*   line 1073 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1027–1037 */
/* addr: 0x002940e0  size: 116 bytes */
void fn_vDecreaseGrad(void)
{
    /* line map: */
    /*   line 1027 @ +0x000 */
    /*   line 1027 @ +0x000 */
    /*   line 1032 @ +0x000 */
    /*   line 1032 @ +0x000 */
    /*   line 1037 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1015–1023 */
/* addr: 0x00294160  size: 120 bytes */
void fn_vIncreaseGrad(void)
{
    /* line map: */
    /*   line 1015 @ +0x000 */
    /*   line 1015 @ +0x000 */
    /*   line 1019 @ +0x000 */
    /*   line 1023 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 987–997 */
/* addr: 0x002941e0  size: 1036 bytes */
void fn_vDrawGraduation(float xX, float xY, unsigned char NbGradOn)
{
    unsigned char i;
    /* line map: */
    /*   line 987 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 990 @ +0x000 */
    /*   line 997 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 831–859 */
/* addr: 0x002945f0  size: 1204 bytes */
void fn_vDrawVideoOptionPage(void)
{
    int g_XTextOld;
    unsigned int i;
    char szMsg[50];
    /* line map: */
    /*   line 831 @ +0x000 */
    /*   line 833 @ +0x000 */
    /*   line 837 @ +0x000 */
    /*   line 837 @ +0x000 */
    /*   line 840 @ +0x000 */
    /*   line 843 @ +0x000 */
    /*   line 847 @ +0x000 */
    /*   line 850 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 777–807 */
/* addr: 0x00294ab0  size: 1740 bytes */
void fn_vDrawCenteredYesNo(float X, float Y, int State)
{
    float fW2;
    float fW;
    float fH;
    float fL;
    /* line map: */
    /*   line 777 @ +0x000 */
    /*   line 777 @ +0x000 */
    /*   line 777 @ +0x000 */
    /*   line 777 @ +0x000 */
    /*   line 780 @ +0x000 */
    /*   line 780 @ +0x000 */
    /*   line 780 @ +0x000 */
    /*   line 779 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 748–769 */
/* addr: 0x00295180  size: 1064 bytes */
void fn_vDrawOnOff(float X, float Y, int State)
{
    float fH;
    float fL;
    /* line map: */
    /*   line 748 @ +0x000 */
    /*   line 752 @ +0x000 */
    /*   line 753 @ +0x000 */
    /*   line 753 @ +0x000 */
    /*   line 752 @ +0x000 */
    /*   line 753 @ +0x000 */
    /*   line 753 @ +0x000 */
    /*   line 752 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 707–735 */
/* addr: 0x002955b0  size: 1048 bytes */
void fn_vDrawClassicPage(void)
{
    float Y;
    unsigned int i;
    char szMsg[50];
    /* line map: */
    /*   line 707 @ +0x000 */
    /*   line 707 @ +0x000 */
    /*   line 707 @ +0x000 */
    /*   line 710 @ +0x000 */
    /*   line 713 @ +0x000 */
    /*   line 716 @ +0x000 */
    /*   line 720 @ +0x000 */
    /*   line 723 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 607–627 */
/* addr: 0x002959d0  size: 2040 bytes */
void fn_vDrawAreYouSurePage(void)
{
    float fY_YesNo;
    float fH;
    float fL;
    char szMsg[50];
    /* line map: */
    /*   line 607 @ +0x000 */
    /*   line 607 @ +0x000 */
    /*   line 608 @ +0x000 */
    /*   line 607 @ +0x000 */
    /*   line 607 @ +0x000 */
    /*   line 610 @ +0x000 */
    /*   line 610 @ +0x000 */
    /*   line 610 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 598–598 */
/* addr: 0x002961d0  size: 20 bytes */
void fn_vChangeAreYouSureValue(void)
{
    /* line map: */
    /*   line 598 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002961f0  size: 8 bytes */
int fn_GetAreYouSureValue(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00296200  size: 8 bytes */
void SetAreYouSureValue(int Val)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 401–458 */
/* addr: 0x00296210  size: 516 bytes */
void fn_vAnimeEndPage(void)
{
    /* line map: */
    /*   line 401 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 408 @ +0x000 */
    /*   line 412 @ +0x000 */
    /*   line 417 @ +0x000 */
    /*   line 431 @ +0x000 */
    /*   line 431 @ +0x000 */
    /*   line 432 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 350–390 */
/* addr: 0x00296420  size: 504 bytes */
void fn_vAnimeBeginPage(void)
{
    /* line map: */
    /*   line 350 @ +0x000 */
    /*   line 355 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 364 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 373 @ +0x000 */
    /*   line 378 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 287–312 */
/* addr: 0x00296620  size: 212 bytes */
void fn_vDraw2DSelectedSpriteWithPercentAndUVs(/* function pointer */ int p_stVpt, float xXMin, float xYMin, float xXMax, float xYMax, float xUMin, float xUMax, float xVMin, float xVMax, /* function pointer */ int hMaterial)
{
    float H1;
    float W1;
    float H;
    float W;
    /* line map: */
    /*   line 291 @ +0x000 */
    /*   line 287 @ +0x000 */
    /*   line 291 @ +0x000 */
    /*   line 289 @ +0x000 */
    /*   line 290 @ +0x000 */
    /*   line 294 @ +0x000 */
    /*   line 298 @ +0x000 */
    /*   line 298 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 276–276 */
/* addr: 0x00296700  size: 12 bytes */
void fn_vReinitSpriteScale(void)
{
    /* line map: */
    /*   line 276 @ +0x000 */
    /* TODO: decompile from asm/... */
}
