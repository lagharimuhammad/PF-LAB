/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C program to find the saddle point(s) in a given 3x3 matrix. A saddle point is an element
that is the smallest in its row and the largest in its column. */
#include<stdio.h>

int main()
{
	int matrix[3][3];
	
	for(int i = 0; i < 3; i++)
	{
		for( int j =0; j < 3; j++)
		{
			printf("Enter value into %d row and %d column of matrix: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
			
		}
	}
	
	for(int i = 0; i < 3; i++)
	{
		for( int j =0; j < 3; j++)
		{
		 	printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	for(int a = 0; a < 3; a++)
	{
		for(int b = 0; b < 3; b++)
		{
			int flag = 1;
			for(int d = 0; d < 3; d++)
			{
				if(b != d)
				{
					if ( matrix[a][b] > matrix[a][d] )
					{
						flag = 1;
						// point is less than orders
						break;
					}
					
					if(flag == 1)
					{
						flag = 0;
						if(matrix[a][b] < matrix[d][b])
						{
							flag = 1;
							break;
						}
					}
				}
			}
			if (flag) 
				{
                printf("points which are saddle: %d\n", matrix[a][b]);
                flag = 0;
            	}
		}
	}

 	return 0;
}

