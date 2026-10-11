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
