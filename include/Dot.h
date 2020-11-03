#pragma once
#include "Shape.h"
class Dot : public Shape
{
public:
	Dot(); //!< Default constructor
	Dot(float fpX, float fpY); //!< Constructor initialising the position
	~Dot(); //!< Default destructor

	void makeDot(); //!< Function that makes dot
private:
	sf::Vector2f position; //!< Variable that stores position
};