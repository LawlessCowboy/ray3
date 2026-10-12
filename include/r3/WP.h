/* Shared WP types recovered from MWCC debug records (identical in every
   fully matched translation unit that defines them). */
#ifndef R3_WP_H
#define R3_WP_H

#include "r3/LST2.h"
#include "r3/MTH.h"

typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;

struct WP_tdstGraphNode_ {
    WP_tdstGraphNode_* hNextBrotherDyn; /* +0x0 */
    WP_tdstGraphNode_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToWP_tdhGraphNodeDyn* hFatherDyn; /* +0x8 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0xc */
    int m_lTypeOfWP; /* +0x10 */
    int m_lTypeOfWPInit; /* +0x14 */
    struct WP_tdstListOfArc_* m_hListOfArc; /* +0x18 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct WP_tdstWayPoint_ {
    MTH3D_tdstVector_ m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    struct HIE_tdstSuperObject_* m_hSuperObject; /* +0x10 */
};

#endif /* R3_WP_H */
