#pragma once
#include "Shape.h"
class Triangle : public Shape
{
public:
	Triangle();
	Triangle(sf::Vector2f xy1, sf::Vector2f xy2, sf::Vector2f xy3);
	~Triangle();

	void makeTriangle();
private:
	sf::Vector2f pos1, pos2, pos3;
};