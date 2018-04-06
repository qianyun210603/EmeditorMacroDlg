#pragma once

#include <string>
#include <sstream>
#include <set>
#include "util.h"

#define INCLUDE_IN_TEXT      0b00000001
#define SEP_IN_TITLE_REGEX   0b00000010
#define PRECOMMENT_MASK      0x00007FFF
#define ADD_TITLE_LEVEL_MASK 0x00008000


std::wstring getCurrentDirectory();

template<typename T>
std::wstring stringAttacher(std::wstring base, T attachee, size_t trim = 0, std::wstring insert = L"", std::wstring suffix = L"")
{
	std::wostringstream attacher;
	attacher << base.substr(0, base.length() - trim) << insert << attachee << suffix;
	return attacher.str();
}
