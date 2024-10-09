#include<stdio.h>

int main()
{
	//initialisation
	int calc;
	
	//input
	printf("Press 1 to calculate area of the Circle\n");
	printf("Press 2 to calculate area of the Rectangle\n");
	printf("Press 3 to calculate area of the Triangle\n");
	
		printf("Select anyone program of the above: ");
	scanf("%d", &calc);
	
	switch(calc)
	{ //switch start
		case 1:
			//for area of circle
			float r, area;
			printf("Input radius of the Circle: ");
			scanf("%f", &r);
			
			area = (3.142*r)*r;
			
			printf("Area of the circle is: %.2f", area);
			break;
		
		case 2:
			//for area of rectngle
			float l, b, areaa;
			printf("Input length of the rectangle: ");
			scanf("%f", &l);
			printf("\n");
			
			printf("Input breadth of the rectangle: ");
			scanf("%f", &b);
			
			areaa = (l*b);
			
			printf("Area of the rectangle is: %.2f", areaa);
			break;
			
		case 3:
			//for area of triangle
			float length, height, Areaa;
			printf("Input length of the triangle: ");
			scanf("%f", &length);
			printf("\n");
			
			printf("Input height of the triangle: ");
			scanf("%f", &height);
			
			Areaa = (length*height)/2;
			
			printf("Area of the triangle is: %.2f", Areaa);
			break;
			
			default:
				printf("Invalid selection");
	
	}// switch end
	
	return 0;
}