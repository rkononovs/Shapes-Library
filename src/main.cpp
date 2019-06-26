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

#include "SFML/Graphics.hpp"
#include "circle.h"

int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	//// Instaniate any classes here
	//sf::VertexArray triangle(sf::Triangles, 3);

	//// define the position of the triangle's points
	//triangle[0].position = sf::Vector2f(10, 10);
	//triangle[1].position = sf::Vector2f(100, 10);
	//triangle[2].position = sf::Vector2f(100, 100);

	//// define the color of the triangle's points
	//triangle[0].color = sf::Color::Red;
	//triangle[1].color = sf::Color::Blue;
	//triangle[2].color = sf::Color::Green;

	//sf::VertexArray rectang(sf::Quads, 4);

	//// define the position of the quad's points
	//rectang[0].position = sf::Vector2f(10, 10);
	//rectang[1].position = sf::Vector2f(100, 10);
	//rectang[2].position = sf::Vector2f(100, 100);
	//rectang[3].position = sf::Vector2f(10, 100);
	//// define the color of the triangle's points



	//sf::VertexArray circ(sf::LineStrip, 30);  
	//int i_angleIncrement = 360 / 30;
	//int i_theta = 0;
	//int i_xC = 100;
	//int i_yC = 100;
	//int i_r = 50;

	//for (int i = 0; i < 30; i++) {
	//	// x' = x+ cos(theta)*r ;
	//	//y' = y+ sin(theta)*r ;
	//	circ[i].position = sf::Vector2f((i_xC+std::cos(i_theta)*i_r),(i_yC + std::sin(i_theta)*i_r));
	//	i_theta += i_angleIncrement;
	//}



	
	//sf::VertexArray elip(sf::LineStrip, 60);  // for elipse, just change ry (different to rx)
	//int i_angleIncrement = 360 / 60;
	//int i_theta = 0;
	//int i_xC = 100;
	//int i_yC = 100;
	//int i_rX = 50;
	//int i_rY = 30;

	//for (int i = 0; i < 60; i++) {

	//	elip[i].position = sf::Vector2f((i_xC + std::cos(i_theta)*i_rX), (i_yC + std::sin(i_theta)*i_rY));
	//	i_theta += i_angleIncrement;
	//}

	//sf::VertexArray arc(sf::LineStrip, 10);
	//int i_angleIncrement = 360 / 60;
	//int i_theta = 0;
	//int i_maxTheta = 60;
	//int i_xC = 100;
	//int i_yC = 100;
	//int i_rX = 50;
	//int i_rY = 30;
	//int n = 0;

	//do {
	//	elip[n].position = sf::Vector2f((i_xC + std::cos(i_theta)*i_rX), (i_yC + std::sin(i_theta)*i_rY));
	//	i_theta += i_angleIncrement;
	//	n++;
	//
	//} while (i_theta < i_maxTheta);


	// circle class
	Circle c(100, 100, 50,60);

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

		// Do your drawing here
		window.draw(c);

		window.display();
	}
}
