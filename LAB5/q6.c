/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Use the ternary operator to check if a number is positive, negative, or zero.*/

#include<stdio.h>

int main()
{
	int a;
	
	printf(" ENTER FIRST NUMBER: ");
	scanf("%d", &a);

	//condition for checking +ve, -ve & 0
	( a == 0 ) ? printf("number is zero") : ( a > 0) ? printf("number is positive") : printf("number is negative");
	
	return 0;
	
}