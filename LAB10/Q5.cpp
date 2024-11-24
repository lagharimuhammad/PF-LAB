/* Name: Muhammad Baqar Laghari
   Roll no: 24k-0006
   Section: BAI-1A 
   Q: Write a recursive function that takes an array and its size as input and prints all the
	  elements.*/
	  
#include<stdio.h>

void function(int array[], int start ,int size)
{
	if(start >= size)
	{
		return;
	}
	
	printf("%d\n", array[start]);
	
	function(array, start+1, size);
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

	printf("---Elements---\n");
	function(array, 0, size);

 	return 0;
}

