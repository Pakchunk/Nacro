#pragma once

#include <iostream>

// i prefer not having to write SDK:: for every single thing
namespace SDK
{
	namespace Offsets
	{
		uintptr_t GEngineOffset = 0x674AB20;
		uintptr_t GHandleOffset = 0x50512BC;
		uintptr_t GiveAbilityOffset = 0x3D50A60;
		uintptr_t CheatScriptOffset = 0x1FCE570;
		uintptr_t OnAircraftExitedDropZoneOffset = 0x3F35B0;
		uintptr_t OnPlayButtonPressedOffset = 0x2E455D0;
	};
}