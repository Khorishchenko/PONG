#include "../inc/pgh.h"

Ball::Ball(double y, double x, int speed)
{
    setY(y);
    setX(x);
    setSpeed(speed);
}

double Ball::GetX() { 
    return x; 
}

double Ball::GetY() { 
    return y; 
}

int Ball::GetSpeed() { 
    return speed; 
}

void Ball::SetX(double a) {
    x = a;
}

void Ball::SetY(double a) {
    y = a;
}

void Ball::SetSpeed(int a){
    speed = a;
}
    
void Ball::DrawBall(double x, double y) {
    mvaddch(x, y, '*');
}
