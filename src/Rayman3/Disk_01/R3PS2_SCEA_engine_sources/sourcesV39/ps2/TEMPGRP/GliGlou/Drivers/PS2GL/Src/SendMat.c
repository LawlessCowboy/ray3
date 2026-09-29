/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct anon_0 anon_0;
typedef struct _sceDmaTag _sceDmaTag;
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
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct GLI_tdstTexturePS2GL_ GLI_tdstTexturePS2GL_;
typedef struct tagGLtexindex tagGLtexindex;
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
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct anon_7 anon_7;
typedef struct anon_8 anon_8;
typedef struct anon_9 anon_9;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct anon_10 anon_10;
typedef struct anon_11 anon_11;
typedef struct anon_12 anon_12;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct tagListNode tagListNode;
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
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct tagstVIFCode tagstVIFCode;
typedef struct tagGLlistdatas tagGLlistdatas;

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct anon_0 {
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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
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

struct GLI_tdstTexturePS2GL_ {
    unsigned int TextureID; /* +0x0 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
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
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
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

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
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
    unsigned long PRIM_Modified : 1; /* bit 0, byte +0x0 */
    unsigned long RGBAQ_Modified : 1; /* bit 1, byte +0x0 */
    unsigned long ST_Modified : 1; /* bit 2, byte +0x0 */
    unsigned long UV_Modified : 1; /* bit 3, byte +0x0 */
    unsigned long XYZF2_Modified : 1; /* bit 4, byte +0x0 */
    unsigned long XYZ2_Modified : 1; /* bit 5, byte +0x0 */
    unsigned long TEX0_1_Modified : 1; /* bit 6, byte +0x0 */
    unsigned long TEX0_2_Modified : 1; /* bit 7, byte +0x0 */
    unsigned long CLAMP_1_Modified : 1; /* bit 8, byte +0x0 */
    unsigned long CLAMP_2_Modified : 1; /* bit 9, byte +0x0 */
    unsigned long FOG_Modified : 1; /* bit 10, byte +0x0 */
    unsigned long XYZF3_Modified : 1; /* bit 11, byte +0x0 */
    unsigned long XYZ3_Modified : 1; /* bit 12, byte +0x0 */
    unsigned long TEX1_1_Modified : 1; /* bit 13, byte +0x0 */
    unsigned long TEX1_2_Modified : 1; /* bit 14, byte +0x0 */
    unsigned long TEX2_1_Modified : 1; /* bit 15, byte +0x0 */
    unsigned long TEX2_2_Modified : 1; /* bit 16, byte +0x0 */
    unsigned long XYOFFSET_1_Modified : 1; /* bit 17, byte +0x0 */
    unsigned long XYOFFSET_2_Modified : 1; /* bit 18, byte +0x0 */
    unsigned long PRMODECONT_Modified : 1; /* bit 19, byte +0x0 */
    unsigned long PRMODE_Modified : 1; /* bit 20, byte +0x0 */
    unsigned long TEXCLUT_Modified : 1; /* bit 21, byte +0x0 */
    unsigned long SCANMSK_Modified : 1; /* bit 22, byte +0x0 */
    unsigned long MIPTBP1_1_Modified : 1; /* bit 23, byte +0x0 */
    unsigned long MIPTBP1_2_Modified : 1; /* bit 24, byte +0x0 */
    unsigned long MIPTBP2_1_Modified : 1; /* bit 25, byte +0x0 */
    unsigned long MIPTBP2_2_Modified : 1; /* bit 26, byte +0x0 */
    unsigned long TEXA_Modified : 1; /* bit 27, byte +0x0 */
    unsigned long FOGCOL_Modified : 1; /* bit 28, byte +0x0 */
    unsigned long TEXFLUSH_Modified : 1; /* bit 29, byte +0x0 */
    unsigned long SCISSOR_1_Modified : 1; /* bit 30, byte +0x0 */
    unsigned long SCISSOR_2_Modified : 1; /* bit 31, byte +0x0 */
    unsigned long ALPHA_1_Modified : 1; /* bit 32, byte +0x0 */
    unsigned long ALPHA_2_Modified : 1; /* bit 33, byte +0x0 */
    unsigned long DIMX_Modified : 1; /* bit 34, byte +0x0 */
    unsigned long DTHE_Modified : 1; /* bit 35, byte +0x0 */
    unsigned long COLCLAMP_Modified : 1; /* bit 36, byte +0x0 */
    unsigned long TEST_1_Modified : 1; /* bit 37, byte +0x0 */
    unsigned long TEST_2_Modified : 1; /* bit 38, byte +0x0 */
    unsigned long PABE_Modified : 1; /* bit 39, byte +0x0 */
    unsigned long FBA_1_Modified : 1; /* bit 40, byte +0x0 */
    unsigned long FBA_2_Modified : 1; /* bit 41, byte +0x0 */
    unsigned long FRAME_1_Modified : 1; /* bit 42, byte +0x0 */
    unsigned long FRAME_2_Modified : 1; /* bit 43, byte +0x0 */
    unsigned long ZBUF_1_Modified : 1; /* bit 44, byte +0x0 */
    unsigned long ZBUF_2_Modified : 1; /* bit 45, byte +0x0 */
    unsigned long BITBLTBUF_Modified : 1; /* bit 46, byte +0x0 */
    unsigned long TRXPOS_Modified : 1; /* bit 47, byte +0x0 */
    unsigned long TRXREG_Modified : 1; /* bit 48, byte +0x0 */
    unsigned long TRXDIR_Modified : 1; /* bit 49, byte +0x0 */
    unsigned long HWREG_Modified : 1; /* bit 50, byte +0x0 */
    unsigned long SIGNAL_Modified : 1; /* bit 51, byte +0x0 */
    unsigned long FINISH_Modified : 1; /* bit 52, byte +0x0 */
    unsigned long LABEL_Modified : 1; /* bit 53, byte +0x0 */
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

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
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

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
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
} __attribute__((aligned(16)));

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
} __attribute__((aligned(16)));

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
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

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
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
int GLI_BIG_GLOBALS_hCurrentMaterial;
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 103–130 */
/* addr: 0x002be7a0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 103
 *   +0x000c -> line 104
 *   +0x0010 -> line 107
 *   +0x0018 -> line 108
 *   +0x001c -> line 110
 *   +0x0030 -> line 111
 *   +0x0034 -> line 113
 *   +0x003c -> line 116
 *   +0x0048 -> line 117
 *   +0x0050 -> line 120
 *   +0x0054 -> line 121
 *   +0x005c -> line 126
 *   +0x009c -> line 127
 *   +0x00a0 -> line 130
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TBF_ChangeCacheSize(int size)
{
    char* NewFileBuffer;
    int NewSize;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 2362–2418 */
/* addr: 0x002be850  size: 244 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2362
 *   +0x0014 -> line 2367
 *   +0x0024 -> line 2374
 *   +0x0028 -> line 2369
 *   +0x002c -> line 2374
 *   +0x0038 -> line 2378
 *   +0x0040 -> line 2379
 *   +0x004c -> line 2384
 *   +0x0054 -> line 2385
 *   +0x0060 -> line 2391
 *   +0x0084 -> line 2395
 *   +0x0090 -> line 2401
 *   +0x0098 -> line 2406
 *   +0x00a0 -> line 2409
 *   +0x00a8 -> line 2411
 *   +0x00cc -> line 2413
 *   +0x00d8 -> line 2417
 *   +0x00dc -> line 2418
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_bIsMaterialAdditive(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_2* pMat;
    GLI_tdstTexture_* p_stTexture;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1460–2113 */
/* addr: 0x002be950  size: 3292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1460
 *   +0x0028 -> line 1472
 *   +0x002c -> line 1469
 *   +0x0030 -> line 1472
 *   +0x0038 -> line 1474
 *   +0x0040 -> line 1479
 *   +0x008c -> line 1481
 *   +0x0090 -> line 1482
 *   +0x0098 -> line 1485
 *   +0x009c -> line 1488
 *   +0x00a0 -> line 1499
 *   +0x00a4 -> line 1490
 *   +0x00a8 -> line 1491
 *   +0x00ac -> line 1488
 *   +0x00b4 -> line 1500
 *   +0x00b8 -> line 1488
 *   +0x00c0 -> line 1502
 *   +0x00cc -> line 1511
 *   +0x00d0 -> line 1514
 *   +0x00e0 -> line 1517
 *   +0x00ec -> line 1519
 *   +0x00f4 -> line 1520
 *   +0x0100 -> line 1524
 *   +0x0108 -> line 1529
 *   +0x0110 -> line 1530
 *   +0x011c -> line 1538
 *   +0x0124 -> line 1543
 *   +0x0128 -> line 1541
 *   +0x012c -> line 1543
 *   +0x0168 -> line 1544
 *   +0x0170 -> line 1547
 *   +0x0188 -> line 1549
 *   +0x018c -> line 1552
 *   +0x01a0 -> line 1556
 *   +0x01a8 -> line 1557
 *   +0x01b4 -> line 1560
 *   +0x01e0 -> line 1563
 *   +0x01e8 -> line 1566
 *   +0x01f0 -> line 1567
 *   +0x01f8 -> line 1569
 *   +0x0214 -> line 1570
 *   +0x0230 -> line 1571
 *   +0x0238 -> line 1572
 *   +0x0240 -> line 1579
 *   +0x0248 -> line 1582
 *   +0x0250 -> line 1583
 *   +0x0258 -> line 1585
 *   +0x0264 -> line 1587
 *   +0x026c -> line 1592
 *   +0x0274 -> line 1593
 *   +0x0280 -> line 1594
 *   +0x0288 -> line 1595
 *   +0x0290 -> line 1596
 *   +0x0298 -> line 1599
 *   +0x02a0 -> line 1601
 *   +0x02a8 -> line 1604
 *   +0x02b0 -> line 1605
 *   +0x02b8 -> line 1606
 *   +0x02c4 -> line 1607
 *   +0x02e0 -> line 1608
 *   +0x02fc -> line 1609
 *   +0x0304 -> line 1610
 *   +0x030c -> line 1616
 *   +0x0314 -> line 1620
 *   +0x031c -> line 1621
 *   +0x0324 -> line 1623
 *   +0x0330 -> line 1624
 *   +0x0338 -> line 1627
 *   +0x0340 -> line 1629
 *   +0x0348 -> line 1631
 *   +0x0364 -> line 1632
 *   +0x036c -> line 1635
 *   +0x0384 -> line 1638
 *   +0x0390 -> line 1642
 *   +0x03e8 -> line 1643
 *   +0x03f4 -> line 1645
 *   +0x03fc -> line 1647
 *   +0x0404 -> line 1648
 *   +0x040c -> line 1649
 *   +0x0428 -> line 1650
 *   +0x0480 -> line 1651
 *   +0x048c -> line 1652
 *   +0x0494 -> line 1654
 *   +0x049c -> line 1655
 *   +0x04a4 -> line 1656
 *   +0x04c0 -> line 1657
 *   +0x04c8 -> line 1658
 *   +0x04d0 -> line 1659
 *   +0x04d8 -> line 1661
 *   +0x04e0 -> line 1664
 *   +0x04e8 -> line 1665
 *   +0x04f0 -> line 1666
 *   +0x04fc -> line 1667
 *   +0x0518 -> line 1668
 *   +0x0534 -> line 1669
 *   +0x053c -> line 1678
 *   +0x0544 -> line 1679
 *   +0x054c -> line 1681
 *   +0x0558 -> line 1682
 *   +0x0560 -> line 1688
 *   +0x0570 -> line 1690
 *   +0x0580 -> line 1691
 *   +0x0588 -> line 1694
 *   +0x0594 -> line 1697
 *   +0x05a4 -> line 1699
 *   +0x05b4 -> line 1700
 *   +0x05bc -> line 1703
 *   +0x05c8 -> line 1708
 *   +0x05d4 -> line 1710
 *   +0x05e4 -> line 1711
 *   +0x05f4 -> line 1712
 *   +0x0604 -> line 1713
 *   +0x0614 -> line 1714
 *   +0x061c -> line 1717
 *   +0x062c -> line 1718
 *   +0x063c -> line 1721
 *   +0x064c -> line 1732
 *   +0x0654 -> line 1733
 *   +0x065c -> line 1734
 *   +0x0664 -> line 1735
 *   +0x0688 -> line 1738
 *   +0x068c -> line 1736
 *   +0x0690 -> line 1738
 *   +0x0694 -> line 1740
 *   +0x06a8 -> line 1741
 *   +0x06b4 -> line 1744
 *   +0x06bc -> line 1750
 *   +0x06c4 -> line 1751
 *   +0x06cc -> line 1756
 *   +0x06d4 -> line 1763
 *   +0x06dc -> line 1801
 *   +0x06f0 -> line 1807
 *   +0x06fc -> line 1810
 *   +0x0704 -> line 1813
 *   +0x070c -> line 1820
 *   +0x0714 -> line 1821
 *   +0x0720 -> line 1825
 *   +0x0724 -> line 1826
 *   +0x0728 -> line 1838
 *   +0x074c -> line 1853
 *   +0x0754 -> line 1854
 *   +0x075c -> line 1855
 *   +0x0764 -> line 1856
 *   +0x0788 -> line 1858
 *   +0x078c -> line 1857
 *   +0x0790 -> line 1858
 *   +0x0794 -> line 1861
 *   +0x07a8 -> line 1862
 *   +0x07b4 -> line 1864
 *   +0x07bc -> line 1869
 *   +0x07c8 -> line 1870
 *   +0x07d0 -> line 1871
 *   +0x07d8 -> line 1881
 *   +0x07e8 -> line 1883
 *   +0x07f8 -> line 1884
 *   +0x0800 -> line 1887
 *   +0x080c -> line 1890
 *   +0x081c -> line 1892
 *   +0x082c -> line 1893
 *   +0x0834 -> line 1896
 *   +0x0840 -> line 1902
 *   +0x084c -> line 1904
 *   +0x085c -> line 1905
 *   +0x086c -> line 1906
 *   +0x087c -> line 1907
 *   +0x088c -> line 1908
 *   +0x0894 -> line 1911
 *   +0x08a4 -> line 1912
 *   +0x08b4 -> line 1917
 *   +0x08d4 -> line 1925
 *   +0x08dc -> line 1927
 *   +0x08e4 -> line 1928
 *   +0x08ec -> line 1929
 *   +0x0908 -> line 1930
 *   +0x0910 -> line 1931
 *   +0x0918 -> line 1933
 *   +0x0920 -> line 1939
 *   +0x0928 -> line 1940
 *   +0x0930 -> line 1941
 *   +0x0938 -> line 1942
 *   +0x0954 -> line 1945
 *   +0x095c -> line 1951
 *   +0x0964 -> line 1955
 *   +0x0974 -> line 1960
 *   +0x097c -> line 1963
 *   +0x0984 -> line 1964
 *   +0x0990 -> line 1965
 *   +0x0998 -> line 1966
 *   +0x09a0 -> line 1971
 *   +0x09a8 -> line 1972
 *   +0x09b0 -> line 1973
 *   +0x09c4 -> line 1976
 *   +0x09cc -> line 1983
 *   +0x09d4 -> line 1985
 *   +0x09dc -> line 1989
 *   +0x09f0 -> line 1994
 *   +0x09f8 -> line 1995
 *   +0x0a00 -> line 1997
 *   +0x0a0c -> line 2001
 *   +0x0a1c -> line 2007
 *   +0x0a24 -> line 2008
 *   +0x0a7c -> line 2009
 *   +0x0a88 -> line 2010
 *   +0x0a90 -> line 2015
 *   +0x0a98 -> line 2016
 *   +0x0ab4 -> line 2017
 *   +0x0abc -> line 2018
 *   +0x0b14 -> line 2019
 *   +0x0b20 -> line 2024
 *   +0x0b28 -> line 2027
 *   +0x0b30 -> line 2032
 *   +0x0b44 -> line 2034
 *   +0x0b4c -> line 2035
 *   +0x0b58 -> line 2036
 *   +0x0b60 -> line 2037
 *   +0x0b68 -> line 2038
 *   +0x0b70 -> line 2042
 *   +0x0b78 -> line 2043
 *   +0x0b84 -> line 2044
 *   +0x0b8c -> line 2045
 *   +0x0b94 -> line 2048
 *   +0x0b9c -> line 2050
 *   +0x0ba4 -> line 2064
 *   +0x0be4 -> line 2073
 *   +0x0bec -> line 2075
 *   +0x0bf4 -> line 2077
 *   +0x0bfc -> line 2078
 *   +0x0c04 -> line 2079
 *   +0x0c10 -> line 2082
 *   +0x0c18 -> line 2083
 *   +0x0c20 -> line 2086
 *   +0x0c28 -> line 2087
 *   +0x0c30 -> line 2088
 *   +0x0c38 -> line 2091
 *   +0x0c40 -> line 2094
 *   +0x0c48 -> line 2097
 *   +0x0c50 -> line 2100
 *   +0x0c58 -> line 2101
 *   +0x0c60 -> line 2102
 *   +0x0c68 -> line 2104
 *   +0x0c70 -> line 2105
 *   +0x0c74 -> line 2106
 *   +0x0c80 -> line 2107
 *   +0x0c88 -> line 2108
 *   +0x0c90 -> line 2109
 *   +0x0c98 -> line 2110
 *   +0x0cb4 -> line 2113
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSendStaticMaterialToViewport(GLI_tdstMaterial_* hVisualMaterial)
{
    unsigned int hRef;
    char Operator;
    anon_2* pMat;
    int HasVertexTransparency;
    int bUseAlpha;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1440–1453 */
/* addr: 0x002bf630  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1440
 *   +0x0004 -> line 1442
 *   +0x0018 -> line 1444
 *   +0x001c -> line 1446
 *   +0x0038 -> line 1448
 *   +0x00b8 -> line 1449
 *   +0x00c0 -> line 1448
 *   +0x00c8 -> line 1449
 *   +0x00d8 -> line 1451
 *   +0x00e4 -> line 1453
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vForceSkinMaterialIndex(GLI_tdstMaterial_* pMat, unsigned int Index)
{
    unsigned int Dest;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1389–1416 */
/* addr: 0x002bf720  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1389
 *   +0x0008 -> line 1390
 *   +0x0014 -> line 1394
 *   +0x001c -> line 1395
 *   +0x0028 -> line 1396
 *   +0x0038 -> line 1397
 *   +0x004c -> line 1398
 *   +0x005c -> line 1400
 *   +0x0064 -> line 1401
 *   +0x0070 -> line 1402
 *   +0x0078 -> line 1407
 *   +0x0080 -> line 1408
 *   +0x008c -> line 1409
 *   +0x009c -> line 1410
 *   +0x00b0 -> line 1411
 *   +0x00c0 -> line 1413
 *   +0x00c8 -> line 1414
 *   +0x00d4 -> line 1416
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SetStaticFog(void)
{
    unsigned int hRef;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1252–1344 */
/* addr: 0x002bf800  size: 456 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1252
 *   +0x0008 -> line 1264
 *   +0x0018 -> line 1269
 *   +0x005c -> line 1275
 *   +0x0060 -> line 1279
 *   +0x0074 -> line 1281
 *   +0x0094 -> line 1285
 *   +0x0098 -> line 1286
 *   +0x00a0 -> line 1288
 *   +0x00b0 -> line 1291
 *   +0x00b8 -> line 1292
 *   +0x00c0 -> line 1293
 *   +0x00c8 -> line 1296
 *   +0x00d0 -> line 1297
 *   +0x00d8 -> line 1298
 *   +0x00e4 -> line 1301
 *   +0x00ec -> line 1306
 *   +0x0110 -> line 1314
 *   +0x0140 -> line 1319
 *   +0x0144 -> line 1320
 *   +0x0148 -> line 1319
 *   +0x014c -> line 1320
 *   +0x0158 -> line 1321
 *   +0x016c -> line 1324
 *   +0x0188 -> line 1328
 *   +0x0190 -> line 1332
 *   +0x0198 -> line 1335
 *   +0x01a0 -> line 1338
 *   +0x01a4 -> line 1341
 *   +0x01a8 -> line 1338
 *   +0x01ac -> line 1342
 *   +0x01c0 -> line 1344
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vAssignOptimizedFunctionToMaterial(GLI_tdstMaterial_* hVisualMaterial)
{
    unsigned int Operator;
    anon_2* pMat;
    int stage;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1220–1243 */
/* addr: 0x002bf9d0  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1220
 *   +0x0010 -> line 1221
 *   +0x001c -> line 1224
 *   +0x0020 -> line 1225
 *   +0x0038 -> line 1228
 *   +0x0044 -> line 1230
 *   +0x004c -> line 1236
 *   +0x0070 -> line 1239
 *   +0x0078 -> line 1242
 *   +0x007c -> line 1243
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLI_DRV_IsMaterialTransparent(GLI_tdstMaterial_* hVisualMaterial)
{
    unsigned int Operator;
    anon_2* pMat;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1184–1211 */
/* addr: 0x002bfa60  size: 1008 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1184
 *   +0x001c -> line 1193
 *   +0x0020 -> line 1185
 *   +0x0024 -> line 1186
 *   +0x0028 -> line 1195
 *   +0x002c -> line 1193
 *   +0x0034 -> line 1195
 *   +0x0038 -> line 1193
 *   +0x003c -> line 1195
 *   +0x0040 -> line 1193
 *   +0x0044 -> line 1195
 *   +0x011c -> line 1196
 *   +0x0140 -> line 1197
 *   +0x01c8 -> line 1199
 *   +0x01d4 -> line 1203
 *   +0x01d8 -> line 1201
 *   +0x01dc -> line 1203
 *   +0x01e4 -> line 1201
 *   +0x01e8 -> line 1203
 *   +0x01ec -> line 1201
 *   +0x01f8 -> line 1203
 *   +0x0200 -> line 1201
 *   +0x0238 -> line 1203
 *   +0x0240 -> line 1204
 *   +0x025c -> line 1205
 *   +0x0260 -> line 1204
 *   +0x0298 -> line 1205
 *   +0x02a0 -> line 1208
 *   +0x02a4 -> line 1207
 *   +0x02a8 -> line 1208
 *   +0x03d4 -> line 1211
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SEND_MAT_OPT_MULT_ADD(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_2* pMat;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    int Local_LastTextureMode;
    void* p_stLastTexture;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1148–1181 */
/* addr: 0x002bfe50  size: 1020 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1148
 *   +0x001c -> line 1164
 *   +0x0020 -> line 1149
 *   +0x0024 -> line 1150
 *   +0x0028 -> line 1166
 *   +0x002c -> line 1164
 *   +0x0034 -> line 1166
 *   +0x0038 -> line 1164
 *   +0x003c -> line 1166
 *   +0x0040 -> line 1164
 *   +0x0044 -> line 1166
 *   +0x011c -> line 1167
 *   +0x0140 -> line 1168
 *   +0x01c8 -> line 1170
 *   +0x01d4 -> line 1172
 *   +0x01dc -> line 1173
 *   +0x01e0 -> line 1174
 *   +0x01e4 -> line 1173
 *   +0x01e8 -> line 1174
 *   +0x01f0 -> line 1173
 *   +0x0200 -> line 1174
 *   +0x0204 -> line 1173
 *   +0x023c -> line 1174
 *   +0x0244 -> line 1175
 *   +0x02a0 -> line 1177
 *   +0x03d8 -> line 1178
 *   +0x03e0 -> line 1181
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SEND_MAT_OPT_MULT_NZ(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_2* pMat;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    int Local_LastTextureMode;
    void* p_stLastTexture;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1113–1145 */
/* addr: 0x002c0250  size: 1000 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1113
 *   +0x001c -> line 1129
 *   +0x0020 -> line 1114
 *   +0x0024 -> line 1115
 *   +0x0028 -> line 1131
 *   +0x002c -> line 1129
 *   +0x0034 -> line 1131
 *   +0x0038 -> line 1129
 *   +0x003c -> line 1131
 *   +0x0040 -> line 1129
 *   +0x0044 -> line 1131
 *   +0x011c -> line 1132
 *   +0x0140 -> line 1133
 *   +0x01c8 -> line 1135
 *   +0x01d4 -> line 1137
 *   +0x01dc -> line 1138
 *   +0x01f8 -> line 1139
 *   +0x0204 -> line 1138
 *   +0x0220 -> line 1139
 *   +0x0224 -> line 1138
 *   +0x0228 -> line 1139
 *   +0x022c -> line 1138
 *   +0x0230 -> line 1139
 *   +0x0244 -> line 1138
 *   +0x025c -> line 1139
 *   +0x028c -> line 1141
 *   +0x03c4 -> line 1142
 *   +0x03cc -> line 1145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SEND_MAT_OPT_MULT_OPAQUE(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_2* pMat;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    int Local_LastTextureMode;
    void* p_stLastTexture;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1083–1110 */
/* addr: 0x002c0640  size: 992 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1083
 *   +0x001c -> line 1092
 *   +0x0020 -> line 1084
 *   +0x0024 -> line 1085
 *   +0x0028 -> line 1094
 *   +0x002c -> line 1092
 *   +0x0034 -> line 1094
 *   +0x0038 -> line 1092
 *   +0x003c -> line 1094
 *   +0x0040 -> line 1092
 *   +0x0044 -> line 1094
 *   +0x011c -> line 1095
 *   +0x0140 -> line 1096
 *   +0x01c8 -> line 1098
 *   +0x01d4 -> line 1100
 *   +0x01e8 -> line 1101
 *   +0x01f0 -> line 1100
 *   +0x0228 -> line 1101
 *   +0x0230 -> line 1102
 *   +0x0238 -> line 1103
 *   +0x0290 -> line 1107
 *   +0x0294 -> line 1106
 *   +0x0298 -> line 1107
 *   +0x03c4 -> line 1110
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SEND_MAT_OPT_MULT_ALPHA(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_2* pMat;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    int Local_LastTextureMode;
    void* p_stLastTexture;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1053–1080 */
/* addr: 0x002c0a20  size: 908 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1053
 *   +0x0014 -> line 1056
 *   +0x0018 -> line 1057
 *   +0x001c -> line 1060
 *   +0x0020 -> line 1065
 *   +0x0030 -> line 1060
 *   +0x0040 -> line 1065
 *   +0x00cc -> line 1066
 *   +0x00f0 -> line 1067
 *   +0x0178 -> line 1069
 *   +0x0184 -> line 1071
 *   +0x0198 -> line 1072
 *   +0x01a0 -> line 1071
 *   +0x01d8 -> line 1072
 *   +0x01e0 -> line 1073
 *   +0x01e8 -> line 1074
 *   +0x0240 -> line 1077
 *   +0x0244 -> line 1076
 *   +0x0248 -> line 1077
 *   +0x0374 -> line 1080
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SEND_MAT_OPT_ALPHA(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_2* pMat;
    unsigned int Local_LastTextureMode;
    void* p_stLastTexture;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 1022–1049 */
/* addr: 0x002c0db0  size: 928 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1022
 *   +0x0014 -> line 1025
 *   +0x0018 -> line 1026
 *   +0x001c -> line 1029
 *   +0x0020 -> line 1033
 *   +0x0030 -> line 1029
 *   +0x0040 -> line 1033
 *   +0x00cc -> line 1034
 *   +0x00f0 -> line 1035
 *   +0x0178 -> line 1037
 *   +0x0184 -> line 1039
 *   +0x0188 -> line 1041
 *   +0x018c -> line 1039
 *   +0x0190 -> line 1041
 *   +0x0198 -> line 1039
 *   +0x019c -> line 1041
 *   +0x01a0 -> line 1039
 *   +0x01ac -> line 1041
 *   +0x01b4 -> line 1039
 *   +0x01ec -> line 1041
 *   +0x01f4 -> line 1042
 *   +0x0204 -> line 1043
 *   +0x0208 -> line 1042
 *   +0x0254 -> line 1043
 *   +0x0374 -> line 1044
 *   +0x0380 -> line 1046
 *   +0x0388 -> line 1049
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SEND_MAT_OPT_ADD(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_2* pMat;
    int Local_LastTextureMode;
    void* p_stLastTexture;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 992–1018 */
/* addr: 0x002c1150  size: 936 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 992
 *   +0x0014 -> line 995
 *   +0x0018 -> line 996
 *   +0x001c -> line 999
 *   +0x0020 -> line 1003
 *   +0x0030 -> line 999
 *   +0x0040 -> line 1003
 *   +0x00cc -> line 1004
 *   +0x00f0 -> line 1005
 *   +0x0178 -> line 1007
 *   +0x0184 -> line 1009
 *   +0x018c -> line 1010
 *   +0x0190 -> line 1011
 *   +0x0194 -> line 1010
 *   +0x0198 -> line 1011
 *   +0x01a0 -> line 1010
 *   +0x01b0 -> line 1011
 *   +0x01b4 -> line 1010
 *   +0x01ec -> line 1011
 *   +0x01f4 -> line 1012
 *   +0x0250 -> line 1014
 *   +0x0388 -> line 1015
 *   +0x0390 -> line 1018
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SEND_MAT_OPT_NZ(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_2* pMat;
    int Local_LastTextureMode;
    void* p_stLastTexture;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 955–989 */
/* addr: 0x002c1500  size: 916 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 955
 *   +0x0014 -> line 958
 *   +0x0018 -> line 959
 *   +0x001c -> line 962
 *   +0x0020 -> line 974
 *   +0x0030 -> line 962
 *   +0x0040 -> line 974
 *   +0x00cc -> line 975
 *   +0x00f0 -> line 976
 *   +0x0178 -> line 978
 *   +0x0184 -> line 980
 *   +0x018c -> line 981
 *   +0x01a8 -> line 982
 *   +0x01b4 -> line 981
 *   +0x01d0 -> line 982
 *   +0x01d4 -> line 981
 *   +0x01d8 -> line 982
 *   +0x01dc -> line 981
 *   +0x01e0 -> line 982
 *   +0x01f4 -> line 981
 *   +0x020c -> line 982
 *   +0x023c -> line 986
 *   +0x0374 -> line 987
 *   +0x037c -> line 989
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SEND_MAT_OPT_OPAQUE(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_2* pMat;
    int Local_LastTextureMode;
    void* p_stLastTexture;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 253–864 */
/* addr: 0x002c18a0  size: 11336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 253
 *   +0x0038 -> line 263
 *   +0x003c -> line 258
 *   +0x0040 -> line 259
 *   +0x0044 -> line 263
 *   +0x004c -> line 265
 *   +0x0060 -> line 267
 *   +0x0068 -> line 269
 *   +0x0074 -> line 274
 *   +0x00b4 -> line 276
 *   +0x00b8 -> line 277
 *   +0x00c0 -> line 280
 *   +0x00e4 -> line 282
 *   +0x00ec -> line 283
 *   +0x00f4 -> line 285
 *   +0x00f8 -> line 288
 *   +0x00fc -> line 310
 *   +0x0100 -> line 290
 *   +0x0104 -> line 291
 *   +0x0108 -> line 302
 *   +0x010c -> line 311
 *   +0x0110 -> line 314
 *   +0x0114 -> line 288
 *   +0x0124 -> line 314
 *   +0x0130 -> line 317
 *   +0x0148 -> line 319
 *   +0x0150 -> line 320
 *   +0x015c -> line 324
 *   +0x0164 -> line 329
 *   +0x016c -> line 330
 *   +0x0178 -> line 338
 *   +0x0180 -> line 343
 *   +0x0184 -> line 341
 *   +0x0188 -> line 343
 *   +0x01c4 -> line 346
 *   +0x01cc -> line 349
 *   +0x01e8 -> line 351
 *   +0x01ec -> line 354
 *   +0x0200 -> line 356
 *   +0x0260 -> line 357
 *   +0x026c -> line 358
 *   +0x029c -> line 361
 *   +0x02a4 -> line 364
 *   +0x02bc -> line 365
 *   +0x02c0 -> line 364
 *   +0x02f8 -> line 365
 *   +0x0300 -> line 367
 *   +0x031c -> line 368
 *   +0x0338 -> line 369
 *   +0x0470 -> line 370
 *   +0x0478 -> line 377
 *   +0x04d4 -> line 380
 *   +0x04dc -> line 381
 *   +0x0618 -> line 383
 *   +0x066c -> line 385
 *   +0x0674 -> line 389
 *   +0x068c -> line 390
 *   +0x0694 -> line 389
 *   +0x06cc -> line 390
 *   +0x06d4 -> line 391
 *   +0x06dc -> line 392
 *   +0x06ec -> line 393
 *   +0x06f0 -> line 392
 *   +0x073c -> line 393
 *   +0x0858 -> line 394
 *   +0x0860 -> line 396
 *   +0x0868 -> line 399
 *   +0x0880 -> line 400
 *   +0x0884 -> line 399
 *   +0x08bc -> line 400
 *   +0x08c4 -> line 401
 *   +0x08d0 -> line 402
 *   +0x08ec -> line 403
 *   +0x0908 -> line 404
 *   +0x0a40 -> line 405
 *   +0x0a48 -> line 411
 *   +0x0aa4 -> line 415
 *   +0x0aac -> line 416
 *   +0x0be8 -> line 418
 *   +0x0c38 -> line 419
 *   +0x0c40 -> line 422
 *   +0x0c90 -> line 424
 *   +0x0c98 -> line 426
 *   +0x0cb4 -> line 427
 *   +0x0cbc -> line 430
 *   +0x0cd8 -> line 433
 *   +0x0ce8 -> line 437
 *   +0x0cec -> line 433
 *   +0x0d38 -> line 437
 *   +0x0e5c -> line 438
 *   +0x0e68 -> line 439
 *   +0x0e70 -> line 441
 *   +0x0e88 -> line 442
 *   +0x0e94 -> line 441
 *   +0x0ea0 -> line 442
 *   +0x0ea4 -> line 441
 *   +0x0eb4 -> line 442
 *   +0x0eb8 -> line 441
 *   +0x0ebc -> line 442
 *   +0x0ec0 -> line 441
 *   +0x0ec4 -> line 442
 *   +0x0ed4 -> line 443
 *   +0x0ed8 -> line 441
 *   +0x0ef0 -> line 442
 *   +0x0f14 -> line 443
 *   +0x0f18 -> line 442
 *   +0x0f1c -> line 443
 *   +0x0f24 -> line 442
 *   +0x0f28 -> line 443
 *   +0x0f2c -> line 442
 *   +0x0f30 -> line 443
 *   +0x0f38 -> line 444
 *   +0x1074 -> line 445
 *   +0x1080 -> line 446
 *   +0x1088 -> line 448
 *   +0x10a0 -> line 449
 *   +0x10ac -> line 448
 *   +0x10b8 -> line 449
 *   +0x10bc -> line 448
 *   +0x10cc -> line 449
 *   +0x10d0 -> line 448
 *   +0x10d4 -> line 449
 *   +0x10d8 -> line 448
 *   +0x10dc -> line 449
 *   +0x10ec -> line 450
 *   +0x10f0 -> line 448
 *   +0x1108 -> line 449
 *   +0x112c -> line 450
 *   +0x1130 -> line 449
 *   +0x1134 -> line 450
 *   +0x113c -> line 449
 *   +0x1140 -> line 450
 *   +0x1144 -> line 449
 *   +0x1148 -> line 450
 *   +0x1150 -> line 451
 *   +0x128c -> line 452
 *   +0x1298 -> line 453
 *   +0x12a0 -> line 455
 *   +0x12a8 -> line 458
 *   +0x12c0 -> line 459
 *   +0x12c4 -> line 458
 *   +0x12fc -> line 459
 *   +0x1304 -> line 460
 *   +0x1310 -> line 461
 *   +0x132c -> line 462
 *   +0x1348 -> line 463
 *   +0x1350 -> line 472
 *   +0x13ac -> line 473
 *   +0x13b4 -> line 475
 *   +0x13c4 -> line 476
 *   +0x13c8 -> line 475
 *   +0x1414 -> line 476
 *   +0x1534 -> line 481
 *   +0x1548 -> line 483
 *   +0x1554 -> line 485
 *   +0x1564 -> line 486
 *   +0x156c -> line 489
 *   +0x157c -> line 492
 *   +0x158c -> line 494
 *   +0x159c -> line 495
 *   +0x15a4 -> line 498
 *   +0x15b4 -> line 500
 *   +0x15bc -> line 501
 *   +0x15c0 -> line 500
 *   +0x15c4 -> line 504
 *   +0x15d4 -> line 508
 *   +0x15e4 -> line 511
 *   +0x15e8 -> line 512
 *   +0x15f0 -> line 515
 *   +0x1600 -> line 516
 *   +0x1604 -> line 515
 *   +0x160c -> line 516
 *   +0x1610 -> line 518
 *   +0x1614 -> line 521
 *   +0x1618 -> line 518
 *   +0x1620 -> line 519
 *   +0x1628 -> line 521
 *   +0x1630 -> line 522
 *   +0x1638 -> line 523
 *   +0x1648 -> line 525
 *   +0x1650 -> line 528
 *   +0x165c -> line 530
 *   +0x1664 -> line 531
 *   +0x166c -> line 532
 *   +0x1674 -> line 536
 *   +0x167c -> line 543
 *   +0x1684 -> line 585
 *   +0x1698 -> line 591
 *   +0x16a4 -> line 594
 *   +0x16ac -> line 596
 *   +0x16b0 -> line 597
 *   +0x16b8 -> line 602
 *   +0x1718 -> line 603
 *   +0x1724 -> line 604
 *   +0x1728 -> line 605
 *   +0x172c -> line 613
 *   +0x1750 -> line 617
 *   +0x175c -> line 620
 *   +0x1760 -> line 621
 *   +0x1768 -> line 624
 *   +0x1778 -> line 625
 *   +0x177c -> line 624
 *   +0x1784 -> line 625
 *   +0x1788 -> line 628
 *   +0x178c -> line 631
 *   +0x1790 -> line 628
 *   +0x1798 -> line 629
 *   +0x17a0 -> line 631
 *   +0x17a8 -> line 632
 *   +0x17b0 -> line 633
 *   +0x17c0 -> line 635
 *   +0x17c8 -> line 638
 *   +0x17d4 -> line 640
 *   +0x17dc -> line 641
 *   +0x17e4 -> line 642
 *   +0x17ec -> line 650
 *   +0x1800 -> line 652
 *   +0x180c -> line 654
 *   +0x181c -> line 655
 *   +0x1824 -> line 658
 *   +0x1834 -> line 661
 *   +0x1844 -> line 663
 *   +0x1854 -> line 664
 *   +0x185c -> line 667
 *   +0x186c -> line 669
 *   +0x1874 -> line 670
 *   +0x1878 -> line 669
 *   +0x187c -> line 675
 *   +0x189c -> line 683
 *   +0x18a4 -> line 685
 *   +0x18bc -> line 686
 *   +0x18c0 -> line 685
 *   +0x18f8 -> line 686
 *   +0x1900 -> line 687
 *   +0x191c -> line 688
 *   +0x192c -> line 689
 *   +0x1930 -> line 688
 *   +0x197c -> line 689
 *   +0x1a98 -> line 691
 *   +0x1aa0 -> line 695
 *   +0x1aac -> line 697
 *   +0x1ab4 -> line 698
 *   +0x1ad0 -> line 699
 *   +0x1ad8 -> line 698
 *   +0x1ae4 -> line 699
 *   +0x1ae8 -> line 698
 *   +0x1af8 -> line 699
 *   +0x1afc -> line 698
 *   +0x1b00 -> line 699
 *   +0x1b04 -> line 698
 *   +0x1b08 -> line 699
 *   +0x1b18 -> line 700
 *   +0x1b1c -> line 698
 *   +0x1b34 -> line 699
 *   +0x1b54 -> line 700
 *   +0x1b58 -> line 699
 *   +0x1b5c -> line 700
 *   +0x1b64 -> line 699
 *   +0x1b68 -> line 700
 *   +0x1b70 -> line 699
 *   +0x1b74 -> line 700
 *   +0x1b7c -> line 703
 *   +0x1b80 -> line 702
 *   +0x1b84 -> line 703
 *   +0x1cbc -> line 709
 *   +0x1cc4 -> line 713
 *   +0x1cd4 -> line 718
 *   +0x1cdc -> line 721
 *   +0x1cf4 -> line 722
 *   +0x1cfc -> line 721
 *   +0x1d34 -> line 722
 *   +0x1d3c -> line 723
 *   +0x1d44 -> line 724
 *   +0x1d4c -> line 727
 *   +0x1d58 -> line 729
 *   +0x1d60 -> line 730
 *   +0x1d64 -> line 731
 *   +0x1d68 -> line 730
 *   +0x1d6c -> line 731
 *   +0x1d74 -> line 730
 *   +0x1d84 -> line 731
 *   +0x1d88 -> line 730
 *   +0x1dc0 -> line 731
 *   +0x1dc8 -> line 734
 *   +0x1e24 -> line 736
 *   +0x1e2c -> line 741
 *   +0x1f68 -> line 743
 *   +0x1f70 -> line 747
 *   +0x1f8c -> line 752
 *   +0x1fe0 -> line 753
 *   +0x1fe8 -> line 755
 *   +0x1ff0 -> line 759
 *   +0x2000 -> line 765
 *   +0x2010 -> line 766
 *   +0x2014 -> line 765
 *   +0x2060 -> line 766
 *   +0x2184 -> line 767
 *   +0x2190 -> line 768
 *   +0x2198 -> line 771
 *   +0x21a4 -> line 773
 *   +0x21ac -> line 774
 *   +0x21c8 -> line 775
 *   +0x21d8 -> line 776
 *   +0x21dc -> line 775
 *   +0x2228 -> line 776
 *   +0x234c -> line 777
 *   +0x2358 -> line 779
 *   +0x2360 -> line 782
 *   +0x2368 -> line 785
 *   +0x2374 -> line 790
 *   +0x2380 -> line 793
 *   +0x2398 -> line 794
 *   +0x23a0 -> line 793
 *   +0x23d8 -> line 794
 *   +0x23e0 -> line 795
 *   +0x23e8 -> line 796
 *   +0x2440 -> line 799
 *   +0x2444 -> line 798
 *   +0x2448 -> line 799
 *   +0x257c -> line 801
 *   +0x2584 -> line 815
 *   +0x2590 -> line 813
 *   +0x2594 -> line 815
 *   +0x25c8 -> line 824
 *   +0x25d0 -> line 826
 *   +0x25e4 -> line 828
 *   +0x25e8 -> line 826
 *   +0x25fc -> line 828
 *   +0x2600 -> line 826
 *   +0x260c -> line 828
 *   +0x2610 -> line 826
 *   +0x261c -> line 828
 *   +0x2624 -> line 826
 *   +0x2628 -> line 828
 *   +0x2638 -> line 826
 *   +0x263c -> line 828
 *   +0x2640 -> line 826
 *   +0x2644 -> line 828
 *   +0x2648 -> line 826
 *   +0x264c -> line 828
 *   +0x2650 -> line 826
 *   +0x2660 -> line 828
 *   +0x2664 -> line 829
 *   +0x2668 -> line 828
 *   +0x2670 -> line 829
 *   +0x2674 -> line 828
 *   +0x267c -> line 826
 *   +0x2680 -> line 828
 *   +0x2684 -> line 826
 *   +0x2694 -> line 830
 *   +0x2698 -> line 829
 *   +0x269c -> line 828
 *   +0x26a0 -> line 829
 *   +0x26a4 -> line 828
 *   +0x26a8 -> line 829
 *   +0x26b4 -> line 830
 *   +0x26b8 -> line 826
 *   +0x26bc -> line 829
 *   +0x26c0 -> line 826
 *   +0x26c4 -> line 829
 *   +0x26c8 -> line 828
 *   +0x26d0 -> line 829
 *   +0x26f4 -> line 830
 *   +0x26fc -> line 833
 *   +0x2704 -> line 834
 *   +0x270c -> line 837
 *   +0x2720 -> line 838
 *   +0x2724 -> line 837
 *   +0x272c -> line 838
 *   +0x2730 -> line 837
 *   +0x2740 -> line 838
 *   +0x2744 -> line 837
 *   +0x2754 -> line 838
 *   +0x2758 -> line 837
 *   +0x275c -> line 838
 *   +0x2760 -> line 837
 *   +0x2764 -> line 838
 *   +0x2768 -> line 837
 *   +0x276c -> line 838
 *   +0x2770 -> line 837
 *   +0x2774 -> line 838
 *   +0x277c -> line 839
 *   +0x2780 -> line 838
 *   +0x2784 -> line 837
 *   +0x278c -> line 838
 *   +0x2794 -> line 837
 *   +0x279c -> line 838
 *   +0x27ac -> line 839
 *   +0x27b8 -> line 838
 *   +0x27c0 -> line 839
 *   +0x27c4 -> line 838
 *   +0x27c8 -> line 839
 *   +0x27d4 -> line 838
 *   +0x27dc -> line 839
 *   +0x27e0 -> line 838
 *   +0x27e4 -> line 839
 *   +0x2830 -> line 842
 *   +0x2838 -> line 845
 *   +0x2974 -> line 848
 *   +0x297c -> line 851
 *   +0x2990 -> line 852
 *   +0x2994 -> line 851
 *   +0x299c -> line 852
 *   +0x29a0 -> line 853
 *   +0x29a4 -> line 851
 *   +0x29b4 -> line 852
 *   +0x29b8 -> line 851
 *   +0x29c8 -> line 855
 *   +0x29cc -> line 852
 *   +0x29d0 -> line 851
 *   +0x29d4 -> line 852
 *   +0x29d8 -> line 851
 *   +0x29e0 -> line 852
 *   +0x29e4 -> line 851
 *   +0x29e8 -> line 852
 *   +0x29ec -> line 851
 *   +0x29f0 -> line 852
 *   +0x29f4 -> line 851
 *   +0x29f8 -> line 853
 *   +0x29fc -> line 852
 *   +0x2a04 -> line 851
 *   +0x2a08 -> line 852
 *   +0x2a0c -> line 851
 *   +0x2a10 -> line 852
 *   +0x2a14 -> line 853
 *   +0x2a18 -> line 852
 *   +0x2a24 -> line 853
 *   +0x2a28 -> line 852
 *   +0x2a2c -> line 853
 *   +0x2a30 -> line 852
 *   +0x2a34 -> line 853
 *   +0x2a40 -> line 855
 *   +0x2a44 -> line 852
 *   +0x2a48 -> line 853
 *   +0x2a4c -> line 852
 *   +0x2a50 -> line 853
 *   +0x2a54 -> line 852
 *   +0x2a58 -> line 853
 *   +0x2a5c -> line 855
 *   +0x2a60 -> line 853
 *   +0x2a64 -> line 855
 *   +0x2a68 -> line 852
 *   +0x2a6c -> line 855
 *   +0x2a70 -> line 852
 *   +0x2a74 -> line 853
 *   +0x2a7c -> line 855
 *   +0x2a84 -> line 853
 *   +0x2a90 -> line 856
 *   +0x2a94 -> line 853
 *   +0x2a98 -> line 855
 *   +0x2a9c -> line 853
 *   +0x2aa0 -> line 855
 *   +0x2aa4 -> line 853
 *   +0x2ac0 -> line 855
 *   +0x2ac4 -> line 853
 *   +0x2ac8 -> line 855
 *   +0x2acc -> line 853
 *   +0x2ad0 -> line 855
 *   +0x2ad4 -> line 853
 *   +0x2ad8 -> line 855
 *   +0x2b00 -> line 857
 *   +0x2b08 -> line 858
 *   +0x2b10 -> line 859
 *   +0x2b2c -> line 860
 *   +0x2b30 -> line 859
 *   +0x2b44 -> line 860
 *   +0x2b48 -> line 859
 *   +0x2b58 -> line 860
 *   +0x2b5c -> line 859
 *   +0x2b60 -> line 860
 *   +0x2b64 -> line 859
 *   +0x2b6c -> line 860
 *   +0x2b70 -> line 859
 *   +0x2b74 -> line 860
 *   +0x2b78 -> line 859
 *   +0x2b7c -> line 861
 *   +0x2b80 -> line 859
 *   +0x2b88 -> line 860
 *   +0x2b8c -> line 859
 *   +0x2b94 -> line 860
 *   +0x2b98 -> line 859
 *   +0x2bac -> line 860
 *   +0x2bb8 -> line 861
 *   +0x2bbc -> line 860
 *   +0x2bc0 -> line 861
 *   +0x2bcc -> line 859
 *   +0x2bd4 -> line 860
 *   +0x2be0 -> line 859
 *   +0x2bf0 -> line 860
 *   +0x2c04 -> line 861
 *   +0x2c10 -> line 864
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_DRV_SendMaterialToViewport(GLI_tdstMaterial_* hVisualMaterial)
{
    float dv;
    float du;
    char Operator;
    anon_2* pMat;
    int Local_LastTextureMode;
    void* p_stLastTexture;
    int bUseAlpha;
    GLI_tdstTexture_* p_stTexture;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 172–193 */
/* addr: 0x002c44f0  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 172
 *   +0x0008 -> line 173
 *   +0x0014 -> line 175
 *   +0x0024 -> line 177
 *   +0x003c -> line 178
 *   +0x0044 -> line 177
 *   +0x0088 -> line 178
 *   +0x0090 -> line 179
 *   +0x009c -> line 180
 *   +0x00a8 -> line 181
 *   +0x00b8 -> line 182
 *   +0x00bc -> line 184
 *   +0x00c4 -> line 187
 *   +0x00d4 -> line 189
 *   +0x0138 -> line 190
 *   +0x013c -> line 193
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SetFogc(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SendMat.c lines 117–168 */
/* addr: 0x002c4640  size: 448 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 121
 *   +0x0004 -> line 117
 *   +0x0008 -> line 121
 *   +0x0010 -> line 123
 *   +0x001c -> line 124
 *   +0x0024 -> line 125
 *   +0x0028 -> line 126
 *   +0x0030 -> line 129
 *   +0x0038 -> line 133
 *   +0x0040 -> line 129
 *   +0x0044 -> line 130
 *   +0x0050 -> line 131
 *   +0x0058 -> line 133
 *   +0x006c -> line 135
 *   +0x0070 -> line 136
 *   +0x0074 -> line 135
 *   +0x00b4 -> line 136
 *   +0x00b8 -> line 137
 *   +0x00c0 -> line 138
 *   +0x00c8 -> line 144
 *   +0x00d8 -> line 146
 *   +0x00dc -> line 144
 *   +0x0130 -> line 146
 *   +0x0138 -> line 148
 *   +0x0154 -> line 149
 *   +0x015c -> line 152
 *   +0x0168 -> line 155
 *   +0x0178 -> line 157
 *   +0x0184 -> line 159
 *   +0x0188 -> line 162
 *   +0x018c -> line 159
 *   +0x0194 -> line 162
 *   +0x0198 -> line 160
 *   +0x019c -> line 163
 *   +0x01a0 -> line 160
 *   +0x01a4 -> line 163
 *   +0x01a8 -> line 161
 *   +0x01ac -> line 164
 *   +0x01b0 -> line 161
 *   +0x01b4 -> line 164
 *   +0x01b8 -> line 168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetFogParameters(float start, float end, float* color)
{
    float val;
    /* TODO: decompile from asm/... */
}
