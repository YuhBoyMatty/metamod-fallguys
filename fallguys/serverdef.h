#pragma once

#include "signatures.h"
#include "asext_api.h"

typedef void(SC_SERVER_DECL *fnCPlayerMove_PlayStepSound)(void *pthis, SC_SERVER_DUMMYARG int iType, float flVolume, bool iIsJump);
void SC_SERVER_DECL NewCPlayerMove_PlayStepSound(void *pthis, SC_SERVER_DUMMYARG int iType, float flVolume, bool iIsJump);
PRIVATE_FUNCTION_EXTERN(CPlayerMove_PlayStepSound);

typedef void( *fnCPlayerMove_PlaySoundFX)(int playerindex, vec3_t *origin, int type, const char *sound, float vol, float att, int flags, int pitch);
void NewCPlayerMove_PlaySoundFX(int playerindex, vec3_t *origin, int type, const char *sound, float vol, float att, int flags, int pitch);
PRIVATE_FUNCTION_EXTERN(CPlayerMove_PlaySoundFX);