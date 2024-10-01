/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Write a program that checks if a year is a leap year using the modulus operator*/

#include<stdio.h>

int main()
{
	int year;
	
	printf("enter a year: ");
	scanf("%d", &year);
	
	//condition for leap year for decades
	if( year % 100 == 0)
	{
		printf("leap year");
	}

	//condition for leap year for ordinary year
	else if( year % 4 == 0 && year % 100 != 0)
	{
		printf("leap year");
	}
	
	// not a leap year
	else
	{
		printf("not a leap year");
	}
	
	return 0;
}