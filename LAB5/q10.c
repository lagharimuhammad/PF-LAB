/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Create a program that calculates the sum of digits of a number until the result is a single digit
   (e.g., 123 -> 6).*/

#include<stdio.h>

int main()
{
	int num, ans = 0, rem;
	
	
	printf("enter a number: ");
	scanf("%d", &num);
	
	//condition for digit sum
	while(num > 0)
	{
		rem = num % 10;
		
		ans = ans + rem;
		
		num = num/10;
	}
	
	printf("sum of digits of the number is: %d", ans);
	
	return 0;
}