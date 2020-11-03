#pragma once
#include "Shape.h"
class Arc : public Shape
{
public:
	Arc(); //!< Default constructor
	Arc(sf::Vector2f middle, sf::Vector2f radius, float maxAngle, int n); //!< Constructor initialising the position and size as well as resolution and cut off angle
	~Arc(); //!< Default destructor

	void makeArc(); //!< Function that makes arc

protected:
	sf::Vector2f centre; //!< Variable that stores position
	int iRadiusX, iRadiusY; //!< Variable that stores x and y radius
	float fTheta = 0.f; //!< Variable that stores theta angle
	float fMaxTheta; //!< Variable that stores maximum theta angle
	float fThetaIncrement = 2 * pi / iSize; //!< Variable that stores and calculates theta angle increment
};