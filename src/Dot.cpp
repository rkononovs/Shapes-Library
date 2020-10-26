#include "Dot.h"

Dot::Dot()
{
	position = sf::Vector2f(400, 400);

	shapesArr.setPrimitiveType(sf::Points);
	shapesArr.resize(1);
}

Dot::Dot(float fpX, float fpY)
{
	position = sf::Vector2f(fpX, fpY);

	shapesArr.setPrimitiveType(sf::Points);
	shapesArr.resize(1);
}

Dot::~Dot()
{
}

void Dot::makeDot()
{
	shapesArr[0].position = position;
}