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

// Function AthenaEquipProgress.AthenaEquipProgress_C.Tick
struct UAthenaEquipProgress_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.Construct
struct UAthenaEquipProgress_C_Construct_Params
{
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.OnUIGameplayCue_Event_1
struct UAthenaEquipProgress_C_OnUIGameplayCue_Event_1_Params
{
	struct FName                                       CueName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.Destruct
struct UAthenaEquipProgress_C_Destruct_Params
{
};

// Function AthenaEquipProgress.AthenaEquipProgress_C.ExecuteUbergraph_AthenaEquipProgress
struct UAthenaEquipProgress_C_ExecuteUbergraph_AthenaEquipProgress_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
