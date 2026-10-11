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

typedef enum anon_enum_000308e8 {
    sceMpegCbError = 0,
    sceMpegCbNodata = 1,
    sceMpegCbStopDMA = 2,
    sceMpegCbRestartDMA = 3,
    sceMpegCbBackground = 4,
    sceMpegCbTimeStamp = 5,
    sceMpegCbStr = 6,
} anon_enum_000308e8;

struct anon_0 {
    int width; /* +0x0 */
    int height; /* +0x4 */
    int frameCount; /* +0x8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xc..0xf */
    long pts; /* +0x10 */
    long dts; /* +0x18 */
    unsigned long flags; /* +0x20 */
    long pts2nd; /* +0x28 */
    long dts2nd; /* +0x30 */
    unsigned long flags2nd; /* +0x38 */
    int sys; /* +0x40 */
};

struct anon_1 {
    anon_enum_000308e8 type; /* +0x0 */
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
    anon_4* ts; /* +0x50 */
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

int SND_VID_fn_iAddIOPData(unsigned char* pData, int iSize);
void switchThread(void);

/* MPEG stream callback: (sceMpeg* mp, sceMpegCbDataStr* str, void* data);
   only the stream data is used. */
int vagCallbackLeft(void* mp, anon_1* str, void* data)
{
    VID_g_iHasAudio = 1;
    while (SND_VID_fn_iAddIOPData((unsigned char*)str->data + 4, str->len - 4) < 0)
        switchThread();
    return 1;
}

void videoDecBeginPut(anon_6* vd, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
int videoDecPutTs(anon_6* vd, long pts_val, long dts_val, unsigned char* start, int len);
void videoDecEndPut(anon_6* vd, int size);
void ErrMessage(char* message);
void* memcpy(void* s1, const void* s2, size_t n);

#define UncAddr(val) ((unsigned char*)(((unsigned int)(val) & 0x0fffffff) | 0x20000000))
#define min(a, b) (((a) < (b)) ? (a) : (b))

/* ezmpeg read.c helper, inlined (no retail symbol). */
static inline int copy2(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
    if (d0 + d1 < s0 + s1)
        return 0;

    if (s0 >= d0)
    {
        memcpy(pd0, ps0, d0);
        memcpy(pd1, ps0 + d0, s0 - d0);
        memcpy(pd1 + s0 - d0, ps1, s1);
    }
    else
    {
        if (s1 >= d0 - s0)
        {
            memcpy(pd0, ps0, s0);
            memcpy(pd0 + s0, ps1, d0 - s0);
            memcpy(pd1, ps1 + d0 - s0, s1 - (d0 - s0));
        }
        else
        {
            memcpy(pd0, ps0, s0);
            memcpy(pd0 + s0, ps1, s1);
        }
    }
    return s0 + s1;
}

/* MPEG stream callback: (sceMpeg* mp, sceMpegCbDataStr* str, void* data);
   main.c's videoCallback pointer type confirms the leading sceMpeg* the
   debug signature omits. */
int videoCallback(void* mp, anon_1* str, void* data)
{
    int s1;
    unsigned char* pd0Unc;
    anon_3* rb = (anon_3*)data;
    unsigned char* ps0;
    unsigned char* pd1Unc;
    int s0;
    int len;
    unsigned char* pd0;
    unsigned char* pd1;
    int d0;
    int d1;

    ps0 = (unsigned char*)str->data;
    s0 = min(str->len, rb->data + rb->size - ps0);
    s1 = str->len - s0;

    videoDecBeginPut(&videoDec, &pd0, &d0, &pd1, &d1);
    pd0Unc = UncAddr(pd0);
    pd1Unc = UncAddr(pd1);

    len = copy2(pd0Unc, d0, pd1Unc, d1, ps0, s0, rb->data, s1);

    if (len > 0)
    {
        if (!videoDecPutTs(&videoDec, str->pts, str->dts, pd0, len))
            ErrMessage("pts buffer overflow\n");
    }

    videoDecEndPut(&videoDec, len);

    return (len > 0) ? 1 : 0;
}
