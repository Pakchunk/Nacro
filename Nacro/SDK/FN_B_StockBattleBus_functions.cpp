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

// Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_StockBattleBus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript");

	AB_StockBattleBus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_StockBattleBus_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay");

	AB_StockBattleBus_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_StockBattleBus.B_StockBattleBus_C.Start Audio
// (BlueprintCallable, BlueprintEvent)

void AB_StockBattleBus_C::Start_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.Start Audio");

	AB_StockBattleBus_C_Start_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_StockBattleBus_C::ExecuteUbergraph_B_StockBattleBus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus");

	AB_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
