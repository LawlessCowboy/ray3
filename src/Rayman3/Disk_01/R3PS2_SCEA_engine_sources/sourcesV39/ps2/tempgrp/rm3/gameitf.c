/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\gameitf.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;

struct GLI_tdstSpecificAttributesFor3D_ {
    int p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

short g_h_AllCm_MainDisplayDevice;
short g_h_AllCm_MainDisplayViewPort;
GLI_tdstSpecificAttributesFor3D_ g_st_AllCm_Attributes3D;
unsigned int g_ulWidth;
unsigned int g_ulHeigh;
unsigned int g_ulDeviceMode;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\gameitf.c lines 51–51 */
/* addr: 0x0012c000  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 51
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_EngMain_EmptyFunction__Fv(void)
{
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\gameitf.c lines 44–44 */
/* addr: 0x0012c010  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 44
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short fn_hGetGLDDevice(void)
{
    return g_h_AllCm_MainDisplayDevice;
}
