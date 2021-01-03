//Cartoon
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
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 cleardevice();
   circle(300,200,100);
 //  floodfill(300,210,RED);
   circle(260,170,20);
     circle(340,170,20);
     line(300,150,300,250);
      circle(190,130,30);
   circle(410,130,30);
       line(250,260,350,260);
      rectangle(230,300,370,350);
 getch();
 closegraph();
}