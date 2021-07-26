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

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.HandleFallTime
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::HandleFallTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.HandleFallTime");

	AAthenaSupplyDrop_02_C_HandleFallTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UpdateDropAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FallPercent                    (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_02_C::UpdateDropAudio(float FallPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UpdateDropAudio");

	AAthenaSupplyDrop_02_C_UpdateDropAudio_Params params;
	params.FallPercent = FallPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.StartDropAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::StartDropAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.StartDropAudio");

	AAthenaSupplyDrop_02_C_StartDropAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OnRep_bLooted
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::OnRep_bLooted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OnRep_bLooted");

	AAthenaSupplyDrop_02_C_OnRep_bLooted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OnRep_NewLocation
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::OnRep_NewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OnRep_NewLocation");

	AAthenaSupplyDrop_02_C_OnRep_NewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.GetFallLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AAthenaSupplyDrop_02_C::GetFallLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.GetFallLocation");

	AAthenaSupplyDrop_02_C_GetFallLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.GetImpactLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AAthenaSupplyDrop_02_C::GetImpactLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.GetImpactLocation");

	AAthenaSupplyDrop_02_C_GetImpactLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ToggleFallingFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bToggleOn                      (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_02_C::ToggleFallingFX(bool bToggleOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ToggleFallingFX");

	AAthenaSupplyDrop_02_C_ToggleFallingFX_Params params;
	params.bToggleOn = bToggleOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ClientPlayDropFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::ClientPlayDropFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ClientPlayDropFX");

	AAthenaSupplyDrop_02_C_ClientPlayDropFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnTierDrops
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LootTableIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_02_C::SpawnTierDrops(int LootTableIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnTierDrops");

	AAthenaSupplyDrop_02_C_SpawnTierDrops_Params params;
	params.LootTableIndex = LootTableIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LootSpawnPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 OutPos                         (Parm, OutParm, IsPlainOldData)

void AAthenaSupplyDrop_02_C::LootSpawnPosition(struct FVector* OutPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LootSpawnPosition");

	AAthenaSupplyDrop_02_C_LootSpawnPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPos != nullptr)
		*OutPos = params.OutPos;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.InitDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSupplyDropUnlocks      InUnlocks                      (Parm)

void AAthenaSupplyDrop_02_C::InitDrop(const struct FSupplyDropUnlocks& InUnlocks)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.InitDrop");

	AAthenaSupplyDrop_02_C_InitDrop_Params params;
	params.InUnlocks = InUnlocks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AAthenaSupplyDrop_02_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintGetInteractionString");

	AAthenaSupplyDrop_02_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.Landed
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::Landed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.Landed");

	AAthenaSupplyDrop_02_C_Landed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.IsAcceptablePositionForPlacement
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector*                InLocation                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator*               InRotation                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortDecoTool**          DecoTool                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsCDO                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutFailureReason               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthenaSupplyDrop_02_C::IsAcceptablePositionForPlacement(struct FVector* InLocation, struct FRotator* InRotation, class AFortDecoTool** DecoTool, bool* bIsCDO, struct FText* OutFailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.IsAcceptablePositionForPlacement");

	AAthenaSupplyDrop_02_C_IsAcceptablePositionForPlacement_Params params;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.DecoTool = DecoTool;
	params.bIsCDO = bIsCDO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFailureReason != nullptr)
		*OutFailureReason = params.OutFailureReason;

	return params.ReturnValue;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UpdateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_02_C::UpdateLocation(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UpdateLocation");

	AAthenaSupplyDrop_02_C_UpdateLocation_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthenaSupplyDrop_02_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintCanInteract");

	AAthenaSupplyDrop_02_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.TurnOnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewActorEnableCollision       (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_02_C::TurnOnInteract(bool bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.TurnOnInteract");

	AAthenaSupplyDrop_02_C_TurnOnInteract_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnLoot
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::SpawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnLoot");

	AAthenaSupplyDrop_02_C_SpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UserConstructionScript");

	AAthenaSupplyDrop_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__FinishedFunc
// (BlueprintEvent)

void AAthenaSupplyDrop_02_C::FallingTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__FinishedFunc");

	AAthenaSupplyDrop_02_C_FallingTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__UpdateFunc
// (BlueprintEvent)

void AAthenaSupplyDrop_02_C::FallingTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__UpdateFunc");

	AAthenaSupplyDrop_02_C_FallingTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__Almost Landed__EventFunc
// (BlueprintEvent)

void AAthenaSupplyDrop_02_C::FallingTimeline__Almost_Landed__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__Almost Landed__EventFunc");

	AAthenaSupplyDrop_02_C_FallingTimeline__Almost_Landed__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__DisableFlare__EventFunc
// (BlueprintEvent)

void AAthenaSupplyDrop_02_C::FallingTimeline__DisableFlare__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__DisableFlare__EventFunc");

	AAthenaSupplyDrop_02_C_FallingTimeline__DisableFlare__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LerpFallRate__FinishedFunc
// (BlueprintEvent)

void AAthenaSupplyDrop_02_C::LerpFallRate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LerpFallRate__FinishedFunc");

	AAthenaSupplyDrop_02_C_LerpFallRate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LerpFallRate__UpdateFunc
// (BlueprintEvent)

void AAthenaSupplyDrop_02_C::LerpFallRate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LerpFallRate__UpdateFunc");

	AAthenaSupplyDrop_02_C_LerpFallRate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ImpactFX
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::ImpactFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ImpactFX");

	AAthenaSupplyDrop_02_C_ImpactFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OverlappingDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (Parm, IsPlainOldData)

void AAthenaSupplyDrop_02_C::OverlappingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OverlappingDied");

	AAthenaSupplyDrop_02_C_OverlappingDied_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_02_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintOnInteract");

	AAthenaSupplyDrop_02_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.PlayDrop
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::PlayDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.PlayDrop");

	AAthenaSupplyDrop_02_C_PlayDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnLootDestroyActor
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::SpawnLootDestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnLootDestroyActor");

	AAthenaSupplyDrop_02_C_SpawnLootDestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.PlayDropNewTime
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::PlayDropNewTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.PlayDropNewTime");

	AAthenaSupplyDrop_02_C_PlayDropNewTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SecondaryFallTick
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::SecondaryFallTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SecondaryFallTick");

	AAthenaSupplyDrop_02_C_SecondaryFallTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BalloonDestroyed
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::BalloonDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BalloonDestroyed");

	AAthenaSupplyDrop_02_C_BalloonDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.StopBeep
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::StopBeep()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.StopBeep");

	AAthenaSupplyDrop_02_C_StopBeep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAthenaSupplyDrop_02_C::BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	AAthenaSupplyDrop_02_C_BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.DropIntercepted
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::DropIntercepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.DropIntercepted");

	AAthenaSupplyDrop_02_C_DropIntercepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthenaSupplyDrop_02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ReceiveBeginPlay");

	AAthenaSupplyDrop_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BndEvt__TargetCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAthenaSupplyDrop_02_C::BndEvt__TargetCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BndEvt__TargetCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");

	AAthenaSupplyDrop_02_C_BndEvt__TargetCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ExecuteUbergraph_AthenaSupplyDrop_02
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_02_C::ExecuteUbergraph_AthenaSupplyDrop_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ExecuteUbergraph_AthenaSupplyDrop_02");

	AAthenaSupplyDrop_02_C_ExecuteUbergraph_AthenaSupplyDrop_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.CrateLanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_02_C::CrateLanded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.CrateLanded__DelegateSignature");

	AAthenaSupplyDrop_02_C_CrateLanded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
