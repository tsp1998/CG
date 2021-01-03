 //Star Animation
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
void anm(int x,int y);
void main()
{
 int i,i1, gdriver=DETECT,gmode,error;
 int expand=20;
  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
		for(;!kbhit();)
	{

	if(kbhit())
	break;
	anm(random(450)+expand,random(600)+expand);
}
closegraph () ;
}

void anm(int x,int y){
register int i,j;
int expand=20;
	      //	setcolor(random(15)+1);
		line(x+20,y,x-20,y);//hori
		line(x,y+20,x,y-20);      //vert

		line(x+20,y+20,x-20,y-20);
		line(x-20,y+20,x+20,y-20);
		while(1){
		i=random(15);
		j=random(10);
		if(kbhit())
		break;
		setcolor(random(14)+1);
/*
		line(x+expand,y-i,x-expand,y+i);//hori
		line(x+expand+i,y+i,x-expand-i,y-i);//hori
		line(x+i,y+expand,x-i,y-expand-i);      //vert
		line(x-i,y+expand,x+i,y-expand); 
		//vert
*/

		line(x+20+j,y+20,x-20-j,y-20);
	       line(x-20,y+20+j,x+20,y-20-j);
		line(x+20-j,y+20,x-20+j,y-20);
	       line(x-20,y+20-j,x+20,y-20+j);


		line(x+20,y+20+j,x-20,y-20-j);
	       line(x-20+j,y+20,x+20-j,y-20);
		line(x+20,y+20-j,x-20,y-20+j);
	       line(x-20-j,y+20,x+20+j,y-20);
		   
						delay(200);
			     setcolor(0);
		/*
		line(x+expand,y-i,x-expand,y+i);//hori
		line(x+expand+i,y+i,x-expand-i,y-i);//hori
		line(x+i,y+expand,x-i,y-expand-i);      //vert
		line(x-i,y+expand,x+i,y-expand); 
		//vert
*/
						delay(200);
			
		line(x+20+j,y+20,x-20-j,y-20);
	       line(x-20,y+20+j,x+20,y-20-j);
		line(x+20-j,y+20,x-20+j,y-20);
	       line(x-20,y+20-j,x+20,y-20+j);


		line(x+20,y+20+j,x-20,y-20-j);
	       line(x-20+j,y+20,x+20-j,y-20);
		line(x+20,y+20-j,x-20,y-20+j);
	       line(x-20-j,y+20,x+20+j,y-20);

		   
		   }
//	       line(x+expand,y2,x-expand,y);
		delay(50);
		if(getch()=='0')
		exit(0);
	       
		cleardevice();
		}
