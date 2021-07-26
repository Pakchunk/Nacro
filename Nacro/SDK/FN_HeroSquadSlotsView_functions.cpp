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

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.UndarkenAllSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadSlotsView_C::UndarkenAllSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadSlotsView.HeroSquadSlotsView_C.UndarkenAllSlots");

	UHeroSquadSlotsView_C_UndarkenAllSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HighlightSlotByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadSlotsView_C::HighlightSlotByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadSlotsView.HeroSquadSlotsView_C.HighlightSlotByIndex");

	UHeroSquadSlotsView_C_HighlightSlotByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HandleSquadNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadSlotsView_C::HandleSquadNavigation(const struct FName& SquadId, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadSlotsView.HeroSquadSlotsView_C.HandleSquadNavigation");

	UHeroSquadSlotsView_C_HandleSquadNavigation_Params params;
	params.SquadId = SquadId;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.CreateAndAddSquadSlotButton
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SquadSlotIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHomebaseSquadSlot*     SquadSlotDefinition            (ConstParm, Parm, OutParm, ReferenceParm)
// class UWidget*                 OutSquadSlotButtonHost         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UFortSquadSlotSelectorButton* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortSquadSlotSelectorButton* UHeroSquadSlotsView_C::CreateAndAddSquadSlotButton(int* SquadSlotIndex, struct FHomebaseSquadSlot* SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadSlotsView.HeroSquadSlotsView_C.CreateAndAddSquadSlotButton");

	UHeroSquadSlotsView_C_CreateAndAddSquadSlotButton_Params params;
	params.SquadSlotIndex = SquadSlotIndex;
	params.SquadSlotDefinition = SquadSlotDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSquadSlotButtonHost != nullptr)
		*OutSquadSlotButtonHost = params.OutSquadSlotButtonHost;

	return params.ReturnValue;
}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroSquadSlotsView_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadSlotsView.HeroSquadSlotsView_C.Construct");

	UHeroSquadSlotsView_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.ExecuteUbergraph_HeroSquadSlotsView
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadSlotsView_C::ExecuteUbergraph_HeroSquadSlotsView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadSlotsView.HeroSquadSlotsView_C.ExecuteUbergraph_HeroSquadSlotsView");

	UHeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
