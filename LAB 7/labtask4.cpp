/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a C Program to find the minimum and maximum number in an array.*/
   
#include <stdio.h>

int main() 
{
	
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];
    
	// inputting elements
    for (int i = 0; i < size; i++) 
    {
        printf("Enter element: ", i + 1);
        scanf("%d", &array[i]);
    }
	
	// declare i is equal to 0
	int i = 0;
	
	/* this is just a assumption statement, where we 
	assume first element is max and min value*/
	
    int maxv = array[i];
    int minv = array[i];

	// now comparing first element with other elements in loop
    for (int j = i+1; j < size; j++) 
    {
        if (array[j] > maxv) 
        {
// array[k] is > min value, array[k] becomes max value
            maxv = array[j];
        }
	}
       
    for(int k = i+1; k < size; k++)  
	{    
	// array[k] is < min value, array[k] becomes min value
        if (array[k] < minv) 
        {
            minv = array[k];
        }
    }

	// display output
    printf("maximum value in the array: %d\n", maxv);
    printf("minimum value in the array: %d\n", minv);

    return 0;
}

