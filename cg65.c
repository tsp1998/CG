//Line Encoding
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
 int length,i,j=1,part;
 char stream[100]={'\0'};
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 cleardevice();
   gets(stream);
   cleardevice();
 length=strlen(stream);
 part=550/length;
 //printf("%d",part);
       line(0,20,550,20);
       outtextxy(550,20,"unipolar");
       for(i=1;i<=length;i++){
       	setcolor(14);
       if(stream[i-1]=='0')
		line((i-1)*part,20,i*part,20);
		else {
		line((i-1)*part,10,i*part,10);
		line((i-1)*part,20,(i-1)*part,10);
		if(stream[i]=='0')
		line((i)*part,20,i*part,10);
		}
		}
       
 getch();
 closegraph();
}