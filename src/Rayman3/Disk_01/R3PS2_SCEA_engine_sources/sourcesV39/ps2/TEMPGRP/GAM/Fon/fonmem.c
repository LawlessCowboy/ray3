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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Fon\fonmem.c lines 48–63 */
/* addr: 0x00274ba0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 48
 *   +0x0004 -> line 54
 *   +0x0008 -> line 48
 *   +0x000c -> line 54
 *   +0x0010 -> line 55
 *   +0x0018 -> line 56
 *   +0x0020 -> line 58
 *   +0x0024 -> line 61
 *   +0x0034 -> line 63
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void FON_fn_vInitFonts(void)
{
    FON_g_stGeneral.uwNumberOfLanguages = 0;
    FON_g_stGeneral.d_sLanguageArray = NULL;
    FON_g_stGeneral.p_stCommonLanguage = NULL;
    FON_g_stGeneral.ulElapsedTime = 0;
    FON_g_stGeneral.hRandomHandle = RND_fn_hReserveANewHandleIndex();
}
