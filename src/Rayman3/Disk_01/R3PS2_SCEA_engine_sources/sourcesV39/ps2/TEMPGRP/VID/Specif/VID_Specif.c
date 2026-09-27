/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\VID_Specif.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct VID_tdstVideoLanguageDescription_ VID_tdstVideoLanguageDescription_;
typedef struct tdstVideoQuality_ tdstVideoQuality_;
typedef struct VID_tdstVideoDescription_ VID_tdstVideoDescription_;
typedef struct VID_tdstNextVideoToPlay_ VID_tdstNextVideoToPlay_;
typedef struct VID_tdstGeneral_ VID_tdstGeneral_;

struct VID_tdstVideoLanguageDescription_ {
    int szAudioFileNameSuffix; /* +0x0 */
};

struct tdstVideoQuality_ {
    unsigned char ucTransfertQuality; /* +0x0 */
};

struct VID_tdstVideoDescription_ {
    int p_szVideoName; /* +0x0 */
    int p_szVideoFileName; /* +0x4 */
};

struct VID_tdstNextVideoToPlay_ {
    unsigned char ucVideoNumber; /* +0x0 */
    unsigned char bCanBeInterrupt; /* +0x1 */
    unsigned char bLoop; /* +0x2 */
    unsigned char bPlayAfterLevel; /* +0x3 */
};

struct VID_tdstGeneral_ {
    unsigned int ulTrueNumberOfVideos; /* +0x0 */
    unsigned int ulNumberOfVideos; /* +0x4 */
    unsigned int ulNumberOfLanguages; /* +0x8 */
    VID_tdstVideoDescription_* p_stVideos; /* +0xc */
    VID_tdstVideoLanguageDescription_* a_stVideoLanguages; /* +0x10 */
    VID_tdstNextVideoToPlay_ stNextVideoToPlay; /* +0x14 */
};

static float gs_fVideoVolume;
tdstVideoQuality_ g_stVideoQuality;
VID_tdstGeneral_ VID_g_stGeneralVideos;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\VID_Specif.c lines 80–86 */
/* addr: 0x0012f5a0  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 80
 *   +0x0040 -> line 81
 *   +0x0058 -> line 82
 *   +0x0060 -> line 83
 *   +0x007c -> line 84
 *   +0x0080 -> line 86
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VIDSPE_fn_vSetVideoSoundVolume(unsigned int ulVideoSoundVolume)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\VID_Specif.c lines 51–68 */
/* addr: 0x0012f630  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 51
 *   +0x0004 -> line 53
 *   +0x0008 -> line 51
 *   +0x0010 -> line 53
 *   +0x0014 -> line 54
 *   +0x0018 -> line 56
 *   +0x0020 -> line 57
 *   +0x0028 -> line 59
 *   +0x0044 -> line 65
 *   +0x0060 -> line 67
 *   +0x0070 -> line 68
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VIDSPE_fn_vPlayVideoNow(char* p_szDirectFileName)
{
    int bInterrupt;
    int videoNb;
    char* p;
    char name[256];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\VID_Specif.c lines 32–46 */
/* addr: 0x0012f6b0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 32
 *   +0x0034 -> line 35
 *   +0x0038 -> line 46
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* VID_fn_vSetVideoQuality tail-forwards both arguments; ucBPP is unused. */
void VIDSPE_fn_vSetVideoQuality(unsigned char ucBPP, unsigned char ucVideoQuality)
{
    switch (ucVideoQuality)
    {
    case 0:
        g_stVideoQuality.ucTransfertQuality = 0;
        break;
    case 1:
        break;
    case 3:
        break;
    case 4:
        break;
    }
}
