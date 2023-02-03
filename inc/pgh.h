#ifndef PGH_H
#define PGH_H

#include <iostream>
#include <cstring>
#include <ncurses.h>
#include <time.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <pthread.h>
#include <curses.h>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <sstream>

#ifdef SFML_SYSTEM_IOS
#include <SFML/Main.hpp>
#endif

int Start(sf::RenderWindow &window);
bool Menu(sf::RenderWindow &window);
bool MenuTwo(sf::RenderWindow &window);

class Player;
class Ball;

#endif