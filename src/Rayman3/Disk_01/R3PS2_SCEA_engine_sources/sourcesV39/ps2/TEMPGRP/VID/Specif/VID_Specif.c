/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\VID_Specif.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/VID.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstVideoQuality_ tdstVideoQuality_;

struct tdstVideoQuality_ {
    unsigned char ucTransfertQuality; /* +0x0 */
};

static float gs_fVideoVolume;
tdstVideoQuality_ g_stVideoQuality;
VID_tdstGeneral_ VID_g_stGeneralVideos;

char* FMN_SCE_ConvertPath2DVD(char* buffer);
char* FMN_SCE_AddBaseDirectory(char* buffer);
char* strcpy(char*, const char*);
unsigned int movie(char* name, int interruptable, float fVolume);
int printf(const char*, ...);

void VIDSPE_fn_vSetVideoSoundVolume(unsigned int ulVideoSoundVolume)
{
    gs_fVideoVolume = (1.0f / 127.0f) * ulVideoSoundVolume;
    if (gs_fVideoVolume < 0.0f)
        gs_fVideoVolume = 0.0f;
    else if (gs_fVideoVolume > 1.0f)
        gs_fVideoVolume = 1.0f;

    printf("Video Volume Set to %d\n", ulVideoSoundVolume);
}

void VIDSPE_fn_vPlayVideoNow(char* p_szDirectFileName)
{
{
    int bInterrupt;
    int videoNb;
    char* p;
    char* pc;
    int iIndex;
    /* Matching idiom for the unfolded member offset (byte/char* base plus offset, dead scaled-index
       assignment); found by scanning matched functions. Not original source and needs cleaning up. */
    char name[256];

    videoNb = VID_g_stGeneralVideos.stNextVideoToPlay.ucVideoNumber;
    bInterrupt = VID_g_stGeneralVideos.stNextVideoToPlay.bCanBeInterrupt;

    if (p_szDirectFileName)
        p = p_szDirectFileName;
    else
    {
        pc = (char*)&VID_g_stGeneralVideos.p_stVideos->p_szVideoFileName;
        p = *(char**)(pc + (iIndex = videoNb * 8));
    }

    strcpy(name, FMN_SCE_AddBaseDirectory(FMN_SCE_ConvertPath2DVD(p)));

    movie(name, bInterrupt, gs_fVideoVolume);
}
}

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
