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

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
struct ULeaderboardRowWidget_C_Refresh_Params
{
	class UFortLeaderboardRowProxyInstance*            RowObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
struct ULeaderboardRowWidget_C_SetDataDirect_Params
{
	class UFortLeaderboardRowProxyInstance*            NewData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnLeaderboardEntryDataSet
struct ULeaderboardRowWidget_C_OnLeaderboardEntryDataSet_Params
{
};

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
struct ULeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
