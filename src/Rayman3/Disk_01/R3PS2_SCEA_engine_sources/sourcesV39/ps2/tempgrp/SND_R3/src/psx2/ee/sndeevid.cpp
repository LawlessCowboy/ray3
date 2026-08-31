/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CPS2Renderer CPS2Renderer;
typedef struct CPS2IOPPullDMA CPS2IOPPullDMA;
typedef struct CPS2IOPPulledBox CPS2IOPPulledBox;
typedef struct CPS2IopChannel CPS2IopChannel;
typedef struct sceSifDmaData sceSifDmaData;
typedef struct CBaseRenderer CBaseRenderer;
typedef struct C2DRenderer C2DRenderer;
typedef struct CPS2Channel CPS2Channel;

struct CPS2Renderer {
    /* C++ base C2DRenderer at +0x0. */
};

struct CPS2IOPPullDMA {
    int m_pfnFunc; /* +0x8 */
};

struct CPS2IOPPulledBox {
    /* C++ base CPulledBox at +0x0. */
    unsigned int m_uiIOPPulledBoxAddr; /* +0x4 */
};

struct CPS2IopChannel {
    /* C++ base CPS2Channel at +0x0. */
    unsigned int m_uiIOPChannelAddr; /* +0xc */
};

struct sceSifDmaData {
    unsigned int data; /* +0x0 */
    unsigned int addr; /* +0x4 */
    unsigned int size; /* +0x8 */
    unsigned int mode; /* +0xc */
};

struct CBaseRenderer {
    /* C++ base CPullingBox at +0x0. */
};

struct C2DRenderer {
    /* C++ base CBaseRenderer at +0x0. */
};

struct CPS2Channel {
    int m_poRenderer; /* +0x4 */
    /* aggregate */ int m_eState; /* +0x8 */
};

int g_pxBufferAudio;
static unsigned int gs_PosRead;
static unsigned int gs_NbBytesInBuffer;
static int gs_poBox;
static int gs_poRenderer;
static unsigned int gs_uiChannel;
static unsigned int gs_uiSndVidCritSect;
static unsigned int gs_TotalSizeReceived;
static unsigned int gs_SoundStarted;
static unsigned int gs_SoundRunning;
int SND_g_iEnoughSound;
unsigned int (*fn_iTransferIOPData)(void*, unsigned int);
int gv_iCD_Opened;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 58–58 */
/* addr: 0x001cd560  size: 68 bytes */
void fn_iTransferIOPData__FPvUi(void)
{
    /* line map: */
    /*   line 58 @ +0x000 */
    /*   line 58 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 303–317 */
/* addr: 0x001cd5b0  size: 124 bytes */
void SND_VID_fn_vDesinitVideoSound(void)
{
    /* line map: */
    /*   line 303 @ +0x000 */
    /*   line 308 @ +0x000 */
    /*   line 308 @ +0x000 */
    /*   line 314 @ +0x000 */
    /*   line 317 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 267–296 */
/* addr: 0x001cd630  size: 272 bytes */
void SND_VID_fn_vInitVideoSound(unsigned int _nbVoices, unsigned int _iFrequency, float _fLinearVolume)
{
    void* pAddress;
    /* line map: */
    /*   line 267 @ +0x000 */
    /*   line 267 @ +0x000 */
    /*   line 271 @ +0x000 */
    /*   line 275 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 290 @ +0x000 */
    /*   line 296 @ +0x000 */
    /*   line 296 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 254–256 */
/* addr: 0x001cd740  size: 44 bytes */
void SND_VID_fn_vStopVideoSound(void)
{
    /* line map: */
    /*   line 254 @ +0x000 */
    /*   line 256 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 233–240 */
/* addr: 0x001cd770  size: 124 bytes */
void SND_VID_fn_vResumeVideoSound(void)
{
    /* line map: */
    /*   line 233 @ +0x000 */
    /*   line 236 @ +0x000 */
    /*   line 240 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 157–205 */
/* addr: 0x001cd7f0  size: 380 bytes */
int SND_VID_fn_iAddIOPData(void* SoundData, unsigned int uiSize)
{
    int iPosWrite;
    int iLength;
    int iTransfered;
    /* line map: */
    /*   line 157 @ +0x000 */
    /*   line 163 @ +0x000 */
    /*   line 171 @ +0x000 */
    /*   line 171 @ +0x000 */
    /*   line 171 @ +0x000 */
    /*   line 175 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 184 @ +0x000 */
    /* TODO: decompile from asm/... */
}
