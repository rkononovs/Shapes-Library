#include "Triangle.h"

Triangle::Triangle()
{
	pos1 = sf::Vector2f(100, 200);
	pos2 = sf::Vector2f(150, 230);
	pos3 = sf::Vector2f(200, 260);

	shapesArr.setPrimitiveType(sf::Triangles);
	shapesArr.resize(iSize);
}

Triangle::Triangle(sf::Vector2f xy1, sf::Vector2f xy2, sf::Vector2f xy3)
{
	pos1 = xy1;
	pos2 = xy2;
	pos3 = xy3;

	shapesArr.setPrimitiveType(sf::Triangles);
	shapesArr.resize(iSize);
}

Triangle::~Triangle()
{
}

void Triangle::makeTriangle()
{
	shapesArr[0].position = pos1;
	shapesArr[1].position = pos2;
	shapesArr[2].position = pos3;
}
