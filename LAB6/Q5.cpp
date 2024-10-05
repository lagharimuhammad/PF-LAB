/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a program to check whether a given number is prime or not.*/
   
#include<stdio.h>

int main()
{
	int n;
	
	printf("enter a number: ");
	scanf("%d", &n);
	
	for(int i = 2; i < n; i++)
	{ // loop starts
	
		if(n % i == 0)
		{ // condition for prime number 
		printf("number is not a prime number \n");
		return 1; // terminate program if not prime number
		}
	} // loop ends

	printf("number is a prime number \n");
	return 0;
}
