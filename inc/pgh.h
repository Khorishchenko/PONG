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
#include <algorithm>

#ifdef SFML_SYSTEM_IOS
#include <SFML/Main.hpp>
#endif

using namespace sf;

bool Start(sf::RenderWindow &window);
int  Menu(sf::RenderWindow &window);
void Games(sf::RenderWindow &window);
bool Info(sf::RenderWindow &window);


static int windowWidth = 1000;
static int windowHeight = 700;


class GameObject
{
protected:
    Vector2f position;
    float speed;
    RenderWindow& m_window;
public:
    GameObject(float startX, float startY, RenderWindow& window);
    virtual void Draw() = 0;
    virtual void Update() = 0;
};

class Paddle : public GameObject
{
private:
    RectangleShape paddleShape;
    const int shapeWidth = 10;
    const int shapeHeight = 50;
public:
    Paddle(float startX, float startY, RenderWindow& window);
    FloatRect getPosition();
    RectangleShape getShape();
    void moveUp();
    void moveDown();
    void HandleInput1(char &keyOne, char &keyTwo);
    void HandleInput2(char &keyThree, char &keyFour);
    void Update() override;
    void Draw() override;
};

class Ball : public GameObject
{
private:
    CircleShape ballShape;
    const float radius = 10.0f;
public:
    float ballAngle = 0.0f;
    const float pi = 3.14159f;
public:
    Ball(float startX, float startY, RenderWindow& window);
    FloatRect getPosition();
    CircleShape getShape();
    float getRadius();
    void reboundTop();
    void reboundBottom();
    void reboundBat();
    void Update() override;
    void Draw() override;
};

class Game
{
private:
    std::unique_ptr<Paddle> player1;
    std::unique_ptr<Paddle> player2;
    std::unique_ptr<Ball> ball;
    Font font;
    Text pause;
    Text gameOver;
    Text restart;
    bool isPaused;
    bool isGameOver;
    bool isRestart;
public:
    RenderWindow& m_window;
    const unsigned int m_windowWidth;
    const unsigned int m_windowHeight;
public:
    Game(RenderWindow& window, const unsigned int& windowWidth, const unsigned int& windowHeight);
    RenderWindow& GetWindow();
    void RestartGame();
    void HandleCollision();
    void HandleInput(char &keyOne, char &keyTwo, char &keyThree, char &keyFour);
    void Update();
    void Draw();
    void Run();
};

#endif