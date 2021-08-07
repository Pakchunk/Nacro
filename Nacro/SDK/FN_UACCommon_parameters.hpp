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

// Function UACCommon.UACNetComponent.SendPacketToServer
struct UUACNetComponent_SendPacketToServer_Params
{
	EUACPacketType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function UACCommon.UACNetComponent.SendPacketToClient
struct UUACNetComponent_SendPacketToClient_Params
{
	EUACPacketType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function UACCommon.UACNetComponent.SendClientHello
struct UUACNetComponent_SendClientHello_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
