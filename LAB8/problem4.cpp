/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C program that takes a square matrix as input and prints its diagonal elements.*/
#include<stdio.h>

int main()
{

	int size, z = 1;
	
	printf("Enter order of square matrix: ");
	scanf("%d", &size);
	
	int matrix[size][size];
	
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			matrix[i][j] = z;
			z++;
		}
	}
	
	// printing 
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			printf(" %d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("Diagonal Element are: \n");
	
	for(int k = 0; k < size; k++)
	{
		for(int l = 0; l < size; l++)
		{
			if(k == l)
			{
				printf("%d\t", matrix[k][l]);
			}
		}
	}
	
return 0;
}

