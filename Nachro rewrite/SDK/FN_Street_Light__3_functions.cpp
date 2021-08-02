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

// Function Street_Light__3.Street_Light__2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStreet_Light__2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Street_Light__3.Street_Light__2_C.UserConstructionScript");

	AStreet_Light__2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Street_Light__3.Street_Light__2_C.ExecuteUbergraph_Street_Light__3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStreet_Light__2_C::ExecuteUbergraph_Street_Light__3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Street_Light__3.Street_Light__2_C.ExecuteUbergraph_Street_Light__3");

	AStreet_Light__2_C_ExecuteUbergraph_Street_Light__3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
