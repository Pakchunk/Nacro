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

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULegacyItem_DO_NOT_USE_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDrop");

	ULegacyItem_DO_NOT_USE_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Opacity
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Base_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Opacity");

	ULegacyItem_DO_NOT_USE_C_Update_Base_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Activatable State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activatable                    (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Update_Activatable_State(bool Activatable)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Activatable State");

	ULegacyItem_DO_NOT_USE_C_Update_Activatable_State_Params params;
	params.Activatable = Activatable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Rating Tag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Rating_Tag()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Rating Tag");

	ULegacyItem_DO_NOT_USE_C_Update_Rating_Tag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Texture2D From Multi Size Brush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMultiSizeBrush     Multi_Size_Brush               (Parm)
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Get_Texture2D_From_Multi_Size_Brush(const struct FFortMultiSizeBrush& Multi_Size_Brush, TEnumAsByte<EFortBrushSize> Brush_Size, class UTexture2D** Texture2D, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Texture2D From Multi Size Brush");

	ULegacyItem_DO_NOT_USE_C_Get_Texture2D_From_Multi_Size_Brush_Params params;
	params.Multi_Size_Brush = Multi_Size_Brush;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Num in Stack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULegacyItem_DO_NOT_USE_C::Get_Num_in_Stack()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Num in Stack");

	ULegacyItem_DO_NOT_USE_C_Get_Num_in_Stack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Style
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override_Display_Style         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemDisplayStyle> DisplayStyle                   (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Display_Style(bool Override_Display_Style, TEnumAsByte<EItemDisplayStyle> DisplayStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Style");

	ULegacyItem_DO_NOT_USE_C_Set_Display_Style_Params params;
	params.Override_Display_Style = Override_Display_Style;
	params.DisplayStyle = DisplayStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Hide Subtype Icons
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Hide_Subtype_Icons()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Hide Subtype Icons");

	ULegacyItem_DO_NOT_USE_C_Hide_Subtype_Icons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Primary Icon Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override_Icon_Visibility       (Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               Item_Icon_Visibility           (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Primary_Icon_Visibility(bool Override_Icon_Visibility, ESlateVisibility Item_Icon_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Primary Icon Visibility");

	ULegacyItem_DO_NOT_USE_C_Set_Primary_Icon_Visibility_Params params;
	params.Override_Icon_Visibility = Override_Icon_Visibility;
	params.Item_Icon_Visibility = Item_Icon_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Subtype Icons & Ammo Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override_Secondary_Icon_Color  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Secondary_Icon_Override_Color  (Parm, IsPlainOldData)
// bool                           Override_Tertiary_Icon_Color   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tertiary_Icon_Override_Color   (Parm, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Subtype_Icons___Ammo_Color(bool Override_Secondary_Icon_Color, const struct FLinearColor& Secondary_Icon_Override_Color, bool Override_Tertiary_Icon_Color, const struct FLinearColor& Tertiary_Icon_Override_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Subtype Icons & Ammo Color");

	ULegacyItem_DO_NOT_USE_C_Set_Subtype_Icons___Ammo_Color_Params params;
	params.Override_Secondary_Icon_Color = Override_Secondary_Icon_Color;
	params.Secondary_Icon_Override_Color = Secondary_Icon_Override_Color;
	params.Override_Tertiary_Icon_Color = Override_Tertiary_Icon_Color;
	params.Tertiary_Icon_Override_Color = Tertiary_Icon_Override_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply ULegacyItem_DO_NOT_USE_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDoubleClick");

	ULegacyItem_DO_NOT_USE_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Resize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Resize(TEnumAsByte<EFortBrushSize> Brush_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Resize");

	ULegacyItem_DO_NOT_USE_C_Resize_Params params;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Refresh");

	ULegacyItem_DO_NOT_USE_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Stack Count
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Stack_Count(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Stack Count");

	ULegacyItem_DO_NOT_USE_C_Set_Stack_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Durability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Durability(float Durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Durability");

	ULegacyItem_DO_NOT_USE_C_Set_Durability_Params params;
	params.Durability = Durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Cooldown Meter
// (Protected, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Cooldown_Meter()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Cooldown Meter");

	ULegacyItem_DO_NOT_USE_C_Update_Cooldown_Meter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Durability Meter
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Durability_Meter()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Durability Meter");

	ULegacyItem_DO_NOT_USE_C_Update_Durability_Meter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Tooltip Header
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header_Text                    (Parm)
// class USlateBrushAsset*        Icon_Brush                     (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Tooltip_Header(const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Tooltip Header");

	ULegacyItem_DO_NOT_USE_C_Set_Tooltip_Header_Params params;
	params.Header_Text = Header_Text;
	params.Icon_Brush = Icon_Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Tooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OverrideStackCount             (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* ULegacyItem_DO_NOT_USE_C::Get_Item_Tooltip(int OverrideStackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Tooltip");

	ULegacyItem_DO_NOT_USE_C_Get_Item_Tooltip_Params params;
	params.OverrideStackCount = OverrideStackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Mode
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIState                   Current_UI_State               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Cursor_Mode                    (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Display_Mode(EFortUIState Current_UI_State, bool Cursor_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Mode");

	ULegacyItem_DO_NOT_USE_C_Set_Display_Mode_Params params;
	params.Current_UI_State = Current_UI_State;
	params.Cursor_Mode = Cursor_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Ammo Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Ammo_Count(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Ammo Count");

	ULegacyItem_DO_NOT_USE_C_Set_Ammo_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Subtype Icons & Ammo
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Subtype_Icons___Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Subtype Icons & Ammo");

	ULegacyItem_DO_NOT_USE_C_Update_Subtype_Icons___Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Display Style
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemType                  Item_Type                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemDisplayStyle> Style                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Get_Display_Style(EFortItemType Item_Type, TEnumAsByte<EItemDisplayStyle>* Style)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Display Style");

	ULegacyItem_DO_NOT_USE_C_Get_Display_Style_Params params;
	params.Item_Type = Item_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Style != nullptr)
		*Style = params.Style;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Tier Badge
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Tier_Badge()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Tier Badge");

	ULegacyItem_DO_NOT_USE_C_Update_Tier_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Primary Icon
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Primary_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Primary Icon");

	ULegacyItem_DO_NOT_USE_C_Update_Primary_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Texture Set
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemDisplayStyle> Display_Style                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemTextureSet         Texture_Set                    (Parm, OutParm)

void ULegacyItem_DO_NOT_USE_C::Get_Item_Texture_Set(TEnumAsByte<EItemDisplayStyle> Display_Style, struct FItemTextureSet* Texture_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Texture Set");

	ULegacyItem_DO_NOT_USE_C_Get_Item_Texture_Set_Params params;
	params.Display_Style = Display_Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture_Set != nullptr)
		*Texture_Set = params.Texture_Set;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Size_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Size Box");

	ULegacyItem_DO_NOT_USE_C_Update_Size_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDragDetected");

	ULegacyItem_DO_NOT_USE_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply ULegacyItem_DO_NOT_USE_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDown");

	ULegacyItem_DO_NOT_USE_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update All
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_All()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update All");

	ULegacyItem_DO_NOT_USE_C_Update_All_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Stack Counter
// (Protected, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Stack_Counter()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Stack Counter");

	ULegacyItem_DO_NOT_USE_C_Update_Stack_Counter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Item Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item_Data                      (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::Set_Item_Data(class UFortItem* Item_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Item Data");

	ULegacyItem_DO_NOT_USE_C_Set_Item_Data_Params params;
	params.Item_Data = Item_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Material
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Base_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Material");

	ULegacyItem_DO_NOT_USE_C_Update_Base_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemChanged
// (Event, Protected, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::BPOnItemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemChanged");

	ULegacyItem_DO_NOT_USE_C_BPOnItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Construct");

	ULegacyItem_DO_NOT_USE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.PreConstruct");

	ULegacyItem_DO_NOT_USE_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem**              NewItem                        (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::BPOnItemSet(class UFortItem** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemSet");

	ULegacyItem_DO_NOT_USE_C_BPOnItemSet_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnCursorModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCursorModeEnabled             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             CursorModeContentWidget        (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::OnCursorModeChanged(bool bCursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnCursorModeChanged");

	ULegacyItem_DO_NOT_USE_C_OnCursorModeChanged_Params params;
	params.bCursorModeEnabled = bCursorModeEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentWidget = CursorModeContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void ULegacyItem_DO_NOT_USE_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseEnter");

	ULegacyItem_DO_NOT_USE_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnCooldownSecondsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           NewCooldownSeconds             (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::BPOnCooldownSecondsChanged(int* NewCooldownSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnCooldownSecondsChanged");

	ULegacyItem_DO_NOT_USE_C_BPOnCooldownSecondsChanged_Params params;
	params.NewCooldownSeconds = NewCooldownSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnActivatableChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bNewActivatable                (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::BPOnActivatableChanged(bool* bNewActivatable)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnActivatableChanged");

	ULegacyItem_DO_NOT_USE_C_BPOnActivatableChanged_Params params;
	params.bNewActivatable = bNewActivatable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.ExecuteUbergraph_LegacyItem_DO_NOT_USE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULegacyItem_DO_NOT_USE_C::ExecuteUbergraph_LegacyItem_DO_NOT_USE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.ExecuteUbergraph_LegacyItem_DO_NOT_USE");

	ULegacyItem_DO_NOT_USE_C_ExecuteUbergraph_LegacyItem_DO_NOT_USE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
