#pragma once
#include "Ellipse.h"
class Circle : public Ellipse
{
public:
	Circle();
	Circle(sf::Vector2f middle, float radius);
	~Circle();

	void makeCircle();
};