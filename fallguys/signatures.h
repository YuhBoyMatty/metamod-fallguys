#pragma once

#include <signatures_template.h>

#ifdef _WIN32

#define SV_Physics_Signature "\xDD\x05\x2A\x2A\x2A\x2A\x83\xEC\x14\xD9\x1D\x2A\x2A\x2A\x2A\x55\xFF\x15"
#define SV_PushEntity_Signature "\x81\xEC\x2A\x2A\x2A\x2A\xA1\x2A\x2A\x2A\x2A\x33\xC4\x89\x44\x24\x2A\x8B\x84\x24\x2A\x00\x00\x00"
#define SV_PushMove_Signature "\x81\xEC\x2A\x2A\x2A\x2A\xA1\x2A\x2A\x2A\x2A\x33\xC4\x89\x44\x24\x2A\x2A\x8B\xBC\x24\x88\x00\x00\x00\xD9"
#define SV_PushRotate_Signature "\x81\xEC\x2A\x2A\x2A\x2A\xA1\x2A\x2A\x2A\x2A\x33\xC4\x89\x84\x24\x2A\x00\x00\x00\x2A\x8B\xBC\x24\xC0\x00\x00\x00\xD9"
#define SV_TestEntityPosition_Signature "\x81\xEC\x2A\x2A\x00\x00\xA1\x2A\x2A\x2A\x2A\x33\xC4\x89\x84\x24\x2A\x2A\x00\x00\x2A\x8B\x9C\x24\x2A\x2A\x00\x00\x2A\x2A\x2A\x8B\x83\x24\x02\x00\x00"
#define SV_LinkEdict_Signature "\x56\x8B\x74\x24\x08\x8B\x4E\x08\x2A\x8D\x7E\x08\x85\xC9\x74"
#define SV_SingleClipMoveToEntity_Signature "\x81\xEC\x2A\x2A\x00\x00\xA1\x2A\x2A\x2A\x2A\x33\xC4\x89\x84\x24\x94\x00\x00\x00\x8B\x84\x24\xA8\x00\x00\x00"
#define SV_WriteMovevarsToClient_Signature "\x56\x8B\x74\x24\x08\x6A\x2C\x56\xE8\x2A\x2A\x2A\x2A\xD9\x05"

#define CPlayerMove_PlayStepSound_Signature "\x83\xEC\x0C\x33\xC0\x2A\x8B\x2A\x2A\x8B\x96\x60\x04\x00"
#define PM_PlaySoundFX_SERVER_Signature "\x53\x8B\x5C\x24\x08\x55\x56\x57\x8B\x7C\x24\x2C\x53\x83\xCF\x08\xE8"

#define sv_models_Signature "\x3D\xFE\x1F\x00\x00\x2A\x2A\x0F\xAE\xE8\xFF\x34\x8D"
#define host_frametime_Signature "\xD8\x83\xA8\x00\x00\x00\xD9\x9B\xA8\x00\x00\x00\xE8\x2A\x2A\x2A\x2A\xDD\x05"
#define pmovevars_Signature "\x56\x8B\x74\x24\x08\x6A\x2C\x56\xE8\x2A\x2A\x2A\x2A\xD9\x05"
#define sv_areanodes_Signature "\x8D\x84\x24\xA0\x00\x00\x00\x50\x68\x2A\x2A\x2A\x2A\xE8"
#define pg_groupop_Signature "\x89\x44\x24\x18\x8B\x0D\x2A\x2A\x2A\x2A\x8B\x15"
#define pg_groupmask_Signature pg_groupop_Signature

#else

#define SV_Physics_Signature "_Z10SV_Physicsv"
#define SV_PushEntity_Signature "_Z13SV_PushEntityP7edict_sPf"
#define SV_PushMove_Signature "_Z11SV_PushMoveP7edict_sf"
#define SV_PushRotate_Signature "_Z13SV_PushRotateP7edict_sf"
#define SV_WriteMovevarsToClient_Signature "_Z24SV_WriteMovevarsToClientP9sizebuf_s"
#define SV_TestEntityPosition_Signature "_Z21SV_TestEntityPositionP7edict_s"
#define SV_SingleClipMoveToEntity_Signature "_Z25SV_SingleClipMoveToEntityP7edict_sPKfS2_S2_S2_P7trace_t"
#define SV_LinkEdict_Signature "_Z12SV_LinkEdictP7edict_si"

#define CPlayerMove_PlayStepSound_Signature "_ZN11CPlayerMove13PlayStepSoundEifb"
#define PM_PlaySoundFX_SERVER_Signature "PM_PlaySoundFX_SERVER"

#define sv_Signature "sv"
#define sv_models_Signature "\x8B\x84\x82\x2A\x2A\x2A\x00\x89\x04\x24\xE8"
#define host_frametime_Signature "host_frametime"
#define pmovevars_Signature "movevars"
#define sv_areanodes_Signature "sv_areanodes"
#define pg_groupop_Signature "g_groupop"
#define pg_groupmask_Signature "g_groupmask"

#endif