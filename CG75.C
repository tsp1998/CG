#include "graphics.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
void main()
{
int gm,gd=DETECT, i=0;
initgraph(&gd, &gm, "c:\\tc\\bgi");
start:
while(!kbhit()){
putpixel(random(640),random(480),random(14));
i++;
if(i==1000)
goto start;
}
getch();
closegraph();
}