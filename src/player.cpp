#include "../inc/pgh.h"

Player::Player(int y, int x)
{
    setX(x);
    setY(y);
}

int Player::GetX() 
{ 
    return x; 
}
 
int Player::GetY() 
{ 
    return y; 
}

int Player::GetHeight() 
{ 
    return height; 
}

void Player::SetX(int a) 
{
    x = a;
}

void Player::SetY(int a) 
{
    y = a;
}

void Player::DrawPlayer(int y, int x)
{
    mvaddch(y + 2, x, '|');
    mvaddch(y + 1, x, '|');
    mvaddch(y, x, '|');
    mvaddch(y - 1, x, '|');
    mvaddch(y - 2, x, '|');
}