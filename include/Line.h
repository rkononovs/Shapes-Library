#pragma once
#include "Shape.h"
class Line : public Shape 
{
public:
	Line();
	Line(sf::Vector2f xy1, sf::Vector2f xy2);
	~Line();

	void makeLine();
private:
	sf::Vector2f pos1, pos2;
};