/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Write a program using a ternary operator to find the maximum of two numbers.*/

#include<stdio.h>

int main()
{
	int a, b;
	
	printf(" ENTER FIRST NUMBER: ");
	scanf("%d", &a);
	printf(" ENTER SECOND NUMBER: ");
	scanf("%d", &b);
	
	// condition to find greatest number using ternary operator
	( a > b) ? printf("FIRST NUMBER IS GREATEST") : printf("SECOND NUMBER IS GREATEST");
	
	return 0;
	
}