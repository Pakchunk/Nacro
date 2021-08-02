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

// Function Durr_Counter_3.Durr_Counter_2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADurr_Counter_2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Durr_Counter_3.Durr_Counter_2_C.UserConstructionScript");

	ADurr_Counter_2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Durr_Counter_3.Durr_Counter_2_C.OnLoot
// (Event, Public, BlueprintEvent)

void ADurr_Counter_2_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Durr_Counter_3.Durr_Counter_2_C.OnLoot");

	ADurr_Counter_2_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Durr_Counter_3.Durr_Counter_2_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void ADurr_Counter_2_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Durr_Counter_3.Durr_Counter_2_C.OnLootRepeat");

	ADurr_Counter_2_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Durr_Counter_3.Durr_Counter_2_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void ADurr_Counter_2_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Durr_Counter_3.Durr_Counter_2_C.OnBeginSearch");

	ADurr_Counter_2_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Durr_Counter_3.Durr_Counter_2_C.ExecuteUbergraph_Durr_Counter_3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADurr_Counter_2_C::ExecuteUbergraph_Durr_Counter_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Durr_Counter_3.Durr_Counter_2_C.ExecuteUbergraph_Durr_Counter_3");

	ADurr_Counter_2_C_ExecuteUbergraph_Durr_Counter_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
