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

// Function Utility_TrashBag_01.Utility_TrashBag_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUtility_TrashBag_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_TrashBag_01.Utility_TrashBag_01_C.UserConstructionScript");

	AUtility_TrashBag_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Utility_TrashBag_01.Utility_TrashBag_01_C.OnLoot
// (Event, Public, BlueprintEvent)

void AUtility_TrashBag_01_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_TrashBag_01.Utility_TrashBag_01_C.OnLoot");

	AUtility_TrashBag_01_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Utility_TrashBag_01.Utility_TrashBag_01_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void AUtility_TrashBag_01_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_TrashBag_01.Utility_TrashBag_01_C.OnLootRepeat");

	AUtility_TrashBag_01_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Utility_TrashBag_01.Utility_TrashBag_01_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void AUtility_TrashBag_01_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_TrashBag_01.Utility_TrashBag_01_C.OnBeginSearch");

	AUtility_TrashBag_01_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Utility_TrashBag_01.Utility_TrashBag_01_C.ExecuteUbergraph_Utility_TrashBag_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUtility_TrashBag_01_C::ExecuteUbergraph_Utility_TrashBag_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_TrashBag_01.Utility_TrashBag_01_C.ExecuteUbergraph_Utility_TrashBag_01");

	AUtility_TrashBag_01_C_ExecuteUbergraph_Utility_TrashBag_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
