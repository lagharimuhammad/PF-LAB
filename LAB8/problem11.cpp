/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C program to generate a diamond shape pattern using nested loops. The program
should take the number of rows for the upper half of the diamond as input from the user.*/
#include<stdio.h>

int main()
{
	int row;
	
	printf("Enter a random number: ");
	scanf("%d", &row);
	
	for( int i = 1; i <= row; i++)
	{
		for(int j = row; j > i; j--)
		{
		printf(" "); 
		}
			for(int k = 1; k <= 2*i-1; k++)
			{
				printf("*");
			}
		
		printf("\n");
	}
	

	for( int i = row-1; i >= 1; i--)
	{
		for(int j = row; j > i; j--)
		{ 
		printf(" "); 
		}
			for(int k = 1; k <= (2*i-1) ; k++)
			{
				printf("*");
			}
		
		printf("\n");
	}


 	return 0;
}
