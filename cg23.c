//Cartoon animation
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void main()
{
   int i;
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
      circle(300, 200, 100);
      circle(260, 170, 20);
      circle(340, 170, 20);
      line(300, 150, 300, 250);
      circle(190, 130, 30);
      circle(410, 130, 30);
      line(250, 260, 350, 260);
      rectangle(230, 300, 370, 350);

      clrscr();
      delay(1000);

      circle(300, 200, 100);
      circle(260, 170, 20);
      circle(340, 170, 20);
      line(300, 150, 300, 250);
      circle(190, 130, 30);
      circle(410, 130, 30);
      line(250, 260, 350, 260);
      line(250, 270, 350, 270);
      for (i = 252; i < 350; i += 5)
      {
         line(i, 260, i, 270);
      }
      rectangle(230, 300, 370, 350);
      clrscr();
      delay(1000);

      getch();
   }
   closegraph();
}