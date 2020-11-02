#include "Ellipse.h"

Ellipse::Ellipse()
{
	iRadiusX = 50;
	iRadiusY = 25;
	centre = sf::Vector2f(750, 400);
}

Ellipse::Ellipse(sf::Vector2f middle, sf::Vector2f radius, int n)
{
	iSize = n;
	iRadiusX = radius.x;
	iRadiusY = radius.y;
	centre = middle;
}

Ellipse::~Ellipse()
{
}

void Ellipse::makeEllipse()
{
	for (int i = 0; i < iSize; i++) {
		float x = centre.x + std::cos(fTheta) * iRadiusX;
		float y = centre.y + std::sin(fTheta) * iRadiusY;
		shapesArr[i] = sf::Vector2f(x, y);
		fTheta += fThetaIncrement;
	}
	shapesArr[iSize - 1] = shapesArr[0];
}
