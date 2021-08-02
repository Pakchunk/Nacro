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

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeHomeBasePower
struct UResults_PlayerScoreRow_C_InitializeHomeBasePower_Params
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 // (Parm)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializePlayerName
struct UResults_PlayerScoreRow_C_InitializePlayerName_Params
{
	class UFortUIScoreReport*                          ScoreReport;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreReportReferece;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeScores
struct UResults_PlayerScoreRow_C_InitializeScores_Params
{
	class UFortUIScoreReport*                          InScoreReport;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InScoreReportIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeBackground
struct UResults_PlayerScoreRow_C_InitializeBackground_Params
{
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Initialize
struct UResults_PlayerScoreRow_C_Initialize_Params
{
	class UFortUIScoreReport*                          ScoreReport;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreReportIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Manual Pre Construct
struct UResults_PlayerScoreRow_C_Manual_Pre_Construct_Params
{
	bool                                               bIsDesignTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.PreConstruct
struct UResults_PlayerScoreRow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.ExecuteUbergraph_Results_PlayerScoreRow
struct UResults_PlayerScoreRow_C_ExecuteUbergraph_Results_PlayerScoreRow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
