#ifndef BALL_H
#define BALL_H


#include "pgh.h"

class Ball {

public:
    Ball(double x, double y, int speed);

    int GetSpeed();
    double GetX();
    double GetY();
    void SetX(double);
    void SetY(double);
    void SetSpeed(int);
    void DrawBall(double, double);

private:
    double x, y;
    int speed;

};

#endif