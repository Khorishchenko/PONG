#ifndef PGH_H
#define PGH_H

#include <iostream>
#include <cstring>
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

using namespace sf;

int Start(sf::RenderWindow &window);
bool Menu(sf::RenderWindow &window);
void Game(sf::RenderWindow &window);


static int windowWidth = 1000;
static int windowHeight = 700;
static int batscore = 0;
static int lives = -1;
static int aibatcounter = 0;


class Bat 
{
public:
    Bat(double x, double y);
    Vector2f getBatPosition();
    RectangleShape getBatObject();
    FloatRect getBatFloatRect();
    void moveBatLeft();
    void moveBatRight();
    void update();

private:
    Vector2f batPosition;
    double batSpeed = 0.85f;
    RectangleShape BatObject;
};

class AIBat 
{
public:
    AIBat(double x, double y);

    Vector2f getAIBatPosition();
    RectangleShape getAIBatObject();
    FloatRect getAIBatFloatRect();
    void moveAIBatLeft();
    void moveAIBatRight();
    void update();
    void Rebound();
    void AIBatSpeedReverse();

private:
    Vector2f aiBatPosition;
    double aiBatSpeed = 24;
    RectangleShape aiBatObject;
};



class Ball 
{
public:
    Ball(double x, double y);

    Vector2f getBallPosition;
    FloatRect getBallFloatRect();
    RectangleShape getBallObject();
    void reboundSides();
    void passTop();
    void passBottom();
    void intersectBat();
    void intersectAIBat();
    void reboundBatorAI();
    void update();
    void stop();
    void go();

    double ballVelocityX = 0.5f;
    double ballVelocityY = 0.5f;

private:
    RectangleShape BallObject;
    Vector2f ballPosition;
};

#endif