#include "Triangle.h"

Triangle::Triangle() : Shape(4)
{
	pos1 = sf::Vector2f(100, 200);
	pos2 = sf::Vector2f(150, 230);
	pos3 = sf::Vector2f(200, 260);
}

Triangle::Triangle(sf::Vector2f xy1, sf::Vector2f xy2, sf::Vector2f xy3) : Shape(4)
{
	pos1 = xy1;
	pos2 = xy2;
	pos3 = xy3;
}

Triangle::~Triangle()
{
}

void Triangle::makeTriangle()
{
	shapesArr[0].position = pos1;
	shapesArr[1].position = pos2;
	shapesArr[2].position = pos3;
	shapesArr[iSize - 1].position = shapesArr[0].position;
}
