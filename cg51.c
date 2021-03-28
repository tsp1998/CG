///DDA Line Drawing Algorithm
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void main()
{
    float x, y, x1, x2, y1, y2, xi, yi, length, dx, dy;
    int i, ch;
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
    cleardevice();

    printf("Enter X1 & Y1:");
    scanf("%f%f", &x1, &y1);

    printf("Enter X2 & Y2:");
    scanf("%f%f", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    if (dx >= dy)
    {
        length = dx;
    }
    else
    {
        length = dy;
    }
    dx = dx / length;
    dy = dy / length;

    x = x1 + 0.5 * abs(dx);
    y = y1 + 0.5 * abs(dy);

    clrscr();
    cleardevice();
    /*
printf("\n1.Top to Bottom\n2.Bottom to Top\nEnter Your Choice:");
scanf("%d",&ch);
 */
    //if(ch==1)
    //{
    for (i = 0; i < (float)length; i++)
    {
        putpixel((int)x, (int)y, 4);
        x += dx;
        y += dy;
        delay(10);
    }
    // }

    /*
if(ch==2)
{
for(i=(float)length;i>0;i--)
{
    putpixel((int)dx,(int)dy,4);
    dx-=x;
    dy-=y;
    delay(10);
}
 } */
    getch();
    closegraph();
}
