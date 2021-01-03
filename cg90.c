//Indian Flag
/*
Made by TSP
Programmer
Email-tsp@outlook.in
*/
 #include<stdlib.h>
#include<graphics.h>
#include<conio.h>
void anm(int hcounter,int vcounter)
{
int gd = DETECT, gm,i,j,i1,j1,x=0,y=0,k=0;
int color[3]={12,15,10};

clrscr();
initgraph(&gd, &gm,"C:\\TC\\BGI");
cleardevice();

	for(i=0;i<480;i++)
	{
for(j=0;j<640;j+=hcounter)
	{
		if(kbhit())
		goto end;
putpixel(0+j,0+i,color[k]);
putpixel(1+j,480-i,color[2-k]);
//delay(100);
}
if(i==0)
continue;
if(i%160==0)
		k++;
}

for(i=0;i<640;i++)
	{
for(j=0;j<480;j+=vcounter)
	{
		if(kbhit())
		goto end;
		if(j<=160){
putpixel(0+i,0+j,color[0]);
putpixel(640-i,1+j,color[0]);
}

else if(j>=160 && j<=320){
putpixel(0+i,0+j,color[1]);
putpixel(640-i,1+j,color[1]);
}

else if(j>=320 && j<=480){
putpixel(0+i,0+j,color[2]);
putpixel(640-i,1+j,color[2]);
//delay(100);
}

}
if(i==0)
continue;
if(i%160==0)
		k++;
}

setcolor(1);
while(!kbhit()){
for(i1=0;i1<15;i1++){
//pixel();pixel();
	j1=i1/2;
	setcolor(1);
//hr
line(320,240,355-i1,240+i1);
line(320,240,285+i1,240+i1);

line(320,240,355-i1,240-i1);
line(320,240,285+i1,240-i1);
//vr
line(320,240,320+i1,205+i1);
line(320,240,320+i1,275-i1);

line(320,240,320-i1,205+i1);
line(320,240,320-i1,275-i1);

//slant front
line(320,240,340+j1,220+j1);
line(320,240,340+j1,260-j1);

line(320,240,340-j1,220-j1);
line(320,240,340-j1,260+j1);
//slant back
line(320,240,300+j1,220+j1);
line(320,240,300+j1,260-j1);

line(320,240,300-j1,220+j1);
line(320,240,300-j1,260-j1);
delay(100);

//pixel();pixel();

setcolor(15);
//hr
line(320,240,355-i1,240+i1);
line(320,240,285+i1,240+i1);

line(320,240,355-i1,240-i1);
line(320,240,285+i1,240-i1);
//vr
line(320,240,320+i1,205+i1);
line(320,240,320+i1,275-i1);

line(320,240,320-i1,205+i1);
line(320,240,320-i1,275-i1);

//slant front
line(320,240,340+j1,220+j1);
line(320,240,340+j1,260-j1);

line(320,240,340-j1,220-j1);
line(320,240,340-j1,260+j1);
//slant back
line(320,240,300+j1,220+j1);
line(320,240,300+j1,260-j1);

line(320,240,300-j1,220+j1);
line(320,240,300-j1,260-j1);
delay(100);
}
if(kbhit())
break;
}


end:
getch();
cleardevice();
closegraph();
}
void main(){
	char ch;
int font=0;
int f[5]={1,3,4,7,8};
 //	if(kbhit())
       //	break;
anm(4,2);

}