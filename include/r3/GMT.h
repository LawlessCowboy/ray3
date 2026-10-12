/* Shared GMT types recovered from MWCC debug records (identical in every
   fully matched translation unit that defines them). */
#ifndef R3_GMT_H
#define R3_GMT_H

#include "r3/MTH.h"

typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

#endif /* R3_GMT_H */
