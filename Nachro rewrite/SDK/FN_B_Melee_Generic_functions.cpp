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

// Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (Parm, OutParm, IsPlainOldData)

void AB_Melee_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color");

	AB_Melee_Generic_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;
}


// Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::SetWpnRarity()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity");

	AB_Melee_Generic_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript");

	AB_Melee_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48");

	AB_Melee_Generic_C_OnLoaded_CB594210420542B302428F8181D85E48_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::MeleeSwingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight");

	AB_Melee_Generic_C_MeleeSwingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::MeleeSwingLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft");

	AB_Melee_Generic_C_MeleeSwingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::FootStepLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft");

	AB_Melee_Generic_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::FootStepRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight");

	AB_Melee_Generic_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Melee_Generic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay");

	AB_Melee_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPersistentFire                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSecondaryFire                 (Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX");

	AB_Melee_Generic_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts
// (BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::PlayRClickImpacts()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts");

	AB_Melee_Generic_C_PlayRClickImpacts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface          (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent** SpawnedPSC                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::OnPlayImpactFX(struct FHitResult* HitResult, TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface, class UParticleSystemComponent** SpawnedPSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX");

	AB_Melee_Generic_C_OnPlayImpactFX_Params params;
	params.HitResult = HitResult;
	params.ImpactPhysicalSurface = ImpactPhysicalSurface;
	params.SpawnedPSC = SpawnedPSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Melee_Generic_C::OnEquippedWeaponDestory()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory");

	AB_Melee_Generic_C_OnEquippedWeaponDestory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Melee_Generic_C::OnWeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached");

	AB_Melee_Generic_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Melee_Generic_C::K2_OnUnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.K2_OnUnEquip");

	AB_Melee_Generic_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification* CosmeticMod                    (Parm)
// class UMaterialInstanceDynamic** DynamicMaterialInstance        (Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations");

	AB_Melee_Generic_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;
	params.DynamicMaterialInstance = DynamicMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::ExecuteUbergraph_B_Melee_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic");

	AB_Melee_Generic_C_ExecuteUbergraph_B_Melee_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
