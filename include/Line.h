#pragma once
#include "Shape.h"
class Line : public Shape 
{
public:
	Line(); //!< Default constructor
	Line(sf::Vector2f xy1, sf::Vector2f xy2); //!< Constructor initialising the position
	~Line(); //!< Default destructor

	void makeLine(); //!< Function that makes line
private:
	sf::Vector2f pos1, pos2; //!< Variable that stores position
};