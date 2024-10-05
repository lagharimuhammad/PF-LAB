/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Which loop system would be better for user input. Justify your answer by creating a program that
      takes a value and adds it to a variable and prints it repeatedly until the user enters a zero value. */
      

#include<stdio.h>

int main()
{
	int n, i = 1, sum = 0;
	
	// input
	printf("enter a value: \n");
	scanf("%d", &n);
	sum = sum + n;
	
	// first condition before loop
	if( n == 0 )
	{ // if start
		printf("sum is 0 ");
		return 1;
	} // if ends
	
	while (i)
		{ // while starts
		
		printf("enter a value:\n");
		scanf("%d", &n);
		sum = sum + n;
		printf("sum is %d \n", sum);
		
		// condition within loop
		if( n == 0 )
			{ // if starts
			break;
			} // if ends
			
		i++;
		} // while ends
	
return 0;
}
