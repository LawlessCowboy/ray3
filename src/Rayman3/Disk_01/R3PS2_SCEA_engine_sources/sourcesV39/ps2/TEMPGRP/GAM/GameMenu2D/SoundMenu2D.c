/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef union _SND_tduRefEvt _SND_tduRefEvt;

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

unsigned int g_uiInitialised;
unsigned int g_aSoundEventID[11];
/* aggregate */ int g_aSoundEvent;
int g_lSoundObjectTypeMenu;
int g_lSoundObjectTypeAnim;
int g_lSoundObjectTypeMusic;
int g_lSoundObjectTypeVoice;
int g_lSoundVolumeLineMenu;
int g_lSoundVolumeLineAmbiance;
int g_lSoundVolumeLineSound;
int g_lSoundVolumeLineMusic;
int g_lSoundVolumeLineVoices;

/* addr: 0x0029fd50  size: 8 bytes */
int M2D_fn_iNbTexturesNeededForMenu(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0029fd60  size: 32 bytes */
void fn_vSetStereoGameMenu2D(unsigned int uiSet)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c lines 134–169 */
/* addr: 0x0029fd80  size: 316 bytes */
void fn_vUpdateVolumeLineGameMenu2D(unsigned int uiLine, unsigned int uiValue, unsigned int uiMax)
{
    unsigned int uiSoundID;
    int uiLineId;
    /* line map: */
    /*   line 134 @ +0x000 */
    /*   line 134 @ +0x000 */
    /*   line 139 @ +0x000 */
    /*   line 143 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 169 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c lines 89–124 */
/* addr: 0x0029fec0  size: 144 bytes */
void fn_vPlaySoundInGameMenu2D(unsigned int uiGameMenuSoundID)
{
    int uiTypeId;
    _SND_tduRefEvt u_RefEvt;
    /* line map: */
    /*   line 89 @ +0x000 */
    /*   line 102 @ +0x000 */
    /*   line 108 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 124 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\SoundMenu2D.c lines 74–83 */
/* addr: 0x0029ff50  size: 144 bytes */
void fn_vDeinitSoundInGameMenu2D(unsigned int uiResume)
{
    /* line map: */
    /*   line 74 @ +0x000 */
    /*   line 74 @ +0x000 */
    /*   line 79 @ +0x000 */
    /*   line 83 @ +0x000 */
    /* TODO: decompile from asm/... */
}
