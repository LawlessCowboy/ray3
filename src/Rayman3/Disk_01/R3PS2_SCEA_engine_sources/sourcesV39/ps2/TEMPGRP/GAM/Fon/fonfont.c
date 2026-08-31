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
    stLanguage_* d_sLanguageArray; /* +0xc */
    stLanguage_* p_stCommonLanguage; /* +0x10 */
};

unsigned char g_ucFONModuleId;
int g_a_szFONInformationModule[3];
int g_szFONModuleName;
FON_tdstGeneral_ FON_g_stGeneral;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Fon\fonfont.c lines 291–291 */
/* addr: 0x00274b90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 291
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int fn_ulStdGameSizeOf(void)
{
    return 100;
}
