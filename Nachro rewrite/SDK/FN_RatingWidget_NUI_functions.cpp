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

// Function RatingWidget_NUI.RatingWidget_NUI_C.SetShouldShowTeamPowerRating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowTeamRating                 (Parm, ZeroConstructor, IsPlainOldData)

void URatingWidget_NUI_C::SetShouldShowTeamPowerRating(bool ShowTeamRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.SetShouldShowTeamPowerRating");

	URatingWidget_NUI_C_SetShouldShowTeamPowerRating_Params params;
	params.ShowTeamRating = ShowTeamRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Override Default Color Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Light_Color                    (Parm, IsPlainOldData)
// struct FLinearColor            Medium_Color                   (Parm, IsPlainOldData)
// struct FLinearColor            Dark_Color                     (Parm, IsPlainOldData)

void URatingWidget_NUI_C::Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.Override Default Color Set");

	URatingWidget_NUI_C_Override_Default_Color_Set_Params params;
	params.Override = Override;
	params.Light_Color = Light_Color;
	params.Medium_Color = Medium_Color;
	params.Dark_Color = Dark_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Texture2D Parameter From Multi Size Brush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Parameter                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortMultiSizeBrush     MBrush                         (Parm)

void URatingWidget_NUI_C::Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, const struct FName& Parameter, const struct FFortMultiSizeBrush& MBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.Set Texture2D Parameter From Multi Size Brush");

	URatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush_Params params;
	params.Mid = Mid;
	params.Parameter = Parameter;
	params.MBrush = MBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Update From Unique ID
// (Protected, BlueprintCallable, BlueprintEvent)

void URatingWidget_NUI_C::Update_From_Unique_ID()
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.Update From Unique ID");

	URatingWidget_NUI_C_Update_From_Unique_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Unique ID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        ID                             (Parm)

void URatingWidget_NUI_C::Set_Unique_ID(const struct FUniqueNetIdRepl& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.Set Unique ID");

	URatingWidget_NUI_C_Set_Unique_ID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void URatingWidget_NUI_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.Update");

	URatingWidget_NUI_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Update Rating Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rating                         (Parm, ZeroConstructor, IsPlainOldData)

void URatingWidget_NUI_C::Update_Rating_Value(int Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.Update Rating Value");

	URatingWidget_NUI_C_Update_Rating_Value_Params params;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void URatingWidget_NUI_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.PreConstruct");

	URatingWidget_NUI_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerInfoChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (ConstParm, Parm, OutParm, ReferenceParm)

void URatingWidget_NUI_C::PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerInfoChanged");

	URatingWidget_NUI_C_PlayerInfoChanged_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URatingWidget_NUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.Construct");

	URatingWidget_NUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void URatingWidget_NUI_C::PlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerStateChanged");

	URatingWidget_NUI_C_PlayerStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RatingWidget_NUI.RatingWidget_NUI_C.ExecuteUbergraph_RatingWidget_NUI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URatingWidget_NUI_C::ExecuteUbergraph_RatingWidget_NUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RatingWidget_NUI.RatingWidget_NUI_C.ExecuteUbergraph_RatingWidget_NUI");

	URatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
