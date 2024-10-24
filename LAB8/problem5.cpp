/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C program that generates a sequence of prime numbers within a given range using
nested loops.*/
#include<stdio.h>
#include<stdbool.h>

int main()
{
int start, end;
bool flag;

	printf("Enter starting limit: ");
	scanf("%d", &start);
	
	printf("Enter end limit: ");
	scanf("%d", &end);
	
	printf("The prime numbers are: \n");
	for( int i = start; i <= end; i++)
	{
		flag = true;
		for(int j = 2; j < i; j++)
		{
			if(i % j ==0)
			{
				flag = false;
				break;
			}
		}
		if(flag == true)
		{
			printf("%d ", i);
		}
	}


 	return 0;
}

