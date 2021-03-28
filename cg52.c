///Bresenham's line Drawing Alogorithm
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void main()
{
	float e, x, y, x1, x2, y1, y2, xi, yi, length, dx, dy;
	int i, ch;
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	cleardevice();

	printf("Enter X1 & Y1:");
	scanf("%f%f", &x1, &y1);

	printf("Enter X2 & Y2:");
	scanf("%f%f", &x2, &y2);

	x = x1;
	y = y1;
	e = 2 * dy - dx;
	dx = x2 - x1;
	dy = y2 - y1;
	for (i = 1; i <= dx; i++)
	{

		while (e >= 0)
		{
			putpixel((int)x, (int)y, 14);
			y = y + 1;
			e = e - 2 * dx;
			delay(10);
		}
		x = x + 1;
		e = e + 2 * dy;
	}
	putpixel(300, 200, 14);

	getch();
	closegraph();
}