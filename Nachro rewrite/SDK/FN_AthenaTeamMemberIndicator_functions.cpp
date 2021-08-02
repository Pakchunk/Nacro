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

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Talking Changed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   Team_Talking                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamMemberIndicator_C::On_Team_Talking_Changed(TArray<bool>* Team_Talking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Talking Changed");

	UAthenaTeamMemberIndicator_C_On_Team_Talking_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team_Talking != nullptr)
		*Team_Talking = params.Team_Talking;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Reviving Changed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   Team_Reviving                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamMemberIndicator_C::On_Team_Reviving_Changed(TArray<bool>* Team_Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Reviving Changed");

	UAthenaTeamMemberIndicator_C_On_Team_Reviving_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team_Reviving != nullptr)
		*Team_Reviving = params.Team_Reviving;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team DBNO Changed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   DBNOStates                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamMemberIndicator_C::On_Team_DBNO_Changed(TArray<bool>* DBNOStates)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team DBNO Changed");

	UAthenaTeamMemberIndicator_C_On_Team_DBNO_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DBNOStates != nullptr)
		*DBNOStates = params.DBNOStates;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Construct");

	UAthenaTeamMemberIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberIndicator_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Tick");

	UAthenaTeamMemberIndicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberIndicator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Destruct");

	UAthenaTeamMemberIndicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Update Pawn
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberIndicator_C::Update_Pawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Update Pawn");

	UAthenaTeamMemberIndicator_C_Update_Pawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberIndicator_C::ExecuteUbergraph_AthenaTeamMemberIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator");

	UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
