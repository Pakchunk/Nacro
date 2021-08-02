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

// Function BigClock_01.BigClock_01_C.UpdateTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABigClock_01_C::UpdateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigClock_01.BigClock_01_C.UpdateTime");

	ABigClock_01_C_UpdateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigClock_01.BigClock_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABigClock_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigClock_01.BigClock_01_C.UserConstructionScript");

	ABigClock_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigClock_01.BigClock_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABigClock_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigClock_01.BigClock_01_C.ReceiveBeginPlay");

	ABigClock_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigClock_01.BigClock_01_C.ExecuteUbergraph_BigClock_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABigClock_01_C::ExecuteUbergraph_BigClock_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigClock_01.BigClock_01_C.ExecuteUbergraph_BigClock_01");

	ABigClock_01_C_ExecuteUbergraph_BigClock_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
