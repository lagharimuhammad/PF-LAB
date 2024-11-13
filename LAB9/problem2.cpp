/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a function that checks if a given number is even or odd.*/
#include<stdio.h>
#include<stdbool.h>

bool even_or_odd(int n);

bool even_or_odd(int n)
{
	if(n % 2 == 0)
		{
		return true;
		}
	else
		{
	return false;
		}
}

int main()
{
	int num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	bool flag = even_or_odd(num);
	
	(flag == true) ? printf("Even number"): printf("Odd number");

 	return 0;
}

