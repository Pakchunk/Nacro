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

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.SetupReward
struct UPlayerEmblemAndXp_C_SetupReward_Params
{
	class UWidget*                                     Container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  RewardText;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortMultiSizeItemCard*                      RewardItemCard;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasReward;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortItemInstanceQuantityPair               RewardItem;                                               // (Parm)
	int                                                LevelRewarded;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Refresh
struct UPlayerEmblemAndXp_C_Refresh_Params
{
	struct FFortPublicAccountInfo                      FortPublicAccountInfo;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Construct
struct UPlayerEmblemAndXp_C_Construct_Params
{
};

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.OnAccountInfoChanged
struct UPlayerEmblemAndXp_C_OnAccountInfoChanged_Params
{
	struct FFortPublicAccountInfo*                     Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.ExecuteUbergraph_PlayerEmblemAndXp
struct UPlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
