#include "../inc/pgh.h"

int  info(int max_y, int max_x) 
{
	initscr();
	start_color();
	cbreak();
	noecho();
	curs_set(0);

	init_pair(1, COLOR_RED, COLOR_BLACK);

	char str[23][1440] = {"***  PONG  ***",
	"How to play:",
	"1. Clear your mind.",
	"2. ##### Player 1",
	" * `W` - Move up",
	" * `S` - Move down",
	" * `A` - Move left",
	" * `D` - Move right",
	"\n",
	"3. ##### Player 2",
	" * `UP KEY` - Move up",
	" * `DOWN KEY` - Move down",
	" * `LEFT KEY` - Move left",
	" * `RIGHT KEY` - Move right",
	"\n",
	"\n",
	"To serve the ball, use the `SPACE` button.  It's the same for both players.",
	"Game against BOT Player 1",
	"PAUSE <<Q>>",
	"\n",
	"\n",
    "-> Press <<R>> to return to main menu"};
     
	attron(COLOR_PAIR(1));
	attron(A_BOLD | A_BOLD);
	for (int j = 0; j < 23; j++) 
	{
		mvprintw(max_y /2 + j - 12, max_x /2  - 39, str[j]);
		ddelay(100);
		refresh();
	} 
	attroff(COLOR_PAIR(1));
	attroff(A_BOLD | A_BOLD);
    
    
	int count = getch();
	//if (count == 114)
		return 114;


	endwin();
	refresh();
	return count;
}

