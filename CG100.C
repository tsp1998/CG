//Graphics Shapes
//Made by TSP
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h>
int gd = DETECT, gm;
#define clear cleardevice();
#define clr clrscr();
#define close closegraph();
#define flush flushall();
#define init initgraph(&gd, &gm, "c:\\tc\\bgi");
int skip = 0;
void rec();		//rectangle
void cir();		//circle
void arcs();	//arcs
void ell();		//ellipse
void lin();		//line
void pix();		//pixel
void bar3();	//3dbar
void bar2d(); //2dbar
#define clear cleardevice();
void select(); //deflect3 choice
							 /*	void init()//initialize graph
	{

initgraph(&gd,&gm,"c:\\TC\\BGI");
	}    */
char up, down, lt, rt, lb, rb;
int main()
{
	init
			settextstyle(1, 0, 5);
	outtextxy(150, 100, "1.Computer Mode");
	outtextxy(150, 200, "2.Mobile Mode");
	outtextxy(150, 300, "3.Exit");
	while (1)
	{
		flushall();
		scanf("%c", &up);
		if (up == '1')
		{
			up = '8';
			down = '2';
			lt = '7';
			rt = '9';
			lb = '1';
			rb = '3';
			break;
		}
		else if (up == '2')
		{
			up = '2';
			down = '8';
			lt = '1';
			rt = '3';
			lb = '7';
			rb = '9';
			break;
		}
		else if (up == '3')
			exit(0);
	}
	select(); //deflect3 choice
	getch();
	closegraph();
	return 0;
}

void select() //deflect3 choice
{
	int ch;
	settextstyle(1, 0, 3);
	//clrscr();
	clear
			outtextxy(100, 0, "0.Exit");
	outtextxy(100, 50, "1.Rectangle");
	outtextxy(100, 100, "2.Circle");
	outtextxy(100, 150, "3.Line");
	outtextxy(100, 200, "4.Pixel");
	outtextxy(100, 250, "5.Arc");
	outtextxy(100, 300, "6.Ellipse");
	outtextxy(100, 350, "7.2D Bar");
	outtextxy(100, 400, "8.3D Bar");
	scanf("%d", &ch);
	clear switch (ch)
	{
	case 0:
		exit(0);
	case 1:
		rec();
		; //rectangle
		break;
	case 2:
		cir(); //circle
		break;
	case 3:
		lin(); //line
		break;
	case 4:
		pix(); //pixel
		break;
	case 5:
		arcs(); //arcs
		break;
	case 6:
		ell(); //ellipse
		break;
	case 7:
		bar2d(); //2dbar
		break;
	case 8:
		bar3(); //3dbar
		break;
	}
}

void rec() //rectangle
{
	int choice;
	char c;
	int i2, x1, y1, x2, y2, i, i1;
	while (1)
	{
		printf("1.LTRB\n2.Menu\n3.End\n4.Move");
		scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			exit(0);
		case 1:
			rectangle(x1 = 0, y1 = 0, x2 = 0, y2 = 0);
			printf("LTRB:");
			scanf("%d", &i);
			x1 += i;
			scanf("%d", &i);
			y1 += i;
			scanf("%d", &i);
			x2 += i;
			scanf("%d", &i);
			y2 += i;
			rectangle(x1, y1, x2, y2);
			getch();
			printf("%d %d %d %d\n", x1, y1, x2, y2);
			break;

		case 2:
			select();
			break;
		case 3:
			exit(0);
			break;
		case 4:
			clr
					clear
							rectangle(x1, y1, x2, y2);
			i = 1;
			while (1)
			{
				c = getch();
				setcolor(0);
				rectangle(x1, y1, x2, y2);
				setcolor(rand() % 15 + 1);
				i2 = c;
				if (c == 'q' || c == 'Q' || c == '$')
				{
					rectangle(x1, y1, x2, y2);
					break;
				}
				else
				{
					if (i2 == 0)
					{
						c = getch();
						c = getch();
					direct:
						if (c == '5' || c == '+') //increase size
						{
							rectangle(x1 -= i, y1 -= i, x2 += i, y2 += i);
						}

						else if (c == '0' || c == '-') //decrease size
						{
							rectangle(x1 += i, y1 += i, x2 -= i, y2 -= i);
						}

						else if (c == 'M' || c == '6') //move right
						{
							rectangle(x1 += i, y1, x2 += i, y2);
						}

						else if (c == 'K' || c == '4') //move left
						{
							rectangle(x1 -= i, y1, x2 -= i, y2);
						}

						else if (c == 'H' || c == up) //move upward
						{
							rectangle(x1, y1 -= i, x2, y2 -= i);
						}

						else if (c == 'P' || c == down) //move downward
						{
							rectangle(x1, y1 += i, x2, y2 += i);
						}

						else if (c == lt) //left top
						{
							rectangle(x1 -= i, y1 -= i, x2 -= i, y2 -= i);
						}

						else if (c == rt) //right top
						{
							rectangle(x1 += i, y1 -= i, x2 += i, y2 -= i);
						}

						else if (c == lb) //left bottom
						{
							rectangle(x1 -= i, y1 += i, x2 -= i, y2 += i);
						}

						else if (c == rb) //right bottom
						{
							rectangle(x1 += i, y1 += i, x2 += i, y2 += i);
						}

						else if (c == 'r' || c == 'R') //increase right
							rectangle(x1, y1, x2 += i, y2);
						else if (c == 'e' || c == 'E') //decrease right
							rectangle(x1, y1, x2 -= i, y2);
						else if (c == 'l' || c == 'L') //increase left
							rectangle(x1 += i, y1, x2, y2);
						else if (c == 'k' || c == 'K') //decrease left
							rectangle(x1 -= i, y1, x2, y2);

						else if (c == 'T' || c == 't') //increase top
							rectangle(x1, y1 -= i, x2, y2);
						else if (c == 'F' || c == 'f' || c == 'G' || c == 'g') //decrease top
							rectangle(x1, y1 += i, x2, y2);
						else if (c == 'B' || c == 'b') //increase bottom
							rectangle(x1, y1, x2, y2 += i);
						else if (c == 'H' || c == 'h') //decrease bottom
							rectangle(x1, y1, x2, y2 -= i);

						else if (c == 'q' || c == 'Q') //exit
						{
							rectangle(x1, y1, x2, y2);
							break;
						}
						else
							rectangle(x1, y1, x2, y2);
					}
					else
						goto direct;
					printf("\t\t\r");
					printf("%d %d %d %d\r", x1, y1, x2, y2);
				}
			}
		}
	}
}

void cir() //circle
{
	int choice;
	int x, y, i, r, i2;
	char c;
	circle(x = 0, y = 0, r = 0);
	while (1)
	{
	end:
		printf("1.XYR\n2.Menu\n3.End\n4.move");
		flushall();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("XYR:");
			scanf("%d%d%d", &x, &y, &r);
			circle(x, y, r);
			break;
		case 2:
			select();
			break;
		case 3:
			exit(0);

		case 4:
			i = 1;
			while (1)
			{
				c = getch();
				i2 = c;
				if (c == 'q' || c == 'Q')
					break;
				else
				{
					if (i2 == 0)
					{
						c = getch();
					direct:
						//clrscr(); clear
						if (c == '5' || c == '+') //increase size
						{
							circle(x, y, r += 1);
						}

						else if (c == '0' || c == '-') //decrease size
						{
							circle(x, y, r -= 1);
						}

						else if (c == 'M' || c == '6') //move right
						{
							circle(x += 1, y, r);
						}

						else if (c == 'K' || c == '4') //move left
						{
							circle(x -= 1, y, r);
						}

						else if (c == 'H' || c == up) //move upward
						{
							circle(x, y -= 1, r);
						}

						else if (c == 'P' || c == down) //move downward
						{
							circle(x, y += 1, r);
						}

						else if (c == lt) //left top
						{
							circle(x -= 1, y -= 1, r);
						}

						else if (c == rt) //right top
						{
							circle(x += 1, y -= 1, r);
						}

						else if (c == lb) //left bottom
						{
							circle(x -= 1, y += 1, r);
						}

						else if (c == rb) //right bottom
						{
							circle(x += 1, y += 1, r);
						}

						else if (c == 'q' || c == 'Q') //exit
							break;
					}
					else
						goto direct;
					printf("%d %d %d\n", x, y, r);
				}
			}
		}
	}
}

void pix() //putpixel
{
	int choice;
	int x, y, i, r, i2;
	char c;
	putpixel(x = 0, y = 0, r = 0);
	while (1)
	{
	end:
		printf("1.XYC\n2.Menu\n3.End\n4.move");
		flushall();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("XYC:");
			scanf("%d%d%d", &x, &y, &r);
			putpixel(x, y, r);
			break;
		case 2:
			select();
			break;
		case 3:
			exit(0);

		case 4:
			i = 1;
			while (1)
			{
				c = getch();
				i2 = c;
				if (c == 'q' || c == 'Q')
					break;
				else
				{
					if (i2 == 0)
					{
						c = getch();
					direct:
						//clrscr(); clear
						if (c == '5' || c == '+') //increase size
						{
							putpixel(x, y, r += 1);
						}

						else if (c == '0' || c == '-') //decrease size
						{
							putpixel(x, y, r -= 1);
						}

						else if (c == 'M' || c == '6') //move right
						{
							putpixel(x += 1, y, r);
						}

						else if (c == 'K' || c == '4') //move left
						{
							putpixel(x -= 1, y, r);
						}

						else if (c == 'H' || c == up) //move upward
						{
							putpixel(x, y -= 1, r);
						}

						else if (c == 'P' || c == down) //move downward
						{
							putpixel(x, y += 1, r);
						}

						else if (c == lt) //left top
						{
							putpixel(x -= 1, y -= 1, r);
						}

						else if (c == rt) //right top
						{
							putpixel(x += 1, y -= 1, r);
						}

						else if (c == lb) //left bottom
						{
							putpixel(x -= 1, y += 1, r);
						}

						else if (c == rb) //right bottom
						{
							putpixel(x += 1, y += 1, r);
						}

						else if (c == 'q' || c == 'Q') //exit
							break;
					}
					else
						goto direct;
					printf("%d %d %d\n", x, y, r);
				}
			}
		}
	}
}

void arcs() //arcs
{
	int choice;
	int x, y, i, r, s, e, i2, t;
	char c;
	arc(x = 0, y = 0, s = 0, e = 0, r = 0);
	while (1)
	{
	end:
		printf("1.XYSER\n2.Menu\n3.End\n4.move");
		flushall();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("XYSER:");
			scanf("%d%d%d%d%d", &x, &y, &s, &e, &r);
			//clrscr(); clear
			arc(x, y, s, e, r);
			break;
		case 2:
			select();
			break;
		case 3:
			exit(0);

		case 4:
			i = 1;
			while (1)
			{
				c = getch();
				i2 = c;
				if (c == 'q' || c == 'Q')
					break;
				else
				{
					if (i2 == 0)
					{
						c = getch();
					direct:
						//clrscr(); clear
						if (c == '5' || c == '+') //increase size

							arc(x, y, s, e, r += 1);

						else if (c == '0' || c == '-') //decrease size

							arc(x, y, s, e, r -= 1);

						else if (c == 'M' || c == '6') //move right

							arc(x += 1, y, s, e, r);

						else if (c == 'K' || c == '4') //move left

							arc(x -= 1, y, s, e, r);

						else if (c == 'H' || c == up) //move upward

							arc(x, y -= 1, s, e, r);

						else if (c == 'P' || c == down) //move downward

							arc(x, y += 1, s, e, r);

						else if (c == lt) //left top

							arc(x -= 1, y -= 1, s, e, r);

						else if (c == rt) //right top

							arc(x += 1, y -= 1, s, e, r);

						else if (c == lb) //left bottom
							arc(x -= 1, y += 1, s, e, r);

						else if (c == rb) //right bottom
							arc(x += 1, y += 1, s, e, r);

						else if (c == 's') //start angle increase
							arc(x, y, s += 1, e, r);
						else if (c == 'e') //end angle increase
							arc(x, y, s, e += 1, r);
						else if (c == 'd') //start angle decrease
							arc(x, y, s -= 1, e, r);
						else if (c == 'r') //end angle decrease
							arc(x, y, s, e -= 1, r);

						else if (c == 'q' || c == 'Q') //exit
							break;
					}
					else
						goto direct;

					printf("%d %d %d %d %d\n", x, y, s, e, r);
				}
			}
		}
	}
}

void ell() //ellipse
{
	int choice;
	int x, y, i, xr, yr, s, e, i2;
	char c;
	ellipse(x = 0, y = 0, s = 0, e = 0, xr = 0, yr = 0);
	while (1)
	{
	end:

		printf("1.X Y S E xr yr\n2.Menu\n3.End\n4.move");
		flushall();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("X Y S E xr yr:");
			scanf("%d%d%d%d%d%d", &x, &y, &s, &e, &xr, &yr);
			//clrscr(); clear
			ellipse(x, y, s, e, xr, yr);
			break;
		case 2:
			select();
			break;
		case 3:
			exit(0);

		case 4:
			i = 1;
			while (1)
			{
				c = getch();
				i2 = c;
				if (c == 'q' || c == 'Q')
					break;
				else
				{
					if (i2 == 0)
					{
						c = getch();
					direct:
						//clrscr(); clear
						if (c == '5' || c == '+') //increase size

							ellipse(x, y, s, e, xr += 1, yr += 1);

						else if (c == '0' || c == '-') //decrease size

							ellipse(x, y, s, e, xr -= 1, yr -= 1);

						else if (c == 'M' || c == '6') //move right

							ellipse(x += 1, y, s, e, xr, yr);

						else if (c == 'K' || c == '4') //move left

							ellipse(x -= 1, y, s, e, xr, yr);

						else if (c == 'H' || c == up) //move upward

							ellipse(x, y -= 1, s, e, xr, yr);

						else if (c == 'P' || c == down) //move downward

							ellipse(x, y += 1, s, e, xr, yr);

						else if (c == lt) //left top

							ellipse(x -= 1, y -= 1, s, e, xr, yr);

						else if (c == rt) //right top

							ellipse(x += 1, y -= 1, s, e, xr, yr);

						else if (c == lb) //left bottom
							ellipse(x -= 1, y += 1, s, e, xr, yr);

						else if (c == rb) //right bottom
							ellipse(x += 1, y += 1, s, e, xr, yr);

						else if (c == 's') //start angle increase
							ellipse(x, y, s += 1, e, xr, yr);
						else if (c == 'e') //end angle increase
							ellipse(x, y, s, e += 1, xr, yr);
						else if (c == 'd') //start angle decrease
							ellipse(x, y, s -= 1, e, xr, yr);
						else if (c == 'r') //end angle decrease
							ellipse(x, y, s, e -= 1, xr, yr);

						else if (c == 'x') //x radius increase
							ellipse(x, y, s, e, xr += 1, yr);
						else if (c == 'y') //y radius increase
							ellipse(x, y, s, e, xr, yr += 1);
						else if (c == 'c') //x radius decrease
							ellipse(x, y, s, e, xr -= 1, yr);
						else if (c == 'u') //y radius decrease
							ellipse(x, y, s, e, xr, yr -= 1);

						else if (c == 'q' || c == 'Q') //exit
							break;
					}
					else
						goto direct;

					printf("%d %d %d %d %d %d\n", x, y, s, e, xr, yr);
				}
			}
		}
	}
}

void lin() //line
{
	int choice;
	char c;
	int i2, x1, y1, x2, y2, i, i1, s = 0, s1 = -1;
	int *record, temp, r = -1, total = 0;
	record = (int *)(4 * sizeof(int));
	while (1)
	{
		printf("1.x1,y1,x2,y2\n2.Menu\n3.End\n4.Move");
		scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			exit(0);
		case 1:
			line(x1 = 0, y1 = 0, x2 = 0, y2 = 0);
			printf("x1,y1,x2,y2:");
			scanf("%d", &i);
			x1 += i;
			scanf("%d", &i);
			y1 += i;
			scanf("%d", &i);
			x2 += i;
			scanf("%d", &i);
			y2 += i;
			clear
					//clrscr();
					init
							line(x1, y1, x2, y2);
			getch();
			printf("%d %d %d %d\n", x1, y1, x2, y2);
			break;

		case 2:
			select();
			break;
		case 3:
			exit(0);
			break;
		case 4:
			i = 1;
			while (1)
			{
				c = getch();
				i2 = c;
				if (c == 'p' || c == 'P')
				{
					record[++r] = x1;
					record[++r] = y1;
					record[++r] = x2;
					record[++r] = y2;
					if (r == 3)
						temp = record[3];
					if (r >= 3)
						record[3] = temp;
					total++;
					realloc(record, 4);
				}

				if (c == 'q' || c == 'Q')
					break;
				else
				{
					if (i2 == 0)
					{
						c = getch();
						c = getch();
					direct:
						//clrscr(); clear
						for (s = 0; s < total; s++)
						{
							setcolor(14);
							line(record[++s1], record[++s1], record[++s1], record[++s1]);
							setcolor(15);
						}

						if (c == '5' || c == '+') //increase size
						{
							line(x1 -= i, y1 -= i, x2 += i, y2 += i);
						}

						else if (c == '0' || c == '-') //decrease size
						{
							line(x1 += i, y1 += i, x2 -= i, y2 -= i);
						}

						else if (c == 'M' || c == '6') //move right
						{
							line(x1 += i, y1, x2 += i, y2);
						}

						else if (c == 'K' || c == '4') //move left
						{
							line(x1 -= i, y1, x2 -= i, y2);
						}

						else if (c == 'H' || c == up) //move upward
						{
							line(x1, y1 -= i, x2, y2 -= i);
						}

						else if (c == 'P' || c == down) //move downward
						{
							line(x1, y1 += i, x2, y2 += i);
						}

						else if (c == lt) //left top
						{
							line(x1 -= i, y1 -= i, x2 -= i, y2 -= i);
						}

						else if (c == rt) //right top
						{
							line(x1 += i, y1 -= i, x2 += i, y2 -= i);
						}

						else if (c == lb) //left bottom
						{
							line(x1 -= i, y1 += i, x2 -= i, y2 += i);
						}

						else if (c == rb) //right bottom
						{
							line(x1 += i, y1 += i, x2 += i, y2 += i);
						}

						else if (c == 'q' || c == 'Q') //exit
							break;
					}
					else
						goto direct;
					printf("%d %d %d %d\n", x1, y1, x2, y2);
				}
			}
		}
	}
}

void bar2d() //bar
{
	int choice;
	char c;
	int i2, x1, y1, x2, y2, i, i1;
	while (1)
	{
		printf("1.LTRB\n2.Menu\n3.End\n4.Move");
		scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			exit(0);
		case 1:
			bar(x1 = 0, y1 = 0, x2 = 0, y2 = 0);
			printf("LTRB:");
			scanf("%d", &i);
			x1 += i;
			scanf("%d", &i);
			y1 += i;
			scanf("%d", &i);
			x2 += i;
			scanf("%d", &i);
			y2 += i;
			clear
					//clrscr();
					init
							bar(x1, y1, x2, y2);
			getch();
			printf("%d %d %d %d\n", x1, y1, x2, y2);
			break;

		case 2:
			select();
			break;
		case 3:
			exit(0);
			break;
		case 4:
			i = 1;
			while (1)
			{
				c = getch();
				i2 = c;
				if (c == 'q' || c == 'Q' || c == '$')
					break;
				else
				{
					if (i2 == 0)
					{
						c = getch();
						c = getch();
					direct:
						//clrscr(); clear
						if (c == '5' || c == '+') //increase size
						{
							bar(x1 -= i, y1 -= i, x2 += i, y2 += i);
						}

						else if (c == '0' || c == '-') //decrease size
						{
							bar(x1 += i, y1 += i, x2 -= i, y2 -= i);
						}

						else if (c == 'M' || c == '6') //move right
						{
							bar(x1 += i, y1, x2 += i, y2);
						}

						else if (c == 'K' || c == '4') //move left
						{
							bar(x1 -= i, y1, x2 -= i, y2);
						}

						else if (c == 'H' || c == up) //move upward
						{
							bar(x1, y1 -= i, x2, y2 -= i);
						}

						else if (c == 'P' || c == down) //move downward
						{
							bar(x1, y1 += i, x2, y2 += i);
						}

						else if (c == 'r' || c == 'R') //increase right
							bar(x1, y1, x2 += i, y2);
						else if (c == 'e' || c == 'E') //decrease right
							bar(x1, y1, x2 -= i, y2);
						else if (c == 'l' || c == 'L') //increase left
							bar(x1 += i, y1, x2, y2);
						else if (c == 'k' || c == 'K') //decrease left
							bar(x1 -= i, y1, x2, y2);

						else if (c == 'T' || c == 't') //increase top
							bar(x1, y1 -= i, x2, y2);
						else if (c == 'F' || c == 'f') //decrease top
							bar(x1, y1 += i, x2, y2);
						else if (c == 'B' || c == 'b') //increase bottom
							bar(x1, y1, x2, y2 += i);
						else if (c == 'H' || c == 'h') //decrease bottom
							bar(x1, y1, x2, y2 -= i);

						else if (c == lt) //left top
						{
							bar(x1 -= i, y1 -= i, x2 -= i, y2 -= i);
						}

						else if (c == rt) //right top
						{
							bar(x1 += i, y1 -= i, x2 += i, y2 -= i);
						}

						else if (c == lb) //left bottom
						{
							bar(x1 -= i, y1 += i, x2 -= i, y2 += i);
						}

						else if (c == rb) //right bottom
						{
							bar(x1 += i, y1 += i, x2 += i, y2 += i);
						}

						else if (c == 'q' || c == 'Q') //exit
							break;
					}
					else
						goto direct;
					printf("%d %d %d %d\n", x1, y1, x2, y2);
				}
			}
		}
	}
}

void bar3() //bar3d
{
	int choice;
	char c;
	int i2, x1, y1, x2, y2, d, tf, i, i1;
	while (1)
	{
		printf("1.LTRB D Tf\n2.Menu\n3.End\n4.Move");
		scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			exit(0);
		case 1:
			bar3d(x1 = 0, y1 = 0, x2 = 0, y2 = 0, d = 0, tf = 0);
			printf("LTRB D Tf:");
			scanf("%d", &i);
			x1 += i;
			scanf("%d", &i);
			y1 += i;
			scanf("%d", &i);
			x2 += i;
			scanf("%d", &i);
			y2 += i;
			scanf("%d", &i);
			d += i;
			scanf("%d", &i);
			tf += i;
			clear
					//clrscr();
					init
							bar3d(x1, y1, x2, y2, d, tf);
			getch();
			printf("%d %d %d %d %d %d\n", x1, y1, x2, y2, d, tf);
			break;

		case 2:
			select();
			break;
		case 3:
			exit(0);
			break;
		case 4:
			i = 1;
			while (1)
			{
				c = getch();
				i2 = c;
				if (c == 'q' || c == 'Q' || c == '$')
					break;
				else
				{
					if (i2 == 0)
					{
						c = getch();
						c = getch();
					direct:
						//clrscr(); clear
						if (c == '5' || c == '+') //increase size
						{
							bar3d(x1 -= i, y1 -= i, x2 += i, y2 += i, d, tf);
						}

						else if (c == '0' || c == '-') //decrease size
						{
							bar3d(x1 += i, y1 += i, x2 -= i, y2 -= i, d, tf);
						}

						else if (c == 'M' || c == '6') //move right
						{
							bar3d(x1 += i, y1, x2 += i, y2, d, tf);
						}

						else if (c == 'K' || c == '4') //move left
						{
							bar3d(x1 -= i, y1, x2 -= i, y2, d, tf);
						}

						else if (c == 'H' || c == up) //move upward
						{
							bar3d(x1, y1 -= i, x2, y2 -= i, d, tf);
						}

						else if (c == 'P' || c == down) //move downward
						{
							bar3d(x1, y1 += i, x2, y2 += i, d, tf);
						}

						else if (c == 'r' || c == 'R') //increase right
							bar3d(x1, y1, x2 += i, y2, d, tf);
						else if (c == 'e' || c == 'E') //decrease right
							bar3d(x1, y1, x2 -= i, y2, d, tf);
						else if (c == 'l' || c == 'L') //increase left
							bar3d(x1 += i, y1, x2, y2, d, tf);
						else if (c == 'k' || c == 'K') //decrease left
							bar3d(x1 -= i, y1, x2, y2, d, tf);

						else if (c == 'H' || c == 'h') //decrease bottom
							bar3d(x1, y1, x2, y2 -= i, d, tf);

						else if (c == 'B' || c == 'b') //increase bottom
							bar3d(x1, y1, x2, y2 += i, d, tf);

						else if (c == 'G' || c == 'g') //decrease top
							bar3d(x1, y1 += i, x2, y2, d, tf);

						else if (c == 'T' || c == 't') //increase top
							bar3d(x1, y1 -= i, x2, y2, d, tf);

						else if (c == 'D' || c == 'd') //increase depth
							bar3d(x1, y1, x2, y2, d += i, tf);
						else if (c == 'x' || c == 'X') //decrease depth
							bar3d(x1, y1, x2, y2, d -= i, tf);
						else if (c == 'F' || c == 'f') //increase Topflag
							bar3d(x1, y1, x2, y2, d, tf += i);
						else if (c == 'c' || c == 'C') //decrease Topflag
							bar3d(x1, y1, x2, y2, d, tf -= i);

						else if (c == lt) //left top
						{
							bar3d(x1 -= i, y1 -= i, x2 -= i, y2 -= i, d, tf);
						}

						else if (c == rt) //right top
						{
							bar3d(x1 += i, y1 -= i, x2 += i, y2 -= i, d, tf);
						}

						else if (c == lb) //left bottom
						{
							bar3d(x1 -= i, y1 += i, x2 -= i, y2 += i, d, tf);
						}

						else if (c == rb) //right bottom
						{
							bar3d(x1 += i, y1 += i, x2 += i, y2 += i, d, tf);
						}

						else if (c == 'q' || c == 'Q') //exit
							break;
					}
					else
						goto direct;
					printf("%d %d %d %d %d %d\n", x1, y1, x2, y2, d, tf);
				}
			}
		}
	}
}