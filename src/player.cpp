#include "../inc/pgh.h"



// BAT functions

Bat::Bat (double x, double y) {
    batPosition.x = x;
    batPosition.y = y;
    BatObject.setSize(sf::Vector2f(150, 10));
    BatObject.setPosition(batPosition);
}

Vector2f Bat::getBatPosition() {
    return batPosition;
}

RectangleShape Bat::getBatObject() {
    return BatObject;
}

FloatRect Bat::getBatFloatRect() {
    return BatObject.getGlobalBounds();
}

void Bat::moveBatLeft() {
    batPosition.x -= batSpeed;
}

void Bat::moveBatRight() {
    batPosition.x += batSpeed;
}

void Bat::update() {
    BatObject.setPosition(batPosition);
}



// AIBAT functions
AIBat::AIBat (double x, double y) {
    aiBatPosition.x = x;
    aiBatPosition.y = y;
    aiBatObject.setSize(sf::Vector2f(150, 10));
    aiBatObject.setPosition(aiBatPosition);
}

RectangleShape AIBat::getAIBatObject() {
    return aiBatObject;
}

Vector2f AIBat::getAIBatPosition() {
    return aiBatPosition;
}

FloatRect AIBat::getAIBatFloatRect() {
    return aiBatObject.getGlobalBounds();
}

void AIBat::moveAIBatLeft() {
        aiBatPosition.x -= aiBatSpeed;
}

void AIBat::moveAIBatRight() {
    aiBatPosition.x += aiBatSpeed;
}

void AIBat::update() {
    aiBatObject.setPosition(aiBatPosition);
}

void AIBat::AIBatSpeedReverse () {
    aiBatSpeed *= -1;
}