#pragma once

#include "Globals.hpp"

namespace Abilities
{
	//cr raider, none of this is directly pasted but it did teach me a LOT more about how to use this func

	static auto GiveAbilityFunc = reinterpret_cast<FGameplayAbilitySpecHandle(*)(UAbilitySystemComponent * ThisPtr, FGameplayAbilitySpecHandle * OutHandle, FGameplayAbilitySpec InSpec)>(uintptr_t(GetModuleHandle(0)) + Offsets::GiveAbilityOffset);
	//i only have the most basic understanding of what the fuck this means so im probably doing well here

	//TODO: this itself doesn't crash, but sometime after it does. might not even be this things fault, might have broken something unrelated elsewhere lol
	void GiveAbility(UAbilitySystemComponent* AbilitySystem, UClass* Ability)
	{
		FGameplayAbilitySpec AbilitySpec;
		AbilitySpec.Ability = static_cast<UGameplayAbility*>(Ability->CreateDefaultObject());
		AbilitySpec.Handle.Handle = rand();
		AbilitySpec.InputID = -1;
		AbilitySpec.Level = 1;
		AbilitySpec.SourceObject = nullptr;
		AbilitySpec.ActiveCount = 0;
		AbilitySpec.InputPressed = false;
		AbilitySpec.PendingRemove = false;
		AbilitySpec.RemoveAfterActivation = false;

		//run thru already activatable abilities and check if any with this ability already exist
		for (int i = 0; i < AbilitySystem->ActivatableAbilities.Items.Num(); i++)
		{
			FGameplayAbilitySpec OurSpec = AbilitySystem->ActivatableAbilities.Items[i];

			if (OurSpec.Ability == AbilitySpec.Ability)
				return;
		}

		FGameplayAbilitySpecHandle SpecHandle = GiveAbilityFunc(AbilitySystem, &AbilitySpec.Handle, AbilitySpec);
	}

	//Gives all important abilities (sprint, jump, etc)
	void GiveAllAbilities()
	{
		//cpp (src object dump txt)
		auto Sprint = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Sprint");
		auto Jump = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Jump");
		auto Reload = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Reload");

		//bp (src fmodel)
		auto InteractUse = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C");
		auto InteractSearch = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C");
		auto Death = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C");
		//worth noting theres another "GA_DefaultPlayer_Consumable" but in the asset it references "EatFood" animations, prob just a leftover from OTs having food consumables.

		auto AbilitySystem = Globals::AthenaPawn->AbilitySystemComponent;

		GiveAbility(AbilitySystem, Sprint);
		GiveAbility(AbilitySystem, Jump);
		GiveAbility(AbilitySystem, Reload);
		GiveAbility(AbilitySystem, InteractUse);
		GiveAbility(AbilitySystem, InteractSearch);
		GiveAbility(AbilitySystem, Death);
	}
}