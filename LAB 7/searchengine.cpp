/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: search engine*/ 
   
#include<stdio.h>
#include<stdbool.h>

int main()
{
	
	int size, num;
	bool flag = false; // as we are assuming that there is no num = array element
	
	//enter size of array
	printf("Enter size of your array: ");
	scanf("%d", &size);
	
	// initialise the array
	int array[size];
	
	// loop for entering values
	for(int i = 0; i < size; i++)
	{
		printf("Enter value in array: \n");
		scanf("%d", &array[i]);
	}
	
	// enter number to check
	printf("Enter a random number: ");
	scanf("%d", &num);
	
	// loop for checking
	for(int j = 0 ; j < size; j++)
	{
		// condition for checking
		if (num == array[j])
		{
			flag = true; // if number is available, flag changes to true
			break; 
		}
	}
	
	// outer condition
	if(flag)
		{
			printf("This value is available in the array");
		}
		
		else
		{
			printf("This value is not available in the array");
		}
	
	return 0;
}
