/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct VID_tdstVideoDescription_ VID_tdstVideoDescription_;
typedef struct VID_tdstVideoLanguageDescription_ VID_tdstVideoLanguageDescription_;
typedef struct VID_tdstNextVideoToPlay_ VID_tdstNextVideoToPlay_;
typedef struct VID_tdstGeneral_ VID_tdstGeneral_;

struct VID_tdstVideoDescription_ {
    int p_szVideoName; /* +0x0 */
    int p_szVideoFileName; /* +0x4 */
};

struct VID_tdstVideoLanguageDescription_ {
    int szAudioFileNameSuffix; /* +0x0 */
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

VID_tdstGeneral_ VID_g_stGeneralVideos;
unsigned char g_ucVIDModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 184–185 */
/* addr: 0x0012f470  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 184
 *   +0x0004 -> line 185
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VID_fn_vPlayVideoNow(void)
{
    VID_g_stGeneralVideos.stNextVideoToPlay.bPlayAfterLevel = 0;
    VIDSPE_fn_vPlayVideoNow(0, 1, -1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 174–180 */
/* addr: 0x0012f490  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 174
 *   +0x0004 -> line 175
 *   +0x0008 -> line 174
 *   +0x000c -> line 175
 *   +0x0018 -> line 177
 *   +0x0024 -> line 178
 *   +0x002c -> line 180
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VID_fn_vPlayVideoIfAskedAfterLevel(void)
{
    if (VID_g_stGeneralVideos.stNextVideoToPlay.bPlayAfterLevel != 0)
    {
        VIDSPE_fn_vPlayVideoNow(0, 1, -1);
        VID_g_stGeneralVideos.stNextVideoToPlay.bPlayAfterLevel = 0;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 170–171 */
/* addr: 0x0012f4d0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 170
 *   +0x0008 -> line 171
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VID_fn_vPlayVideoAfterLevel(void)
{
    VID_g_stGeneralVideos.stNextVideoToPlay.bPlayAfterLevel = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 145–166 */
/* addr: 0x0012f4e0  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 145
 *   +0x0004 -> line 148
 *   +0x0008 -> line 145
 *   +0x0020 -> line 148
 *   +0x0024 -> line 159
 *   +0x0028 -> line 149
 *   +0x0030 -> line 150
 *   +0x0034 -> line 159
 *   +0x003c -> line 161
 *   +0x0058 -> line 163
 *   +0x005c -> line 164
 *   +0x0060 -> line 163
 *   +0x0064 -> line 165
 *   +0x007c -> line 166
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VID_fn_vNextVideoToPlay(char* p_szVideoName, unsigned char bCanBeInterrupt, unsigned char bLoop)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 136–136 */
/* addr: 0x0012f580  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 136
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VID_fn_vSetVideoSoundVolume(unsigned int ulVideoSoundVolume)
{
    VIDSPE_fn_vSetVideoSoundVolume(ulVideoSoundVolume);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 131–131 */
/* addr: 0x0012f590  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 131
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void VID_fn_vSetVideoQuality(unsigned char ucBPP, unsigned char ucVideoQuality)
{
    VIDSPE_fn_vSetVideoQuality();
}
