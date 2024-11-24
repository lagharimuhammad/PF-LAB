#include<stdio.h>

int factorial(int num);

int factorial(int num)
{
	if(num == 0 || num == 1)
	{
		return 1;
	}
	
	return num * factorial(num-1);
	
}

int main()
{
	int i;
	printf("Input a number: ");
	scanf("%d", &i);
	
	printf("!%d = %d", i, factorial(i));

 	return 0;
}

