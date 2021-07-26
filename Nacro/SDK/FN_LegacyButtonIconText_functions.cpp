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

// Function LegacyButtonIconText.LegacyButtonIconText_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacyButtonIconText_C::Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Outro");

	ULegacyButtonIconText_C_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacyButtonIconText_C::Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Intro");

	ULegacyButtonIconText_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Button                    (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyButtonIconText_C::Toggle(bool Show_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Toggle");

	ULegacyButtonIconText_C_Toggle_Params params;
	params.Show_Button = Show_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Alignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextJustify>      Align                          (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyButtonIconText_C::Set_Alignment(TEnumAsByte<ETextJustify> Align)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Set Alignment");

	ULegacyButtonIconText_C_Set_Alignment_Params params;
	params.Align = Align;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyButtonIconText_C::Update_Size_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Update Size Box");

	ULegacyButtonIconText_C_Update_Size_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Primary Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor ULegacyButtonIconText_C::Get_Primary_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Get Primary Color");

	ULegacyButtonIconText_C_Get_Primary_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Get Secondary Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor ULegacyButtonIconText_C::Get_Secondary_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Get Secondary Color");

	ULegacyButtonIconText_C_Get_Secondary_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Update Padding
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyButtonIconText_C::Update_Padding()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Update Padding");

	ULegacyButtonIconText_C_Update_Padding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             InBrush                        (Parm)
// bool                           RefreshPadding                 (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyButtonIconText_C::Set_Icon(const struct FSlateBrush& InBrush, bool RefreshPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Set Icon");

	ULegacyButtonIconText_C_Set_Icon_Params params;
	params.InBrush = InBrush;
	params.RefreshPadding = RefreshPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.Set Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (Parm)
// bool                           RefreshPadding                 (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyButtonIconText_C::Set_Text(const struct FText& InText, bool RefreshPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.Set Text");

	ULegacyButtonIconText_C_Set_Text_Params params;
	params.InText = InText;
	params.RefreshPadding = RefreshPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyButtonIconText_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.PreConstruct");

	ULegacyButtonIconText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void ULegacyButtonIconText_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseEnter");

	ULegacyButtonIconText_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void ULegacyButtonIconText_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.OnMouseLeave");

	ULegacyButtonIconText_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.ExecuteUbergraph_LegacyButtonIconText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyButtonIconText_C::ExecuteUbergraph_LegacyButtonIconText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.ExecuteUbergraph_LegacyButtonIconText");

	ULegacyButtonIconText_C_ExecuteUbergraph_LegacyButtonIconText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyButtonIconText.LegacyButtonIconText_C.On Mouse Hovered Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyButtonIconText_C::On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyButtonIconText.LegacyButtonIconText_C.On Mouse Hovered Changed__DelegateSignature");

	ULegacyButtonIconText_C_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
