#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PartyFinder.PartyFinder_C.UpdateDetailsEmpty
struct UPartyFinder_C_UpdateDetailsEmpty_Params
{
};

// Function PartyFinder.PartyFinder_C.HandleFriendPresenceUpdated
struct UPartyFinder_C_HandleFriendPresenceUpdated_Params
{
	struct FUniqueNetIdRepl                            FriendId;                                                 // (Parm, OutParm, ReferenceParm)
};

// Function PartyFinder.PartyFinder_C.SocialTreeView_GetChildrenForCategory
struct UPartyFinder_C_SocialTreeView_GetChildrenForCategory_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PartyFinder.PartyFinder_C.IgnoreInvite
struct UPartyFinder_C_IgnoreInvite_Params
{
};

// Function PartyFinder.PartyFinder_C.SendInvite
struct UPartyFinder_C_SendInvite_Params
{
};

// Function PartyFinder.PartyFinder_C.GetFinderItemVisibility
struct UPartyFinder_C_GetFinderItemVisibility_Params
{
	class UFortSocialItem*                             PartyFinderItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.UpdateDetails
struct UPartyFinder_C_UpdateDetails_Params
{
	class UFortSocialItem*                             PartyFinderItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.HandleSocialListChanged
struct UPartyFinder_C_HandleSocialListChanged_Params
{
	TArray<class UFortSocialItem*>                     SocialItems;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bExpandAll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.HandlePartyTransitionStarted
struct UPartyFinder_C_HandlePartyTransitionStarted_Params
{
	EFortPartyTransition                               Transition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.BindDelegates
struct UPartyFinder_C_BindDelegates_Params
{
};

// Function PartyFinder.PartyFinder_C.DialogResult_9763B6F5495998E5B2E944A5F646709C
struct UPartyFinder_C_DialogResult_9763B6F5495998E5B2E944A5F646709C_Params
{
	EFortDialogResult                                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.Construct
struct UPartyFinder_C_Construct_Params
{
};

// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
struct UPartyFinder_C_BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.HandlePartyDataChanged
struct UPartyFinder_C_HandlePartyDataChanged_Params
{
	struct FPartyState                                 PartyData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PartyFinder.PartyFinder_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct UPartyFinder_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
struct UPartyFinder_C_BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature
struct UPartyFinder_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature
struct UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.OnSocialListChanged
struct UPartyFinder_C_OnSocialListChanged_Params
{
	TArray<class UFortSocialItem*>                     SocialItems;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PartyFinder.PartyFinder_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UPartyFinder_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.OnActivated
struct UPartyFinder_C_OnActivated_Params
{
};

// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature
struct UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder.PartyFinder_C.ExecuteUbergraph_PartyFinder
struct UPartyFinder_C_ExecuteUbergraph_PartyFinder_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
