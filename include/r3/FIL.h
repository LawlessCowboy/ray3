/* Shared FIL types recovered from MWCC debug records (identical in every
   fully matched translation unit that defines them). */
#ifndef R3_FIL_H
#define R3_FIL_H

#include "r3/LST2.h"

typedef struct FIL_tdstFileNameListElement_ FIL_tdstFileNameListElement_;
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct FIL_tdstInternalGeneral_ FIL_tdstInternalGeneral_;

struct FIL_tdstFileNameListElement_ {
    FIL_tdstFileNameListElement_* hNextBrotherDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn* hFatherDyn; /* +0x8 */
    int szFileName; /* +0xc */
};

struct FIL_tdstFileNameList_ {
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn hFileNameListAnchor; /* +0x0 */
};

struct FIL_tdstInternalGeneral_ {
    unsigned char ucDisplayInformation; /* +0x0 */
};

#endif /* R3_FIL_H */
