/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Fon\fonfont.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stLanguage_ stLanguage_;
typedef struct FON_tdstGeneral_ FON_tdstGeneral_;

struct stLanguage_ {
    int d_pTextsArray; /* +0x0 */
    unsigned short uwMaxNumberOfTexts; /* +0x4 */
    unsigned short uwNumberOfTexts; /* +0x6 */
};

struct FON_tdstGeneral_ {
    unsigned int ulElapsedTime; /* +0x0 */
    unsigned int hRandomHandle; /* +0x4 */
    unsigned short uwNumberOfLanguages; /* +0x8 */
    int d_sLanguageArray; /* +0xc */
    int p_stCommonLanguage; /* +0x10 */
};

unsigned char g_ucFONModuleId;
/* aggregate */ int g_a_szFONInformationModule;
int g_szFONModuleName;
FON_tdstGeneral_ FON_g_stGeneral;

/* addr: 0x00274b90  size: 8 bytes */
unsigned int fn_ulStdGameSizeOf(void)
{
    return 100;
}
