#pragma once
#include "Shape.h"
class Arc : public Shape
{
public:
	Arc();
	Arc(sf::Vector2f middle, sf::Vector2f radius);
	~Arc();

	void makeArc();

protected:
	sf::Vector2f centre;
	int iRadiusX, iRadiusY;
	float fTheta = 0.f;
	float fMaxTheta = 180 * pi / 180;
	const int iSize = 60;
	float fThetaIncrement = 2 * pi / iSize;
	float n = 0;
};