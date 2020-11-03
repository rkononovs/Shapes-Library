#include "Shape.h"

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

void Shape::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapesArr, transform);
}

void Shape::Translate(float x, float y)
{
	for (int i = 0; i < shapesArr.getVertexCount(); i++) 
	{
		shapesArr[i].position.x += x;
		shapesArr[i].position.y += y;
	}

}

void Shape::Rotate(float angle)
{
	transform.rotate(angle, shapesArr[0].position);
	state.transform = transform;

}

void Shape::Scale(float scale)
{
	transform.scale(sf::Vector2f(scale, scale), shapesArr[0].position);
	state.transform = transform;
}
