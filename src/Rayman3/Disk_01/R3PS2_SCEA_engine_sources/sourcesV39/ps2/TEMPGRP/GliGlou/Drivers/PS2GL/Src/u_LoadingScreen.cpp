/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sceGsMiptbp1 sceGsMiptbp1;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tagListData tagListData;
typedef struct sceGifTag sceGifTag;
typedef struct sceGsTexflush sceGsTexflush;
typedef struct sceGsTex0 sceGsTex0;
typedef struct sceGsTex1 sceGsTex1;
typedef struct sceGsMiptbp2 sceGsMiptbp2;
typedef struct sceGsClamp sceGsClamp;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct C_LoadingScreen C_LoadingScreen;
typedef struct sceGsPrmode sceGsPrmode;
typedef struct sceGsXyoffset sceGsXyoffset;
typedef struct sceGsBitbltbuf sceGsBitbltbuf;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct sceGsPrim sceGsPrim;
typedef struct sceGsRgbaq sceGsRgbaq;
typedef struct sceGsSt sceGsSt;
typedef struct sceGsUv sceGsUv;
typedef struct sceGsXyzf sceGsXyzf;
typedef struct sceGsXyz sceGsXyz;
typedef struct sceGsFog sceGsFog;
typedef struct sceGsTex2 sceGsTex2;
typedef struct sceGsPrmodecont sceGsPrmodecont;
typedef struct sceGsTexclut sceGsTexclut;
typedef struct sceGsScanmsk sceGsScanmsk;
typedef struct sceGsTexa sceGsTexa;
typedef struct sceGsFogcol sceGsFogcol;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct sceGsScissor sceGsScissor;
typedef struct sceGsAlpha sceGsAlpha;
typedef struct sceGsDimx sceGsDimx;
typedef struct sceGsDthe sceGsDthe;
typedef struct sceGsColclamp sceGsColclamp;
typedef struct sceGsTest sceGsTest;
typedef struct sceGsPabe sceGsPabe;
typedef struct sceGsFba sceGsFba;
typedef struct sceGsFrame sceGsFrame;
typedef struct sceGsZbuf sceGsZbuf;
typedef struct sceGsTrxpos sceGsTrxpos;
typedef struct sceGsTrxreg sceGsTrxreg;
typedef struct sceGsTrxdir sceGsTrxdir;
typedef struct sceGsSignal sceGsSignal;
typedef struct sceGsLabel sceGsLabel;
typedef union QWORD QWORD;
typedef struct tagGScontext tagGScontext;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct SemaParam SemaParam;
typedef struct S_TXR_Header_ S_TXR_Header_;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct stParamBegin stParamBegin;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tagListNode tagListNode;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct ThreadParam ThreadParam;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLcontext tagGLcontext;

struct sceGsMiptbp1 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
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

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*) pDmaBuffer[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*) pLastExecDmaBuffer[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
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
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct sceGsTexflush {
    unsigned long pad00; /* +0x0 */
};

struct sceGsTex0 {
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

struct sceGsTex1 {
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

struct sceGsMiptbp2 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct sceGsClamp {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    sceGifTag gifTag; /* +0x0 */
    sceGsTexflush texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    sceGsTex0 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    sceGsTex1 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    sceGsMiptbp1 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    sceGsMiptbp2 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    sceGsClamp clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct C_LoadingScreen {
    unsigned int m_bDataIsValid; /* +0x0 */
    int m_ModelTextureData; /* +0x4 */
    unsigned int m_ModelTextureName; /* +0x8 */
    int m_BackGroundTextureData; /* +0xc */
    unsigned int m_BackGroundTextureName; /* +0x10 */
    float m_FadeValue; /* +0x14 */
    float m_fTime; /* +0x18 */
    unsigned int m_Finished; /* +0x1c */
    int m_SemaPhore; /* +0x20 */
};

struct sceGsPrmode {
    unsigned long pad00 : 3; /* bit 0, byte +0x0 */
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

struct sceGsXyoffset {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct sceGsBitbltbuf {
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

struct tag_GLtexture {
    float vTexBorderColor[4]; /* +0x0 */
    unsigned int eDimension; /* +0x10 */
    unsigned int eTexFilterMin; /* +0x14 */
    unsigned int eTexFilterMag; /* +0x18 */
    unsigned int eTexWrapS; /* +0x1c */
    unsigned int eTexWrapT; /* +0x20 */
    int Image[7]; /* +0x24 */
    int iClutOffset; /* +0x40 */
    int iClutSize; /* +0x44 */
    int clut; /* +0x48 */
    unsigned char bClutUserMaintain; /* +0x4c */
};

struct sceGsPrim {
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

struct sceGsRgbaq {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct sceGsSt {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct sceGsUv {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct sceGsXyzf {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct sceGsXyz {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct sceGsFog {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct sceGsTex2 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct sceGsPrmodecont {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsTexclut {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct sceGsScanmsk {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct sceGsTexa {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct sceGsFogcol {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct sceGsScissor {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct sceGsAlpha {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct sceGsDimx {
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

struct sceGsDthe {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsColclamp {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsTest {
    unsigned long ATE : 1; /* bit 0, byte +0x0 */
    unsigned long ATST : 3; /* bit 1, byte +0x0 */
    unsigned long AREF : 8; /* bit 4, byte +0x0 */
    unsigned long AFAIL : 2; /* bit 12, byte +0x0 */
    unsigned long DATE : 1; /* bit 14, byte +0x0 */
    unsigned long DATM : 1; /* bit 15, byte +0x0 */
    unsigned long ZTE : 1; /* bit 16, byte +0x0 */
    unsigned long ZTST : 2; /* bit 17, byte +0x0 */
    unsigned long pad19 : 45; /* bit 19, byte +0x0 */
};

struct sceGsPabe {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsFba {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct sceGsFrame {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct sceGsZbuf {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct sceGsTrxpos {
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

struct sceGsTrxreg {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct sceGsTrxdir {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct sceGsSignal {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct sceGsLabel {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

union QWORD {
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

struct tagGScontext {
    sceGsPrim PRIM; /* +0x0 */
    sceGsRgbaq RGBAQ; /* +0x8 */
    sceGsSt ST; /* +0x10 */
    sceGsUv UV; /* +0x18 */
    sceGsXyzf XYZF2; /* +0x20 */
    sceGsXyz XYZ2; /* +0x28 */
    sceGsTex0 TEX0_1; /* +0x30 */
    sceGsTex0 TEX0_2; /* +0x38 */
    sceGsClamp CLAMP_1; /* +0x40 */
    sceGsClamp CLAMP_2; /* +0x48 */
    sceGsFog FOG; /* +0x50 */
    sceGsXyzf XYZF3; /* +0x58 */
    sceGsXyz XYZ3; /* +0x60 */
    sceGsTex1 TEX1_1; /* +0x68 */
    sceGsTex1 TEX1_2; /* +0x70 */
    sceGsTex2 TEX2_1; /* +0x78 */
    sceGsTex2 TEX2_2; /* +0x80 */
    sceGsXyoffset XYOFFSET_1; /* +0x88 */
    sceGsXyoffset XYOFFSET_2; /* +0x90 */
    sceGsPrmodecont PRMODECONT; /* +0x98 */
    sceGsPrmode PRMODE; /* +0xa0 */
    sceGsTexclut TEXCLUT; /* +0xa8 */
    sceGsScanmsk SCANMSK; /* +0xb0 */
    sceGsMiptbp1 MIPTBP1_1; /* +0xb8 */
    sceGsMiptbp1 MIPTBP1_2; /* +0xc0 */
    sceGsMiptbp2 MIPTBP2_1; /* +0xc8 */
    sceGsMiptbp2 MIPTBP2_2; /* +0xd0 */
    sceGsTexa TEXA; /* +0xd8 */
    sceGsFogcol FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    sceGsScissor SCISSOR_1; /* +0xf0 */
    sceGsScissor SCISSOR_2; /* +0xf8 */
    sceGsAlpha ALPHA_1; /* +0x100 */
    sceGsAlpha ALPHA_2; /* +0x108 */
    sceGsDimx DIMX; /* +0x110 */
    sceGsDthe DTHE; /* +0x118 */
    sceGsColclamp COLCLAMP; /* +0x120 */
    sceGsTest TEST_1; /* +0x128 */
    sceGsTest TEST_2; /* +0x130 */
    sceGsPabe PABE; /* +0x138 */
    sceGsFba FBA_1; /* +0x140 */
    sceGsFba FBA_2; /* +0x148 */
    sceGsFrame FRAME_1; /* +0x150 */
    sceGsFrame FRAME_2; /* +0x158 */
    sceGsZbuf ZBUF_1; /* +0x160 */
    sceGsZbuf ZBUF_2; /* +0x168 */
    sceGsBitbltbuf BITBLTBUF; /* +0x170 */
    sceGsTrxpos TRXPOS; /* +0x178 */
    sceGsTrxreg TRXREG; /* +0x180 */
    sceGsTrxdir TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    sceGsSignal SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    sceGsLabel LABEL; /* +0x1a8 */
    /* aggregate */ int ModFlgs; /* +0x1b0 */
    /* aggregate */ int GlobalModFlgs; /* +0x1b8 */
    QWORD PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    QWORD* pqCurrent; /* +0x2224 */
    sceGifTag* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*) pData[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    _sceDmaTag tagDma; /* +0x20 */
    sceGifTag tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tagGsLoadImage {
    sceGifTag gifTag; /* +0x0 */
    sceGsBitbltbuf bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    sceGsTrxpos trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    sceGsTrxreg trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    sceGsTrxdir trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct SemaParam {
    int currentCount; /* +0x0 */
    int maxCount; /* +0x4 */
    int initCount; /* +0x8 */
    int numWaitThreads; /* +0xc */
    unsigned int attr; /* +0x10 */
    unsigned int option; /* +0x14 */
};

struct S_TXR_Header_ {
    unsigned int VersionID; /* +0x0 */
    unsigned int Flags; /* +0x4 */
    unsigned int SizeX; /* +0x8 */
    unsigned int SizeY; /* +0xc */
};

struct tag_GLtexture_image {
    unsigned int target; /* +0x0 */
    int inputComponents; /* +0x4 */
    int width; /* +0x8 */
    int height; /* +0xc */
    unsigned int format; /* +0x10 */
    int pixels; /* +0x14 */
    int pixelsAux; /* +0x18 */
    int cbPixels; /* +0x1c */
    int cbPixelsAux; /* +0x20 */
    unsigned char pixelsChanged; /* +0x24 */
    unsigned char bConverted; /* +0x25 */
    unsigned char bUserMaintain; /* +0x26 */
    unsigned int uiSpan; /* +0x28 */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
};

struct stParamBegin {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct tag_GLlight {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vPosition[4]; /* +0x30 */
    float vDirection[4]; /* +0x40 */
    float fSpotExponent; /* +0x50 */
    float fSpotCutoff; /* +0x54 */
    float fCosCutoff; /* +0x58 */
    float fConstantAttenuation; /* +0x5c */
    float fLinearAttenuation; /* +0x60 */
    float fQuadraticAttenuation; /* +0x64 */
};

struct tag_GLtexture_set {
    float vTexEnvColor[4]; /* +0x0 */
    unsigned int eTexEnvMode; /* +0x10 */
    unsigned int nTexGenBits; /* +0x14 */
    unsigned short nTexGenModeS; /* +0x18 */
    unsigned short nTexGenModeT; /* +0x1a */
    unsigned short nTexGenModeR; /* +0x1c */
    unsigned short nTexGenModeQ; /* +0x1e */
    float vTexGenCoeffS[4]; /* +0x20 */
    float vTexGenCoeffT[4]; /* +0x30 */
    float vTexGenCoeffR[4]; /* +0x40 */
    float vTexGenCoeffQ[4]; /* +0x50 */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
};

struct ThreadParam {
    int status; /* +0x0 */
    void (*entry)(void*); /* +0x4 */
    int stack; /* +0x8 */
    int stackSize; /* +0xc */
    int gpReg; /* +0x10 */
    int initPriority; /* +0x14 */
    int currentPriority; /* +0x18 */
    unsigned int attr; /* +0x1c */
    unsigned int option; /* +0x20 */
    int waitType; /* +0x24 */
    int waitId; /* +0x28 */
    int wakeupCount; /* +0x2c */
};

struct tagGLtexname {
    unsigned char bAllocated; /* +0x0 */
    unsigned char bResident; /* +0x1 */
    float fPrioritize; /* +0x4 */
    unsigned int eDimension; /* +0x8 */
    int iTexBlock; /* +0xc */
    tag_GLtexture* pTex1D; /* +0x10 */
    tag_GLtexture* pTex2D; /* +0x14 */
    tag_GLtexture* pTexCube; /* +0x18 */
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
    float vScissorBox[4]; /* +0xf0 */
    float fIndexClearValue; /* +0x100 */
    unsigned int eAlphaTestFunc; /* +0x104 */
    float fAlphaTestRef; /* +0x108 */
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
    stParamBegin* pCurParamBegin; /* +0x5ce8 */
    tagGLprimbuf* ppCurPrimBufHead; /* +0x5cec */
    float (*) pCurListVData[4]; /* +0x5cf0 */
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
    float avClipPlane[6][4]; /* +0x6010 */
    unsigned int eMatrixMode; /* +0x6070 */
    float (*) pCurMatrix[4][4]; /* +0x6074 */
    float (*) pCurStack[4][4]; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*) pvcurColor[4]; /* +0x60d0 */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*) pvcurTextCoord[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    float valistColor[2][4]; /* +0x6120 */
    float (*) pvlistColor[4]; /* +0x6140 */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    float (*) pvlistTexCoord[4]; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    float (*) pvRasterTexCoord[4]; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    float (*) pfvPackaeBSs[4]; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    float ModelViewMatrix[4][4]; /* +0x62b0 */
    float NormalMatrix[4][4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    float ProjectionStack[4][4][4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    float TextureMatrix[2][4][4]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    float TextureStacks[2][4][4][4]; /* +0x6980 */
    float (*) pTextureMatrix[4][4]; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    float (*) pTextureStack[4][4]; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    float (*) pVBuf[4]; /* +0x6b9c */
    float (*) pCBuf[4]; /* +0x6ba0 */
    float (*) pNBuf[4]; /* +0x6ba4 */
    float (*) pTBuf[4]; /* +0x6ba8 */
    float (*) pCBuf_b[4]; /* +0x6bac */
    float (*) pTBuf_b[4]; /* +0x6bb0 */
    float (*) pVIFDMABuf[4]; /* +0x6bb4 */
    float (*) pVIFDMABufUnaligned[4]; /* +0x6bb8 */
    float (*) pVIFInBuf[4]; /* +0x6bbc */
    float (*) pVIFOutBuf[4]; /* +0x6bc0 */
    float (*) pVIFIBufTail[4]; /* +0x6bc4 */
    float (*) pVIFOBufTail[4]; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    _sceDmaTag* pVU1_DMA_parameters; /* +0x6bd0 */
    _sceDmaTag* pVU1_DMA_buf0; /* +0x6bd4 */
    _sceDmaTag* pVU1_DMA_buf1; /* +0x6bd8 */
    float (*) pmClipping[4][4]; /* +0x6bdc */
    float (*) pmNormal[4][4]; /* +0x6be0 */
    float (*) pmClippingScreen[4][4]; /* +0x6be4 */
    float (*) pmLocalScreen[4][4]; /* +0x6be8 */
    float (*) pmModelView[4][4]; /* +0x6bec */
    float (*) pvClampLimit[4]; /* +0x6bf0 */
    int (*) pClippingFlags[4]; /* +0x6bf4 */
    sceGifTag* pGifTagFan; /* +0x6bf8 */
    float (*) pmD[4][4]; /* +0x6bfc */
    float (*) pmVP[4][4]; /* +0x6c00 */
    float (*) pmS[4][4]; /* +0x6c04 */
    float (*) pmh[4][4]; /* +0x6c08 */
    float (*) pvAmbient[4]; /* +0x6c0c */
    float (*) pvEmission[4]; /* +0x6c10 */
    float (*) pvScreenScale[4]; /* +0x6c14 */
    float (*) pvColorRange[4]; /* +0x6c18 */
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
    sceGifTag* pGifTagBuf0; /* +0x6c5c */
    sceGifTag* pGifTagBuf1; /* +0x6c60 */
    int iCurBuf; /* +0x6c64 */
    float (*) pVBuf0[4]; /* +0x6c68 */
    float (*) pNBuf0[4]; /* +0x6c6c */
    float (*) pCBuf0[4]; /* +0x6c70 */
    float (*) pTBuf0[4]; /* +0x6c74 */
    float (*) pCBuf0_b[4]; /* +0x6c78 */
    float (*) pTBuf0_b[4]; /* +0x6c7c */
    float (*) pVBuf1[4]; /* +0x6c80 */
    float (*) pNBuf1[4]; /* +0x6c84 */
    float (*) pCBuf1[4]; /* +0x6c88 */
    float (*) pTBuf1[4]; /* +0x6c8c */
    float (*) pCBuf1_b[4]; /* +0x6c90 */
    float (*) pTBuf1_b[4]; /* +0x6c94 */
    tagstVIFCode* pMSCAL; /* +0x6c98 */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

unsigned int LoadingInProgress;
int g_iLoadingScreenBackgroundNumber;
int pLS;
int LS_iThreadID;
unsigned int g_ProgressSizeHaveRead;
unsigned int g_ProgressSizeToRead;
int _gp;
void (*LS_Process)(void);
int PS2glLiberator;
int PS2glAllocator64;
tagGScontext g_gsContext;
tagGLcontext g_PS2glContext;
int g_BlackScreenUntilNextMap;
float g_ffFrameTime;
float ambientMaterial[4];
float light_specular0[4];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 2655–2671 */
/* addr: 0x002cdc10  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2655
 *   +0x0004 -> line 2666
 *   +0x0008 -> line 2655
 *   +0x000c -> line 2663
 *   +0x0010 -> line 2656
 *   +0x0018 -> line 2657
 *   +0x0020 -> line 2658
 *   +0x0028 -> line 2659
 *   +0x0030 -> line 2660
 *   +0x0038 -> line 2661
 *   +0x0040 -> line 2666
 *   +0x0044 -> line 2662
 *   +0x004c -> line 2666
 *   +0x0064 -> line 2669
 *   +0x006c -> line 2668
 *   +0x0084 -> line 2671
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vAddLifeBars(float PosRightX, float PosBottomY, float CirclePerCent, float CurrentLife, float MaxLife, float CenterIcon, GLI_tdstMaterial_* pMat, float fAlpha)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 782–786 */
/* addr: 0x002cdca0  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 782
 *   +0x000c -> line 784
 *   +0x0020 -> line 786
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int LS_fn_iRemainingSizeToLoad(void)
{
    int iReturn;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 765–778 */
/* addr: 0x002cdcd0  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 765
 *   +0x006c -> line 768
 *   +0x008c -> line 769
 *   +0x0094 -> line 770
 *   +0x00b0 -> line 771
 *   +0x00b4 -> line 775
 *   +0x00e0 -> line 776
 *   +0x00e8 -> line 778
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void LS_FinallyIThinkIOnlyHaveThisSizeLeftToLoad(int SizeLeft)
{
    float Percent;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 726–735 */
/* addr: 0x002cddc0  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 726
 *   +0x0004 -> line 727
 *   +0x000c -> line 729
 *   +0x0038 -> line 733
 *   +0x0050 -> line 734
 *   +0x0078 -> line 735
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void LS_Process(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 687–715 */
/* addr: 0x002cde50  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 687
 *   +0x000c -> line 693
 *   +0x0018 -> line 698
 *   +0x0020 -> line 700
 *   +0x0030 -> line 706
 *   +0x0038 -> line 707
 *   +0x0040 -> line 710
 *   +0x00d4 -> line 713
 *   +0x00dc -> line 715
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void LS_Destroy(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 663–684 */
/* addr: 0x002cdf40  size: 340 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 663
 *   +0x0008 -> line 666
 *   +0x0010 -> line 667
 *   +0x0018 -> line 668
 *   +0x0040 -> line 669
 *   +0x0050 -> line 671
 *   +0x00d4 -> line 672
 *   +0x00dc -> line 674
 *   +0x00e0 -> line 676
 *   +0x00e8 -> line 674
 *   +0x00ec -> line 676
 *   +0x012c -> line 683
 *   +0x0130 -> line 681
 *   +0x0134 -> line 683
 *   +0x0144 -> line 684
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void LS_Create(void)
{
    SemaParam Semaphore;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 504–640 */
/* addr: 0x002ce0a0  size: 1804 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 504
 *   +0x000c -> line 510
 *   +0x0018 -> line 512
 *   +0x0034 -> line 519
 *   +0x0038 -> line 524
 *   +0x004c -> line 525
 *   +0x0054 -> line 526
 *   +0x0078 -> line 527
 *   +0x0080 -> line 532
 *   +0x0088 -> line 533
 *   +0x0090 -> line 534
 *   +0x0098 -> line 535
 *   +0x00a0 -> line 536
 *   +0x00c8 -> line 537
 *   +0x00d0 -> line 538
 *   +0x00d8 -> line 539
 *   +0x00e0 -> line 540
 *   +0x00e8 -> line 545
 *   +0x0148 -> line 546
 *   +0x0154 -> line 550
 *   +0x0178 -> line 551
 *   +0x017c -> line 550
 *   +0x0188 -> line 551
 *   +0x018c -> line 550
 *   +0x019c -> line 551
 *   +0x01a0 -> line 550
 *   +0x01a4 -> line 551
 *   +0x01a8 -> line 550
 *   +0x01b0 -> line 551
 *   +0x01b4 -> line 550
 *   +0x01b8 -> line 551
 *   +0x01c4 -> line 550
 *   +0x01c8 -> line 551
 *   +0x01cc -> line 550
 *   +0x01d0 -> line 551
 *   +0x01d8 -> line 552
 *   +0x01dc -> line 551
 *   +0x01e0 -> line 550
 *   +0x01e8 -> line 551
 *   +0x022c -> line 554
 *   +0x0230 -> line 552
 *   +0x0234 -> line 551
 *   +0x0238 -> line 552
 *   +0x023c -> line 551
 *   +0x0240 -> line 552
 *   +0x024c -> line 551
 *   +0x0250 -> line 552
 *   +0x0254 -> line 551
 *   +0x0258 -> line 552
 *   +0x025c -> line 553
 *   +0x0264 -> line 551
 *   +0x0268 -> line 553
 *   +0x026c -> line 551
 *   +0x0270 -> line 552
 *   +0x0280 -> line 553
 *   +0x0288 -> line 552
 *   +0x029c -> line 554
 *   +0x02a4 -> line 556
 *   +0x02e8 -> line 563
 *   +0x030c -> line 564
 *   +0x0338 -> line 565
 *   +0x0360 -> line 569
 *   +0x0368 -> line 570
 *   +0x0370 -> line 571
 *   +0x0398 -> line 572
 *   +0x03a0 -> line 573
 *   +0x03a8 -> line 574
 *   +0x03b0 -> line 575
 *   +0x03b8 -> line 581
 *   +0x0408 -> line 584
 *   +0x0424 -> line 585
 *   +0x042c -> line 584
 *   +0x0438 -> line 586
 *   +0x043c -> line 584
 *   +0x0448 -> line 586
 *   +0x044c -> line 584
 *   +0x0458 -> line 585
 *   +0x045c -> line 584
 *   +0x0460 -> line 585
 *   +0x0464 -> line 584
 *   +0x046c -> line 585
 *   +0x0470 -> line 584
 *   +0x048c -> line 585
 *   +0x0490 -> line 584
 *   +0x0494 -> line 585
 *   +0x0498 -> line 584
 *   +0x049c -> line 585
 *   +0x04a0 -> line 584
 *   +0x04a4 -> line 585
 *   +0x04a8 -> line 586
 *   +0x04ac -> line 584
 *   +0x04b0 -> line 585
 *   +0x04b4 -> line 584
 *   +0x04b8 -> line 585
 *   +0x04d8 -> line 586
 *   +0x04e0 -> line 589
 *   +0x0520 -> line 592
 *   +0x053c -> line 597
 *   +0x054c -> line 598
 *   +0x0554 -> line 597
 *   +0x0558 -> line 598
 *   +0x0568 -> line 599
 *   +0x0570 -> line 605
 *   +0x0580 -> line 606
 *   +0x058c -> line 605
 *   +0x0590 -> line 606
 *   +0x05a0 -> line 608
 *   +0x05b0 -> line 610
 *   +0x05b4 -> line 608
 *   +0x05b8 -> line 610
 *   +0x05bc -> line 612
 *   +0x05c4 -> line 614
 *   +0x05dc -> line 615
 *   +0x05e4 -> line 619
 *   +0x05ec -> line 626
 *   +0x05f8 -> line 628
 *   +0x05fc -> line 626
 *   +0x0600 -> line 628
 *   +0x0614 -> line 629
 *   +0x061c -> line 626
 *   +0x0620 -> line 630
 *   +0x062c -> line 626
 *   +0x0630 -> line 628
 *   +0x0658 -> line 629
 *   +0x065c -> line 628
 *   +0x0660 -> line 629
 *   +0x0664 -> line 628
 *   +0x066c -> line 629
 *   +0x0670 -> line 628
 *   +0x0684 -> line 629
 *   +0x0688 -> line 628
 *   +0x068c -> line 629
 *   +0x0690 -> line 628
 *   +0x0694 -> line 629
 *   +0x0698 -> line 628
 *   +0x069c -> line 629
 *   +0x06a0 -> line 628
 *   +0x06ac -> line 629
 *   +0x06b0 -> line 628
 *   +0x06b4 -> line 629
 *   +0x06d4 -> line 630
 *   +0x06dc -> line 633
 *   +0x06e4 -> line 636
 *   +0x06ec -> line 638
 *   +0x06f4 -> line 639
 *   +0x06fc -> line 640
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_LoadingScreen::Display(void)
{
    float pRGBColor[4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 416–483 */
/* addr: 0x002ce7b0  size: 912 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 416
 *   +0x0030 -> line 418
 *   +0x0034 -> line 416
 *   +0x004c -> line 418
 *   +0x0054 -> line 419
 *   +0x005c -> line 420
 *   +0x0088 -> line 421
 *   +0x0090 -> line 422
 *   +0x0098 -> line 423
 *   +0x00a0 -> line 424
 *   +0x00a8 -> line 426
 *   +0x0108 -> line 427
 *   +0x0114 -> line 428
 *   +0x012c -> line 429
 *   +0x0138 -> line 428
 *   +0x0170 -> line 429
 *   +0x0178 -> line 431
 *   +0x0180 -> line 432
 *   +0x019c -> line 442
 *   +0x01b0 -> line 443
 *   +0x01b4 -> line 444
 *   +0x01b8 -> line 442
 *   +0x01bc -> line 444
 *   +0x01c0 -> line 443
 *   +0x01c4 -> line 446
 *   +0x01c8 -> line 443
 *   +0x01d8 -> line 446
 *   +0x01e0 -> line 447
 *   +0x01e4 -> line 446
 *   +0x01e8 -> line 447
 *   +0x01f0 -> line 449
 *   +0x01fc -> line 450
 *   +0x0200 -> line 449
 *   +0x0204 -> line 450
 *   +0x020c -> line 451
 *   +0x0210 -> line 450
 *   +0x0214 -> line 451
 *   +0x021c -> line 452
 *   +0x0220 -> line 451
 *   +0x0224 -> line 452
 *   +0x022c -> line 454
 *   +0x0230 -> line 452
 *   +0x0238 -> line 457
 *   +0x0240 -> line 460
 *   +0x0244 -> line 457
 *   +0x0248 -> line 460
 *   +0x024c -> line 457
 *   +0x0250 -> line 459
 *   +0x0254 -> line 458
 *   +0x0258 -> line 457
 *   +0x0264 -> line 458
 *   +0x026c -> line 460
 *   +0x0274 -> line 462
 *   +0x0280 -> line 463
 *   +0x0294 -> line 465
 *   +0x02a8 -> line 466
 *   +0x02bc -> line 468
 *   +0x02cc -> line 469
 *   +0x02e0 -> line 472
 *   +0x02ec -> line 473
 *   +0x0300 -> line 475
 *   +0x0310 -> line 476
 *   +0x0324 -> line 478
 *   +0x0338 -> line 479
 *   +0x034c -> line 482
 *   +0x0354 -> line 483
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_LoadingScreen::DisplayWheelWork(float XX, float YY, float fSize, float fSpeed)
{
    int i;
    float c1;
    float s1;
    float Coords[4][2];
    float size;
    float y;
    float x;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 394–413 */
/* addr: 0x002ceb40  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 394
 *   +0x0004 -> line 395
 *   +0x0008 -> line 394
 *   +0x0048 -> line 395
 *   +0x0050 -> line 396
 *   +0x0064 -> line 398
 *   +0x0070 -> line 399
 *   +0x007c -> line 400
 *   +0x0088 -> line 401
 *   +0x0094 -> line 402
 *   +0x00a0 -> line 403
 *   +0x00ac -> line 405
 *   +0x00b8 -> line 406
 *   +0x00c4 -> line 407
 *   +0x00d0 -> line 408
 *   +0x00dc -> line 409
 *   +0x00e8 -> line 410
 *   +0x00f4 -> line 412
 *   +0x00fc -> line 413
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_LoadingScreen::DrawQuad(float X1, float Y1, float X2, float Y2, float U1, float V1, float U2, float V2, float R, float G, float B, float A)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 304–315 */
/* addr: 0x002cec70  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 304
 *   +0x0014 -> line 305
 *   +0x0020 -> line 307
 *   +0x002c -> line 308
 *   +0x0030 -> line 310
 *   +0x003c -> line 312
 *   +0x0048 -> line 313
 *   +0x004c -> line 315
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_LoadingScreen::FreeTexture(unsigned int** ppTextureData, unsigned int* pTextureName)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_LoadingScreen.cpp lines 268–300 */
/* addr: 0x002cecd0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 268
 *   +0x0004 -> line 270
 *   +0x0008 -> line 268
 *   +0x000c -> line 278
 *   +0x0010 -> line 268
 *   +0x0014 -> line 270
 *   +0x0018 -> line 271
 *   +0x001c -> line 274
 *   +0x0020 -> line 275
 *   +0x0028 -> line 276
 *   +0x0030 -> line 278
 *   +0x0034 -> line 280
 *   +0x0038 -> line 282
 *   +0x0044 -> line 284
 *   +0x0090 -> line 289
 *   +0x009c -> line 291
 *   +0x00b0 -> line 292
 *   +0x00b8 -> line 294
 *   +0x00cc -> line 296
 *   +0x00e0 -> line 297
 *   +0x00f8 -> line 299
 *   +0x00fc -> line 300
 *   +0x0100 -> line 299
 *   +0x0104 -> line 300
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_LoadingScreen(void)
{
    char TempString[128];
    /* TODO: decompile from asm/... */
}
