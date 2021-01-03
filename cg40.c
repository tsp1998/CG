 //Star Animation in Circle
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <graphics.h>
#include <conio.h> 
void main()
{
 int i,i1, gdriver=DETECT,gmode,error;
  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 error=graphresult();
 if (error!=grOk)
 {
	outtext("error");
	getch();
}
else{
	       while(!kbhit())
		{

	for(i=0;i<=40;i++)
	{
	circle(100,90,40);
		setcolor(LIGHTBLUE);
		line(100+i,50+i,100,90);
			line(100-i,50+i,100,90);
	line(100,90,100+i,130-i);
	line(100,90,100-i,130-i);


		line(60+i,90+i,100,90);
			line(60+i,90-i,100,90);
	line(100,90,140-i,90-i);
	line(100,90,140-i,90+i);

	delay(100);
		cleardevice();
		}
		}
}
closegraph () ;
}