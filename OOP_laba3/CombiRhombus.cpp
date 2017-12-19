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
	fr[0].SetFrame�olor(150, 100, 50);
	RGBTRIPLE temp = fr[0].GetFrame�olor();
	// ������� ����
	HPEN hPen = CreatePen(PS_SOLID, 5, RGB(temp.rgbtRed, temp.rgbtGreen, temp.rgbtBlue));
	// � �������� ��� � �������� �����������,
	// �������� ���������� ����
	HPEN hOldPen = SelectPen(hdc, hPen);
	fr[0].SetFilled�olor(255, 0, 0);
	temp = fr[0].GetFilled�olor();
	// ������� �����
	HBRUSH hBrush = CreateSolidBrush(RGB(temp.rgbtRed, temp.rgbtGreen, temp.rgbtBlue));
	// � �������� �� � �������� �����������,
	// �������� ���������� �����
	HBRUSH hOldBrush = SelectBrush(hdc, hBrush);
	POINT ppt[4] = { { shapeXCenter - horizDiagonal / 2, shapeYCenter },{ shapeXCenter, shapeYCenter - vertDiagonal / 2 },{ shapeXCenter + horizDiagonal / 2, shapeYCenter },{ shapeXCenter, shapeYCenter + vertDiagonal / 2 } };
	Polygon(hdc, ppt, 4);
	fr[1].SetFrame�olor(255, 0, 255);
	temp = fr[1].GetFrame�olor();
	hPen = CreatePen(PS_SOLID, 5, RGB(temp.rgbtRed, temp.rgbtGreen, temp.rgbtBlue));
	hOldPen = SelectPen(hdc, hPen);
	fr[1].SetFilled�olor(0, 0, 0);
	temp = fr[1].GetFilled�olor();
	hBrush = CreateSolidBrush(RGB(temp.rgbtRed, temp.rgbtGreen, temp.rgbtBlue));
	hOldBrush = SelectBrush(hdc, hBrush);
	POINT ppt1[4] = { { shapeXCenter - horizDiagonal / 4, shapeYCenter },{ shapeXCenter, shapeYCenter - vertDiagonal / 4 },{ shapeXCenter + horizDiagonal / 4, shapeYCenter },{ shapeXCenter, shapeYCenter + vertDiagonal / 4 } };
	Polygon(hdc, ppt1, 4);
	// �������� � �������� ����������� ���������� ���� 
	SelectPen(hdc, hOldPen);
	// �������� � �������� ����������� ���������� ����� 
	SelectBrush(hdc, hOldBrush);
	// ������� ����
	DeletePen(hPen);
	// ������� �����
	DeleteBrush(hBrush);
}