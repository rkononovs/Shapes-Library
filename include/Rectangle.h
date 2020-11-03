#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(); //!< Default constructor
	Rectangle(sf::Vector2f middle, float fWidthTemp, float fHeightTemp); //!< Constructor initialising the position and size
	~Rectangle(); //!< Default destructor

	void makeRectangle(); //!< Function that makes rectangle
protected:
	float fWidth, fHeight; //!< Variable that stores width and height of rectangle
	sf::Vector2f centre;  //!< Variable that stores centre position
};