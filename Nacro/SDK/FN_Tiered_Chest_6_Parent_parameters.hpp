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

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ShouldDie
struct ATiered_Chest_6_Parent_C_ShouldDie_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.BlueprintCanInteract
struct ATiered_Chest_6_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.SetLightVisibility
struct ATiered_Chest_6_Parent_C_SetLightVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.UserConstructionScript
struct ATiered_Chest_6_Parent_C_UserConstructionScript_Params
{
};

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.OnLoot
struct ATiered_Chest_6_Parent_C_OnLoot_Params
{
};

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ReceiveBeginPlay
struct ATiered_Chest_6_Parent_C_ReceiveBeginPlay_Params
{
};

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ReceiveDestroyed
struct ATiered_Chest_6_Parent_C_ReceiveDestroyed_Params
{
};

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.OnSetSearched
struct ATiered_Chest_6_Parent_C_OnSetSearched_Params
{
};

// Function Tiered_Chest_6_Parent.Tiered_Chest_6_Parent_C.ExecuteUbergraph_Tiered_Chest_6_Parent
struct ATiered_Chest_6_Parent_C_ExecuteUbergraph_Tiered_Chest_6_Parent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
