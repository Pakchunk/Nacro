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

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SetHighlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableHighlight                (Parm, ZeroConstructor, IsPlainOldData)

void URewardsChoiceButtonWidget_C::SetHighlight(bool EnableHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SetHighlight");

	URewardsChoiceButtonWidget_C_SetHighlight_Params params;
	params.EnableHighlight = EnableHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SelectRewards
// (Public, BlueprintCallable, BlueprintEvent)

void URewardsChoiceButtonWidget_C::SelectRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SelectRewards");

	URewardsChoiceButtonWidget_C_SelectRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply URewardsChoiceButtonWidget_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.OnPreviewMouseButtonDown");

	URewardsChoiceButtonWidget_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.PopulateRewards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsWidget_C*        Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            RewardIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void URewardsChoiceButtonWidget_C::PopulateRewards(class URewardsWidget_C* Owner, int RewardIndex, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.PopulateRewards");

	URewardsChoiceButtonWidget_C_PopulateRewards_Params params;
	params.Owner = Owner;
	params.RewardIndex = RewardIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
