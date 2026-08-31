/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef union anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct SemaParam SemaParam;

union anon_0 {
    long double q; /* +0x0 */
    unsigned long l[2]; /* +0x0 */
    unsigned int i[4]; /* +0x0 */
    unsigned short s[8]; /* +0x0 */
    unsigned char c[16]; /* +0x0 */
};

struct anon_1 {
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

struct anon_2 {
    long pts; /* +0x0 */
    long dts; /* +0x8 */
    int pos; /* +0x10 */
    int len; /* +0x14 */
};

struct anon_3 {
    int data; /* +0x0 */
    int tag; /* +0x4 */
    int n; /* +0x8 */
    int dmaStart; /* +0xc */
    int dmaN; /* +0x10 */
    int readBytes; /* +0x14 */
    int buffSize; /* +0x18 */
    anon_1 env; /* +0x1c */
    int sema; /* +0x40 */
    int isActive; /* +0x44 */
    long totalBytes; /* +0x48 */
    int ts; /* +0x50 */
    int n_ts; /* +0x54 */
    int count_ts; /* +0x58 */
    int wt_ts; /* +0x5c */
};

struct SemaParam {
    int currentCount; /* +0x0 */
    int maxCount; /* +0x4 */
    int initCount; /* +0x8 */
    int numWaitThreads; /* +0xc */
    unsigned int attr; /* +0x10 */
    unsigned int option; /* +0x14 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 62–186 */
/* addr: 0x00131510  size: 804 bytes */
int strFileOpen(anon_0* file, char* filename)
{
    anon_2 mode;
    char* tail;
    int len;
    int i;
    int dlen;
    char devname[64];
    char fn[256];
    char* body;
    int ret;
    /* line map: */
    /*   line 62 @ +0x000 */
    /*   line 68 @ +0x000 */
    /*   line 70 @ +0x000 */
    /*   line 70 @ +0x000 */
    /*   line 70 @ +0x000 */
    /*   line 76 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 84 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 606–649 */
/* addr: 0x00131840  size: 452 bytes */
int viBufGetTs(anon_3* f, anon_2* ts)
{
    int rd;
    int i;
    int wt;
    int tscount;
    int isEnd;
    int datasize;
    unsigned int stop;
    int bp;
    unsigned int ipubp;
    unsigned int d4madr;
    /* line map: */
    /*   line 606 @ +0x000 */
    /*   line 606 @ +0x000 */
    /*   line 608 @ +0x000 */
    /*   line 607 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 621 @ +0x000 */
    /*   line 621 @ +0x000 */
    /*   line 622 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 575–598 */
/* addr: 0x00131a10  size: 312 bytes */
int viBufPutTs(anon_3* f, anon_2* ts)
{
    int ret;
    /* line map: */
    /*   line 575 @ +0x000 */
    /*   line 577 @ +0x000 */
    /*   line 581 @ +0x000 */
    /*   line 585 @ +0x000 */
    /*   line 587 @ +0x000 */
    /*   line 590 @ +0x000 */
    /*   line 593 @ +0x000 */
    /*   line 598 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 531–563 */
/* addr: 0x00131b50  size: 336 bytes */
int viBufModifyPts(anon_3* f, anon_2* new_ts, anon_2* ts)
{
    int loop;
    int datasize;
    int rd;
    /* line map: */
    /*   line 532 @ +0x000 */
    /*   line 531 @ +0x000 */
    /*   line 534 @ +0x000 */
    /*   line 536 @ +0x000 */
    /*   line 542 @ +0x000 */
    /*   line 545 @ +0x000 */
    /*   line 548 @ +0x000 */
    /*   line 551 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 516–520 */
/* addr: 0x00131ca0  size: 80 bytes */
void viBufFlush(anon_3* f)
{
    /* line map: */
    /*   line 516 @ +0x000 */
    /*   line 520 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 501–508 */
/* addr: 0x00131cf0  size: 68 bytes */
int viBufCount(anon_3* f)
{
    int ret;
    /* line map: */
    /*   line 501 @ +0x000 */
    /*   line 505 @ +0x000 */
    /*   line 505 @ +0x000 */
    /*   line 508 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 467–473 */
/* addr: 0x00131d40  size: 144 bytes */
int viBufDelete(anon_3* f)
{
    /* line map: */
    /*   line 467 @ +0x000 */
    /*   line 469 @ +0x000 */
    /*   line 472 @ +0x000 */
    /*   line 473 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 380–458 */
/* addr: 0x00131dd0  size: 944 bytes */
int viBufRestartDMA(anon_3* f)
{
    int index_next;
    int index;
    unsigned int d4chcr_next;
    unsigned int d4tadr_next;
    unsigned int d4qwc_next;
    unsigned int d4madr_next;
    int bp;
    /* line map: */
    /*   line 380 @ +0x000 */
    /*   line 383 @ +0x000 */
    /*   line 385 @ +0x000 */
    /*   line 380 @ +0x000 */
    /*   line 386 @ +0x000 */
    /*   line 391 @ +0x000 */
    /*   line 383 @ +0x000 */
    /*   line 396 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 345–372 */
/* addr: 0x00132180  size: 356 bytes */
int viBufStopDMA(anon_3* f)
{
    /* line map: */
    /*   line 345 @ +0x000 */
    /*   line 351 @ +0x000 */
    /*   line 353 @ +0x000 */
    /*   line 358 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 364 @ +0x000 */
    /*   line 367 @ +0x000 */
    /*   line 372 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 257–337 */
/* addr: 0x001322f0  size: 756 bytes */
int viBufAddDMA(anon_3* f)
{
    int read_n;
    int read_start;
    int consume;
    int isNewData;
    unsigned int d4chcr;
    int last;
    int index;
    int i;
    /* line map: */
    /*   line 257 @ +0x000 */
    /*   line 260 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 280 @ +0x000 */
    /*   line 280 @ +0x000 */
    /*   line 282 @ +0x000 */
    /*   line 289 @ +0x000 */
    /*   line 289 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 234–240 */
/* addr: 0x001325f0  size: 92 bytes */
void viBufEndPut(anon_3* f, int size)
{
    /* line map: */
    /*   line 234 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 240 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 205–226 */
/* addr: 0x00132650  size: 244 bytes */
void viBufBeginPut(anon_3* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
    int en;
    int es;
    /* line map: */
    /*   line 205 @ +0x000 */
    /*   line 211 @ +0x000 */
    /*   line 211 @ +0x000 */
    /*   line 213 @ +0x000 */
    /*   line 215 @ +0x000 */
    /*   line 218 @ +0x000 */
    /*   line 220 @ +0x000 */
    /*   line 222 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\vibuf.c lines 153–190 */
/* addr: 0x00132750  size: 404 bytes */
int viBufReset(anon_3* f)
{
    int i;
    /* line map: */
    /*   line 155 @ +0x000 */
    /*   line 159 @ +0x000 */
    /*   line 153 @ +0x000 */
    /*   line 154 @ +0x000 */
    /*   line 157 @ +0x000 */
    /*   line 160 @ +0x000 */
    /*   line 160 @ +0x000 */
    /*   line 162 @ +0x000 */
    /* TODO: decompile from asm/... */
}
