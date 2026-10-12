/* Shared AI types recovered from MWCC debug records (identical in every
   fully matched translation unit that defines them). */
#ifndef R3_AI_H
#define R3_AI_H

typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct AI_tdstMind_ AI_tdstMind_;

struct AI_tdstAIModel_ {
    struct tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    struct tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    struct tdstDsgVar_* p_stDsgVar; /* +0x8 */
    struct tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    struct tdstIntelligence_* p_stIntelligence; /* +0x4 */
    struct tdstIntelligence_* p_stReflex; /* +0x8 */
    struct tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

#endif /* R3_AI_H */
