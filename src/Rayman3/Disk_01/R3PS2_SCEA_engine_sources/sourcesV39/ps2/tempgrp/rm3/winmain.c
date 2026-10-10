/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\winmain.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

/* The debug records mark this .c unit as C++: main's function-local static
 * counter carries a C++ init guard (init$544). Everything keeps C linkage. */
#pragma cplusplus on

#include <stddef.h>

extern "C" {

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stRECT stRECT;
typedef struct stPOINT stPOINT;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;

typedef enum tdeVideoMode {
    VGA = 0,
    NTSC = 1,
    PAL_50 = 2,
    PAL_60 = 3,
} tdeVideoMode;

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

struct GLD_tdstDeviceAttributes_ {
    unsigned int dwHeight; /* +0x0 */
    unsigned int dwWidth; /* +0x4 */
    float xPixelDimensionX; /* +0x8 */
    float xPixelDimensionY; /* +0xc */
    int p_cVirtualScreen; /* +0x10 */
    int lPitch; /* +0x14 */
    int p_sZBuffer; /* +0x18 */
    unsigned int dwFullScreenModeX; /* +0x1c */
    unsigned int dwFullScreenModeY; /* +0x20 */
    unsigned int dwFullScreenModeBpp; /* +0x24 */
    int hFullScreenModeWnd; /* +0x28 */
    int hNormalModeWnd; /* +0x2c */
    int bFullScreen; /* +0x30 */
    unsigned int uiTypeDriver; /* +0x34 */
    stPOINT pClientOnPrimary; /* +0x38 */
    stRECT rtClientRect; /* +0x40 */
    stRECT rtWindowRect; /* +0x50 */
};

int g_iGlobalCtrlVmsLanguage;
float DISP_fMonitorfrequency;
tdeVideoMode g_eVideoMode;
short g_hDeviceHandle;
short g_hViewport;
int MONGROSMALLOCAMOI;
char SPRINTF_DEBUG_STRING1[128];
char SPRINTF_DEBUG_STRING2[128];
int PS2glReallocator;
void* PS2GL_realloc(void*, unsigned int);
int PS2glLiberator;
void PS2GL_free(void*);
int PS2glAllocator64;
void* PS2GL_malloc(unsigned int);
int PS2glAllocator;
extern char end[];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\winmain.c lines 365–774 */
/* addr: 0x0012c020  size: 1092 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 365
 *   +0x0014 -> line 374
 *   +0x001c -> line 376
 *   +0x00bc -> line 419
 *   +0x00ec -> line 502
 *   +0x0118 -> line 503
 *   +0x014c -> line 509
 *   +0x0178 -> line 510
 *   +0x01ac -> line 516
 *   +0x01d8 -> line 517
 *   +0x020c -> line 523
 *   +0x0238 -> line 524
 *   +0x026c -> line 534
 *   +0x0270 -> line 537
 *   +0x0274 -> line 534
 *   +0x0278 -> line 543
 *   +0x02cc -> line 544
 *   +0x02dc -> line 555
 *   +0x02e4 -> line 558
 *   +0x02e8 -> line 556
 *   +0x02ec -> line 558
 *   +0x02f0 -> line 556
 *   +0x02f4 -> line 558
 *   +0x02f8 -> line 559
 *   +0x02fc -> line 556
 *   +0x0300 -> line 559
 *   +0x0304 -> line 557
 *   +0x0308 -> line 563
 *   +0x0318 -> line 565
 *   +0x0324 -> line 567
 *   +0x032c -> line 580
 *   +0x0338 -> line 597
 *   +0x0344 -> line 638
 *   +0x0350 -> line 639
 *   +0x0358 -> line 641
 *   +0x0370 -> line 642
 *   +0x037c -> line 645
 *   +0x0384 -> line 648
 *   +0x0390 -> line 651
 *   +0x03ac -> line 652
 *   +0x03b4 -> line 655
 *   +0x03bc -> line 670
 *   +0x03c8 -> line 679
 *   +0x03d0 -> line 681
 *   +0x03d8 -> line 682
 *   +0x03e0 -> line 686
 *   +0x03e8 -> line 687
 *   +0x03f0 -> line 689
 *   +0x03f8 -> line 693
 *   +0x0400 -> line 697
 *   +0x0418 -> line 767
 *   +0x0420 -> line 768
 *   +0x0428 -> line 774
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2_fn_vCreatemallocCriticalSection(void);
unsigned int PS2_fn_uiGetStackBaseAddress(void);
int printf(const char* format, ...);
int sprintf(char* s, const char* format, ...);
void* malloc(size_t size);
void free(void* ptr);
void exit(int status);
float sinf(float x);
float cosf(float x);
void PS2GL_vInitMemoryBloc(void);
int PS2_fn_lInit(void);
void GLI_PrintDebugString(char* szString);
void fn_v_EngMain_ModuleInit(void);
void fn_vSetGameDataPath(char* szPath);
void fn_v_EngMain_GlobalInitBeforeCreateFrame(void);
int GLD_bCreateDevice(GLD_tdstDeviceAttributes_* p_stDevAttrib, short* p_hDevice);
void fn_v_EngMain_GlobalInitAfterCreateFrame(void);
void PS2_fn_vInitThreads(void);
void PS2_fn_vCreateDisplaySemaphore(void);
void PS2_fn_vCreateSwitchSemaphores(void);
void PS2_fn_vCreateGLCriticalSection(void);
void PS2_fn_vCreateTransitionSemaphores(void);
void PS2_fn_v_CreateTransitionThread(void);
void PS2_fn_v_CreateEngineThread(void);
void PS2_fn_vThreadSwitch(void);

int main(void)
{
    int i;
    double ff;
    GLD_tdstDeviceAttributes_ stDevAttrib;

    PS2_fn_vCreatemallocCriticalSection();
    {
        void* p_vMem;
        int lStep;
        int lSize;

        lStep = 0x100000;
        lSize = PS2_fn_uiGetStackBaseAddress() - (int)end;
        printf("%d\n", lSize);
        do
        {
            p_vMem = malloc(lSize);
            if (p_vMem)
            {
                free(p_vMem);
            }
            else
            {
                lSize -= lStep;
                if (lSize <= 0x2000000)
                    lStep = lSize / 1024 / 8;
            }
        } while (!p_vMem);
        printf("%d\n", lSize);
    }
    printf("current stack base address : 0x%08x\n", PS2_fn_uiGetStackBaseAddress());
    printf("resulting heap size : 0x%08x\n", PS2_fn_uiGetStackBaseAddress() - (int)end);

    sprintf(SPRINTF_DEBUG_STRING1, "coucoucou 0%10.5f", 13246.513f);
    sprintf(SPRINTF_DEBUG_STRING2, "%s 0%10.5f", SPRINTF_DEBUG_STRING1, 13246.513f);
    sprintf(SPRINTF_DEBUG_STRING1, "coucoucou 0%10.5f", 13246.513f);
    sprintf(SPRINTF_DEBUG_STRING2, "%s 0%12.5f", SPRINTF_DEBUG_STRING1, 13246.513f);
    sprintf(SPRINTF_DEBUG_STRING1, "coucoucou 0%10.5f", 13246.513f);
    sprintf(SPRINTF_DEBUG_STRING2, "%s 0%20.10f 0%20.10lf", SPRINTF_DEBUG_STRING1, 13246457.0f, 13246457.0f);
    sprintf(SPRINTF_DEBUG_STRING1, "coucoucou 0%10.5f", 13246.513f);
    sprintf(SPRINTF_DEBUG_STRING2, "%s 0%10.5f", SPRINTF_DEBUG_STRING1, 13246.513f);

    ff = 1.5;
    for (i = 0; i < 32766; i++)
        ff += cosf(ff + sinf((double)i));

    PS2GL_vInitMemoryBloc();
    PS2glLiberator = (int)PS2GL_free;
    PS2glAllocator = (int)PS2GL_malloc;
    PS2glAllocator64 = (int)PS2GL_malloc;
    PS2glReallocator = (int)PS2GL_realloc;

    if (!PS2_fn_lInit())
    {
        printf("ps2 init failed");
        exit(-1);
    }

    GLI_PrintDebugString("Change NOW !!!!");
    GLI_PrintDebugString("LOADING GAME !!");
    GLI_PrintDebugString("MODULE INIT");
    fn_v_EngMain_ModuleInit();
    GLI_PrintDebugString("SetGameDataPath");
    fn_vSetGameDataPath("DATA");
    GLI_PrintDebugString("GLOBAL INIT");
    fn_v_EngMain_GlobalInitBeforeCreateFrame();
    GLI_PrintDebugString("MAIN DISPLAY");
    if (!(GLD_bCreateDevice(&stDevAttrib, &g_hDeviceHandle) ? 1 : 0))
        return 0;
    fn_v_EngMain_GlobalInitAfterCreateFrame();
    GLI_PrintDebugString("MAIN LOOP");
    PS2_fn_vInitThreads();
    PS2_fn_vCreateDisplaySemaphore();
    PS2_fn_vCreateSwitchSemaphores();
    PS2_fn_vCreateGLCriticalSection();
    PS2_fn_vCreateTransitionSemaphores();
    PS2_fn_v_CreateTransitionThread();
    PS2_fn_v_CreateEngineThread();

    for (;;)
    {
        static int counter = 0;
        PS2_fn_vThreadSwitch();
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\winmain.c lines 135–141 */
/* addr: 0x0012c470  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 135
 *   +0x0010 -> line 139
 *   +0x0014 -> line 137
 *   +0x0018 -> line 139
 *   +0x001c -> line 141
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SetPal60(void)
{
    if (g_eVideoMode == PAL_50) {
        g_eVideoMode = PAL_60;
        DISP_fMonitorfrequency = 60.0f;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\winmain.c lines 125–131 */
/* addr: 0x0012c4a0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 125
 *   +0x0010 -> line 129
 *   +0x0014 -> line 127
 *   +0x0018 -> line 129
 *   +0x001c -> line 131
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SetPal50(void)
{
    if (g_eVideoMode == PAL_60) {
        g_eVideoMode = PAL_50;
        DISP_fMonitorfrequency = 50.0f;
    }
}

} /* extern "C" */
