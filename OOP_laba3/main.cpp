#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include <windows.h>
#include <windowsx.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

#include "Rhombus.h"
#include "Shape.h"
#include "Filled.h"
#include "FilledRhombus.h"
#include "CombiRhombus.h"

void main()
{
	setlocale(LC_ALL, "rus");
	// получаем идентификатор окна
	HWND hwnd = GetConsoleWindow();
	// получаем контекст отображения
	HDC hdc = GetDC(hwnd);
	Rhombus romb;
	FilledRhombus fr;
	CombiRhombus cr;
	Shape *figura;
	//figura = &romb;
	//figura = &fr;
	figura = &cr;
	//cr.SetInHorizDiagonal(50);
	cr.SetHorizDiagonal(150);
	figura->Draw(hdc);
	cin.get();
	// освобождаем контекст отображения
	ReleaseDC (hwnd, hdc);
}