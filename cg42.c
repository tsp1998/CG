//Rainbow Animation
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
 for(i=0;i<100;i+=10)
		{
			setcolor(j);
		circle(300,250,k);
			k++;
		//	cleardevice();
			delay(20);
	}
		}
		
 
  
 getch();
 closegraph();
}