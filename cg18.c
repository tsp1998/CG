//Cartoon
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
void main()
{
	int i, j;
	int gdriver = DETECT, gmode, error;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	error = graphresult();
	if (error != grOk)
	{
		outtext("error");
		getch();
	}
	else
	{
		rectangle(1, 1, 630, 475); // boundary
															 /*
	for(j=5;j<=450;j+=5)
	{
	for(i=10;i<=630;i+=20)
	{
	line(i,5+j,i-5,10+j);
cleardevice();
}
	}
	 */
		for (i = 0; i <= 630; i += 10)
		{
			circle(50 + i, 400, 10);				//head
			line(50 + i, 410, 50 + i, 440); //body
			line(50 + i, 410, 70 + i, 430); //hand1
			line(50 + i, 410, 30 + i, 430); //hand2
			line(50 + i, 440, 70 + i, 470); //leg1
			line(50 + i, 440, 30 + i, 470); //leg2
			delay(100);
			cleardevice();
		}
		line(0, 471, 630, 471); //Road
		/*
   circle(300,200,100);
   circle(260,170,20);
     circle(340,170,20);
     line(300,150,300,250);
      circle(190,130,30);
   circle(410,130,30);
       line(250,260,350,260);
      rectangle(230,300,370,350);*/
		getch();
	}
	closegraph();
}