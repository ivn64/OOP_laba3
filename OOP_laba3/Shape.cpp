#include "Shape.h"

Shape::Shape()
{
	shapeXCenter = 480;
	shapeYCenter = 240;
}
void Shape::SetShapeXCenter(int x)
{
	shapeXCenter = x;
}
void Shape::SetShapeYCenter(int y)
{
	shapeYCenter = y;
}
void Shape::MoveShapeXCenter(int moveX)
{
	shapeXCenter += moveX;
}
void Shape::MoveShapeYCenter(int moveY)
{
	shapeYCenter += moveY;
}
int Shape::GetShapeXCenter()
{
	return shapeXCenter;
}
int Shape::GetShapeYCenter()
{
	return shapeYCenter;
}