//Indian Flag with a Student
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
int gdriver=DETECT,gmode,error;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 error=graphresult();
 if (error!=grOk)
 {
	outtext("error");
	getch();
}
else{
  for (i=10;i<100;i+=40)
	    {
	setfillstyle(2,4);
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
	 circle(500,270,20);
	   circle(492,265,2);
	     circle(508,265,2);
		line(500,265,500,275);
			line(495,280,505,280);
	   rectangle(470,290,530,370);
	      rectangle(480,370,490,440);
	       rectangle(510,370,520,440);
		 rectangle(460,290,470,310);
	       rectangle(530,290,540,310);
		rectangle(450,290,460,350);
	       rectangle(540,290,550,350);
		    getch();
}
 closegraph();
   }