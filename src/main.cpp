#include "Pong.h"

int main(void) 
{

	initscr();

	int max_y, max_x;

	getmaxyx(stdscr, max_y, max_x);

	namegame(max_y, max_x);  //statr program
	clear();

	menu_2(max_y, max_x);
    clear();

    return 0;
}

