#ifndef SHELL_TOOLS
#define SHELL_TOOLS
#include "ncdialogs.h"
#include "vfs.h"

std::vector<unicode_t> ShellTabKey( NCDialogParent* par, clPtr<FS> fs, FSPath& path, const unicode_t* s, int* cursor ); //����� ������� 0 ���� ������ �� �������

#endif
