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

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Orphaned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOrphaned                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AFortPawn*               AttachedPawn                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.Orphaned");

	AEnemyPawn_Parent_C_Orphaned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOrphaned != nullptr)
		*IsOrphaned = params.IsOrphaned;
	if (AttachedPawn != nullptr)
		*AttachedPawn = params.AttachedPawn;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_SpecialEventHalloweenPumpkinHeadApplied
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::OnRep_SpecialEventHalloweenPumpkinHeadApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_SpecialEventHalloweenPumpkinHeadApplied");

	AEnemyPawn_Parent_C_OnRep_SpecialEventHalloweenPumpkinHeadApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpecialEventHalloweenPumpkinHeadHusk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ApplyPumpkinHeadMesh           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DebugApplicationOrRemoval_     (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SpecialEventHalloweenPumpkinHeadHusk(bool ApplyPumpkinHeadMesh, bool DebugApplicationOrRemoval_)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpecialEventHalloweenPumpkinHeadHusk");

	AEnemyPawn_Parent_C_SpecialEventHalloweenPumpkinHeadHusk_Params params;
	params.ApplyPumpkinHeadMesh = ApplyPumpkinHeadMesh;
	params.DebugApplicationOrRemoval_ = DebugApplicationOrRemoval_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMeshAttachedToCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Static_Mesh                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket_Name                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Relative_Transform             (Parm, IsPlainOldData)
// bool                           Absolute_Location              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute_Rotation              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute_Scale                 (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    Static_Mesh_Component_Reference (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SpawnMeshAttachedToCharacter(class UStaticMesh* Static_Mesh, const struct FName& Socket_Name, const struct FTransform& Relative_Transform, bool Absolute_Location, bool Absolute_Rotation, bool Absolute_Scale, class UStaticMeshComponent** Static_Mesh_Component_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMeshAttachedToCharacter");

	AEnemyPawn_Parent_C_SpawnMeshAttachedToCharacter_Params params;
	params.Static_Mesh = Static_Mesh;
	params.Socket_Name = Socket_Name;
	params.Relative_Transform = Relative_Transform;
	params.Absolute_Location = Absolute_Location;
	params.Absolute_Rotation = Absolute_Rotation;
	params.Absolute_Scale = Absolute_Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Static_Mesh_Component_Reference != nullptr)
		*Static_Mesh_Component_Reference = params.Static_Mesh_Component_Reference;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay_in_Seconds               (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::RestorePreviousMaterialOnCharacterMesh(float Delay_in_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialOnCharacterMesh");

	AEnemyPawn_Parent_C_RestorePreviousMaterialOnCharacterMesh_Params params;
	params.Delay_in_Seconds = Delay_in_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::CharacterSpawnInSafetyCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck");

	AEnemyPawn_Parent_C_CharacterSpawnInSafetyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Eye_Color_Inner                (Parm, IsPlainOldData)
// struct FLinearColor            Eye_Color_Outer                (Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::SetCharacterEyeColors(const struct FLinearColor& Eye_Color_Inner, const struct FLinearColor& Eye_Color_Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors");

	AEnemyPawn_Parent_C_SetCharacterEyeColors_Params params;
	params.Eye_Color_Inner = Eye_Color_Inner;
	params.Eye_Color_Outer = Eye_Color_Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Inner_Color                    (Parm, IsPlainOldData)
// struct FLinearColor            Outer_Color                    (Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::SetCharacterFresnelGlowColors(const struct FLinearColor& Inner_Color, const struct FLinearColor& Outer_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors");

	AEnemyPawn_Parent_C_SetCharacterFresnelGlowColors_Params params;
	params.Inner_Color = Inner_Color;
	params.Outer_Color = Outer_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemOnCharacterMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         ParticleSystemTemplate         (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ParticleSystemComponentReferenceVar (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// TArray<struct FParticleSysParam> InstanceParameters             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           AutoActivate                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AbsoluteLocation               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AbsoluteRotation               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AbsoluteScale                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* PSComponentReference           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, TArray<struct FParticleSysParam>* InstanceParameters, class UParticleSystemComponent** PSComponentReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemOnCharacterMesh");

	AEnemyPawn_Parent_C_SpawnParticleSystemOnCharacterMesh_Params params;
	params.ParticleSystemTemplate = ParticleSystemTemplate;
	params.ParticleSystemComponentReferenceVar = ParticleSystemComponentReferenceVar;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.AutoActivate = AutoActivate;
	params.AutoDestroy = AutoDestroy;
	params.AbsoluteLocation = AbsoluteLocation;
	params.AbsoluteRotation = AbsoluteRotation;
	params.AbsoluteScale = AbsoluteScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceParameters != nullptr)
		*InstanceParameters = params.InstanceParameters;
	if (PSComponentReference != nullptr)
		*PSComponentReference = params.PSComponentReference;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       Physical_Material_Override     (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh");

	AEnemyPawn_Parent_C_OverridePhysicalMaterialOnCharacterMesh_Params params;
	params.Physical_Material_Override = Physical_Material_Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::DestroyAwokenSkeletalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh");

	AEnemyPawn_Parent_C_DestroyAwokenSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterial*               New_Material_To_Apply          (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterial* New_Material_To_Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh");

	AEnemyPawn_Parent_C_OverrideMaterialAndCopyParametersOnCharacterMesh_Params params;
	params.New_Material_To_Apply = New_Material_To_Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Hit_Direction                  (Parm, IsPlainOldData)
// class UAnimMontage*            Anim_Montage                   (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts");

	AEnemyPawn_Parent_C_PlayAdditiveHitReacts_Params params;
	params.Hit_Direction = Hit_Direction;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveParticlesOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SetActiveParticlesOnCharacterMesh(bool Active, bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveParticlesOnCharacterMesh");

	AEnemyPawn_Parent_C_SetActiveParticlesOnCharacterMesh_Params params;
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scalar_Value                   (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SetScalarParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, float Scalar_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDs");

	AEnemyPawn_Parent_C_SetScalarParameterOnAllCharacterMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Scalar_Value = Scalar_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Linear_Color                   (Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::SetVectorParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, const struct FLinearColor& Linear_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDs");

	AEnemyPawn_Parent_C_SetVectorParameterOnAllCharacterMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Linear_Color = Linear_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>    ArrayOfColors                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void AEnemyPawn_Parent_C::PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors");

	AEnemyPawn_Parent_C_PickColorFromAnArrayOfColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayOfColors != nullptr)
		*ArrayOfColors = params.ArrayOfColors;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::StopDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX");

	AEnemyPawn_Parent_C_StopDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopMaterialTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::StopMaterialTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopMaterialTimeline");

	AEnemyPawn_Parent_C_StopMaterialTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HQ                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::EnemyDeathVisuals(bool* HQ)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals");

	AEnemyPawn_Parent_C_EnemyDeathVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HQ != nullptr)
		*HQ = params.HQ;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript");

	AEnemyPawn_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::DeathMaterialParamsTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__FinishedFunc");

	AEnemyPawn_Parent_C_DeathMaterialParamsTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::DeathMaterialParamsTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__UpdateFunc");

	AEnemyPawn_Parent_C_DeathMaterialParamsTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc");

	AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc");

	AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc");

	AEnemyPawn_Parent_C_EnemySpawnInTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc");

	AEnemyPawn_Parent_C_EnemySpawnInTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__Spawn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc");

	AEnemyPawn_Parent_C_EnemySpawnInTL__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEnemyPawn_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay");

	AEnemyPawn_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AEnemyPawn_Parent_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects");

	AEnemyPawn_Parent_C_OnDeathPlayEffects_Params params;
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


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::BeginDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX");

	AEnemyPawn_Parent_C_BeginDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PostSpawnIn
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::PostSpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PostSpawnIn");

	AEnemyPawn_Parent_C_PostSpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RiftLocationWS                 (Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::DespawnEnemy(const struct FVector& RiftLocationWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy");

	AEnemyPawn_Parent_C_DespawnEnemy_Params params;
	params.RiftLocationWS = RiftLocationWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::DebugEnemySpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn");

	AEnemyPawn_Parent_C_DebugEnemySpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnFinishedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn");

	AEnemyPawn_Parent_C_OnFinishedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnStartedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn");

	AEnemyPawn_Parent_C_OnStartedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet
// (Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::PawnUniqueIDSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet");

	AEnemyPawn_Parent_C_PawnUniqueIDSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (Parm)

void AEnemyPawn_Parent_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects");

	AEnemyPawn_Parent_C_OnDamagePlayEffects_Params params;
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


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::AdditiveHitReactDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay");

	AEnemyPawn_Parent_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnBeginSleepEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects");

	AEnemyPawn_Parent_C_OnBeginSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnEndSleepEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects");

	AEnemyPawn_Parent_C_OnEndSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelayCompleted
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelayCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelayCompleted");

	AEnemyPawn_Parent_C_RestorePreviousMaterialDelayCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay_Amount                   (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelay(float Delay_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelay");

	AEnemyPawn_Parent_C_RestorePreviousMaterialDelay_Params params;
	params.Delay_Amount = Delay_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnCheatUpdateSpecialEventGE
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShouldUseSpecialEventGE       (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::OnCheatUpdateSpecialEventGE(bool* bShouldUseSpecialEventGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnCheatUpdateSpecialEventGE");

	AEnemyPawn_Parent_C_OnCheatUpdateSpecialEventGE_Params params;
	params.bShouldUseSpecialEventGE = bShouldUseSpecialEventGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::ExecuteUbergraph_EnemyPawn_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent");

	AEnemyPawn_Parent_C_ExecuteUbergraph_EnemyPawn_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
