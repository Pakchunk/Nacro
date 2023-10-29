#pragma once

#include "Globals.hpp"

namespace Abilities
{
	static auto GiveAbilityFunc = reinterpret_cast<FGameplayAbilitySpecHandle(*)(UAbilitySystemComponent * ThisPtr, FGameplayAbilitySpecHandle * OutHandle, FGameplayAbilitySpec InSpec)>(uintptr_t(GetModuleHandle(0)) + Offsets::GiveAbilityOffset);

	void GiveAbility(UAbilitySystemComponent* AbilitySystem, UClass* Ability)
	{
		FGameplayAbilitySpec AbilitySpec;
		AbilitySpec.Ability = static_cast<UGameplayAbility*>(Ability->CreateDefaultObject());
		AbilitySpec.Handle.Handle = (*Globals::GHandle)++;
		AbilitySpec.InputID = -1;
		AbilitySpec.Level = -1;
		AbilitySpec.SourceObject = nullptr;
		AbilitySpec.ActiveCount = 0;
		AbilitySpec.InputPressed = false;
		AbilitySpec.PendingRemove = false;
		AbilitySpec.RemoveAfterActivation = false;

		// Run through already activatable abilities and check if any with this ability already exist
		for (int i = 0; i < AbilitySystem->ActivatableAbilities.Items.Num(); i++)
		{
			FGameplayAbilitySpec OurSpec = AbilitySystem->ActivatableAbilities.Items[i];

			if (OurSpec.Ability->GetFullName() == AbilitySpec.Ability->GetFullName())
				return;
		}

		FGameplayAbilitySpecHandle SpecHandle = GiveAbilityFunc(AbilitySystem, &AbilitySpec.Handle, AbilitySpec);
	}

	// Gives all important abilities (sprint, jump, etc)
	void GiveAllAbilities()
	{
		// C++ Classes
		auto Sprint = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Sprint");
		auto Jump = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Jump");
		auto Reload = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Reload");

		// BP Classes
		auto InteractUse = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C");
		auto InteractSearch = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C");
		auto Death = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C");

		auto AbilitySystem = Globals::AthenaPawn->AbilitySystemComponent;

		GiveAbility(AbilitySystem, Sprint);
		GiveAbility(AbilitySystem, Jump);
		GiveAbility(AbilitySystem, Reload);
		GiveAbility(AbilitySystem, InteractUse);
		GiveAbility(AbilitySystem, InteractSearch);
		GiveAbility(AbilitySystem, Death);
	}
}