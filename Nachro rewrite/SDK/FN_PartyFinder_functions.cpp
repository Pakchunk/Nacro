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

// Function PartyFinder.PartyFinder_C.UpdateDetailsEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::UpdateDetailsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.UpdateDetailsEmpty");

	UPartyFinder_C_UpdateDetailsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.HandleFriendPresenceUpdated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        FriendId                       (Parm, OutParm, ReferenceParm)

void UPartyFinder_C::HandleFriendPresenceUpdated(struct FUniqueNetIdRepl* FriendId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandleFriendPresenceUpdated");

	UPartyFinder_C_HandleFriendPresenceUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendId != nullptr)
		*FriendId = params.FriendId;
}


// Function PartyFinder.PartyFinder_C.SocialTreeView_GetChildrenForCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UPartyFinder_C::SocialTreeView_GetChildrenForCategory(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.SocialTreeView_GetChildrenForCategory");

	UPartyFinder_C_SocialTreeView_GetChildrenForCategory_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyFinder.PartyFinder_C.IgnoreInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::IgnoreInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.IgnoreInvite");

	UPartyFinder_C_IgnoreInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.SendInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::SendInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.SendInvite");

	UPartyFinder_C_SendInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.GetFinderItemVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortSocialItem*         PartyFinderItem                (Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UPartyFinder_C::GetFinderItemVisibility(class UFortSocialItem* PartyFinderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.GetFinderItemVisibility");

	UPartyFinder_C_GetFinderItemVisibility_Params params;
	params.PartyFinderItem = PartyFinderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyFinder.PartyFinder_C.UpdateDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSocialItem*         PartyFinderItem                (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::UpdateDetails(class UFortSocialItem* PartyFinderItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.UpdateDetails");

	UPartyFinder_C_UpdateDetails_Params params;
	params.PartyFinderItem = PartyFinderItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.HandleSocialListChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*> SocialItems                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bExpandAll                     (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::HandleSocialListChanged(bool bExpandAll, TArray<class UFortSocialItem*>* SocialItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandleSocialListChanged");

	UPartyFinder_C_HandleSocialListChanged_Params params;
	params.bExpandAll = bExpandAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocialItems != nullptr)
		*SocialItems = params.SocialItems;
}


// Function PartyFinder.PartyFinder_C.HandlePartyTransitionStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPartyTransition           Transition                     (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::HandlePartyTransitionStarted(EFortPartyTransition Transition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandlePartyTransitionStarted");

	UPartyFinder_C_HandlePartyTransitionStarted_Params params;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinder_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BindDelegates");

	UPartyFinder_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.DialogResult_9763B6F5495998E5B2E944A5F646709C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::DialogResult_9763B6F5495998E5B2E944A5F646709C(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.DialogResult_9763B6F5495998E5B2E944A5F646709C");

	UPartyFinder_C_DialogResult_9763B6F5495998E5B2E944A5F646709C_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinder_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.Construct");

	UPartyFinder_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.HandlePartyDataChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyState             PartyData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UPartyFinder_C::HandlePartyDataChanged(const struct FPartyState& PartyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.HandlePartyDataChanged");

	UPartyFinder_C_HandlePartyDataChanged_Params params;
	params.PartyData = PartyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature");

	UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.OnSocialListChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*> SocialItems                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPartyFinder_C::OnSocialListChanged(TArray<class UFortSocialItem*> SocialItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.OnSocialListChanged");

	UPartyFinder_C_OnSocialListChanged_Params params;
	params.SocialItems = SocialItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UPartyFinder_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPartyFinder_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.OnActivated");

	UPartyFinder_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature");

	UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyFinder.PartyFinder_C.ExecuteUbergraph_PartyFinder
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPartyFinder_C::ExecuteUbergraph_PartyFinder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyFinder.PartyFinder_C.ExecuteUbergraph_PartyFinder");

	UPartyFinder_C_ExecuteUbergraph_PartyFinder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
