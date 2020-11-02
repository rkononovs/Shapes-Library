#include "Shape.h"

void Shape::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapesArr);
}

Shape::Shape()
{
	iSize = 1;
	shapesArr.resize(iSize);
	shapesArr.setPrimitiveType(sf::LineStrip);
}

Shape::Shape(int points) 
{
	iSize = points;
	shapesArr.resize(iSize);
	shapesArr.setPrimitiveType(sf::LineStrip);
}

Shape::~Shape()
{
}
