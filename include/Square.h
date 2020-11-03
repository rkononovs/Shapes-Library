#pragma once
#include "Rectangle.h"

class Square : public Rectangle //!< Square inherits from rectangle
{
public:
	Square();  //!< Default constructor
	Square(sf::Vector2f middle, float size); //!< Constructor initialising the position and size
	~Square(); //!< Default destructor

	void makeSquare(); //!< Function that makes square
};