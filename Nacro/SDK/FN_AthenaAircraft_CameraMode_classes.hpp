#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AthenaAircraft_CameraMode.AthenaAircraft_CameraMode_C
// 0x0000 (0x0120 - 0x0120)
class UAthenaAircraft_CameraMode_C : public UFortCameraMode_AthenaAircraft
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaAircraft_CameraMode.AthenaAircraft_CameraMode_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
