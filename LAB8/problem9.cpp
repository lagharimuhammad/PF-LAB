/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C program that finds the maximum element in a given m x n matrix and its position (row,
column).*/

#include<stdio.h>

int main()
{
	int row, column;
	
	printf("Enter no. of rows of matrix: ");
	scanf("%d", &row);
	
	printf("Enter no. of columns of matrix: ");
	scanf("%d", &column);

	int matrix[row][column];
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			printf("Enter value in %d row %d column: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	int value_row, value_column, value;
	
	for(int a = 0; a < row; a++)
	{
		for(int b = 0; b < column; b++)
		{
			if( value < matrix[a][b])
			{
				value= matrix[a][b];
				value_row = a+1;
				value_column = b+1;
			}
		}
	}
	
	printf("Max Value: %d \n", value);
	printf("Row Number: %d \n", value_row);
	printf("Column Number: %d", value_column);
	
 	return 0;
}

