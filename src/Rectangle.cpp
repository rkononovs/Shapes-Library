#include "Rectangle.h"

Rectangle::Rectangle()
{
	fWidth = 100;
	fHeight = 150;
	centre = sf::Vector2f(500, 500);

	shapesArr.setPrimitiveType(sf::Quads);
	shapesArr.resize(iSize);
}

Rectangle::Rectangle(sf::Vector2f middle, float fWidthTemp, float fHeightTemp)
{
	centre = middle;
	fWidth = fWidthTemp / 2;
	fHeight = fHeightTemp / 2;

	shapesArr.setPrimitiveType(sf::Quads);
	shapesArr.resize(iSize);
}

Rectangle::~Rectangle()
{
}

void Rectangle::makeRectangle()
{
	shapesArr[0].position = sf::Vector2f(centre.x + fWidth, centre.y + fHeight);
	shapesArr[1].position = sf::Vector2f(centre.x + fWidth, centre.y - fHeight);
	shapesArr[2].position = sf::Vector2f(centre.x - fWidth, centre.y - fHeight);
	shapesArr[3].position = sf::Vector2f(centre.x - fWidth, centre.y + fHeight);
}
