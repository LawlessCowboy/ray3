/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\gamopt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/CINE.h"
#include "r3/ENG.h"
#include "r3/GEO.h"
#include "r3/GLI.h"
#include "r3/HIE.h"
#include "r3/LST2.h"
#include "r3/MAT.h"
#include "r3/MTH.h"
#include "r3/SECT.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstState_ tdstState_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct tdstSaveBuffer_ tdstSaveBuffer_;
typedef struct _StructRecupPosSlot _StructRecupPosSlot;
typedef struct tdstSaveGameSlot_ tdstSaveGameSlot_;
typedef struct tdstGameOptions_ tdstGameOptions_;
typedef struct SVG_stMCStatus_ SVG_stMCStatus_;

typedef enum anon_enum_008b49ff {
    VGA = 0,
    NTSC = 1,
    PAL_50 = 2,
    PAL_60 = 3,
} anon_enum_008b49ff;

struct tdstSaveBuffer_ {
    int lCurrentPosition; /* +0x0 */
    int lSize; /* +0x4 */
    int szFileName; /* +0x8 */
    int szVmsComment; /* +0xc */
    int szBootRomComment; /* +0x10 */
    int szGameName; /* +0x14 */
    int p_vIconPalette; /* +0x18 */
    int p_vIconData; /* +0x1c */
    unsigned short uwNbIcon; /* +0x20 */
    unsigned short uwIconSpeed; /* +0x22 */
    int p_vVisualData; /* +0x24 */
    unsigned short uwVisualType; /* +0x28 */
    int szFileMode; /* +0x2c */
    int szSaveBuffer; /* +0x30 */
    char cFileMode; /* +0x34 */
};

struct _StructRecupPosSlot {
    int lNumDir; /* +0x0 */
    _StructRecupPosSlot* pt_NextStructRecupPosSlot; /* +0x4 */
    char a_szSlotNames[11]; /* +0x8 */
    char a_szOldSlotNames[11]; /* +0x13 */
};

struct tdstSaveGameSlot_ {
    unsigned int ulDate; /* +0x0 */
    char szNewSlotName[2]; /* +0x4 */
    char szOldSlotName[2]; /* +0x6 */
};

struct tdstGameOptions_ {
    char szDefaultFileName[256]; /* +0x0 */
    char szCurrentFileName[256]; /* +0x100 */
    tdstSaveGameSlot_ a_stSaveGameSlots[1]; /* +0x200 */
    unsigned int ulNbOfSlots; /* +0x208 */
    unsigned int ulCurrentSlot; /* +0x20c */
    unsigned int ulDetails; /* +0x210 */
    unsigned int ulScreenSize; /* +0x214 */
    unsigned int ulPal60; /* +0x218 */
    unsigned int ulScreenSizeLoad; /* +0x21c */
    int s32VolumeSound; /* +0x220 */
    int s32VolumeVoice; /* +0x224 */
    int s32VolumeMusic; /* +0x228 */
    int s32VolumeAmbiance; /* +0x22c */
    int s32VolumeMenu; /* +0x230 */
};

struct SVG_stMCStatus_ {
    int iPort; /* +0x0 */
    int iSlot; /* +0x4 */
    int iStatus; /* +0x8 */
};

unsigned char PAUSE_g_ucPauseCause;
extern void fn_vResetEngineFromPaused(void);
extern int INOPS2_fn_wJoyCheckConnection(short _wJoystickNum);
static unsigned int PAUSE_g_ulTimePause;
int RUMBLE_g_lConfigState;
unsigned int RUMBLE_g_ulFrequency;
unsigned int RUMBLE_g_ulPower;
int RUMBLE_g_bRequest;
unsigned char g_bCONSOLE_ENGINE;
int g_EngineWasPausedAutomatically;
unsigned int uDevicePaused;
unsigned int g_ulMoviesBit2;
unsigned int g_ulMoviesBit1;
int g_lNbSaveGameSlots;
tdstGameOptions_ g_stGameOptions;
int g_p_LastStructRecupPosSlot;
unsigned int RUMBLE_g_ulConfigTotalTime;
unsigned int RUMBLE_g_ulConfigStartTime;
int RUMBLE_g_lActivePortNumber;
int g_PauseStringNumber;
extern SVG_stMCStatus_ g_axPadMapping[2];
extern signed char INO_aJoyUsedByAI[16];
int g_GameHasNotStartedTheFirstBootCheck;
char g_a_szSlotNames[4];
tdstEngineStructure_ g_stEngineStructure;
int g_lSoundVolumeLineMenu;
int g_lSoundVolumeLineAmbiance;
int g_lSoundVolumeLineMusic;
int g_lSoundVolumeLineVoices;
int g_lSoundVolumeLineSound;
anon_enum_008b49ff g_eVideoMode;

extern int g_i_CurrentStorageBank;
extern int gp_stA3dGENERAL;
extern int gp_a3_xVectors;
extern int gp_a4_xQuaternions;
extern int gp_stHierarchies;
extern int gp_stNTTO;
extern int gp_stOnlyFrames;
extern int gp_stChannels;
extern int gp_FramesNumOfNTTO;
extern int gp_FramesKFIndex;
extern int gp_stKeyFrames;
extern int gp_stEvents;
extern int gp_stMorphData;
extern int gp_stDeformations;
extern int g_ax_pA3dGENERAL[100];
extern int g_ax_pVectors[100];
extern int g_ax_pQuaternions[100];
extern int g_ax_pHierarchies[100];
extern int g_ax_pNTTO[100];
extern int g_ax_pOnlyFrames[100];
extern int g_ax_pChannels[100];
extern int g_ax_pFramesNumOfNTTO[100];
extern int g_ax_pFramesKFIndex[100];
extern int g_ax_pKeyFrames[100];
extern int g_ax_pEvents[100];
extern int g_ax_pMorphData[100];
extern int g_ax_pDeformations[100];

void fn_vChangeStorageBank(unsigned char ucStorageBank)
{
    g_i_CurrentStorageBank = ucStorageBank;
    gp_stA3dGENERAL = g_ax_pA3dGENERAL[g_i_CurrentStorageBank];
    gp_a3_xVectors = g_ax_pVectors[g_i_CurrentStorageBank];
    gp_a4_xQuaternions = g_ax_pQuaternions[g_i_CurrentStorageBank];
    gp_stHierarchies = g_ax_pHierarchies[g_i_CurrentStorageBank];
    gp_stNTTO = g_ax_pNTTO[g_i_CurrentStorageBank];
    gp_stOnlyFrames = g_ax_pOnlyFrames[g_i_CurrentStorageBank];
    gp_stChannels = g_ax_pChannels[g_i_CurrentStorageBank];
    gp_FramesNumOfNTTO = g_ax_pFramesNumOfNTTO[g_i_CurrentStorageBank];
    gp_FramesKFIndex = g_ax_pFramesKFIndex[g_i_CurrentStorageBank];
    gp_stKeyFrames = g_ax_pKeyFrames[g_i_CurrentStorageBank];
    gp_stEvents = g_ax_pEvents[g_i_CurrentStorageBank];
    gp_stMorphData = g_ax_pMorphData[g_i_CurrentStorageBank];
    gp_stDeformations = g_ax_pDeformations[g_i_CurrentStorageBank];
}

unsigned char fn_bIsEngineInPause(void);
void TXT_vRedrawStringByNumber(int Num);

void fn_vRedrawPauseStringIfRequired(void)
{
    if (fn_bIsEngineInPause()) {
        if (PAUSE_g_ucPauseCause & 5)
            TXT_vRedrawStringByNumber(g_PauseStringNumber);
    }
}

void fn_vUnpauseFromMemoryCard(void)
{
    PAUSE_g_ucPauseCause &= ~2;
    if ((PAUSE_g_ucPauseCause == 0) && g_EngineWasPausedAutomatically)
    {
        fn_vResetEngineFromPaused();
        g_EngineWasPausedAutomatically = 0;
    }
}

extern void fn_vSetEngineInPaused(void);

void fn_vPauseFromMemoryCard(void)
{
    if (!fn_bIsEngineInPause()) {
        g_EngineWasPausedAutomatically = 1;
        fn_vSetEngineInPaused();
    }
    PAUSE_g_ucPauseCause |= 2;
}

int fn_bHasBeenPausedForController(void)
{
    return ((PAUSE_g_ucPauseCause & 5) != 0);
}

/* The retail calls the fast connection check through an int result: the
 * function itself returns a short, but declaring it int keeps the sign
 * extension out of the caller's branch. */
extern int INOPS2_fn_wJoyCheckConnectionFast(short _wJoystickNum);
extern void fn_vTXTAffichePause(int _lVMSOrPad, int _lDeconnectedPadId);
extern void fn_vSetMenuPausePad(void);
extern void fn_vInterruptMenu2D(int _bPauseMenu);
/* Only three arguments are passed by the retail code (the size is left in a3). */
extern int scePadRead(int port, int slot, char* rdata);

void fn_vManageControlerDisconnection(void)
{
    char buffer[32];
    static int FrameCounter;
    static int InitMtapAtLeastOnce;
    static int LastMtapGetConnection[2];
    static int DeconnectedPadId;

    if (g_GameHasNotStartedTheFirstBootCheck)
    {
        if (INOPS2_fn_wJoyCheckConnectionFast(0) == 0)
        {
            fn_vTXTAffichePause(1, DeconnectedPadId);
        }
        else
        {
            fn_vSetMenuPausePad();
        }
        return;
    }

    if ((PAUSE_g_ucPauseCause & 5) == 0)
    {
        if ((INOPS2_fn_wJoyCheckConnectionFast(0) == 0) && (INO_aJoyUsedByAI[0] == 1))
        {
            FrameCounter++;
            if (FrameCounter == 3)
            {
                FrameCounter = 0;
                if (!fn_bIsEngineInPause())
                {
                    g_EngineWasPausedAutomatically = 1;
                    fn_vSetEngineInPaused();
                }
                fn_vInterruptMenu2D(1);
                uDevicePaused = 0;
                PAUSE_g_ucPauseCause |= 1;
                DeconnectedPadId = 0;
                DeconnectedPadId |= LastMtapGetConnection[0];
            }
        }
        else
        {
            LastMtapGetConnection[0] &= ~0x10;
            FrameCounter = 0;
        }
    }
    else
    {
        if (PAUSE_g_ucPauseCause & 1)
        {
            fn_vTXTAffichePause(1, DeconnectedPadId);
            if (INOPS2_fn_wJoyCheckConnectionFast((short)uDevicePaused))
            {
                if (scePadRead(g_axPadMapping[uDevicePaused].iPort, g_axPadMapping[uDevicePaused].iSlot, buffer) == 0x20)
                {
                    if ((buffer[2] & 8) == 0)
                    {
                        PAUSE_g_ucPauseCause &= ~1;
                        PAUSE_g_ucPauseCause |= 4;
                    }
                }
            }
        }
        else
        {
            if (PAUSE_g_ucPauseCause & 4)
            {
                fn_vTXTAffichePause(1, DeconnectedPadId);
                if (INOPS2_fn_wJoyCheckConnectionFast((short)uDevicePaused))
                {
                    if (scePadRead(g_axPadMapping[uDevicePaused].iPort, g_axPadMapping[uDevicePaused].iSlot, buffer) == 0x20)
                    {
                        if (buffer[2] & 8)
                        {
                            PAUSE_g_ucPauseCause &= ~4;
                            fn_vInterruptMenu2D(0);
                            if ((PAUSE_g_ucPauseCause == 0) && (g_EngineWasPausedAutomatically != 0))
                            {
                                fn_vResetEngineFromPaused();
                                g_EngineWasPausedAutomatically = 0;
                            }
                            fn_vSetMenuPausePad();
                            uDevicePaused = -1;
                            InitMtapAtLeastOnce = 0;
                            fn_vManageControlerDisconnection();
                        }
                    }
                }
                else
                {
                    PAUSE_g_ucPauseCause &= ~4;
                    PAUSE_g_ucPauseCause |= 1;
                }
            }
        }
    }
}

void GAM_fn_vCheckJoyConnections(void)
{
    int i;

    i = 0;
    do
    {
        INOPS2_fn_wJoyCheckConnection(i);
        i++;
    } while (i <= 0);
}

int GAM_fn_iIsGamePaused(void)
{
    return PAUSE_g_ucPauseCause != 0;
}

#define M_Min(a, b) (((a) > (b)) ? (b) : (a))
#define M_Max(a, b) (((a) > (b)) ? (a) : (b))
#define M_Clamp(x, lo, hi) M_Max(lo, M_Min(x, hi))

extern int fn_lCheckVMSConnexion(unsigned char _bFullCheck);
extern char* SVG_fn_szGetSonyCompliantDirName(char* _szName);
extern char* strcpy(char* _pDst, const char* _pSrc);
extern tdstSaveBuffer_* VMS_fn_p_stFopenR(char* _szFileName);
extern int VMS_fn_bFread(void* _p_vData, int _lNumber, int _lSize, tdstSaveBuffer_* _p_stBuffer);
extern int VMS_fn_bFclose(tdstSaveBuffer_* _p_stBuffer);
extern void SetPal60(void);
extern void SetPal50(void);
extern void GLI_fn_vSetBrightness(int _lValue);
extern void SND_fn_vSetStereoSound(int _bStereo);
extern void SND_fn_vSetVolumeLineSound(int s32_LineId, int s32_VolValue);
extern void VID_fn_vSetVideoSoundVolume(unsigned int ulVideoSoundVolume);

int fn_bLoadGameOptions(char* szFileName)
{
    unsigned char ucTmp;
    int lIndex;
    tdstSaveBuffer_* p_stTempFile;
    int lReturn;

    lReturn = fn_lCheckVMSConnexion(1);
    if (lReturn <= 0)
    {
        return lReturn;
    }

    strcpy(g_stGameOptions.szCurrentFileName, SVG_fn_szGetSonyCompliantDirName("OPTIONS"));

    p_stTempFile = VMS_fn_p_stFopenR(g_stGameOptions.szCurrentFileName);
    if (p_stTempFile != NULL)
    {
        VMS_fn_bFread(&g_stGameOptions.ulScreenSize, 1, 4, p_stTempFile);
        VMS_fn_bFread(&lIndex, 1, 4, p_stTempFile);
        if (lIndex == 1) { SetPal60(); } else { SetPal50(); }
        VMS_fn_bFread(&lIndex, 1, 4, p_stTempFile);
        GLI_fn_vSetBrightness(lIndex);

        VMS_fn_bFread(&ucTmp, 1, 4, p_stTempFile);
        g_stGameOptions.s32VolumeSound = M_Clamp(ucTmp, 0, 127); SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineSound, g_stGameOptions.s32VolumeSound); VID_fn_vSetVideoSoundVolume(g_stGameOptions.s32VolumeSound);

        VMS_fn_bFread(&ucTmp, 1, 4, p_stTempFile);
        g_stGameOptions.s32VolumeMusic = M_Clamp(ucTmp, 0, 127); SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMusic, g_stGameOptions.s32VolumeMusic);

        VMS_fn_bFread(&ucTmp, 1, 4, p_stTempFile);
        g_stGameOptions.s32VolumeVoice = M_Clamp(ucTmp, 0, 127); SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineVoices, g_stGameOptions.s32VolumeVoice);

        VMS_fn_bFread(&g_ulMoviesBit1, 1, 4, p_stTempFile);
        VMS_fn_bFread(&g_ulMoviesBit2, 1, 4, p_stTempFile);

        ucTmp = 0;
        VMS_fn_bFread(&ucTmp, 1, 1, p_stTempFile);
        SND_fn_vSetStereoSound(ucTmp);

        if (VMS_fn_bFclose(p_stTempFile) != 0)
        {
            g_stGameOptions.s32VolumeSound = M_Clamp(g_stGameOptions.s32VolumeSound, 0, 127); SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineSound, g_stGameOptions.s32VolumeSound); VID_fn_vSetVideoSoundVolume(g_stGameOptions.s32VolumeSound); g_stGameOptions.s32VolumeVoice = M_Clamp(g_stGameOptions.s32VolumeVoice, 0, 127); SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineVoices, g_stGameOptions.s32VolumeVoice); g_stGameOptions.s32VolumeMusic = M_Clamp(g_stGameOptions.s32VolumeMusic, 0, 127); SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMusic, g_stGameOptions.s32VolumeMusic); g_stGameOptions.s32VolumeAmbiance = M_Clamp(g_stGameOptions.s32VolumeAmbiance, 0, 127); SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineAmbiance, g_stGameOptions.s32VolumeAmbiance); g_stGameOptions.s32VolumeMenu = M_Clamp(g_stGameOptions.s32VolumeAmbiance, 0, 127); SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMenu, g_stGameOptions.s32VolumeMenu);
            return 1;
        }
    }
    return 0;
}

unsigned char GAM_fn_bUpdateSavingFile(void);

int fn_bLoadCurrentGameOptions(void)
{
    unsigned char bReturn;

    bReturn = 1;

    GAM_fn_bUpdateSavingFile();

    if (!fn_bLoadGameOptions(g_stGameOptions.szCurrentFileName))
    {
        if (!(unsigned char)fn_bLoadGameOptions("__ Error __"))
            bReturn = 0;
    }

    if (!bReturn)
    {
        g_stGameOptions.s32VolumeSound = 0x5A;
        g_stGameOptions.s32VolumeVoice = 0x7F;
        g_stGameOptions.s32VolumeMusic = 0x5A;
        g_stGameOptions.s32VolumeAmbiance = 0x5A;
        g_stGameOptions.s32VolumeMenu = 0x5A;
        g_stGameOptions.ulDetails = 0;
        g_stGameOptions.ulScreenSize = 0;

        g_ulMoviesBit1 = 0;
        g_ulMoviesBit2 = 0;
    }

    return bReturn;
}

extern void SND_fn_vSetVolumeLineSound(int s32_LineId, int s32_VolValue);
extern void VID_fn_vSetVideoSoundVolume(unsigned int ulVideoSoundVolume);

void fn_vInitDefaultValuesForSoundVolumes(void)
{
    g_stGameOptions.s32VolumeMusic = 90; SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMusic, g_stGameOptions.s32VolumeMusic);
    g_stGameOptions.s32VolumeSound = 90; SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineSound, g_stGameOptions.s32VolumeSound); VID_fn_vSetVideoSoundVolume(g_stGameOptions.s32VolumeSound);
    g_stGameOptions.s32VolumeVoice = 127; SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineVoices, g_stGameOptions.s32VolumeVoice);
    g_stGameOptions.s32VolumeAmbiance = 90; SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineAmbiance, g_stGameOptions.s32VolumeAmbiance);
    g_stGameOptions.s32VolumeMenu = 90; SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMenu, g_stGameOptions.s32VolumeMenu);
}

void GAM_fn_vSetVolumeMenu(int s32_Value)
{
    g_stGameOptions.s32VolumeMenu = (0 > (s32_Value > 127 ? 127 : s32_Value)) ? 0 : (s32_Value > 127 ? 127 : s32_Value);
    SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMenu, g_stGameOptions.s32VolumeMenu);
}

void GAM_fn_vSetVolumeAmbiance(int s32_Value)
{
    g_stGameOptions.s32VolumeAmbiance = 0 > (127 < s32_Value ? 127 : s32_Value) ? 0 : (127 < s32_Value ? 127 : s32_Value);
    SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineAmbiance, g_stGameOptions.s32VolumeAmbiance);
}

void GAM_fn_vSetVolumeVoice(int s32_Value)
{
    g_stGameOptions.s32VolumeVoice = 0 > (127 < s32_Value ? 127 : s32_Value) ? 0 : (127 < s32_Value ? 127 : s32_Value);
    SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineVoices, g_stGameOptions.s32VolumeVoice);
}

void GAM_fn_vSetVolumeSound(int s32_Value)
{
    g_stGameOptions.s32VolumeSound = 0 > (127 < s32_Value ? 127 : s32_Value) ? 0 : (127 < s32_Value ? 127 : s32_Value);
    SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineSound, g_stGameOptions.s32VolumeSound);
    VID_fn_vSetVideoSoundVolume(g_stGameOptions.s32VolumeSound);
}

void GAM_fn_vSetVolumeMusic(int s32_Value)
{
    g_stGameOptions.s32VolumeMusic = 0 > (127 < s32_Value ? 127 : s32_Value) ? 0 : (127 < s32_Value ? 127 : s32_Value);
    SND_fn_vSetVolumeLineSound(g_lSoundVolumeLineMusic, g_stGameOptions.s32VolumeMusic);
}

void fn_vChangeDetailsValue(unsigned int _ulValue)
{
    g_stGameOptions.ulDetails = _ulValue;
}
