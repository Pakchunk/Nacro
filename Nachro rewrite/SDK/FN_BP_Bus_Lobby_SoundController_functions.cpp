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

// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bus_Lobby_SoundController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.UserConstructionScript");

	ABP_Bus_Lobby_SoundController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Bus_Lobby_SoundController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ReceiveBeginPlay");

	ABP_Bus_Lobby_SoundController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bus_Lobby_SoundController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ReceiveTick");

	ABP_Bus_Lobby_SoundController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.On Game Phase Step Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep           GamePhaseStep                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bus_Lobby_SoundController_C::On_Game_Phase_Step_Changed(EAthenaGamePhaseStep GamePhaseStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.On Game Phase Step Changed");

	ABP_Bus_Lobby_SoundController_C_On_Game_Phase_Step_Changed_Params params;
	params.GamePhaseStep = GamePhaseStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ExecuteUbergraph_BP_Bus_Lobby_SoundController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bus_Lobby_SoundController_C::ExecuteUbergraph_BP_Bus_Lobby_SoundController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bus_Lobby_SoundController.BP_Bus_Lobby_SoundController_C.ExecuteUbergraph_BP_Bus_Lobby_SoundController");

	ABP_Bus_Lobby_SoundController_C_ExecuteUbergraph_BP_Bus_Lobby_SoundController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
