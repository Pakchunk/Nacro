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

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set Reviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Reviving                    (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberDBNOState_C::Set_Reviving(bool Is_Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set Reviving");

	UAthenaTeamMemberDBNOState_C_Set_Reviving_Params params;
	params.Is_Reviving = Is_Reviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set DBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_DBNO                        (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberDBNOState_C::Set_DBNO(bool Is_DBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set DBNO");

	UAthenaTeamMemberDBNOState_C_Set_DBNO_Params params;
	params.Is_DBNO = Is_DBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberDBNOState_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.PreConstruct");

	UAthenaTeamMemberDBNOState_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.ExecuteUbergraph_AthenaTeamMemberDBNOState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberDBNOState_C::ExecuteUbergraph_AthenaTeamMemberDBNOState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.ExecuteUbergraph_AthenaTeamMemberDBNOState");

	UAthenaTeamMemberDBNOState_C_ExecuteUbergraph_AthenaTeamMemberDBNOState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
