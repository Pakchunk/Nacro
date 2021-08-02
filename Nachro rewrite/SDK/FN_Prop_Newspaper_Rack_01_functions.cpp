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

// Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_Newspaper_Rack_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.UserConstructionScript");

	AProp_Newspaper_Rack_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void AProp_Newspaper_Rack_01_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.OnBeginSearch");

	AProp_Newspaper_Rack_01_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void AProp_Newspaper_Rack_01_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.OnLootRepeat");

	AProp_Newspaper_Rack_01_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.ExecuteUbergraph_Prop_Newspaper_Rack_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProp_Newspaper_Rack_01_C::ExecuteUbergraph_Prop_Newspaper_Rack_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C.ExecuteUbergraph_Prop_Newspaper_Rack_01");

	AProp_Newspaper_Rack_01_C_ExecuteUbergraph_Prop_Newspaper_Rack_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
