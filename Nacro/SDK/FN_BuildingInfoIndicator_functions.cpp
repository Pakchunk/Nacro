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

// Function BuildingInfoIndicator.BuildingInfoIndicator_C.RefreshBuildingInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBuildingInfoIndicator_C::RefreshBuildingInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.RefreshBuildingInfo");

	UBuildingInfoIndicator_C_RefreshBuildingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleQuickbarFocusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickBar                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            QuickBarSlot                   (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingInfoIndicator_C::HandleQuickbarFocusChanged(EFortQuickBars QuickBar, int QuickBarSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleQuickbarFocusChanged");

	UBuildingInfoIndicator_C_HandleQuickbarFocusChanged_Params params;
	params.QuickBar = QuickBar;
	params.QuickBarSlot = QuickBarSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleAttachedTrapChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingTrap*           BuildingTrap                   (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingInfoIndicator_C::HandleAttachedTrapChanged(class ABuildingTrap* BuildingTrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleAttachedTrapChanged");

	UBuildingInfoIndicator_C_HandleAttachedTrapChanged_Params params;
	params.BuildingTrap = BuildingTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo_InteractionWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interactable                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBePlayerEdited              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAnyTrapAttached              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTrapAttachedFacingPlayer     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPreviewTrapAttached          (Parm, ZeroConstructor, IsPlainOldData)
// EFortBuildingInteraction       InteractionType                (Parm, ZeroConstructor, IsPlainOldData)
// int                            InteractionCost                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortResourceType> BuildingMaterial               (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingInfoIndicator_C::UpdateBuildingInfo_InteractionWidgets(bool Interactable, bool CanBePlayerEdited, bool IsAnyTrapAttached, bool IsTrapAttachedFacingPlayer, bool IsPreviewTrapAttached, EFortBuildingInteraction InteractionType, int InteractionCost, TEnumAsByte<EFortResourceType> BuildingMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo_InteractionWidgets");

	UBuildingInfoIndicator_C_UpdateBuildingInfo_InteractionWidgets_Params params;
	params.Interactable = Interactable;
	params.CanBePlayerEdited = CanBePlayerEdited;
	params.IsAnyTrapAttached = IsAnyTrapAttached;
	params.IsTrapAttachedFacingPlayer = IsTrapAttachedFacingPlayer;
	params.IsPreviewTrapAttached = IsPreviewTrapAttached;
	params.InteractionType = InteractionType;
	params.InteractionCost = InteractionCost;
	params.BuildingMaterial = BuildingMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.IsCurrentBuildingBeingRepaired
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuildingInfoIndicator_C::IsCurrentBuildingBeingRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.IsCurrentBuildingBeingRepaired");

	UBuildingInfoIndicator_C_IsCurrentBuildingBeingRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingRepairCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewInteractionCost             (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingInfoIndicator_C::UpdateBuildingRepairCost(int NewInteractionCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingRepairCost");

	UBuildingInfoIndicator_C_UpdateBuildingRepairCost_Params params;
	params.NewInteractionCost = NewInteractionCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandlePlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsTargeting                   (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingInfoIndicator_C::HandlePlayerTargetingChanged(bool bIsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandlePlayerTargetingChanged");

	UBuildingInfoIndicator_C_HandlePlayerTargetingChanged_Params params;
	params.bIsTargeting = bIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HideHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UBuildingInfoIndicator_C::HideHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.HideHealth");

	UBuildingInfoIndicator_C_HideHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Update Keybinds
// (Public, BlueprintCallable, BlueprintEvent)

void UBuildingInfoIndicator_C::Update_Keybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.Update Keybinds");

	UBuildingInfoIndicator_C_Update_Keybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleTrapDurabilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentDurability              (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDurability                  (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingInfoIndicator_C::HandleTrapDurabilityChanged(float CurrentDurability, float MaxDurability)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleTrapDurabilityChanged");

	UBuildingInfoIndicator_C_HandleTrapDurabilityChanged_Params params;
	params.CurrentDurability = CurrentDurability;
	params.MaxDurability = MaxDurability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingHealthChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingInfoIndicator_C::HandleBuildingHealthChanged(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingHealthChanged");

	UBuildingInfoIndicator_C_HandleBuildingHealthChanged_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          FocusedBuilding                (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingInfoIndicator_C::HandleBuildingFocused(class ABuildingActor* FocusedBuilding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingFocused");

	UBuildingInfoIndicator_C_HandleBuildingFocused_Params params;
	params.FocusedBuilding = FocusedBuilding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortFocusedBuildingInfo NewBuildingInfo                (Parm, OutParm, ReferenceParm)

void UBuildingInfoIndicator_C::UpdateBuildingInfo(struct FFortFocusedBuildingInfo* NewBuildingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo");

	UBuildingInfoIndicator_C_UpdateBuildingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewBuildingInfo != nullptr)
		*NewBuildingInfo = params.NewBuildingInfo;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildingInfoIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.Construct");

	UBuildingInfoIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.ExecuteUbergraph_BuildingInfoIndicator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBuildingInfoIndicator_C::ExecuteUbergraph_BuildingInfoIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingInfoIndicator.BuildingInfoIndicator_C.ExecuteUbergraph_BuildingInfoIndicator");

	UBuildingInfoIndicator_C_ExecuteUbergraph_BuildingInfoIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
