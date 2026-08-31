/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\readbuf.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;

struct anon_0 {
    unsigned char data[163840]; /* +0x0 */
    int put; /* +0x28000 */
    int count; /* +0x28004 */
    int size; /* +0x28008 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\readbuf.c lines 45–73 */
/* addr: 0x001310d0  size: 504 bytes */
int videoCallback(anon_1* str, void* data, anon_3* rb)
{
    int d1;
    int d0;
    unsigned char* pd1Unc;
    unsigned char* pd0Unc;
    unsigned char* pd1;
    unsigned char* pd0;
    int s1;
    int s0;
    unsigned char* ps0;
    /* line map: */
    /*   line 45 @ +0x000 */
    /*   line 45 @ +0x000 */
    /*   line 45 @ +0x000 */
    /*   line 45 @ +0x000 */
    /*   line 46 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 55 @ +0x000 */
    /*   line 55 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\readbuf.c lines 92–92 */
/* addr: 0x001312d0  size: 60 bytes */
int readBufEndGet(anon_0* b, int size)
{
    /* line map: */
    /*   line 92 @ +0x000 */
    /*   line 92 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\readbuf.c lines 79–82 */
/* addr: 0x00131310  size: 96 bytes */
int readBufBeginGet(anon_0* b, unsigned char** ptr)
{
    /* line map: */
    /*   line 79 @ +0x000 */
    /*   line 82 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\readbuf.c lines 66–70 */
/* addr: 0x00131370  size: 116 bytes */
int readBufEndPut(anon_0* b, int size)
{
    /* line map: */
    /*   line 66 @ +0x000 */
    /*   line 66 @ +0x000 */
    /*   line 70 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\readbuf.c lines 52–56 */
/* addr: 0x001313f0  size: 60 bytes */
int readBufBeginPut(anon_0* b, unsigned char** ptr)
{
    int size;
    /* line map: */
    /*   line 52 @ +0x000 */
    /*   line 56 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00131430  size: 8 bytes */
void readBufDelete(void)
{
}
