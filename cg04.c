//Indian Flag
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
int i;
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
  for (i=10;i<100;i+=40)
	    {
		rectangle(230,i,420,i+40);
	    }
	     line(230,130,230,380);
	       line(220,10,220,380);
	     rectangle(160,380,290,410);
	      rectangle(140,410,310,440);
	       rectangle(120,440,330,470);
   circle(225,10,5);
    circle(318,70,20);
      line(318,50,318,90);
	line(298,72,338,72);
	 line(305,54,328,87);
	line(330,54,307,87);
 getch();
 closegraph();
}