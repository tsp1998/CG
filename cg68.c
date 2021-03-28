//colorful letters Animation Made by TSP
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
	unsigned int r;
	char c;
	int a[2] = {65, 97};
	int gd = DETECT, gm, i, j, x = 0, y = 0;
	int max = 0, min = 0;
	char tsp[2] = {'\0'};
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
		outtextxy(200, 450, "Made by TSP");
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
			for (c = 'a'; c <= 'z'; c++)
			{
				tsp[0] = c;
				outtextxy(max, min, tsp);
			}
			for (c = 'A'; c <= 'Z'; c++)
			{
				tsp[0] = c;
				outtextxy(max, min, tsp);
			}

			setcolor(rand() % 15 + 1);
			r = rand() % 26;
			tsp[0] = a[rand() % 2] + r;
			outtextxy(max, min, tsp);
			//delay(10);
		}
		getch();
		cleardevice();
	}
	closegraph();
}