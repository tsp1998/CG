///Bresenham's Circle  Drawing Alogorithm
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
    int r,d,x,y;
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 cleardevice();

printf("Enter Radius:");
scanf("%d",&r);
	     d=3-2*r;
 x=0;
	y=r;

do
{
	putpixel(x,y,14);
if(d<0)
{
d=d+4*x+6;
}
	{
d=d+4*(x-y)+10;
	y=y-1;
}
x=x+1;
delay(20);
}while(x<y);

getch();
closegraph();
}