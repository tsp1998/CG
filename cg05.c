//TSP Animation
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
int i;
char str[30]="Tandale Shubham Parmeshwar";
char put[1];
char str2[40]="WELCOME TO MY WORLD";


 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
  
		for(i=0;i<strlen(str);i++)
		{
			put[0]=str[i];
				put[1]='\0';
					outtextxy(40+20*i,40,put);
		delay(100);
		cleardevice();
	}
	
		for(i=0;i<strlen(str);i++)
		{
			put[0]=str[i];
				put[1]='\0';
					outtextxy(40+20*i,40,put);
		delay(500);
		//cleardevice();
	}
		    getch();
 closegraph();
   }