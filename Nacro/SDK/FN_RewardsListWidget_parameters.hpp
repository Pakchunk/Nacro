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

// Function RewardsListWidget.RewardsListWidget_C.PresentAllRewards
struct URewardsListWidget_C_PresentAllRewards_Params
{
};

// Function RewardsListWidget.RewardsListWidget_C.CreateRewardWrapper
struct URewardsListWidget_C_CreateRewardWrapper_Params
{
	class UHomeScreenQuestRewardItem_C*                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm)
	class UFrontEndRewardWrapperWidget_C*              OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsListWidget.RewardsListWidget_C.CreateReward
struct URewardsListWidget_C_CreateReward_Params
{
	struct FFortItemInstanceQuantityPair               FortItemInstanceQuantityPair;                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               Selectable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsListWidget.RewardsListWidget_C.PresentNextReward
struct URewardsListWidget_C_PresentNextReward_Params
{
};

// Function RewardsListWidget.RewardsListWidget_C.PopulateRewards
struct URewardsListWidget_C_PopulateRewards_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair>       SelectableRewards;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
