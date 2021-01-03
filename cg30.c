//Moving Car traffic with signal
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i,j;
 int gdriver=DETECT,gmode,error;
  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 error=graphresult();
 if (error!=grOk)
 {
	outtext("error");
	getch();
}
else{
	
	outtextxy(250,250,"Enter Any Key To Start");
	getch();
	for(i=0;i<=630;i+=10)
	{
/*	line(0,471,650,471);//Road
//	rectangle(1,1,630,475);// boundary
		line(30+i,420,70+i,420);//upper
		line(30+i,420,10+i,440);//back
			line(70+i,420,100+i,440);//front
				line(50+i,422,68+i,422);//mirror1
					line(68+i,422,88+i,440);//mirror1
					line(50+i,422,50+i,440);//mirror1
					line(88+i,440,50+i,440);//mirror1
					
						rectangle(30+i,422,48+i,440);//mirror2	
						line(10+i,440,10+i,455);//backlight
				line(100+i,440,100+i,455);//frontlight
				
				line(100+i,455,85+i,455);//frontbottom
			line(10+i,455,25+i,455);//backbottom
			line(45+i,455,65+i,455);//bottom
			
			
				arc(35+i,460,0,180,10);//Tyre1arc
			circle(35+i,460,8);//tyre1	
		circle(35+i,460,2);//tyre1
			arc(75+i,460,0,180,10);//Tyre2arc
				circle(75+i,460,8);//tyre2*/
					circle(75+i,460,2);//tyre2
						delay(100);
	cleardevice();
	}
	
 getch();
}
 closegraph();
}