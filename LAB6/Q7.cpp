/* Name: Muhammad Baqar Laghari
   Roll- no : 24k0006
   Section: BAI-1A 
   Q: Write a program to check whether a number is an Armstrong number or not. An Armstrong number is
	  a number that is equal to the sum of cubes of its digits.*/

#include<stdio.h>
#include<math.h>

int main()
{
	// initialisation
	int actual_num, num, rem, cube, sum = 0;
	
	printf("Enter a number: ");
	scanf("%d", &actual_num);
	
	// num will work as temporary variable
	num = actual_num;
	
	while(0 < num)
	{ // while begins
		rem = num % 10;
		cube = pow(rem, 3);
		sum = sum + cube;
		num = num / 10;
	} // while ends
	
	if(sum == actual_num)
	{ // if begins
		printf("number is armstrong number");
	} // if ends
	else
	{ //else begins
		printf("number is not armstrong number");
	} //else ends
	
	return 0;
}
