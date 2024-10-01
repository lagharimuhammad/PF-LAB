/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Write a program to find the greatest of three numbers using nested if-else statements.*/

#include<stdio.h>

int main()
{
	int num1, num2, num3;
	
	printf("enter value of num1: ");
	scanf("%d", &num1);
	
	printf("enter value of num2: ");
	scanf("%d", &num2);
	
	printf("enter value of num3: ");
	scanf("%d", &num3);
	
	//1st condition 
	if( num1 > num2)
	{ //1st condition start

		if( num1 > num3) \\ 2nd condition 
			{// 2nd condition starts
				printf("num1 is greatest");
			}// 2nd condition ends
		else
		{
			printf("num3 is greatest");
		}
	}//1st condition ends
	
	else if( num2 > num3) // third condition
			{ // third condition starts
				printf("num2 is greatest");
			} //third condition ends
	else
		{
			printf("num3 is gretaest");
		}
		
	
	return 0;
}