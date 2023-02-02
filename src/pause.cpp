#include "Pong.h"

void pause(int nInteger)
{
	int max_y, max_x;

	getmaxyx(stdscr, max_y, max_x);

	initscr();
	noecho();
	cbreak();
	curs_set(0);

	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);

    attron(A_BOLD | A_BLINK);
    attron(COLOR_PAIR(1));
    mvprintw(max_y / 2 -1, max_x /2 - 6,  "    PAUSE");
    attroff(COLOR_PAIR(1));
    attroff(A_BOLD | A_BLINK);

    WINDOW * menuwin = newwin(9, max_x -6, max_y /2, 3);   //Граница основного вектор меню/
	refresh();
	
	box(menuwin,0, 0);
	wrefresh(menuwin);    
	
	keypad(menuwin, true); 
    
	char choices[2][10] = {"return"," Exit"}; 
	int choice;                                           
	int heighlight = 0;

	while(1) 
	{
		for(int i = 0; i < 2; i++) 
		{
			if(i == heighlight)	
				wattron(menuwin, A_REVERSE);
			mvwprintw(menuwin, i + 2,  max_x /2 - 5 , choices[i]);
			wattroff(menuwin, A_REVERSE);
		}

		
		choice = wgetch(menuwin);

		switch(choice) 
		{
			case KEY_UP:
			heighlight--;
			if (heighlight == -1)
				heighlight = 0;
			break;
			case KEY_DOWN:
			heighlight++;
			if (heighlight == 3)
				heighlight = 2;
			break;
			default:
			break;
		}
		if(choice == 10)
			break;
	}

	int z = strlen(choices[heighlight]);
	pause_2(z, nInteger);

    endwin();
    refresh();
}