#include "Shape.h"

void Shape::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapesArr);
}
