#include <direct.h>
#include "stdafx.h"

#include "util.h"

std::wstring getCurrentDirectory()
{
	wchar_t *buffer;
	// Get the current working directory:
	if ((buffer = _wgetcwd(NULL, 0)) == NULL)
		perror("_getcwd error");

	std::wstring pwd(buffer);
	free(buffer);
	return pwd;

}