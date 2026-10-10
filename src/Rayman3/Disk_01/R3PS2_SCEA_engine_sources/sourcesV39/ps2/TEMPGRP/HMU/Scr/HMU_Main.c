/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Main.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstBlockInfo_ tdstBlockInfo_;

struct tdstBlockInfo_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
};

unsigned char g_ucHMUModuleId;
/* aggregate */ int HMU_g_stMemoryStructure;
tdstBlockInfo_ g_a_stHMUBlocksInfo[9];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Main.c lines 197–241 */
/* addr: 0x002ed560  size: 452 bytes */
/* Debug signature rejected: type-record data leaked into it. */
typedef struct {
    unsigned DIR : 1;
    unsigned p0 : 1;
    unsigned MOD : 2;
    unsigned ASP : 2;
    unsigned TTE : 1;
    unsigned TIE : 1;
    unsigned STR : 1;
    unsigned p1 : 7;
    unsigned TAG : 16;
} tD_CHCR;

typedef struct {
    tD_CHCR chcr;
} sceDmaChan;

typedef struct {
    unsigned long data[14];
} __attribute__((aligned(16))) sceGsStoreImage;

void* malloc(size_t size);
void free(void* ptr);
sceDmaChan* sceDmaGetChan(int id);
int sceGsSetDefStoreImage(sceGsStoreImage* sp, short sbp, short sbw, short spsm, short x, short y, short w, short h);
int sceGsExecStoreImage(sceGsStoreImage* sp, void* dstaddr);
int sceGsSyncPath(int mode, unsigned short timeout);
void FlushCache(int operation);
void InvalidDCache(void* start, void* end);

void GLI_vGsStoreFrameBufferInto128x128x16__FPUssiis(unsigned short* _DestinationBuffer, short vram, int WIDTH, int HEIGHT, short CurrentPSM)
{
    sceGsStoreImage StoreImage;
    unsigned char* p_ucLine;
    unsigned char* p_ucPixel;
    sceDmaChan* p_stDmaVif;
    int y;
    int iLine;
    unsigned int x;
    int iColumn;

    p_ucLine = (unsigned char*)malloc(WIDTH * 4);
    p_stDmaVif = sceDmaGetChan(1);
    sceDmaGetChan(2);
    if (CurrentPSM == 0x31)
        CurrentPSM = 0x30;
    if (CurrentPSM == 1)
        CurrentPSM = 0;
    for (y = 0, iLine = 0; y < 256; y += 2, iLine++)
    {
        sceGsSetDefStoreImage(&StoreImage, vram, WIDTH / 64, CurrentPSM, 0, y, WIDTH, 1);
        FlushCache(0);
        sceGsExecStoreImage(&StoreImage, p_ucLine);
        sceGsSyncPath(0, 0);
        InvalidDCache(p_ucLine, p_ucLine + WIDTH * 4);
        p_stDmaVif->chcr.TTE = 1;
        p_ucPixel = p_ucLine;
        for (x = 0, iColumn = 0; x < 256; x += 2, iColumn++)
        {
            _DestinationBuffer[iColumn + iLine * 128] = ((unsigned int)p_ucPixel[0] >> 3) + ((((unsigned int)p_ucPixel[2] >> 3) << 10) + 0x8000 + (((unsigned int)p_ucPixel[1] >> 3) << 5));
            p_ucPixel += 8;
        }
    }
    free(p_ucLine);
}
