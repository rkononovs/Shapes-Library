#include "Circle.h"

Circle::Circle()
{
	iRadiusX = 50;
	iRadiusY = iRadiusX;
	centre = sf::Vector2f(750, 500);

	shapesArr.setPrimitiveType(sf::LinesStrip);
	shapesArr.resize(iSize);
}

Circle::Circle(sf::Vector2f middle, float radius)
{
	iRadiusX = radius;
	iRadiusY = iRadiusX;
	centre = middle;

	shapesArr.setPrimitiveType(sf::LinesStrip);
	shapesArr.resize(iSize);
}

Circle::~Circle()
{
}

void Circle::makeCircle()
{
	for (int i = 0; i < iSize; i++) {
		float x = centre.x + std::cos(fTheta) * iRadiusX;
		float y = centre.y + std::sin(fTheta) * iRadiusY;
		shapesArr[i] = sf::Vector2f(x, y);
		fTheta += fThetaIncrement;
	}
	shapesArr[iSize - 1] = shapesArr[0];
}
