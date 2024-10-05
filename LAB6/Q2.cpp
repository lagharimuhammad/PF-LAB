/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a program that calculates the sum of all even numbers between two given integers a and b. Use
      a loop to find the sum and print the result. */
      
#include<stdio.h>

int main()
{
	// this program gives sum from first bound to last bound exluding both first and last bound
	int firstn, lastn, sum = 0, i;
	
	printf("Follow this: first bound < last bound \n");
	printf("enter first bound: \n");
	scanf("%d", &firstn);
	printf("enter last bound: \n");
	scanf("%d", &lastn);
	
	// limitation of program
	if ( firstn > lastn )
	{
		printf("Follow above limitation");
		return 1; 
	}
	
	// if first bound is even 
	if(firstn % 2 == 0)
	{ // if start
		for(i = firstn + 2 ; i < lastn; i += 2  )
		{ // loop starts
			sum = sum + i;
		} // loop ends
	} // if ends
	
	// if first bound is odd 
	else if(firstn % 2 != 0)
	{ // else if starts
		for(i = firstn + 1 ; i < lastn; i += 2  )
		{ // loop starts
			sum = sum + i;
		} // loop ends
	} // else if ends
	
	printf (" the even sum from %d to %d excluding %d and %d is: %d", firstn, lastn, firstn, lastn, sum);
	return 0;
}
