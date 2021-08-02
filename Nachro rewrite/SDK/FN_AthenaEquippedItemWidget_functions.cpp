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

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetCurrentAmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrentAmmoCount               (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CurrentAmmoText                (Parm, OutParm)

void UAthenaEquippedItemWidget_C::GetCurrentAmmoText(int CurrentAmmoCount, struct FText* CurrentAmmoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetCurrentAmmoText");

	UAthenaEquippedItemWidget_C_GetCurrentAmmoText_Params params;
	params.CurrentAmmoCount = CurrentAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = params.CurrentAmmoText;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateResourceCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaEquippedItemWidget_C::UpdateResourceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateResourceCount");

	UAthenaEquippedItemWidget_C_UpdateResourceCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateCurrentAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LocalCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LocalRemaining                 (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::UpdateCurrentAmmo(int LocalCount, int LocalRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateCurrentAmmo");

	UAthenaEquippedItemWidget_C_UpdateCurrentAmmo_Params params;
	params.LocalCount = LocalCount;
	params.LocalRemaining = LocalRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateAmmoCapacity
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaEquippedItemWidget_C::UpdateAmmoCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateAmmoCapacity");

	UAthenaEquippedItemWidget_C_UpdateAmmoCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAmmo                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::UpdateWidgetColor(bool HasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor");

	UAthenaEquippedItemWidget_C_UpdateWidgetColor_Params params;
	params.HasAmmo = HasAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaEquippedItemWidget_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateVisibility");

	UAthenaEquippedItemWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.FullUpdateResourceDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaEquippedItemWidget_C::FullUpdateResourceDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.FullUpdateResourceDisplay");

	UAthenaEquippedItemWidget_C_FullUpdateResourceDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.FullUpdateAmmoDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaEquippedItemWidget_C::FullUpdateAmmoDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.FullUpdateAmmoDisplay");

	UAthenaEquippedItemWidget_C_FullUpdateAmmoDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaEquippedItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.Construct");

	UAthenaEquippedItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnWeaponEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnWeaponEquipped");

	UAthenaEquippedItemWidget_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnLocalAmmoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LocalCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LocalRemaining                 (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::OnLocalAmmoChanged(int LocalCount, int LocalRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnLocalAmmoChanged");

	UAthenaEquippedItemWidget_C_OnLocalAmmoChanged_Params params;
	params.LocalCount = LocalCount;
	params.LocalRemaining = LocalRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnWorldItemsChanged
// (BlueprintCallable, BlueprintEvent)

void UAthenaEquippedItemWidget_C::OnWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnWorldItemsChanged");

	UAthenaEquippedItemWidget_C_OnWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnBuildingMaterialCycled
// (BlueprintCallable, BlueprintEvent)

void UAthenaEquippedItemWidget_C::OnBuildingMaterialCycled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.OnBuildingMaterialCycled");

	UAthenaEquippedItemWidget_C_OnBuildingMaterialCycled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::ExecuteUbergraph_AthenaEquippedItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget");

	UAthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
