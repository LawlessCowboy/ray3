/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\VID_Priv.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct VID_tdstVideoLanguageDescription_ VID_tdstVideoLanguageDescription_;
typedef struct VID_tdstVideoDescription_ VID_tdstVideoDescription_;
typedef struct VID_tdstNextVideoToPlay_ VID_tdstNextVideoToPlay_;
typedef struct VID_tdstGeneral_ VID_tdstGeneral_;

struct VID_tdstVideoLanguageDescription_ {
    int szAudioFileNameSuffix; /* +0x0 */
};

struct VID_tdstVideoDescription_ {
    int p_szVideoName; /* +0x0 */
    int p_szVideoFileName; /* +0x4 */
};

struct VID_tdstNextVideoToPlay_ {
    unsigned char ucVideoNumber; /* +0x0 */
    unsigned char bCanBeInterrupt; /* +0x1 */
    unsigned char bLoop; /* +0x2 */
    unsigned char bPlayAfterLevel; /* +0x3 */
};

struct VID_tdstGeneral_ {
    unsigned int ulTrueNumberOfVideos; /* +0x0 */
    unsigned int ulNumberOfVideos; /* +0x4 */
    unsigned int ulNumberOfLanguages; /* +0x8 */
    VID_tdstVideoDescription_* p_stVideos; /* +0xc */
    VID_tdstVideoLanguageDescription_* a_stVideoLanguages; /* +0x10 */
    VID_tdstNextVideoToPlay_ stNextVideoToPlay; /* +0x14 */
};

unsigned char g_ucVIDModuleId;
VID_tdstGeneral_ VID_g_stGeneralVideos;
