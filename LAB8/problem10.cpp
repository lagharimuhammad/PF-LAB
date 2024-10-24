/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C program to multiply two matrices of size 3x3 and display the result matrix.*/
#include<stdio.h>

int main()
{
	int array1[3][3];
	int array2[3][3];
	
	for(int i = 0; i < 3; i++)
	{
		for( int j =0; j < 3; j++)
		{
			printf("Enter value into %d row and %d column of array 1: ", i+1, j+1);
			scanf("%d", &array1[i][j]);
			
		}
	}
	
	for(int i = 0; i < 3; i++)
	{
		for( int j = 0; j < 3; j++)
		{
			printf("Enter value into %d row and %d column into array 2: ", i+1, j+1);
			scanf("%d", &array2[i][j]);
			
		}
	}

	printf("Matrix 1: \n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d\t", array1[i][j]);
		}
		printf("\n");
	}
    
	                                                                                                                                                    
	printf("Matrix 2: \n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d\t", array2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	int result[3][3] = {0};
	for(int a = 0; a < 3; a++)
		{
			for(int b = 0; b < 3; b++)
			{
				for(int d =0; d < 3; d++)
				{
				 	int multiply = array1[a][d]*array2[d][b];
				 	result[a][b] += multiply;
				}
			}
		}
		
	printf("Product: \n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}

 	return 0;
}

