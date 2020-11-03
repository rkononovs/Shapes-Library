#include "Line.h"

Line::Line() : Shape(2)
{
	pos1 = sf::Vector2f(100, 200);
	pos2 = sf::Vector2f(200, 100);
}

Line::Line(sf::Vector2f xy1, sf::Vector2f xy2) : Shape(2) //!< Pass size to shape class so it can resize array
{
	pos1 = xy1;
	pos2 = xy2;
}

Line::~Line()
{
}

void Line::makeLine()
{
	shapesArr[0].position = pos1;
	shapesArr[1].position = pos2;
}
