//colorful ellipse
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/

#include <graphics.h>
#include <conio.h>

void main()
{
	int gd = DETECT, gm, i, j, x = 320, y = 240, r;
	int max = 0, min = 0;
	char c;
	int refresh = 0;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	while (1)
	{
		if (kbhit())
			break;
		for (i = 0; i < 480; i += 15)
		{
			for (j = 0; j < 620; j += 25)
			{
				setcolor(r = rand() % 15 + 1);
				setfillstyle(1, r);
				ellipse(20 + j, 5 + i, 0, 360, 10, 5);
				floodfill(20 + j, 5 + i, r);
			}
		}
	}
	getch();
	closegraph();
}