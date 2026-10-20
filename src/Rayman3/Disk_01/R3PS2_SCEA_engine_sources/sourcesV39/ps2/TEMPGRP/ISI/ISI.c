/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\ISI\ISI.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ISI_tdstISI_ ISI_tdstISI_;
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct ISI_tdstISILOD_ ISI_tdstISILOD_;

struct ISI_tdstISI_ {
    short xNbISILOD; /* +0x0 */
    ISI_tdstISILOD_* d_stISILOD; /* +0x4 */
};

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct ISI_tdstISILOD_ {
    short xNbVertexRLI; /* +0x0 */
    ISI_tdstColor_* d_stVertexRLI; /* +0x4 */
    int d_fLightMapU; /* +0x8 */
};

ISI_tdstColor_* g_p_stRawRLIsForThisObject;

/* Input-device layouts (shared with Ipt/ipt_main.c). */
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct stDevice stDevice;
typedef struct anon_0 anon_0;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct IPT_tdstPadReadingOutput_ IPT_tdstPadReadingOutput_;
typedef struct IPT_tdstDevice_ IPT_tdstDevice_;
typedef struct IPT_tdstInput_ IPT_tdstInput_;

struct anon_0 {
    unsigned char m_ucStatus; /* +0x0 */
};

struct stDevice {
    unsigned short m_uwType; /* +0x0 */
    short m_wPort; /* +0x2 */
    int m_p_stCaps; /* +0x4 */
    anon_0* m_p_stState; /* +0x8 */
    anon_0* m_p_stLastState; /* +0xc */
    short (*m_pfnRead)(stDevice*); /* +0x10 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct IPT_tdstPadReadingOutput_ {
    MTH3D_tdstVector_ stGlobalVector; /* +0x0 */
    short wHorizontalAxis; /* +0xc */
    short wVerticalAxis; /* +0xe */
    float xAnalogForce; /* +0x10 */
    float xTrueAnalogForce; /* +0x14 */
    float xRotationAngle; /* +0x18 */
    int lSector; /* +0x1c */
};

struct IPT_tdstDevice_ {
    unsigned char ucValideAndActiveDevice; /* +0x0 */
    unsigned char _extractor_padding_00[3]; /* +0x1..0x3 */
    stDevice* hDeviceHandle; /* +0x4 */
    unsigned char ucPadAndJoyCounter[44]; /* +0x8 */
    signed char cJoystickXmin; /* +0x34 */
    signed char cJoystickXmax; /* +0x35 */
    signed char cJoystickYmin; /* +0x36 */
    signed char cJoystickYmax; /* +0x37 */
    signed char cJoystickXcenter; /* +0x38 */
    signed char cJoystickYcenter; /* +0x39 */
    IPT_tdstEntryElement_* hJoystickAxeX; /* +0x3c */
    IPT_tdstEntryElement_* hJoystickAxeY; /* +0x40 */
    IPT_tdstEntryElement_* hJoystickAxeZ; /* +0x44 */
    IPT_tdstEntryElement_* hJoystickAxeR; /* +0x48 */
    IPT_tdstEntryElement_* hKeyUp; /* +0x4c */
    IPT_tdstEntryElement_* hKeyDown; /* +0x50 */
    IPT_tdstEntryElement_* hKeyLeft; /* +0x54 */
    IPT_tdstEntryElement_* hKeyRight; /* +0x58 */
    IPT_tdstEntryElement_* hKeySpeedUp; /* +0x5c */
    unsigned char bCancelKeyboardInertia; /* +0x60 */
    unsigned char _extractor_padding_01[3]; /* +0x61..0x63 */
    int hJoystickButtons[16]; /* +0x64 */
    int hKeyButtons[16]; /* +0xa4 */
    IPT_tdstPadReadingOutput_ stPadReadingOutput; /* +0xe4 */
};

struct IPT_tdstInput_ {
    unsigned char ucOnePadActivate; /* +0x0 */
    unsigned char _extractor_padding_00[3]; /* +0x1..0x3 */
    IPT_tdstDevice_ a_stDevice[18]; /* +0x4 */
};

extern IPT_tdstInput_ IPT_g_hInputStructure;
extern void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc);

unsigned char IPT_fn_ucGetFirstValidJoystick(void)
{
    unsigned char ucReturn;
    unsigned int i;
    ucReturn = 0xFF;
    for (i = 2; i < 0x12 && ucReturn == 0xFF; i++) {
        if (IPT_g_hInputStructure.a_stDevice[i].ucValideAndActiveDevice == 2) {
            ucReturn = (unsigned char)(i - 2);
        }
    }
    return ucReturn;
}

ISI_tdstColor_* ISI_fn_dGetVertexRLI(void* _hISI)
{
    return ((ISI_tdstISI_*)_hISI)->d_stISILOD->d_stVertexRLI;
}

int ISI_fn_dGetVertexRLILODLightMapU(void* _hISI, short _xNumISILOD)
{
    /* Permuter-found match (register allocation); the char* temporary and the
     * index assignment are not original source and need cleaning up. */
    char* pcLOD;
    int iIndex;
    ISI_tdstISI_* hISI;
    hISI = (ISI_tdstISI_*)_hISI;
    pcLOD = (char*)hISI->d_stISILOD;
    pcLOD = pcLOD + 8;
    return ((int*)pcLOD)[iIndex = (int)_xNumISILOD * 3];
}

ISI_tdstColor_* ISI_fn_dGetVertexRLILOD(void* _hISI, short _xNumISILOD)
{
    ISI_tdstISI_* hISI;
    char* pc;
    int iIndex;
    /* Matching idiom for the unfolded member offset (char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */

    hISI = (ISI_tdstISI_*)_hISI;
    pc = (char*)hISI->d_stISILOD;
    pc = pc + 4;
    g_p_stRawRLIsForThisObject = ((ISI_tdstColor_**)pc)[iIndex = (int)_xNumISILOD * 3];
    return g_p_stRawRLIsForThisObject;
}

short ISI_fn_xGetNbVertexRLILOD(void* _hISI, short _xNumISILOD)
{
    ISI_tdstISI_* hISI;

    hISI = (ISI_tdstISI_*)_hISI;
    return hISI->d_stISILOD[_xNumISILOD].xNbVertexRLI;
}

void ISI_fn_vFreeISI(void* _hISI)
{
    short xI;
    ISI_tdstISI_* hCpyISI;
    hCpyISI = (ISI_tdstISI_*)_hISI;
    for (xI = 0; xI < hCpyISI->xNbISILOD; xI++) {
        if (hCpyISI->d_stISILOD[xI].d_stVertexRLI != 0) {
            HMU_fn_vFree((void**)&hCpyISI->d_stISILOD[xI].d_stVertexRLI, 0);
        }
        if (hCpyISI->d_stISILOD[xI].d_fLightMapU != 0) {
            HMU_fn_vFree((void**)&hCpyISI->d_stISILOD[xI].d_fLightMapU, 0);
        }
    }
    HMU_fn_vFree((void**)&hCpyISI->d_stISILOD, 0);
    HMU_fn_vFree((void**)&hCpyISI, 0);
}
