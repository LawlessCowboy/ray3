/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Fon\fonmem.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct stLanguage_ stLanguage_;
typedef struct FON_tdstGeneral_ {
    unsigned int ulElapsedTime; /* +0x0 */
    unsigned int hRandomHandle; /* +0x4 */
    unsigned short uwNumberOfLanguages; /* +0x8 */
    stLanguage_* d_sLanguageArray; /* +0xc */
    stLanguage_* p_stCommonLanguage; /* +0x10 */
} FON_tdstGeneral_;
extern FON_tdstGeneral_ FON_g_stGeneral;
extern unsigned int RND_fn_hReserveANewHandleIndex(void);
unsigned char g_ucFONModuleId;

void FON_fn_vInitFonts(void)
{
    FON_g_stGeneral.uwNumberOfLanguages = 0;
    FON_g_stGeneral.d_sLanguageArray = NULL;
    FON_g_stGeneral.p_stCommonLanguage = NULL;
    FON_g_stGeneral.ulElapsedTime = 0;
    FON_g_stGeneral.hRandomHandle = RND_fn_hReserveANewHandleIndex();
}
