#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GCN_BluGloPylon_BuildSpeed_Activate.GCN_BluGloPylon_BuildSpeed_Activate_C.OnStartParticleSystemSpawned
struct AGCN_BluGloPylon_BuildSpeed_Activate_C_OnStartParticleSystemSpawned_Params
{
	class UParticleSystemComponent**                   SpawnedParticleSysComponent;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GCN_BluGloPylon_BuildSpeed_Activate.GCN_BluGloPylon_BuildSpeed_Activate_C.UserConstructionScript
struct AGCN_BluGloPylon_BuildSpeed_Activate_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
