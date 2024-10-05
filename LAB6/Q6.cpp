/* Name: Muhammad Baqar Laghari
   Roll- no : 24k0006
   Section: BAI-1A 
   Q: Using the above program integrate the number if it is a prime and print the Fibonacci series till that
	  number.*/
	 
#include<stdio.h>
#include<stdbool.h>

bool prime_no(int n);

// function to determine prime number
bool prime_no(int n)
{ // function begins	
	for(int i = 2; i < n; i++)
	{ // loop begins
		
	if(n % i == 0)
	{ // if starts
		return false;
	} // if ends
	
	} // loop ends
	printf("number is prime\n");
	return true;
} // function ends

int main()
{
	// n1 is first term of finbonacci
	// n2 is second term of fibonacci 

	int num, n1 = 0, n2 = 1, upcoming;
	bool flag;
	
	printf("enter a number: ");
	scanf("%d", &num);
	
	// if num is prime, flag is true
	// if num is not prime, flag is false
	flag = prime_no(num);
	
	if(flag == true)
	{ // if 1 begins
		if(num == 0 )
		{ // if 2 begins
		printf("%d", n1);
		return 2;
		} // if 2 ends
	
		if(num == 1 )
		{ // if 3 begins
		printf("%d \n%d", n1, n2);
		return 1;
		} // if 3 ends
	
		for(n1 ; n1 <= num; n1)
		{ // loop begins
			printf("%d \n", n1);
			upcoming = n1 + n2;
			n1 = n2;
			n2 = upcoming;
		} // loop ends
	} // if 1 ends
	
	else if(flag == false)
	{ // else if begins
		printf("number is not prime");
	} // else if ends
	
	return 0;
}
	
