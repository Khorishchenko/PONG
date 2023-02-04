#include "../inc/pgh.h"

Paddle::Paddle(float startX, float startY, RenderWindow& window) : GameObject(startX, startY, window)
{
    paddleShape.setSize(sf::Vector2f(shapeWidth, shapeHeight));
    paddleShape.setPosition(position);
}

FloatRect Paddle::getPosition()
{
    return paddleShape.getGlobalBounds();
}

RectangleShape Paddle::getShape()
{
    return paddleShape;
}

void Paddle::moveUp()
{
    position.y -= speed;
}

void Paddle::moveDown()
{
    position.y += speed;
}

void Paddle::HandleInput1()
{
    if (Keyboard::isKeyPressed(Keyboard::W) && (paddleShape.getPosition().y - paddleShape.getSize().y / 2 > -20.0f))
    {
        paddleShape.move(0.f, -speed);
    }
    else if (Keyboard::isKeyPressed(Keyboard::S) && (paddleShape.getPosition().y + paddleShape.getSize().y / 2 < m_window.getSize().y - 35.f))
    {
        paddleShape.move(0.f, speed);
    }
}

void Paddle::HandleInput2()
{
    if (Keyboard::isKeyPressed(Keyboard::Up) && (paddleShape.getPosition().y - paddleShape.getSize().y / 2 > -20.0f))
    {
        paddleShape.move(0.f, -speed);
    }
    else if (Keyboard::isKeyPressed(Keyboard::Down) && (paddleShape.getPosition().y + paddleShape.getSize().y / 2 < m_window.getSize().y - 35.f))
    {
        paddleShape.move(0.f, speed);
    }
}

void Paddle::Update()
{
    
}

void Paddle::Draw()
{
    m_window.draw(paddleShape);
}