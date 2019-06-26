#include "Circle.h"

Circle::Circle()
{
}

Circle::Circle(int xIn, int yIn, int rIn) {
	i_cenX = xIn;
	i_cenY = yIn;
	i_r = rIn;
	n = 30;
	pointArr.setPrimitiveType(sf::LineStrip);
	pointArr.resize(n);
	makeCircle();
}
Circle::Circle(int xIn, int yIn, int rIn, int nIn) {
	i_cenX = xIn;
	i_cenY = yIn;
	i_r = rIn;
	n = nIn;
	pointArr.setPrimitiveType(sf::LineStrip);
	pointArr.resize(n);
	makeCircle();
}
void Circle::makeCircle() {
	int i_theta = 0; 
	int i_angleIncrement = 360 / n;
//	// x' = x+ cos(theta)*r ;
//	//y' = y+ sin(theta)*r ;
	for (int i = 0; i < n; i++) {
		pointArr[i].position = sf::Vector2f((i_cenX + std::cos(i_theta)*i_r), (i_cenY + std::sin(i_theta)*i_r));
		i_theta += i_angleIncrement;
	}
}

void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
		target.draw(pointArr);
}


Circle::~Circle()
{
}

