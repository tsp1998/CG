#include "graphics.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
void main()
{
int gd,gm;gd=DETECT;
initgraph(&gd, &gm, "c:\\tc\\bgi");
setcolor(3);
setfillstyle(SOLID_FILL,RED);
bar(50, 50, 590, 430);
setfillstyle(1, 12);
bar(100, 100, 540, 380);
while(!kbhit())
{
putpixel(random(439)+101, 
random(279)+101,random(16));
setcolor(random(16));
circle(320,240,random(100));
}
getch();
closegraph();
}