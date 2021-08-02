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

// Function WoodMines_Archway.WoodMines_Archway_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWoodMines_Archway_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodMines_Archway.WoodMines_Archway_C.UserConstructionScript");

	AWoodMines_Archway_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodMines_Archway.WoodMines_Archway_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWoodMines_Archway_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodMines_Archway.WoodMines_Archway_C.ReceiveBeginPlay");

	AWoodMines_Archway_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodMines_Archway.WoodMines_Archway_C.ExecuteUbergraph_WoodMines_Archway
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodMines_Archway_C::ExecuteUbergraph_WoodMines_Archway(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodMines_Archway.WoodMines_Archway_C.ExecuteUbergraph_WoodMines_Archway");

	AWoodMines_Archway_C_ExecuteUbergraph_WoodMines_Archway_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
