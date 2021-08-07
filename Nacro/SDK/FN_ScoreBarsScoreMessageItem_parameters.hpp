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

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished
struct UScoreBarsScoreMessageItem_C_OnAppearAnimationFinished_Params
{
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget
struct UScoreBarsScoreMessageItem_C_ClearScoreValueWidget_Params
{
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget
struct UScoreBarsScoreMessageItem_C_GetScoreValueWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup
struct UScoreBarsScoreMessageItem_C_Setup_Params
{
	int                                                Base_Delta;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name_Text;                                                // (Parm)
	class UScoreMessageNumber_C*                       In_Score_Widget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues
struct UScoreBarsScoreMessageItem_C_UpdateValues_Params
{
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged
struct UScoreBarsScoreMessageItem_C_OnStackSizeChanged_Params
{
	int*                                               OldStackSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove
struct UScoreBarsScoreMessageItem_C_OnBeginRemove_Params
{
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem
struct UScoreBarsScoreMessageItem_C_ExecuteUbergraph_ScoreBarsScoreMessageItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
