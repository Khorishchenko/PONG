#include "../inc/pgh.h"

int main(void) 
{
	// Устанавливаем 8-й уровень сглаживания
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	// Объект, который, собственно, является главным окном приложения
	sf::RenderWindow window(sf::VideoMode(1176, 668), "PONG", sf::Style::Default, settings);
		

	// Главный цикл приложения: выполняется, пока открыто окно
    while (window.isOpen())
    {
		// Обрабатываем очередь событий в цикле
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
		window.clear(sf::Color(129, 181, 221, 0));
        
		if (menu(window)) {
            bool state = menuTwo(window);
  
        }

        window.clear(sf::Color(100, 100, 100, 0));

		// Отрисовка окна
        window.display();
    }

    return 0;
}

