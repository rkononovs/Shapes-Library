#include "Rectangle.h"

Rectangle::Rectangle() : Shape(5)
{
	fWidth = 100;
	fHeight = 150;
	centre = sf::Vector2f(500, 500);
}

Rectangle::Rectangle(sf::Vector2f middle, float fWidthTemp, float fHeightTemp) : Shape(5)
{
	centre = middle;
	fWidth = fWidthTemp / 2;
	fHeight = fHeightTemp / 2;
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
	shapesArr[iSize - 1] = shapesArr[0];
}
