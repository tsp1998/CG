//Transformation
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
float getObject();
void select(); //select transformation
float getTN();
int translation();
void print(float p[10][10]);
float MatrixProduct(float tn[10][10], int m2, int n2); //matrix product
int i, j, m, n, m2, k, n2, ch;
float o[10][10], tn[10][10], td[10][10];
int check = 2;
int main()
{
	int gd = DETECT, gm;
	int error;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	error = graphresult();
	if (error != grOk)
	{
		outtext("error");
		getch();
	}
	getObject();

	select();

	getch();
	closegraph();
}

void select() //select transformation
{
	printf("1.Translation\n2.Scaling\n3.Rotation\n4.Reflection\n5.Shearing\nSelect One:");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		translation();
		break;
	case 2:
		scaling();
		break;
	case 3:
		rotation(); /*
	break;
		case 4:
2dReflection();
	break;
		case 5:
2dShearing();
	break;*/
	}
}

float getObject()
{
	printf("Object Matrix: ");
	printf("Rows:");
	scanf("%d", &m);
	printf("Columns:");
	scanf("%d", &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("O[%d][%d]: ", i + 1, j + 1);
			scanf("%f", &o[i][j]);
		}
	}
	cleardevice();
	//  clrscr();
	print(o);
}

float getTN()
{
	printf("Transformation Matrix: ");
	printf("Rows:");
	scanf("%d", &m2);
	printf("Columns:");
	scanf("%d", &n2);
	for (i = 0; i < m2; i++)
	{
		for (j = 0; j < n2; j++)
		{
			printf("O[%d][%d]: ", i + 1, j + 1);
			scanf("%f", &tn[i][j]);
		}
	}
}

float MatrixProduct(float tn[10][10], int m2, int n2) //matrix product
{

	float sum = 0;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m2; j++)
		{
			for (k = 0; k < n2; k++)
			{
				sum += o[i][k] * tn[k][j];
			}
			td[i][j] = sum;
			sum = 0;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2.f ", td[i][j]);
		}
		puts("");
	}
	if (check == 3)
	{

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == 0)
					td[i][j] += 300;
				else
					td[i][j] += 250;
			}
		}
	}
	check = 0;

	print(td);
}

int translation()
{
	float tx, ty;
	printf("enter tx:");
	scanf("%f", &tx);
	printf("enter tx:");
	scanf("%f", &ty);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			td[i][j] = o[i][j] + tx;
			td[i][j] = o[i][j] + ty;
		}
	}
	print(td);
	return 0;
}

int scaling()
{
	float sx, sy;
	printf("enter sx:");
	scanf("%f", &sx);
	printf("enter sx:");
	scanf("%f", &sy);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			tn[i][j] = 0;
		}
	}
	tn[0][0] = sx;
	tn[1][1] = sy;
	MatrixProduct(tn, 2, 2); //matrix product
	return 0;
}

int rotation()
{
	float angle;

	printf("enter angle:");
	scanf("%f", &angle);

	line(300, 0, 300, 500);
	line(0, 250, 650, 250);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == 0)
				o[i][j] += 300;
			else
				o[i][j] += 250;
		}
	}
	print(o);
	tn[0][0] = cos(angle * 3.14 / 180);
	tn[1][1] = cos(angle * 3.14 / 180);
	tn[0][1] = sin(angle * 3.14 / 180);
	tn[1][0] = -sin(angle * 3.14 / 180);

	check = 3;
	MatrixProduct(tn, 2, 2); //matrix product

	return 0;
}

void print(float p[10][10])
{
	for (i = 0; i < m - 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			line(p[i][j], p[i][j + 1], p[i + 1][j], p[i + 1][j + 1]);
			break;
		}
	}
	line(p[i][0], p[i][1], p[0][0], p[0][1]);
}