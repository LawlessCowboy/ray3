/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\Ipt\iptfake.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct IPT_tdstConvertValue_ {
    short swAZERTYKeyValue; /* +0x0 */
    short swQWERTYKeyValue; /* +0x2 */
} IPT_tdstConvertValue_;

extern IPT_tdstConvertValue_ IPT_g_ConvertAZERTYtoQWERTY[];

short IPT_fn_swConvertAZERTYtoQWERTY(short swAZERTY)
{
    int i;

    for (i = 0; IPT_g_ConvertAZERTYtoQWERTY[i].swAZERTYKeyValue != -1 && IPT_g_ConvertAZERTYtoQWERTY[i].swAZERTYKeyValue != swAZERTY; i++);
    if (IPT_g_ConvertAZERTYtoQWERTY[i].swAZERTYKeyValue == -1)
        return swAZERTY;

    return IPT_g_ConvertAZERTYtoQWERTY[i].swQWERTYKeyValue;
}
