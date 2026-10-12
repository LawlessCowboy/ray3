/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Pub.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/VID.h"

/* Recovered aggregate layouts from MWCC debug type records. */

VID_tdstGeneral_ VID_g_stGeneralVideos;
unsigned char g_ucVIDModuleId;

void VID_fn_vPlayVideoNow(void)
{
    VID_g_stGeneralVideos.stNextVideoToPlay.bPlayAfterLevel = 0;
    VIDSPE_fn_vPlayVideoNow(0, 1, -1);
}

void VID_fn_vPlayVideoIfAskedAfterLevel(void)
{
    if (VID_g_stGeneralVideos.stNextVideoToPlay.bPlayAfterLevel != 0)
    {
        VIDSPE_fn_vPlayVideoNow(0, 1, -1);
        VID_g_stGeneralVideos.stNextVideoToPlay.bPlayAfterLevel = 0;
    }
}

void VID_fn_vPlayVideoAfterLevel(void)
{
    VID_g_stGeneralVideos.stNextVideoToPlay.bPlayAfterLevel = 1;
}

int strcasecmp(const char* s1, const char* s2);

void VID_fn_vNextVideoToPlay(char* p_szVideoName, unsigned char bCanBeInterrupt, unsigned char bLoop)
{
    unsigned int i;

    VID_g_stGeneralVideos.stNextVideoToPlay.bCanBeInterrupt = bCanBeInterrupt;
    VID_g_stGeneralVideos.stNextVideoToPlay.bLoop = bLoop;
    VID_g_stGeneralVideos.stNextVideoToPlay.bPlayAfterLevel = 0;
    for (i = 0; i < VID_g_stGeneralVideos.ulTrueNumberOfVideos; i++)
    {
        if (strcasecmp((char*)VID_g_stGeneralVideos.p_stVideos[i].p_szVideoName, p_szVideoName) == 0)
            VID_g_stGeneralVideos.stNextVideoToPlay.ucVideoNumber = (unsigned char)i;
    }
}

void VID_fn_vSetVideoSoundVolume(unsigned int ulVideoSoundVolume)
{
    VIDSPE_fn_vSetVideoSoundVolume(ulVideoSoundVolume);
}

void VID_fn_vSetVideoQuality(unsigned char ucBPP, unsigned char ucVideoQuality)
{
    VIDSPE_fn_vSetVideoQuality();
}
