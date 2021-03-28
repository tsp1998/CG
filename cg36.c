//Indian Flag Animation (Project)
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <graphics.h>
#include <conio.h>
void main()
{
	int i, gdriver = DETECT, gmode, error;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	error = graphresult();
	if (error != grOk)
	{
		outtext("error");
		getch();
	}
	else
	{
		rectangle(0, 0, 635, 475); //Boundary

		for (i = 0; i <= 200; i++)
		{
			setcolor(LIGHTBLUE);
			line(90, 50 + i, 100, 50 + i);
			setcolor(LIGHTRED);
			line(100 + i, 50, 100 + i, 90);
			setcolor(WHITE);
			line(100 + i, 90, 100 + i, 130);
			setcolor(LIGHTGREEN);
			line(100 + i, 130, 100 + i, 170);
			setcolor(LIGHTBLUE);
			line(90, 400 - i, 100, 400 - i);

			delay(5);
		}
		for (i = 0; i <= 40; i++)
		{
			setcolor(LIGHTCYAN);
			line(95 + i, 400, 95 + i, 420);
			setcolor(LIGHTCYAN);
			line(95 - i, 400, 95 - i, 420);
			delay(5);
		}
		for (i = 0; i <= 60; i++)
		{
			setcolor(LIGHTCYAN);
			line(95 + i, 420, 95 + i, 440);
			setcolor(LIGHTCYAN);
			line(95 - i, 420, 95 - i, 440);
			delay(5);
		}

		for (i = 0; i <= 80; i++)
		{
			//setcolor(WHITE);
			setcolor(LIGHTCYAN);
			line(95 + i, 440, 95 + i, 460);
			setcolor(LIGHTCYAN);
			line(95 - i, 440, 95 - i, 460);
			delay(5);
		}
		setcolor(14);
		outtextxy(200, 300, "TANDALE SHUBHAM");
		setcolor(LIGHTBLUE);
		circle(200, 110, 20);
		while (!kbhit())
		{
			setcolor(LIGHTBLUE);
			for (i = 0; i <= 20; i += 4)
			{

				circle(200, 110, 20);
				delay(100);

				line(180 + i, 110 + i, 200, 110);
				line(200, 110, 220 - i, 110 + i);
				line(180 + i, 110 - i, 200, 110);
				line(200, 110, 220 - i, 110 - i);
			}

			setcolor(15);
			for (i = 0; i <= 20; i += 4)
			{

				//  circle(200,110,20);
				delay(100);

				line(180 + i, 110 + i, 200, 110);
				line(200, 110, 220 - i, 110 + i);
				line(180 + i, 110 - i, 200, 110);
				line(200, 110, 220 - i, 110 - i);
			}
			setcolor(LIGHTBLUE);
			for (i = 0; i <= 20; i += 4)
			{

				circle(200, 110, 20);
				delay(100);
				line(200 + i, 90 + i, 200, 110);
				line(200 + i, 130 - i, 200, 110);
				line(200 - i, 90 + i, 200, 110);
				line(200 - i, 130 - i, 200, 110);
			}
			setcolor(15);
			for (i = 0; i <= 20; i += 4)
			{

				//   circle(200,110,20);
				delay(100);
				line(200 + i, 90 + i, 200, 110);
				line(200 + i, 130 - i, 200, 110);
				line(200 - i, 90 + i, 200, 110);
				line(200 - i, 130 - i, 200, 110);
			}
		}
	}

	//getch () ;
	closegraph();
}