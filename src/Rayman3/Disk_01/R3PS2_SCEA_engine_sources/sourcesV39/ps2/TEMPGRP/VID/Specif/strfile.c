/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\strfile.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;

struct anon_0 {
    int isOnCD; /* +0x0 */
    int size; /* +0x4 */
    anon_3 fp; /* +0x8 */
    int iopBuf; /* +0x2c */
    int fd; /* +0x30 */
};

struct anon_1 {
    int pos; /* +0x0 */
    int size; /* +0x4 */
};

struct anon_2 {
    unsigned char trycount; /* +0x0 */
    unsigned char spindlctrl; /* +0x1 */
    unsigned char datapattern; /* +0x2 */
    unsigned char pad; /* +0x3 */
};

struct anon_3 {
    unsigned int lsn; /* +0x0 */
    unsigned int size; /* +0x4 */
    char name[16]; /* +0x8 */
    unsigned char date[8]; /* +0x18 */
    unsigned int flag; /* +0x20 */
};

int isStrFileInit;
anon_1 last_video_fd;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\strfile.c lines 34–34 */
/* addr: 0x00131440  size: 48 bytes */
int readBufCreate(anon_0* b)
{
    /* line map: */
    /*   line 34 @ +0x000 */
    /*   line 34 @ +0x000 */
    /*   line 34 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\strfile.c lines 210–220 */
/* addr: 0x00131470  size: 76 bytes */
int strFileRead(anon_0* file, void* buff, int size)
{
    unsigned int err;
    int count;
    /* line map: */
    /*   line 210 @ +0x000 */
    /*   line 215 @ +0x000 */
    /*   line 220 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\strfile.c lines 194–200 */
/* addr: 0x001314c0  size: 76 bytes */
int strFileClose(anon_0* file)
{
    /* line map: */
    /*   line 194 @ +0x000 */
    /*   line 196 @ +0x000 */
    /*   line 198 @ +0x000 */
    /*   line 200 @ +0x000 */
    /* TODO: decompile from asm/... */
}
