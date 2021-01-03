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
	int i=0,j=0;
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 cleardevice();
 while(!kbhit())
 {
 setcolor(LIGHTBLUE);
 	setcolor(14);
   circle(200,110,20);
 	for(i=0;i<=20;i+=4)
	{
		setcolor(14);
   circle(200,110,20);
     	delay(100);
   
       line(180+i,110+i,200,110);
		line(200,110,220-i,110+i);
 line(180+i,110-i,200,110);
	line(200,110,220-i,110-i);
     	}
     		//  cleardevice();
     		  	for(i=0;i<=20;i+=4)
	{
		setcolor(0);
  // circle(200,110,20);
     	delay(100);
     line(200+i,90+i,200,110);
       line(200+i,130-i,200,110);
		 line(200-i,90+i,200,110);
line(200-i,130-i,200,110);

     	}
     	//  cleardevice();
     	
     	 setcolor(14);
 	for(i=0;i<=20;i+=4)
	{
		setcolor(15);
   circle(200,110,20);
     	delay(100);
   
       line(180+i,110+i,200,110);
		line(200,110,220-i,110+i);
 line(180+i,110-i,200,110);
	line(200,110,220-i,110-i);
     	}
     		//  cleardevice();
     		  	for(i=0;i<=20;i+=4)
	{
		setcolor(0);
//   circle(200,110,20);
     	delay(100);
     line(200+i,90+i,200,110);
       line(200+i,130-i,200,110);
		 line(200-i,90+i,200,110);
line(200-i,130-i,200,110);

     	}
     	} rectangle(230,300,370,350);
 getch();
 closegraph();
}