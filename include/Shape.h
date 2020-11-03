#pragma once
#include "SFML/Graphics.hpp"
class Shape : public sf::Drawable
{
public:
	Shape(); //!< Default constructor
	Shape(int points); //!< Constructor initialising the points drawn
	~Shape(); //!< Default destructor

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const; //!< The main drawn method

	void Translate(float x, float y); //!< Method that translates shape
	void Rotate(float angle); //!< Method that rotates shape
	void Scale(float scale); //!< Method that scales shape

protected:
	sf::VertexArray shapesArr; //!< Vertex array that stores points for the shapes
	sf::RenderStates state; //!< Render state that updates shape during transformations
	sf::Transform transform; //!< Transform that transforms shapes

	int iSize; //!< Variable that stores how much points should be drawn

	const float pi = 3.141f; //!< Constant Pi variable for calculations
};