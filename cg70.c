//Circle Animation
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
     int flag;
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
unsigned int r;
char c;
int gd = DETECT, gm,i=0,j=1,x=0,y=0;
int max=0,min=0;
char tsp[2]={'0'};
clrscr();
initgraph(&gd, &gm,"f:\\TC\\BGI");
settextstyle(10,0,1);
setcolor(15);
outtextxy(200,200,"Enter any key");
outtextxy(200,300,"Enter S to Exit");
settextstyle(5,0,3);
setcolor(4);
outtextxy(220,430,"Made by TSP");
getch();
cleardevice();
while(1){
c=getch();
setcolor(j);
setfillstyle(1,j);
circle(320,240,i);
floodfill(320,240,j);
if(c=='s' || c=='S')
exit(0);
else if(c=='+'){
i++;
flag=0;
}
 else if(c=='-')
{
if (flag==1)
cleardevice();
i--;
flag=1;
}
j++;
if(j>15)
j=1;
}
closegraph();
}