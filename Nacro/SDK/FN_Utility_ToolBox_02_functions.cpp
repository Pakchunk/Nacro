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

// Function Utility_ToolBox_02.Utility_ToolBox_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUtility_ToolBox_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_ToolBox_02.Utility_ToolBox_02_C.UserConstructionScript");

	AUtility_ToolBox_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Utility_ToolBox_02.Utility_ToolBox_02_C.OnLoot
// (Event, Public, BlueprintEvent)

void AUtility_ToolBox_02_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_ToolBox_02.Utility_ToolBox_02_C.OnLoot");

	AUtility_ToolBox_02_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Utility_ToolBox_02.Utility_ToolBox_02_C.ExecuteUbergraph_Utility_ToolBox_02
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUtility_ToolBox_02_C::ExecuteUbergraph_Utility_ToolBox_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_ToolBox_02.Utility_ToolBox_02_C.ExecuteUbergraph_Utility_ToolBox_02");

	AUtility_ToolBox_02_C_ExecuteUbergraph_Utility_ToolBox_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
