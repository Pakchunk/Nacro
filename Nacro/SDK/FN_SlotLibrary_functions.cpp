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

// Function SlotLibrary.SlotLibrary_C.Get Attribute Modifier Header Text
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAttributeInfo      Attribute_Info                 (Parm)
// struct FGameplayTagContainer   Required_Tags                  (Parm)
// struct FText                   Required_Gameplay_Tags_Description (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USlotLibrary_C::STATIC_Get_Attribute_Modifier_Header_Text(const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Tags, const struct FText& Required_Gameplay_Tags_Description, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlotLibrary.SlotLibrary_C.Get Attribute Modifier Header Text");

	USlotLibrary_C_Get_Attribute_Modifier_Header_Text_Params params;
	params.Attribute_Info = Attribute_Info;
	params.Required_Tags = Required_Tags;
	params.Required_Gameplay_Tags_Description = Required_Gameplay_Tags_Description;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SlotLibrary.SlotLibrary_C.Create Attribute Modifier Tool Tip
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortAttributeInfo      Attribute_Info                 (Parm)
// struct FGameplayTagContainer   Required_Gameplay_Tags         (Parm)
// struct FText                   Required_Gameplay_Tags_Description (Parm)
// struct FText                   Modifier_Source                (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USlotLibrary_C::STATIC_Create_Attribute_Modifier_Tool_Tip(class APlayerController* Owning_Player, const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Gameplay_Tags, const struct FText& Required_Gameplay_Tags_Description, const struct FText& Modifier_Source, class UObject* __WorldContext, class UWidget** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlotLibrary.SlotLibrary_C.Create Attribute Modifier Tool Tip");

	USlotLibrary_C_Create_Attribute_Modifier_Tool_Tip_Params params;
	params.Owning_Player = Owning_Player;
	params.Attribute_Info = Attribute_Info;
	params.Required_Gameplay_Tags = Required_Gameplay_Tags;
	params.Required_Gameplay_Tags_Description = Required_Gameplay_Tags_Description;
	params.Modifier_Source = Modifier_Source;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function SlotLibrary.SlotLibrary_C.Get Traits Of Workers
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UFortWorker*>     Workers                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   Chief_Personality              (Parm, OutParm)
// struct FGameplayTagContainer   Crew_Personalities             (Parm, OutParm)
// struct FGameplayTagContainer   Crew_Set_Bonuses               (Parm, OutParm)

void USlotLibrary_C::STATIC_Get_Traits_Of_Workers(class UObject* __WorldContext, TArray<class UFortWorker*>* Workers, struct FGameplayTagContainer* Chief_Personality, struct FGameplayTagContainer* Crew_Personalities, struct FGameplayTagContainer* Crew_Set_Bonuses)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlotLibrary.SlotLibrary_C.Get Traits Of Workers");

	USlotLibrary_C_Get_Traits_Of_Workers_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Workers != nullptr)
		*Workers = params.Workers;
	if (Chief_Personality != nullptr)
		*Chief_Personality = params.Chief_Personality;
	if (Crew_Personalities != nullptr)
		*Crew_Personalities = params.Crew_Personalities;
	if (Crew_Set_Bonuses != nullptr)
		*Crew_Set_Bonuses = params.Crew_Set_Bonuses;
}


// Function SlotLibrary.SlotLibrary_C.Calculate Current Pulsing Highlight Color
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Base_Color                     (Parm, IsPlainOldData)
// struct FLinearColor            Hightlight_Color               (Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Current_Color                  (Parm, OutParm, IsPlainOldData)

void USlotLibrary_C::STATIC_Calculate_Current_Pulsing_Highlight_Color(const struct FLinearColor& Base_Color, const struct FLinearColor& Hightlight_Color, class UObject* __WorldContext, struct FLinearColor* Current_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlotLibrary.SlotLibrary_C.Calculate Current Pulsing Highlight Color");

	USlotLibrary_C_Calculate_Current_Pulsing_Highlight_Color_Params params;
	params.Base_Color = Base_Color;
	params.Hightlight_Color = Hightlight_Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Color != nullptr)
		*Current_Color = params.Current_Color;
}


// Function SlotLibrary.SlotLibrary_C.EnsureIconBrush
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMultiSizeBrush     Multi_size_Brush               (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Brush                          (Parm, OutParm)

void USlotLibrary_C::STATIC_EnsureIconBrush(const struct FFortMultiSizeBrush& Multi_size_Brush, class UObject* __WorldContext, struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlotLibrary.SlotLibrary_C.EnsureIconBrush");

	USlotLibrary_C_EnsureIconBrush_Params params;
	params.Multi_size_Brush = Multi_size_Brush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function SlotLibrary.SlotLibrary_C.InitItemWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemWidget*         Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void USlotLibrary_C::STATIC_InitItemWidget(class UFortItemWidget* Widget, class UFortItem* Item, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlotLibrary.SlotLibrary_C.InitItemWidget");

	USlotLibrary_C_InitItemWidget_Params params;
	params.Widget = Widget;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
