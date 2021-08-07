// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HalloweenQuestsTile.HalloweenQuestsTile_C.SetupSideQuestRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UHalloweenQuestsTile_C::SetupSideQuestRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.SetupSideQuestRewards");

	UHalloweenQuestsTile_C_SetupSideQuestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Configure Rewards and Timers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHalloweenQuestsTile_C::Configure_Rewards_and_Timers()
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.Configure Rewards and Timers");

	UHalloweenQuestsTile_C_Configure_Rewards_and_Timers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.PopulateVladQuestArray
// (Public, BlueprintCallable, BlueprintEvent)

void UHalloweenQuestsTile_C::PopulateVladQuestArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.PopulateVladQuestArray");

	UHalloweenQuestsTile_C_PopulateVladQuestArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.IsEventUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnlocked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHalloweenQuestsTile_C::IsEventUnlocked(bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.IsEventUnlocked");

	UHalloweenQuestsTile_C_IsEventUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUnlocked != nullptr)
		*IsUnlocked = params.IsUnlocked;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.AdvanceRewardsDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UHalloweenQuestsTile_C::AdvanceRewardsDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.AdvanceRewardsDisplay");

	UHalloweenQuestsTile_C_AdvanceRewardsDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.UpdateSideQuestInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHalloweenQuestsTile_C::UpdateSideQuestInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.UpdateSideQuestInfo");

	UHalloweenQuestsTile_C_UpdateSideQuestInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHalloweenQuestsTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.Construct");

	UHalloweenQuestsTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Handle OnQuestsUpdated
// (BlueprintCallable, BlueprintEvent)

void UHalloweenQuestsTile_C::Handle_OnQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.Handle OnQuestsUpdated");

	UHalloweenQuestsTile_C_Handle_OnQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHalloweenQuestsTile_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.Destruct");

	UHalloweenQuestsTile_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HalloweenQuestsTile.HalloweenQuestsTile_C.ExecuteUbergraph_HalloweenQuestsTile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHalloweenQuestsTile_C::ExecuteUbergraph_HalloweenQuestsTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HalloweenQuestsTile.HalloweenQuestsTile_C.ExecuteUbergraph_HalloweenQuestsTile");

	UHalloweenQuestsTile_C_ExecuteUbergraph_HalloweenQuestsTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
