/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\iptfake.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct IPT_tdstConvertValue_ {
    short swAZERTYKeyValue; /* +0x0 */
    short swQWERTYKeyValue; /* +0x2 */
} IPT_tdstConvertValue_;

extern IPT_tdstConvertValue_ IPT_g_ConvertAZERTYtoQWERTY[];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\iptfake.c lines 39–44 */
/* addr: 0x002f7400  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 39
 *   +0x0040 -> line 40
 *   +0x0060 -> line 41
 *   +0x0068 -> line 43
 *   +0x0078 -> line 44
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short IPT_fn_swConvertAZERTYtoQWERTY(short swAZERTY)
{
    int i;

    for (i = 0; IPT_g_ConvertAZERTYtoQWERTY[i].swAZERTYKeyValue != -1 && IPT_g_ConvertAZERTYtoQWERTY[i].swAZERTYKeyValue != swAZERTY; i++);
    if (IPT_g_ConvertAZERTYtoQWERTY[i].swAZERTYKeyValue == -1)
        return swAZERTY;

    return IPT_g_ConvertAZERTYtoQWERTY[i].swQWERTYKeyValue;
}
