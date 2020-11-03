#include "Dot.h"

Dot::Dot() : Shape(1)
{
	position = sf::Vector2f(400, 400);

	shapesArr.setPrimitiveType(sf::Points); //!< Sets point-style type how to draw
}

Dot::Dot(float fpX, float fpY) : Shape(1) //!< Pass size to shape class so it can resize array
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