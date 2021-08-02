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

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SetHighlight
struct URewardsChoiceButtonWidget_C_SetHighlight_Params
{
	bool                                               EnableHighlight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SelectRewards
struct URewardsChoiceButtonWidget_C_SelectRewards_Params
{
};

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.OnPreviewMouseButtonDown
struct URewardsChoiceButtonWidget_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.PopulateRewards
struct URewardsChoiceButtonWidget_C_PopulateRewards_Params
{
	class URewardsWidget_C*                            Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RewardIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
