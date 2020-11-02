#include "Dot.h"

Dot::Dot() : Shape(1)
{
	position = sf::Vector2f(400, 400);

	shapesArr.setPrimitiveType(sf::Points);
}

Dot::Dot(float fpX, float fpY) : Shape(1)
{
	position = sf::Vector2f(fpX, fpY);

	shapesArr.setPrimitiveType(sf::Points);
}

Dot::~Dot()
{
}

void Dot::makeDot()
{
	shapesArr[0].position = position;
}