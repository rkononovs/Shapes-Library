#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(sf::Vector2f middle, float fWidthTemp, float fHeightTemp);
	~Rectangle();

	void makeRectangle();

protected:
	float fWidth, fHeight;
	sf::Vector2f centre;
	const int iSize = 4;
};