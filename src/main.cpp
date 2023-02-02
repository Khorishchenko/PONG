#include "pgh.h"

int main(void) 
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

	initscr();

	int max_y, max_x;

	getmaxyx(stdscr, max_y, max_x);

	namegame(max_y, max_x);  //statr program
	clear();

	menu_2(max_y, max_x);
    clear();

    return 0;
}

