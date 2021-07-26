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

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.StopTeleportSplinesIfValid
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Outlander_C::StopTeleportSplinesIfValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.StopTeleportSplinesIfValid");

	APlayerPawn_Outlander_C_StopTeleportSplinesIfValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnRep_OnPlayerBuiltFloor
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Outlander_C::OnRep_OnPlayerBuiltFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnRep_OnPlayerBuiltFloor");

	APlayerPawn_Outlander_C_OnRep_OnPlayerBuiltFloor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Outlander_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.UserConstructionScript");

	APlayerPawn_Outlander_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Outlander_C::PhaseShiftHitSweep__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__FinishedFunc");

	APlayerPawn_Outlander_C_PhaseShiftHitSweep__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Outlander_C::PhaseShiftHitSweep__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__UpdateFunc");

	APlayerPawn_Outlander_C_PhaseShiftHitSweep__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Outlander_C::Phase_Shift_Activation_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__FinishedFunc");

	APlayerPawn_Outlander_C_Phase_Shift_Activation_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Outlander_C::Phase_Shift_Activation_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__UpdateFunc");

	APlayerPawn_Outlander_C_Phase_Shift_Activation_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Teleport PP TL__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Outlander_C::Teleport_PP_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Teleport PP TL__FinishedFunc");

	APlayerPawn_Outlander_C_Teleport_PP_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Teleport PP TL__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Outlander_C::Teleport_PP_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Teleport PP TL__UpdateFunc");

	APlayerPawn_Outlander_C_Teleport_PP_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment");

	APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.InTheZone.FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Outlander_InTheZone_FX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.InTheZone.FX");

	APlayerPawn_Outlander_C_GameplayCue_Outlander_InTheZone_FX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Outlander_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ReceivePossessed");

	APlayerPawn_Outlander_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Offense.PickupFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment_Offense_PickupFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Offense.PickupFX");

	APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Offense_PickupFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Defense.PickupFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment_Defense_PickupFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Defense.PickupFX");

	APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Defense_PickupFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Specialty.PickupFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment_Specialty_PickupFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Specialty.PickupFX");

	APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Specialty_PickupFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.WithinReachOfTreasure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            VSpawnColor                    (Parm, IsPlainOldData)
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Outlander_C::WithinReachOfTreasure(const struct FLinearColor& VSpawnColor, bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.WithinReachOfTreasure");

	APlayerPawn_Outlander_C_WithinReachOfTreasure_Params params;
	params.VSpawnColor = VSpawnColor;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent>* EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent>* EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.Phaseshift.AppliedFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Outlander_Phaseshift_AppliedFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.Phaseshift.AppliedFX");

	APlayerPawn_Outlander_C_GameplayCue_Outlander_Phaseshift_AppliedFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.RefreshIcons
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Outlander_C::RefreshIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.RefreshIcons");

	APlayerPawn_Outlander_C_RefreshIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Outlander_C::OnCharacterPartsReinitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnCharacterPartsReinitialized");

	APlayerPawn_Outlander_C_OnCharacterPartsReinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void APlayerPawn_Outlander_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnDamagePlayEffects");

	APlayerPawn_Outlander_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.EventOnDamagePlayFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Outlander_C::EventOnDamagePlayFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.EventOnDamagePlayFX");

	APlayerPawn_Outlander_C_EventOnDamagePlayFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.KnockKnock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Outlander_KnockKnock(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.KnockKnock");

	APlayerPawn_Outlander_C_GameplayCue_Outlander_KnockKnock_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialCharge");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeThruster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeThruster");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeChargeUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeChargeUp");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeImpact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeImpact");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.SetTeleportEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Outlander_C::SetTeleportEffects(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.SetTeleportEffects");

	APlayerPawn_Outlander_C_SetTeleportEffects_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ForceQuickbarUpdate
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Outlander_C::ForceQuickbarUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ForceQuickbarUpdate");

	APlayerPawn_Outlander_C_ForceQuickbarUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Outlander_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ReceiveBeginPlay");

	APlayerPawn_Outlander_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PlayGauntletMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageName                    (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Outlander_C::PlayGauntletMontage(class UAnimMontage* MontageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PlayGauntletMontage");

	APlayerPawn_Outlander_C_PlayGauntletMontage_Params params;
	params.MontageName = MontageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.SetMenuScreenClassName
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Outlander_C::SetMenuScreenClassName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.SetMenuScreenClassName");

	APlayerPawn_Outlander_C_SetMenuScreenClassName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ChargedUp
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Outlander_C::ChargedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ChargedUp");

	APlayerPawn_Outlander_C_ChargedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PlayChargeCommonFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Outlander_C::PlayChargeCommonFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PlayChargeCommonFX");

	APlayerPawn_Outlander_C_PlayChargeCommonFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Deactivate Phaseshift Materials
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Timeline_Duration              (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Outlander_C::Deactivate_Phaseshift_Materials(float Timeline_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Deactivate Phaseshift Materials");

	APlayerPawn_Outlander_C_Deactivate_Phaseshift_Materials_Params params;
	params.Timeline_Duration = Timeline_Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Activate Phaseshift Materials
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Timeline_Duration              (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Outlander_C::Activate_Phaseshift_Materials(float Timeline_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Activate Phaseshift Materials");

	APlayerPawn_Outlander_C_Activate_Phaseshift_Materials_Params params;
	params.Timeline_Duration = Timeline_Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Deactivate Teleport PP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Timeline_Duration              (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Outlander_C::Deactivate_Teleport_PP(float Timeline_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Deactivate Teleport PP");

	APlayerPawn_Outlander_C_Deactivate_Teleport_PP_Params params;
	params.Timeline_Duration = Timeline_Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Activate Teleport PP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Timeline_Duration              (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Outlander_C::Activate_Teleport_PP(float Timeline_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Activate Teleport PP");

	APlayerPawn_Outlander_C_Activate_Teleport_PP_Params params;
	params.Timeline_Duration = Timeline_Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ExecuteUbergraph_PlayerPawn_Outlander
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Outlander_C::ExecuteUbergraph_PlayerPawn_Outlander(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ExecuteUbergraph_PlayerPawn_Outlander");

	APlayerPawn_Outlander_C_ExecuteUbergraph_PlayerPawn_Outlander_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
