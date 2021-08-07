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

// Function TabGamePadConfig.TabGamePadConfig_C.HandleGamepadMappingInfoChange
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::HandleGamepadMappingInfoChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.HandleGamepadMappingInfoChange");

	UTabGamePadConfig_C_HandleGamepadMappingInfoChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Handle Mode Toggled
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::Handle_Mode_Toggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Handle Mode Toggled");

	UTabGamePadConfig_C_Handle_Mode_Toggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Update Data
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::Update_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Update Data");

	UTabGamePadConfig_C_Update_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::Initialize_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Initialize Data");

	UTabGamePadConfig_C_Initialize_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabGamePadConfig_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Construct");

	UTabGamePadConfig_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Configuration Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::Configuration_Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Configuration Changed");

	UTabGamePadConfig_C_Configuration_Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.CenterOnTab");

	UTabGamePadConfig_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.Gamepad Config Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::Gamepad_Config_Changed(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.Gamepad Config Changed");

	UTabGamePadConfig_C_Gamepad_Config_Changed_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.UpdateOptionsTab");

	UTabGamePadConfig_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.ControllerPlatformConfigChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::ControllerPlatformConfigChanged(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.ControllerPlatformConfigChanged");

	UTabGamePadConfig_C_ControllerPlatformConfigChanged_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabGamePadConfig.TabGamePadConfig_C.ExecuteUbergraph_TabGamePadConfig
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTabGamePadConfig_C::ExecuteUbergraph_TabGamePadConfig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabGamePadConfig.TabGamePadConfig_C.ExecuteUbergraph_TabGamePadConfig");

	UTabGamePadConfig_C_ExecuteUbergraph_TabGamePadConfig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
