
#include <graphics.h>
#include <conio.h>
main()
{
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "C:\\TC\\BGI");
	while (1)
	{
		if (getch() == '0')
			break;
		cleardevice();
		printf("%d\r", rand());
	}
	closegraph();
	return 0;
}