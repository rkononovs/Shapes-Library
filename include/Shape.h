#pragma once
#include "SFML/Graphics.hpp"

class Shape : public sf::Drawable
{
public:
	Shape(); //!< Default constructor
	Shape(int points);
	~Shape(); //!< Default destructor

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

protected:
	sf::VertexArray shapesArr;
	sf::RenderStates state;
	int iSize;
	const float pi = 3.141;
};