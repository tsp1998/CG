//nter>Draw Colorful Continuous Circular Loading Bar
#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
void main()
{
  int i, j, gd = DETECT, gm, k;
  initgraph(&gd, &gm, "c:\\tc\\bgi");
  while (!kbhit())
  {
    k += 30;
    setcolor(rand() % 16);
    for (i = k; i < 330 + k; i++)
    {
      for (j = 0; j < 50; j++)
        arc(300, 200, k, i, 50 + j);
    }
    cleardevice();
  }
  closegraph();
}
