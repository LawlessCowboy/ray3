/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef union _SND_tduRefEvt _SND_tduRefEvt;

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

unsigned int g_uiInitialised;
unsigned int g_aSoundEventID[11];
int g_aSoundEvent[11];
int g_lSoundObjectTypeMenu;
int g_lSoundObjectTypeAnim;
int g_lSoundObjectTypeMusic;
int g_lSoundObjectTypeVoice;
int g_lSoundVolumeLineMenu;
int g_lSoundVolumeLineAmbiance;
int g_lSoundVolumeLineSound;
int g_lSoundVolumeLineMusic;
int g_lSoundVolumeLineVoices;

void SND_fn_vSetStereoSound(int bStereo);
void SND_fn_vSetVolumeLineSound(int s32_LineId, int s32_VolValue);
int SND_fn_s32SendRequestSound(int lObjectId, int lPersoId, int lObjectType, _SND_tduRefEvt uEvent, int lParam1, int lParam2);
void SND_fn_vResumeSound(void);

int M2D_fn_iNbTexturesNeededForMenu(void)
{
    return 30;
}

void fn_vSetStereoGameMenu2D(unsigned int uiSet)
{
    if (uiSet == 1) {
        uiSet = 1;
    } else {
        uiSet = 0;
    }
    SND_fn_vSetStereoSound(uiSet);
}

void fn_vUpdateVolumeLineGameMenu2D(unsigned int uiLine, unsigned int uiValue, unsigned int uiMax)
{
    unsigned int uiSoundID;
    int uiLineId;
    unsigned int uiVolume;
    int uiTypeId;
    _SND_tduRefEvt u_RefEvt;

    switch (uiLine)
    {
    case 2:
        uiLineId = g_lSoundVolumeLineVoices;
        uiSoundID = 5;
        break;
    case 0:
        uiLineId = g_lSoundVolumeLineMusic;
        uiSoundID = 6;
        break;
    case 1:
    default:
        uiLineId = g_lSoundVolumeLineSound;
        uiSoundID = 7;
        break;
    }

    uiVolume = (uiValue == uiMax) ? 127 : ((uiValue * 127) / uiMax); SND_fn_vSetVolumeLineSound(uiLineId, uiVolume);

    if (uiLine == 1)
    {
        SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineAmbiance, uiVolume);
        SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMenu, uiVolume);
    }

    if (uiSoundID < 11 && g_aSoundEvent[uiSoundID]) { switch (uiSoundID) { case 5: uiTypeId = g_lSoundObjectTypeVoice; break; case 6: uiTypeId = g_lSoundObjectTypeMusic; break; case 7: uiTypeId = g_lSoundObjectTypeAnim; break; case 0: case 1: case 2: case 3: case 4: default: uiTypeId = g_lSoundObjectTypeMenu; break; } u_RefEvt.pstPtr = (_SND_tdstBlockEvent*)g_aSoundEvent[uiSoundID]; SND_fn_s32SendRequestSound(-1, -1, uiTypeId, u_RefEvt, 0, 0); }
}

void fn_vPlaySoundInGameMenu2D(unsigned int uiGameMenuSoundID)
{
    int uiTypeId;
    _SND_tduRefEvt u_RefEvt;

    if (uiGameMenuSoundID < 11 && g_aSoundEvent[uiGameMenuSoundID])
    {
        switch (uiGameMenuSoundID)
        {
        case 5:
            uiTypeId = g_lSoundObjectTypeVoice;
            break;
        case 6:
            uiTypeId = g_lSoundObjectTypeMusic;
            break;
        case 7:
            uiTypeId = g_lSoundObjectTypeAnim;
            break;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        default:
            uiTypeId = g_lSoundObjectTypeMenu;
            break;
        }

        u_RefEvt.pstPtr = (_SND_tdstBlockEvent*)g_aSoundEvent[uiGameMenuSoundID];
        SND_fn_s32SendRequestSound(-1, -1, uiTypeId, u_RefEvt, 0, 0);
    }
}

void fn_vDeinitSoundInGameMenu2D(unsigned int uiResume)
{
    if (g_aSoundEvent[1]) { _SND_tduRefEvt u_RefEvt; u_RefEvt.pstPtr = (_SND_tdstBlockEvent*)g_aSoundEvent[1]; SND_fn_s32SendRequestSound(-1, -1, g_lSoundObjectTypeMenu, u_RefEvt, 0, 0); }
    if (g_aSoundEvent[9]) { _SND_tduRefEvt u_RefEvt; u_RefEvt.pstPtr = (_SND_tdstBlockEvent*)g_aSoundEvent[9]; SND_fn_s32SendRequestSound(-1, -1, g_lSoundObjectTypeMenu, u_RefEvt, 0, 0); }

    if (uiResume == 1)
        SND_fn_vResumeSound();
}
