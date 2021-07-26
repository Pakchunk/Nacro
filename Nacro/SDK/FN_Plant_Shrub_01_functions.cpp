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

// Function Plant_Shrub_01.Plant_Shrub_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlant_Shrub_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_Shrub_01.Plant_Shrub_01_C.UserConstructionScript");

	APlant_Shrub_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Plant_Shrub_01.Plant_Shrub_01_C.OnLoot
// (Event, Public, BlueprintEvent)

void APlant_Shrub_01_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_Shrub_01.Plant_Shrub_01_C.OnLoot");

	APlant_Shrub_01_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Plant_Shrub_01.Plant_Shrub_01_C.ExecuteUbergraph_Plant_Shrub_01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlant_Shrub_01_C::ExecuteUbergraph_Plant_Shrub_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_Shrub_01.Plant_Shrub_01_C.ExecuteUbergraph_Plant_Shrub_01");

	APlant_Shrub_01_C_ExecuteUbergraph_Plant_Shrub_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
