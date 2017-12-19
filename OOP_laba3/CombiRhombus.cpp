#include "CombiRhombus.h"

/*CombiRhombus::CombiRhombus()
{
	fr = new FilledRhombus [2];
}
CombiRhombus::~CombiRhombus()
{
	delete fr;
}*/
void CombiRhombus::Draw(HDC hdc)
{
	fr[0].SetFrameСolor(150, 100, 50);
	RGBTRIPLE temp = fr[0].GetFrameСolor();
	// создаем перо
	HPEN hPen = CreatePen(PS_SOLID, 5, RGB(temp.rgbtRed, temp.rgbtGreen, temp.rgbtBlue));
	// и выбираем его в контекст отображения,
	// сохраняя предыдущее перо
	HPEN hOldPen = SelectPen(hdc, hPen);
	fr[0].SetFilledСolor(255, 0, 0);
	temp = fr[0].GetFilledСolor();
	// создаем кисть
	HBRUSH hBrush = CreateSolidBrush(RGB(temp.rgbtRed, temp.rgbtGreen, temp.rgbtBlue));
	// и выбираем ее в контекст отображения,
	// сохраняя предыдущую кисть
	HBRUSH hOldBrush = SelectBrush(hdc, hBrush);
	POINT ppt[4] = { { shapeXCenter - horizDiagonal / 2, shapeYCenter },{ shapeXCenter, shapeYCenter - vertDiagonal / 2 },{ shapeXCenter + horizDiagonal / 2, shapeYCenter },{ shapeXCenter, shapeYCenter + vertDiagonal / 2 } };
	Polygon(hdc, ppt, 4);
	fr[1].SetFrameСolor(255, 0, 255);
	temp = fr[1].GetFrameСolor();
	hPen = CreatePen(PS_SOLID, 5, RGB(temp.rgbtRed, temp.rgbtGreen, temp.rgbtBlue));
	hOldPen = SelectPen(hdc, hPen);
	fr[1].SetFilledСolor(0, 0, 0);
	temp = fr[1].GetFilledСolor();
	hBrush = CreateSolidBrush(RGB(temp.rgbtRed, temp.rgbtGreen, temp.rgbtBlue));
	hOldBrush = SelectBrush(hdc, hBrush);
	POINT ppt1[4] = { { shapeXCenter - horizDiagonal / 4, shapeYCenter },{ shapeXCenter, shapeYCenter - vertDiagonal / 4 },{ shapeXCenter + horizDiagonal / 4, shapeYCenter },{ shapeXCenter, shapeYCenter + vertDiagonal / 4 } };
	Polygon(hdc, ppt1, 4);
	// выбираем в контекст отображения предыдущее перо 
	SelectPen(hdc, hOldPen);
	// выбираем в контекст отображения предыдущую кисть 
	SelectBrush(hdc, hOldBrush);
	// удаляем перо
	DeletePen(hPen);
	// удаляем кисть
	DeleteBrush(hBrush);
}