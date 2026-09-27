/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_2 anon_2;
typedef struct anon_9 anon_9;
typedef struct anon_4 anon_4;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct anon_7 anon_7;
typedef union anon_3 anon_3;
typedef struct anon_8 anon_8;

typedef enum anon_enum_00034440 {
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
} anon_enum_00034440;

struct anon_2 {
    int width; /* +0x0 */
    int height; /* +0x4 */
    int frameCount; /* +0x8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xc..0xf */
    long pts; /* +0x10 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x14..0x17 */
    long dts; /* +0x18 */
    unsigned char _extractor_padding_02[4]; /* implicitly added by extractor; +0x1c..0x1f */
    unsigned long flags; /* +0x20 */
    unsigned char _extractor_padding_03[4]; /* implicitly added by extractor; +0x24..0x27 */
    long pts2nd; /* +0x28 */
    unsigned char _extractor_padding_04[4]; /* implicitly added by extractor; +0x2c..0x2f */
    long dts2nd; /* +0x30 */
    unsigned char _extractor_padding_05[4]; /* implicitly added by extractor; +0x34..0x37 */
    unsigned long flags2nd; /* +0x38 */
    unsigned char _extractor_padding_06[4]; /* implicitly added by extractor; +0x3c..0x3f */
    int sys; /* +0x40 */
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
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4c..0x4f */
    anon_1* ts; /* +0x50 */
    int n_ts; /* +0x54 */
    int count_ts; /* +0x58 */
    int wt_ts; /* +0x5c */
};

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
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4..0x7 */
    long dts; /* +0x8 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0xc..0xf */
    int pos; /* +0x10 */
    int len; /* +0x14 */
};

struct anon_5 {
    anon_enum_00034440 type; /* +0x0 */
    int errMessage; /* +0x4 */
};

struct anon_6 {
    anon_enum_00034440 type; /* +0x0 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4..0x7 */
    long pts; /* +0x8 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0xc..0xf */
    long dts; /* +0x10 */
};

struct anon_7 {
    anon_enum_00034440 type; /* +0x0 */
    int header; /* +0x4 */
    int data; /* +0x8 */
    unsigned int len; /* +0xc */
    long pts; /* +0x10 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x14..0x17 */
    long dts; /* +0x18 */
};

union anon_3 {
    anon_enum_00034440 type; /* +0x0 */
    anon_5 error; /* +0x0 */
    anon_6 ts; /* +0x0 */
    anon_7 str; /* +0x0 */
};

struct anon_8 {
    unsigned int pix[256]; /* +0x0 */
};

anon_0 videoDec;
int zeFrame;
int (*g_mpegTS)(anon_2*, anon_6*, void*);
int (*g_mpegRestartDMA)(anon_2*, anon_3*, void*);
int (*g_mpegStopDMA)(anon_2*, anon_3*, void*);
int (*g_mpegNodata)(anon_2*, anon_3*, void*);
int (*g_mpegError)(anon_2*, anon_5*, void*);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 394–401 */
/* addr: 0x00132970  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 394
 *   +0x0004 -> line 397
 *   +0x0008 -> line 394
 *   +0x000c -> line 397
 *   +0x0010 -> line 394
 *   +0x0018 -> line 397
 *   +0x0020 -> line 398
 *   +0x0024 -> line 400
 *   +0x0028 -> line 398
 *   +0x002c -> line 399
 *   +0x0034 -> line 401
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int mpegTS(anon_6* cbts)
{
    anon_1 ts;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 382–386 */
/* addr: 0x001329c0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 382
 *   +0x0004 -> line 384
 *   +0x0008 -> line 382
 *   +0x000c -> line 384
 *   +0x0014 -> line 386
 *   +0x0018 -> line 385
 *   +0x001c -> line 386
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int mpegRestartDMA(void)
{
    viBufRestartDMA((anon_3*)&videoDec.mpeg);
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 371–375 */
/* addr: 0x001329f0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 371
 *   +0x0004 -> line 373
 *   +0x0008 -> line 371
 *   +0x000c -> line 373
 *   +0x0014 -> line 375
 *   +0x0018 -> line 374
 *   +0x001c -> line 375
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int mpegStopDMA(void)
{
    viBufStopDMA((anon_3*)&videoDec.mpeg);
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 360–364 */
/* addr: 0x00132a20  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 360
 *   +0x0008 -> line 361
 *   +0x0010 -> line 362
 *   +0x001c -> line 364
 *   +0x0020 -> line 363
 *   +0x0024 -> line 364
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int mpegNodata(void)
{
    viBufAddDMA((anon_3*)&videoDec.mpeg);
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 350–353 */
/* addr: 0x00132a50  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 350
 *   +0x0004 -> line 351
 *   +0x0008 -> line 350
 *   +0x000c -> line 351
 *   +0x0018 -> line 353
 *   +0x001c -> line 352
 *   +0x0020 -> line 353
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int mpegError(anon_5* cberror)
{
    videoDec.state = 0;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 290–343 */
/* addr: 0x00132a80  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 290
 *   +0x0018 -> line 300
 *   +0x0028 -> line 302
 *   +0x0038 -> line 304
 *   +0x003c -> line 305
 *   +0x0044 -> line 306
 *   +0x004c -> line 314
 *   +0x0054 -> line 319
 *   +0x005c -> line 314
 *   +0x0064 -> line 319
 *   +0x006c -> line 322
 *   +0x0074 -> line 324
 *   +0x007c -> line 325
 *   +0x0080 -> line 326
 *   +0x0090 -> line 337
 *   +0x0098 -> line 338
 *   +0x00a8 -> line 340
 *   +0x00b0 -> line 342
 *   +0x00b4 -> line 343
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int decBs0(anon_0* vd)
{
    int status;
    int ret;
    anon_8* rgb32;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 269–276 */
/* addr: 0x00132b50  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 269
 *   +0x0010 -> line 270
 *   +0x0018 -> line 273
 *   +0x0020 -> line 275
 *   +0x0028 -> line 276
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void videoDecMain(anon_0* vd)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 259–262 */
/* addr: 0x00132b90  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 259
 *   +0x0014 -> line 260
 *   +0x0040 -> line 262
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int videoDecIsFlushed(anon_0* vd)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 222–251 */
/* addr: 0x00132bf0  size: 400 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 222
 *   +0x0008 -> line 227
 *   +0x000c -> line 222
 *   +0x0010 -> line 231
 *   +0x0014 -> line 222
 *   +0x0020 -> line 231
 *   +0x0024 -> line 222
 *   +0x0028 -> line 231
 *   +0x002c -> line 227
 *   +0x0030 -> line 231
 *   +0x0040 -> line 233
 *   +0x0058 -> line 234
 *   +0x0060 -> line 237
 *   +0x006c -> line 238
 *   +0x0070 -> line 240
 *   +0x0074 -> line 237
 *   +0x007c -> line 238
 *   +0x0084 -> line 240
 *   +0x0148 -> line 242
 *   +0x0154 -> line 244
 *   +0x015c -> line 246
 *   +0x0168 -> line 247
 *   +0x0170 -> line 250
 *   +0x0174 -> line 251
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int videoDecFlush(anon_0* vd)
{
    int d1;
    int d0;
    unsigned char seq_end_code[4];
    unsigned char* pd1Unc;
    unsigned char* pd0Unc;
    unsigned char* pd1;
    unsigned char* pd0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 182–191 */
/* addr: 0x00132d80  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 182
 *   +0x0008 -> line 186
 *   +0x000c -> line 187
 *   +0x0010 -> line 190
 *   +0x0014 -> line 188
 *   +0x001c -> line 190
 *   +0x0020 -> line 189
 *   +0x0024 -> line 190
 *   +0x0030 -> line 191
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufPutTs(anon_4* f, anon_1* ts);
int videoDecPutTs(anon_0* vd, long pts_val, long dts_val, unsigned char* start, int len)
{
    anon_1 ts;
    ts.pts = pts_val;
    ts.dts = dts_val;
    ts.pos = start - (unsigned char*)vd->vibuf.data;
    ts.len = len;
    return viBufPutTs(&videoDec.vibuf, &ts);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 161–161 */
/* addr: 0x00132dc0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 161
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int videoDecGetState(anon_0* vd)
{
    /* The recovered nested aggregate currently overstates its size; the
     * debug target places state at +0xa8. Keep the access explicit until the
     * nested video-decoder layout is fully recovered. */
    return *(unsigned int*)((unsigned char*)vd + 0xa8);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 150–152 */
/* addr: 0x00132dd0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 150
 *   +0x0008 -> line 152
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int videoDecAbort(anon_0* vd)
{
    *(unsigned int*)((unsigned char*)vd + 0xa8) = 1;
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 137–142 */
/* addr: 0x00132de0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 137
 *   +0x0010 -> line 138
 *   +0x0018 -> line 139
 *   +0x0020 -> line 142
 *   +0x0024 -> line 141
 *   +0x0028 -> line 142
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int viBufDelete(anon_4* f);

int videoDecDelete(anon_0* vd)
{
    viBufDelete(&vd->vibuf);
    sceMpegDelete(&vd->mpeg);
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 119–119 */
/* addr: 0x00132e20  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 119
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void videoDecEndPut(anon_0* vd, int size)
{
    /* The recovered mpeg aggregate is oversized by 0x28; the target ABI
     * passes the embedded viBuf at the debug-recorded +0x48 offset. */
    viBufEndPut((anon_4*)((unsigned char*)vd + 0x48), size);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 110–110 */
/* addr: 0x00132e30  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void videoDecBeginPut(anon_0* vd, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
    viBufBeginPut((anon_4*)((unsigned char*)vd + 0x48), ptr0, len0, ptr1, len1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 98–101 */
/* addr: 0x00132e40  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 98
 *   +0x0008 -> line 99
 *   +0x0010 -> line 101
 *   +0x0014 -> line 100
 *   +0x0018 -> line 101
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int videoDecSetStream(anon_0* vd, int strType, int ch, int (*cb)(anon_2*, anon_3*, void*), void* data)
{
    sceMpegAddStrCallback(vd, strType, ch, cb, data);
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\videodec.c lines 59–81 */
/* addr: 0x00132e60  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 59
 *   +0x0034 -> line 61
 *   +0x003c -> line 64
 *   +0x0054 -> line 66
 *   +0x006c -> line 68
 *   +0x0084 -> line 70
 *   +0x009c -> line 72
 *   +0x00b4 -> line 78
 *   +0x00d4 -> line 81
 *   +0x00d8 -> line 80
 *   +0x00dc -> line 81
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int videoDecCreate(anon_0* vd, unsigned char* mpegWork, int mpegWorkSize, long double* data, long double* tag, int tagSize, anon_1* pts, int n_pts)
{
    /* TODO: decompile from asm/... */
}
