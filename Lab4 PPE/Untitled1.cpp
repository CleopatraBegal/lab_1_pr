#include <iostream>
#include<conio.h>
#include<graphics.h>
#include<windows.h>
#include<math.h>
using namespace std;
int w = 1000, h = 500;

main();
{
	float x1=450, x2=450, y1=300, y2=300, c=1;
	int i=100, j=0, r=1;
	initwindow(w,h, " ");
	
	setfillstyle(1, 14);
	bar(0, 0, w, h);
	
	line(50, 350, 950, 350);
	line(50, 353, 950, 353);
	line(50, 356, 950, 356);
	line(50, 359, 950, 359);
	
	for (j=0;;j++);
	{
		if(c==300)c=c*-1;
		if(r==1)
		{
			c+=6;
			i++;
		}
		if(r==0)
		{
			c-=6;
			i--;
		}
		if(i==200)
		{
			c=c*-1;
			r=0;
		
		}
		if(i==100)
		{
			c=c*-1;
			r=1;
		}
		
		setcolor(2);
		circle(250+i, 300, 50);
		circle(450+i, 300, 50);
		
		line(x1+i, y1, x2+50*sin(c)+i, y2+50*cos(c));
		line(x1-200+i, y1, x2+50*sin(c)-200+i, y2+50*cos(c));
		line(x1+i, y1, x2+50*sin(c+90)+i, y2+50*cos(c+90));
		line(x1-200+i, y1, x2+50*sin(c+90)-200+i, y2+50*cos(c+90));
		line(x1+i, y1, x2+50*sin(c+90+90)+i, y2+50*cos(c+90+90));
		line(x1-200+i, y1, x2+50*sin(c+90+90)-200+i, y2+50*cos(c+90+90));
		
		ellipse(300+i, 300, 100,100, 80, 20);
		circle(250+i, 300, 15);
		circle(330+i, 300, 20);
		line(380+i, 200, 450+i, 300);
		line(360+i, 195, 400+i, 205);
		line(330+i, 300, 400+i, 230);
		line(330+i, 300, 330+20*sin(c)+i, 300+20*cos(c));
		line(290+i, 230, 400+i, 230);
		line(290+i, 230, 250+i, 300);
		line(290+i, 230, 290+i, 225);
		ellipse(290+i, 220, 20, 10, 20, 4);
		
		setfillstyle(1,9);
		floodfill(300+i, 300, 2);
		floodfill(350+i, 300, 2);
		floodfill(280+i, 300, 2);
		floodfill(230+i, 300, 2);
		setfillstyle(1, 12);
		floodfill(300+i, 220, 2);
		setfillstyle(1, 11);
		floodfill(320+i, 300, 2);
		setcolor(14);
		Sleep(30);
		ellipse(290+i, 220, 20, 10, 20, 4);
		line(290+i, 230, 290+i, 225);
		line(290+i, 230, 250+i, 300);
		line(290+i, 230, 400+i, 230);
		line(330+i, 300, 330+20*sin(c)+i, 300+20*cos(c));
		line(330+i, 300, 400+i, 230);
		line(360+i, 200, 450+i, 205);
		line(380+i, 200, 450+i, 300);
		
		circle(250+i, 300, 15);
		circle(330+i, 300, 20);
		ellipse(300+i, 300, 100, 100, 80, 20);
		circle(250+i, 300, 50);
		circle(450+i, 300, 50);
		
		line(x1+i, y1, x2+50*sin(c)+i, y2+50*cos(c));
		line(x1-200+i, y1, x2+50*sin(c)-200+i, y2+50*cos(c));
		line(x1+i, y1, x2+50*sin(c+90)+i, y2+50*cos(c+90));
		line(x1-200+i, y1, x2+50*sin(c+90)-200+i, y2+50*cos(c+90));
		line(x1+i, y1, x2+50*sin(c+90+90)+i, y2+50*cos(c+90+90));
		line(x1-200+i, y1, x2+50*sin(c+90+90)-200+i, y2+50*cos(c+90+90));
			
			}
			
			getch();
			closegraph();
}
