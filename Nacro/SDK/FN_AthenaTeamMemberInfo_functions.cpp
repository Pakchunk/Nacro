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

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewTalking                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetTalking(bool NewTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking");

	UAthenaTeamMemberInfo_C_SetTalking_Params params;
	params.NewTalking = NewTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdateMicIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon");

	UAthenaTeamMemberInfo_C_UpdateMicIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewMuted                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetMuted(bool NewMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted");

	UAthenaTeamMemberInfo_C_SetMuted_Params params;
	params.NewMuted = NewMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowPlayerInfo
// (Protected, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::ShowPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowPlayerInfo");

	UAthenaTeamMemberInfo_C_ShowPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowConnecting
// (Protected, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::ShowConnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowConnecting");

	UAthenaTeamMemberInfo_C_ShowConnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reviving                       (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving");

	UAthenaTeamMemberInfo_C_SetReviving_Params params;
	params.Reviving = Reviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdatePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePlayerName");

	UAthenaTeamMemberInfo_C_UpdatePlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DBNO                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO");

	UAthenaTeamMemberInfo_C_SetDBNO_Params params;
	params.DBNO = DBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dead                           (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDead(bool Dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead");

	UAthenaTeamMemberInfo_C_SetDead_Params params;
	params.Dead = Dead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::UpdatePS(class AFortPlayerStateAthena* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePS");

	UAthenaTeamMemberInfo_C_UpdatePS_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetShield(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield");

	UAthenaTeamMemberInfo_C_SetShield_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetHealth(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth");

	UAthenaTeamMemberInfo_C_SetHealth_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct");

	UAthenaTeamMemberInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo");

	UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
