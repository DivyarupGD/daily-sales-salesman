/*Daily sales of a salesman are given by the user (in Rs.). Draw a line graph using graphics in C that represents the 
daily sales report of a week graphically.*/



#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>

#define fy(y) (int)(getmaxy()-y)
#define toInt(x) (int)(0.5+x)

int max(int *a);	//prototype of function max()

int main()
{
	initwindow(640,480);
	
	int *a;	//arrayto store tha daily sales(in Rs.)
	int m;	//variable to store the max sales value
	float *na; 	//array to manipulate the sales value for plotting
	int i;
	
	a=(int *)malloc(7*sizeof(int));
	na=(float *)malloc(7*sizeof(float));
	
//The Axes
	setcolor(2);
	line(100,fy(-150),1000,fy(-150)); //x axis
	line(100,fy(-150),100,fy(450)); //y axis	
//THE DAY POINTS
	setcolor(4);
	//Day 1
	line(212,fy(-153),212,fy(-147));
	outtextxy(198,fy(-154),"Day 1");
	
	//Day 2
	line(324,fy(-153),324,fy(-147));
	outtextxy(310,fy(-154),"Day 2");
	
	//Day 3
	line(436,fy(-153),436,fy(-147));
	outtextxy(422,fy(-154),"Day 3");
	
	//Day 4
	line(548,fy(-153),548,fy(-147));
	outtextxy(534,fy(-154),"Day 4");
	
	//Day 5
	line(660,fy(-153),660,fy(-147));
	outtextxy(646,fy(-154),"Day 5");
	
	//Day 6
	line(772,fy(-153),772,fy(-147));
	outtextxy(758,fy(-154),"Day 6");
	
	//Day 7
	line(884,fy(-153),884,fy(-147));
	outtextxy(870,fy(-154),"Day 7");
	
//THE AXES NAME
	//x axis
	setcolor(1);
	outtextxy(500,fy(-170),"Days of the week");	
	
	//y axis
	setcolor(1);
	outtextxy(10,fy(100),"Sales(Rs.)");


//Y AXIS POINTS
	setcolor(4);
	line(103,fy(-100),97,fy(-100));
	line(103,fy(-50),97,fy(-50));
	line(103,fy(0),97,fy(0));
	line(103,fy(50),97,fy(50));
	line(103,fy(100),97,fy(100));
	line(103,fy(150),97,fy(150));
	line(103,fy(200),97,fy(200));
	line(103,fy(250),97,fy(250));
	line(103,fy(300),97,fy(300));
	line(103,fy(350),97,fy(350));
	
//input and manipulation
	
	//user input(entering the sales of each day)
	printf("\nEnter the sales of the salesman(in Rs.) for each day of a week\n");
	printf("\nDay 1:");
	scanf("%d",&a[0]);
	
	printf("\nDay 2:");
	scanf("%d",&a[1]);
	
	printf("\nDay 3:");
	scanf("%d",&a[2]);
	
	printf("\nDay 4:");
	scanf("%d",&a[3]);
	
	printf("\nDay 5:");
	scanf("%d",&a[4]);
	
	printf("\nDay 6:");
	scanf("%d",&a[5]);
	
	printf("\nDay 7:");
	scanf("%d",&a[6]);
	
	m=max(a);	//function call [max()]
	
	//manipulation
	
	for(i=0;i<=6;i++)
	{
		na[i]=a[i]*(400.0/m);
	}
	
	
//PLOTTING THE POINTS

	setcolor(5);	//color for the point
	circle(toInt(212),fy(toInt(na[0])),5);	//first day point
	
	setcolor(9);	//color for the line to x and y axis from the first day sales point
	line(toInt(212),fy(toInt(na[0])),toInt(212),fy(-150));	//line from first day sales point to x axis
	line(toInt(212),fy(toInt(na[0])),100,fy(toInt(na[0])));		//line from first day sales point to y axis
	
	
	
	//day1 to day2
	setcolor(3);	//color for the line
	line(toInt(212),fy(toInt(na[0])),toInt(324),fy(toInt(na[1])));
	
	setcolor(5);	//color for the point
	circle(toInt(324),fy(toInt(na[1])),5);	//second day point
	
	setcolor(9);	//color for the line to x and y axis from the second day sales point
	line(toInt(324),fy(toInt(na[1])),toInt(324),fy(-150));	//line from second day sales point to x axis
	line(toInt(324),fy(toInt(na[1])),100,fy(toInt(na[1])));		//line from second day sales point to y axis
		
	
	
	//day2 to day3
	setcolor(3);	//color for the line
	line(toInt(324),fy(toInt(na[1])),toInt(436),fy(toInt(na[2])));
	setcolor(5);	//color for the point
	circle(toInt(436),fy(toInt(na[2])),5);	//third day point
	
	setcolor(9);	//color for the line to x and y axis from the third day sales point
	line(toInt(436),fy(toInt(na[2])),toInt(436),fy(-150));	//line from third day sales point to x axis
	line(toInt(436),fy(toInt(na[2])),100,fy(toInt(na[2])));		//line from third day sales point to y axis
	
	
	
	//day3 to day4	
	setcolor(3);	//color for the line
	line(toInt(436),fy(toInt(na[2])),toInt(548),fy(toInt(na[3])));
	setcolor(5);	//color for the point
	circle(toInt(548),fy(toInt(na[3])),5);	//fourth day point
	
	setcolor(9);	//color for the line to x and y axis from the fourth day sales point
	line(toInt(548),fy(toInt(na[3])),toInt(548),fy(-150));	//line from fourth day sales point to x axis
	line(toInt(548),fy(toInt(na[3])),100,fy(toInt(na[3])));		//line from fourth day sales point to y axis
	
	
	
	//day4 to day5
	setcolor(3);	//color for the line
	line(toInt(548),fy(toInt(na[3])),toInt(660),fy(toInt(na[4])));	
	setcolor(5);	//color for the point
	circle(toInt(660),fy(toInt(na[4])),5);	//fifth day point
	
	setcolor(9);	//color for the line to x and y axis from the fifth day sales point
	line(toInt(660),fy(toInt(na[4])),toInt(660),fy(-150));	//line from fifth day sales point to x axis
	line(toInt(660),fy(toInt(na[4])),100,fy(toInt(na[4])));		//line from fifth day sales point to y axis
	
	
	
	//day5 to day6	
	setcolor(3);	//color for the line
	line(toInt(660),fy(toInt(na[4])),toInt(772),fy(toInt(na[5])));
	setcolor(5);	//color for the point
	circle(toInt(772),fy(toInt(na[5])),5);	//sixth day point
	
	setcolor(9);	//color for the line to x and y axis from the sixth day sales point
	line(toInt(772),fy(toInt(na[5])),toInt(772),fy(-150));	//line from sixth day sales point to x axis
	line(toInt(772),fy(toInt(na[5])),100,fy(toInt(na[5])));		//line from sixth day sales point to y axis
	
	
	
	//day6 to day7	
	setcolor(3);	//color for the line
	line(toInt(772),fy(toInt(na[5])),toInt(884),fy(toInt(na[6])));	
	setcolor(5);	//color for the point
	circle(toInt(884),fy(toInt(na[6])),5);	//seventh day point
	
	setcolor(9);	//color for the line to x and y axis from the seventh day sales point
	line(toInt(884),fy(toInt(na[6])),toInt(884),fy(-150));	//line from seventh day sales point to x axis
	line(toInt(884),fy(toInt(na[6])),100,fy(toInt(na[6])));		//line from seventh day sales point to y axis
	
	

	getch();
return 0;
}

//FUNCTION max()
int max(int *a)
{
	int m,i;
	m=a[0];
	for(i=1;i<=6;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
return m;
}
