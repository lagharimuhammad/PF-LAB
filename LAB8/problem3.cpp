/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Create a 3D array representing 2 pages of a 3x3 matrix. Initialize it and find the sum of all the
elements on each page. */

#include<stdio.h>

int main()
{
	int array[2][3][3] = 
	{
		{
			{ 1, 2, 3},
			{ 3, 4, 5},
			{ 5, 6, 7}
		},
		
		{
			{ 8, 9, 10},
			{ 10, 11, 12},
			{ 12, 13, 14}
		}
	};
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			for(int k = 0; k < 3; k++)
			{
				printf("%d\t", array[i][j][k]);
			}
			printf("\n");
		}
		printf("\n \n");
	}
	
	
	int sum_page1 = 0, sum_page2 = 0;
	
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			for(int k = 0; k < 3; k++)
			{
				
				if( i == 0)
				{
					sum_page1 += array[i][j][k];
				}
				
				else if( i == 1)
				{
					sum_page2 += array[i][j][k];
				}
			}
		}
	}
	
	printf("The sum of page 1 elements is: %d\n", sum_page1);
	printf("The sum of page 2 elements is: %d", sum_page2);
	
 	return 0;
}

