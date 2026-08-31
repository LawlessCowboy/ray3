/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct stRECT stRECT;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct stPOINT stPOINT;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

struct GLD_tdstDeviceAttributes_ {
    unsigned int dwHeight; /* +0x0 */
    unsigned int dwWidth; /* +0x4 */
    float xPixelDimensionX; /* +0x8 */
    float xPixelDimensionY; /* +0xc */
    int p_cVirtualScreen; /* +0x10 */
    int lPitch; /* +0x14 */
    int p_sZBuffer; /* +0x18 */
    unsigned int dwFullScreenModeX; /* +0x1c */
    unsigned int dwFullScreenModeY; /* +0x20 */
    unsigned int dwFullScreenModeBpp; /* +0x24 */
    int hFullScreenModeWnd; /* +0x28 */
    int hNormalModeWnd; /* +0x2c */
    int bFullScreen; /* +0x30 */
    unsigned int uiTypeDriver; /* +0x34 */
    stPOINT pClientOnPrimary; /* +0x38 */
    stRECT rtClientRect; /* +0x40 */
    stRECT rtWindowRect; /* +0x50 */
};

unsigned long SCT_g_ulDisplayingAgos;
unsigned char g_bMirrorOnly;
unsigned int SCT_g_DrawingMirrored;
unsigned char bViewingInMirror;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
/* aggregate */ int HIE_g_a_hMatrixStack;
int HIE_g_lNbMatrixInStack;
int (*fn_iZCompare)(void*, void*);
GEO_tdstColor_ GLI_stFogColor;
float GLI_xFogInfinite;
float GLI_xFogFar;
float GLI_xFogBlendFar;
float GLI_xFogNear;
float GLI_xFogBlendNear;
char GLI_cGlobalFogIsOn;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 76–76 */
/* addr: 0x0031a950  size: 12 bytes */
void SCT_fn_vInitMaterialForGoThrough(void)
{
    /* line map: */
    /*   line 76 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 957–964 */
/* addr: 0x0031a960  size: 172 bytes */
void SCT_fn_vInitMirrorFlagForAllSectors(/* function pointer */ int _hStaticRoot, /* function pointer */ int hSector)
{
    /* line map: */
    /*   line 957 @ +0x000 */
    /*   line 959 @ +0x000 */
    /*   line 962 @ +0x000 */
    /*   line 964 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 935–941 */
/* addr: 0x0031aa10  size: 172 bytes */
void SCT_fn_vDoPreClippingForPortal(/* function pointer */ int _hSector, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 935 @ +0x000 */
    /*   line 938 @ +0x000 */
    /*   line 941 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 886–928 */
/* addr: 0x0031aac0  size: 684 bytes */
void SCT_fn_vPreClippingForOnePortal(/* function pointer */ int _hIPOMirror, /* function pointer */ int p_stObject, /* function pointer */ int hPO, /* function pointer */ int hSprObjPortalSector, /* function pointer */ int hChild, /* function pointer */ int hPortalCamera)
{
    short idxPt3;
    short idxPt2;
    short idxPt1;
    short xNbFaces;
    short k;
    short i;
    /* aggregate */ int stNormal;
    /* aggregate */ int stPosCam;
    /* aggregate */ int stVector;
    /* aggregate */ int stPoint;
    /* aggregate */ int stTransMatrix;
    /* line map: */
    /*   line 886 @ +0x000 */
    /*   line 890 @ +0x000 */
    /*   line 892 @ +0x000 */
    /*   line 891 @ +0x000 */
    /*   line 894 @ +0x000 */
    /*   line 897 @ +0x000 */
    /*   line 900 @ +0x000 */
    /*   line 903 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 330–862 */
/* addr: 0x0031ad70  size: 4444 bytes */
void SCT_fn_vSendSectorWhereIAmToViewportWithMirror(/* function pointer */ int _p_stAbsolutePositionOfCamera, short _hDevice, short _hViewport, /* function pointer */ int _p_stVpt, /* function pointer */ int _hSprObjSector, int _lDrawMask, /* function pointer */ int hMatrix, SECT_tdstSector_* hSectorObject, SECT_tdstSector_* hSectorObject, /* function pointer */ int hMirrorIPO, /* function pointer */ int hPortalCamera, /* function pointer */ int hMainCamera, /* function pointer */ int hSprObjPortalSector, /* function pointer */ int p_stCpyCam)
{
    float xNorm;
    /* aggregate */ int VectTmp;
    float xNorm;
    unsigned int ulCustomBit;
    float fDot;
    /* aggregate */ int stTmpMatrix;
    /* aggregate */ int stMirrorMatrix;
    /* array */ int stPoint[12];
    /* aggregate */ int stNormal;
    /* aggregate */ int stVect2;
    /* aggregate */ int stVect1;
    /* aggregate */ int stKCam;
    /* aggregate */ int stJCam;
    /* aggregate */ int stICam;
    short kk;
    short k;
    short xNbFaces;
    short idxPt[12];
    short idxPt3;
    short idxPt2;
    short idxPt1;
    /* aggregate */ int stTempVectorForMultiplication;
    char OneWasDrawn;
    unsigned char bTVMode;
    /* aggregate */ int stPreviousPos;
    /* aggregate */ int stPreviousKCam;
    /* aggregate */ int stPreviousJCam;
    /* aggregate */ int stPreviousICam;
    GLD_tdstDeviceAttributes_ stDevAttrib;
    float xWaterDistance;
    /* aggregate */ int stCopyCam;
    /* aggregate */ int stSymCam;
    /* aggregate */ int stTransMatrix;
    /* aggregate */ int stGlobalPositionOfSymCamera;
    /* aggregate */ int stI;
    /* aggregate */ int p_hGlobalMatrixOfMirror;
    /* aggregate */ int stPointOfMirror;
    /* aggregate */ int stNormalOfMirror;
    /* aggregate */ int p_hHandleOfGeometricMirror;
    short i;
    char bRejected[6];
    unsigned char p_bIDrawTheMirror[6];
    short shNbOfMirror;
    /* aggregate */ int hSectorOfMirror;
    /* aggregate */ int hHandleOfMirror;
    /* line map: */
    /*   line 330 @ +0x000 */
    /*   line 330 @ +0x000 */
    /*   line 340 @ +0x000 */
    /*   line 347 @ +0x000 */
    /*   line 350 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 365 @ +0x000 */
    /*   line 368 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 280–280 */
/* addr: 0x0031bed0  size: 28 bytes */
int fn_iZCompare(void* arg1, void* arg2)
{
    /* line map: */
    /*   line 280 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sectmir.c lines 173–234 */
/* addr: 0x0031bef0  size: 396 bytes */
void SCT_fn_vFindAllMirrorsInVisibleSector(/* function pointer */ int _p_stVpt, /* function pointer */ int _hSprObjSector, /* function pointer */ int p_hHandleOfMirror, /* function pointer */ int p_hHandleOfGometricMirror, /* function pointer */ int p_hSectorOfMirror, short* p_shNbOfMirrors, /* function pointer */ int hGraphicElement)
{
    short shTempNbOfMirrors;
    short i;
    short xI;
    /* line map: */
    /*   line 173 @ +0x000 */
    /*   line 186 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 208 @ +0x000 */
    /*   line 215 @ +0x000 */
    /*   line 232 @ +0x000 */
    /* TODO: decompile from asm/... */
}
