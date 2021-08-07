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

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> Modifiers                      (Parm, OutParm, ZeroConstructor)

void UMissionDetailsModifierList_C::CreateDebugModifiers(TArray<class UFortGameplayModifierItemDefinition*>* Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers");

	UMissionDetailsModifierList_C_CreateDebugModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modifiers != nullptr)
		*Modifiers = params.Modifiers;
}


// Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseTrunctatedList              (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NameTextStyle                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DescriptionTextStyle           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Show_Descriptions              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UFortGameplayModifierItemDefinition*> ModifierItems                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           UseSmallIcons                  (Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierList_C::PopulateModifiers(bool UseTrunctatedList, class UClass* NameTextStyle, class UClass* DescriptionTextStyle, bool Show_Descriptions, bool UseSmallIcons, TArray<class UFortGameplayModifierItemDefinition*>* ModifierItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers");

	UMissionDetailsModifierList_C_PopulateModifiers_Params params;
	params.UseTrunctatedList = UseTrunctatedList;
	params.NameTextStyle = NameTextStyle;
	params.DescriptionTextStyle = DescriptionTextStyle;
	params.Show_Descriptions = Show_Descriptions;
	params.UseSmallIcons = UseSmallIcons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierItems != nullptr)
		*ModifierItems = params.ModifierItems;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
