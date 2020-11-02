#include "Square.h"

Square::Square()
{
	fWidth = 100;
	fHeight = fWidth;
	centre = sf::Vector2f(500, 500);
}

Square::Square(sf::Vector2f middle, float size)
{
	fWidth = size / 2;
	fHeight = fWidth;
	centre = middle;
}

Square::~Square()
{
}

void Square::makeSquare()
{
	shapesArr[0].position = sf::Vector2f(centre.x + fWidth, centre.y + fHeight);
	shapesArr[1].position = sf::Vector2f(centre.x + fWidth, centre.y - fHeight);
	shapesArr[2].position = sf::Vector2f(centre.x - fWidth, centre.y - fHeight);
	shapesArr[3].position = sf::Vector2f(centre.x - fWidth, centre.y + fHeight);
	shapesArr[iSize - 1] = shapesArr[0];
}
