//colors
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <tsp.h>
void main()
{
	int gd = DETECT, gm;
	int i;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	for (i = 0; getch() != '0'; i++)
	{
		setbkcolor(i);
		ii(5);
	}
	closegraph();
}