/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Given an array arr[] of size N which contains elements from 0 to N-1, you need to find all the
	  elements occurring more than once in the given array.*/
	  
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int size, swap = 0;
    
    printf("Enter array size:");
    scanf("%d",&size);
    
    // initialise array
    int arr[size];
    
    // loop for array elements input
    for(int i=0 ; i<size ; i++)
    {
        printf("Enter element: ");
        scanf("%d",&arr[i]);
	}

	// bubble sorting
	bool flag = true;
	while(flag && size > 0)
	{// while starts
		flag = false;
		  for(int i=0 ; i<size-1 ; i++)
        { // for starts
            if(arr[i]>arr[i+1])
            { // if starts
                swap = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = swap;
                flag = true;
            } // if ends
        } // for ends
		size = size - 1;
	} //while ends

	// display outputs
	printf("Elements that repeated are: \n");
    for(int j=0 ; j<size ; j++)
    { // for starts
    	if(j < size - 1 && arr[j] == arr[j + 1])
        { // if begins
            printf("%d",arr[j]);
            continue;
        } // if ends
    } // for stops

    return 0;
}

