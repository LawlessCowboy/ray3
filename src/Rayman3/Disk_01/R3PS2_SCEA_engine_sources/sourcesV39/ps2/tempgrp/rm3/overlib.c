/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\overlib.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\overlib.c lines 254–254 */
/* addr: 0x001002b0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 254
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void abort(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\overlib.c lines 244–244 */
/* addr: 0x001002c0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 244
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void exit(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\overlib.c lines 159–199 */
/* addr: 0x001002d0  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 162
 *   +0x000c -> line 159
 *   +0x0010 -> line 162
 *   +0x0024 -> line 159
 *   +0x0028 -> line 162
 *   +0x0060 -> line 159
 *   +0x0064 -> line 162
 *   +0x006c -> line 159
 *   +0x0070 -> line 165
 *   +0x0074 -> line 166
 *   +0x0078 -> line 167
 *   +0x007c -> line 168
 *   +0x0080 -> line 169
 *   +0x0084 -> line 170
 *   +0x0088 -> line 171
 *   +0x008c -> line 172
 *   +0x0090 -> line 174
 *   +0x0094 -> line 175
 *   +0x0098 -> line 176
 *   +0x009c -> line 177
 *   +0x00a0 -> line 178
 *   +0x00a4 -> line 179
 *   +0x00a8 -> line 180
 *   +0x00ac -> line 181
 *   +0x00b0 -> line 182
 *   +0x00b4 -> line 183
 *   +0x00b8 -> line 199
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Hand-written asm body: the target line map has one line per instruction
 * from the first abs.s/sub.s to madd.s, and the code uses callee-saved
 * $f24-$f26 in a leaf function, which MWCC does not choose for C. */
float PS2_dl_cosf(float val)
{
    float x0;
    float x1 = -0.15915493667125702f, x2 = 2.0f, x3 = 4194304.0f, x4 = 0.25f, x5 = 6.2831850051879883f, x6 = -41.341670989990234f, x7 = 81.60222625732422f, x8 = -76.57495880126953f, x9 = 39.71065902709961f;

    asm {
        abs.s   x0, val
        mula.s  x0, x1
        msuba.s x2, x3
        madda.s x2, x3
        msuba.s x0, x1
        msub.s  x0, x2, x4
        abs.s   x0, x0
        sub.s   $f26, x0, x4

        mul.s   x0, $f26, $f26
        mula.s  $f26, x5
        mul.s   $f24, $f26, x0
        mul.s   $f25, $f24, x0
        madda.s $f24, x6
        mul.s   $f24, $f25, x0
        madda.s $f25, x7
        mul.s   $f25, $f24, x0
        madda.s $f24, x8
        madd.s  x0, $f25, x9
    }
    return x0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\overlib.c lines 116–156 */
/* addr: 0x001003a0  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 119
 *   +0x0004 -> line 116
 *   +0x0008 -> line 119
 *   +0x0018 -> line 116
 *   +0x001c -> line 119
 *   +0x0024 -> line 116
 *   +0x0028 -> line 119
 *   +0x003c -> line 116
 *   +0x0040 -> line 119
 *   +0x007c -> line 121
 *   +0x0080 -> line 122
 *   +0x0084 -> line 123
 *   +0x0088 -> line 124
 *   +0x008c -> line 125
 *   +0x0090 -> line 126
 *   +0x0094 -> line 127
 *   +0x0098 -> line 128
 *   +0x009c -> line 129
 *   +0x00a0 -> line 131
 *   +0x00a4 -> line 132
 *   +0x00a8 -> line 133
 *   +0x00ac -> line 134
 *   +0x00b0 -> line 135
 *   +0x00b4 -> line 136
 *   +0x00b8 -> line 137
 *   +0x00bc -> line 138
 *   +0x00c0 -> line 139
 *   +0x00c4 -> line 140
 *   +0x00c8 -> line 156
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Hand-written asm body: the target line map has one line per instruction
 * from the first abs.s/sub.s to madd.s, and the code uses callee-saved
 * $f24-$f26 in a leaf function, which MWCC does not choose for C. */
float PS2_dl_sinf(float val)
{
    float x0 = 1.5707963705062866f, x1 = -0.15915493667125702f, x2 = 2.0f, x3 = 4194304.0f, x4 = 0.25f, x5 = 6.2831850051879883f, x6 = -41.341670989990234f, x7 = 81.60222625732422f, x8 = -76.57495880126953f, x9 = 39.71065902709961f;

    asm {
        sub.s   x0, val, x0
        abs.s   x0, x0
        mula.s  x0, x1
        msuba.s x2, x3
        madda.s x2, x3
        msuba.s x0, x1
        msub.s  x0, x2, x4
        abs.s   x0, x0
        sub.s   $f26, x0, x4

        mul.s   x0, $f26, $f26
        mula.s  $f26, x5
        mul.s   $f24, $f26, x0
        mul.s   $f25, $f24, x0
        madda.s $f24, x6
        mul.s   $f24, $f25, x0
        madda.s $f25, x7
        mul.s   $f25, $f24, x0
        madda.s $f24, x8
        madd.s  x0, $f25, x9
    }
    return x0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\overlib.c lines 72–72 */
/* addr: 0x00100480  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 72
 * Recovered from .line/.symtab; the extractor emitted no debug record.
 */
void PS2_fn_vCreatemallocCriticalSection(void)
{
}
