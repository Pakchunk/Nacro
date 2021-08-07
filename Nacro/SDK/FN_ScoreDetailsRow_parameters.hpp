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

// Function ScoreDetailsRow.ScoreDetailsRow_C.UpdateRow
struct UScoreDetailsRow_C_UpdateRow_Params
{
	struct FText                                       PlayerName;                                               // (Parm)
	int                                                TotalScore;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Combat;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Building;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Utility;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
