/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\gameitf.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;

struct GLI_tdstSpecificAttributesFor3D_ {
    int p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

short g_h_AllCm_MainDisplayDevice;
short g_h_AllCm_MainDisplayViewPort;
GLI_tdstSpecificAttributesFor3D_ g_st_AllCm_Attributes3D;
unsigned int g_ulWidth;
unsigned int g_ulHeigh;
unsigned int g_ulDeviceMode;

void fn_v_EngMain_EmptyFunction__Fv(void)
{
}

short fn_hGetGLDDevice(void)
{
    return g_h_AllCm_MainDisplayDevice;
}
