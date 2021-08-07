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

// Function AthenaLobby.AthenaLobby_C.ShowModalNews
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::ShowModalNews()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShowModalNews");

	UAthenaLobby_C_ShowModalNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnInputNews
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputNews(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputNews");

	UAthenaLobby_C_OnInputNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaLobby.AthenaLobby_C.OnInputFillChangeGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommited                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputFillChangeGamepad(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputFillChangeGamepad");

	UAthenaLobby_C_OnInputFillChangeGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.OnInputPlaylistChangeGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommited                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputPlaylistChangeGamepad(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputPlaylistChangeGamepad");

	UAthenaLobby_C_OnInputPlaylistChangeGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.IsLocalPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLocalPlayer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::IsLocalPlayer(int PlayerIndex, bool* IsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.IsLocalPlayer");

	UAthenaLobby_C_IsLocalPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = params.IsLocalPlayer;
}


// Function AthenaLobby.AthenaLobby_C.OnSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnSelect(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnSelect");

	UAthenaLobby_C_OnSelect_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.CanNavigatePlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanNavigatePlayers            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::CanNavigatePlayers(bool* bCanNavigatePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.CanNavigatePlayers");

	UAthenaLobby_C_CanNavigatePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanNavigatePlayers != nullptr)
		*bCanNavigatePlayers = params.bCanNavigatePlayers;
}


// Function AthenaLobby.AthenaLobby_C.SetHoveredPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::SetHoveredPlayer(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.SetHoveredPlayer");

	UAthenaLobby_C_SetHoveredPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.HoverNextPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::HoverNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.HoverNextPlayer");

	UAthenaLobby_C_HoverNextPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.HoverPreviousPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::HoverPreviousPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.HoverPreviousPlayer");

	UAthenaLobby_C_HoverPreviousPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.StartMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::StartMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.StartMusic");

	UAthenaLobby_C_StartMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ShouldAddPlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShouldAdd                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::ShouldAddPlay(bool* bShouldAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShouldAddPlay");

	UAthenaLobby_C_ShouldAddPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldAdd != nullptr)
		*bShouldAdd = params.bShouldAdd;
}


// Function AthenaLobby.AthenaLobby_C.InitializeInput
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::InitializeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.InitializeInput");

	UAthenaLobby_C_InitializeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnLobbyPlayerPadUnhovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadUnhovered");

	UAthenaLobby_C_OnLobbyPlayerPadUnhovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnLobbyPlayerPadHovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadHovered");

	UAthenaLobby_C_OnLobbyPlayerPadHovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerGadgetsClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnLobbyPlayerGadgetsClicked(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerGadgetsClicked");

	UAthenaLobby_C_OnLobbyPlayerGadgetsClicked_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyEmptyPlayerClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnLobbyEmptyPlayerClicked(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyEmptyPlayerClicked");

	UAthenaLobby_C_OnLobbyEmptyPlayerClicked_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::OnLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyDisconnected");

	UAthenaLobby_C_OnLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.RefreshLaunch
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::RefreshLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.RefreshLaunch");

	UAthenaLobby_C_RefreshLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaLobby_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnMouseButtonDown");

	UAthenaLobby_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaLobby.AthenaLobby_C.ShouldAddScroll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShouldAdd                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::ShouldAddScroll(bool* bShouldAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShouldAddScroll");

	UAthenaLobby_C_ShouldAddScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldAdd != nullptr)
		*bShouldAdd = params.bShouldAdd;
}


// Function AthenaLobby.AthenaLobby_C.ShouldAddCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShouldAdd                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::ShouldAddCancel(bool* bShouldAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShouldAddCancel");

	UAthenaLobby_C_ShouldAddCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldAdd != nullptr)
		*bShouldAdd = params.bShouldAdd;
}


// Function AthenaLobby.AthenaLobby_C.RefreshInput
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::RefreshInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.RefreshInput");

	UAthenaLobby_C_RefreshInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnInputAbandon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommited                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputAbandon(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputAbandon");

	UAthenaLobby_C_OnInputAbandon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.InitializeContextEvents");

	UAthenaLobby_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Focus");

	UAthenaLobby_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnInputCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommited                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputCancel(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputCancel");

	UAthenaLobby_C_OnInputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.RefreshPlayerHeroes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::RefreshPlayerHeroes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.RefreshPlayerHeroes");

	UAthenaLobby_C_RefreshPlayerHeroes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (Parm)

void UAthenaLobby_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnTeamMemberStateChanged");

	UAthenaLobby_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmptySlot                      (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnTeamMemberRemoved(int EmptySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnTeamMemberRemoved");

	UAthenaLobby_C_OnTeamMemberRemoved_Params params;
	params.EmptySlot = EmptySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (Parm)

void UAthenaLobby_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnTeamMemberAdded");

	UAthenaLobby_C_OnTeamMemberAdded_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Refresh");

	UAthenaLobby_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Initialize");

	UAthenaLobby_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.DialogResult_156754AE468EF93DCA2009A412591BA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::DialogResult_156754AE468EF93DCA2009A412591BA7(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.DialogResult_156754AE468EF93DCA2009A412591BA7");

	UAthenaLobby_C_DialogResult_156754AE468EF93DCA2009A412591BA7_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::OnFailure_DA5E62624D068772EA890193344BA4AE()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE");

	UAthenaLobby_C_OnFailure_DA5E62624D068772EA890193344BA4AE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::OnSuccess_DA5E62624D068772EA890193344BA4AE()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE");

	UAthenaLobby_C_OnSuccess_DA5E62624D068772EA890193344BA4AE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ActiveWidgetIndex              (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");

	UAthenaLobby_C_BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnEndCursorOverPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnEndCursorOverPlayer(int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnEndCursorOverPlayer");

	UAthenaLobby_C_OnEndCursorOverPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Event Abandon
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::Event_Abandon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Event Abandon");

	UAthenaLobby_C_Event_Abandon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnNavigationLeft
// (Event, Public, BlueprintEvent)

void UAthenaLobby_C::OnNavigationLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnNavigationLeft");

	UAthenaLobby_C_OnNavigationLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnNavigationRight
// (Event, Public, BlueprintEvent)

void UAthenaLobby_C::OnNavigationRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnNavigationRight");

	UAthenaLobby_C_OnNavigationRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature");

	UAthenaLobby_C_BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Construct");

	UAthenaLobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnPlayerClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnPlayerClicked(int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnPlayerClicked");

	UAthenaLobby_C_OnPlayerClicked_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnBeginCursorOverPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnBeginCursorOverPlayer(int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnBeginCursorOverPlayer");

	UAthenaLobby_C_OnBeginCursorOverPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature
// (BlueprintEvent)

void UAthenaLobby_C::BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature");

	UAthenaLobby_C_BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaLobby_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnActivated");

	UAthenaLobby_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::ExecuteUbergraph_AthenaLobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby");

	UAthenaLobby_C_ExecuteUbergraph_AthenaLobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
