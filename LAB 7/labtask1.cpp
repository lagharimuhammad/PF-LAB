/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C Program that takes an user input array and prints the sum of its elements.*/ 
#include<stdio.h>

int main()
{
	int sum = 0, size;
	
	// enter size of array
	printf("Enter size of your array: ");
	scanf("%d", &size);
	
	// initialise array
	int array[size];
	
	// loop to enter elements of array
	for(int i = 0; i < size ; i++)
	{
		printf("Enter value you want to save in array: ");
		scanf("%d", &array[i]);
		
		sum = sum + array[i];
	}
	 printf(" The sum is: %d", sum);
	 
	 return 0;
	 
}
