//Triangle Translation
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
float getObject();
float getTN();
float MatrixProduct (float o[10][10], float tn[10][10], int m,int n,int m2,int n2 );//matrix product
void print(float p[10][10]);
   int i,j,m,n,m2,k,n2,ch;
	float o[10][10];
    //	float tn[10]10];
	float td[10][10];
	float tn[10][10];
void main()
{
	int i,j,mat[3][2],tx,ty,gd=DETECT,gm;
	int error;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	error=graphresult();
	if (error!=grOk)
 {
	outtext("error");
	getch();
}
	getObject();
	
		
  
	getTN();
	 MatrixProduct (o,tn,m,n,m2,n2);//matrix product
	
	
}
/*
int 3dTranslation()
{
	for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
      line(mat[i][j],mat[i][j+1],mat[i+1][j],mat[i+1][j+1]);
      break;
       }
   }
   
   */
   float MatrixProduct (float o[10][10], float tn[10][10], int m,int n,int m2,int n2 )//matrix product
{

   float sum=0;



   for(i=0;i<m;i++)
   {
       for(j=0;j<m2;j++)
       {
	 for(k=0;k<n2;k++)
       {
	 sum+=o[i][k]*tn[k][j];
       }
	 td[i][j]=sum;
	 sum=0;
       }
   }
   print(td);
   return 0;
}

float getObject()
{
 printf("Object Matrix: ");
    printf("Rows:");
           scanf("%d",&m);
              printf("Columns:");
           scanf("%d",&n);
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("O[%d][%d]: ",i+1,j+1);
           scanf("%f",&o[i][j]);
       }
   }
      print(o);
   return 0;
}


float getTN()
{
 printf("Transformation Matrix: ");
    printf("Rows:");
           scanf("%d",&m2);
              printf("Columns:");
           scanf("%d",&n2);
   for(i=0;i<m2;i++)
   {
       for(j=0;j<n2;j++)
       {
           printf("O[%d][%d]: ",i+1,j+1);
           scanf("%f",&tn[i][j]);
       }
   }
   return 0;
}

void print(float p[10][10])
{
	
	
	printf("m=%d",m);
		printf("n=%d",n);
		
			for(i=0;i<m;i++)
   {
   	puts("");
       for(j=0;j<n;j++)
       {
      printf("%d ",(int)p[i][j]);
       }
   }
			for(i=0;i<m-1;i++)
   {
       for(j=0;j<n;j++)
       {
      line(p[i][j],p[i][j+1],p[i+1][j],p[i+1][j+1]);
      break;
       }
   }
 line(p[i][0],p[i][1],p[0][0],p[0][1]);
	getch();

	closegraph();
}