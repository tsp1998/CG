//Outext Fns
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
 int gdriver=DETECT,gmode,error;
  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 error=graphresult();
 if (error!=grOk)
 {
	outtext("error");
	getch();
}
else{
  outtext("Shubham");
   outtextxy(250,250,"Shubham");
 getch();
}
 closegraph();
}