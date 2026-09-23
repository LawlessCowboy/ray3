/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\clib\clib.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

int LogPassages[1000];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\clib\clib.c lines 102–103 */
/* addr: 0x0024c7d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 102
 *   +0x0004 -> line 103
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float PS2SQRTF(float x)
{
    return __builtin_sqrt(x);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\clib\clib.c lines 84–93 */
/* addr: 0x0024c7e0  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 84
 *   +0x0004 -> line 85
 *   +0x0008 -> line 84
 *   +0x0010 -> line 85
 *   +0x0018 -> line 87
 *   +0x002c -> line 88
 *   +0x0034 -> line 91
 *   +0x0040 -> line 92
 *   +0x0044 -> line 93
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void itoa(int value, char* buffer, int radix)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\clib\clib.c lines 72–78 */
/* addr: 0x0024c840  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 72
 *   +0x000c -> line 75
 *   +0x0030 -> line 76
 *   +0x0038 -> line 77
 *   +0x003c -> line 78
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char* Strcat(char* s1, char* s2)
{
    char* pcIndex;
    pcIndex = s1;
    while (*pcIndex != '\0')
        pcIndex++;
    strcpy(pcIndex, s2);
    return s1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\clib\clib.c lines 57–67 */
/* addr: 0x0024c890  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 57
 *   +0x0004 -> line 59
 *   +0x0024 -> line 61
 *   +0x0048 -> line 63
 *   +0x005c -> line 64
 *   +0x0060 -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char* Strrchr(char* string, int ch)
{
    char* start;
    start = string;
    while (*string++) {
    }
    ch = (char)ch;
    while (--string != start && *string != (char)ch) {
    }
    if (*string == (char)ch)
        return string;
    return NULL;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\clib\clib.c lines 40–53 */
/* addr: 0x0024c900  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 40
 *   +0x000c -> line 42
 *   +0x0010 -> line 43
 *   +0x0028 -> line 45
 *   +0x0030 -> line 47
 *   +0x0034 -> line 53
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char* Strchr(char* s, int c)
{
    char* pcIndex;
    char* result;
    pcIndex = s;
    while (*pcIndex != '\0' && *pcIndex != (char)c)
        pcIndex++;
    if (*pcIndex)
        result = pcIndex;
    else
        result = NULL;
    return result;
}
