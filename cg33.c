//Triangle Transformations
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int i,j,mat[3][2],tx,ty,gd=DETECT,gm;
	int m=3,n=2;
	int error;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	error=graphresult();
	if (error!=grOk)
 {
	outtext("error");
	getch();
}
else{
	printf("enter Cordinates of Triangles:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("enter Cordinatemat[%d][%d]:",i+1,j+1);
		scanf("%d",&mat[i][j]);
		}
		}
			
				for(i=0;i<m-1;i++)
   {
       for(j=0;j<n;j++)
       {
      line(mat[i][j],mat[i][j+1],mat[i+1][j],mat[i+1][j+1]);
      break;
       }
   }
printf("i=%d,n=%d",i,j); line(mat[i][0],mat[i][1],mat[0][0],mat[0][1]);
				printf("enter tx:");
				scanf("%d",&tx);
				printf("enter tx:");
				scanf("%d",&ty);
		for(i=0;i<3;i++)
		{
		for(j=0;j<2;j++)
		{
		mat[i][j]+=tx;
		mat[i][j]+=ty;
		}
		}
		
					line(mat[0][0],mat[0][1],mat[1][0],mat[1][1]);
			  line(mat[1][0],mat[1][1],mat[2][0],mat[2][1]);
			  line(mat[2][0],mat[2][1],mat[0][0],mat[0][1]);
			  
				for(i=0;i<m-1;i++)
   {
       for(j=0;j<n;j++)
       {
      line(mat[i][j],mat[i][j+1],mat[i+1][j],mat[i+1][j+1]);
      break;
       }
   }
 line(mat[i][0],mat[i][1],mat[0][0],mat[0][1]);
	getch();
}
	closegraph();
}