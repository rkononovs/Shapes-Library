#include "Line.h"

Line::Line()
{
	pos1 = sf::Vector2f(100, 200);
	pos2 = sf::Vector2f(200, 100);

	shapesArr.setPrimitiveType(sf::LinesStrip);
	shapesArr.resize(iSize);
}

Line::Line(sf::Vector2f xy1, sf::Vector2f xy2)
{
	pos1 = xy1;
	pos2 = xy2;

	shapesArr.setPrimitiveType(sf::LinesStrip);
	shapesArr.resize(iSize);
}

Line::~Line()
{
}

void Line::makeLine()
{
	shapesArr[0].position = pos1;
	shapesArr[1].position = pos2;
}
