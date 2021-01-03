//Rainbow Animation 2
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
	int i,j,k=0;
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 cleardevice();
 
  for(j=0;j<16;j++)
		{
 for(i=0;i<50;i++)
		{
			setcolor(j);
		circle(300,250,k*i);
	}
	k++;
		}
  
 getch();
 closegraph();
}