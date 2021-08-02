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

// Function Plant_Shrub_03.Plant_Shrub_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlant_Shrub_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_Shrub_03.Plant_Shrub_03_C.UserConstructionScript");

	APlant_Shrub_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Plant_Shrub_03.Plant_Shrub_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlant_Shrub_03_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_Shrub_03.Plant_Shrub_03_C.ReceiveBeginPlay");

	APlant_Shrub_03_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Plant_Shrub_03.Plant_Shrub_03_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APlant_Shrub_03_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_Shrub_03.Plant_Shrub_03_C.ReceiveDestroyed");

	APlant_Shrub_03_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Plant_Shrub_03.Plant_Shrub_03_C.ExecuteUbergraph_Plant_Shrub_03
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlant_Shrub_03_C::ExecuteUbergraph_Plant_Shrub_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Plant_Shrub_03.Plant_Shrub_03_C.ExecuteUbergraph_Plant_Shrub_03");

	APlant_Shrub_03_C_ExecuteUbergraph_Plant_Shrub_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
