//Rotation Transformation
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
void print(float p[10][10]);
float MatrixProduct(float tn[10][10], int m2, int n2); //matrix product
int rotation();
int i, j, m, n, m2, k, n2, ch;
float o[10][10], tn[10][10], td[10][10];
int main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TC\\BGI");
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
    print(o);
    rotation();
    getch();
    closegraph();
}
int rotation()
{
    float angle;
    printf("enter angle:");
    scanf("%f", &angle);
    print(o);
    tn[0][0] = cos(angle * 3.14 / 180);
    tn[1][1] = cos(angle * 3.14 / 180);
    tn[0][1] = sin(angle * 3.14 / 180);
    tn[1][0] = -sin(angle * 3.14 / 180);

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
    print(td);
}