//ATM Machine
#include <stdio.h>
#include <graphics.h>
int main()
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TC\\BGI");
  outtextxy(300, 250, "WELCOMETO SKN BANK");
  getchar();
  return 0;
}