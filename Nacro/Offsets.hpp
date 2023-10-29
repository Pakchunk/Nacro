#pragma once

#include <iostream>

namespace Offsets
{
	uintptr_t GEngineOffset 			=	0x674AB20;		// Global Engine*
	uintptr_t GWorldOffset				=	0x674CD00;		// Global World*
	uintptr_t GNamesOffset 				=	0x66587C8;		// Global NameArray*
	uintptr_t GUObjectArrayOffset 		=	0x6661380;		// Global ObjectArray-Class*
	uintptr_t TUObjectArrayOffset 		=	0x6661390;		// Global ObjectArray*
	uintptr_t ProcessEventOffset 		=	0x13D86E0;		// UObject::ProcessEvent()
	uintptr_t SCO_IOffset 				=	0x13DD730;		// StaticContructObject_Internal()
	uintptr_t SLO_IOffset 				=	0x13E0180;		// StaticLoadObject_Internal()
	uintptr_t SpawnActorOffset 			=	0x137DBC0;		// UWorld::SpawnActor()
	uintptr_t PlainNameStringOffset 	=	0x12F0FC0;		// FNameEntry::GetPlainNameString()
	uintptr_t CGInternalOffset			=	0x137D380;		// CollectGarbageInternal()
	uintptr_t GiveAbilityOffset			=	0x3D50A60;		// GiveAbility()
	uintptr_t GHandleOffset				=	0x50512BC;		// Global Handle
};