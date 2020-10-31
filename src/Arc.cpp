#include "Arc.h"

Arc::Arc()
{
	iRadiusX = 100;
	iRadiusY = 50;
	centre = sf::Vector2f(700, 300);

	shapesArr.setPrimitiveType(sf::LinesStrip);
	shapesArr.resize(iSize);
}

Arc::Arc(sf::Vector2f middle, sf::Vector2f radius)
{
	iRadiusX = radius.x;
	iRadiusY = radius.y;
	centre = middle;

	shapesArr.setPrimitiveType(sf::LinesStrip);
	shapesArr.resize(iSize);
}

Arc::~Arc()
{
}

void Arc::makeArc()
{
	//for (int i = 0; i < 60; i++) {
	//	float x = centre.x + std::cos(fTheta) * iRadiusX;
	//	float y = centre.y + std::sin(fTheta) * iRadiusY;
	//	shapesArr[i] = sf::Vector2f(x, y);
	//	fTheta += fThetaIncrement;
	//}

	do {
			float x = centre.x + std::cos(fTheta) * iRadiusX;
			float y = centre.y + std::sin(fTheta) * iRadiusY;
			shapesArr[n] = sf::Vector2f(x, y);
			fTheta += fThetaIncrement;
			n++;
	} while (fTheta < fMaxTheta);
	shapesArr[n] = shapesArr[n+1]; // TODO FIX THE ARC'- ADD THE END AND START ANGLE
}
