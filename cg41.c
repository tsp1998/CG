//Graphics Information
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int i,j,k,ch;
	void colorcode(int x,int y,int n);
	void fillcode(int x,int y,int n);//fill Styles
void color();// all Colors
void main()
{
	int ch,gd=DETECT,gm;
	int error;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	error=graphresult();
	
	printf("1.Graphics Drawing Functions\n2.Colors\n3.Fill Styles");
		printf("Enter Your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 2:
		color();
	}
	closegraph();
}


void color()// all Colors
{
	cleardevice();
		rectangle(0,0,630,475);//boundary
		printf("1.Colors\2.Fill Styles");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		k=0;
			for(j=2;j<400;j+=140)
			{
			for(i=5;i<600;i+=130)
		{
			setfillstyle(SOLID_FILL,k);
		circle(50+i,70+j,50);
		floodfill(30+i,35+j,WHITE);
		if(k==13)
	colorcode(5+i,70+j,k);

		else
			colorcode(20+i,70+j,k);

		k++;
	}
	}
	break;
	
		case 2:// fill styles
		
		k=1;
			for(j=2;j<400;j+=140)
			{
			for(i=5;i<600;i+=160)
		{
	setfillstyle(k,LIGHTGREEN);
			rectangle(0+i,50+j,120+i,120+j);

		floodfill(20+i,70+j,WHITE);

fillcode(10+i,140+j,k);

		k++;
	}
	}
	break;
	}
		
	setcolor(LIGHTGREEN);
	settextstyle (1, HORIZ_DIR , 3) ;
		outtextxy(230,430,"Creation by TSP");
		getch();
	}
	
	void colorcode(int x,int y,int n)
	{
		switch(n)
		{
		
			case 0:
		outtextxy(x+20,y-10,"0");
			outtextxy(x,y,"BLACK");// =0    /* dark colors */
		break;
  case 1:
  	outtextxy(x+20,y-10,"1");
	outtextxy(x,y,"BLUE"); //       =  1,
   break;
   case  15:
   setcolor(BLACK);
 	outtextxy(x+20,y-10,"15");
	outtextxy(x,y,"WHITE"); //2
break;

  case 2:
  	outtextxy(x+20,y-10,"2");
	outtextxy(x,y,"GREEN"); //2
break;
  case  9:
  
		outtextxy(x+20,y-10,"9");
			outtextxy(x,y,"LIGHTBLUE");
			
break;
  case 10:
  	setcolor(BLACK);
	outtextxy(x+20,y-10,"10");
		outtextxy(x,y,"LIGHTGREEN");
		setcolor(WHITE);
	break;
	 case 11:
	 setcolor(BLACK);
	outtextxy(x+20,y-10,"11");
		outtextxy(x,y,"LIGHTCYAN");	setcolor(WHITE);
break;
  case 12:
	outtextxy(x+20,y-10,"12");
		outtextxy(x,y,"LIGHTRED");
	break;
	 case  13:
	outtextxy(x+20,y-10,"13");
		outtextxy(x,y,"LIGHTMAGENTA");
break;
  case 14:
  	setcolor(BLACK);
  		outtextxy(x+20,y-10,"14");
	outtextxy(x,y,"YELLOW");
	setcolor(WHITE);
	break;
  case  8:
	outtextxy(x+20,y-10,"8");
		outtextxy(x,y,"DARKGRAY");
	break;
  case  7:
	outtextxy(x+20,y-10,"7");
		outtextxy(x,y,"LIGHTGRAY");
	break;
  case  6:
  	outtextxy(x+20,y-10,"6");
	outtextxy(x,y,"BROWN");
	break;
  case 5:
	outtextxy(x+20,y-10,"5");	outtextxy(x,y,"MAGENTA");
	break;
  case 4:
  	outtextxy(x+20,y-10,"4");
	outtextxy(x,y,"RED");
	break;
  case 3:
  	outtextxy(x+20,y-10,"3");
	outtextxy(x,y,"CYAN");
	break;
		}
	}

			void fillcode(int x,int y,int n)
	{
		switch(n)
		{
		
			case 0:
		outtextxy(x+20,y-10,"0");
			outtextxy(x,y,"EMPTY_FILL");// =0    /* dark colors */
		break;
  case 1:
  	outtextxy(x+20,y-10,"1");
	outtextxy(x,y,"SOLID_FILL"); //       =  1,
   break;
  

  case 2:
  	outtextxy(x+20,y-10,"2");
	outtextxy(x,y,"LINE_FILL"); //2
break;
  case  9:
  
		outtextxy(x+20,y-10,"9");
			outtextxy(x,y,"INTERLEAVE_FILL");
			
break;
  case 10:
  	
	outtextxy(x+20,y-10,"10");
		outtextxy(x,y,"WIDE_DOT_FILL");
		
	break;
	 case 11:

	outtextxy(x+20,y-10,"11");
		outtextxy(x,y,"CLOSE_DOT_FILL");
		
break;
  case 12:
	outtextxy(x+20,y-10,"12");
		outtextxy(x,y,"USER_FILL");
	break;
	 
  case  8:
	outtextxy(x+20,y-10,"8");
		outtextxy(x,y,"XHATCH_FILL");
	break;
  case  7:
	outtextxy(x+20,y-10,"7");
		outtextxy(x,y,"HATCH_FILL");
	break;
  case  6:
  	outtextxy(x+20,y-10,"6");
	outtextxy(x,y,"LTBKSLASH_FILL");
	break;
  case 5:
	outtextxy(x+20,y-10,"5");	outtextxy(x,y,"BKSLASH_FILL");
	break;
  case 4:
  	outtextxy(x+20,y-10,"4");
	outtextxy(x,y,"SLASH_FILL");
	break;
  case 3:
  	outtextxy(x+20,y-10,"3");
	outtextxy(x,y,"LTSLASH_FILL");
	break;
		}
	}