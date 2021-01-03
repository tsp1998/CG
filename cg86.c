//waving flag
#include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<math.h>
 #include<dos.h>

 void dda(float x1,float y1,float x2,float y2,int z)
 {
	float dx,dy,x=x1,y=y1,m;
	int i;

	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>=abs(dy))
	m=abs(dx);
	else m=abs(dy);
	putpixel((int)x,(int)y,z);
	for(i=1;i<=m;i++)
	{
		x=x+dx/m;
		y=y+dy/m;
		putpixel((int)x,(int)y,z);
	}
 }

void main()
{

	float l1=250,l2=350,l3=50,l4=80,l5=120,l6=150,i,i1,i2,i3,b,a1,a2,a3,e;

	int gd=DETECT,gm=DETECT;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	printf(" Algorithm DDA");
	a1=(l2-l1)/3;
	a2=(l2-l1)/2;
	a3=(l5-l4)/2;
	i1=l1+a1;
	i2=i1-l1;
	i3=i1+i2;
	setbkcolor(0);
	while(!kbhit())
	{ i=1;
	e=0;

	while(((i<=i1)||(i<=i3)||(i<=l2))&&(i<=8))
	{

	circle(245,47,4);
	dda(240,50,240,350,8);
	dda(250,50,250,350,8);
	dda(350,50-i,350,150-i,7);
	outtextxy(getmaxx()-150,(((getmaxy()/2)-50)+(10*i)),"JAIHIND !!!!");
	outtextxy(getmaxx()-170,getmaxy()-40,"DONE BY SEENIVASAN.P");
	setfillstyle(11,3);
	fillellipse(l1+a2,l4+a3-i,13,13-e);
	dda(l1,l3,i1,l3-i,6);
	dda(l1,l4,i1,l4-i,15);
	dda(l1,l5,i1,l5-i,15);
	dda(l1,l6,i1,l6-i,2);

	dda(i1,l3-i,i3,l3,6);
	dda(i1,l4-i,i3,l4,15);
	dda(i1,l5-i,i3,l5,15);
	dda(i1,l6-i,i3,l6,2);

	dda(i3,l3,l2,l3-i,6);
	dda(i3,l4,l2,l4-i,15);
	dda(i3,l5,l2,l5-i,15);
	dda(i3,l6,l2,l6-i,2);

	bar3d(l1-50, 355, l1+50,350+55, 10, 3);

	i=i+1;
	e=e+0.25;
	delay(500);
	cleardevice();
	}
	 i=8;
	 b=0;
	while(((i<=i1)||(i<=i3)||(i<=l1))&&(i>=1))
	{
	circle(245,47,4);
	dda(240,50,240,350,8);
	dda(250,50,250,350,8);
	dda(350,50-i,350,150-i,7);
	outtextxy(getmaxx()-150,(((getmaxy()/2))-50+(10*i)),"JAIHIND !!!!");
       outtextxy(getmaxx()-170,getmaxy()-40,"DONE BY SEENIVASAN.P");
	setfillstyle(1,4);
       fillellipse(l1+a2,l4+a3-i,13,13-e);

	dda(l1,l3,i1,l3-i,6);
	dda(l1,l4,i1,l4-i,15);
	dda(l1,l5,i1,l5-i,15);
	dda(l1,l6,i1,l6-i,2);

	dda(i1,l3-i,i3,l3,6);
	dda(i1,l4-i,i3,l4,15);
	dda(i1,l5-i,i3,l5,15);
	dda(i1,l6-i,i3,l6,2);

	dda(i3,l3,l2,l3-i,6);
	dda(i3,l4,l2,l4-i,15);
	dda(i3,l5,l2,l5-i,15);
	dda(i3,l6,l2,l6-i,2);

       bar3d(l1-50, 355, l1+50,350+55, 10, 3);

	i=i-1;
	e=e-0.25;
	delay(500);
	cleardevice();
	}
	}
	getch();
	  getch();
}