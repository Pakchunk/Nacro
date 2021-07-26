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

// Function Plant_PalmBush1.Plant_PalmBush1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlant_PalmBush1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_PalmBush1.Plant_PalmBush1_C.UserConstructionScript");

	APlant_PalmBush1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Plant_PalmBush1.Plant_PalmBush1_C.OnLoot
// (Event, Public, BlueprintEvent)

void APlant_PalmBush1_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_PalmBush1.Plant_PalmBush1_C.OnLoot");

	APlant_PalmBush1_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Plant_PalmBush1.Plant_PalmBush1_C.ExecuteUbergraph_Plant_PalmBush1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlant_PalmBush1_C::ExecuteUbergraph_Plant_PalmBush1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_PalmBush1.Plant_PalmBush1_C.ExecuteUbergraph_Plant_PalmBush1");

	APlant_PalmBush1_C_ExecuteUbergraph_Plant_PalmBush1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
