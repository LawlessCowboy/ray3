/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\read.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct anon_4 anon_4;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;

struct anon_0 {
    int width; /* +0x0 */
    int height; /* +0x4 */
    int frameCount; /* +0x8 */
    long pts; /* +0x10 */
    long dts; /* +0x18 */
    unsigned long flags; /* +0x20 */
    long pts2nd; /* +0x28 */
    long dts2nd; /* +0x30 */
    unsigned long flags2nd; /* +0x38 */
    int sys; /* +0x40 */
};

struct anon_1 {
    /* aggregate */ int type; /* +0x0 */
    int header; /* +0x4 */
    int data; /* +0x8 */
    unsigned int len; /* +0xc */
    long pts; /* +0x10 */
    long dts; /* +0x18 */
};

struct anon_2 {
    unsigned int d4madr; /* +0x0 */
    unsigned int d4tadr; /* +0x4 */
    unsigned int d4qwc; /* +0x8 */
    unsigned int d4chcr; /* +0xc */
    unsigned int d3madr; /* +0x10 */
    unsigned int d3qwc; /* +0x14 */
    unsigned int d3chcr; /* +0x18 */
    unsigned int ipubp; /* +0x1c */
    unsigned int ipuctrl; /* +0x20 */
};

struct anon_3 {
    unsigned char data[163840]; /* +0x0 */
    int put; /* +0x28000 */
    int count; /* +0x28004 */
    int size; /* +0x28008 */
};

struct anon_4 {
    long pts; /* +0x0 */
    long dts; /* +0x8 */
    int pos; /* +0x10 */
    int len; /* +0x14 */
};

struct anon_5 {
    int data; /* +0x0 */
    int tag; /* +0x4 */
    int n; /* +0x8 */
    int dmaStart; /* +0xc */
    int dmaN; /* +0x10 */
    int readBytes; /* +0x14 */
    int buffSize; /* +0x18 */
    anon_2 env; /* +0x1c */
    int sema; /* +0x40 */
    int isActive; /* +0x44 */
    long totalBytes; /* +0x48 */
    int ts; /* +0x50 */
    int n_ts; /* +0x54 */
    int count_ts; /* +0x58 */
    int wt_ts; /* +0x5c */
};

struct anon_6 {
    anon_0 mpeg; /* +0x0 */
    anon_5 vibuf; /* +0x48 */
    unsigned int state; /* +0xa8 */
    int sema; /* +0xac */
    int hid_endimage; /* +0xb0 */
    int hid_vblank; /* +0xb4 */
};

int VID_g_iHasAudio;
anon_6 videoDec;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\read.c lines 129–138 */
/* addr: 0x00130f90  size: 216 bytes */
unsigned int movie(char* name, int interruptable, float fVolume)
{
    /* line map: */
    /*   line 129 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 138 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\read.c lines 82–87 */
/* addr: 0x00131070  size: 88 bytes */
int vagCallbackLeft(anon_1* str)
{
    /* line map: */
    /*   line 82 @ +0x000 */
    /*   line 83 @ +0x000 */
    /*   line 87 @ +0x000 */
    /*   line 87 @ +0x000 */
    /* TODO: decompile from asm/... */
}
