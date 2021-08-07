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

// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParentBuildingContainerBlueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.UserConstructionScript");

	AParentBuildingContainerBlueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AParentBuildingContainerBlueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ReceiveBeginPlay");

	AParentBuildingContainerBlueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDayPhase>*    CurrentDayPhase                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortDayPhase>*    PreviousDayPhase               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAtCreation                    (Parm, ZeroConstructor, IsPlainOldData)

void AParentBuildingContainerBlueprint_C::OnDayPhaseChanged(TEnumAsByte<EFortDayPhase>* CurrentDayPhase, TEnumAsByte<EFortDayPhase>* PreviousDayPhase, bool* bAtCreation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnDayPhaseChanged");

	AParentBuildingContainerBlueprint_C_OnDayPhaseChanged_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnSetSearched
// (Event, Public, BlueprintEvent)

void AParentBuildingContainerBlueprint_C::OnSetSearched()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnSetSearched");

	AParentBuildingContainerBlueprint_C_OnSetSearched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.Loop Animation Curve
// (BlueprintCallable, BlueprintEvent)

void AParentBuildingContainerBlueprint_C::Loop_Animation_Curve()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.Loop Animation Curve");

	AParentBuildingContainerBlueprint_C_Loop_Animation_Curve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortBounceData*        Data                           (Parm)

void AParentBuildingContainerBlueprint_C::OnBounceAnimationUpdate(struct FFortBounceData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate");

	AParentBuildingContainerBlueprint_C_OnBounceAnimationUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ExecuteUbergraph_ParentBuildingContainerBlueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParentBuildingContainerBlueprint_C::ExecuteUbergraph_ParentBuildingContainerBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ExecuteUbergraph_ParentBuildingContainerBlueprint");

	AParentBuildingContainerBlueprint_C_ExecuteUbergraph_ParentBuildingContainerBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
