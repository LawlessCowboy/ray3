/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Priv.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct VID_tdstVideoDescription_ VID_tdstVideoDescription_;
typedef struct VID_tdstGeneral_ VID_tdstGeneral_;

struct VID_tdstVideoDescription_ {
    int p_szVideoName; /* +0x0 */
    int p_szVideoFileName; /* +0x4 */
};

struct VID_tdstGeneral_ {
    unsigned int ulTrueNumberOfVideos; /* +0x0 */
    unsigned int ulNumberOfVideos; /* +0x4 */
    unsigned int ulNumberOfLanguages; /* +0x8 */
    int p_stVideos; /* +0xc */
    int a_stVideoLanguages; /* +0x10 */
    /* aggregate */ int stNextVideoToPlay; /* +0x14 */
};

unsigned char g_ucVIDModuleId;
VID_tdstGeneral_ VID_g_stGeneralVideos;

/* addr: 0x0012f590  size: 8 bytes */
/* Debug signature rejected: type-record data leaked into it. */
void VID_fn_vSetVideoQuality(void)
{
    /* TODO: decompile from asm/... */
}
