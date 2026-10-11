/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\p5\ipt_scpt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct IPT_tdstConvertValue_ IPT_tdstConvertValue_;

/* Module state is defined by the platform input TU. */
extern unsigned char g_ucIPTModuleId;

struct IPT_tdstConvertValue_ {
    short swAZERTYKeyValue; /* +0x0 */
    short swQWERTYKeyValue; /* +0x2 */
};

unsigned char IPT_g_bSkippedEntry;
IPT_tdstConvertValue_ IPT_g_ConvertAZERTYtoQWERTY;

void IPT_fn_vFirstInitInput(void)
{
    if (g_ucIPTModuleId == 255)
        g_ucIPTModuleId = Erm_fn_ucInitErrMsg(g_ucIPTModuleId);
}
