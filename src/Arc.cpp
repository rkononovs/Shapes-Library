#include "Arc.h"

Arc::Arc()
{
	iRadiusX = 100;
	iRadiusY = 50;
	centre = sf::Vector2f(700, 300);
	fMaxTheta = 90 * (pi / 180);

	shapesArr.setPrimitiveType(sf::LinesStrip);
	shapesArr.resize(iSize);
}

Arc::Arc(sf::Vector2f middle, sf::Vector2f radius, float maxAngle)
{
	iRadiusX = radius.x;
	iRadiusY = radius.y;
	centre = middle;
	fMaxTheta = maxAngle * pi / 180;

	shapesArr.setPrimitiveType(sf::LinesStrip);
	shapesArr.resize(iSize);
}

Arc::~Arc()
{
}

void Arc::makeArc()
{
	for (int i = 0; i < iSize; i++) {
		float x = centre.x + std::cos(fTheta) * iRadiusX;
		float y = centre.y + std::sin(fTheta) * iRadiusY;
		shapesArr[i] = sf::Vector2f(x, y);

		if (fTheta < fMaxTheta) {
			fTheta += fThetaIncrement;
		}
	}
}
