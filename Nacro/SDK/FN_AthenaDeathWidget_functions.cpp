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

// Function AthenaDeathWidget.AthenaDeathWidget_C.UpdateFollowNextTeammateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDeathWidget_C::UpdateFollowNextTeammateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.UpdateFollowNextTeammateVisibility");

	UAthenaDeathWidget_C_UpdateFollowNextTeammateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.AddTeamMemberIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  Player_State                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Team_Member_Index              (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDeathWidget_C::AddTeamMemberIndicator(class AFortPlayerStateAthena* Player_State, int Team_Member_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.AddTeamMemberIndicator");

	UAthenaDeathWidget_C_AddTeamMemberIndicator_Params params;
	params.Player_State = Player_State;
	params.Team_Member_Index = Team_Member_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.AnyTeamMembersStillAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AnyAlive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDeathWidget_C::AnyTeamMembersStillAlive(class AFortPlayerControllerAthena* PlayerController, bool* AnyAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.AnyTeamMembersStillAlive");

	UAthenaDeathWidget_C_AnyTeamMembersStillAlive_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnyAlive != nullptr)
		*AnyAlive = params.AnyAlive;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnWinnerAnnounced
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Winner                         (Parm, ZeroConstructor)

void UAthenaDeathWidget_C::OnWinnerAnnounced(const struct FString& Winner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnWinnerAnnounced");

	UAthenaDeathWidget_C_OnWinnerAnnounced_Params params;
	params.Winner = Winner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.HideExtraStuffForSpectating
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDeathWidget_C::HideExtraStuffForSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.HideExtraStuffForSpectating");

	UAthenaDeathWidget_C_HideExtraStuffForSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnViewTargetChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDeathWidget_C::OnViewTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnViewTargetChanged");

	UAthenaDeathWidget_C_OnViewTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnPlaceChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDeathWidget_C::OnPlaceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnPlaceChanged");

	UAthenaDeathWidget_C_OnPlaceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnPawnDied
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (Parm, OutParm, ReferenceParm)

void UAthenaDeathWidget_C::OnPawnDied(struct FFortPlayerDeathReport* DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnPawnDied");

	UAthenaDeathWidget_C_OnPawnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathReport != nullptr)
		*DeathReport = params.DeathReport;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDeathWidget_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	UAthenaDeathWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDeathWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.OnActivated");

	UAthenaDeathWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDeathWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.Construct");

	UAthenaDeathWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.On Kill Feed Updated
// (BlueprintCallable, BlueprintEvent)

void UAthenaDeathWidget_C::On_Kill_Feed_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.On Kill Feed Updated");

	UAthenaDeathWidget_C_On_Kill_Feed_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.TeamMemberChanged
// (BlueprintCallable, BlueprintEvent)

void UAthenaDeathWidget_C::TeamMemberChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.TeamMemberChanged");

	UAthenaDeathWidget_C_TeamMemberChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.BndEvt__FollowNextTeammate_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDeathWidget_C::BndEvt__FollowNextTeammate_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.BndEvt__FollowNextTeammate_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	UAthenaDeathWidget_C_BndEvt__FollowNextTeammate_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDeathWidget.AthenaDeathWidget_C.ExecuteUbergraph_AthenaDeathWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDeathWidget_C::ExecuteUbergraph_AthenaDeathWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDeathWidget.AthenaDeathWidget_C.ExecuteUbergraph_AthenaDeathWidget");

	UAthenaDeathWidget_C_ExecuteUbergraph_AthenaDeathWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
