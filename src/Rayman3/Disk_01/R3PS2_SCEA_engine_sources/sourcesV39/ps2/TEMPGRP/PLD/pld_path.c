/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PLD\pld_path.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

extern int sprintf(char*, const char*, ...);
extern char* strcpy(char*, const char*);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstDataPath_ tdstDataPath_;

typedef enum _tdeAreaName {
    E_FixArea = 0,
    E_LvlArea = 1,
    E_TransitionArea = 2,
    E_TransitionAreaOdd = 2,
    E_TransitionAreaEven = 3,
    E_VertexBufferArea = 4,
    E_FixKeyFramesArea = 5,
    E_LvlKeyFramesArea = 6,
    E_FirstKeyFramesArea = 7,
    E_KeyFramesArea0 = 7,
    E_KeyFramesArea1 = 8,
    E_KeyFramesArea2 = 9,
    E_KeyFramesArea3 = 10,
    E_KeyFramesArea4 = 11,
    E_KeyFramesArea5 = 12,
    E_KeyFramesArea6 = 13,
    E_KeyFramesArea7 = 14,
    E_KeyFramesArea8 = 15,
    E_KeyFramesArea9 = 16,
    E_KeyFramesArea10 = 17,
    E_KeyFramesArea11 = 18,
    E_KeyFramesArea12 = 19,
    E_KeyFramesArea13 = 20,
    E_KeyFramesArea14 = 21,
    E_KeyFramesArea15 = 22,
    E_KeyFramesArea16 = 23,
    E_KeyFramesArea17 = 24,
    E_KeyFramesArea18 = 25,
    E_KeyFramesArea19 = 26,
    E_KeyFramesArea20 = 27,
    E_KeyFramesArea21 = 28,
    E_KeyFramesArea22 = 29,
    E_KeyFramesArea23 = 30,
    E_KeyFramesArea24 = 31,
    E_KeyFramesArea25 = 32,
    E_KeyFramesArea26 = 33,
    E_KeyFramesArea27 = 34,
    E_KeyFramesArea28 = 35,
    E_KeyFramesArea29 = 36,
    E_KeyFramesArea30 = 37,
    E_KeyFramesArea31 = 38,
    E_KeyFramesArea32 = 39,
    E_KeyFramesArea33 = 40,
    E_KeyFramesArea34 = 41,
    E_KeyFramesArea35 = 42,
    E_KeyFramesArea36 = 43,
    E_KeyFramesArea37 = 44,
    E_KeyFramesArea38 = 45,
    E_KeyFramesArea39 = 46,
    E_KeyFramesArea40 = 47,
    E_KeyFramesArea41 = 48,
    E_KeyFramesArea42 = 49,
    E_KeyFramesArea43 = 50,
    E_KeyFramesArea44 = 51,
    E_KeyFramesArea45 = 52,
    E_KeyFramesArea46 = 53,
    E_KeyFramesArea47 = 54,
    E_KeyFramesArea48 = 55,
    E_KeyFramesArea49 = 56,
    E_KeyFramesArea50 = 57,
    E_KeyFramesArea51 = 58,
    E_KeyFramesArea52 = 59,
    E_KeyFramesArea53 = 60,
    E_KeyFramesArea54 = 61,
    E_KeyFramesArea55 = 62,
    E_KeyFramesArea56 = 63,
    E_KeyFramesArea57 = 64,
    E_KeyFramesArea58 = 65,
    E_KeyFramesArea59 = 66,
    E_KeyFramesArea60 = 67,
    E_KeyFramesArea61 = 68,
    E_KeyFramesArea62 = 69,
    E_KeyFramesArea63 = 70,
    E_KeyFramesArea64 = 71,
    E_KeyFramesArea65 = 72,
    E_KeyFramesArea66 = 73,
    E_KeyFramesArea67 = 74,
    E_KeyFramesArea68 = 75,
    E_KeyFramesArea69 = 76,
    E_KeyFramesArea70 = 77,
    E_KeyFramesArea71 = 78,
    E_KeyFramesArea72 = 79,
    E_KeyFramesArea73 = 80,
    E_KeyFramesArea74 = 81,
    E_KeyFramesArea75 = 82,
    E_KeyFramesArea76 = 83,
    E_KeyFramesArea77 = 84,
    E_KeyFramesArea78 = 85,
    E_KeyFramesArea79 = 86,
    E_KeyFramesArea80 = 87,
    E_KeyFramesArea81 = 88,
    E_KeyFramesArea82 = 89,
    E_KeyFramesArea83 = 90,
    E_KeyFramesArea84 = 91,
    E_KeyFramesArea85 = 92,
    E_KeyFramesArea86 = 93,
    E_KeyFramesArea87 = 94,
    E_KeyFramesArea88 = 95,
    E_KeyFramesArea89 = 96,
    E_KeyFramesArea90 = 97,
    E_KeyFramesArea91 = 98,
    E_KeyFramesArea92 = 99,
    E_KeyFramesArea93 = 100,
    E_KeyFramesArea94 = 101,
    E_KeyFramesArea95 = 102,
    E_KeyFramesArea96 = 103,
    E_KeyFramesArea97 = 104,
    E_KeyFramesArea98 = 105,
    E_KeyFramesArea99 = 106,
    E_LastKeyFramesArea = 106,
    E_FirstAnimationsArea = 107,
    E_AnimationsArea0 = 107,
    E_AnimationsArea1 = 108,
    E_AnimationsArea2 = 109,
    E_AnimationsArea3 = 110,
    E_AnimationsArea4 = 111,
    E_AnimationsArea5 = 112,
    E_AnimationsArea6 = 113,
    E_AnimationsArea7 = 114,
    E_AnimationsArea8 = 115,
    E_AnimationsArea9 = 116,
    E_AnimationsArea10 = 117,
    E_AnimationsArea11 = 118,
    E_AnimationsArea12 = 119,
    E_AnimationsArea13 = 120,
    E_AnimationsArea14 = 121,
    E_AnimationsArea15 = 122,
    E_AnimationsArea16 = 123,
    E_AnimationsArea17 = 124,
    E_AnimationsArea18 = 125,
    E_AnimationsArea19 = 126,
    E_AnimationsArea20 = 127,
    E_AnimationsArea21 = 128,
    E_AnimationsArea22 = 129,
    E_AnimationsArea23 = 130,
    E_AnimationsArea24 = 131,
    E_AnimationsArea25 = 132,
    E_AnimationsArea26 = 133,
    E_AnimationsArea27 = 134,
    E_AnimationsArea28 = 135,
    E_AnimationsArea29 = 136,
    E_AnimationsArea30 = 137,
    E_AnimationsArea31 = 138,
    E_AnimationsArea32 = 139,
    E_AnimationsArea33 = 140,
    E_AnimationsArea34 = 141,
    E_AnimationsArea35 = 142,
    E_AnimationsArea36 = 143,
    E_AnimationsArea37 = 144,
    E_AnimationsArea38 = 145,
    E_AnimationsArea39 = 146,
    E_AnimationsArea40 = 147,
    E_AnimationsArea41 = 148,
    E_AnimationsArea42 = 149,
    E_AnimationsArea43 = 150,
    E_AnimationsArea44 = 151,
    E_AnimationsArea45 = 152,
    E_AnimationsArea46 = 153,
    E_AnimationsArea47 = 154,
    E_AnimationsArea48 = 155,
    E_AnimationsArea49 = 156,
    E_AnimationsArea50 = 157,
    E_AnimationsArea51 = 158,
    E_AnimationsArea52 = 159,
    E_AnimationsArea53 = 160,
    E_AnimationsArea54 = 161,
    E_AnimationsArea55 = 162,
    E_AnimationsArea56 = 163,
    E_AnimationsArea57 = 164,
    E_AnimationsArea58 = 165,
    E_AnimationsArea59 = 166,
    E_AnimationsArea60 = 167,
    E_AnimationsArea61 = 168,
    E_AnimationsArea62 = 169,
    E_AnimationsArea63 = 170,
    E_AnimationsArea64 = 171,
    E_AnimationsArea65 = 172,
    E_AnimationsArea66 = 173,
    E_AnimationsArea67 = 174,
    E_AnimationsArea68 = 175,
    E_AnimationsArea69 = 176,
    E_AnimationsArea70 = 177,
    E_AnimationsArea71 = 178,
    E_AnimationsArea72 = 179,
    E_AnimationsArea73 = 180,
    E_AnimationsArea74 = 181,
    E_AnimationsArea75 = 182,
    E_AnimationsArea76 = 183,
    E_AnimationsArea77 = 184,
    E_AnimationsArea78 = 185,
    E_AnimationsArea79 = 186,
    E_AnimationsArea80 = 187,
    E_AnimationsArea81 = 188,
    E_AnimationsArea82 = 189,
    E_AnimationsArea83 = 190,
    E_AnimationsArea84 = 191,
    E_AnimationsArea85 = 192,
    E_AnimationsArea86 = 193,
    E_AnimationsArea87 = 194,
    E_AnimationsArea88 = 195,
    E_AnimationsArea89 = 196,
    E_AnimationsArea90 = 197,
    E_AnimationsArea91 = 198,
    E_AnimationsArea92 = 199,
    E_AnimationsArea93 = 200,
    E_AnimationsArea94 = 201,
    E_AnimationsArea95 = 202,
    E_AnimationsArea96 = 203,
    E_AnimationsArea97 = 204,
    E_AnimationsArea98 = 205,
    E_AnimationsArea99 = 206,
    E_LastAnimationsArea = 206,
    E_FirstLanguageArea = 207,
    E_LanguageArea0 = 207,
    E_LanguageArea1 = 208,
    E_LanguageArea2 = 209,
    E_LanguageArea3 = 210,
    E_LanguageArea4 = 211,
    E_LanguageArea5 = 212,
    E_LanguageArea6 = 213,
    E_LanguageArea7 = 214,
    E_LanguageArea8 = 215,
    E_LanguageArea9 = 216,
    E_LastLanguageArea = 216,
    E_AreaNumber = 217,
} _tdeAreaName;

struct tdstDataPath_ {
    char szGameData[256]; /* +0x0 */
    char szEngineDLL[256]; /* +0x100 */
    char szSaveGame[256]; /* +0x200 */
    char szWorld[256]; /* +0x300 */
    char szLevels[256]; /* +0x400 */
    char szSound[256]; /* +0x500 */
    char szGraphicsClasses[256]; /* +0x600 */
    char szGraphicsBanks[256]; /* +0x700 */
    char szVignettes[256]; /* +0x800 */
    char szOptions[256]; /* +0x900 */
    char szTemp[256]; /* +0xa00 */
    char szMenus[256]; /* +0xb00 */
    char szMenusAnims[256]; /* +0xc00 */
    char szVideo[256]; /* +0xd00 */
};

char* (*a_p_fn_szNameFunction[217])(char*);
extern unsigned char GAM_fn_vGetLoadingLevel(unsigned int _uiLevelTag);
extern char* Strcat(char*, const char*);
unsigned char bUseMultiPath;
char PLD_g_szAreaFileName[256];
tdstDataPath_ g_stDataPath;

#pragma auto_inline on
char* MNC_fn_pcGetCurrentDirectory(void)
{
    static char str[256];
    /* The PC build's directory lookup occupied these lines. */















    sprintf(str, "%s%s", bUseMultiPath ? g_stDataPath.szGameData : "DATA", "BIN");


    return str;
}

char* PLD_szPrependGamedataName(char* szName)
{
    char szTmpCopy[256];

    strcpy(szTmpCopy, szName);
    sprintf(PLD_g_szAreaFileName, "%s\\%s", MNC_fn_pcGetCurrentDirectory(), szTmpCopy);

    return PLD_g_szAreaFileName;
}
#pragma auto_inline reset

char* PLD_szLocationFromAreaId(_tdeAreaName eAreaId, char* szName)
{
    char* str = a_p_fn_szNameFunction[eAreaId](szName); if (GAM_fn_vGetLoadingLevel(2)) Strcat(str, "MP"); return PLD_szPrependGamedataName(str);
}

char* PLD_szLanguageName(char* szName)
{
    sprintf(PLD_g_szAreaFileName, "Texts/%s", szName);
    return PLD_g_szAreaFileName;
}

char* PLD_szKeyFramesName(char* szName)
{
    sprintf(PLD_g_szAreaFileName, "%sKf", szName, szName);
    return PLD_g_szAreaFileName;
}

char* PLD_szLvlKeyFramesName(char* szName)
{
    sprintf(PLD_g_szAreaFileName, "%s/%sKf", szName, szName);
    return PLD_g_szAreaFileName;
}

void PLD_szFixKeyFramesName(void)
{
    strcpy(PLD_g_szAreaFileName, "FixKf");
}

char* PLD_szAnimationName(char* szName)
{
    sprintf(PLD_g_szAreaFileName, "%s", szName);
    return PLD_g_szAreaFileName;
}

char* PLD_szVertexBufferName(char* szName)
{
    sprintf(PLD_g_szAreaFileName, "%s\\%s_vb", szName, szName);
    return PLD_g_szAreaFileName;
}

char* PLD_szTransitionName(char* szName)
{
    sprintf(PLD_g_szAreaFileName, "%s\\transit", szName);
    return PLD_g_szAreaFileName;
}

char* PLD_szLevelName(char* szName)
{
    sprintf(PLD_g_szAreaFileName, "%s\\%s", szName, szName);
    return PLD_g_szAreaFileName;
}

void PLD_szFixName(void)
{
    strcpy(PLD_g_szAreaFileName, "fix");
}
