#include "Pong.h"

int menu_2(int max_y,int max_x)
{
	while (1) 
	{
        int nX = menu(max_y, max_x);
        clear();
        refresh();
        echo();
        if (nX == 5)
        {
            int nA = start(max_y, max_x);
            clear();
            echo();
            if (nA == 8)
            {
                clear();
                refresh();
                echo();
                game(0);
            }
            if (nA == 9)
            {
                clear();
                refresh();
                echo();
                game(1);
            }
            if (nA == 6)
            {
                menu_2(max_y, max_x);
            }
        }
        if (nX == 6) 
        {
            endwin();
			exit(1);
       	}
        if (nX == 4) 
        {
            int nZ = info(max_y, max_x);
            clear();
            echo();
            if (nZ == 114) 
            {
            	menu_2(max_y, max_x);
            }
        }
    }
}

