//colorful $ Animation Made by TSP
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
	int gd = DETECT, gm, i, j, x = 0, y = 0;
	int max = 0, min = 0;
	char tsp[2] = {'0'};
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	getch();
	setcolor(2);
	for (i = 0; i < 479; i += 10)
	{
		if (kbhit())
			break;
		for (j = 0; j < 639; j += 10)
		{
			if (kbhit())
				break;
			setcolor(rand() % 15 + 1);
			tsp[0] = '$';
			outtextxy(x + j, y + i, tsp);
		}
		delay(100);
	}
	getch();
	while (1)
	{
		if (kbhit())
			break;

		while (1)
		{
			max = (rand() % 640 + 1) * 10;
			if (max <= 640 && max >= 0)
				break;
		}
		while (1)
		{
			min = (rand() % 480 + 1) * 10;
			if (min <= 480 && min >= 0)
				break;
		}
		setcolor(0);
		outtextxy(max, min, "$");
		setcolor(rand() % 15 + 1);
		tsp[0] = '$';
		outtextxy(max, min, tsp);
		//delay(10);
	}
	getch();
	closegraph();
}