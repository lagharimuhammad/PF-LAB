/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Generate a pattern of odd numbers in decreasing order starting from a user-specified number
using nested loops.*/
#include<stdio.h>

int main()
{
	int limit;
	
	printf("Enter a number: ");
	scanf("%d", &limit);
	
	
	printf("Odd numbers upto %d are: ", limit);
	if(limit % 2 == 0)
	{
		for(int i = limit-1; i > 0; i-=2)
		{
			printf("%d ", i);
		}
	
	}
	else
	{
		for(int j = limit; j > 0; j-=2)
		{
			printf("%d ", j);	
		}	
	}
	

 	return 0;
}

