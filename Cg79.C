//Binary Animation Made by TSP clocked 3
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
	unsigned int r, count = 0;
	char c;
	int gd = DETECT, gm, i = 1, j, x = 0, y = 0;
	int max = 0, min = 0;
	char tsp[2] = {'0'};
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	while (!kbhit())
	{
	re:
		j = random(15);
		setbkcolor(j);
		count = 0;
		settextstyle(0, 0, 1);
		cleardevice();
		while (1)
		{
			while (1)
			{
				max = (rand() % 640 + 1) * 10;
				if (max <= 640 && max >= 0)
					break;
			}
			while (!kbhit())
			{
				min = (rand() % 480 + 1) * 10;
				if (min <= 480 && min >= 0)
					break;
			}
			setcolor(0);
			outtextxy(max, min, "1");
			outtextxy(max, min, "0");
			setcolor(random(15) + 1);
			r = rand() % 2;
			tsp[0] = '0' + r;
			outtextxy(max, min, tsp);
			if (count == 5000)
				goto re;
			count++;
			if (kbhit())
				exit(0);
		}
		if (kbhit())
			exit(0);
		cleardevice();
	}
	closegraph();
}