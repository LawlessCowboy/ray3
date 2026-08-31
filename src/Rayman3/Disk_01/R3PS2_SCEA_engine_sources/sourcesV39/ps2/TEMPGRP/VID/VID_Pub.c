/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c */
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

VID_tdstGeneral_ VID_g_stGeneralVideos;
unsigned char g_ucVIDModuleId;

void VIDSPE_fn_vSetVideoSoundVolume(unsigned int ulVideoSoundVolume);

/* addr: 0x0012f450  size: 20 bytes */
void PLD_szFixName(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 185–185 */
/* addr: 0x0012f470  size: 24 bytes */
void VID_fn_vPlayVideoNow(void)
{
    /* line map: */
    /*   line 185 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 175–178 */
/* addr: 0x0012f490  size: 56 bytes */
void VID_fn_vPlayVideoIfAskedAfterLevel(void)
{
    /* line map: */
    /*   line 175 @ +0x000 */
    /*   line 175 @ +0x000 */
    /*   line 178 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 171–171 */
/* addr: 0x0012f4d0  size: 16 bytes */
void VID_fn_vPlayVideoAfterLevel(void)
{
    /* line map: */
    /*   line 171 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c lines 148–166 */
/* addr: 0x0012f4e0  size: 148 bytes */
void VID_fn_vNextVideoToPlay(char* p_szVideoName, unsigned char bCanBeInterrupt, unsigned char bLoop)
{
    unsigned int i;
    /* line map: */
    /*   line 148 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 149 @ +0x000 */
    /*   line 159 @ +0x000 */
    /*   line 163 @ +0x000 */
    /*   line 163 @ +0x000 */
    /*   line 166 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0012f580  size: 8 bytes */
void VID_fn_vSetVideoSoundVolume(unsigned int ulVideoSoundVolume)
{
    VIDSPE_fn_vSetVideoSoundVolume(ulVideoSoundVolume);
}
