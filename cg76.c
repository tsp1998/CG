//colorful ellipse
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
date:18-01-2018
*/

#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
void anm();
void main()
{
int gd = DETECT, gm;
char c;
clrscr();
initgraph(&gd, &gm,"C:\\TC\\BGI");
while(!kbhit()){
		//c=getch();
		if(c=='0')
		break;
		anm();
		}
		// Made_by_TSP
closegraph();
}
int r,bk;
void anm(){
	int i,j,x=320,y=240,count=0;
		cleardevice();
      setbkcolor(bk=rand()%15+1);
      i=10;
      while(1){
		r=rand()%15+1;
      if(r!=bk)
		break;
		}
      setcolor(r);
      while(i<480){
		line(0,5+i,640,i+5);
		i+=30;
}
i=15;
      while(i<640){
		line(5+i,0,i+5,480);
		i+=30;
}

while(1){
if(kbhit())
break;
while(1){
		x=rand()%630;
if(x%30==0 && x>0&& x<630)
break;
		}

while(1){
		y=rand()%480;
if(y%30==0 && y>0&& y<480)
break;
}
// Made_by_TSP
while(1){
		r=rand()%(rand()%14+1);
		if(r!=bk)
		break;
		}
			setcolor(r);
			setfillstyle(1,r);
		ellipse(5+x,0+y,0,360,10,5);
		floodfill(5+x,0+y,r);
		x=rand();y=rand();
		delay(1);
if(count==1500)
return;
count++;
		}
		}
