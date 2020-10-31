#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square();
	Square(sf::Vector2f middle, float size);
	~Square();

	void makeSquare();
};