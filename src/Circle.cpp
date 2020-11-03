#include "Circle.h"

Circle::Circle() : Ellipse()
{
	iSize = 60;
	iRadiusX = 50;
	iRadiusY = iRadiusX; //<! Circle has same radius along x and y axis
	centre = sf::Vector2f(750, 500);
}

Circle::Circle(sf::Vector2f middle, float radius, int n) : Ellipse() //!< Pass size to ellipse class so it can pass it to arc class so it can pass it to shape class so it can resize array
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
	for (int i = 0; i < iSize; i++) { //!< Calculate position for each point around middle
		float x = centre.x + std::cos(fTheta) * iRadiusX;
		float y = centre.y + std::sin(fTheta) * iRadiusY;
		shapesArr[i] = sf::Vector2f(x, y);
		fTheta += fThetaIncrement;
	}
	shapesArr[iSize - 1] = shapesArr[0]; //!< Connect last point with first to make full shape
}
