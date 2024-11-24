/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a recursive function bubbleSort that takes an array and its size. It performs the
	  bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
	  they are in the wrong order.*/ 
   
#include<stdio.h>

void bubble_sort(int array[],int size, int start)
{
	if( start == size - 1)
	{
		return;
	}
	
	for(int i = 0; i < size - start - 1; i++)
	{
		if(array[i] > array[i+1])
		{
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	}
	
	bubble_sort(array, size, start+1);
}

int main()
{
	int size;
	
	printf("Enter size of the array: ");
	scanf("%d", &size);
	
	int array[size];
	
	for(int i = 0; i<size; i++)
	{
		printf("Enter elements: ");
		scanf("%d", &array[i]);
	}

	printf("Sorted Array: \n");
	
	bubble_sort(array, size, 0);
	
	for(int j = 0; j < size; j++)
	{
		printf("%d\n", array[j]);
	}

 	return 0;
}

