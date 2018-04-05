#pragma once

#include <string>
#include <sstream>
#include <set>
#include "util.h"

#define INCLUDE_IN_TEXT      0b00000001
#define SEP_IN_TITLE_REGEX   0b00000010


std::wstring getCurrentDirectory();

template<typename T>
std::wstring stringAttacher(std::wstring base, T attachee)
{
	std::wostringstream attacher;
	attacher << attachee;
	return base + attacher.str();
}
