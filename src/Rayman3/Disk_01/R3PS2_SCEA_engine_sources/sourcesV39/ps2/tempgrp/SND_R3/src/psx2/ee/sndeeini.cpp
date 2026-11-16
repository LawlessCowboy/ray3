/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeeini.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CVarAccess CVarAccess;
typedef struct CStringIsLess CStringIsLess;
typedef int sallocator;
typedef struct stree stree;
typedef struct sset sset;
typedef struct CResObjParams CResObjParams;
typedef struct CExtraEventActor CExtraEventActor;
typedef struct sstring sstring;
typedef struct CRefIdObj CRefIdObj;
typedef struct CResObj CResObj;
typedef struct smap smap;
typedef struct CCmdInterface CCmdInterface;
typedef struct CRolloffParam CRolloffParam;
typedef struct CActorResData CActorResData;
typedef struct CUUID CUUID;
typedef struct CIdObj CIdObj;
typedef struct _stVector _stVector;
typedef struct CProgramContext CProgramContext;
typedef struct CResData CResData;
typedef struct sTreeLink sTreeLink;
typedef struct CPitchActorModifier CPitchActorModifier;
typedef struct V3Ds V3Ds;
typedef struct C3DDirection C3DDirection;
typedef struct C3DParam C3DParam;
typedef struct C2DParams C2DParams;
typedef struct CVolumeActorModifier CVolumeActorModifier;
typedef struct CResObjState CResObjState;
typedef struct CCritSect CCritSect;
typedef struct CActorProgramContext CActorProgramContext;
typedef struct CActorResObj CActorResObj;
typedef struct CVar CVar;
typedef struct CLinkActor CLinkActor;
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CLinkTypeActor CLinkTypeActor;
typedef struct CLinkTypeActorCont CLinkTypeActorCont;
typedef struct TTypedVar TTypedVar;
namespace usnd { struct CPS2BoxReverbAttribute; }
typedef usnd::CPS2BoxReverbAttribute CPS2BoxReverbAttribute;
typedef struct streebase streebase;
typedef struct CSndVarType CSndVarType;
typedef struct CActorModifiers CActorModifiers;
typedef struct CResType CResType;

typedef enum tdeEventType {
    EPLAYEVENT = 0,
    ESTOPEVENT = 1,
    EPITCHEVENT = 2,
    EVOLUMEEVENT = 3,
    EEXTRAEVENT = 4,
    ESTOPALLEVENT = 5,
    ESTOPANDGO = 6,
} tdeEventType;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

typedef enum tdeType {
    EBASE = 0,
    EARRAY = 1,
    ESTRUCT = 2,
    EOBJECT = 3,
    ERESID = 4,
    EENUM = 5,
} tdeType;

struct CStringIsLess {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    CStringIsLess key_compare; /* +0xd */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct CResObjParams {
    /* C++ base CInterface at +0x0: vtable pointer (retail
     * __vt__Q216CExtraEventActor13CResObjParams: fv_vRelease, fv_vAddRef). */
    virtual void fv_vRelease(void);
    virtual void fv_vAddRef(void);
    CResObjParams* m_poNext; /* +0x4 */
    CResObjParams* m_poPrevious; /* +0x8 */
    unsigned int m_uiNbRefs; /* +0xc */
    int m_s32Handle; /* +0x10 */
    CResData* m_poResData; /* +0x14 */
    void (*m_pfn_Proc)(int); /* +0x18 */
};

struct CExtraEventActor {
    static int ss32CurrentRefreshChannel;
    CExtraEventActor* m_poNext; /* +0x0 */
    CExtraEventActor* m_poPrevious; /* +0x4 */
    TTypedVar* m_poIntSwitchVar; /* +0x8 */
    CActorResObj* mpoActorObj; /* +0xc */
    TTypedVar* mpoVolumeModifier; /* +0x10 */
    TTypedVar* mpoPitchModifier; /* +0x14 */
    CLinkTypeActor* mpoActorType; /* +0x18 */
    int ms32ACPObjectId; /* +0x1c */
    int ms32ACPChannelId; /* +0x20 */
    tdeEventType meExtraCoeff; /* +0x24 */
    float mfCoeffA; /* +0x28 */
    float mfCoeffB; /* +0x2c */
    float mfCoeffC; /* +0x30 */
    float mfCoeffD; /* +0x34 */
    int ms32RefreshChannel; /* +0x38 */
    _RollOffParam mstRollOff; /* +0x3c */
    unsigned char mbWaitForKill; /* +0x48 */
    unsigned char mbAllSoundPaused; /* +0x49 */
    CResObjParams m_oResObjParams; /* +0x4c */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CResObj {
    CResType* m_roType; /* +0x4 */
    CResData* m_poResData; /* +0x8 */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct CCmdInterface {
    smap m_oCommands; /* +0x0 */
    smap m_oInterfaces; /* +0x10 */
    smap m_oSubInterfaces; /* +0x20 */
    int m_czInterfaceName; /* +0x30 */
};

struct CRolloffParam {
    float m_fStabilisationDistance; /* +0x0 */
    float m_fSaturationDistance; /* +0x4 */
    float m_fStabilisationVolume; /* +0x8 */
};

struct CActorResData {
    /* C++ base CResData at +0x0. */
    unsigned char m_b3DRes; /* +0x18 */
    sset m_oProgramList; /* +0x1c */
    smap m_oVariables; /* +0x2c */
    CRolloffParam m_oRolloff; /* +0x3c */
    CVarAccess* m_poGlobalVarAccess; /* +0x48 */
};

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

struct CProgramContext {
    CVarAccess* m_poGlobVarAcc; /* +0x4 */
    CVarAccess* m_poOwnerVarAcc; /* +0x8 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CPitchActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct V3Ds {
    float fX; /* +0x0 */
    float fY; /* +0x4 */
    float fZ; /* +0x8 */
};

struct C3DDirection {
    V3Ds m_oFront; /* +0x0 */
    V3Ds m_oTop; /* +0xc */
};

struct C3DParam {
    V3Ds m_oPos; /* +0x0 */
    V3Ds m_oSpeed; /* +0xc */
    C3DDirection m_oDir; /* +0x18 */
};

struct C2DParams {
    float m_fPan; /* +0x0 */
    float m_fPitch; /* +0x4 */
    float m_fVol; /* +0x8 */
    float m_fSpace; /* +0xc */
};

struct CVolumeActorModifier {
    /* C++ base CActorModifiers at +0x0. */
};

struct CResObjState {
    CResObj* m_poResObj; /* +0x0 */
    unsigned int m_uiInstance; /* +0x4 */
    unsigned char m_bPlayable; /* +0x8 */
    unsigned char m_b2DRes; /* +0x9 */
    unsigned char m_b3DRes; /* +0xa */
    unsigned char m_bHasPosition; /* +0xb */
    unsigned char m_bAcceptsSet2DParamsCmd; /* +0xc */
    unsigned char m_bOwnerIsAProgram; /* +0xd */
    unsigned char m_bResident; /* +0xe */
    int m_pvUserData; /* +0x10 */
    int m_iUserDataSize; /* +0x14 */
    CResObjState* m_poNext; /* +0x18 */
    CResObjState* m_poPrevious; /* +0x1c */
    CResObj* m_poOwner; /* +0x20 */
    unsigned int m_uiLockCount; /* +0x24 */
};

struct CCritSect {
    unsigned int m_uiCS; /* +0x0 */
};

struct CActorProgramContext {
    /* C++ base CProgramContext at +0x0. */
    /* C++ base CVarAccess at +0xc. */
    CResObjState m_oObjStates; /* +0x10 */
    CActorResObj* m_pActor; /* +0x38 */
    smap m_oVariables; /* +0x3c */
    CCritSect m_oMutex; /* +0x4c */
};

struct CActorResObj {
    /* C++ base CResObj at +0x0. */
    C3DParam m_o3DParams; /* +0xc */
    CPitchActorModifier m_oPitchModifier; /* +0x3c */
    CRolloffParam m_oRolloff; /* +0x60 */
    C2DParams m_o2DParams; /* +0x6c */
    unsigned char m_b3DParamsChanged; /* +0x7c */
    unsigned char m_b3DRes; /* +0x7d */
    sstring m_sName; /* +0x80 */
    unsigned char m_b2DParamsComputed; /* +0x84 */
    CVolumeActorModifier m_oVolModifier; /* +0x88 */
    CActorProgramContext m_oProgramContext; /* +0xac */
};

struct CVar {
    CSndVarType* m_poType; /* +0x4 */
    sset m_NotifTargets; /* +0x8 */
    sstring m_strName; /* +0x18 */
};

struct CLinkActor {
    CLinkTypeActor* mpoType; /* +0x0 */
    int ms32ACPObjectId; /* +0x4 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x8..0xb */
    CExtraEventActor m_oExtraActors; /* +0xc */
    CLinkActor* m_poNext; /* +0x74 */
    CLinkActor* m_poPrevious; /* +0x78 */
};

struct _tdstAllRetObjectSound {
    int (*X)(int); /* +0x0 */
    int (*Y)(int); /* +0x4 */
    int (*Z)(int); /* +0x8 */
    int (*VX)(int); /* +0xc */
    int (*VY)(int); /* +0x10 */
    int (*VZ)(int); /* +0x14 */
    unsigned char (*REVERB)(int); /* +0x18 */
    void (*ExtraCoef)(int, _SND_tduRefEvt, int*, int*, int*); /* +0x1c */
    int (*Switch)(int, int); /* +0x20 */
    int (*MicroLink)(int, int); /* +0x24 */
    int (*pfnPosition)(int, int, _stVector*); /* +0x28 */
    int (*pfnVelocity)(int, int, _stVector*); /* +0x2c */
    int (*pfnMicroLink)(int, int, int); /* +0x30 */
    int (*pfnRollOff)(int, int, _RollOffParam*); /* +0x34 */
    int (*pfnInfo)(int, int, char*, int); /* +0x38 */
};

struct CLinkTypeActor {
    CLinkActor m_oActors; /* +0x0 */
    TTypedVar* mroVolumeModifier; /* +0x7c */
    int ms32TypeId; /* +0x80 */
    int ms32LineId; /* +0x84 */
    _tdstAllRetObjectSound mstIActor; /* +0x88 */
};

struct CLinkTypeActorCont {
    static CLinkTypeActorCont* mfn_roGetInstance();
    static _RollOffParam moACPRolloff;
    void mfn_vSetDefaultRolloff(const _RollOffParam* pst_RollOff);
    bool mfn_bInitActorResData();
    /* C++ base smap at +0x0. */
    CActorResData* m_poStandardActorResData; /* +0x10 */
    CActorResData* m_poMusicActorResData; /* +0x14 */
    CResData* m_poMusicProgramResData; /* +0x18 */
};

struct TTypedVar {
    /* C++ base CVar at +0x0. */
    float m_oValue; /* +0x1c */
};

struct usnd::CPS2BoxReverbAttribute {
    unsigned int m_iMode; /* +0x0 */
    unsigned int m_iDepthL; /* +0x4 */
    unsigned int m_iDepthR; /* +0x8 */
    short m_iDelay; /* +0xc */
    int m_iFeedback; /* +0x10 */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct CSndVarType {
    tdeType m_eType; /* +0x4 */
    int m_czTypeName; /* +0x8 */
};

struct CActorModifiers {
    /* C++ base CVarNotifTarget at +0x0. */
    CActorResObj* m_pActor; /* +0x4 */
    smap m_oVariables; /* +0x8 */
    float m_fDirectValue; /* +0x18 */
    float m_fResultValue; /* +0x1c */
    unsigned char m_bResultChanged; /* +0x20 */
};

struct CResType {
    unsigned char m_b2D; /* +0x0 */
    unsigned char m_b3D; /* +0x1 */
    unsigned char m_bPlayable; /* +0x2 */
    CCmdInterface m_oInterface; /* +0x4 */
    int m_czResDataClassName; /* +0x38 */
    smap m_oCommands; /* +0x3c */
};

int gv_iCD_Opened;

namespace usnd {
struct CL1PS2CoreMgr {
    struct CInitParams {
        CInitParams();
        char* pLibSDIRXPath; /* +0x0 */
        char* pBoxIRXPath; /* +0x4 */
        char* pFileMgrIRXPath; /* +0x8 */
        char* pFlowIRXPath; /* +0xc */
        unsigned int uiOptions; /* +0x10 */
    };
};
struct CL2PS2CoreMgr {
    struct CInitParams : public CL1PS2CoreMgr::CInitParams {
        unsigned int uiNbADPCMStream; /* +0x14 */
        unsigned int uiNbPCMStream; /* +0x18 */
    };
    static bool fs_bInit(CInitParams& params);
    static void fs_vDesInit();
};
struct CPS2Box {
    static void fs_vSetOpenCallBack(void (*callback)(void*), void* param);
    static void fs_vSetCloseCallBack(void (*callback)(void*), void* param);
    static void fs_vSetReverbOn(unsigned int channel, bool on);
    static void fs_vSetReverbAttribute(unsigned int channel, CPS2BoxReverbAttribute* attribute);
};
}

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
extern "C" void SND_fn_p_stPS2SetReverbOn(int s32_Channels, int s32_On);
extern "C" void SND_fn_p_stPS2ChangeReverb(int s32_Channels, int s32_Mode, int s32_Vol, int s32_Delay, int s32_FeedBack);
extern "C" void SND_fn_vSetDefaultRollOff(_RollOffParam* pst_RollOff);
extern "C" void SND_fn_vGetDefaultRollOff(_RollOffParam* pst_RollOff);
extern "C" int SND_fn_iDesInitSound(void);
extern "C" int SND_fn_iInitSound(void);
void RackTestCB(void* param);

#pragma optimize_for_size off

#pragma optimize_for_size reset

extern "C" void SND_fn_vKillAllObjectSound(void);
extern "C" void SND_fn_vSynchroSound(void);

extern "C" int printf(const char* format, ...);
extern "C" int sprintf(char* buffer, const char* format, ...);
extern "C" char* strcpy(char* dest, const char* src);
extern "C" void mwInit(void);
extern "C" char* FMN_SCE_ConvertPath2DVD(char* path);
extern "C" char* FMN_SCE_AddBaseDirectory(char* path);
extern "C" unsigned int f_uiHxGetVersion(void);

void RackTestCB(void* param)
{
    if ((int)param == 1)
    {
        printf(">>  Rack opened !\n");
        gv_iCD_Opened = 1;
    }
    else
    {
        printf(">>  Rack closed and CD spining !\n");
        gv_iCD_Opened = 0;
    }
}

int SND_fn_iInitSound(void)
{
    char buffer[256];
    usnd::CL2PS2CoreMgr::CInitParams oInitParam;
    char FileNames[4][256];
    _RollOffParam st_RollOff;
    CLinkTypeActorCont* ro_TypeCont;

    mwInit();







    printf("WARNING : SND_fn_iInitSound() : printf not disabled in DEBUG\n");






    strcpy(FileNames[0], FMN_SCE_AddBaseDirectory(FMN_SCE_ConvertPath2DVD("cdrom0:\\IRX252\\LIBSD.IRX")));
    strcpy(FileNames[1], FMN_SCE_AddBaseDirectory(FMN_SCE_ConvertPath2DVD("cdrom0:\\IRX252\\BOXR.IRX")));
    strcpy(FileNames[2], FMN_SCE_AddBaseDirectory(FMN_SCE_ConvertPath2DVD("cdrom0:\\IRX252\\FILEMGRR.IRX")));
    strcpy(FileNames[3], FMN_SCE_AddBaseDirectory(FMN_SCE_ConvertPath2DVD("cdrom0:\\IRX252\\FLOWR.IRX")));
    oInitParam.pLibSDIRXPath = FileNames[0];
    oInitParam.pBoxIRXPath = FileNames[1];
    oInitParam.pFileMgrIRXPath = FileNames[2];
    oInitParam.pFlowIRXPath = FileNames[3];

    oInitParam.uiOptions = 0;






    oInitParam.uiOptions |= 2;
    usnd::CPS2Box::fs_vSetOpenCallBack(RackTestCB, (void*)1);
    usnd::CPS2Box::fs_vSetCloseCallBack(RackTestCB, (void*)0);

    oInitParam.uiNbADPCMStream = 6;
    oInitParam.uiNbPCMStream = 0;

    usnd::CL2PS2CoreMgr::fs_bInit(oInitParam);




    st_RollOff.rDistBackGround = 0x400000;
    st_RollOff.rDistSatur = 0x80000;
    st_RollOff.ucBackgroundVol = 0;

    ro_TypeCont = CLinkTypeActorCont::mfn_roGetInstance();
    ro_TypeCont->mfn_vSetDefaultRolloff(&st_RollOff);



    sprintf(buffer, "Sound initialised : %d.%d.%d", (f_uiHxGetVersion() & 0xFF000000) >> 24, (f_uiHxGetVersion() & 0xFF0000) >> 16, f_uiHxGetVersion() & 0xFFFF);











    CLinkTypeActorCont::mfn_roGetInstance()->mfn_bInitActorResData();

    return 3;
}

int SND_fn_iDesInitSound(void)
{
    SND_fn_vKillAllObjectSound();
    SND_fn_vSynchroSound();
    for (CExtraEventActor::ss32CurrentRefreshChannel = 0; CExtraEventActor::ss32CurrentRefreshChannel < 5; CExtraEventActor::ss32CurrentRefreshChannel++) {
        SND_fn_vSynchroSound();
        SND_fn_vSynchroSound();
    }
    usnd::CL2PS2CoreMgr::fs_vDesInit();
    return 3;
}

void SND_fn_vGetDefaultRollOff(_RollOffParam* pst_RollOff)
{
    CLinkTypeActorCont::mfn_roGetInstance(); *pst_RollOff = CLinkTypeActorCont::moACPRolloff;
}

void SND_fn_vSetDefaultRollOff(_RollOffParam* pst_RollOff)
{
    CLinkTypeActorCont* p_Instance = CLinkTypeActorCont::mfn_roGetInstance(); p_Instance->mfn_vSetDefaultRolloff(pst_RollOff);
}

#pragma optimize_for_size off
void SND_fn_p_stPS2ChangeReverb(int s32_Channels, int s32_Mode, int s32_Vol, int s32_Delay, int s32_FeedBack)
{
    CPS2BoxReverbAttribute sRevAttr;
    sRevAttr.m_iMode = s32_Mode;
    sRevAttr.m_iDepthR = sRevAttr.m_iDepthL = s32_Vol * 0x3fff / 127;
    sRevAttr.m_iFeedback = s32_FeedBack;
    sRevAttr.m_iDelay = s32_Delay;
    if (s32_Channels & 1) usnd::CPS2Box::fs_vSetReverbAttribute(0, &sRevAttr);
    if (s32_Channels & 2) usnd::CPS2Box::fs_vSetReverbAttribute(1, &sRevAttr);
}
#pragma optimize_for_size reset

void SND_fn_p_stPS2SetReverbOn(int s32_Channels, int s32_On)
{
    if (s32_Channels & 1) usnd::CPS2Box::fs_vSetReverbOn(0, s32_On != 0);
    if (s32_Channels & 1) usnd::CPS2Box::fs_vSetReverbOn(1, s32_On != 0);
}
