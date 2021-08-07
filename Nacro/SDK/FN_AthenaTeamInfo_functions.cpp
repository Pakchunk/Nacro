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

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMutedChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamMuted                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamMutedChanged(TArray<bool>* TeamMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMutedChanged");

	UAthenaTeamInfo_C_HandleTeamMutedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMuted != nullptr)
		*TeamMuted = params.TeamMuted;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamTalkingChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamTalking                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamTalkingChanged(TArray<bool>* TeamTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamTalkingChanged");

	UAthenaTeamInfo_C_HandleTeamTalkingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamTalking != nullptr)
		*TeamTalking = params.TeamTalking;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandleTeamMemberRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberRemoved");

	UAthenaTeamInfo_C_HandleTeamMemberRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamRevivingChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamReviving                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamRevivingChanged(TArray<bool>* TeamReviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamRevivingChanged");

	UAthenaTeamInfo_C_HandleTeamRevivingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamReviving != nullptr)
		*TeamReviving = params.TeamReviving;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberPlayerNamesChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandleTeamMemberPlayerNamesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberPlayerNamesChanged");

	UAthenaTeamInfo_C_HandleTeamMemberPlayerNamesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDeadChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamDead                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamDeadChanged(TArray<bool>* TeamDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDeadChanged");

	UAthenaTeamInfo_C_HandleTeamDeadChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamDead != nullptr)
		*TeamDead = params.TeamDead;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDBNOChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamDBNO                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamDBNOChanged(TArray<bool>* TeamDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamDBNOChanged");

	UAthenaTeamInfo_C_HandleTeamDBNOChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamDBNO != nullptr)
		*TeamDBNO = params.TeamDBNO;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandleTeamMemberAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamMemberAdded");

	UAthenaTeamInfo_C_HandleTeamMemberAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamHitInfoChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  HealthFractions                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  ShieldFractions                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleTeamHitInfoChanged(TArray<float>* HealthFractions, TArray<float>* ShieldFractions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleTeamHitInfoChanged");

	UAthenaTeamInfo_C_HandleTeamHitInfoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthFractions != nullptr)
		*HealthFractions = params.HealthFractions;
	if (ShieldFractions != nullptr)
		*ShieldFractions = params.ShieldFractions;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::ClearContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents");

	UAthenaTeamInfo_C_ClearContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.AppendTeamMember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamInfo_C::AppendTeamMember(class AFortPlayerStateAthena* PlayerState, int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.AppendTeamMember");

	UAthenaTeamInfo_C_AppendTeamMember_Params params;
	params.PlayerState = PlayerState;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.Construct");

	UAthenaTeamInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandlePartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft");

	UAthenaTeamInfo_C_HandlePartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamInfo_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct");

	UAthenaTeamInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamInfo_C::ExecuteUbergraph_AthenaTeamInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo");

	UAthenaTeamInfo_C_ExecuteUbergraph_AthenaTeamInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
