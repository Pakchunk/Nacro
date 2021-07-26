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

// Function Haystack_Prop.Haystack_Prop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHaystack_Prop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Haystack_Prop.Haystack_Prop_C.UserConstructionScript");

	AHaystack_Prop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Haystack_Prop.Haystack_Prop_C.OnLootRepeat
// (BlueprintCallable, BlueprintEvent)

void AHaystack_Prop_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Haystack_Prop.Haystack_Prop_C.OnLootRepeat");

	AHaystack_Prop_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Haystack_Prop.Haystack_Prop_C.OnBeginSearch
// (BlueprintCallable, BlueprintEvent)

void AHaystack_Prop_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Haystack_Prop.Haystack_Prop_C.OnBeginSearch");

	AHaystack_Prop_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Haystack_Prop.Haystack_Prop_C.OnLoot
// (BlueprintCallable, BlueprintEvent)

void AHaystack_Prop_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Haystack_Prop.Haystack_Prop_C.OnLoot");

	AHaystack_Prop_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Haystack_Prop.Haystack_Prop_C.ExecuteUbergraph_Haystack_Prop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHaystack_Prop_C::ExecuteUbergraph_Haystack_Prop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Haystack_Prop.Haystack_Prop_C.ExecuteUbergraph_Haystack_Prop");

	AHaystack_Prop_C_ExecuteUbergraph_Haystack_Prop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
