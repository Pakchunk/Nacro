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

// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABedroom_Dresser_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.UserConstructionScript");

	ABedroom_Dresser_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void ABedroom_Dresser_02_C::OnLootRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.OnLootRepeat");

	ABedroom_Dresser_02_C_OnLootRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void ABedroom_Dresser_02_C::OnBeginSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.OnBeginSearch");

	ABedroom_Dresser_02_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.ExecuteUbergraph_Bedroom_Dresser_02
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABedroom_Dresser_02_C::ExecuteUbergraph_Bedroom_Dresser_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.ExecuteUbergraph_Bedroom_Dresser_02");

	ABedroom_Dresser_02_C_ExecuteUbergraph_Bedroom_Dresser_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
