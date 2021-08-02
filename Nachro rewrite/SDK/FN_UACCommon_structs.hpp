#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UACCommon.UACPacketType
enum class EUACPacketType : uint8_t
{
	TestString                     = 0,
	BattlEye                       = 1,
	UACPacketType_MAX              = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
