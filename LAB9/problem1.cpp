/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C function that takes two numbers as input and returns their product.*/
   
#include<stdio.h>
int product(int a, int b);

int product(int a, int b)
{
	return a*b;
}

int main()
{
	int a, b;
	
	printf("Enter value of a: ");
	scanf("%d", &a);
	
	printf("Enter value of b: ");
	scanf("%d", &b);
	
	printf("Product of a and b is: %d", product(a,b));


 	return 0;
}

