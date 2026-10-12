/* Shared VID types recovered from MWCC debug records (identical in every
   fully matched translation unit that defines them). */
#ifndef R3_VID_H
#define R3_VID_H

typedef struct VID_tdstGeneral_ VID_tdstGeneral_;
typedef struct VID_tdstNextVideoToPlay_ VID_tdstNextVideoToPlay_;
typedef struct VID_tdstVideoDescription_ VID_tdstVideoDescription_;
typedef struct VID_tdstVideoLanguageDescription_ VID_tdstVideoLanguageDescription_;

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

struct VID_tdstVideoDescription_ {
    int p_szVideoName; /* +0x0 */
    int p_szVideoFileName; /* +0x4 */
};

struct VID_tdstVideoLanguageDescription_ {
    int szAudioFileNameSuffix; /* +0x0 */
};

#endif /* R3_VID_H */
