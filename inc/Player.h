#ifndef PLAYER_H
#define PLAYER_H

#include "pgh.h"

class Player {

public:
    Player(int x, int y);
    
    int GetX();
    int GetY();
    int GetHeight();
    void SetX(int);
    void SetY(int);
    void DrawPlayer(int, int);

private:
    int x, y, height;
};

#endif