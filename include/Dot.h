#pragma once
#include "Shape.h"
class Dot : public Shape
{
public:
	Dot();
	Dot(float fpX, float fpY);
	~Dot();

	void makeDot();
private:
	sf::Vector2f position;
};