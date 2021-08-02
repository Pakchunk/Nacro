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

// Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.GetOwningPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  AsFort_Player_State_Athena     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaKillerPortraitWidget_C::GetOwningPlayerState(class AFortPlayerStateAthena** AsFort_Player_State_Athena)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.GetOwningPlayerState");

	UAthenaKillerPortraitWidget_C_GetOwningPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Player_State_Athena != nullptr)
		*AsFort_Player_State_Athena = params.AsFort_Player_State_Athena;
}


// Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (Parm, OutParm, ReferenceParm)

void UAthenaKillerPortraitWidget_C::Init(struct FFortPlayerDeathReport* DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.Init");

	UAthenaKillerPortraitWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathReport != nullptr)
		*DeathReport = params.DeathReport;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
