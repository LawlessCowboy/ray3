/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

static int gs_keepit2;
static int gs_keepit1;
static int gs_iWasPal60;
static int gs_pOrg;
static int s_iTexGlTable[16];
static unsigned int EndFrame;
static unsigned int OldStart;
static unsigned int StartFrame;
int VID_g_iHasAudio;

/* Engine and PS2GL entry points used by this unit. */
void PS2MC_fn_vUpdateStatus(void);
int vagSynchroToWait(void);
void GLI_fn_vTimerPS2Counter(unsigned int* pTimer);
void GLI_DRV_vSetCommonGLRenderStates(void);
void GLI_vRestoreVideoModeAfterVideos(void);
void GLI_vChangeVideoModeForVideos(void);
void vagUpdateSound(void);
void switchThread(void);
void FlushCache(int address);
void PS2auxSwapBuffers(void);
void fn_vFreeInBinaryPreservingTheCurrentMode(void* p);
void fn_vConvertIpuToTex(char* dst, char* src, int width, int height, int width_to_copy, unsigned int x0);
void fn_vFeedTexToGl(unsigned char texNumber, void* pTexture, unsigned int width, unsigned int height, int x0, int y0, int x1, int y1);
void PS2glEnable(unsigned int target);
void PS2glBindTexture(unsigned int target, unsigned int texture);
void PS2glTexImage2D(unsigned int target, int level, int components, int width, int height, int border, unsigned int format, unsigned int type, void* pixels);
void PS2glTexParameteri(unsigned int target, unsigned int pname, int param);
void PS2glDisable(unsigned int cap);
void PS2glDepthMask(unsigned char flag);
void PS2glMatrixMode(unsigned int mode);
void PS2glLoadIdentity(void);
void PS2glBegin(unsigned int mode);
void PS2glColor3f(float red, float green, float blue);
void PS2glColor4f(float red, float green, float blue, float alpha);
void PS2glTexCoord2f(float s, float t);
void PS2glVertex2f(float x, float y);
void PS2glClearColor(float red, float green, float blue, float alpha);
void PS2glClear(unsigned int mask);
void PS2glColorMask(int red, int green, int blue, int alpha);
void PS2glBlendFunc(unsigned int src, unsigned int dst);
void PS2glOrtho(float left, float right, float bottom, float top, float zNear, float zFar);
void PS2glFlush(void);
void PS2glFinish(void);
void PS2glEnd(void);
void PS2glDeleteTextures(int n, int* textures);
void PS2glGenTextures(int n, int* textures);
void PS2glHint(unsigned int target, unsigned int mode);
/* Debug info says void; the allocation is returned in $v0. */
void* fn_pvMallocInBinaryPreservingTheCurrentMode(unsigned int size);


/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 519–579 */
/* addr: 0x0012f6f0  size: 796 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 519
 *   +0x0004 -> line 523
 *   +0x0008 -> line 519
 *   +0x000c -> line 523
 *   +0x0010 -> line 519
 *   +0x003c -> line 523
 *   +0x0080 -> line 529
 *   +0x0088 -> line 533
 *   +0x0098 -> line 535
 *   +0x009c -> line 536
 *   +0x00a8 -> line 537
 *   +0x00b0 -> line 549
 *   +0x00b4 -> line 548
 *   +0x00bc -> line 550
 *   +0x00c0 -> line 549
 *   +0x00c4 -> line 550
 *   +0x00c8 -> line 549
 *   +0x00cc -> line 550
 *   +0x016c -> line 552
 *   +0x0174 -> line 554
 *   +0x0184 -> line 556
 *   +0x0198 -> line 557
 *   +0x01b4 -> line 561
 *   +0x01fc -> line 566
 *   +0x0210 -> line 569
 *   +0x02d8 -> line 573
 *   +0x02e4 -> line 574
 *   +0x02ec -> line 579
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDisplayImage(void* _p_ImageBuffer, unsigned int _ulWidth, unsigned int _ulHeight)
{
    char* p_cTextures;
    int i;
    float fImage2ScreenRatioX;
    int iSync;
    int iTexWidth;
    int nbTex;

    fImage2ScreenRatioX = 640.0f / (float)_ulWidth;
    PS2MC_fn_vUpdateStatus();
    if (vagSynchroToWait() < 0)
    {
        OldStart = StartFrame;
        GLI_fn_vTimerPS2Counter(&StartFrame);
        return;
    }
    nbTex = (int)((_ulWidth + 0x3F) >> 6);
    p_cTextures = (char*)(((int)gs_pOrg + 0x3F) & ~0x3F);
    PS2glHint(0xF09, 1);
    PS2glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    PS2glColorMask(1, 1, 1, 1);
    PS2glDepthMask(1);
    PS2glDisable(0xB50);
    PS2glClear(0x4100);
    PS2glDepthMask(0);
    PS2glMatrixMode(0x1701);
    PS2glLoadIdentity();
    PS2glOrtho(0.0f, 640.0f, 480.0f, 0.0f, -1.0f, 1.0f);
    PS2glMatrixMode(0x1700);
    PS2glLoadIdentity();
    FlushCache(0);
    for (i = 0; i < nbTex; i++)
    {
        iTexWidth = (int)(_ulWidth - i * 64);
        if ((unsigned int)(_ulWidth - i * 64) > 64)
        {
            iTexWidth = 64;
        }
        fn_vConvertIpuToTex(p_cTextures, (char*)_p_ImageBuffer, 64, (int)_ulHeight, iTexWidth, i * 64);
        fn_vFeedTexToGl((unsigned char)i, p_cTextures, (unsigned int)iTexWidth, (unsigned int)_ulHeight,
                        (int)(fImage2ScreenRatioX * (float)(i * 64)), 0,
                        (int)(fImage2ScreenRatioX * (float)(i * 64 + iTexWidth)), 448);
    }
    PS2glDepthMask(1);
    iSync = vagSynchroToWait();
    if (iSync >= 0)
    {
        do
        {
            switchThread();
            GLI_fn_vTimerPS2Counter(&EndFrame);
        } while (((float)(EndFrame - StartFrame) / 4915200.0f) < ((float)iSync + 1.1f));
        PS2glFlush();
        PS2glFinish();
        PS2auxSwapBuffers();
    }
    OldStart = StartFrame;
    GLI_fn_vTimerPS2Counter(&StartFrame);
    if (VID_g_iHasAudio)
    {
        vagUpdateSound();
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 425–509 */
/* addr: 0x0012fa10  size: 2364 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 425
 *   +0x0004 -> line 433
 *   +0x0008 -> line 425
 *   +0x0034 -> line 433
 *   +0x0038 -> line 425
 *   +0x003c -> line 443
 *   +0x004c -> line 444
 *   +0x005c -> line 451
 *   +0x0064 -> line 459
 *   +0x0078 -> line 467
 *   +0x0090 -> line 469
 *   +0x00d4 -> line 470
 *   +0x00d8 -> line 469
 *   +0x00dc -> line 474
 *   +0x00e0 -> line 469
 *   +0x00e4 -> line 472
 *   +0x00e8 -> line 471
 *   +0x00ec -> line 474
 *   +0x00fc -> line 476
 *   +0x0104 -> line 477
 *   +0x0110 -> line 479
 *   +0x0118 -> line 481
 *   +0x0128 -> line 483
 *   +0x0138 -> line 484
 *   +0x0140 -> line 490
 *   +0x0294 -> line 491
 *   +0x03e8 -> line 492
 *   +0x03f0 -> line 493
 *   +0x03f4 -> line 492
 *   +0x0400 -> line 493
 *   +0x0404 -> line 492
 *   +0x0418 -> line 493
 *   +0x041c -> line 492
 *   +0x0420 -> line 493
 *   +0x0424 -> line 492
 *   +0x0428 -> line 493
 *   +0x042c -> line 492
 *   +0x0438 -> line 493
 *   +0x043c -> line 492
 *   +0x0440 -> line 493
 *   +0x0444 -> line 492
 *   +0x0448 -> line 493
 *   +0x044c -> line 492
 *   +0x0450 -> line 493
 *   +0x0454 -> line 492
 *   +0x0458 -> line 495
 *   +0x045c -> line 493
 *   +0x0460 -> line 494
 *   +0x0464 -> line 493
 *   +0x0470 -> line 496
 *   +0x0474 -> line 493
 *   +0x0478 -> line 494
 *   +0x047c -> line 493
 *   +0x0480 -> line 494
 *   +0x0484 -> line 493
 *   +0x0498 -> line 497
 *   +0x04a4 -> line 498
 *   +0x04a8 -> line 499
 *   +0x04ac -> line 500
 *   +0x04c0 -> line 501
 *   +0x04d0 -> line 502
 *   +0x061c -> line 503
 *   +0x0768 -> line 504
 *   +0x07bc -> line 505
 *   +0x090c -> line 506
 *   +0x0914 -> line 509
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vConvertIpuToTex(char* dst, char* src, int width, int height, int width_to_copy, unsigned int x0)
{
    char* olddest;
    char* spraddrold;
    char* spraddr;
    int h_leftold;
    int h_left;
    int j;
    int i;
    int h;
    int w;

    /* The destination carries the IPU tag in its top bits. */
    olddest = dst;
    dst = (char*)((unsigned int)dst | 0x30000000);
    w = width_to_copy / 16;
    h_left = height / 16;
    FlushCache(0);
    memset((void*)0x70000000, 0, 0x3FFF);
    /* GS DMA tag block used to upload the converted picture. */
    spraddrold = (char*)0x1000D400;
    spraddr = (char*)0x1000D410;
    h_leftold = h_left;
    *(unsigned int*)0x1000D410 = ((unsigned int)src + (((x0 >> 4) * h_left) << 10)) & 0x0FFFFFF0;
    *(unsigned int*)0x1000D480 = 0;
    *(unsigned int*)0x1000D420 = ((h_left < 8 ? h_left : 8) << 10) >> 4;
    *(unsigned int*)0x1000D400 = 0x100;
    for (i = 0; i < w; i++)
    {
        for (j = 0; j < h_left; j++)
        {
            h = h_left - j;
            if (h > 8)
            {
                h = 8;
            }
            *(unsigned int*)0x1000D410 = ((unsigned int)src + ((j + h_left * (i + (x0 >> 4))) << 10)) & 0x0FFFFFF0;
            *(unsigned int*)0x1000D480 = (h_left * 0x400) & 0x3FF0;
            *(unsigned int*)0x1000D420 = (h << 10) >> 4;
            *(unsigned int*)0x1000D400 = 0x100;
            /* TODO: the IPU tag chain and the per-pixel dither table update
               (gs_keepit1 / gs_keepit2) are still missing here. */
        }
    }
    /* TODO: the GS FIFO wait loops and the final dither table update. */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 328–378 */
/* addr: 0x00130350  size: 728 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 328
 *   +0x004c -> line 331
 *   +0x0058 -> line 332
 *   +0x0078 -> line 336
 *   +0x00a0 -> line 338
 *   +0x00b0 -> line 339
 *   +0x00c0 -> line 341
 *   +0x00d0 -> line 342
 *   +0x00e0 -> line 344
 *   +0x00e8 -> line 345
 *   +0x00f0 -> line 346
 *   +0x00f8 -> line 347
 *   +0x0100 -> line 348
 *   +0x0108 -> line 349
 *   +0x0110 -> line 350
 *   +0x0118 -> line 351
 *   +0x0120 -> line 353
 *   +0x0128 -> line 355
 *   +0x0140 -> line 356
 *   +0x014c -> line 357
 *   +0x0164 -> line 359
 *   +0x01b4 -> line 360
 *   +0x01cc -> line 362
 *   +0x0218 -> line 363
 *   +0x0230 -> line 365
 *   +0x023c -> line 366
 *   +0x0254 -> line 368
 *   +0x0260 -> line 369
 *   +0x0278 -> line 371
 *   +0x0284 -> line 372
 *   +0x029c -> line 375
 *   +0x02a4 -> line 378
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vFeedTexToGl(unsigned char _ucTexNumber, void* _p_vTexture, unsigned int _ulWidth, unsigned int _ulHeight, int x0, int y0f, int x1, int y1f)
{
    PS2glEnable(0xDE1);
    PS2glBindTexture(0xDE1, s_iTexGlTable[_ucTexNumber]);
    PS2glTexImage2D(0xDE1, 0, 0x1908, 0x40, 0x200, 0, 0x1908, 0x1401, _p_vTexture);
    PS2glTexParameteri(0xDE1, 0x2802, 0x2900);
    PS2glTexParameteri(0xDE1, 0x2803, 0x2900);
    PS2glTexParameteri(0xDE1, 0x2800, 0x2601);
    PS2glTexParameteri(0xDE1, 0x2801, 0x2601);
    PS2glDisable(0xB44);
    PS2glDisable(0xBC0);
    PS2glDisable(0xB71);
    PS2glDisable(0xB50);
    PS2glDisable(0xBE2);
    PS2glDepthMask(0);
    PS2glMatrixMode(0x1702);
    PS2glLoadIdentity();
    PS2glBegin(4);
    PS2glColor3f(0.5f, 0.5f, 0.5f);
    PS2glTexCoord2f(0.0f, 0.0f);
    PS2glVertex2f((float)x0, (float)y0f);
    PS2glTexCoord2f(0.0f, (float)_ulHeight / 512.0f);
    PS2glVertex2f((float)x0, (float)y1f);
    PS2glTexCoord2f((float)_ulWidth / 64.0f, (float)_ulHeight / 512.0f);
    PS2glVertex2f((float)x1, (float)y1f);
    PS2glTexCoord2f(0.0f, 0.0f);
    PS2glVertex2f((float)x0, (float)y0f);
    PS2glTexCoord2f((float)_ulWidth / 64.0f, (float)_ulHeight / 512.0f);
    PS2glVertex2f((float)x1, (float)y1f);
    PS2glTexCoord2f((float)_ulWidth / 64.0f, 0.0f);
    PS2glVertex2f((float)x1, (float)y0f);
    PS2glEnd();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 124–196 */
/* addr: 0x00130630  size: 576 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 124
 *   +0x000c -> line 128
 *   +0x0010 -> line 132
 *   +0x0018 -> line 133
 *   +0x0020 -> line 134
 *   +0x0048 -> line 135
 *   +0x0050 -> line 136
 *   +0x0058 -> line 140
 *   +0x0060 -> line 142
 *   +0x0068 -> line 143
 *   +0x0070 -> line 144
 *   +0x0078 -> line 145
 *   +0x0080 -> line 146
 *   +0x0088 -> line 147
 *   +0x0090 -> line 148
 *   +0x0098 -> line 149
 *   +0x00a0 -> line 150
 *   +0x00b4 -> line 151
 *   +0x00bc -> line 152
 *   +0x00c4 -> line 153
 *   +0x00d0 -> line 155
 *   +0x00d8 -> line 156
 *   +0x00e0 -> line 157
 *   +0x00f8 -> line 158
 *   +0x0104 -> line 159
 *   +0x011c -> line 160
 *   +0x0130 -> line 161
 *   +0x0148 -> line 162
 *   +0x0158 -> line 163
 *   +0x0170 -> line 164
 *   +0x017c -> line 165
 *   +0x0194 -> line 166
 *   +0x01a4 -> line 167
 *   +0x01bc -> line 168
 *   +0x01d0 -> line 169
 *   +0x01d8 -> line 171
 *   +0x01ec -> line 174
 *   +0x01f4 -> line 175
 *   +0x01fc -> line 178
 *   +0x0204 -> line 179
 *   +0x0214 -> line 181
 *   +0x0220 -> line 182
 *   +0x0228 -> line 194
 *   +0x0230 -> line 196
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DesinitGlDevice(void)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        PS2glMatrixMode(0x1701);
        PS2glLoadIdentity();
        /* The near plane is spelled as a difference: MWCC then materialises
           the -1.0f constant before the 1.0f one, as the retail code does
           (a plain -1.0f literal is loaded last). */
        PS2glOrtho(0.0f, 100.0f, 100.0f, 0.0f, (0.0f - 1.0f), 1.0f);
        PS2glMatrixMode(0x1700);
        PS2glLoadIdentity();
        GLI_DRV_vSetCommonGLRenderStates();
        PS2glDisable(0xB71);
        PS2glDisable(0xB57);
        PS2glDisable(0xDE1);
        PS2glDisable(0xBC0);
        PS2glDisable(0xB50);
        PS2glDisable(0xB60);
        PS2glDisable(0xC11);
        PS2glDisable(0xB44);
        PS2glColorMask(1, 1, 1, 1);
        PS2glDepthMask(0);
        PS2glEnable(0xBE2);
        PS2glBlendFunc(0x302, 0x303);
        PS2glEnable(0xBE2);
        PS2glBegin(4);
        PS2glColor4f(0.0f, 0.0f, 0.0f, 1.0f);
        PS2glVertex2f(0.0f, 0.0f);
        PS2glColor4f(0.0f, 0.0f, 0.0f, 1.0f);
        PS2glVertex2f(100.0f, 0.0f);
        PS2glColor4f(0.0f, 0.0f, 0.0f, 1.0f);
        PS2glVertex2f(100.0f, 100.0f);
        PS2glColor4f(0.0f, 0.0f, 0.0f, 1.0f);
        PS2glVertex2f(0.0f, 0.0f);
        PS2glColor4f(0.0f, 0.0f, 0.0f, 1.0f);
        PS2glVertex2f(100.0f, 100.0f);
        PS2glColor4f(0.0f, 0.0f, 0.0f, 1.0f);
        PS2glVertex2f(0.0f, 100.0f);
        PS2glEnd();
        PS2glColorMask(1, 1, 1, 0);
        PS2glFlush();
        PS2glFinish();
        PS2auxSwapBuffers();
    }
    PS2glDeleteTextures(16, s_iTexGlTable);
    fn_vFreeInBinaryPreservingTheCurrentMode((void*)gs_pOrg);
    GLI_vRestoreVideoModeAfterVideos();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 92–119 */
/* addr: 0x00130870  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 92
 *   +0x0008 -> line 108
 *   +0x0010 -> line 110
 *   +0x001c -> line 111
 *   +0x0028 -> line 114
 *   +0x0034 -> line 118
 *   +0x0038 -> line 114
 *   +0x003c -> line 118
 *   +0x0048 -> line 119
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void InitGlDevice(void)
{















    GLI_vChangeVideoModeForVideos();

    PS2glHint(0x450, 3);
    PS2glHint(0x444, 0);


    gs_pOrg = (int)fn_pvMallocInBinaryPreservingTheCurrentMode(0x20040);



    PS2glGenTextures(16, s_iTexGlTable);
}
