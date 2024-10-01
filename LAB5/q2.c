/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Create a program that determines if a number is positive, negative, or zero, and if it’s positive,
   checks if it’s an even or odd number.*/


#include<stdio.h>

int main()
{

int num;

printf("Input a Number: ");
scanf("%d", &num);

//condition for zero
if( num == 0)
{
	printf("Number is Zero");
}

//condition for negative
else if( num < 0)
{
	printf("Number is Negative");
}

//condition for positive
else if( num > 0)
{
	printf("Number is Positive\n");
	
	if( num % 2 ==0 )
	{
		printf("Number is Even");
		
	}
	
	else{
		printf("Number is Odd");
	}
}


return 0;
}