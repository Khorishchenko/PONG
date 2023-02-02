#include "../inc/pgh.h"

char start(int max_y, int max_x) 
{
	
	initscr();
	noecho();
	cbreak();
	curs_set(0);

	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);

    WINDOW * menuwin = newwin(9, max_x -6, max_y /2, 3);   
	refresh();
	
	box(menuwin,0, 0);
	wrefresh(menuwin);    
	
	keypad(menuwin, true); 
    
	char choices[3][27] = {"pl vs pl", "pl vs bot", " return"}; 
	int choice;                                           
	int heighlight = 0;

	while(1) 
	{
		for(int i = 0; i < 3; i++) 
		{
			if(i == heighlight)	
				wattron(menuwin, A_REVERSE);
			mvwprintw(menuwin, i + 3,  max_x /2 - 7 , choices[i]);
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
	return z;

    endwin();
    refresh();
}
