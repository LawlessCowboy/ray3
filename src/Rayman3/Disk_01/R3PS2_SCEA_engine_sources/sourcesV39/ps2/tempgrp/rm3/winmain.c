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

void SetPal60(void)
{
    if (g_eVideoMode == PAL_50) {
        g_eVideoMode = PAL_60;
        DISP_fMonitorfrequency = 60.0f;
    }
}

void SetPal50(void)
{
    if (g_eVideoMode == PAL_60) {
        g_eVideoMode = PAL_50;
        DISP_fMonitorfrequency = 50.0f;
    }
}

} /* extern "C" */
