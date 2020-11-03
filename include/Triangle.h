#pragma once
#include "Shape.h"
class Triangle : public Shape
{
public:
	Triangle(); //!< Default constructor
	Triangle(sf::Vector2f xy1, sf::Vector2f xy2, sf::Vector2f xy3); //!< Constructor initialising the position
	~Triangle(); //!< Default destructor

	void makeTriangle(); //!< Function that makes triangle
private:
	sf::Vector2f pos1, pos2, pos3; //!< Variable that stores position
};