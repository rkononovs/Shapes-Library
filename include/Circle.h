#pragma once
#include "Ellipse.h"
class Circle : public Ellipse //!< Circle inherits from ellipse
{
public:
	Circle(); //!< Default constructor
	Circle(sf::Vector2f middle, float radius, int n); //!< Constructor initialising the position and size as well as resolution
	~Circle(); //!< Default destructor

	void makeCircle(); //!< Function that makes ellipse
};