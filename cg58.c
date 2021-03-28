//colorful Pixel Animation Made by TSP
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
	int gd = DETECT, gm, i, j, x = 320, y = 240;
	int max = 0, min = 0;
	char c;
	int refresh = 0;
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
				max = (rand() % 640);
				if (max <= 640 && max >= 0)
					break;
			}
			while (1)
			{
				min = (rand() % 480);
				if (min <= 480 && min >= 0)
					break;
			}
			putpixel(max, min, rand() % 15 + 1);
			//delay(10);
			refresh++;
			if (refresh == 500)
			{
				cleardevice();
				refresh = 0;
			}
		}
		getch();
		cleardevice();
	}
	closegraph();
}