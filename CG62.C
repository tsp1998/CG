//Binary Animation Made by TSP
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/

#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	unsigned int r;
	char c;
	int gd = DETECT, gm, i = 1, j, x = 0, y = 0;
	int max = 0, min = 0;
	char tsp[2] = {'0'};
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	while (1)
	{
		settextstyle(10, 0, 1);
		setcolor(15);
		outtextxy(200, 200, "Enter any key");
		outtextxy(200, 300, "Enter S to Exit");
		settextstyle(5, 0, 3);
		setcolor(4);
		outtextxy(220, 430, "Made by TSP");
		c = getch();
		if (c == 's' || c == 'S')
			break;
		settextstyle(0, 0, 1);
		cleardevice();
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
			outtextxy(max, min, "1");
			outtextxy(max, min, "0");
			if (i == 0)
				setcolor(random(15) + 1);
			else
				setcolor(i);
			r = rand() % 2;
			tsp[0] = '0' + r;
			outtextxy(max, min, tsp);
			//delay(10);
		}
		getch();
		cleardevice();
		i++;
		if (i > 15)
			i = 0;
	}
	closegraph();
}