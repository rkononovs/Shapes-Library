#pragma once
#include "Shape.h"
class Arc : public Shape
{
public:
	Arc();
	Arc(sf::Vector2f middle, sf::Vector2f radius, float maxAngle);
	~Arc();

	void makeArc();

protected:
	sf::Vector2f centre;
	int iRadiusX, iRadiusY;
	float fTheta = 0.f;
	float fMaxTheta;
	const int iSize = 60;
	float fThetaIncrement = 2 * pi / iSize;
};