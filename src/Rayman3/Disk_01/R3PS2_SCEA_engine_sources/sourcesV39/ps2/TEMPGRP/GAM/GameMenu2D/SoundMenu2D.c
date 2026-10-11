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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c lines 113–113 */
/* addr: 0x0029fd50  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 113
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int M2D_fn_iNbTexturesNeededForMenu(void)
{
    return 30;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c lines 189–189 */
/* addr: 0x0029fd60  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 189
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vSetStereoGameMenu2D(unsigned int uiSet)
{
    if (uiSet == 1) {
        uiSet = 1;
    } else {
        uiSet = 0;
    }
    SND_fn_vSetStereoSound(uiSet);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c lines 129–169 */
/* addr: 0x0029fd80  size: 316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 129
 *   +0x0004 -> line 134
 *   +0x0008 -> line 129
 *   +0x0018 -> line 134
 *   +0x0038 -> line 137
 *   +0x003c -> line 139
 *   +0x0044 -> line 141
 *   +0x0048 -> line 143
 *   +0x0050 -> line 146
 *   +0x0054 -> line 147
 *   +0x0058 -> line 158
 *   +0x0084 -> line 161
 *   +0x0090 -> line 163
 *   +0x009c -> line 164
 *   +0x00a8 -> line 168
 *   +0x0124 -> line 169
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateVolumeLineGameMenu2D(unsigned int uiLine, unsigned int uiValue, unsigned int uiMax)
{
    unsigned int uiSoundID;
    int uiLineId;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c lines 88–124 */
/* addr: 0x0029fec0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 88
 *   +0x0004 -> line 89
 *   +0x002c -> line 98
 *   +0x0048 -> line 102
 *   +0x0050 -> line 105
 *   +0x0058 -> line 108
 *   +0x0060 -> line 115
 *   +0x0068 -> line 121
 *   +0x006c -> line 122
 *   +0x0084 -> line 124
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_fn_s32SendRequestSound(int lObjectId, int lPersoId, int lObjectType, _SND_tduRefEvt uEvent, int lParam1, int lParam2);
void SND_fn_vResumeSound(void);

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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c lines 71–83 */
/* addr: 0x0029ff50  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 71
 *   +0x0004 -> line 74
 *   +0x0008 -> line 71
 *   +0x0010 -> line 74
 *   +0x003c -> line 75
 *   +0x006c -> line 79
 *   +0x0078 -> line 81
 *   +0x0080 -> line 83
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDeinitSoundInGameMenu2D(unsigned int uiResume)
{
    if (g_aSoundEvent[1]) { _SND_tduRefEvt u_RefEvt; u_RefEvt.pstPtr = (_SND_tdstBlockEvent*)g_aSoundEvent[1]; SND_fn_s32SendRequestSound(-1, -1, g_lSoundObjectTypeMenu, u_RefEvt, 0, 0); }
    if (g_aSoundEvent[9]) { _SND_tduRefEvt u_RefEvt; u_RefEvt.pstPtr = (_SND_tdstBlockEvent*)g_aSoundEvent[9]; SND_fn_s32SendRequestSound(-1, -1, g_lSoundObjectTypeMenu, u_RefEvt, 0, 0); }

    if (uiResume == 1)
        SND_fn_vResumeSound();
}
