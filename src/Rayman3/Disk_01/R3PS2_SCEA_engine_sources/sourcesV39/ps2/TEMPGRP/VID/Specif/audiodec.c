/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\audiodec.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

static unsigned int g_s_TimerSnd;
static float g_s_fStartedSince;
static int g_s_CurrentFrame;
static int g_s_SoundIsPlaying;

void SND_VID_fn_vStopVideoSound(void);
void SND_VID_fn_vDesinitVideoSound(void);

int vagStop(void)
{
    SND_VID_fn_vStopVideoSound();
    g_s_SoundIsPlaying = 0;
    SND_VID_fn_vDesinitVideoSound();
}

int vagSynchroToWait(void)
{
    return 0;
}

void GLI_fn_vTimerPS2Counter(unsigned int* pCount);
void SND_VID_fn_vResumeVideoSound(void);

int vagUpdateSound(void)
{
    unsigned int ulTimer;

    GLI_fn_vTimerPS2Counter(&ulTimer); g_s_fStartedSince += (float)(ulTimer - g_s_TimerSnd) / 294912000.0f; g_s_TimerSnd = ulTimer;

    g_s_CurrentFrame += 2;

    if (g_s_SoundIsPlaying <= 0)
        g_s_SoundIsPlaying++;
    else if (g_s_SoundIsPlaying == 1)
    {
        SND_VID_fn_vResumeVideoSound();
        GLI_fn_vTimerPS2Counter(&g_s_TimerSnd);
        g_s_SoundIsPlaying++;
        g_s_fStartedSince = 0;
    }

    return 0;
}

int vagInit(float fVolume)
{
    SND_VID_fn_vInitVideoSound(2, 0xAC44);
    g_s_SoundIsPlaying = 0;
    g_s_CurrentFrame = 0;
    return 0;
}
