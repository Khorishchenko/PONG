#include "../inc/pgh.h"

void Games(sf::RenderWindow &window) 
{
    std::unique_ptr<Game> game = std::make_unique<Game>(window, windowWidth, windowHeight); game->Run(); 
}