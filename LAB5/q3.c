/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Write a program that checks if a number is divisible by both 3 and 5 using logical operators.*/

#include<stdio.h>

int main()
{

int n;

// input
printf("Input a Number: ");
scanf("%d", &n);

// condition for division 
if( n % 3 == 0 && n % 5 == 0)
{
	printf("Number is divisible by both 3 and 5");
}
else 
{
	printf("Number is not divisible");
}
	return 0;
}