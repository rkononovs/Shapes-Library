#pragma once
#include "Arc.h"
class Ellipse : public Arc
{
public:
	Ellipse();
	Ellipse(sf::Vector2f middle, sf::Vector2f radius, int n);
	~Ellipse();

	void makeEllipse();
};