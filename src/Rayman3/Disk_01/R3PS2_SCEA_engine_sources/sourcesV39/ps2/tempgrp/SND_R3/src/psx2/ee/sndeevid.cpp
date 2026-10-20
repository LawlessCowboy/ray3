/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sceSifDmaData sceSifDmaData;
typedef struct CBaseRenderer CBaseRenderer;
typedef struct C2DRenderer C2DRenderer;

typedef enum ESTATE {
    ESTOPPED = 0,
    EPLAYING = 1,
    EPAUSED = 2,
} ESTATE;

extern "C" void* usnd_malloc(unsigned int ui_Size);
extern "C" void usnd_free(void* pBlock);
extern "C" void usnd_vDeleteCritSect(unsigned int uiCritSect);
extern "C" void* fn_pvMallocInBinaryPreservingTheCurrentMode(unsigned int uiSize);
extern "C" void fn_vFreeInBinaryPreservingTheCurrentMode(void* pBlock);

namespace usnd {

struct CPS2Renderer {
    virtual void vUnknown0(void* pBox, unsigned int ui0, unsigned int ui1);
    virtual ~CPS2Renderer();
    virtual unsigned int vUnknown2(void);
    virtual void vUnknown3(void);
    virtual void vUnknown4(void);
    virtual void vUnknown5(void);
    virtual void vStop(unsigned int);
    virtual void fv_vPause(unsigned int ui_Channel);
    virtual void fv_vResume(unsigned int ui_Channel);
    virtual void vUnknown9(void);
    virtual void vUnknown10(unsigned int ui_Channel, float fVolume);
};

struct CPS2IopChannel;

struct CPS2StreamVBRenderer : CPS2Renderer {
    float m_fPan; /* +0x4 */
    float m_fVolume; /* +0x8 */
    unsigned int m_uiFromOut; /* +0xc */
    unsigned int m_uiIOPRendAddr; /* +0x10 */
    unsigned int m_uiNbChannels; /* +0x14 */
    CPS2IopChannel* m_pstChannel; /* +0x18 */
    CPS2StreamVBRenderer(unsigned int uiNbVoices, unsigned int uiFrequency);
    static void* operator new(size_t uiSize) { return usnd_malloc(uiSize); }
};

struct CPulledBox {
    virtual void fv_vPull(void* pWaveBlock, unsigned int uiSize, void* pType);
};

struct CPS2IOPPulledBox : CPulledBox {
    unsigned int m_uiIOPPulledBoxAddr; /* +0x4 */
    virtual unsigned int fv_uiGetIOPPulledBoxAddr(void);
};

struct CPS2IOPRemotePulledBox : CPS2IOPPulledBox {
    virtual ~CPS2IOPRemotePulledBox();
};

struct CPS2IOPPullDMA : CPS2IOPRemotePulledBox {
    unsigned int (*m_pfnFunc)(void*, unsigned int); /* +0x8 */
    CPS2IOPPullDMA(unsigned int (*pfnFunc)(void*, unsigned int));
    virtual void fv_vPull(void* pWaveBlock, unsigned int uiSize, void* pType);
    virtual ~CPS2IOPPullDMA();
    static void* operator new(size_t uiSize) { return usnd_malloc(uiSize); }
};

struct CPS2Channel {
    CPS2Renderer* m_poRenderer; /* +0x4 */
    ESTATE m_eState; /* +0x8 */
};

struct CPS2IopChannel : CPS2Channel {
    unsigned int m_uiIOPChannelAddr; /* +0xc */
};

}
using namespace usnd;

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











class CLinkTypeActor;

class CExtraEventActor {
public:
    CExtraEventActor(void);

private:
    unsigned char m_aucData[0x68];
};

class CLinkActor {
public:
    CLinkActor(void);

    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    virtual ~CLinkActor(); /* vtable pointer at +0x8 */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext;
    CLinkActor* m_poPrevious;
};

int g_pxBufferAudio;
static unsigned int gs_PosRead;
static unsigned int gs_NbBytesInBuffer;
static CPS2IOPPullDMA* gs_poBox;
static CPS2Renderer* gs_poRenderer;
static unsigned int gs_uiChannel;
static unsigned int gs_uiSndVidCritSect;
static unsigned int gs_TotalSizeReceived;
static unsigned int gs_SoundStarted;
static volatile unsigned int gs_SoundRunning;
int SND_g_iEnoughSound;
extern volatile int gv_iCD_Opened;

/* The busy waits clear COP0 register 24 (mtbpc zero, i.e. mtc0 zero, $24), as
   in FireFx.cpp; C cannot express the COP0 write.  The R5900 alias mtbpc is
   used so MWCC schedules it like an ordinary instruction. */
inline void SND_VID_vClearCop0Register24(void)
{
    asm { mtbpc zero }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 55–58 */
/* addr: 0x001cd560  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 55
 *   +0x002c -> line 58
 *   +0x0030 -> line 55
 *   +0x0034 -> line 58
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CLinkActor::CLinkActor(void) : mpoType(0)
{
    m_poNext = 0;
    m_poPrevious = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 301–317 */
/* addr: 0x001cd5b0  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 301
 *   +0x0008 -> line 303
 *   +0x001c -> line 306
 *   +0x0038 -> line 308
 *   +0x003c -> line 306
 *   +0x0040 -> line 308
 *   +0x0058 -> line 311
 *   +0x0064 -> line 314
 *   +0x006c -> line 316
 *   +0x0070 -> line 317
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_VID_fn_vDesinitVideoSound(void)
{
    gs_poRenderer->vStop(gs_uiChannel);
    gs_SoundStarted = 0;
    delete gs_poRenderer;
    gs_poRenderer = 0;
    gs_poBox->~CPS2IOPPullDMA(); usnd_free(gs_poBox);
    gs_poBox = 0;
    usnd_vDeleteCritSect(gs_uiSndVidCritSect);
    fn_vFreeInBinaryPreservingTheCurrentMode((void*)g_pxBufferAudio);
    g_pxBufferAudio = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 265–298 */
/* addr: 0x001cd630  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 265
 *   +0x0020 -> line 267
 *   +0x0028 -> line 268
 *   +0x0030 -> line 267
 *   +0x0034 -> line 268
 *   +0x0038 -> line 271
 *   +0x0040 -> line 272
 *   +0x0060 -> line 275
 *   +0x006c -> line 280
 *   +0x0074 -> line 281
 *   +0x008c -> line 284
 *   +0x00ac -> line 290
 *   +0x00c8 -> line 293
 *   +0x00dc -> line 296
 *   +0x00e0 -> line 293
 *   +0x00e4 -> line 296
 *   +0x00f8 -> line 298
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" void* fn_pvMallocInBinaryPreservingTheCurrentMode(unsigned int uiSize);
extern "C" unsigned int usnd_uiCreateCritSect(void);
unsigned int fn_iTransferIOPData(void* pvData, unsigned int uiSize);

void SND_VID_fn_vInitVideoSound(unsigned int _nbVoices, unsigned int _iFrequency, float _fLinearVolume)
{
    g_pxBufferAudio = (int)fn_pvMallocInBinaryPreservingTheCurrentMode(0x40000);
    gs_PosRead = 0; gs_NbBytesInBuffer = 0; gs_TotalSizeReceived = 0;
    gs_SoundStarted = 0;
    while (gv_iCD_Opened)
        SND_VID_vClearCop0Register24();
    gs_uiSndVidCritSect = usnd_uiCreateCritSect();
    gs_poBox = new CPS2IOPPullDMA(fn_iTransferIOPData);
    gs_poRenderer = new CPS2StreamVBRenderer(_nbVoices, _iFrequency);
    gs_poRenderer->vUnknown0((void*)gs_poBox, 0, 0);
    gs_uiChannel = gs_poRenderer->vUnknown2();
    gs_poRenderer->vUnknown10(gs_uiChannel, _fLinearVolume);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 253–256 */
/* addr: 0x001cd740  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 253
 *   +0x0008 -> line 254
 *   +0x001c -> line 255
 *   +0x0020 -> line 256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_VID_fn_vStopVideoSound(void)
{
    gs_poRenderer->vStop(gs_uiChannel);
    gs_SoundStarted = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 225–241 */
/* addr: 0x001cd770  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 225
 *   +0x0004 -> line 233
 *   +0x000c -> line 234
 *   +0x0030 -> line 236
 *   +0x0044 -> line 239
 *   +0x004c -> line 240
 *   +0x0070 -> line 241
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_VID_fn_vResumeVideoSound(void)
{
    while (gv_iCD_Opened)
        SND_VID_vClearCop0Register24();
    gs_poRenderer->fv_vResume(gs_uiChannel);
    while (!gs_SoundRunning)
        SND_VID_vClearCop0Register24();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp lines 151–205 */
/* addr: 0x001cd7f0  size: 380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 151
 *   +0x0020 -> line 157
 *   +0x002c -> line 161
 *   +0x0048 -> line 163
 *   +0x0050 -> line 164
 *   +0x0058 -> line 171
 *   +0x005c -> line 174
 *   +0x0060 -> line 171
 *   +0x0064 -> line 174
 *   +0x0068 -> line 171
 *   +0x0074 -> line 174
 *   +0x0084 -> line 175
 *   +0x0090 -> line 177
 *   +0x0098 -> line 182
 *   +0x00b4 -> line 186
 *   +0x00b8 -> line 184
 *   +0x00bc -> line 185
 *   +0x00c0 -> line 186
 *   +0x00c8 -> line 187
 *   +0x00d0 -> line 191
 *   +0x00d4 -> line 194
 *   +0x00d8 -> line 191
 *   +0x00dc -> line 194
 *   +0x00f8 -> line 196
 *   +0x0134 -> line 197
 *   +0x0148 -> line 198
 *   +0x0150 -> line 199
 *   +0x0154 -> line 202
 *   +0x015c -> line 204
 *   +0x0160 -> line 205
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int SND_VID_fn_iAddIOPData(void* SoundData, unsigned int uiSize)
{
    int iPosWrite;
    int iLength;
    int iTransfered;
    /* TODO: decompile from asm/... */
}
