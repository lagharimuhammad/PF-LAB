/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a program in C to read n number of values in an array and display it in reverse order */ 
   
#include<stdio.h>

int main()
{
	int size;
	
	// enter size of array
	printf("Enter size of your array: ");
	scanf("%d", &size);
	
	//initialise 
	int array[size];
	
	// loop to enter elements of arrays
	for(int i = 0; i < size ; i++)
	{
		printf("Enter value you want to save in array: ");
		scanf("%d", &array[i]);
	}
	
	// loop to print array in reverse
	printf("The reverse of array is: \n ");
	for(int j = size - 1 ; 0 <= j; j-- )
	{
		printf("%d\n", array[j]);
	}
	 
 return 0;
	 
}
