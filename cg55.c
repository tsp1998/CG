#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	printf("This line will be deleted when you press a key.");

	getch();
	delline();
	gotoxy(0, 0);
	printf("Line deleted successfully.");

	getch();
	return 0;
}