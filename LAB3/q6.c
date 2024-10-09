#include<stdio.h>
int main()
{
	float x1, x2, y1, y2, slope;
	x1=5;
	x2=3;
	y1=4;
	y2=2;
	
	//points of the line 
	printf("points of the line are (5,4),(3,2)\n");
	
	
	//calculating
	slope = (y2-y1)/(x2-x1);
	
	//displaying the results
	printf("the slope of the line is: %.3f", slope);
	
	
	
	return 0;
}
