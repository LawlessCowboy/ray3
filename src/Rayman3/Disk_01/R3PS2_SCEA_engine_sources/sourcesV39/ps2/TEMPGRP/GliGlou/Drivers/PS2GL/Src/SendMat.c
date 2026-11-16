/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"
#include "r3/GEO.h"
#include "r3/GLI.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_33 anon_33;
typedef struct anon_2 anon_2;
typedef union anon_3 anon_3;
typedef struct anon_13 anon_13;
typedef struct anon_19 anon_19;
typedef struct anon_24 anon_24;
typedef struct anon_18 anon_18;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tagListData tagListData;
typedef struct GLI_tdstTexturePS2GL_ GLI_tdstTexturePS2GL_;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct anon_4 anon_4;
typedef struct anon_15 anon_15;
typedef struct anon_32 anon_32;
typedef struct anon_39 anon_39;
typedef struct anon_28 anon_28;
typedef struct anon_34 anon_34;
typedef struct anon_22 anon_22;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct anon_7 anon_7;
typedef struct anon_8 anon_8;
typedef struct anon_9 anon_9;
typedef struct anon_10 anon_10;
typedef struct anon_11 anon_11;
typedef struct anon_12 anon_12;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_14 anon_14;
typedef struct anon_16 anon_16;
typedef struct anon_40 anon_40;
typedef struct anon_23 anon_23;
typedef struct anon_27 anon_27;
typedef struct anon_36 anon_36;
typedef struct anon_35 anon_35;
typedef struct anon_42 anon_42;
typedef struct anon_30 anon_30;
typedef struct anon_17 anon_17;
typedef struct anon_31 anon_31;
typedef struct anon_29 anon_29;
typedef struct anon_25 anon_25;
typedef struct anon_38 anon_38;
typedef struct anon_20 anon_20;
typedef struct anon_37 anon_37;
typedef struct anon_21 anon_21;
typedef struct anon_26 anon_26;
typedef struct anon_41 anon_41;
typedef struct tagGScontext tagGScontext;
typedef struct tagGLcontext tagGLcontext;

struct anon_0 {
    unsigned char pad00 : 3; /* bit 0, byte +0x0 */
    unsigned char IIP : 1; /* bit 3, byte +0x0 */
    unsigned char TME : 1; /* bit 4, byte +0x0 */
    unsigned char FGE : 1; /* bit 5, byte +0x0 */
    unsigned char ABE : 1; /* bit 6, byte +0x0 */
    unsigned char AA1 : 1; /* bit 7, byte +0x0 */
    unsigned char FST : 1; /* bit 8, byte +0x1 */
    unsigned char CTXT : 1; /* bit 9, byte +0x1 */
    unsigned char FIX : 1; /* bit 10, byte +0x1 */
    unsigned char pad11 : 5; /* bit 11, byte +0x1 */
    unsigned char _extractor_padding_anon0[6]; /* +0x2..0x7 */
};

struct anon_1 {
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
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*pData)[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    _sceDmaTag tagDma; /* +0x20 */
    anon_1 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct anon_33 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_2 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_33 st_UVStaticPos; /* +0xc */
    anon_33 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

union anon_3 {
    signed char bData[16]; /* +0x0 */
    unsigned char ubData[16]; /* +0x0 */
    short sData[8]; /* +0x0 */
    unsigned short usData[8]; /* +0x0 */
    int iData[4]; /* +0x0 */
    unsigned int uiData[4]; /* +0x0 */
    long i64Data[2]; /* +0x0 */
    unsigned long u64Data[2]; /* +0x0 */
    float fData[4]; /* +0x0 */
    double dData[2]; /* +0x0 */
};

struct anon_13 {
    unsigned long SBP : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long SBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long SPSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long DBP : 14; /* bit 32, byte +0x0 */
    unsigned long pad46 : 2; /* bit 46, byte +0x0 */
    unsigned long DBW : 6; /* bit 48, byte +0x0 */
    unsigned long pad54 : 2; /* bit 54, byte +0x0 */
    unsigned long DPSM : 6; /* bit 56, byte +0x0 */
    unsigned long pad62 : 2; /* bit 62, byte +0x0 */
};

struct anon_19 {
    unsigned long SSAX : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SSAY : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long DSAX : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long DSAY : 11; /* bit 48, byte +0x0 */
    unsigned long DIR : 2; /* bit 59, byte +0x0 */
    unsigned long pad61 : 3; /* bit 61, byte +0x0 */
};

struct anon_24 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_18 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagGsLoadImage {
    anon_1 gifTag; /* +0x0 */
    anon_13 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_19 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_24 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_18 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*pDmaBuffer)[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*pLastExecDmaBuffer)[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct GLI_tdstTexturePS2GL_ {
    unsigned int TextureID; /* +0x0 */
};

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct anon_4 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_15 {
    unsigned long pad00; /* +0x0 */
};

struct anon_32 {
    unsigned long TBP0 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW : 6; /* bit 14, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long TW : 4; /* bit 26, byte +0x0 */
    unsigned long TH : 4; /* bit 30, byte +0x0 */
    unsigned long TCC : 1; /* bit 34, byte +0x0 */
    unsigned long TFX : 2; /* bit 35, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_39 {
    unsigned long LCM : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 1; /* bit 1, byte +0x0 */
    unsigned long MXL : 3; /* bit 2, byte +0x0 */
    unsigned long MMAG : 1; /* bit 5, byte +0x0 */
    unsigned long MMIN : 3; /* bit 6, byte +0x0 */
    unsigned long MTBA : 1; /* bit 9, byte +0x0 */
    unsigned long pad10 : 9; /* bit 10, byte +0x0 */
    unsigned long L : 2; /* bit 19, byte +0x0 */
    unsigned long pad21 : 11; /* bit 21, byte +0x0 */
    unsigned long K : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_28 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_34 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_22 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    anon_1 gifTag; /* +0x0 */
    anon_15 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_32 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_39 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_28 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_34 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_22 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct anon_5 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_6 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    anon_2 a_stMultiMaterial[4]; /* +0x88 */
};

struct anon_7 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_8 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_9 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_10 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_11 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_12 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_14 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_16 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_40 {
    unsigned long PRIM : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct anon_23 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_27 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_36 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_35 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_42 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_30 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_17 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_31 {
    unsigned long DIMX00 : 3; /* bit 0, byte +0x0 */
    unsigned long pad00 : 1; /* bit 3, byte +0x0 */
    unsigned long DIMX01 : 3; /* bit 4, byte +0x0 */
    unsigned long pad01 : 1; /* bit 7, byte +0x0 */
    unsigned long DIMX02 : 3; /* bit 8, byte +0x0 */
    unsigned long pad02 : 1; /* bit 11, byte +0x0 */
    unsigned long DIMX03 : 3; /* bit 12, byte +0x0 */
    unsigned long pad03 : 1; /* bit 15, byte +0x0 */
    unsigned long DIMX10 : 3; /* bit 16, byte +0x0 */
    unsigned long pad10 : 1; /* bit 19, byte +0x0 */
    unsigned long DIMX11 : 3; /* bit 20, byte +0x0 */
    unsigned long pad11 : 1; /* bit 23, byte +0x0 */
    unsigned long DIMX12 : 3; /* bit 24, byte +0x0 */
    unsigned long pad12 : 1; /* bit 27, byte +0x0 */
    unsigned long DIMX13 : 3; /* bit 28, byte +0x0 */
    unsigned long pad13 : 1; /* bit 31, byte +0x0 */
    unsigned long DIMX20 : 3; /* bit 32, byte +0x0 */
    unsigned long pad20 : 1; /* bit 35, byte +0x0 */
    unsigned long DIMX21 : 3; /* bit 36, byte +0x0 */
    unsigned long pad21 : 1; /* bit 39, byte +0x0 */
    unsigned long DIMX22 : 3; /* bit 40, byte +0x0 */
    unsigned long pad22 : 1; /* bit 43, byte +0x0 */
    unsigned long DIMX23 : 3; /* bit 44, byte +0x0 */
    unsigned long pad23 : 1; /* bit 47, byte +0x0 */
    unsigned long DIMX30 : 3; /* bit 48, byte +0x0 */
    unsigned long pad30 : 1; /* bit 51, byte +0x0 */
    unsigned long DIMX31 : 3; /* bit 52, byte +0x0 */
    unsigned long pad31 : 1; /* bit 55, byte +0x0 */
    unsigned long DIMX32 : 3; /* bit 56, byte +0x0 */
    unsigned long pad32 : 1; /* bit 59, byte +0x0 */
    unsigned long DIMX33 : 3; /* bit 60, byte +0x0 */
    unsigned long pad33 : 1; /* bit 63, byte +0x0 */
};

struct anon_29 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_25 {
    unsigned short ATE : 1; /* bit 0, byte +0x0 */
    unsigned short ATST : 3; /* bit 1, byte +0x0 */
    unsigned short AREF : 8; /* bit 4, byte +0x0 */
    unsigned short AFAIL : 2; /* bit 12, byte +0x0 */
    unsigned short DATE : 1; /* bit 14, byte +0x0 */
    unsigned short DATM : 1; /* bit 15, byte +0x0 */
    unsigned char ZTE : 1; /* bit 16, byte +0x2 */
    unsigned char ZTST : 2; /* bit 17, byte +0x2 */
    unsigned char pad19 : 5; /* bit 19, byte +0x2 */
    unsigned char _extractor_padding_00[4];
};

struct anon_38 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_20 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_37 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_21 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_26 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_41 {
    unsigned char PRIM_Modified : 1; /* bit 0, byte +0x0 */
    unsigned char RGBAQ_Modified : 1; /* bit 1, byte +0x0 */
    unsigned char ST_Modified : 1; /* bit 2, byte +0x0 */
    unsigned char UV_Modified : 1; /* bit 3, byte +0x0 */
    unsigned char XYZF2_Modified : 1; /* bit 4, byte +0x0 */
    unsigned char XYZ2_Modified : 1; /* bit 5, byte +0x0 */
    unsigned char TEX0_1_Modified : 1; /* bit 6, byte +0x0 */
    unsigned char TEX0_2_Modified : 1; /* bit 7, byte +0x0 */
    unsigned char CLAMP_1_Modified : 1; /* bit 8, byte +0x0 */
    unsigned char CLAMP_2_Modified : 1; /* bit 9, byte +0x0 */
    unsigned char FOG_Modified : 1; /* bit 10, byte +0x0 */
    unsigned char XYZF3_Modified : 1; /* bit 11, byte +0x0 */
    unsigned char XYZ3_Modified : 1; /* bit 12, byte +0x0 */
    unsigned char TEX1_1_Modified : 1; /* bit 13, byte +0x0 */
    unsigned char TEX1_2_Modified : 1; /* bit 14, byte +0x0 */
    unsigned char TEX2_1_Modified : 1; /* bit 15, byte +0x0 */
    unsigned char TEX2_2_Modified : 1; /* bit 16, byte +0x0 */
    unsigned char XYOFFSET_1_Modified : 1; /* bit 17, byte +0x0 */
    unsigned char XYOFFSET_2_Modified : 1; /* bit 18, byte +0x0 */
    unsigned char PRMODECONT_Modified : 1; /* bit 19, byte +0x0 */
    unsigned char PRMODE_Modified : 1; /* bit 20, byte +0x0 */
    unsigned char TEXCLUT_Modified : 1; /* bit 21, byte +0x0 */
    unsigned char SCANMSK_Modified : 1; /* bit 22, byte +0x0 */
    unsigned char MIPTBP1_1_Modified : 1; /* bit 23, byte +0x0 */
    unsigned char MIPTBP1_2_Modified : 1; /* bit 24, byte +0x0 */
    unsigned char MIPTBP2_1_Modified : 1; /* bit 25, byte +0x0 */
    unsigned char MIPTBP2_2_Modified : 1; /* bit 26, byte +0x0 */
    unsigned char TEXA_Modified : 1; /* bit 27, byte +0x0 */
    unsigned char FOGCOL_Modified : 1; /* bit 28, byte +0x0 */
    unsigned char TEXFLUSH_Modified : 1; /* bit 29, byte +0x0 */
    unsigned char SCISSOR_1_Modified : 1; /* bit 30, byte +0x0 */
    unsigned char SCISSOR_2_Modified : 1; /* bit 31, byte +0x0 */
    unsigned char ALPHA_1_Modified : 1; /* bit 32, byte +0x0 */
    unsigned char ALPHA_2_Modified : 1; /* bit 33, byte +0x0 */
    unsigned char DIMX_Modified : 1; /* bit 34, byte +0x0 */
    unsigned char DTHE_Modified : 1; /* bit 35, byte +0x0 */
    unsigned char COLCLAMP_Modified : 1; /* bit 36, byte +0x0 */
    unsigned char TEST_1_Modified : 1; /* bit 37, byte +0x0 */
    unsigned char TEST_2_Modified : 1; /* bit 38, byte +0x0 */
    unsigned char PABE_Modified : 1; /* bit 39, byte +0x0 */
    unsigned char FBA_1_Modified : 1; /* bit 40, byte +0x0 */
    unsigned char FBA_2_Modified : 1; /* bit 41, byte +0x0 */
    unsigned char FRAME_1_Modified : 1; /* bit 42, byte +0x0 */
    unsigned char FRAME_2_Modified : 1; /* bit 43, byte +0x0 */
    unsigned char ZBUF_1_Modified : 1; /* bit 44, byte +0x0 */
    unsigned char ZBUF_2_Modified : 1; /* bit 45, byte +0x0 */
    unsigned char BITBLTBUF_Modified : 1; /* bit 46, byte +0x0 */
    unsigned char TRXPOS_Modified : 1; /* bit 47, byte +0x0 */
    unsigned char TRXREG_Modified : 1; /* bit 48, byte +0x0 */
    unsigned char TRXDIR_Modified : 1; /* bit 49, byte +0x0 */
    unsigned char HWREG_Modified : 1; /* bit 50, byte +0x0 */
    unsigned char SIGNAL_Modified : 1; /* bit 51, byte +0x0 */
    unsigned char FINISH_Modified : 1; /* bit 52, byte +0x0 */
    unsigned char LABEL_Modified : 1; /* bit 53, byte +0x6 */
    unsigned char _extractor_padding_00[1];
};

struct tagGScontext {
    anon_40 PRIM; /* +0x0 */
    anon_9 RGBAQ; /* +0x8 */
    anon_23 ST; /* +0x10 */
    anon_27 UV; /* +0x18 */
    anon_36 XYZF2; /* +0x20 */
    anon_35 XYZ2; /* +0x28 */
    anon_32 TEX0_1; /* +0x30 */
    anon_32 TEX0_2; /* +0x38 */
    anon_22 CLAMP_1; /* +0x40 */
    anon_22 CLAMP_2; /* +0x48 */
    anon_14 FOG; /* +0x50 */
    anon_36 XYZF3; /* +0x58 */
    anon_35 XYZ3; /* +0x60 */
    anon_39 TEX1_1; /* +0x68 */
    anon_39 TEX1_2; /* +0x70 */
    anon_42 TEX2_1; /* +0x78 */
    anon_42 TEX2_2; /* +0x80 */
    anon_30 XYOFFSET_1; /* +0x88 */
    anon_30 XYOFFSET_2; /* +0x90 */
    anon_5 PRMODECONT; /* +0x98 */
    anon_0 PRMODE; /* +0xa0 */
    anon_11 TEXCLUT; /* +0xa8 */
    anon_12 SCANMSK; /* +0xb0 */
    anon_28 MIPTBP1_1; /* +0xb8 */
    anon_28 MIPTBP1_2; /* +0xc0 */
    anon_34 MIPTBP2_1; /* +0xc8 */
    anon_34 MIPTBP2_2; /* +0xd0 */
    anon_4 TEXA; /* +0xd8 */
    anon_17 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_16 SCISSOR_1; /* +0xf0 */
    anon_16 SCISSOR_2; /* +0xf8 */
    anon_7 ALPHA_1; /* +0x100 */
    anon_7 ALPHA_2; /* +0x108 */
    anon_31 DIMX; /* +0x110 */
    anon_8 DTHE; /* +0x118 */
    anon_29 COLCLAMP; /* +0x120 */
    anon_25 TEST_1; /* +0x128 */
    anon_25 TEST_2; /* +0x130 */
    anon_38 PABE; /* +0x138 */
    anon_10 FBA_1; /* +0x140 */
    anon_10 FBA_2; /* +0x148 */
    anon_20 FRAME_1; /* +0x150 */
    anon_20 FRAME_2; /* +0x158 */
    anon_37 ZBUF_1; /* +0x160 */
    anon_37 ZBUF_2; /* +0x168 */
    anon_13 BITBLTBUF; /* +0x170 */
    anon_19 TRXPOS; /* +0x178 */
    anon_24 TRXREG; /* +0x180 */
    anon_18 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_21 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_26 LABEL; /* +0x1a8 */
    anon_41 ModFlgs; /* +0x1b0 */
    anon_41 GlobalModFlgs; /* +0x1b8 */
    anon_3 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_3* pqCurrent; /* +0x2224 */
    anon_1* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct tagGLcontext {
    unsigned int nEnableBits; /* +0x0 */
    float fPointSize; /* +0x4 */
    int iLineFactor; /* +0x8 */
    unsigned short nLineMask; /* +0xc */
    float fLineWidth; /* +0x10 */
    unsigned int eCullFaceMode; /* +0x14 */
    unsigned int eFrontFaceMode; /* +0x18 */
    unsigned int ePolygonMode[2]; /* +0x1c */
    unsigned char aPolygonMask[128]; /* +0x24 */
    unsigned int eClippingFunction; /* +0xa4 */
    unsigned int eSPRMode; /* +0xa8 */
    unsigned char bSPRSynchronization; /* +0xac */
    unsigned int eTexConvMode; /* +0xb0 */
    unsigned int eClutConvMode; /* +0xb4 */
    unsigned int eTexUserMaintainMode; /* +0xb8 */
    unsigned int uiMotionBlurIntensity; /* +0xbc */
    unsigned short iAccumDepth; /* +0xc0 */
    unsigned char bAlphaChannelReduce; /* +0xc2 */
    unsigned int uiCurrentDmaBuffer; /* +0xc4 */
    unsigned short usDontUpdateBits; /* +0xc8 */
    unsigned int uiFastPathBits; /* +0xcc */
    unsigned int uiDmaOmitDataBits; /* +0xd0 */
    unsigned int uiBoundingSphereBits; /* +0xd4 */
    unsigned int uiStaticDisplayListMaxSize; /* +0xd8 */
    unsigned int uiStaticDisplayListBits; /* +0xdc */
    signed char ucSDLObjectReserveSize; /* +0xe0 */
    unsigned char _extractor_padding_08[15]; /* explicit retail gap; +0xe1..0xef */
    float vScissorBox[4]; /* +0xf0 */
    float fIndexClearValue; /* +0x100 */
    unsigned int eAlphaTestFunc; /* +0x104 */
    float fAlphaTestRef; /* +0x108 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x10c..0x10f */
    float vAccumClearValue[4]; /* +0x110 */
    unsigned int eBlendSrcFactor; /* +0x120 */
    unsigned int eBlendDstFactor; /* +0x124 */
    unsigned int eDrawBuffer; /* +0x128 */
    unsigned int eBufferReadMode; /* +0x12c */
    float vColorClearValue[4]; /* +0x130 */
    unsigned char abColorMask[4]; /* +0x140 */
    unsigned int eDepthFunc; /* +0x144 */
    float fDepthClearValue; /* +0x148 */
    unsigned char eDepthWriteMask; /* +0x14c */
    unsigned int eStencilFunc; /* +0x150 */
    int iStencilRef; /* +0x154 */
    unsigned int nStencilValueMask; /* +0x158 */
    unsigned int nStencilWriteMask; /* +0x15c */
    unsigned int eOpFail; /* +0x160 */
    unsigned int eOpZFail; /* +0x164 */
    unsigned int eOpZPass; /* +0x168 */
    int iStencilClearValue; /* +0x16c */
    unsigned int eLogicOpCode; /* +0x170 */
    unsigned int nLightBits; /* +0x174 */
    unsigned int bPointLighting; /* +0x178 */
    unsigned int nTextureEnableBits; /* +0x17c */
    tag_GLtexture_set TextureSet[2]; /* +0x180 */
    tag_GLtexture_set* pCurTexture; /* +0x240 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x244..0x24f */
    tagGsLoadImage stGsLoadImage; /* +0x250 */
    tagGsSetTex astGsSetTex[2]; /* +0x2a0 */
    tagGsSetTex* pstCurGsSetTex; /* +0x380 */
    unsigned int anCurTexName1D[2]; /* +0x384 */
    unsigned int anCurTexName2D[2]; /* +0x38c */
    unsigned int nCurTexNameCube; /* +0x394 */
    tagGLtexname aTexName[512]; /* +0x398 */
    unsigned int eTexLastBindTarget; /* +0x3b98 */
    unsigned int nTexLastBindName; /* +0x3b9c */
    int iMaxTexBlockCount; /* +0x3ba0 */
    tagGLtexblock aBlockMap[604]; /* +0x3ba4 */
    unsigned int nTexMemBegin; /* +0x4514 */
    unsigned int nTexMemEnd; /* +0x4518 */
    int aTexLevelCount[10]; /* +0x451c */
    tagGLtexindex aTexLevelIndex[1203]; /* +0x4544 */
    int iClutSize; /* +0x5810 */
    unsigned char bClutResident; /* +0x5814 */
    int clut; /* +0x5818 */
    unsigned char bMatrixChanged; /* +0x581c */
    unsigned char bBSParamChanged; /* +0x581d */
    unsigned char bLightsChanged; /* +0x581e */
    unsigned char bMaterialChanged; /* +0x581f */
    unsigned char bFogChanged; /* +0x5820 */
    unsigned char bCullfaceChanged; /* +0x5821 */
    unsigned int eOldBeginMode; /* +0x5824 */
    unsigned char abTex1DChanged[2]; /* +0x5828 */
    unsigned char abTex2DChanged[2]; /* +0x582a */
    unsigned char bTexCubeChanged; /* +0x582c */
    int pfnLastCall; /* +0x5830 */
    unsigned int nEvaluatorBits; /* +0x5834 */
    unsigned char bNeedNormal; /* +0x5838 */
    tag_GLlight Lights[8]; /* +0x5840 */
    unsigned char bLocalViewer; /* +0x5bc0 */
    unsigned char bLightModelTwoSide; /* +0x5bc1 */
    unsigned char _extractor_padding_09[14]; /* explicit retail gap; +0x5bc2..0x5bcf */
    float vAmbient[4]; /* +0x5bd0 */
    unsigned int eColorControl; /* +0x5be0 */
    unsigned char bLightModelDiffuseOnly; /* +0x5be4 */
    tag_GLmaterial Materials[2]; /* +0x5bf0 */
    unsigned int eColorMaterialFace; /* +0x5c90 */
    unsigned int eColorMaterialMode; /* +0x5c94 */
    unsigned int eShadeModel; /* +0x5c98 */
    unsigned int eFogMode; /* +0x5c9c */
    int ivFogColor[4]; /* +0x5ca0 */
    float fFogDensity; /* +0x5cb0 */
    float fFogLinearStart; /* +0x5cb4 */
    float fFogLinearEnd; /* +0x5cb8 */
    float fFogIndex; /* +0x5cbc */
    unsigned int eHintPerspectiveCorrection; /* +0x5cc0 */
    unsigned int eHintSmoothPoint; /* +0x5cc4 */
    unsigned int eHintSmoothLine; /* +0x5cc8 */
    unsigned int eHintSmoothPolygon; /* +0x5ccc */
    unsigned int eHintFog; /* +0x5cd0 */
    unsigned int uiListBase; /* +0x5cd4 */
    tagListData* pCurListData; /* +0x5cd8 */
    tagGLlistcalls* pCurListCalls; /* +0x5cdc */
    tagGLlistcalls* pPreListCalls; /* +0x5ce0 */
    tagGLprimbuf* pCurPrimBuf; /* +0x5ce4 */
    anon_6* pCurParamBegin; /* +0x5ce8 */
    tagGLprimbuf** ppCurPrimBufHead; /* +0x5cec */
    float (*pCurListVData)[4]; /* +0x5cf0 */
    int pCurListVCode; /* +0x5cf4 */
    int pCurListTexUnit; /* +0x5cf8 */
    tagGLlistpool ListPool; /* +0x5cfc */
    unsigned int nClientEnableBits; /* +0x5f08 */
    tagGLArrayInfo VertexArray; /* +0x5f0c */
    tagGLArrayInfo ColorArray[2]; /* +0x5f1c */
    tagGLArrayInfo NormalArray; /* +0x5f3c */
    tagGLArrayInfo TexArray[2]; /* +0x5f4c */
    tagGLArrayInfo IndexArray; /* +0x5f6c */
    tagGLArrayInfo EdgeFlagArray; /* +0x5f7c */
    unsigned int iCurClientTextureSet; /* +0x5f8c */
    unsigned int iFrameCount; /* +0x5f90 */
    unsigned int iDepthBuffer; /* +0x5f94 */
    unsigned int iDepthBufferBitDepth; /* +0x5f98 */
    unsigned int iFrameBufferBitDepth; /* +0x5f9c */
    unsigned int iFrameBuffer0; /* +0x5fa0 */
    unsigned int iFrameBuffer1; /* +0x5fa4 */
    unsigned int iFrameBufferFront; /* +0x5fa8 */
    unsigned int iFrameBufferBack; /* +0x5fac */
    int iPackAlignment; /* +0x5fb0 */
    unsigned char bFrameMode; /* +0x5fb4 */
    int iMipMapCoeff; /* +0x5fb8 */
    int iAlignMask; /* +0x5fbc */
    unsigned char bMapColor; /* +0x5fc0 */
    unsigned char bMapStencil; /* +0x5fc1 */
    int iIndexShift; /* +0x5fc4 */
    int iIndexOffset; /* +0x5fc8 */
    float fRedBias; /* +0x5fcc */
    float fRedScale; /* +0x5fd0 */
    float fGreenBias; /* +0x5fd4 */
    float fGreenScale; /* +0x5fd8 */
    float fBlueBias; /* +0x5fdc */
    float fBlueScale; /* +0x5fe0 */
    float fAlphaBias; /* +0x5fe4 */
    float fAlphaScale; /* +0x5fe8 */
    float fDepthBias; /* +0x5fec */
    float fDepthScale; /* +0x5ff0 */
    float fPixelZoomX; /* +0x5ff4 */
    float fPixelZoomY; /* +0x5ff8 */
    unsigned int nClipBits; /* +0x5ffc */
    int iMaxClipPlanes; /* +0x6000 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x6004..0x600f */
    float avClipPlane[6][4]; /* +0x6010 */
    unsigned int eMatrixMode; /* +0x6070 */
    float (*pCurMatrix)[4][4]; /* +0x6074 */
    float (*pCurStack)[4][4]; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    unsigned char _extractor_padding_10[8]; /* explicit retail gap; +0x6088..0x608f */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    unsigned char _extractor_padding_11[8]; /* explicit retail gap; +0x60a8..0x60af */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    unsigned char _extractor_padding_12[7]; /* explicit retail gap; +0x6119..0x611f */
    float valistColor[2][4]; /* +0x6120 */
    float (*pvlistColor)[4]; /* +0x6140 */
    unsigned char _extractor_padding_04[12]; /* implicitly added by extractor; +0x6144..0x614f */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    float (*pvlistTexCoord)[4]; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    float (*pvRasterTexCoord)[4]; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    unsigned char _extractor_padding_13[11]; /* explicit retail gap; +0x61e5..0x61ef */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    float (*pfvPackaeBSs)[4]; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    float ModelViewMatrix[4][4]; /* +0x62b0 */
    float NormalMatrix[4][4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    unsigned char _extractor_padding_05[12]; /* implicitly added by extractor; +0x6334..0x633f */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    unsigned char _extractor_padding_06[12]; /* implicitly added by extractor; +0x67c4..0x67cf */
    float ProjectionStack[4][4][4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    float TextureMatrix[2][4][4]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    unsigned char _extractor_padding_14[8]; /* explicit retail gap; +0x6978..0x697f */
    float TextureStacks[2][4][4][4]; /* +0x6980 */
    float (*pTextureMatrix)[4][4]; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    float (*pTextureStack)[4][4]; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    float (*pVBuf)[4]; /* +0x6b9c */
    float (*pCBuf)[4]; /* +0x6ba0 */
    float (*pNBuf)[4]; /* +0x6ba4 */
    float (*pTBuf)[4]; /* +0x6ba8 */
    float (*pCBuf_b)[4]; /* +0x6bac */
    float (*pTBuf_b)[4]; /* +0x6bb0 */
    float (*pVIFDMABuf)[4]; /* +0x6bb4 */
    float (*pVIFDMABufUnaligned)[4]; /* +0x6bb8 */
    float (*pVIFInBuf)[4]; /* +0x6bbc */
    float (*pVIFOutBuf)[4]; /* +0x6bc0 */
    float (*pVIFIBufTail)[4]; /* +0x6bc4 */
    float (*pVIFOBufTail)[4]; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    _sceDmaTag* pVU1_DMA_parameters; /* +0x6bd0 */
    _sceDmaTag* pVU1_DMA_buf0; /* +0x6bd4 */
    _sceDmaTag* pVU1_DMA_buf1; /* +0x6bd8 */
    float (*pmClipping)[4][4]; /* +0x6bdc */
    float (*pmNormal)[4][4]; /* +0x6be0 */
    float (*pmClippingScreen)[4][4]; /* +0x6be4 */
    float (*pmLocalScreen)[4][4]; /* +0x6be8 */
    float (*pmModelView)[4][4]; /* +0x6bec */
    float (*pvClampLimit)[4]; /* +0x6bf0 */
    int (*pClippingFlags)[4]; /* +0x6bf4 */
    anon_1* pGifTagFan; /* +0x6bf8 */
    float (*pmD)[4][4]; /* +0x6bfc */
    float (*pmVP)[4][4]; /* +0x6c00 */
    float (*pmS)[4][4]; /* +0x6c04 */
    float (*pmh)[4][4]; /* +0x6c08 */
    float (*pvAmbient)[4]; /* +0x6c0c */
    float (*pvEmission)[4]; /* +0x6c10 */
    float (*pvScreenScale)[4]; /* +0x6c14 */
    float (*pvColorRange)[4]; /* +0x6c18 */
    int pfAlpha; /* +0x6c1c */
    int pfShininess; /* +0x6c20 */
    int pnColorMatMasks; /* +0x6c24 */
    int pbFogging; /* +0x6c28 */
    int peFogMode; /* +0x6c2c */
    int pfFogDensity; /* +0x6c30 */
    int pfFogLinearStart; /* +0x6c34 */
    int pfFogLinearEnd; /* +0x6c38 */
    int pbTriangleFan; /* +0x6c3c */
    int pnClipMask; /* +0x6c40 */
    int piClipStep; /* +0x6c44 */
    int pbNormalize; /* +0x6c48 */
    int piReturnAddress; /* +0x6c4c */
    int piEntryAddress; /* +0x6c50 */
    int peClippingMode; /* +0x6c54 */
    int peUseClippingMode; /* +0x6c58 */
    anon_1* pGifTagBuf0; /* +0x6c5c */
    anon_1* pGifTagBuf1; /* +0x6c60 */
    int iCurBuf; /* +0x6c64 */
    float (*pVBuf0)[4]; /* +0x6c68 */
    float (*pNBuf0)[4]; /* +0x6c6c */
    float (*pCBuf0)[4]; /* +0x6c70 */
    float (*pTBuf0)[4]; /* +0x6c74 */
    float (*pCBuf0_b)[4]; /* +0x6c78 */
    float (*pTBuf0_b)[4]; /* +0x6c7c */
    float (*pVBuf1)[4]; /* +0x6c80 */
    float (*pNBuf1)[4]; /* +0x6c84 */
    float (*pCBuf1)[4]; /* +0x6c88 */
    float (*pTBuf1)[4]; /* +0x6c8c */
    float (*pCBuf1_b)[4]; /* +0x6c90 */
    float (*pTBuf1_b)[4]; /* +0x6c94 */
    tagstVIFCode* pMSCAL; /* +0x6c98 */
    unsigned char _extractor_padding_07[4]; /* implicitly added by extractor; +0x6c9c..0x6c9f */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

unsigned int GLI_g_HadHeatFx;
int PS2GL_g_DontRecalculateMatrix;
int PS2GL_g_DontUpdateTexture;
int GLI_g_Previous_Material_Was_Opaque;
int GLI_g_p_stLastTexture;
int GLI_g_LastTextureMode;
unsigned int GLI_g_DontRefreshAnimated;
int GLI_g_HasVertexTransparency;
int GLI_g_HasVertexTransparency2;
int g_TextMatrixIsIdentity;
int GLI_g_LastCyclingMode;
unsigned int GLI_g_CurrentFogMode;
int GLI_g_AnimatedTextureToUse;
float g_fFogColor[4];
float g_fFogColorZero[4];
float g_fFogColorHalf[4];
float g_fFogStart;
int g_b_UsingFog;
unsigned int GLI_g_CurrentSDLFogColor;
float GLI_g_OOStartMinusEnd;
float g_fFogEnd;
char GLI_g_RecoverMode;
unsigned int GLI_g_bChromeEffectOnThisLayer;
unsigned int GLI_g_BadColorMask;
unsigned int g_fFogColorDummy[4];
char GLI_b_CreatingActorSDL;
unsigned int GLI_g_ThisLayerHasScrolling;
GLI_tdstMaterial_* GLI_BIG_GLOBALS_hCurrentMaterial;
int GLI_BIG_GLOBALS_xFogIsOn;
unsigned int hCurrentSDL;
unsigned int GLI_g_NumberInList;
unsigned int GLI_g_CurrentStage;
int GLI_BIG_GLOBALS_lCurrentDrawMask;
float GLI_BIG_GLOBALS_xGlobalAlpha;
int GLI_g_ChristianSlaterMode;
float g_ffFrameTime;
void (*g_SEND_MAT_OPT_MULT_ADD)(GLI_tdstMaterial_*);
void (*g_SEND_MAT_OPT_MULT_NZ)(GLI_tdstMaterial_*);
void (*g_SEND_MAT_OPT_MULT_ALPHA)(GLI_tdstMaterial_*);
void (*g_SEND_MAT_OPT_MULT_OPAQUE)(GLI_tdstMaterial_*);
void (*g_SEND_MAT_OPT_ALPHA)(GLI_tdstMaterial_*);
void (*g_SEND_MAT_OPT_ADD)(GLI_tdstMaterial_*);
void (*g_SEND_MAT_OPT_NZ)(GLI_tdstMaterial_*);
void (*g_SEND_MAT_OPT_OPAQUE)(GLI_tdstMaterial_*);
tagGLcontext g_PS2glContext;
tagGScontext g_gsContext;
char GLI_cGlobalFogIsOn;
char GLI_g_AfterEffect;
char g_bForceWhiteFog;

extern int GLI_xRefreshAnimatedTexture(GLI_tdstMaterial_* hVisualMaterial);
extern void PS2glEnable(unsigned int cap);
void SetFogc(void);
#define SET_FOG(ON_MODE, OFF_MODE, COLOR) do { \
    if (GLI_BIG_GLOBALS_xFogIsOn != 0) \
    { \
        if (GLI_g_CurrentFogMode != (ON_MODE)) \
        { \
            g_PS2glContext.nEnableBits |= 0x80; \
            g_gsContext.PRMODE.FGE = 1; \
            g_gsContext.ModFlgs.PRMODE_Modified = 1; \
            *(unsigned char*)g_PS2glContext.pbFogging = 1; \
            PS2glFogi(0xB65, 0x2601); \
            PS2glFogf(0xB63, g_fFogStart); \
            PS2glFogf(0xB64, g_fFogEnd); \
            PS2glFogfv(0xB66, COLOR); \
            GLI_g_CurrentFogMode = (ON_MODE); \
        } \
    } \
    else if (GLI_g_CurrentFogMode != (OFF_MODE)) \
    { \
        g_PS2glContext.nEnableBits &= ~0x80; \
        g_gsContext.PRMODE.FGE = 0; \
        g_gsContext.ModFlgs.PRMODE_Modified = 1; \
        *(unsigned char*)g_PS2glContext.pbFogging = 0; \
        GLI_g_CurrentFogMode = (OFF_MODE); \
    } \
} while (0)
#define SET_FOGC() SET_FOG(1, 3, g_fFogColor)
extern void PS2glSetGsRegister(int reg, unsigned long data, unsigned long mask);
extern void PS2glBindTexture(unsigned int target, unsigned int texture);
extern void PS2glMatrixMode(unsigned int mode);
extern void PS2glLoadIdentity(void);
extern void PS2glTexParameteri(unsigned int target, unsigned int pname, int param);
extern void PS2glBlendFunc(unsigned int sfactor, unsigned int dfactor);
extern void PS2glDepthMask(unsigned char flag);
extern void PS2glAlphaFunc(unsigned int func, float ref);
extern void PS2glFogfv(unsigned int pname, float* params);
extern void PS2glFogi(unsigned int pname, int param);
extern void PS2glFogf(unsigned int pname, float param);
extern void PS2glFogiv(unsigned int pname, const unsigned int* params);
extern unsigned int SDL_REF_GetNewFogRef(unsigned int count);
extern void SDL_AddRef(unsigned int handle, unsigned int reference);
extern void PS2glDisable(unsigned int cap);
extern void PS2glTranslatef(float x, float y, float z);
extern void GLI_vRefreshMultiTexturePart(GLI_tdstMaterial_* _pst_Material);
extern unsigned int SDL_REF_GetNewTextureOffsetRef(float du, float dv, unsigned int Index, GLI_tdstMaterial_* hMaterial);
extern char* strstr(const char* s1, const char* s2);

/* The engine's MTH float-to-int helper: retail converts through the
 * callee-saved $f30 ("cvt.w.s $f30, x; mfc1 r, $f30"), which only the MTH
 * asm macro produces (MWCC's own conversion is trunc.w.s in a scratch reg). */
inline int MTH_M_xRealToLong(float xValue)
{
    int lResult;
    asm
    {
        cvt.w.s f30, xValue
        mfc1 lResult, f30
    }
    return lResult;
}

#define GLI_M_STATIC_FOG(COLOR) \
    if (GLI_BIG_GLOBALS_xFogIsOn) { PS2glEnable(0xB60); PS2glFogi(0xB65, 0x2601); PS2glFogf(0xB63, g_fFogStart); PS2glFogf(0xB64, g_fFogEnd); PS2glFogfv(0xB66, COLOR); } else PS2glDisable(0xB60)

extern void PS2glColorMask(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
/* PS2GL state changes, inlined in GLI_DRV_SendMaterialToViewport. */
#define M_ENABLE_TEXTURE() do { \
    g_PS2glContext.nTextureEnableBits |= (g_PS2glContext.iCurTextureSet == 0) ? 2 : 0x200; \
    g_gsContext.PRMODE.TME = 1; \
    g_gsContext.ModFlgs.PRMODE_Modified = 1; \
} while (0)
#define M_DISABLE_TEXTURE() do { \
    g_PS2glContext.nTextureEnableBits &= (g_PS2glContext.iCurTextureSet == 0) ? ~2 : ~0x200; \
    g_gsContext.PRMODE.TME = (g_PS2glContext.nTextureEnableBits & 0xF) ? 1 : 0; \
    g_gsContext.ModFlgs.PRMODE_Modified = 1; \
} while (0)
#define M_ENABLE_BLEND() do { \
    g_PS2glContext.nEnableBits |= 0x100; \
    g_gsContext.PRMODE.ABE = 1; \
    g_gsContext.ModFlgs.PRMODE_Modified = 1; \
} while (0)
#define M_DISABLE_BLEND() do { \
    g_PS2glContext.nEnableBits &= ~0x100; \
    g_gsContext.PRMODE.ABE = 0; \
    g_gsContext.ModFlgs.PRMODE_Modified = 1; \
} while (0)
#define M_ENABLE_ALPHATEST() do { \
    g_PS2glContext.nEnableBits |= 0x400; \
    g_gsContext.TEST_1.ATE = 1; \
    g_gsContext.ModFlgs.TEST_1_Modified = 1; \
} while (0)
#define M_DISABLE_ALPHATEST() do { \
    g_PS2glContext.nEnableBits &= ~0x400; \
    g_gsContext.TEST_1.ATE = 0; \
    g_gsContext.ModFlgs.TEST_1_Modified = 1; \
} while (0)
#define M_DISABLE_FOG() do { \
    g_PS2glContext.nEnableBits &= ~0x80; \
    g_gsContext.PRMODE.FGE = 0; \
    g_gsContext.ModFlgs.PRMODE_Modified = 1; \
    *(unsigned char*)g_PS2glContext.pbFogging = 0; \
} while (0)
#define M_DISABLE_DEPTHTEST() do { \
    g_PS2glContext.nEnableBits &= ~0x800; \
    g_gsContext.TEST_1.ZTE = 1; \
    g_gsContext.ModFlgs.TEST_1_Modified = 1; \
    g_gsContext.TEST_1.ZTST = 1; \
    g_gsContext.ModFlgs.TEST_1_Modified = 1; \
} while (0)

int TBF_g_CurrentFileAllocation;
int TBF_g_CurrentFileSize;
void* TBF_g_CurrentFileBuffer;
int TBF_g_CurrentFile;
int TBF_g_UseTBFWriteCache;

extern void* realloc(void* ptr, unsigned int size);
extern void free(void* ptr);
extern int sceWrite(int fd, const void* buffer, int length);

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
void TBF_ChangeCacheSize(int size);
int GLI_bIsMaterialAdditive(GLI_tdstMaterial_* hVisualMaterial);
void GLI_vSendStaticMaterialToViewport(GLI_tdstMaterial_* hVisualMaterial);
void GLI_vForceSkinMaterialIndex(GLI_tdstMaterial_* pMat, unsigned int Index);
void SetStaticFog(void);
void GLI_vAssignOptimizedFunctionToMaterial(GLI_tdstMaterial_* hVisualMaterial);
int GLI_DRV_IsMaterialTransparent(GLI_tdstMaterial_* hVisualMaterial);
void SEND_MAT_OPT_MULT_ADD(GLI_tdstMaterial_* hVisualMaterial);
void SEND_MAT_OPT_MULT_NZ(GLI_tdstMaterial_* hVisualMaterial);
void SEND_MAT_OPT_MULT_OPAQUE(GLI_tdstMaterial_* hVisualMaterial);
void SEND_MAT_OPT_MULT_ALPHA(GLI_tdstMaterial_* hVisualMaterial);
void SEND_MAT_OPT_ALPHA(GLI_tdstMaterial_* hVisualMaterial);
void SEND_MAT_OPT_ADD(GLI_tdstMaterial_* hVisualMaterial);
void SEND_MAT_OPT_NZ(GLI_tdstMaterial_* hVisualMaterial);
void SEND_MAT_OPT_OPAQUE(GLI_tdstMaterial_* hVisualMaterial);
void GLI_DRV_SendMaterialToViewport(GLI_tdstMaterial_* hVisualMaterial);
void SetFogc(void);
void GLI_vSetFogParameters(float start, float end, float* color);

inline signed char GLI_cGetUVSource(anon_2* pMat)
{
    return pMat ? pMat->c_UVSource : 0;
}


void GLI_vSetFogParameters(float start, float end, float* color)
{
    float val;

    g_fFogStart = start;
    g_fFogEnd = end;

    if (g_bForceWhiteFog)
    {
        g_fFogColor[0] = 1.0f;
        g_fFogColor[1] = 1.0f;
        g_fFogColor[2] = 1.0f;
    }
    else
    {
        g_fFogColor[0] = color[0];
        g_fFogColor[1] = color[1];
        g_fFogColor[2] = color[2];

        if ((GLI_g_AfterEffect == 5) || (GLI_g_AfterEffect == 4))
        {
            val = 0.3f * color[0] + 0.59f * color[1] + 0.11f * color[2];
            g_fFogColor[0] = val;
            g_fFogColor[1] = val;
            g_fFogColor[2] = val;
        }
    }

    GLI_g_CurrentSDLFogColor = (unsigned char)(int)(255.0f * g_fFogColor[0]) + ((unsigned char)(int)(255.0f * g_fFogColor[1]) << 8) + ((unsigned char)(int)(255.0f * g_fFogColor[2]) << 16);

    if (start != end)
        GLI_g_OOStartMinusEnd = 1.0f / (start - end);
    else
        GLI_g_OOStartMinusEnd = -0.02f;

    if (GLI_cGlobalFogIsOn)
        GLI_BIG_GLOBALS_xFogIsOn = 1;

    if (!GLI_BIG_GLOBALS_xFogIsOn)
    {
        g_fFogColor[0] = 1.0f;
        g_fFogColor[1] = 1.0f;
        g_fFogColor[2] = 1.0f;
        g_fFogStart = 4095.0f;
        g_fFogEnd = 4096.0f;
        GLI_g_OOStartMinusEnd = -1.0f;
    }

    GLI_g_CurrentFogMode = 0;
}

void SetFogc(void)
{
    SET_FOGC();
}

void GLI_DRV_SendMaterialToViewport(GLI_tdstMaterial_* hVisualMaterial)
{
    float du;
    float dv;
    GLI_tdstTexture_* p_stTexture;
    int bUseAlpha;
    int Local_LastTextureMode;
    void* p_stLastTexture;
    anon_2* pMat;
    char Operator;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    int HasVertexTransparency;

    p_stLastTexture = (void*)GLI_g_p_stLastTexture;
    Local_LastTextureMode = GLI_g_LastTextureMode;
    GLI_g_bChromeEffectOnThisLayer = 0;

    if (GLI_g_BadColorMask)
        PS2glColorMask(1, 1, 1, 0);

    if (hVisualMaterial != NULL)
    {
        if (GLI_g_RecoverMode)
            goto RecoverMode;

        HasVertexTransparency = GLI_g_HasVertexTransparency;
        if (HasVertexTransparency || ((GLI_BIG_GLOBALS_xGlobalAlpha < 0.98f) && !(GLI_BIG_GLOBALS_lCurrentDrawMask & 8)))
        {
            bUseAlpha = 1;
        }
        else
        {
            if (hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage].ulSetMaterialFunction)
            {
                ((void (*)(GLI_tdstMaterial_*))hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage].ulSetMaterialFunction)(hVisualMaterial);
                return;
            }
            bUseAlpha = 0;
        }

        pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];

        GLI_g_LastTextureMode = 0;
        GLI_g_p_stLastTexture = 0;

        GLI_g_HasVertexTransparency = 0;

        p_stTexture = NULL;
        PS2GL_g_DontUpdateTexture = 0;

        if (hVisualMaterial->lNumberOfDisplayNode > 1)
        {
            GLI_BIG_GLOBALS_hCurrentMaterial = hVisualMaterial;
            if (!GLI_g_DontRefreshAnimated || !GLI_g_AnimatedTextureToUse)
            {
                GLI_xRefreshAnimatedTexture(hVisualMaterial);
                if (hVisualMaterial->p_stTexture != NULL)
                    p_stTexture = hVisualMaterial->p_stTexture;
            }
            else
            {
                p_stTexture = (GLI_tdstTexture_*)GLI_g_AnimatedTextureToUse;
            }
        }
        else if (hVisualMaterial->ulNbTextureStages)
        {
            GLI_vRefreshMultiTexturePart(hVisualMaterial);

            p_stTexture = pMat->pst_Texture;
            Operator = pMat->c_Operator;

            if (GLI_cGetUVSource(&hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage]) == 4)
                GLI_g_bChromeEffectOnThisLayer = 1;

            if ((Operator == 2) && HasVertexTransparency)
                Operator = 3;

            if (p_stTexture && (p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam))
            {
                M_ENABLE_TEXTURE();
                PS2glBindTexture(0xDE1, p_stSpecParam->TextureID);

                switch (Operator)
                {
                    case 2:
                        if (bUseAlpha)
                        {
                            M_ENABLE_BLEND();
                            PS2glDepthMask(0);
                            PS2glSetGsRegister(0x42, 0x64 | ((unsigned long)(unsigned int)MTH_M_xRealToLong(GLI_BIG_GLOBALS_xGlobalAlpha * 128.0f) << 32), 0);
                            SET_FOGC();
                        }
                        else
                        {
                            M_DISABLE_BLEND();
                            PS2glDepthMask(1);
                            SET_FOGC();
                        }
                        M_DISABLE_ALPHATEST();
                        break;

                    case 3:
                    case 4:
                        M_ENABLE_BLEND();
                        PS2glBlendFunc(0x302, 0x303);
                        PS2glDepthMask(0);
                        M_DISABLE_ALPHATEST();
                        SET_FOGC();
                        break;

                    case 8:
                        if (bUseAlpha)
                        {
                            M_ENABLE_BLEND();
                            PS2glDepthMask(0);
                            PS2glBlendFunc(0x302, 0x303);
                            PS2glSetGsRegister(0x42, 0x64 | ((unsigned long)(unsigned int)MTH_M_xRealToLong(GLI_BIG_GLOBALS_xGlobalAlpha * 128.0f) << 32), 0);
                            SET_FOGC();
                        }
                        else
                        {
                            M_DISABLE_BLEND();
                            PS2glDepthMask(1);
                            SET_FOGC();
                        }
                        M_ENABLE_ALPHATEST();
                        break;

                    case 1:
                    case 7:
                        M_ENABLE_BLEND();
                        if (bUseAlpha)
                        {
                            PS2glSetGsRegister(0x42, 0x8000000048, 0);
                        }
                        else
                        {
                            PS2glSetGsRegister(0x42, 0x8000000068, 0);
                        }
                        M_DISABLE_ALPHATEST();
                        SET_FOG(4, 3, g_fFogColorZero);
                        PS2glDepthMask(0);
                        break;

                    case 0:
                        M_ENABLE_BLEND();
                        M_DISABLE_ALPHATEST();
                        PS2glSetGsRegister(0x42, 0x80000000A1, 0);
                        SET_FOG(4, 3, g_fFogColorZero);
                        PS2glDepthMask(0);
                        break;

                    case 5:
                        M_ENABLE_BLEND();
                        M_DISABLE_ALPHATEST();
                        PS2glSetGsRegister(0x42, 0x8000000089, 0);
                        SET_FOGC();
                        PS2glDepthMask(0);
                        break;

                    default:
                        if (bUseAlpha)
                        {
                            M_ENABLE_BLEND();
                            PS2glDepthMask(0);
                            PS2glBlendFunc(0x302, 0x303);
                            PS2glSetGsRegister(0x42, 0x64 | ((unsigned long)(unsigned int)MTH_M_xRealToLong(GLI_BIG_GLOBALS_xGlobalAlpha * 128.0f) << 32), 0);
                        }
                        else
                        {
                            M_DISABLE_BLEND();
                            PS2glDepthMask(1);
                        }
                        M_DISABLE_ALPHATEST();
                        SET_FOGC();
                        break;
                }

                if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
                {
                    if (pMat->ulTextureProperties & 1)
                        PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
                    else
                        PS2glTexParameteri(0xDE1, 0x2802, 0x2900);

                    if (pMat->ulTextureProperties & 2)
                        PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
                    else
                        PS2glTexParameteri(0xDE1, 0x2803, 0x2900);

                    GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
                    PS2GL_g_DontUpdateTexture = 0;
                }

                if (pMat->c_Flags & 2)
                {
                    if (hVisualMaterial->lIncrementIsEnable == 2)
                    {
                        du = hVisualMaterial->fAddU;
                        dv = hVisualMaterial->fAddV;
                    }
                    else
                    {
                        du = 1000.0f * g_ffFrameTime * pMat->st_UVDynamicPos.stTrans[0];
                        dv = 1000.0f * g_ffFrameTime * pMat->st_UVDynamicPos.stTrans[1];
                    }

                    du -= (float)(int)du;
                    dv -= (float)(int)dv;

                    PS2glMatrixMode(0x1702);
                    PS2glLoadIdentity();
                    PS2glTranslatef(du, dv, 0.0f);

                    g_TextMatrixIsIdentity = 0;
                }
                else if (!g_TextMatrixIsIdentity)
                {
                    PS2glMatrixMode(0x1702);
                    PS2glLoadIdentity();
                    g_TextMatrixIsIdentity = 1;
                }
                return;
            }
        }
        else
        {
            p_stTexture = hVisualMaterial->p_stTexture;
        }

        if (p_stTexture && (p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam))
        {
            if (p_stSpecParam->TextureID)
            {
                if ((void*)p_stTexture == p_stLastTexture)
                {
                    PS2GL_g_DontUpdateTexture = 1;
                }
                else
                {
                    M_ENABLE_TEXTURE();
                    PS2glBindTexture(0xDE1, p_stSpecParam->TextureID);
                    GLI_g_p_stLastTexture = (int)p_stTexture;
                    PS2GL_g_DontUpdateTexture = 0;
                }

                if (hVisualMaterial->lIncrementIsEnable && !(hVisualMaterial && (hVisualMaterial->lMaterialAdditionnalType & 2)))
                {
                    if (hVisualMaterial->lIncrementIsEnable == 2)
                    {
                        du = hVisualMaterial->fAddU;
                        dv = hVisualMaterial->fAddV;
                    }
                    else
                    {
                        du = 1000.0f * g_ffFrameTime * hVisualMaterial->a_stMultiMaterial[0].st_UVDynamicPos.stTrans[0];
                        dv = 1000.0f * g_ffFrameTime * hVisualMaterial->a_stMultiMaterial[0].st_UVDynamicPos.stTrans[1];
                    }

                    du -= (float)(int)du;
                    dv -= (float)(int)dv;

                    PS2glMatrixMode(0x1702);
                    PS2glLoadIdentity();
                    PS2glTranslatef(du, dv, 0.0f);

                    g_TextMatrixIsIdentity = 0;
                }
                else if (!g_TextMatrixIsIdentity)
                {
                    PS2glMatrixMode(0x1702);
                    PS2glLoadIdentity();
                    g_TextMatrixIsIdentity = 1;
                }

                if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
                {
                    if (pMat->ulTextureProperties & 1)
                        PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
                    else
                        PS2glTexParameteri(0xDE1, 0x2802, 0x2900);

                    if (pMat->ulTextureProperties & 2)
                        PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
                    else
                        PS2glTexParameteri(0xDE1, 0x2803, 0x2900);

                    GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
                    PS2GL_g_DontUpdateTexture = 0;
                }

                if (!(p_stTexture->lTextureCaps & 0x12A) && !(pMat->ulTextureProperties & 0x60))
                {
                    if (bUseAlpha)
                    {
                        M_ENABLE_BLEND();
                        PS2glDepthMask(0);
                        PS2glSetGsRegister(0x42, 0x8000000044, 0);
                        M_DISABLE_ALPHATEST();
                        SET_FOGC();
                    }
                    else
                    {
                        if (Local_LastTextureMode != 1)
                        {
                            PS2glDepthMask(1);
                            M_DISABLE_ALPHATEST();
                            M_ENABLE_BLEND();
                            PS2glSetGsRegister(0x42, 0x80000000A8, 0);
                        }
                        GLI_g_LastTextureMode = 1;
                        SET_FOGC();
                    }
                    return;
                }
                else if (pMat->ulTextureProperties & 0x40)
                {
                    if (bUseAlpha)
                    {
                        M_ENABLE_BLEND();
                        PS2glBlendFunc(0x302, 0x303);
                        PS2glDepthMask(0);
                    }
                    else
                    {
                        if (Local_LastTextureMode != 2)
                        {
                            PS2glDepthMask(1);
                            M_ENABLE_ALPHATEST();
                            PS2glAlphaFunc(0x204, 0.1f);
                            M_DISABLE_BLEND();
                        }
                        GLI_g_LastTextureMode = 2;
                    }
                    SET_FOGC();
                    return;
                }
                else if ((pMat->ulTextureProperties & 0x20) || ((p_stTexture->lTextureCaps & 0x20) == 0x20))
                {
                    M_ENABLE_BLEND();
                    if (bUseAlpha)
                    {
                        PS2glBlendFunc(0x302, 1);
                        PS2glSetGsRegister(0x42, 0x48, 0);
                        M_DISABLE_ALPHATEST();
                        SET_FOG(4, 3, g_fFogColorZero);
                        PS2glDepthMask(0);
                    }
                    else
                    {
                        if (Local_LastTextureMode != 4)
                        {
                            PS2glBlendFunc(0x302, 1);
                            PS2glSetGsRegister(0x42, 0x8000000068, 0);
                            M_DISABLE_ALPHATEST();
                            SET_FOG(4, 3, g_fFogColorZero);
                            PS2glDepthMask(0);
                        }
                        GLI_g_LastTextureMode = 4;
                    }
                    return;
                }
                else if (p_stTexture->lTextureCaps & 8)
                {
                    if (Local_LastTextureMode != 3)
                    {
                        M_ENABLE_BLEND();
                        PS2glBlendFunc(0x302, 0x303);
                        PS2glDepthMask(0);
                        M_DISABLE_ALPHATEST();
                    }
                    GLI_g_LastTextureMode = 3;
                    SET_FOGC();
                    return;
                }
            }
        }
    }

    GLI_g_LastTextureMode = 0;
    GLI_g_p_stLastTexture = 0;

    if ((GLI_BIG_GLOBALS_xGlobalAlpha < 0.98f) && !(GLI_BIG_GLOBALS_lCurrentDrawMask & 8))
        bUseAlpha = 1;
    else
        bUseAlpha = 0;

    if (bUseAlpha)
    {
        M_DISABLE_TEXTURE();
        M_DISABLE_ALPHATEST();
        M_ENABLE_BLEND();
        PS2glBlendFunc(0x302, 0x303);
        PS2glDepthMask(0);
    }
    else
    {
        M_DISABLE_ALPHATEST();
        M_DISABLE_BLEND();
        M_DISABLE_TEXTURE();
        PS2glDepthMask(1);
    }
    SET_FOGC();
    return;

RecoverMode:
    M_DISABLE_ALPHATEST();
    M_DISABLE_BLEND();
    M_DISABLE_TEXTURE();
    M_DISABLE_FOG();
    GLI_g_CurrentFogMode = 3;
    PS2glDepthMask(1);
    PS2glDepthMask(0);
    M_DISABLE_DEPTHTEST();
    M_ENABLE_BLEND();
    PS2glSetGsRegister(0x42, 0x2500000068, 0);
}

void SEND_MAT_OPT_OPAQUE(GLI_tdstMaterial_* hVisualMaterial)
{
    GLI_tdstTexture_* p_stTexture;
    unsigned int Local_LastTextureMode;
    anon_2* pMat;
    void* p_stLastTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    p_stLastTexture = (void*)GLI_g_p_stLastTexture;
    Local_LastTextureMode = GLI_g_LastTextureMode;
    pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];
    PS2GL_g_DontUpdateTexture = 0;
    GLI_g_p_stLastTexture = 0;
    GLI_g_LastTextureMode = 0;
    p_stTexture = hVisualMaterial->p_stTexture;
    if ((void*)p_stTexture == p_stLastTexture)
    {
        PS2GL_g_DontUpdateTexture = 1;
    }
    else
    {
        p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam;
        g_PS2glContext.nTextureEnableBits |= (g_PS2glContext.iCurTextureSet == 0) ? 2 : 0x200;
        g_gsContext.PRMODE.TME = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBindTexture(0xDE1, *(unsigned int*)p_stSpecParam);
        GLI_g_p_stLastTexture = (int)p_stTexture;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (g_TextMatrixIsIdentity == 0)
    {
        PS2glMatrixMode(0x1702);
        PS2glLoadIdentity();
        g_TextMatrixIsIdentity = 1;
    }
    if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
    {
        if (pMat->ulTextureProperties & 1)
            PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2802, 0x2900);
        if (pMat->ulTextureProperties & 2)
            PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2803, 0x2900);
        GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (Local_LastTextureMode != 1)
    {
        PS2glDepthMask(1);
        g_PS2glContext.nEnableBits &= ~0x400;
        g_gsContext.TEST_1.ATE = 0;
        g_gsContext.ModFlgs.TEST_1_Modified = 1;
        g_PS2glContext.nEnableBits &= ~0x100;
        g_gsContext.PRMODE.ABE = 0;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
    }
    SET_FOGC();
    GLI_g_LastTextureMode = 1;
}

void SEND_MAT_OPT_NZ(GLI_tdstMaterial_* hVisualMaterial)
{
    GLI_tdstTexture_* p_stTexture;
    unsigned int Local_LastTextureMode;
    anon_2* pMat;
    void* p_stLastTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    p_stLastTexture = (void*)GLI_g_p_stLastTexture;
    Local_LastTextureMode = GLI_g_LastTextureMode;
    pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];
    PS2GL_g_DontUpdateTexture = 0;
    GLI_g_p_stLastTexture = 0;
    GLI_g_LastTextureMode = 0;
    p_stTexture = hVisualMaterial->p_stTexture;
    if ((void*)p_stTexture == p_stLastTexture)
    {
        PS2GL_g_DontUpdateTexture = 1;
    }
    else
    {
        p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam;
        g_PS2glContext.nTextureEnableBits |= (g_PS2glContext.iCurTextureSet == 0) ? 2 : 0x200;
        g_gsContext.PRMODE.TME = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBindTexture(0xDE1, *(unsigned int*)p_stSpecParam);
        GLI_g_p_stLastTexture = (int)p_stTexture;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (g_TextMatrixIsIdentity == 0)
    {
        PS2glMatrixMode(0x1702);
        PS2glLoadIdentity();
        g_TextMatrixIsIdentity = 1;
    }
    if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
    {
        if (pMat->ulTextureProperties & 1)
            PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2802, 0x2900);
        if (pMat->ulTextureProperties & 2)
            PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2803, 0x2900);
        GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (Local_LastTextureMode != 2)
    {
        PS2glDepthMask(1);
        g_PS2glContext.nEnableBits |= 0x400;
        g_gsContext.TEST_1.ATE = 1;
        g_gsContext.ModFlgs.TEST_1_Modified = 1;
        PS2glAlphaFunc(0x204, 0.1f);
        g_PS2glContext.nEnableBits &= ~0x100;
        g_gsContext.PRMODE.ABE = 0;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
    }
    SET_FOGC();
    GLI_g_LastTextureMode = 2;
}

void SEND_MAT_OPT_ADD(GLI_tdstMaterial_* hVisualMaterial)
{
    GLI_tdstTexture_* p_stTexture;
    unsigned int Local_LastTextureMode;
    anon_2* pMat;
    void* p_stLastTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    p_stLastTexture = (void*)GLI_g_p_stLastTexture;
    Local_LastTextureMode = GLI_g_LastTextureMode;
    pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];
    PS2GL_g_DontUpdateTexture = 0;
    GLI_g_p_stLastTexture = 0;
    GLI_g_LastTextureMode = 0;
    p_stTexture = hVisualMaterial->p_stTexture;
    if ((void*)p_stTexture == p_stLastTexture)
    {
        PS2GL_g_DontUpdateTexture = 1;
    }
    else
    {
        p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam;
        g_PS2glContext.nTextureEnableBits |= (g_PS2glContext.iCurTextureSet == 0) ? 2 : 0x200;
        g_gsContext.PRMODE.TME = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBindTexture(0xDE1, *(unsigned int*)p_stSpecParam);
        GLI_g_p_stLastTexture = (int)p_stTexture;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (g_TextMatrixIsIdentity == 0)
    {
        PS2glMatrixMode(0x1702);
        PS2glLoadIdentity();
        g_TextMatrixIsIdentity = 1;
    }
    if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
    {
        if (pMat->ulTextureProperties & 1)
            PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2802, 0x2900);
        if (pMat->ulTextureProperties & 2)
            PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2803, 0x2900);
        GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (Local_LastTextureMode != 4)
    {
        g_PS2glContext.nEnableBits |= 0x100;
        g_gsContext.PRMODE.ABE = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glSetGsRegister(0x42, 0x8000000068, 0);
        g_PS2glContext.nEnableBits &= ~0x400;
        g_gsContext.TEST_1.ATE = 0;
        g_gsContext.ModFlgs.TEST_1_Modified = 1;
        SET_FOG(4, 3, g_fFogColorZero);
        PS2glDepthMask(0);
    }
    GLI_g_LastTextureMode = 4;
}

void SEND_MAT_OPT_ALPHA(GLI_tdstMaterial_* hVisualMaterial)
{
    GLI_tdstTexture_* p_stTexture;
    unsigned int Local_LastTextureMode;
    anon_2* pMat;
    void* p_stLastTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    p_stLastTexture = (void*)GLI_g_p_stLastTexture;
    Local_LastTextureMode = GLI_g_LastTextureMode;
    pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];
    PS2GL_g_DontUpdateTexture = 0;
    GLI_g_p_stLastTexture = 0;
    GLI_g_LastTextureMode = 0;
    p_stTexture = hVisualMaterial->p_stTexture;
    if ((void*)p_stTexture == p_stLastTexture)
    {
        PS2GL_g_DontUpdateTexture = 1;
    }
    else
    {
        p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam;
        g_PS2glContext.nTextureEnableBits |= (g_PS2glContext.iCurTextureSet == 0) ? 2 : 0x200;
        g_gsContext.PRMODE.TME = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBindTexture(0xDE1, *(unsigned int*)p_stSpecParam);
        GLI_g_p_stLastTexture = (int)p_stTexture;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (g_TextMatrixIsIdentity == 0)
    {
        PS2glMatrixMode(0x1702);
        PS2glLoadIdentity();
        g_TextMatrixIsIdentity = 1;
    }
    if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
    {
        if (pMat->ulTextureProperties & 1)
            PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2802, 0x2900);
        if (pMat->ulTextureProperties & 2)
            PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2803, 0x2900);
        GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (Local_LastTextureMode != 3)
    {
        g_PS2glContext.nEnableBits |= 0x100;
        g_gsContext.PRMODE.ABE = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBlendFunc(0x302, 0x303);
        PS2glDepthMask(0);
        g_PS2glContext.nEnableBits &= ~0x400;
        g_gsContext.TEST_1.ATE = 0;
        g_gsContext.ModFlgs.TEST_1_Modified = 1;
    }
    GLI_g_LastTextureMode = 3;
    SET_FOGC();
}

void SEND_MAT_OPT_MULT_ALPHA(GLI_tdstMaterial_* hVisualMaterial)
{
    unsigned int Local_LastTextureMode;
    GLI_tdstTexture_* p_stTexture;
    anon_2* pMat;
    void* p_stLastTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    p_stLastTexture = (void*)GLI_g_p_stLastTexture;
    Local_LastTextureMode = GLI_g_LastTextureMode;
    pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];
    PS2GL_g_DontUpdateTexture = 0;
    GLI_g_p_stLastTexture = 0;
    GLI_g_LastTextureMode = 0;
    p_stTexture = pMat->pst_Texture;
    if ((void*)p_stTexture == p_stLastTexture)
    {
        PS2GL_g_DontUpdateTexture = 1;
    }
    else
    {
        p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam;
        g_PS2glContext.nTextureEnableBits |= (g_PS2glContext.iCurTextureSet == 0) ? 2 : 0x200;
        g_gsContext.PRMODE.TME = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBindTexture(0xDE1, *(unsigned int*)p_stSpecParam);
        GLI_g_p_stLastTexture = (int)p_stTexture;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (GLI_cGetUVSource(&hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage]) == 4)
        GLI_g_bChromeEffectOnThisLayer = 1;
    if (g_TextMatrixIsIdentity == 0)
    {
        PS2glMatrixMode(0x1702);
        PS2glLoadIdentity();
        g_TextMatrixIsIdentity = 1;
    }
    if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
    {
        if (pMat->ulTextureProperties & 1)
            PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2802, 0x2900);
        if (pMat->ulTextureProperties & 2)
            PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2803, 0x2900);
        GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (Local_LastTextureMode != 3)
    {
        g_PS2glContext.nEnableBits |= 0x100;
        g_gsContext.PRMODE.ABE = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBlendFunc(0x302, 0x303);
        PS2glDepthMask(0);
        g_PS2glContext.nEnableBits &= ~0x400;
        g_gsContext.TEST_1.ATE = 0;
        g_gsContext.ModFlgs.TEST_1_Modified = 1;
    }
    GLI_g_LastTextureMode = 3;
    SET_FOGC();
}

void SEND_MAT_OPT_MULT_OPAQUE(GLI_tdstMaterial_* hVisualMaterial)
{
    unsigned int Local_LastTextureMode;
    GLI_tdstTexture_* p_stTexture;
    anon_2* pMat;
    void* p_stLastTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    p_stLastTexture = (void*)GLI_g_p_stLastTexture;
    Local_LastTextureMode = GLI_g_LastTextureMode;
    pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];
    PS2GL_g_DontUpdateTexture = 0;
    GLI_g_p_stLastTexture = 0;
    GLI_g_LastTextureMode = 0;
    p_stTexture = pMat->pst_Texture;
    if ((void*)p_stTexture == p_stLastTexture)
    {
        PS2GL_g_DontUpdateTexture = 1;
    }
    else
    {
        p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam;
        g_PS2glContext.nTextureEnableBits |= (g_PS2glContext.iCurTextureSet == 0) ? 2 : 0x200;
        g_gsContext.PRMODE.TME = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBindTexture(0xDE1, *(unsigned int*)p_stSpecParam);
        GLI_g_p_stLastTexture = (int)p_stTexture;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (GLI_cGetUVSource(&hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage]) == 4)
        GLI_g_bChromeEffectOnThisLayer = 1;
    if (g_TextMatrixIsIdentity == 0)
    {
        PS2glMatrixMode(0x1702);
        PS2glLoadIdentity();
        g_TextMatrixIsIdentity = 1;
    }
    if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
    {
        if (pMat->ulTextureProperties & 1)
            PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2802, 0x2900);
        if (pMat->ulTextureProperties & 2)
            PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2803, 0x2900);
        GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (Local_LastTextureMode != 1)
    {
        PS2glDepthMask(1);
        g_PS2glContext.nEnableBits &= ~0x400;
        g_gsContext.TEST_1.ATE = 0;
        g_gsContext.ModFlgs.TEST_1_Modified = 1;
        g_PS2glContext.nEnableBits &= ~0x100;
        g_gsContext.PRMODE.ABE = 0;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
    }
    SET_FOGC();
    GLI_g_LastTextureMode = 1;
}

void SEND_MAT_OPT_MULT_NZ(GLI_tdstMaterial_* hVisualMaterial)
{
    unsigned int Local_LastTextureMode;
    GLI_tdstTexture_* p_stTexture;
    anon_2* pMat;
    void* p_stLastTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    p_stLastTexture = (void*)GLI_g_p_stLastTexture;
    Local_LastTextureMode = GLI_g_LastTextureMode;
    pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];
    PS2GL_g_DontUpdateTexture = 0;
    GLI_g_p_stLastTexture = 0;
    GLI_g_LastTextureMode = 0;
    p_stTexture = pMat->pst_Texture;
    if ((void*)p_stTexture == p_stLastTexture)
    {
        PS2GL_g_DontUpdateTexture = 1;
    }
    else
    {
        p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam;
        g_PS2glContext.nTextureEnableBits |= (g_PS2glContext.iCurTextureSet == 0) ? 2 : 0x200;
        g_gsContext.PRMODE.TME = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBindTexture(0xDE1, *(unsigned int*)p_stSpecParam);
        GLI_g_p_stLastTexture = (int)p_stTexture;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (GLI_cGetUVSource(&hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage]) == 4)
        GLI_g_bChromeEffectOnThisLayer = 1;
    if (g_TextMatrixIsIdentity == 0)
    {
        PS2glMatrixMode(0x1702);
        PS2glLoadIdentity();
        g_TextMatrixIsIdentity = 1;
    }
    if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
    {
        if (pMat->ulTextureProperties & 1)
            PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2802, 0x2900);
        if (pMat->ulTextureProperties & 2)
            PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2803, 0x2900);
        GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (Local_LastTextureMode != 2)
    {
        PS2glDepthMask(1);
        g_PS2glContext.nEnableBits |= 0x400;
        g_gsContext.TEST_1.ATE = 1;
        g_gsContext.ModFlgs.TEST_1_Modified = 1;
        PS2glAlphaFunc(0x204, 0.1f);
        g_PS2glContext.nEnableBits &= ~0x100;
        g_gsContext.PRMODE.ABE = 0;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
    }
    SET_FOGC();
    GLI_g_LastTextureMode = 2;
}

void SEND_MAT_OPT_MULT_ADD(GLI_tdstMaterial_* hVisualMaterial)
{
    unsigned int Local_LastTextureMode;
    GLI_tdstTexture_* p_stTexture;
    anon_2* pMat;
    void* p_stLastTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    p_stLastTexture = (void*)GLI_g_p_stLastTexture;
    Local_LastTextureMode = GLI_g_LastTextureMode;
    pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];
    PS2GL_g_DontUpdateTexture = 0;
    GLI_g_p_stLastTexture = 0;
    GLI_g_LastTextureMode = 0;
    p_stTexture = pMat->pst_Texture;
    if ((void*)p_stTexture == p_stLastTexture)
    {
        PS2GL_g_DontUpdateTexture = 1;
    }
    else
    {
        p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam;
        g_PS2glContext.nTextureEnableBits |= (g_PS2glContext.iCurTextureSet == 0) ? 2 : 0x200;
        g_gsContext.PRMODE.TME = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glBindTexture(0xDE1, *(unsigned int*)p_stSpecParam);
        GLI_g_p_stLastTexture = (int)p_stTexture;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (GLI_cGetUVSource(&hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage]) == 4)
        GLI_g_bChromeEffectOnThisLayer = 1;
    if (g_TextMatrixIsIdentity == 0)
    {
        PS2glMatrixMode(0x1702);
        PS2glLoadIdentity();
        g_TextMatrixIsIdentity = 1;
    }
    if (GLI_g_LastCyclingMode != (pMat->ulTextureProperties & 3))
    {
        if (pMat->ulTextureProperties & 1)
            PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2802, 0x2900);
        if (pMat->ulTextureProperties & 2)
            PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
        else
            PS2glTexParameteri(0xDE1, 0x2803, 0x2900);
        GLI_g_LastCyclingMode = pMat->ulTextureProperties & 3;
        PS2GL_g_DontUpdateTexture = 0;
    }
    if (Local_LastTextureMode != 4)
    {
        g_PS2glContext.nEnableBits |= 0x100;
        g_gsContext.PRMODE.ABE = 1;
        g_gsContext.ModFlgs.PRMODE_Modified = 1;
        PS2glSetGsRegister(0x42, 0x8000000048, 0);
        g_PS2glContext.nEnableBits &= ~0x400;
        g_gsContext.TEST_1.ATE = 0;
        g_gsContext.ModFlgs.TEST_1_Modified = 1;
        PS2glDepthMask(0);
    }
    GLI_g_LastTextureMode = 4;
    SET_FOG(4, 3, g_fFogColorZero);
}

int GLI_DRV_IsMaterialTransparent(GLI_tdstMaterial_* hVisualMaterial)
{
    unsigned int Operator;
    anon_2* pMat;
    if (hVisualMaterial == NULL) { return 0; }
    if (hVisualMaterial->ulNbTextureStages != 0)
    {
        Operator = hVisualMaterial->a_stMultiMaterial[0].c_Operator;
        if (Operator == 2 || Operator == 8) { return 0; }
        return 1;
    }
    pMat = &hVisualMaterial->a_stMultiMaterial[0];
    if ((hVisualMaterial->p_stTexture->lTextureCaps & 0x28) == 0)
    {
        if ((pMat->ulTextureProperties & 0x20) == 0)
        {
            return 0;
        }
    }
    return 1;
}

void GLI_vAssignOptimizedFunctionToMaterial(GLI_tdstMaterial_* hVisualMaterial)
{
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    GLI_tdstTexture_* p_stTexture;
    int stage;
    anon_2* pMat;
    unsigned int Operator;

    if (hVisualMaterial == NULL)
        return;

    hVisualMaterial->a_stMultiMaterial[0].ulSetMaterialFunction = 0;
    hVisualMaterial->a_stMultiMaterial[1].ulSetMaterialFunction = 0;
    hVisualMaterial->a_stMultiMaterial[2].ulSetMaterialFunction = 0;
    hVisualMaterial->a_stMultiMaterial[3].ulSetMaterialFunction = 0;

    p_stTexture = hVisualMaterial->p_stTexture;
    if ((hVisualMaterial->lNumberOfDisplayNode == 0) && (hVisualMaterial->ulNbTextureStages == 0) && (hVisualMaterial->lIncrementIsEnable == 0) && (p_stTexture != NULL) && !(hVisualMaterial && (hVisualMaterial->lMaterialAdditionnalType & 2)))
    {
        p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam;
        pMat = hVisualMaterial->a_stMultiMaterial;

        if (p_stSpecParam && p_stSpecParam->TextureID)
        {
            if (!(p_stTexture->lTextureCaps & 8) && !(pMat->ulTextureProperties & 0x60))
            {
                hVisualMaterial->a_stMultiMaterial[0].ulSetMaterialFunction = (unsigned int)SEND_MAT_OPT_OPAQUE;
            }
            else
            {
                Operator = pMat->ulTextureProperties;
                if (Operator & 0x40)
                    hVisualMaterial->a_stMultiMaterial[0].ulSetMaterialFunction = (unsigned int)SEND_MAT_OPT_NZ;
                else if (Operator & 0x20)
                    hVisualMaterial->a_stMultiMaterial[0].ulSetMaterialFunction = (unsigned int)SEND_MAT_OPT_ADD;
                else if ((p_stTexture->lTextureCaps & 8) == 8)
                    hVisualMaterial->a_stMultiMaterial[0].ulSetMaterialFunction = (unsigned int)SEND_MAT_OPT_ALPHA;
            }
        }
    }

    if ((hVisualMaterial->lNumberOfDisplayNode == 0) && (hVisualMaterial->ulNbTextureStages != 0) && (hVisualMaterial->lIncrementIsEnable == 0))
    {
        for (stage = 0; stage < hVisualMaterial->ulNbTextureStages; stage++)
        {
            Operator = hVisualMaterial->a_stMultiMaterial[stage].c_Operator;
            p_stSpecParam = (GLI_tdstTexturePS2GL_*)hVisualMaterial->a_stMultiMaterial[stage].pst_Texture->p_stSpecParam;
            if (hVisualMaterial->a_stMultiMaterial[stage].c_Flags & 2)
                continue;
            if (!p_stSpecParam || !p_stSpecParam->TextureID)
                continue;
            hVisualMaterial->a_stMultiMaterial[stage].ulSetMaterialFunction = 0;
            /* Stores through a cast so MWCC does not share the field address with
             * the zero store above (retail folds 0xcc into every sw). */
            switch (Operator)
            {
            case 2:
                *(unsigned int*)&hVisualMaterial->a_stMultiMaterial[stage].ulSetMaterialFunction = (unsigned int)SEND_MAT_OPT_MULT_OPAQUE;
                break;
            case 3:
            case 4:
                *(unsigned int*)&hVisualMaterial->a_stMultiMaterial[stage].ulSetMaterialFunction = (unsigned int)SEND_MAT_OPT_MULT_ALPHA;
                break;
            case 8:
                *(unsigned int*)&hVisualMaterial->a_stMultiMaterial[stage].ulSetMaterialFunction = (unsigned int)SEND_MAT_OPT_MULT_NZ;
                break;
            case 1:
            case 7:
                *(unsigned int*)&hVisualMaterial->a_stMultiMaterial[stage].ulSetMaterialFunction = (unsigned int)SEND_MAT_OPT_MULT_ADD;
                break;
            }
        }
    }
}

void SetStaticFog(void)
{
    unsigned int hRef;
    if (GLI_BIG_GLOBALS_xFogIsOn != 0)
    {
        PS2glEnable(0xB60);
        PS2glFogi(0xB65, 0x2601);
        PS2glFogf(0xB63, 19.5f);
        PS2glFogf(0xB64, 47.2f);
        PS2glFogiv(0xB66, g_fFogColorDummy);
        hRef = SDL_REF_GetNewFogRef(GLI_g_NumberInList);
        SDL_AddRef(hCurrentSDL, hRef);
    }
    else
    {
        PS2glEnable(0xB60);
        PS2glFogi(0xB65, 0x2601);
        PS2glFogf(0xB63, 19.5f);
        PS2glFogf(0xB64, 47.2f);
        PS2glFogiv(0xB66, g_fFogColorDummy);
        hRef = SDL_REF_GetNewFogRef(GLI_g_NumberInList);
        SDL_AddRef(hCurrentSDL, hRef);
    }
}

void GLI_vForceSkinMaterialIndex(GLI_tdstMaterial_* pMat, unsigned int Index)
{
    unsigned int i;
    unsigned int Dest;
    Dest = Index - 1;
    if (pMat->lNumberOfDisplayNode > 0 && Dest < pMat->lNumberOfDisplayNode)
    {
        pMat->p_stActualAnimatedTExtureNode = pMat->p_stFistAnimatedTExtureNode;
        for (i = 0; i < Dest; i++)
        {
            pMat->p_stActualAnimatedTExtureNode = pMat->p_stActualAnimatedTExtureNode->p_stNextDisplayNode;
        }
        pMat->p_stTexture = pMat->p_stActualAnimatedTExtureNode->p_stTexture;
    }
}

void GLI_vSendStaticMaterialToViewport(GLI_tdstMaterial_* hVisualMaterial)
{
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    GLI_tdstTexture_* p_stTexture;
    int bUseAlpha;
    int HasVertexTransparency;
    anon_2* pMat;
    char Operator;
    unsigned int hRef;

    GLI_g_bChromeEffectOnThisLayer = 0;
    GLI_g_ThisLayerHasScrolling = 0;

    if (!GLI_g_RecoverMode)
    {
        if (hVisualMaterial != NULL)
        {
            if (!GLI_b_CreatingActorSDL && (GLI_g_HasVertexTransparency || ((GLI_BIG_GLOBALS_xGlobalAlpha < 0.98f) && !(GLI_BIG_GLOBALS_lCurrentDrawMask & 8))))
                bUseAlpha = 1;
            else
                bUseAlpha = 0;

            pMat = &hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage];

            GLI_g_LastTextureMode = 0;
            GLI_g_p_stLastTexture = 0;

            HasVertexTransparency = GLI_g_HasVertexTransparency;
            GLI_g_HasVertexTransparency = 0;

            if (GLI_b_CreatingActorSDL)
                HasVertexTransparency = 0;

            PS2GL_g_DontUpdateTexture = 0;
            p_stTexture = NULL;

            if (hVisualMaterial->lNumberOfDisplayNode > 1)
            {
                GLI_BIG_GLOBALS_hCurrentMaterial = hVisualMaterial;
                if (!GLI_g_DontRefreshAnimated)
                {
                    GLI_xRefreshAnimatedTexture(hVisualMaterial);
                    if (hVisualMaterial->p_stTexture != NULL)
                        p_stTexture = hVisualMaterial->p_stTexture;
                }
                else
                {
                    p_stTexture = (GLI_tdstTexture_*)GLI_g_AnimatedTextureToUse;
                }
            }
            else if (hVisualMaterial->ulNbTextureStages)
            {
                GLI_vRefreshMultiTexturePart(hVisualMaterial);

                p_stTexture = pMat->pst_Texture;
                Operator = pMat->c_Operator;

                if (GLI_cGetUVSource(&hVisualMaterial->a_stMultiMaterial[GLI_g_CurrentStage]) == 4)
                    GLI_g_bChromeEffectOnThisLayer = 1;

                if ((Operator == 2) && HasVertexTransparency)
                    Operator = 3;

                if (p_stTexture && (p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam))
                {
                    PS2glEnable(0xDE1);
                    PS2glBindTexture(0xDE1, p_stSpecParam->TextureID);

                    switch (Operator)
                    {
                        case 2:
                            if (bUseAlpha)
                            {
                                PS2glEnable(0xBE2);
                                PS2glDepthMask(0);
                                PS2glSetGsRegister(0x42, 0x64 | ((unsigned long)(unsigned int)MTH_M_xRealToLong(GLI_BIG_GLOBALS_xGlobalAlpha * 128.0f) << 32), 0);
                                SetStaticFog();
                            }
                            else
                            {
                                PS2glDisable(0xBE2);
                                PS2glDepthMask(1);
                                SetStaticFog();
                            }
                            PS2glDisable(0xBC0);
                            break;

                        case 3:
                        case 4:
                            PS2glEnable(0xBE2);
                            PS2glBlendFunc(0x302, 0x303);
                            PS2glDepthMask(0);
                            PS2glDisable(0xBC0);
                            SetStaticFog();
                            break;

                        case 8:
                            if (bUseAlpha)
                            {
                                PS2glEnable(0xBE2);
                                PS2glDepthMask(0);
                                PS2glBlendFunc(0x302, 0x303);
                                PS2glSetGsRegister(0x42, 0x64 | ((unsigned long)(unsigned int)MTH_M_xRealToLong(GLI_BIG_GLOBALS_xGlobalAlpha * 128.0f) << 32), 0);
                                SetStaticFog();
                            }
                            else
                            {
                                PS2glDisable(0xBE2);
                                PS2glDepthMask(1);
                                SetStaticFog();
                            }
                            PS2glEnable(0xBC0);
                            break;

                        case 1:
                        case 7:
                            PS2glEnable(0xBE2);
                            if (bUseAlpha)
                            {
                                PS2glSetGsRegister(0x42, 0x8000000048, 0);
                            }
                            else
                            {
                                PS2glSetGsRegister(0x42, 0x8000000068, 0);
                            }
                            PS2glDisable(0xBC0);
                            GLI_M_STATIC_FOG(g_fFogColorZero);
                            PS2glDepthMask(0);
                            break;

                        case 0:
                            PS2glEnable(0xBE2);
                            PS2glDisable(0xBC0);
                            PS2glSetGsRegister(0x42, 0x80000000A1, 0);
                            GLI_M_STATIC_FOG(g_fFogColorZero);
                            PS2glDepthMask(0);
                            break;

                        case 5:
                            PS2glEnable(0xBE2);
                            PS2glDisable(0xBC0);
                            PS2glSetGsRegister(0x42, 0x8000000089, 0);
                            SetStaticFog();
                            PS2glDepthMask(0);
                            break;

                        default:
                            if (bUseAlpha)
                            {
                                PS2glEnable(0xBE2);
                                PS2glDepthMask(0);
                                PS2glBlendFunc(0x302, 0x303);
                                PS2glSetGsRegister(0x42, 0x64 | ((unsigned long)(unsigned int)MTH_M_xRealToLong(GLI_BIG_GLOBALS_xGlobalAlpha * 128.0f) << 32), 0);
                            }
                            else
                            {
                                PS2glDisable(0xBE2);
                                PS2glDepthMask(1);
                            }
                            PS2glDisable(0xBC0);
                            SetStaticFog();
                            break;
                    }

                    if (pMat->ulTextureProperties & 1)
                        PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
                    else
                        PS2glTexParameteri(0xDE1, 0x2802, 0x2900);

                    if (pMat->ulTextureProperties & 2)
                        PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
                    else
                        PS2glTexParameteri(0xDE1, 0x2803, 0x2900);

                    PS2GL_g_DontUpdateTexture = 0;

                    if (GLI_g_ChristianSlaterMode)
                    {
                        PS2glTexParameteri(0xDE1, 0x2800, 0x2600);
                        PS2glTexParameteri(0xDE1, 0x2801, 0x2600);
                        PS2glTexParameteri(0xDE1, 0x2800, 0x2600);
                        PS2glTexParameteri(0xDE1, 0x2801, 0x2600);
                    }
                    else
                    {
                        PS2glTexParameteri(0xDE1, 0x2800, 0x2601);
                        PS2glTexParameteri(0xDE1, 0x2801, 0x2701);
                    }

                    if (pMat->c_Flags & 2)
                    {
                        PS2glEnable(0xBA8);
                        PS2glMatrixMode(0x1702);
                        PS2glLoadIdentity();
                        {
                            float fX = 3.0f;
                            float fZ = 1.5f;
                            float fY = 0.1f;
                            PS2glTranslatef(fX, fY, fZ);
                        }
                        g_TextMatrixIsIdentity = 0;
                        GLI_g_ThisLayerHasScrolling = 1;
                        hRef = SDL_REF_GetNewTextureOffsetRef(pMat->st_UVDynamicPos.stTrans[0], pMat->st_UVDynamicPos.stTrans[1], GLI_g_NumberInList, hVisualMaterial);
                        SDL_AddRef(hCurrentSDL, hRef);
                    }
                    else
                    {
                        PS2glMatrixMode(0x1702);
                        PS2glLoadIdentity();
                    }
                    return;
                }
            }
            else
            {
                p_stTexture = hVisualMaterial->p_stTexture;
            }

            if (p_stTexture && (p_stSpecParam = (GLI_tdstTexturePS2GL_*)p_stTexture->p_stSpecParam))
            {
                if (p_stSpecParam->TextureID)
                {
                    if (p_stTexture == NULL)
                    {
                        PS2GL_g_DontUpdateTexture = 0;
                    }
                    else
                    {
                        PS2glEnable(0xDE1);
                        PS2glBindTexture(0xDE1, p_stSpecParam->TextureID);
                        GLI_g_p_stLastTexture = (int)p_stTexture;
                        PS2GL_g_DontUpdateTexture = 0;
                    }

                    if (hVisualMaterial->lIncrementIsEnable && !(hVisualMaterial && (hVisualMaterial->lMaterialAdditionnalType & 2)))
                    {
                        PS2glEnable(0xBA8);
                        PS2glMatrixMode(0x1702);
                        PS2glLoadIdentity();
                        PS2glTranslatef(3.0f, 0.1f, 1.5f);
                        g_TextMatrixIsIdentity = 0;
                        GLI_g_ThisLayerHasScrolling = 1;
                        hRef = SDL_REF_GetNewTextureOffsetRef(hVisualMaterial->fConstantAddU, hVisualMaterial->fConstantAddV, GLI_g_NumberInList, hVisualMaterial);
                        SDL_AddRef(hCurrentSDL, hRef);
                    }
                    else
                    {
                        PS2glMatrixMode(0x1702);
                        PS2glLoadIdentity();
                        g_TextMatrixIsIdentity = 1;
                    }

                    if (pMat->ulTextureProperties & 1)
                        PS2glTexParameteri(0xDE1, 0x2802, 0x2901);
                    else
                        PS2glTexParameteri(0xDE1, 0x2802, 0x2900);

                    if (pMat->ulTextureProperties & 2)
                        PS2glTexParameteri(0xDE1, 0x2803, 0x2901);
                    else
                        PS2glTexParameteri(0xDE1, 0x2803, 0x2900);

                    PS2GL_g_DontUpdateTexture = 0;

                    if (GLI_g_ChristianSlaterMode)
                    {
                        PS2glTexParameteri(0xDE1, 0x2800, 0x2600);
                        PS2glTexParameteri(0xDE1, 0x2801, 0x2600);
                        PS2glTexParameteri(0xDE1, 0x2800, 0x2600);
                        PS2glTexParameteri(0xDE1, 0x2801, 0x2600);
                    }
                    else
                    {
                        PS2glTexParameteri(0xDE1, 0x2800, 0x2601);
                        PS2glTexParameteri(0xDE1, 0x2801, 0x2701);
                    }

                    if (!(p_stTexture->lTextureCaps & 0x12A) && !(pMat->ulTextureProperties & 0x60))
                    {
                        if (bUseAlpha)
                        {
                            PS2glEnable(0xBE2);
                            PS2glDepthMask(0);
                            PS2glSetGsRegister(0x42, 0x8000000044, 0);
                            PS2glDisable(0xBC0);
                            SetStaticFog();
                        }
                        else
                        {
                            PS2glDepthMask(1);
                            PS2glDisable(0xBC0);
                            PS2glEnable(0xBE2);
                            PS2glSetGsRegister(0x42, 0x80000000A8, 0);
                            SetStaticFog();
                        }
                        return;
                    }
                    else if (pMat->ulTextureProperties & 0x40)
                    {
                        if (bUseAlpha)
                        {
                            PS2glEnable(0xBE2);
                            PS2glBlendFunc(0x302, 0x303);
                            PS2glDepthMask(0);
                        }
                        else
                        {
                            PS2glDepthMask(1);
                            PS2glEnable(0xBC0);
                            PS2glAlphaFunc(0x204, 0.1f);
                            PS2glDisable(0xBE2);
                        }
                        SetStaticFog();
                        return;
                    }
                    else if ((pMat->ulTextureProperties & 0x20) || ((p_stTexture->lTextureCaps & 0x20) == 0x20))
                    {
                        PS2glEnable(0xBE2);
                        if (bUseAlpha)
                        {
                            PS2glBlendFunc(0x302, 1);
                            PS2glSetGsRegister(0x42, 0x48, 0);
                            PS2glDisable(0xBC0);
                            GLI_M_STATIC_FOG(g_fFogColorZero);
                            PS2glDepthMask(0);
                        }
                        else
                        {
                            PS2glBlendFunc(0x302, 1);
                            PS2glSetGsRegister(0x42, 0x8000000068, 0);
                            PS2glDisable(0xBC0);
                            GLI_M_STATIC_FOG(g_fFogColorZero);
                            PS2glDepthMask(0);
                        }
                        return;
                    }
                    else if (p_stTexture->lTextureCaps & 8)
                    {
                        if (strstr(p_stTexture->a255_cFileName, "_ZBUF"))
                        {
                            PS2glEnable(0xBE2);
                            PS2glBlendFunc(0x302, 0x303);
                            PS2glDepthMask(1);
                            PS2glDisable(0xBC0);
                        }
                        else
                        {
                            PS2glEnable(0xBE2);
                            PS2glBlendFunc(0x302, 0x303);
                            PS2glDepthMask(0);
                            PS2glDisable(0xBC0);
                        }
                        SetStaticFog();
                        return;
                    }
                }
            }
        }

        GLI_g_p_stLastTexture = 0;

        if ((GLI_BIG_GLOBALS_xGlobalAlpha < 0.98f) && !(GLI_BIG_GLOBALS_lCurrentDrawMask & 8))
            bUseAlpha = 1;
        else
            bUseAlpha = 0;

        if (bUseAlpha)
        {
            PS2glDisable(0xDE1);
            PS2glDisable(0xBC0);
            PS2glEnable(0xBE2);
            PS2glBlendFunc(0x302, 0x303);
            PS2glDepthMask(0);
        }
        else
        {
            PS2glDisable(0xBC0);
            PS2glDisable(0xBE2);
            PS2glDisable(0xDE1);
            PS2glDepthMask(1);
        }
        SetStaticFog();
    }
    else
    {
        PS2glDisable(0xBC0);
        PS2glDisable(0xBE2);
        PS2glDisable(0xDE1);
        PS2glDisable(0xB60);
        GLI_g_CurrentFogMode = 3;
        PS2glDepthMask(1);
        PS2glDepthMask(0);
        PS2glDisable(0xB71);
        PS2glEnable(0xBE2);
        PS2glSetGsRegister(0x42, 0x2500000068, 0);
    }
}

int GLI_bIsMaterialAdditive(GLI_tdstMaterial_* hVisualMaterial)
{
    GLI_tdstTexture_* p_stTexture;
    anon_2* pMat;
    if (hVisualMaterial == NULL) { return 0; }
    pMat = &hVisualMaterial->a_stMultiMaterial[0];
    p_stTexture = NULL;
    if (hVisualMaterial->lNumberOfDisplayNode > 1)
    {
        GLI_BIG_GLOBALS_hCurrentMaterial = hVisualMaterial;
        GLI_xRefreshAnimatedTexture(hVisualMaterial);
        if (hVisualMaterial->p_stTexture != NULL)
        {
            p_stTexture = hVisualMaterial->p_stTexture;
        }
    }
    else if (hVisualMaterial->ulNbTextureStages != 0)
    {
        switch (pMat->c_Operator)
        {
            case 7:
            case 1:
                return 1;
            default:
                return 0;
        }
    }
    else
    {
        p_stTexture = hVisualMaterial->p_stTexture;
    }
    if (p_stTexture != NULL)
    {
        if ((pMat->ulTextureProperties & 0x20) || ((p_stTexture->lTextureCaps & 0x20) == 0x20)) { return 1; }
    }
    return 0;
}

void TBF_ChangeCacheSize(int size)
{
    int iNewSize;
    void* pBuffer;
    iNewSize = TBF_g_CurrentFileAllocation;
    if (iNewSize == 0)
    {
        iNewSize = 0x400000;
    }
    if (iNewSize < TBF_g_CurrentFileSize + size)
    {
        iNewSize = TBF_g_CurrentFileSize + size + 0x80000;
    }
    if (iNewSize == TBF_g_CurrentFileAllocation)
    {
        return;
    }
    pBuffer = realloc(TBF_g_CurrentFileBuffer, iNewSize);
    if (pBuffer != NULL)
    {
        TBF_g_CurrentFileAllocation = iNewSize;
        TBF_g_CurrentFileBuffer = pBuffer;
    }
    else
    {
        if (TBF_g_CurrentFile >= 0 && TBF_g_UseTBFWriteCache != 0 && TBF_g_CurrentFileBuffer != NULL)
        {
            sceWrite(TBF_g_CurrentFile, TBF_g_CurrentFileBuffer, TBF_g_CurrentFileSize);
            free(TBF_g_CurrentFileBuffer);
            TBF_g_CurrentFileBuffer = NULL;
            TBF_g_CurrentFileAllocation = 0;
            TBF_g_CurrentFileSize = 0;
        }
        TBF_g_UseTBFWriteCache = 0;
    }
}
