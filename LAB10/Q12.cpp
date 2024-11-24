#include<stdio.h>

int linearSearch(int array[], int target, int size, int in)
{
	if(in == size)
	return -1;
	
	if(target == array[in])
	return in;
	
	linearSearch(array, target, size, in+1);
}

int main()
{
	int size, target;
	
	printf("Enter size of array: ");
	scanf("%d", &size);
	
	int array[size];
	
	for(int i = 0; i < size; i++)
	{
		printf("Enter element no. %d: ", i+1);
		scanf("%d", &array[i]);
	}
	
	printf("Enter target: ");
	scanf("%d", &target);
	
	int index = linearSearch(array, target, size, 0);
	
	if(index == -1)
	printf("Target not found");
	
	else
	printf("Target \"%d\" found at %d index", target, index+1);


 	return 0;
}

