 //Square animation in clock style colorful
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
 int i, gdriver=DETECT,gmode,error;
  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 error=graphresult();
 if (error!=grOk)
 {
	outtext("error");
	getch();
}
else{
	for(i=0;i<=40;i++)
	{
		setcolor(RED);
		line(100+i,50+i,100,90);
		delay(10);
		//cleardevice();
		
			line(100-i,50+i,100,90);
		delay(10);
		}
		
			for(i=0;i<=40;i++)
	{
		setcolor(GREEN);
		line(100,90,100+i,130-i);
		delay(10);
		//cleardevice();
		
	line(100,90,100-i,130-i);
		delay(10);
		}
					rectangle(0,0,635,475);//Boundary

	}


getch () ;
closegraph () ;
}