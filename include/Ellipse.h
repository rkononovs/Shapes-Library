#pragma once
#include "Arc.h"
class Ellipse : public Arc //!< Ellipse inherits from arc
{
public:
	Ellipse(); //!< Default constructor
	Ellipse(sf::Vector2f middle, sf::Vector2f radius, int n); //!< Constructor initialising the position and size as well as resolution
	~Ellipse(); //!< Default destructor

	void makeEllipse(); //!< Function that makes ellipse
};