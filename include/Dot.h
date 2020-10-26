#pragma once
#include "Shape.h"
class Dot : public Shape
{
public:
	Dot();
	Dot(float fpX, float fpY);
	~Dot();

	void makeDot();

	sf::Vector2f getPosition();
private:
	float fX, fY;
};