#include<stdio.h>

int addition(int a, int b)
{
	return a+b;
}

int subtraction(int a, int b)
{
	return a-b;
}

int multi(int a, int b)
{
	return a*b;
}

float division(int a, int b)
{
	return (float)a/(float)b;
}

int mod(int a, int b)
{
	return a%b;
}

int main()
{
	while(1)
	{
	int option = 0;
	int a, b;
	
	printf("\t-----Menu-----\n");
	printf("1: Addition\n");
	printf("2: Subtraction\n");
	printf("3: Multiplication\n");
	printf("4: Division\n");
	printf("5: Mod\n");
	printf("6: Exit\n");
	
	printf("Enter your option(1-6): ");
	scanf("%d",&option);
	
		switch(option)
		{
			case 1:
				printf("Enter a value: ");
				scanf("%d", &a);
				printf("Enter another value: ");
				scanf("%d", &b);
				
				printf("Addition of a & b is: %d", addition(a,b));
				printf("\n");
				break;
				
			case 2:
				printf("Enter a value: ");
				scanf("%d", &a);
				printf("Enter another value: ");
				scanf("%d", &b);

				printf("Subtraction of a & b is: %d", subtraction(a,b));			
				printf("\n");
				break;
				
			case 3:
				printf("Enter a value: ");
				scanf("%d", &a);
				printf("Enter another value: ");
				scanf("%d", &b);
				
				printf("Multiplication of a & b is: %d", multi(a,b));
				printf("\n");
				break;
				
			case 4:
				printf("Enter a value: ");
				scanf("%d", &a);
				printf("Enter another value: ");
				scanf("%d", &b);

				printf("Division of a & b is: %f", division(a,b));
				printf("\n");
				break;
				
			case 5:
				printf("Enter a value: ");
				scanf("%d", &a);
				printf("Enter another value: ");
				scanf("%d", &b);

				printf("Mod of a & b is: %d", mod(a,b));
				printf("\n");
				break;

			case 6:
			printf("Program End");
			return 0;
				
			default: 
			printf("Enter choice from 1 to 7: ");
			
		}
	
	}
	
 	return 0;
}

