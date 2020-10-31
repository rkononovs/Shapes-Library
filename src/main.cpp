/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML winow in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
*/

#include "Dot.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"

Dot dot(500, 400);
Line line(sf::Vector2f(600, 750), sf::Vector2f(550, 600));
Triangle triangle(sf::Vector2f(150, 400), sf::Vector2f(230, 600), sf::Vector2f(350, 400));
Rectangle rectangle(sf::Vector2f(200,150), 50, 100);
Square square(sf::Vector2f(500, 150), 100);

int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	dot.makeDot();
	line.makeLine();
	triangle.makeTriangle();
	rectangle.makeRectangle();
	square.makeSquare();

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

		window.clear();

		window.draw(dot);
		window.draw(line);
		window.draw(triangle);
		window.draw(rectangle);
		window.draw(square);

		window.display();
	}
}
