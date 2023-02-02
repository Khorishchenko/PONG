#include "Pong.h"

void pause_2(int nRezul, int nInteger)
{
	int max_y, max_x;

	getmaxyx(stdscr, max_y, max_x);

	if (nRezul == 6)
	{
		clear();
        refresh();
        echo();
		game(nInteger);
	}
	else if (nRezul == 5)
	{
		clear();
        refresh();
        echo();
		menu_2(max_y, max_x);
	}
}

