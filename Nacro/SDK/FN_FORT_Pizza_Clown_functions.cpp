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

// Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFORT_Pizza_Clown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.UserConstructionScript");

	AFORT_Pizza_Clown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.Clown Spinner
// (BlueprintCallable, BlueprintEvent)

void AFORT_Pizza_Clown_C::Clown_Spinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.Clown Spinner");

	AFORT_Pizza_Clown_C_Clown_Spinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFORT_Pizza_Clown_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.ReceiveBeginPlay");

	AFORT_Pizza_Clown_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.ExecuteUbergraph_FORT_Pizza_Clown
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFORT_Pizza_Clown_C::ExecuteUbergraph_FORT_Pizza_Clown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.ExecuteUbergraph_FORT_Pizza_Clown");

	AFORT_Pizza_Clown_C_ExecuteUbergraph_FORT_Pizza_Clown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
