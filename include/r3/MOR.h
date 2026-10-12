/* Shared MOR types recovered from MWCC debug records (identical in every
   fully matched translation unit that defines them). */
#ifndef R3_MOR_H
#define R3_MOR_H

#include "r3/MTH.h"

typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;

struct MOR_stMorphObject_ {
    struct GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

#endif /* R3_MOR_H */
