#pragma once
#include "SDK.hpp"

// I'm not even using it but added it anyways
	
class Pattern
{
public:
	static uintptr_t Find(std::string pattern)
	{
		MODULEINFO info{ 0 };
		HMODULE module = GetModuleHandle(0);
		GetModuleInformation(GetCurrentProcess(), GetModuleHandle(0), &info, sizeof(info));

		uintptr_t imagebase = reinterpret_cast<uintptr_t>(GetModuleHandle(0));
		DWORD imageSize = info.SizeOfImage;
		uintptr_t maxSize = imagebase + imageSize;

		std::string mask = CreateMask(pattern);

		std::vector<uint8_t> byteVector = ToByteArray(pattern);

		uintptr_t pos = 0;
		uintptr_t vecPos = 0;

		for (uintptr_t addr = imagebase; addr <= maxSize; ++addr)
		{
			if (*reinterpret_cast<uint8_t*>(addr) == byteVector[vecPos] || mask[pos] == '?')
			{
				if (mask[pos] != '?')
				{

					if (pos == (mask.size() - 1))
					{
						return addr - (mask.size() - 1);
					}
					else
					{
						pos++;
						vecPos++;
					}
				}
				else if (mask[pos] == '?')
				{
					if (pos == (mask.size() - 1))
					{
						return addr - (mask.size() - 1);
					}
					else
					{
						pos++;
					}
				}
			}
			else if (addr == maxSize)
			{
				std::cout << "\n\n\n" << "Warning - Pattern not found, returned NULL" << "\n\n\n";
				return NULL;
			}
			else
			{
				pos = 0;
				vecPos = 0;
			}
		}
	}



private:

	static std::string CreateMask(std::string pattern)
	{
		std::string mask;

		for (int i = 1; i < pattern.length(); i += 3)
		{
			if (pattern[i] != '?')
			{
				mask.append("x");
			}
			else
			{
				mask.append("?");
			}
		}
		return mask;
	}


	static uint8_t CharToHexNumber(char toConvert)
	{
		if (toConvert == '0') { return 0x0; }
		if (toConvert == '1') { return 0x1; }
		if (toConvert == '2') { return 0x2; }
		if (toConvert == '3') { return 0x3; }
		if (toConvert == '4') { return 0x4; }
		if (toConvert == '5') { return 0x5; }
		if (toConvert == '6') { return 0x6; }
		if (toConvert == '7') { return 0x7; }
		if (toConvert == '8') { return 0x8; }
		if (toConvert == '9') { return 0x9; }
		if (toConvert == 'A') { return 0xA; }
		if (toConvert == 'B') { return 0xB; }
		if (toConvert == 'C') { return 0xC; }
		if (toConvert == 'D') { return 0xD; }
		if (toConvert == 'E') { return 0xE; }
		if (toConvert == 'F') { return 0xF; }
	}


	static std::vector<uint8_t> ToByteArray(std::string pattern)
	{
		std::vector<uint8_t> cacheVector;
		std::vector<uint8_t> hexVector;

		for (int i = 1; i < pattern.length(); i += 3)
		{
			if (pattern[i - 1] != '?')
			{
				cacheVector.push_back(CharToHexNumber(pattern[i - 1]));
				cacheVector.push_back(CharToHexNumber(pattern[i]));
			}
		}

		for (int i = 1; i < cacheVector.size(); i += 2)
		{
			uint8_t hexValue = cacheVector[i - 1] * 16 + cacheVector[i];
			hexVector.push_back(hexValue);
		}
		return hexVector;
	}
};