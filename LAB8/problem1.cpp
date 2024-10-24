/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C program to generate the following pattern:
1
1 2
1 2 3
1 2 3 4 */

#include<stdio.h>

int main()
{
	for(int i = 1; i <= 4; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf(" %d ", j);
		}
		printf("\n");
	}
	
return 0;
}
