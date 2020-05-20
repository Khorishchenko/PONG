#ifndef PONG_H
#define PONG_H

#include <SDL2/SDL.h>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ncurses.h>
#include <time.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <pthread.h>
#include <curses.h>
using namespace std;

int info(int max_y, int max_x);
int menu(int max_y, int max_x);
int menu_2(int max_y,int max_x);
char start(int max_y, int max_x);
void pause_2(int nRezul, int nInteger);
void ddelay(int number_of_seconds);
void namegame(int max_y, int max_x);
void game(int nInteger);
void pause(int nInteger);
void logic(int nInt);
void setup();
void input(int nInteger);
void draw();

class Player {

public:
    Player(int x, int y);
    int getX() { return x; }
    int getY() { return y; }
    int getHeight() { return height; }
    void setX(int a) {
        x = a;
    }
    void setY(int a) {
        y = a;
    }
    void drawPlayer(int y, int x)
    {
        mvaddch(y + 2, x, '|');
        mvaddch(y + 1, x, '|');
        mvaddch(y, x, '|');
        mvaddch(y - 1, x, '|');
        mvaddch(y - 2, x, '|');
    }

private:
    int x, y, height;

};

class Ball {

public:
    Ball(double x, double y, int speed);
    double getX() { return x; }
    double getY() { return y; }
    int getSpeed() { return speed; }
    void setX(double a) {
        x = a;
    }
    void setY(double a) {
        y = a;
    }
    void setSpeed(int a){
        speed = a;
    }
    void drawBall(double x, double y) {
        mvaddch(x, y, '*');
    }

private:
    double x, y;
    int speed;

};

#endif
