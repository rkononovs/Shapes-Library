#include "Dot.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Arc.h"
#include "Ellipse.h"
#include "Circle.h"


//! Instantiation of the shape objects using their constructor values.
Dot dot(500, 400);
Line line(sf::Vector2f(600, 750), sf::Vector2f(550, 600));
Triangle triangle(sf::Vector2f(150, 400), sf::Vector2f(230, 600), sf::Vector2f(350, 400));
Rectangle rectangle(sf::Vector2f(200,150), 50, 100);
Square square(sf::Vector2f(500, 150), 100);
Arc arc(sf::Vector2f(800, 50), sf::Vector2f(100,150), 180.f, 80);
Ellipse ellipse(sf::Vector2f(500, 400), sf::Vector2f(50, 75), 60);
Circle circle(sf::Vector2f(800, 400), 100, 60);


int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Shapes Library");
	window.setFramerateLimit(60);

	//! Creation of the shapes
	dot.makeDot();
	line.makeLine();
	triangle.makeTriangle();
	rectangle.makeRectangle();
	square.makeSquare();
	arc.makeArc();
	ellipse.makeEllipse();
	circle.makeCircle();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		//! Comands to transform square or any other shape
		if (event.type == sf::Event::KeyPressed)
		{
			switch (event.key.code)
			{
			case(sf::Keyboard::Left):
			{
				square.Rotate(-3);
				break;
			}
			case(sf::Keyboard::Right):
			{
				square.Rotate(3);
				break;
			}
			case(sf::Keyboard::Down):
			{
				square.Translate(0, 5);
				break;
			}
			case(sf::Keyboard::Up):
			{
				square.Translate(0, -5);
				break;
			}
			case(sf::Keyboard::Space): // # I need to press Left ALT + SPACE to make it work, dunno why #
			{
				square.Scale(1.05);
				break;
			}
			case(sf::Keyboard::LShift):
			{
				square.Scale(0.95);
				break;
			}
			default:
				break;
			}
		}

		window.clear();

		//! Drawing of shapes
		window.draw(dot);
		window.draw(line);
		window.draw(triangle);
		window.draw(rectangle);
		window.draw(square);
		window.draw(arc);
		window.draw(ellipse);
		window.draw(circle);

		window.display();
	}
}
