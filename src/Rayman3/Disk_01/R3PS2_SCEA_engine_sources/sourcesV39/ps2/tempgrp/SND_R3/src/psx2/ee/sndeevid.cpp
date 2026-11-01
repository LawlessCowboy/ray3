/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeevid.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sceSifDmaData sceSifDmaData;

typedef enum ESTATE {
    ESTOPPED = 0,
    EPLAYING = 1,
    EPAUSED = 2,
} ESTATE;

extern "C" void* usnd_malloc(unsigned int ui_Size);
extern "C" void usnd_free(void* pBlock);
extern "C" void usnd_vDeleteCritSect(unsigned int uiCritSect);
extern "C" void usnd_vEnterCritSect(unsigned int uiCritSect);
extern "C" void usnd_vLeaveCritSect(unsigned int uiCritSect);
extern "C" void* memcpy(void* pvDest, const void* pvSrc, size_t uiSize);
extern "C" void* fn_pvMallocInBinaryPreservingTheCurrentMode(unsigned int uiSize);
extern "C" void fn_vFreeInBinaryPreservingTheCurrentMode(void* pBlock);

namespace usnd {

struct CPS2Renderer {
    virtual void vUnknown0(void* pBox, unsigned int ui0, unsigned int ui1);
    virtual ~CPS2Renderer();
    virtual unsigned int vUnknown2(void);
    virtual void vUnknown3(void);
    virtual void vUnknown4(void);
    virtual void vUnknown5(unsigned int ui_Channel);
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
static volatile unsigned int gs_PosRead;
static volatile unsigned int gs_NbBytesInBuffer;
static CPS2IOPPullDMA* gs_poBox;
static CPS2Renderer* gs_poRenderer;
static unsigned int gs_uiChannel;
static volatile unsigned int gs_uiSndVidCritSect;
static unsigned int gs_TotalSizeReceived;
static volatile unsigned int gs_SoundStarted;
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

CLinkActor::CLinkActor(void) : mpoType(0)
{
    m_poNext = 0;
    m_poPrevious = 0;
}

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

void SND_VID_fn_vStopVideoSound(void)
{
    gs_poRenderer->vStop(gs_uiChannel);
    gs_SoundStarted = 0;
}

void SND_VID_fn_vResumeVideoSound(void)
{
    while (gv_iCD_Opened)
        SND_VID_vClearCop0Register24();
    gs_poRenderer->fv_vResume(gs_uiChannel);
    while (!gs_SoundRunning)
        SND_VID_vClearCop0Register24();
}

int SND_VID_fn_iAddIOPData(void* SoundData, unsigned int uiSize)
{
    int iPosWrite;
    int iTransfered = 0;
    unsigned int iLength;

    usnd_vEnterCritSect(gs_uiSndVidCritSect);
    if (gs_NbBytesInBuffer + uiSize > 0x40000)
    {
        usnd_vLeaveCritSect(gs_uiSndVidCritSect);
        return -1;
    }

    while ((int)uiSize != 0)
    {
        iPosWrite = (gs_PosRead + gs_NbBytesInBuffer) & 0x3FFFF;
        if (uiSize + iPosWrite <= 0x40000)
        {
            iLength = uiSize;
        }
        else
        {
            iLength = 0x40000 - iPosWrite;
        }

        memcpy((void*)((g_pxBufferAudio + iPosWrite) | 0x30000000), (char*)SoundData + iTransfered, iLength);

        uiSize -= iLength;
        iTransfered += iLength;
        gs_NbBytesInBuffer += iLength;
    }

    gs_TotalSizeReceived += iTransfered;
    if (!gs_SoundStarted && gs_TotalSizeReceived >= 0x10000)
    {
        while (gv_iCD_Opened)
            SND_VID_vClearCop0Register24();
        gs_poRenderer->vUnknown5(gs_uiChannel);
        gs_poRenderer->fv_vPause(gs_uiChannel);
        gs_SoundStarted = 1;
        gs_SoundRunning = 0;
    }

    usnd_vLeaveCritSect(gs_uiSndVidCritSect);
    return iTransfered;
}

extern "C" void FlushCache(int operation);
extern "C" unsigned int sceSifSetDma(sceSifDmaData* sdd, int len);
extern "C" int sceSifDmaStat(unsigned int id);

/* The retail debug attributes this to sndcextraeventactor.cpp lines 83-138, but
   it follows this unit's code in the ELF, its line numbers continue this unit's
   descending order, and it uses this unit's static globals. */
unsigned int fn_iTransferIOPData(void* pvData, unsigned int uiSize)
{
    unsigned int iTransfered = 0;
    unsigned int iLength;
    sceSifDmaData oDmaEnd;
    sceSifDmaData oDma;

    usnd_vEnterCritSect(gs_uiSndVidCritSect);
    while (uiSize)
    {
        if (gs_NbBytesInBuffer >= uiSize)
        {
            iLength = uiSize;
        }
        else
        {
            iLength = uiSize;
            SND_g_iEnoughSound = 0;
        }

        if (gs_PosRead + uiSize > 0x40000)
        {
            unsigned int uiId;

            iLength = 0x40000 - gs_PosRead;
            oDma.data = g_pxBufferAudio + (int)gs_PosRead;
            oDma.addr = (unsigned int)pvData;
            oDma.size = iLength;
            oDma.mode = 0;
            FlushCache(0);
            uiId = sceSifSetDma(&oDma, 1);
            while (sceSifDmaStat(uiId) >= 0)
            {
            }
        }
        else
        {
            oDmaEnd.data = g_pxBufferAudio + (int)gs_PosRead;
            oDmaEnd.addr = (unsigned int)pvData;
            oDmaEnd.size = iLength;
            oDmaEnd.mode = 0;
            FlushCache(0);
            sceSifSetDma(&oDmaEnd, 1);
        }

        uiSize -= iLength;
        iTransfered += iLength;
        gs_NbBytesInBuffer -= iLength;
        gs_PosRead += iLength;
        gs_PosRead &= 0x3FFFF;
    }
    gs_SoundRunning++;
    usnd_vLeaveCritSect(gs_uiSndVidCritSect);
    return iTransfered;
}
