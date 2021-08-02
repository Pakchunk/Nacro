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

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Died
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaGameOverScreen_C::On_Player_Died(const struct FFortPlayerDeathReport& DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Died");

	UAthenaGameOverScreen_C_On_Player_Died_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Won
// (BlueprintCallable, BlueprintEvent)

void UAthenaGameOverScreen_C::On_Player_Won()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Won");

	UAthenaGameOverScreen_C_On_Player_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaGameOverScreen_C::HandleRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverScreen.AthenaGameOverScreen_C.HandleRevived");

	UAthenaGameOverScreen_C_HandleRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaGameOverScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverScreen.AthenaGameOverScreen_C.Construct");

	UAthenaGameOverScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.Clear GameOver Screen
// (BlueprintCallable, BlueprintEvent)

void UAthenaGameOverScreen_C::Clear_GameOver_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverScreen.AthenaGameOverScreen_C.Clear GameOver Screen");

	UAthenaGameOverScreen_C_Clear_GameOver_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Team Won
// (BlueprintCallable, BlueprintEvent)

void UAthenaGameOverScreen_C::On_Team_Won()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Team Won");

	UAthenaGameOverScreen_C_On_Team_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverScreen.AthenaGameOverScreen_C.ExecuteUbergraph_AthenaGameOverScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverScreen_C::ExecuteUbergraph_AthenaGameOverScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverScreen.AthenaGameOverScreen_C.ExecuteUbergraph_AthenaGameOverScreen");

	UAthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
