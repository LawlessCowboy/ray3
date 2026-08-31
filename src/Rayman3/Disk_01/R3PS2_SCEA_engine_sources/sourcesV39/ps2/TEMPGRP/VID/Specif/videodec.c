/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef union anon_3 anon_3;
typedef struct anon_4 anon_4;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct anon_7 anon_7;
typedef struct anon_8 anon_8;
typedef struct anon_9 anon_9;

struct anon_0 {
    anon_2 mpeg; /* +0x0 */
    anon_4 vibuf; /* +0x48 */
    unsigned int state; /* +0xa8 */
    int sema; /* +0xac */
    int hid_endimage; /* +0xb0 */
    int hid_vblank; /* +0xb4 */
};

struct anon_1 {
    long pts; /* +0x0 */
    long dts; /* +0x8 */
    int pos; /* +0x10 */
    int len; /* +0x14 */
};

struct anon_2 {
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

union anon_3 {
    /* aggregate */ int type; /* +0x0 */
    anon_5 error; /* +0x0 */
    anon_6 ts; /* +0x0 */
    anon_7 str; /* +0x0 */
};

struct anon_4 {
    int data; /* +0x0 */
    int tag; /* +0x4 */
    int n; /* +0x8 */
    int dmaStart; /* +0xc */
    int dmaN; /* +0x10 */
    int readBytes; /* +0x14 */
    int buffSize; /* +0x18 */
    anon_9 env; /* +0x1c */
    int sema; /* +0x40 */
    int isActive; /* +0x44 */
    long totalBytes; /* +0x48 */
    int ts; /* +0x50 */
    int n_ts; /* +0x54 */
    int count_ts; /* +0x58 */
    int wt_ts; /* +0x5c */
};

struct anon_5 {
    /* aggregate */ int type; /* +0x0 */
    int errMessage; /* +0x4 */
};

struct anon_6 {
    /* aggregate */ int type; /* +0x0 */
    long pts; /* +0x8 */
    long dts; /* +0x10 */
};

struct anon_7 {
    /* aggregate */ int type; /* +0x0 */
    int header; /* +0x4 */
    int data; /* +0x8 */
    unsigned int len; /* +0xc */
    long pts; /* +0x10 */
    long dts; /* +0x18 */
};

struct anon_8 {
    unsigned int pix[256]; /* +0x0 */
};

struct anon_9 {
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

anon_0 videoDec;
int zeFrame;
int (*mpegTS)(anon_2*, anon_6*, void*);
int (*mpegRestartDMA)(anon_2*, anon_3*, void*);
int (*mpegStopDMA)(anon_2*, anon_3*, void*);
int (*mpegNodata)(anon_2*, anon_3*, void*);
int (*mpegError)(anon_2*, anon_5*, void*);

void viBufEndPut(anon_4* f, int size);
void viBufBeginPut(anon_4* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 117–142 */
/* addr: 0x001328f0  size: 116 bytes */
int viBufCreate(anon_3* f, long double* data, long double* tag, int size, anon_2* ts, int n_ts)
{
    SemaParam param;
    /* line map: */
    /*   line 118 @ +0x000 */
    /*   line 120 @ +0x000 */
    /*   line 117 @ +0x000 */
    /*   line 129 @ +0x000 */
    /*   line 120 @ +0x000 */
    /*   line 123 @ +0x000 */
    /*   line 131 @ +0x000 */
    /*   line 139 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 397–400 */
/* addr: 0x00132970  size: 68 bytes */
int mpegTS(anon_6* cbts)
{
    anon_1 ts;
    /* line map: */
    /*   line 397 @ +0x000 */
    /*   line 397 @ +0x000 */
    /*   line 397 @ +0x000 */
    /*   line 400 @ +0x000 */
    /*   line 399 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 384–385 */
/* addr: 0x001329c0  size: 36 bytes */
int mpegRestartDMA(void)
{
    /* line map: */
    /*   line 384 @ +0x000 */
    /*   line 384 @ +0x000 */
    /*   line 385 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 373–374 */
/* addr: 0x001329f0  size: 36 bytes */
int mpegStopDMA(void)
{
    /* line map: */
    /*   line 373 @ +0x000 */
    /*   line 373 @ +0x000 */
    /*   line 374 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 361–364 */
/* addr: 0x00132a20  size: 44 bytes */
int mpegNodata(void)
{
    /* line map: */
    /*   line 361 @ +0x000 */
    /*   line 364 @ +0x000 */
    /*   line 364 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 351–352 */
/* addr: 0x00132a50  size: 40 bytes */
int mpegError(anon_5* cberror)
{
    /* line map: */
    /*   line 351 @ +0x000 */
    /*   line 351 @ +0x000 */
    /*   line 352 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 300–342 */
/* addr: 0x00132a80  size: 204 bytes */
int decBs0(anon_0* vd, anon_8* rgb32)
{
    int status;
    int ret;
    /* line map: */
    /*   line 300 @ +0x000 */
    /*   line 304 @ +0x000 */
    /*   line 306 @ +0x000 */
    /*   line 319 @ +0x000 */
    /*   line 319 @ +0x000 */
    /*   line 324 @ +0x000 */
    /*   line 326 @ +0x000 */
    /*   line 338 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 270–275 */
/* addr: 0x00132b50  size: 56 bytes */
void videoDecMain(anon_0* vd)
{
    /* line map: */
    /*   line 270 @ +0x000 */
    /*   line 275 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 260–260 */
/* addr: 0x00132b90  size: 84 bytes */
int videoDecIsFlushed(anon_0* vd)
{
    /* line map: */
    /*   line 260 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 227–251 */
/* addr: 0x00132bf0  size: 400 bytes */
int videoDecFlush(anon_0* vd)
{
    int d1;
    int d0;
    unsigned char seq_end_code[4];
    unsigned char* pd1Unc;
    unsigned char* pd0Unc;
    unsigned char* pd1;
    unsigned char* pd0;
    /* line map: */
    /*   line 227 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 234 @ +0x000 */
    /*   line 238 @ +0x000 */
    /*   line 237 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 186–190 */
/* addr: 0x00132d80  size: 60 bytes */
int videoDecPutTs(anon_0* vd, long pts_val, long dts_val, unsigned char* start, int len)
{
    anon_1 ts;
    /* line map: */
    /*   line 186 @ +0x000 */
    /*   line 190 @ +0x000 */
    /*   line 190 @ +0x000 */
    /*   line 190 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00132dc0  size: 8 bytes */
unsigned int videoDecGetState(anon_0* vd)
{
    return vd->state;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 152–152 */
/* addr: 0x00132dd0  size: 16 bytes */
int videoDecAbort(anon_0* vd)
{
    /* line map: */
    /*   line 152 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 138–142 */
/* addr: 0x00132de0  size: 52 bytes */
int videoDecDelete(anon_0* vd)
{
    /* line map: */
    /*   line 138 @ +0x000 */
    /*   line 142 @ +0x000 */
    /*   line 142 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00132e20  size: 8 bytes */
void videoDecEndPut(anon_0* vd, int size)
{
    viBufEndPut(&vd->vibuf, size);
}

/* addr: 0x00132e30  size: 8 bytes */
void videoDecBeginPut(anon_0* vd, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
    viBufBeginPut(&vd->vibuf, ptr0, len0, ptr1, len1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 99–100 */
/* addr: 0x00132e40  size: 32 bytes */
int videoDecSetStream(anon_0* vd, int strType, int ch, int (*cb)(anon_2*, anon_3*, void*), void* data)
{
    /* line map: */
    /*   line 99 @ +0x000 */
    /*   line 100 @ +0x000 */
    /* TODO: decompile from asm/... */
}
