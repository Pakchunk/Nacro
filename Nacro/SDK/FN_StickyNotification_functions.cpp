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

// Function StickyNotification.StickyNotification_C.CloseSticky
// (Public, BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::CloseSticky()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.CloseSticky");

	UStickyNotification_C_CloseSticky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.BindDelegates");

	UStickyNotification_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.InitializeNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::InitializeNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.InitializeNotification");

	UStickyNotification_C_InitializeNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.Handle_OutroFinished
// (BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::Handle_OutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.Handle_OutroFinished");

	UStickyNotification_C_Handle_OutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.Handle_ShowContentsFinished
// (BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::Handle_ShowContentsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.Handle_ShowContentsFinished");

	UStickyNotification_C_Handle_ShowContentsFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.Handle_HideFinished
// (BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::Handle_HideFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.Handle_HideFinished");

	UStickyNotification_C_Handle_HideFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.Handle_IntroFinished
// (BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::Handle_IntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.Handle_IntroFinished");

	UStickyNotification_C_Handle_IntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UStickyNotification_C::BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature");

	UStickyNotification_C_BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.Handle_IntroStarted
// (BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::Handle_IntroStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.Handle_IntroStarted");

	UStickyNotification_C_Handle_IntroStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UStickyNotification_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.OnMouseLeave");

	UStickyNotification_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UStickyNotification_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.OnMouseEnter");

	UStickyNotification_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On Mouse Hovered Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (Parm, ZeroConstructor, IsPlainOldData)

void UStickyNotification_C::BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On Mouse Hovered Changed__DelegateSignature");

	UStickyNotification_C_BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UStickyNotification_C::BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature");

	UStickyNotification_C_BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.Handle_OpenFinished
// (BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::Handle_OpenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.Handle_OpenFinished");

	UStickyNotification_C_Handle_OpenFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.HandleAccepted
// (BlueprintCallable, BlueprintEvent)

void UStickyNotification_C::HandleAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.HandleAccepted");

	UStickyNotification_C_HandleAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStickyNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.Construct");

	UStickyNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyNotification.StickyNotification_C.ExecuteUbergraph_StickyNotification
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStickyNotification_C::ExecuteUbergraph_StickyNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyNotification.StickyNotification_C.ExecuteUbergraph_StickyNotification");

	UStickyNotification_C_ExecuteUbergraph_StickyNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
