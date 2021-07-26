#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SpawnTeleportPadPlayerData.SpawnTeleportPadPlayerData
// 0x0018
struct FSpawnTeleportPadPlayerData
{
	class ABP_VictoryDrone_C*                          Drone_2_1660A98D40AD087877964FA4828A361F;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn_5_A859584247B43636129EE9A40B8991F7;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BannerMID_16_47E69C5641EF29CC25F0E7BC050BF490;            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
