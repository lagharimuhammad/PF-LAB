/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Implement a C program to find the transpose of a given m x n matrix. Print the transposed
matrix.*/
#include<stdio.h>

int main()
{
	int row, col;
	printf("Enter no. of rows: ");
	scanf("%d", &row);
	
	printf("Enter no. of columns: ");
	scanf("%d", &col);

	int matrix[row][col];
	int transposed_matrix[col][row];
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("Enter element in matriz at row %d and column %d: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("MATRIX: \n");
	for(int a = 0; a < row; a++)
	{
		for(int b = 0; b < col; b++)
		{
			printf(" %d\t", matrix[a][b]);
		}
		printf("\n");
	}
	

	printf("TRANSPOSED MATRIX: \n");
	for( int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			transposed_matrix[j][i] = matrix[i][j];
		}
	}
	

	for(int f = 0; f < row; f++)
	{
		for(int g = 0; g < col; g++)
		{
			printf(" %d\t", transposed_matrix[f][g]);
		}
		printf("\n");
	}
	
return 0;
}

