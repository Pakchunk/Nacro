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

// Function DailyQuestsPanel.DailyQuestsPanel_C.ClaimNextQuestReward
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::ClaimNextQuestReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ClaimNextQuestReward");

	UDailyQuestsPanel_C_ClaimNextQuestReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnNoQuestRewardsToClaim
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::OnNoQuestRewardsToClaim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnNoQuestRewardsToClaim");

	UDailyQuestsPanel_C_OnNoQuestRewardsToClaim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestRewardClaimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDailyQuestsPanel_C::OnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestRewardClaimed");

	UDailyQuestsPanel_C_OnQuestRewardClaimed_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsGranted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  NewQuests                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDailyQuestsPanel_C::OnQuestsGranted(TArray<class UFortQuestItem*>* NewQuests)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsGranted");

	UDailyQuestsPanel_C_OnQuestsGranted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewQuests != nullptr)
		*NewQuests = params.NewQuests;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.CreateQuestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::CreateQuestWidget(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.CreateQuestWidget");

	UDailyQuestsPanel_C_CreateQuestWidget_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::OnQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsUpdated");

	UDailyQuestsPanel_C_OnQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.BindEventListeners
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::BindEventListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.BindEventListeners");

	UDailyQuestsPanel_C_BindEventListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyQuestsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.Construct");

	UDailyQuestsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature");

	UDailyQuestsPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.ExecuteUbergraph_DailyQuestsPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::ExecuteUbergraph_DailyQuestsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ExecuteUbergraph_DailyQuestsPanel");

	UDailyQuestsPanel_C_ExecuteUbergraph_DailyQuestsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
