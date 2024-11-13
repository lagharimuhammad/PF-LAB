/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Create a function that returns the maximum and minimum element in an integer array. Use this
	  function in the main program to find the maximum and minimum from an array entered by the
	  user.*/

#include<stdio.h>

void sort(int array[], int size)
{
	int max = array[0];
	int min = array[0];
	
	for(int j = 0; j < size; j++)
	{
		if(array[j] > max)
		{
			max = array[j];
		}
		if(array[j] < min)
		{
			min = array[j];
		}
	}
	
	printf("Maximum element: %d\n", max);
	printf("Minimum element: %d\n", min);
}

int main()
{
	int size;
	
	printf("Enter size of the array: ");
	scanf("%d", &size);
	
	int array[size];

	for(int i = 0; i < size; i++)
	{
		printf("Enter element: ");
		scanf("%d", &array[i]);
	}

	sort(array, size);

 	return 0;
}

