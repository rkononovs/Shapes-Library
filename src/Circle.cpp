#include "Circle.h"

Circle::Circle() : Ellipse()
{
	iSize = 60;
	iRadiusX = 50;
	iRadiusY = iRadiusX;
	centre = sf::Vector2f(750, 500);
}

Circle::Circle(sf::Vector2f middle, float radius, int n) : Ellipse()
{
	iSize = n;
	iRadiusX = radius;
	iRadiusY = iRadiusX;
	centre = middle;
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
