//colorful Binary Animation 2 Made by TSP
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/

#include <graphics.h>
#include <conio.h>
#include <stdio.h>

void main()
{
	unsigned int r;
	int gd = DETECT, gm, i, j, x = 0, y = 0;
	int max = 0, min = 0;
	char tsp[2] = {'0'};
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	setcolor(11);
	outtextxy(250, 471, "Made by TSP");
	getch();
	for (i = 0; i < 460; i += 20)
	{
		if (kbhit())
			break;
		for (j = 0; j < 639; j += 20)
		{
			if (kbhit())
				break;
			setcolor(rand() % 15 + 1);
			r = rand() % 2;
			tsp[0] = '0' + r;
			settextstyle(8, 0, 2);
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
			max = (rand() % 640);
			if (max <= 640 && max >= 0 && max % 20 == 0)
				break;
		}
		while (1)
		{
			min = (rand() % 460);
			if (min <= 460 && min >= 0 && min % 20 == 0)
				break;
		}
		setcolor(0);
		outtextxy(max, min, "1");
		outtextxy(max, min, "0");
		setcolor(rand() % 15 + 1);
		r = rand() % 2;
		tsp[0] = '0' + r;
		outtextxy(max, min, tsp);
		//delay(10);
	}
	getch();
	closegraph();
}