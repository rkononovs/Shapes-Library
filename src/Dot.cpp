#include "Dot.h"

Dot::Dot()
{
	fX = 400;
	fY = 400;
}

Dot::Dot(float fpX, float fpY)
{
	fX = fpX;
	fY = fpY;

	shapesArr.setPrimitiveType(sf::Points);
	shapesArr.resize(1);
}

Dot::~Dot()
{
}

void Dot::makeDot()
{
	shapesArr[0].position = getPosition();
}

sf::Vector2f Dot::getPosition()
{
	return sf::Vector2f(fX, fY);
}
