/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct C_SdlCache C_SdlCache;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct DMMBloc DMMBloc;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct C_InstanceList C_InstanceList;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct C_SdlRef C_SdlRef;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct _SDC_Instance_ _SDC_Instance_;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tdst3dData_ tdst3dData_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct stMorphData stMorphData;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct sceGifTag sceGifTag;
typedef union unFunction unFunction;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct _sceDmaTag _sceDmaTag;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct C_SdlCache {
    int m_pList; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct DMMBloc {
    int m_pMemoryBloc; /* +0x0 */
    unsigned int m_MemoryBlocSize; /* +0x4 */
    unsigned int m_BlocAlignment; /* +0x8 */
    int m_pFreeBlocsChain; /* +0xc */
    int m_pHashTable; /* +0x10 */
    unsigned int m_HashTableSize; /* +0x14 */
    int m_pFreeBlocsChainEnd; /* +0x18 */
    unsigned int m_UsedMemory; /* +0x1c */
    int m_AllocMode; /* +0x20 */
};

struct tagGLlistdatas {
    int pNext; /* +0x0 */
    /* aggregate */ int apData; /* +0x4 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct C_InstanceList {
    unsigned int m_NbInstances; /* +0x0 */
    int m_pList; /* +0x4 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct C_SdlRef {
    unsigned int m_uRefType; /* +0x0 */
    unsigned int m_uIndexInList; /* +0x4 */
    int m_vpOriginPointer; /* +0x8 */
    int m_vpDestinationPointer; /* +0xc */
};

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    int d_stAnimEvent; /* +0x4 */
    int d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

struct GLI_tdstTexture_ {
    int bIsAvailable; /* +0x0 */
    int lTextureQuality; /* +0x4 */
    int p_vBitMap; /* +0x8 */
    int p_vColorTable; /* +0xc */
    int p_stSpecParam; /* +0x10 */
    int lTextureCaps; /* +0x14 */
    unsigned short lHeight; /* +0x18 */
    unsigned short lWidth; /* +0x1a */
    unsigned short lRealHeight; /* +0x1c */
    unsigned short lRealWidth; /* +0x1e */
    float fAddU; /* +0x20 */
    float fAddV; /* +0x24 */
    int lIncrementIsEnable; /* +0x28 */
    unsigned int lChromakeyColorRGBA; /* +0x2c */
    unsigned int ulBlendColorRGBA; /* +0x30 */
    int lNumberOfLod; /* +0x34 */
    unsigned int lCompressionCounter; /* +0x38 */
    unsigned int lTypeOfCompression; /* +0x3c */
    unsigned int lTypeOfMipMapping; /* +0x40 */
    int p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct tdstFrame3d_ {
    int p_stArrayOfElts3d; /* +0x0 */
    int p_stAngularSpeedMatrix; /* +0x4 */
    int p_stLinearSpeedVector; /* +0x8 */
    /* aggregate */ int stHierarchy; /* +0xc */
    /* aggregate */ int stDeformation; /* +0x14 */
    int p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

struct tdstAChannel_ {
    int hSupObject; /* +0x0 */
    int hZoomSupObject; /* +0x4 */
    int p_stNextActiveChannel; /* +0x8 */
    int p_stFatherChannel; /* +0xc */
    /* array */ int ax_InterpolatedPositions[2]; /* +0x10 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct _SDC_Instance_ {
    int pSPO; /* +0x0 */
    unsigned int ulElementNumber; /* +0x4 */
    int pVertexArray; /* +0x8 */
    int pInstanceNormals; /* +0xc */
    int pSDL; /* +0x10 */
    unsigned int ulFrameNumber; /* +0x14 */
    unsigned int ulFrameNumberForNormals; /* +0x18 */
    int pList; /* +0x1c */
};

struct tagGLlistcalls {
    int pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct tagGLprimbuf {
    int pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    int pData; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    sceGifTag tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tdst3dData_ {
    int h_InitialState; /* +0x0 */
    int h_CurrentState; /* +0x4 */
    int h_FirstStateOfAction; /* +0x8 */
    int h_InitialObjectsTable; /* +0xc */
    int h_CurrentObjectsTable; /* +0x10 */
    int h_Family; /* +0x14 */
    /* aggregate */ int stGLIObjectMatrix; /* +0x20 */
    int p_stGLIObjectAbsoluteMatrix; /* +0x80 */
    float xCurrentFrame; /* +0x84 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    int d_ucEventActivation; /* +0x8c */
    int p_stCurrentHieCouples; /* +0x90 */
    unsigned short wCurrentHieNbCouples; /* +0x94 */
    unsigned short wSizeOfArrayOfElts3d; /* +0x96 */
    int h_StateInLastFrame; /* +0x98 */
    int h_WantedState; /* +0x9c */
    float xForcedFrame; /* +0xa0 */
    unsigned char ucFlagEndState; /* +0xa4 */
    unsigned char ucFlagEndOfAnim; /* +0xa5 */
    int hArrayOfChannels; /* +0xa8 */
    unsigned int ulNumberOfChannels; /* +0xac */
    int hFirstActiveChannel; /* +0xb0 */
    tdstFrame3d_ stFrame3d; /* +0xb4 */
    int hMorphChannelList; /* +0xd8 */
    unsigned int ulStartTime; /* +0xdc */
    unsigned int ulTimeDelay; /* +0xe0 */
    unsigned int ulTimePreviousFrame; /* +0xe4 */
    float xLastFrame; /* +0xe8 */
    unsigned char bStateJustModified; /* +0xec */
    unsigned char bSkipCurrentFrame; /* +0xed */
    int p_stShadowVisualMaterial; /* +0xf0 */
    int p_stShadowTexture; /* +0xf4 */
    float xShadowScaleX; /* +0xf8 */
    float xShadowScaleY; /* +0xfc */
    short xShadowQuality; /* +0x100 */
    unsigned short uwNbEngineFrameSinceLastMechEvent; /* +0x102 */
    unsigned char ucFrameRate; /* +0x104 */
    unsigned char ucFlagModifState; /* +0x105 */
    int lDrawMaskInit; /* +0x108 */
    int lDrawMask; /* +0x10c */
    int lLastComputeFrame; /* +0x110 */
    /* aggregate */ int stLastEventGlobalPosition; /* +0x120 */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    /* aggregate */ int stLightDirForDynamicShadow; /* +0x188 */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    /* aggregate */ int stSHWDeformationVector; /* +0x198 */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    /* aggregate */ int hForSubAnimInUseArray; /* +0x1b4 */
    int h_CurrentCineActor; /* +0x1c0 */
    /* aggregate */ int hSkinMaterial; /* +0x1c4 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    short xSkinIndex[4]; /* +0x1d8 */
};

struct SECT_tdstSector_ {
    /* aggregate */ int stListOfCharacters; /* +0x0 */
    /* aggregate */ int stListOfStaticLights; /* +0xc */
    /* aggregate */ int stListOfDNMLights; /* +0x14 */
    /* aggregate */ int stListOfSectorsInGraphicInteraction; /* +0x20 */
    /* aggregate */ int stListOfSectorsInCollisionInteraction; /* +0x28 */
    /* aggregate */ int stListOfSectorsInActivityInteraction; /* +0x30 */
    /* aggregate */ int stListOfSectorsInSoundInteraction; /* +0x38 */
    /* aggregate */ int stListOfSoundEvent; /* +0x40 */
    /* array */ int stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    int h_PreviousSectorInList; /* +0x70 */
    int h_NextSectorInList; /* +0x74 */
    int lModifierMulIntensity; /* +0x78 */
    int lModifierAddIntensity; /* +0x7c */
    unsigned int glOpaqueDisplayList; /* +0x80 */
    unsigned int glTransparentDisplayList; /* +0x84 */
    char cCurrentActivity; /* +0x88 */
    char cWantedActivity; /* +0x89 */
    unsigned char ucInList; /* +0x8a */
    int xTransition; /* +0x8c */
    _SND_tduRefEvt hTransitionSoundEvent; /* +0x90 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct GLI_tdstLight_ {
    int b_lOnOff; /* +0x0 */
    int bThisLightIsZBuffered; /* +0x4 */
    int lTypeOfLight; /* +0x8 */
    float xFar; /* +0xc */
    float xNear; /* +0x10 */
    float xLittleAlpha; /* +0x14 */
    float xBigAlpha; /* +0x18 */
    float xLittleTangent; /* +0x1c */
    float xBigTangent; /* +0x20 */
    /* aggregate */ int stMatrix; /* +0x30 */
    GEO_tdstColor_ stColor; /* +0x90 */
    float SqNear; /* +0xa0 */
    float SqFar; /* +0xa4 */
    float OOSqDiv; /* +0xa8 */
    /* aggregate */ int stZBuffer; /* +0xac */
    unsigned char bValid; /* +0xc4 */
    unsigned char ucObjectLighted; /* +0xc5 */
    unsigned char bIsPainting; /* +0xc6 */
    unsigned char ucIsAlpha; /* +0xc7 */
    /* aggregate */ int xInter_Min_Pos; /* +0xc8 */
    /* aggregate */ int xExter_Min_Pos; /* +0xd4 */
    /* aggregate */ int xInter_Max_Pos; /* +0xe0 */
    /* aggregate */ int xExter_Max_Pos; /* +0xec */
    /* aggregate */ int xCenterBox; /* +0xf8 */
    float xRadius; /* +0x104 */
    float xIntensity_Min; /* +0x108 */
    float xIntensity_Max; /* +0x10c */
    GEO_tdstColor_ stBackgroundColor; /* +0x110 */
    int bCreatesShadows; /* +0x120 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct sceGifTag {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long 8 : 4; /* bit None, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

union unFunction {
    int pfnPlayVoid; /* +0x0 */
    int pfnPlayParam; /* +0x0 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

int PS2GL_pMemoryBloc;
int PS2GL_SDL_DataBuffer;
int GLI_g_SdlCache;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 75–111 */
/* addr: 0x002cfd30  size: 232 bytes */
void J_New_GetParticleSpriteFromInterpolatedPoints(float (*) pParticles[4], /* function pointer */ int p1, /* function pointer */ int p2, float V)
{
    float vA[4];
    /* line map: */
    /*   line 75 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 82 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002cfe20  size: 8 bytes */
void CheckAllocMode(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1344–1344 */
/* addr: 0x002cfe30  size: 12 bytes */
void SetAllocMode(int mode)
{
    /* line map: */
    /*   line 1344 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1335–1337 */
/* addr: 0x002cfe40  size: 160 bytes */
void CheckPS2GLMem(void)
{
    unsigned int PreviousOne;
    signed char init;
    /* line map: */
    /*   line 1335 @ +0x000 */
    /*   line 1337 @ +0x000 */
    /*   line 1337 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1308–1325 */
/* addr: 0x002cfee0  size: 132 bytes */
void PS2GL_realloc(void* p, unsigned int size)
{
    unsigned int bFailed;
    void* p2;
    /* line map: */
    /*   line 1308 @ +0x000 */
    /*   line 1312 @ +0x000 */
    /*   line 1325 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1268–1288 */
/* addr: 0x002cff70  size: 244 bytes */
void PS2GL_free(void* p)
{
    /* line map: */
    /*   line 1268 @ +0x000 */
    /*   line 1288 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1237–1256 */
/* addr: 0x002d0070  size: 108 bytes */
void PS2GL_malloc(unsigned int size)
{
    unsigned int FoundSomethingToFree;
    /* line map: */
    /*   line 1237 @ +0x000 */
    /*   line 1241 @ +0x000 */
    /*   line 1256 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1220–1226 */
/* addr: 0x002d00e0  size: 76 bytes */
void PS2GL_vInitMemoryBloc(void)
{
    /* line map: */
    /*   line 1220 @ +0x000 */
    /*   line 1226 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1150–1197 */
/* addr: 0x002d0130  size: 484 bytes */
void DMMBloc::realloc_nofail(void* _pointer, unsigned int _size, unsigned int* p_bCouldntDoIt, /* function pointer */ int pAllocInfo)
{
    void* pNewPointer;
    unsigned int UseableAllocatedSize;
    /* line map: */
    /*   line 1150 @ +0x000 */
    /*   line 1153 @ +0x000 */
    /*   line 1161 @ +0x000 */
    /*   line 1166 @ +0x000 */
    /*   line 1174 @ +0x000 */
    /*   line 1179 @ +0x000 */
    /*   line 1184 @ +0x000 */
    /*   line 1188 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 1025–1081 */
/* addr: 0x002d0320  size: 280 bytes */
void DMMBloc::reduce(void* _pointer, unsigned int _size, /* function pointer */ int pFreeBloc, /* function pointer */ int pAllocInfo)
{
    unsigned int AlignedNewSize;
    unsigned int NewFreeSize;
    /* line map: */
    /*   line 1025 @ +0x000 */
    /*   line 1035 @ +0x000 */
    /*   line 1033 @ +0x000 */
    /*   line 1041 @ +0x000 */
    /*   line 1045 @ +0x000 */
    /*   line 1064 @ +0x000 */
    /*   line 1076 @ +0x000 */
    /*   line 1076 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 863–965 */
/* addr: 0x002d0440  size: 496 bytes */
void DMMBloc::memalign(unsigned int _alignment, unsigned int _size, /* function pointer */ int pAllocInfo, /* function pointer */ int pNewFreeBloc, /* function pointer */ int pFreeBloc)
{
    unsigned int NewFreeBlocSize;
    unsigned int AlignedSize;
    void* pBlocPointer;
    void* pBasePointer;
    unsigned int Found;
    unsigned int align_minus_one;
    unsigned int total_size;
    /* line map: */
    /*   line 863 @ +0x000 */
    /*   line 863 @ +0x000 */
    /*   line 864 @ +0x000 */
    /*   line 864 @ +0x000 */
    /*   line 875 @ +0x000 */
    /*   line 864 @ +0x000 */
    /*   line 868 @ +0x000 */
    /*   line 865 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 633–796 */
/* addr: 0x002d0630  size: 1284 bytes */
void DMMBloc::add_FreeBloc(/* function pointer */ int pFreeBloc, /* function pointer */ int pPreviousBloc, /* function pointer */ int pBloc)
{
    unsigned int EndBlocPointer;
    /* line map: */
    /*   line 633 @ +0x000 */
    /*   line 636 @ +0x000 */
    /*   line 638 @ +0x000 */
    /*   line 642 @ +0x000 */
    /*   line 647 @ +0x000 */
    /*   line 650 @ +0x000 */
    /*   line 652 @ +0x000 */
    /*   line 657 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 557–574 */
/* addr: 0x002d0b40  size: 96 bytes */
void DMMBloc::remove_from_hashtable(/* function pointer */ int pFreeBloc)
{
    unsigned int HashTableIndex;
    /* line map: */
    /*   line 557 @ +0x000 */
    /*   line 557 @ +0x000 */
    /*   line 562 @ +0x000 */
    /*   line 567 @ +0x000 */
    /*   line 574 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 501–526 */
/* addr: 0x002d0ba0  size: 260 bytes */
void DMMBloc::remove_FreeBloc(/* function pointer */ int pFreeBloc)
{
    /* line map: */
    /*   line 501 @ +0x000 */
    /*   line 506 @ +0x000 */
    /*   line 509 @ +0x000 */
    /*   line 516 @ +0x000 */
    /*   line 520 @ +0x000 */
    /*   line 522 @ +0x000 */
    /*   line 526 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\DMM.CPP lines 248–278 */
/* addr: 0x002d0cb0  size: 264 bytes */
void DMMBloc(unsigned int MemoryBlocSize, unsigned int Alignment)
{
    unsigned int i;
    /* line map: */
    /*   line 248 @ +0x000 */
    /*   line 251 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 256 @ +0x000 */
    /*   line 260 @ +0x000 */
    /*   line 263 @ +0x000 */
    /*   line 273 @ +0x000 */
    /*   line 273 @ +0x000 */
    /* TODO: decompile from asm/... */
}
