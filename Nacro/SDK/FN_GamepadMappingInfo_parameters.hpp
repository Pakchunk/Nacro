#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged
struct UGamepadMappingInfo_C_HandleConfigChanged_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena
struct UGamepadMappingInfo_C_HandleConfigChanged_Athena_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged
struct UGamepadMappingInfo_C_OnConfigChanged_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
struct UGamepadMappingInfo_C_Update_Displayed_Mapping_Params
{
	int                                                platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Configuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
