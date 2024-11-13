/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Implement a function that checks if a given integer is a prime number. Use this function in the
	  main program to check if numbers entered by the user are prime.*/

#include<stdio.h>
#include<stdbool.h>

bool prime(int n)
{
	for(int i = 2; i < n; i++)
	{
		if( n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	bool flag = prime(num);
	
	if(flag == true)
	{
		printf("Number is a prime");
	}
	else
	{
		printf("Number is not a prime");
	}

 	return 0;
}

