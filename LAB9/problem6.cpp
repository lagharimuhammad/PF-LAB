/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Create a C program that swaps the values of two integers using a user-defined function,
	  swapIntegers. The user inputs two integer values, and the program uses the function to swap
	  them. It should perform the swap and display the updated values.*/

#include<stdio.h>

void swap(int *a, int *b)
{	
	int	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;
	
	printf("Enter value a: ");
	scanf("%d", &a);

	printf("Enter value b: ");
	scanf("%d", &b);
	
	swap(&a, &b); 
	
	printf("After swap\n");
	printf("a: %d\n", a);
	printf("b: %d", b);

 	return 0;
}

