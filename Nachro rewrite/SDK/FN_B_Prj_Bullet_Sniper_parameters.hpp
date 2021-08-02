#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.UserConstructionScript
struct AB_Prj_Bullet_Sniper_C_UserConstructionScript_Params
{
};

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnTouched
struct AB_Prj_Bullet_Sniper_C_OnTouched_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bIsOverlap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ReceiveTick
struct AB_Prj_Bullet_Sniper_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ReceiveBeginPlay
struct AB_Prj_Bullet_Sniper_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ExecuteUbergraph_B_Prj_Bullet_Sniper
struct AB_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
