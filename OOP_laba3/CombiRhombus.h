#pragma once

#include <Windows.h>
#include <windowsx.h>

#include "FilledRhombus.h"

class CombiRhombus : public FilledRhombus
{
protected:
	FilledRhombus fr[2];
public:
	void Draw(HDC);
};