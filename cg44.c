//ASHOK CHAKRA
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
	int i=0;
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 cleardevice();
 while(!kbhit())
 {
 	for(i=0;i<=20;i++)
	{
   circle(200,110,20);

     	delay(100);
     	cleardevice();
     	
     		line(180+i,110+i,200,110);
     		line(200,110,220-i,110+i);

	line(180+i,110-i,200,110);
	line(200,110,220-i,110-i);
		
		line(188+((i/2)-5),96-((i/2)-5),200,110);
	line(208+((i/2)-5),96+((i/2)-5),200,110);
		line(188-((i/2)-5),96+((i/2)-5),200,110);
     	line(208-((i/2)-5),96-((i/2)-5),200,110);
     	
     		line(188-((i/2)-5),122-((i/2)-5),200,110);
     		line(208-((i/2)-5),124+((i/2)-5),200,110);
     			line(188+((i/2)-5),122+((i/2)-5),200,110);
     	line(208+((i/2)-5),124-((i/2)-5),200,110);
     	
     	}
     	} rectangle(230,300,370,350);
 getch();
 closegraph();
}