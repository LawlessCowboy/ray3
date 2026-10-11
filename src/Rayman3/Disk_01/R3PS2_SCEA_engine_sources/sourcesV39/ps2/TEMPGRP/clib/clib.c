/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\clib\clib.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

int LogPassages[1000];

asm float PS2SQRTF(float x)
{
    jr ra
    sqrt.s f0, f12
}

/* Debug info says void, but the buffer (or NULL) is returned in $v0, and
 * callers pass the value as a long. */
char* itoa(long value, char* buffer, int radix)
{
    if (radix == 10)
    {
        sprintf(buffer, "%i", value);
        return buffer;
    }


    printf("jt : itoa partiellement impl\xe9ment\xe9 dans clibc.c");
    return NULL;
}

char* Strcat(char* s1, char* s2)
{
    char* pcIndex;
    pcIndex = s1;
    while (*pcIndex != '\0')
        pcIndex++;
    strcpy(pcIndex, s2);
    return s1;
}

char* Strrchr(char* string, int ch)
{
{
    char* start;
    start = string;
    while (*string++) {
    }
    while (--string != start && *string != (char)ch) {
    }
    if (*string == (char)ch)
        return string;
    return NULL;
}
}

char* Strchr(char* s, int c)
{
{
    char* pcIndex;
    pcIndex = s;
    while (*pcIndex != '\0' && *pcIndex != (char)c)
        pcIndex++;
    if (*pcIndex == '\0')
        return NULL;
    return pcIndex;
}
}
