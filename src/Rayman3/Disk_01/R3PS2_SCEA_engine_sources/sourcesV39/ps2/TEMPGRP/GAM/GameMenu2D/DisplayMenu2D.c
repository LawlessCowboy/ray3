/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct _tdstBinarizedDataForMenu _tdstBinarizedDataForMenu;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct anon_0 anon_0;
typedef struct tdstMenu2DPages_ tdstMenu2DPages_;
typedef struct tdst_Album_ tdst_Album_;

typedef enum anon_enum_009454b5 {
    eSaveFileTypePage = 0,
    eLoadFileTypePage = 1,
    eLevelTypePage = 2,
    eGameTypePage = 3,
    eOptionsTypePage = 4,
    eControlOptionTypePage = 5,
    eAudioOptionTypePage = 6,
    eVideoOptionTypePage = 7,
    eBonusTypePage = 8,
    eArcadeTypePage = 9,
    eCinematicTypePage = 10,
    eXTraTypePage = 11,
    eAlbumTypePage = 12,
    eHallOfFameTypePage = 13,
    eStartMenuTypePage = 14,
    eCenterScreenTypePage = 15,
    ePal60_1_TypePage = 16,
    ePal60_2_TypePage = 17,
    ePal60_3_TypePage = 18,
    eProgressive_1_TypePage = 19,
    eProgressive_2_TypePage = 20,
    eProgressive_3_TypePage = 21,
    eEndOfGamePage = 22,
} anon_enum_009454b5;

typedef enum anon_enum_00945fea {
    eActionNothing = 0,
    eActionWait = 1,
    eActionEndOfPage = 2,
    eActionBeginOfPage = 3,
    eActionAnimeStamp = 4,
    eActionShakeCamera = 5,
    eActionValidateSelection = 6,
    eActionAreYouSure = 7,
    eActionHelp = 8,
} anon_enum_00945fea;

struct _tdstBinarizedDataForMenu {
    int hText; /* +0x0 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
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
    GLI_tdstMaterial_* hMaterial; /* +0x0 */
    anon_enum_009454b5 eTypePage; /* +0x4 */
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
anon_enum_00945fea g_CurrentActionMenu2D;
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
int g_hFixMaterialForAlbum[2];
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 18–18 */
/* addr: 0x0028dd30  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 18
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_uiOpenStream(char* szFilename)
{
    return fs_uiOpen__Q24usnd11CPS2FileMgrFPCc13_ERamLocation(szFilename, 0);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 2436–2534 */
/* addr: 0x0028dd40  size: 4424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2436
 *   +0x0014 -> line 2439
 *   +0x0088 -> line 2442
 *   +0x0090 -> line 2447
 *   +0x009c -> line 2451
 *   +0x00a4 -> line 2454
 *   +0x00ac -> line 2456
 *   +0x00e0 -> line 2460
 *   +0x0144 -> line 2463
 *   +0x017c -> line 2466
 *   +0x0184 -> line 2467
 *   +0x018c -> line 2469
 *   +0x0194 -> line 2470
 *   +0x019c -> line 2472
 *   +0x0220 -> line 2473
 *   +0x0228 -> line 2475
 *   +0x02d4 -> line 2480
 *   +0x02dc -> line 2484
 *   +0x02e8 -> line 2485
 *   +0x0360 -> line 2489
 *   +0x0368 -> line 2491
 *   +0x039c -> line 2494
 *   +0x03ac -> line 2495
 *   +0x03b4 -> line 2497
 *   +0x03c4 -> line 2498
 *   +0x08c4 -> line 2500
 *   +0x08cc -> line 2502
 *   +0x0914 -> line 2505
 *   +0x09f4 -> line 2506
 *   +0x09fc -> line 2508
 *   +0x0a04 -> line 2509
 *   +0x0a0c -> line 2511
 *   +0x0a40 -> line 2512
 *   +0x0aa4 -> line 2513
 *   +0x0ab4 -> line 2514
 *   +0x0b98 -> line 2515
 *   +0x0ba0 -> line 2517
 *   +0x0c80 -> line 2518
 *   +0x0e74 -> line 2519
 *   +0x0e7c -> line 2521
 *   +0x0e84 -> line 2523
 *   +0x0fc8 -> line 2525
 *   +0x0fd0 -> line 2527
 *   +0x0fe0 -> line 2528
 *   +0x111c -> line 2531
 *   +0x1128 -> line 2532
 *   +0x1130 -> line 2534
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDisplayInGameMenu2D(GLD_tdstViewportAttributes_* p_stVpt)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 2187–2246 */
/* addr: 0x0028ee90  size: 2692 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2187
 *   +0x0004 -> line 2194
 *   +0x0008 -> line 2187
 *   +0x000c -> line 2194
 *   +0x0010 -> line 2187
 *   +0x002c -> line 2194
 *   +0x0058 -> line 2197
 *   +0x0090 -> line 2198
 *   +0x0098 -> line 2200
 *   +0x00cc -> line 2201
 *   +0x00d4 -> line 2202
 *   +0x00d8 -> line 2201
 *   +0x00e0 -> line 2202
 *   +0x00e8 -> line 2201
 *   +0x010c -> line 2202
 *   +0x0114 -> line 2203
 *   +0x0128 -> line 2206
 *   +0x0160 -> line 2209
 *   +0x0198 -> line 2211
 *   +0x01a0 -> line 2212
 *   +0x01a8 -> line 2211
 *   +0x01ac -> line 2212
 *   +0x01b0 -> line 2213
 *   +0x01bc -> line 2214
 *   +0x01d8 -> line 2216
 *   +0x01ec -> line 2217
 *   +0x01f8 -> line 2218
 *   +0x01fc -> line 2221
 *   +0x052c -> line 2224
 *   +0x0530 -> line 2227
 *   +0x0538 -> line 2224
 *   +0x053c -> line 2225
 *   +0x0540 -> line 2227
 *   +0x0588 -> line 2228
 *   +0x05cc -> line 2229
 *   +0x05d4 -> line 2232
 *   +0x060c -> line 2234
 *   +0x0644 -> line 2235
 *   +0x0664 -> line 2237
 *   +0x0994 -> line 2238
 *   +0x09e4 -> line 2242
 *   +0x0a14 -> line 2243
 *   +0x0a5c -> line 2246
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 2115–2182 */
/* addr: 0x0028f920  size: 5604 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2115
 *   +0x0004 -> line 2116
 *   +0x0008 -> line 2115
 *   +0x000c -> line 2116
 *   +0x0010 -> line 2115
 *   +0x0034 -> line 2116
 *   +0x0078 -> line 2119
 *   +0x0854 -> line 2120
 *   +0x085c -> line 2127
 *   +0x0928 -> line 2128
 *   +0x0930 -> line 2130
 *   +0x0e18 -> line 2131
 *   +0x0e20 -> line 2133
 *   +0x0e28 -> line 2134
 *   +0x0e30 -> line 2136
 *   +0x0e38 -> line 2137
 *   +0x0e40 -> line 2139
 *   +0x0e48 -> line 2140
 *   +0x0e50 -> line 2142
 *   +0x0e58 -> line 2143
 *   +0x0e60 -> line 2145
 *   +0x10b4 -> line 2146
 *   +0x10bc -> line 2148
 *   +0x1354 -> line 2149
 *   +0x135c -> line 2151
 *   +0x1444 -> line 2152
 *   +0x144c -> line 2157
 *   +0x1454 -> line 2158
 *   +0x145c -> line 2160
 *   +0x1464 -> line 2161
 *   +0x146c -> line 2163
 *   +0x14bc -> line 2164
 *   +0x14c4 -> line 2169
 *   +0x1514 -> line 2170
 *   +0x151c -> line 2173
 *   +0x1594 -> line 2174
 *   +0x159c -> line 2176
 *   +0x15a4 -> line 2177
 *   +0x15ac -> line 2179
 *   +0x15b4 -> line 2182
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DrawCurrentPage(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 2037–2112 */
/* addr: 0x00290f10  size: 1408 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2037
 *   +0x0004 -> line 2039
 *   +0x0008 -> line 2037
 *   +0x0018 -> line 2039
 *   +0x0020 -> line 2056
 *   +0x0028 -> line 2041
 *   +0x0030 -> line 2056
 *   +0x003c -> line 2041
 *   +0x0040 -> line 2056
 *   +0x0058 -> line 2061
 *   +0x0064 -> line 2064
 *   +0x0068 -> line 2063
 *   +0x006c -> line 2064
 *   +0x0070 -> line 2063
 *   +0x0074 -> line 2064
 *   +0x0078 -> line 2063
 *   +0x007c -> line 2064
 *   +0x0084 -> line 2063
 *   +0x0088 -> line 2064
 *   +0x0090 -> line 2065
 *   +0x00bc -> line 2066
 *   +0x00c0 -> line 2068
 *   +0x00c4 -> line 2066
 *   +0x00c8 -> line 2068
 *   +0x00cc -> line 2070
 *   +0x00d0 -> line 2068
 *   +0x00d4 -> line 2070
 *   +0x00d8 -> line 2068
 *   +0x00dc -> line 2069
 *   +0x00e0 -> line 2068
 *   +0x00e4 -> line 2069
 *   +0x00e8 -> line 2068
 *   +0x00f0 -> line 2070
 *   +0x00f4 -> line 2068
 *   +0x00fc -> line 2070
 *   +0x0100 -> line 2068
 *   +0x0104 -> line 2069
 *   +0x0108 -> line 2066
 *   +0x0110 -> line 2069
 *   +0x0118 -> line 2070
 *   +0x0120 -> line 2071
 *   +0x0144 -> line 2074
 *   +0x0148 -> line 2072
 *   +0x014c -> line 2074
 *   +0x0150 -> line 2076
 *   +0x0154 -> line 2072
 *   +0x0158 -> line 2076
 *   +0x0160 -> line 2072
 *   +0x0164 -> line 2076
 *   +0x0168 -> line 2075
 *   +0x016c -> line 2074
 *   +0x0170 -> line 2075
 *   +0x0188 -> line 2076
 *   +0x0190 -> line 2077
 *   +0x01b4 -> line 2078
 *   +0x01b8 -> line 2080
 *   +0x01bc -> line 2078
 *   +0x01c0 -> line 2080
 *   +0x01c4 -> line 2082
 *   +0x01cc -> line 2080
 *   +0x01d0 -> line 2082
 *   +0x01d4 -> line 2080
 *   +0x01d8 -> line 2081
 *   +0x01dc -> line 2080
 *   +0x01e0 -> line 2081
 *   +0x01e4 -> line 2080
 *   +0x01e8 -> line 2082
 *   +0x01ec -> line 2081
 *   +0x01f0 -> line 2078
 *   +0x01f8 -> line 2081
 *   +0x0200 -> line 2082
 *   +0x0208 -> line 2083
 *   +0x022c -> line 2084
 *   +0x0230 -> line 2086
 *   +0x0234 -> line 2084
 *   +0x0238 -> line 2086
 *   +0x023c -> line 2087
 *   +0x0240 -> line 2088
 *   +0x0244 -> line 2086
 *   +0x0248 -> line 2087
 *   +0x024c -> line 2086
 *   +0x0250 -> line 2088
 *   +0x0254 -> line 2086
 *   +0x0258 -> line 2088
 *   +0x025c -> line 2086
 *   +0x0260 -> line 2088
 *   +0x0264 -> line 2087
 *   +0x0268 -> line 2084
 *   +0x0270 -> line 2087
 *   +0x0278 -> line 2088
 *   +0x0280 -> line 2089
 *   +0x02a4 -> line 2090
 *   +0x02a8 -> line 2092
 *   +0x02ac -> line 2090
 *   +0x02b0 -> line 2092
 *   +0x02b8 -> line 2093
 *   +0x02bc -> line 2090
 *   +0x02c0 -> line 2092
 *   +0x02c4 -> line 2093
 *   +0x02d8 -> line 2094
 *   +0x02fc -> line 2100
 *   +0x0304 -> line 2101
 *   +0x0340 -> line 2103
 *   +0x0344 -> line 2104
 *   +0x0348 -> line 2103
 *   +0x034c -> line 2104
 *   +0x0350 -> line 2103
 *   +0x0354 -> line 2104
 *   +0x035c -> line 2103
 *   +0x0364 -> line 2104
 *   +0x036c -> line 2105
 *   +0x0398 -> line 2107
 *   +0x039c -> line 2108
 *   +0x03a0 -> line 2107
 *   +0x03a4 -> line 2108
 *   +0x03a8 -> line 2107
 *   +0x03ac -> line 2108
 *   +0x03b0 -> line 2107
 *   +0x03b4 -> line 2108
 *   +0x03c0 -> line 2109
 *   +0x03ec -> line 2111
 *   +0x0568 -> line 2112
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawGlobalInfo(void)
{
    float XChar;
    unsigned int ulNbCage;
    unsigned int ulValue;
    unsigned int ulScore;
    char* szGlobalScore;
    char szTmp1[50];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1621–1643 */
/* addr: 0x00291490  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1621
 *   +0x0008 -> line 1622
 *   +0x0014 -> line 1626
 *   +0x0024 -> line 1627
 *   +0x0034 -> line 1630
 *   +0x003c -> line 1629
 *   +0x0040 -> line 1630
 *   +0x0044 -> line 1629
 *   +0x0048 -> line 1630
 *   +0x006c -> line 1632
 *   +0x0070 -> line 1637
 *   +0x0078 -> line 1632
 *   +0x007c -> line 1637
 *   +0x0088 -> line 1639
 *   +0x0094 -> line 1643
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vNextSnapShot(void)
{
    int lSnapID;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1593–1618 */
/* addr: 0x00291530  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1593
 *   +0x0008 -> line 1594
 *   +0x0014 -> line 1598
 *   +0x0024 -> line 1599
 *   +0x0034 -> line 1603
 *   +0x003c -> line 1601
 *   +0x0040 -> line 1603
 *   +0x0044 -> line 1601
 *   +0x0048 -> line 1603
 *   +0x006c -> line 1605
 *   +0x0070 -> line 1611
 *   +0x0078 -> line 1605
 *   +0x007c -> line 1611
 *   +0x0088 -> line 1613
 *   +0x008c -> line 1614
 *   +0x0090 -> line 1613
 *   +0x0094 -> line 1614
 *   +0x009c -> line 1618
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vPreviousSnapShot(void)
{
    int lSnapID;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1472–1486 */
/* addr: 0x002915e0  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1472
 *   +0x0004 -> line 1475
 *   +0x0008 -> line 1472
 *   +0x000c -> line 1475
 *   +0x003c -> line 1477
 *   +0x0058 -> line 1479
 *   +0x0074 -> line 1480
 *   +0x0078 -> line 1481
 *   +0x0098 -> line 1483
 *   +0x00d4 -> line 1485
 *   +0x00fc -> line 1486
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawRecapPage(void)
{
    unsigned int i;
    char szTmp[2048];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1401–1439 */
/* addr: 0x002916f0  size: 2316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1401
 *   +0x0024 -> line 1403
 *   +0x0028 -> line 1406
 *   +0x0034 -> line 1407
 *   +0x0038 -> line 1409
 *   +0x006c -> line 1413
 *   +0x0074 -> line 1415
 *   +0x0080 -> line 1417
 *   +0x00a8 -> line 1418
 *   +0x0360 -> line 1419
 *   +0x0368 -> line 1422
 *   +0x0394 -> line 1423
 *   +0x03ec -> line 1425
 *   +0x03f8 -> line 1428
 *   +0x0404 -> line 1429
 *   +0x06d0 -> line 1432
 *   +0x06f0 -> line 1433
 *   +0x074c -> line 1436
 *   +0x0754 -> line 1437
 *   +0x0794 -> line 1438
 *   +0x08e4 -> line 1439
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawXTraPage(void)
{
    char szMsg[50];
    unsigned int N;
    unsigned int j;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1317–1377 */
/* addr: 0x00292000  size: 1120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1317
 *   +0x0010 -> line 1318
 *   +0x0014 -> line 1325
 *   +0x001c -> line 1331
 *   +0x0024 -> line 1332
 *   +0x0030 -> line 1334
 *   +0x0050 -> line 1335
 *   +0x0060 -> line 1337
 *   +0x0068 -> line 1338
 *   +0x0128 -> line 1345
 *   +0x01e0 -> line 1351
 *   +0x01e8 -> line 1354
 *   +0x01f0 -> line 1355
 *   +0x02b0 -> line 1362
 *   +0x0364 -> line 1368
 *   +0x0368 -> line 1369
 *   +0x036c -> line 1370
 *   +0x0398 -> line 1371
 *   +0x03bc -> line 1373
 *   +0x0414 -> line 1376
 *   +0x0448 -> line 1377
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawCinematicPage(void)
{
    int j;
    int c;
    int l;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1223–1254 */
/* addr: 0x00292460  size: 2288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1223
 *   +0x0004 -> line 1227
 *   +0x0008 -> line 1223
 *   +0x000c -> line 1227
 *   +0x0010 -> line 1223
 *   +0x0028 -> line 1227
 *   +0x0050 -> line 1231
 *   +0x0060 -> line 1233
 *   +0x006c -> line 1234
 *   +0x0350 -> line 1237
 *   +0x0384 -> line 1238
 *   +0x03dc -> line 1240
 *   +0x03e8 -> line 1243
 *   +0x03f4 -> line 1244
 *   +0x06c0 -> line 1247
 *   +0x06e0 -> line 1248
 *   +0x073c -> line 1251
 *   +0x0740 -> line 1252
 *   +0x0784 -> line 1253
 *   +0x08d0 -> line 1254
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawArcadePage(void)
{
    char szMsg[50];
    unsigned int j;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1087–1179 */
/* addr: 0x00292d50  size: 4676 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1087
 *   +0x0004 -> line 1091
 *   +0x0008 -> line 1087
 *   +0x0030 -> line 1091
 *   +0x003c -> line 1093
 *   +0x0044 -> line 1097
 *   +0x0048 -> line 1093
 *   +0x004c -> line 1097
 *   +0x007c -> line 1094
 *   +0x0084 -> line 1097
 *   +0x0388 -> line 1100
 *   +0x03a8 -> line 1101
 *   +0x03d8 -> line 1102
 *   +0x0470 -> line 1106
 *   +0x0474 -> line 1103
 *   +0x0478 -> line 1106
 *   +0x047c -> line 1103
 *   +0x0480 -> line 1106
 *   +0x0484 -> line 1103
 *   +0x0488 -> line 1102
 *   +0x0490 -> line 1103
 *   +0x0494 -> line 1102
 *   +0x0498 -> line 1106
 *   +0x04ac -> line 1108
 *   +0x04bc -> line 1110
 *   +0x04d8 -> line 1111
 *   +0x0748 -> line 1112
 *   +0x0750 -> line 1115
 *   +0x0770 -> line 1116
 *   +0x07e4 -> line 1117
 *   +0x07e8 -> line 1118
 *   +0x0808 -> line 1121
 *   +0x081c -> line 1123
 *   +0x082c -> line 1125
 *   +0x0838 -> line 1126
 *   +0x0aa8 -> line 1127
 *   +0x0ab0 -> line 1130
 *   +0x0ac0 -> line 1131
 *   +0x0b34 -> line 1132
 *   +0x0b38 -> line 1133
 *   +0x0b50 -> line 1135
 *   +0x0b68 -> line 1137
 *   +0x0b84 -> line 1140
 *   +0x0b8c -> line 1145
 *   +0x0b98 -> line 1147
 *   +0x0ba0 -> line 1149
 *   +0x0bb8 -> line 1152
 *   +0x0bd0 -> line 1153
 *   +0x0e60 -> line 1155
 *   +0x0e68 -> line 1158
 *   +0x0e84 -> line 1159
 *   +0x0ee0 -> line 1163
 *   +0x0efc -> line 1165
 *   +0x0f08 -> line 1167
 *   +0x0f20 -> line 1170
 *   +0x0f40 -> line 1171
 *   +0x0f7c -> line 1172
 *   +0x0f84 -> line 1176
 *   +0x0fa0 -> line 1177
 *   +0x1214 -> line 1179
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1054–1084 */
/* addr: 0x00293fa0  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1054
 *   +0x0004 -> line 1056
 *   +0x0008 -> line 1054
 *   +0x0014 -> line 1056
 *   +0x001c -> line 1058
 *   +0x0020 -> line 1056
 *   +0x0024 -> line 1058
 *   +0x0048 -> line 1061
 *   +0x0068 -> line 1063
 *   +0x006c -> line 1065
 *   +0x0070 -> line 1063
 *   +0x007c -> line 1065
 *   +0x0090 -> line 1067
 *   +0x00c0 -> line 1071
 *   +0x00cc -> line 1072
 *   +0x00dc -> line 1073
 *   +0x00e4 -> line 1076
 *   +0x00fc -> line 1077
 *   +0x0110 -> line 1078
 *   +0x0120 -> line 1081
 *   +0x012c -> line 1084
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vChangeCurrentSelectedChar(void)
{
    char* szTmp;
    unsigned int N;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1026–1037 */
/* addr: 0x002940e0  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1026
 *   +0x0004 -> line 1027
 *   +0x0008 -> line 1026
 *   +0x000c -> line 1027
 *   +0x0020 -> line 1029
 *   +0x0024 -> line 1032
 *   +0x0028 -> line 1029
 *   +0x002c -> line 1032
 *   +0x005c -> line 1034
 *   +0x0068 -> line 1037
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDecreaseGrad(void)
{
    if (g_aNbGradOn[g_CurrentSelection] > 0) {
        g_aNbGradOn[g_CurrentSelection]--;
        if (aMenu2DPages[g_CurrentMenu2DPage].eTypePage == eAudioOptionTypePage) {
            fn_vUpdateVolumeLineGameMenu2D(g_CurrentSelection, g_aNbGradOn[g_CurrentSelection], 10);
        }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 1014–1023 */
/* addr: 0x00294160  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1014
 *   +0x0004 -> line 1015
 *   +0x0008 -> line 1014
 *   +0x000c -> line 1015
 *   +0x0024 -> line 1016
 *   +0x002c -> line 1019
 *   +0x0060 -> line 1021
 *   +0x006c -> line 1023
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vIncreaseGrad(void)
{
    if (g_aNbGradOn[g_CurrentSelection] < 10) {
        g_aNbGradOn[g_CurrentSelection]++;
    }
    if (aMenu2DPages[g_CurrentMenu2DPage].eTypePage == eAudioOptionTypePage) {
        fn_vUpdateVolumeLineGameMenu2D(g_CurrentSelection, g_aNbGradOn[g_CurrentSelection], 10);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 984–998 */
/* addr: 0x002941e0  size: 1036 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 984
 *   +0x0018 -> line 987
 *   +0x001c -> line 984
 *   +0x0024 -> line 987
 *   +0x002c -> line 989
 *   +0x003c -> line 990
 *   +0x0210 -> line 994
 *   +0x03d8 -> line 997
 *   +0x03f0 -> line 998
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawGraduation(float xX, float xY, unsigned char NbGradOn)
{
    unsigned char i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 828–859 */
/* addr: 0x002945f0  size: 1204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 828
 *   +0x0020 -> line 831
 *   +0x0024 -> line 828
 *   +0x0028 -> line 833
 *   +0x0030 -> line 835
 *   +0x003c -> line 837
 *   +0x0040 -> line 838
 *   +0x0054 -> line 837
 *   +0x005c -> line 839
 *   +0x0060 -> line 840
 *   +0x006c -> line 842
 *   +0x0080 -> line 843
 *   +0x0338 -> line 844
 *   +0x0340 -> line 847
 *   +0x0358 -> line 848
 *   +0x03b0 -> line 850
 *   +0x03bc -> line 852
 *   +0x043c -> line 853
 *   +0x044c -> line 854
 *   +0x0450 -> line 853
 *   +0x0458 -> line 855
 *   +0x0494 -> line 859
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawVideoOptionPage(void)
{
    int g_XTextOld;
    unsigned int i;
    char szMsg[50];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 772–809 */
/* addr: 0x00294ab0  size: 1740 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 772
 *   +0x0004 -> line 777
 *   +0x0008 -> line 772
 *   +0x001c -> line 777
 *   +0x00c0 -> line 778
 *   +0x00c4 -> line 777
 *   +0x00c8 -> line 778
 *   +0x00cc -> line 777
 *   +0x00d8 -> line 778
 *   +0x0178 -> line 780
 *   +0x0180 -> line 779
 *   +0x0184 -> line 780
 *   +0x0188 -> line 779
 *   +0x018c -> line 780
 *   +0x0190 -> line 778
 *   +0x01a0 -> line 779
 *   +0x01a4 -> line 778
 *   +0x01a8 -> line 780
 *   +0x023c -> line 781
 *   +0x0244 -> line 782
 *   +0x024c -> line 780
 *   +0x0250 -> line 783
 *   +0x0254 -> line 781
 *   +0x0258 -> line 780
 *   +0x025c -> line 782
 *   +0x0260 -> line 781
 *   +0x0264 -> line 782
 *   +0x0268 -> line 783
 *   +0x027c -> line 785
 *   +0x0284 -> line 787
 *   +0x02ac -> line 788
 *   +0x0354 -> line 791
 *   +0x0358 -> line 789
 *   +0x035c -> line 791
 *   +0x0360 -> line 789
 *   +0x0368 -> line 791
 *   +0x036c -> line 788
 *   +0x0370 -> line 790
 *   +0x0374 -> line 789
 *   +0x0378 -> line 790
 *   +0x037c -> line 789
 *   +0x0380 -> line 791
 *   +0x0388 -> line 788
 *   +0x038c -> line 790
 *   +0x0390 -> line 791
 *   +0x0394 -> line 788
 *   +0x0398 -> line 791
 *   +0x03a0 -> line 792
 *   +0x0440 -> line 795
 *   +0x0444 -> line 793
 *   +0x0448 -> line 795
 *   +0x044c -> line 793
 *   +0x0454 -> line 792
 *   +0x0458 -> line 794
 *   +0x045c -> line 793
 *   +0x0460 -> line 792
 *   +0x0464 -> line 793
 *   +0x0468 -> line 794
 *   +0x046c -> line 792
 *   +0x0470 -> line 795
 *   +0x0498 -> line 796
 *   +0x04a0 -> line 799
 *   +0x04cc -> line 800
 *   +0x0574 -> line 803
 *   +0x0578 -> line 801
 *   +0x057c -> line 803
 *   +0x0580 -> line 801
 *   +0x0588 -> line 803
 *   +0x058c -> line 800
 *   +0x0590 -> line 802
 *   +0x0594 -> line 801
 *   +0x0598 -> line 802
 *   +0x059c -> line 801
 *   +0x05a0 -> line 803
 *   +0x05a8 -> line 800
 *   +0x05ac -> line 802
 *   +0x05b0 -> line 803
 *   +0x05b4 -> line 800
 *   +0x05b8 -> line 803
 *   +0x05c0 -> line 804
 *   +0x0660 -> line 807
 *   +0x0664 -> line 805
 *   +0x0668 -> line 807
 *   +0x066c -> line 805
 *   +0x0674 -> line 804
 *   +0x0678 -> line 806
 *   +0x067c -> line 805
 *   +0x0680 -> line 804
 *   +0x0684 -> line 805
 *   +0x0688 -> line 806
 *   +0x068c -> line 804
 *   +0x0690 -> line 807
 *   +0x06b4 -> line 809
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawCenteredYesNo(float X, float Y, int State)
{
    float fW2;
    float fW;
    float fH;
    float fL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 745–769 */
/* addr: 0x00295180  size: 1064 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 745
 *   +0x0014 -> line 748
 *   +0x001c -> line 751
 *   +0x0044 -> line 752
 *   +0x00e8 -> line 754
 *   +0x00ec -> line 753
 *   +0x00f0 -> line 754
 *   +0x00f4 -> line 753
 *   +0x00fc -> line 754
 *   +0x0100 -> line 752
 *   +0x0104 -> line 754
 *   +0x010c -> line 753
 *   +0x0110 -> line 752
 *   +0x0114 -> line 753
 *   +0x0118 -> line 754
 *   +0x011c -> line 752
 *   +0x0120 -> line 754
 *   +0x0128 -> line 755
 *   +0x01c8 -> line 757
 *   +0x01cc -> line 756
 *   +0x01d0 -> line 757
 *   +0x01d4 -> line 756
 *   +0x01dc -> line 755
 *   +0x01e0 -> line 756
 *   +0x01e4 -> line 755
 *   +0x01e8 -> line 756
 *   +0x01ec -> line 757
 *   +0x0214 -> line 758
 *   +0x021c -> line 761
 *   +0x0248 -> line 762
 *   +0x02ec -> line 764
 *   +0x02f0 -> line 763
 *   +0x02f4 -> line 764
 *   +0x02f8 -> line 763
 *   +0x0300 -> line 764
 *   +0x0304 -> line 762
 *   +0x0308 -> line 764
 *   +0x0310 -> line 763
 *   +0x0314 -> line 762
 *   +0x0318 -> line 763
 *   +0x031c -> line 764
 *   +0x0320 -> line 762
 *   +0x0324 -> line 764
 *   +0x032c -> line 765
 *   +0x03cc -> line 767
 *   +0x03d0 -> line 766
 *   +0x03d4 -> line 767
 *   +0x03d8 -> line 766
 *   +0x03e0 -> line 765
 *   +0x03e4 -> line 766
 *   +0x03e8 -> line 765
 *   +0x03ec -> line 766
 *   +0x03f0 -> line 767
 *   +0x0414 -> line 769
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawOnOff(float X, float Y, int State)
{
    float fH;
    float fL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 703–736 */
/* addr: 0x002955b0  size: 1048 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 703
 *   +0x0004 -> line 707
 *   +0x0008 -> line 703
 *   +0x000c -> line 707
 *   +0x0010 -> line 703
 *   +0x0020 -> line 707
 *   +0x004c -> line 708
 *   +0x005c -> line 710
 *   +0x0060 -> line 711
 *   +0x006c -> line 713
 *   +0x0078 -> line 715
 *   +0x008c -> line 716
 *   +0x02b4 -> line 717
 *   +0x02c0 -> line 720
 *   +0x02d0 -> line 722
 *   +0x02e4 -> line 723
 *   +0x0310 -> line 724
 *   +0x0318 -> line 727
 *   +0x0330 -> line 728
 *   +0x035c -> line 730
 *   +0x0360 -> line 731
 *   +0x03a4 -> line 732
 *   +0x03b0 -> line 734
 *   +0x03c4 -> line 735
 *   +0x03fc -> line 736
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawClassicPage(void)
{
    float Y;
    unsigned int i;
    char szMsg[50];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 601–629 */
/* addr: 0x002959d0  size: 2040 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 601
 *   +0x0008 -> line 607
 *   +0x000c -> line 601
 *   +0x0018 -> line 607
 *   +0x00ac -> line 610
 *   +0x00b0 -> line 608
 *   +0x00bc -> line 610
 *   +0x00c0 -> line 607
 *   +0x00c4 -> line 608
 *   +0x00c8 -> line 607
 *   +0x00cc -> line 608
 *   +0x00d4 -> line 610
 *   +0x00d8 -> line 608
 *   +0x00dc -> line 610
 *   +0x00f4 -> line 607
 *   +0x00f8 -> line 610
 *   +0x0284 -> line 611
 *   +0x0290 -> line 613
 *   +0x029c -> line 611
 *   +0x02b4 -> line 613
 *   +0x02bc -> line 611
 *   +0x02c0 -> line 613
 *   +0x02d0 -> line 615
 *   +0x02dc -> line 617
 *   +0x02fc -> line 618
 *   +0x0518 -> line 619
 *   +0x0538 -> line 620
 *   +0x055c -> line 621
 *   +0x0564 -> line 624
 *   +0x0580 -> line 625
 *   +0x05a4 -> line 626
 *   +0x05c4 -> line 627
 *   +0x07e0 -> line 629
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDrawAreYouSurePage(void)
{
    float fY_YesNo;
    float fH;
    float fL;
    char szMsg[50];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 597–598 */
/* addr: 0x002961d0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 597
 *   +0x000c -> line 598
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vChangeAreYouSureValue(void)
{
    g_AreYouSureValue = 1 - g_AreYouSureValue;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 593–593 */
/* addr: 0x002961f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 593
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_GetAreYouSureValue(void)
{
    return g_AreYouSureValue;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 588–588 */
/* addr: 0x00296200  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 588
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SetAreYouSureValue(int Val)
{
    g_AreYouSureValue = Val;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 400–460 */
/* addr: 0x00296210  size: 516 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 400
 *   +0x0020 -> line 401
 *   +0x0030 -> line 404
 *   +0x003c -> line 406
 *   +0x005c -> line 407
 *   +0x0068 -> line 408
 *   +0x0070 -> line 411
 *   +0x008c -> line 412
 *   +0x009c -> line 416
 *   +0x00bc -> line 417
 *   +0x00cc -> line 419
 *   +0x0124 -> line 431
 *   +0x0128 -> line 430
 *   +0x012c -> line 431
 *   +0x0130 -> line 433
 *   +0x0138 -> line 432
 *   +0x013c -> line 434
 *   +0x0144 -> line 435
 *   +0x014c -> line 437
 *   +0x0154 -> line 438
 *   +0x01b0 -> line 442
 *   +0x01b8 -> line 445
 *   +0x01bc -> line 446
 *   +0x01c4 -> line 451
 *   +0x01cc -> line 454
 *   +0x01d0 -> line 458
 *   +0x01e0 -> line 459
 *   +0x01f0 -> line 458
 *   +0x01f4 -> line 459
 *   +0x01f8 -> line 458
 *   +0x01fc -> line 460
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vAnimeEndPage(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 349–390 */
/* addr: 0x00296420  size: 504 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 349
 *   +0x0020 -> line 350
 *   +0x0030 -> line 353
 *   +0x003c -> line 355
 *   +0x0054 -> line 356
 *   +0x0064 -> line 357
 *   +0x0078 -> line 359
 *   +0x0080 -> line 362
 *   +0x0098 -> line 363
 *   +0x00a8 -> line 364
 *   +0x00bc -> line 365
 *   +0x00c0 -> line 370
 *   +0x00e0 -> line 371
 *   +0x00f0 -> line 373
 *   +0x0168 -> line 379
 *   +0x0178 -> line 378
 *   +0x017c -> line 379
 *   +0x01a0 -> line 382
 *   +0x01a4 -> line 381
 *   +0x01a8 -> line 382
 *   +0x01b8 -> line 383
 *   +0x01c0 -> line 385
 *   +0x01c4 -> line 388
 *   +0x01d4 -> line 389
 *   +0x01e4 -> line 388
 *   +0x01e8 -> line 389
 *   +0x01ec -> line 388
 *   +0x01f0 -> line 390
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vAnimeBeginPage(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 284–312 */
/* addr: 0x00296620  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 284
 *   +0x0004 -> line 291
 *   +0x0008 -> line 284
 *   +0x000c -> line 287
 *   +0x0010 -> line 289
 *   +0x0014 -> line 291
 *   +0x0018 -> line 288
 *   +0x001c -> line 289
 *   +0x0020 -> line 291
 *   +0x002c -> line 290
 *   +0x0030 -> line 292
 *   +0x003c -> line 294
 *   +0x0048 -> line 296
 *   +0x0054 -> line 298
 *   +0x0064 -> line 299
 *   +0x0070 -> line 298
 *   +0x0074 -> line 299
 *   +0x0084 -> line 303
 *   +0x008c -> line 306
 *   +0x009c -> line 307
 *   +0x00ac -> line 306
 *   +0x00b0 -> line 307
 *   +0x00c0 -> line 309
 *   +0x00c8 -> line 312
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDraw2DSelectedSpriteWithPercentAndUVs(GLD_tdstViewportAttributes_* p_stVpt, float xXMin, float xYMin, float xXMax, float xYMax, float xUMin, float xUMax, float xVMin, float xVMax, GLI_tdstMaterial_* hMaterial)
{
    float H1;
    float W1;
    float H;
    float W;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DisplayMenu2D.c lines 275–276 */
/* addr: 0x00296700  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 275
 *   +0x0004 -> line 276
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vReinitSpriteScale(void)
{
    g_CurrentSelectedSpriteScale = 1.0f;
}
