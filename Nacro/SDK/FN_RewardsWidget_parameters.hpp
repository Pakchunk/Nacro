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

// Function RewardsWidget.RewardsWidget_C.OnHandleAction
struct URewardsWidget_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (Parm, OutParm)
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.On_ClosedChest_MouseButtonDown_2
struct URewardsWidget_C_On_ClosedChest_MouseButtonDown_2_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RewardsWidget.RewardsWidget_C.GetClosedChestImage
struct URewardsWidget_C_GetClosedChestImage_Params
{
	class UTexture2D*                                  ChestImage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.TerminateQuestConverstation
struct URewardsWidget_C_TerminateQuestConverstation_Params
{
};

// Function RewardsWidget.RewardsWidget_C.Init
struct URewardsWidget_C_Init_Params
{
};

// Function RewardsWidget.RewardsWidget_C.SetupQuestRewardsChoice
struct URewardsWidget_C_SetupQuestRewardsChoice_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.CreateRewardChoice
struct URewardsWidget_C_CreateRewardChoice_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                RewardIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRewardSelection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.SelectRewards
struct URewardsWidget_C_SelectRewards_Params
{
	int                                                RewardIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.PlayQuestConversation
struct URewardsWidget_C_PlayQuestConversation_Params
{
	class UFortConversation*                           Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.OnConversationEnded
struct URewardsWidget_C_OnConversationEnded_Params
{
};

// Function RewardsWidget.RewardsWidget_C.GetChestImage
struct URewardsWidget_C_GetChestImage_Params
{
	class UTexture2D*                                  MissionIcon;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.SelectText
struct URewardsWidget_C_SelectText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Default;                                                  // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RewardsWidget.RewardsWidget_C.PopulateFromMissionWithRewards
struct URewardsWidget_C_PopulateFromMissionWithRewards_Params
{
	struct FFortLastMissionInfo                        LastMissionInfo;                                          // (Parm)
	TArray<struct FFortItemInstanceQuantityPair>       MissionRewards;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RewardsWidget.RewardsWidget_C.PopulateMissionUI
struct URewardsWidget_C_PopulateMissionUI_Params
{
	struct FFortLastMissionInfo                        Mission;                                                  // (Parm)
};

// Function RewardsWidget.RewardsWidget_C.SetupUI
struct URewardsWidget_C_SetupUI_Params
{
	TEnumAsByte<ERewardType>                           RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.PopulateFromQuestWithRewards
struct URewardsWidget_C_PopulateFromQuestWithRewards_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RewardsWidget.RewardsWidget_C.PopulateQuestUI
struct URewardsWidget_C_PopulateQuestUI_Params
{
	class UFortQuestItem*                              Quest;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RewardSelect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.PopulateFromQuest
struct URewardsWidget_C_PopulateFromQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature
struct URewardsWidget_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.Destruct
struct URewardsWidget_C_Destruct_Params
{
};

// Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature
struct URewardsWidget_C_BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.SetQuest
struct URewardsWidget_C_SetQuest_Params
{
	class UFortQuestItem**                             Quest;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.Construct
struct URewardsWidget_C_Construct_Params
{
};

// Function RewardsWidget.RewardsWidget_C.HandleClientEvent_ConversationFinished
struct URewardsWidget_C_HandleClientEvent_ConversationFinished_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function RewardsWidget.RewardsWidget_C.BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature
struct URewardsWidget_C_BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsWidget.RewardsWidget_C.HandleImageClickedEvent
struct URewardsWidget_C_HandleImageClickedEvent_Params
{
};

// Function RewardsWidget.RewardsWidget_C.HandleSkipOpenEvent
struct URewardsWidget_C_HandleSkipOpenEvent_Params
{
};

// Function RewardsWidget.RewardsWidget_C.ExecuteUbergraph_RewardsWidget
struct URewardsWidget_C_ExecuteUbergraph_RewardsWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
