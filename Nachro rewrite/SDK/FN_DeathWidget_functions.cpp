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

// Function DeathWidget.DeathWidget_C.ShowExtraLivesText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDeathWidget_C::ShowExtraLivesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.ShowExtraLivesText");

	UDeathWidget_C_ShowExtraLivesText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.SetRespawnTimerText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDeathWidget_C::SetRespawnTimerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.SetRespawnTimerText");

	UDeathWidget_C_SetRespawnTimerText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.OnRespawnTimerUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDeathWidget_C::OnRespawnTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.OnRespawnTimerUpdate");

	UDeathWidget_C_OnRespawnTimerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.ConfigureRespawnTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ServerRespawnTime              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ServerResurrectTime            (Parm, ZeroConstructor, IsPlainOldData)

void UDeathWidget_C::ConfigureRespawnTimer(float ServerRespawnTime, float ServerResurrectTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.ConfigureRespawnTimer");

	UDeathWidget_C_ConfigureRespawnTimer_Params params;
	params.ServerRespawnTime = ServerRespawnTime;
	params.ServerResurrectTime = ServerResurrectTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.OnPawnDied
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (Parm, OutParm, ReferenceParm)

void UDeathWidget_C::OnPawnDied(struct FFortPlayerDeathReport* DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.OnPawnDied");

	UDeathWidget_C_OnPawnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathReport != nullptr)
		*DeathReport = params.DeathReport;
}


// Function DeathWidget.DeathWidget_C.OnPawnSpawned
// (Public, BlueprintCallable, BlueprintEvent)

void UDeathWidget_C::OnPawnSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.OnPawnSpawned");

	UDeathWidget_C_OnPawnSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDeathWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.Construct");

	UDeathWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.ExecuteUbergraph_DeathWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeathWidget_C::ExecuteUbergraph_DeathWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.ExecuteUbergraph_DeathWidget");

	UDeathWidget_C_ExecuteUbergraph_DeathWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
