/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\VID_Specif.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct VID_tdstVideoDescription_ VID_tdstVideoDescription_;
typedef struct VID_tdstGeneral_ VID_tdstGeneral_;
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

void VIDSPE_fn_vSetVideoQuality(unsigned char ucBPP, unsigned char ucVideoQuality);
static float gs_fVideoVolume;
/* aggregate */ int g_stVideoQuality;
VID_tdstGeneral_ VID_g_stGeneralVideos;

/* addr: 0x0012f590  size: 8 bytes */
void VID_fn_vSetVideoQuality(unsigned char ucBPP, unsigned char ucVideoQuality)
{
    VIDSPE_fn_vSetVideoQuality(ucBPP, ucVideoQuality);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\VID_Specif.c lines 81–86 */
/* addr: 0x0012f5a0  size: 140 bytes */
void VIDSPE_fn_vSetVideoSoundVolume(unsigned int ulVideoSoundVolume)
{
    /* line map: */
    /*   line 81 @ +0x000 */
    /*   line 83 @ +0x000 */
    /*   line 86 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\VID_Specif.c lines 53–67 */
/* addr: 0x0012f630  size: 128 bytes */
void VIDSPE_fn_vPlayVideoNow(char* p_szDirectFileName)
{
    int bInterrupt;
    int videoNb;
    char* p;
    char name[256];
    /* line map: */
    /*   line 53 @ +0x000 */
    /*   line 53 @ +0x000 */
    /*   line 56 @ +0x000 */
    /*   line 59 @ +0x000 */
    /*   line 67 @ +0x000 */
    /* TODO: decompile from asm/... */
}
