/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Create a function that reverses a given string and returns the reversed string. Use this function
	  in the main program to display the reversed string entered by the user. */

#include<stdio.h>
#include<string.h>

void reverse(char array[])
{
	int first = 0, last = strlen(array) - 1;
	
	while(first < last)
	{
		char temp = array[first];
		array[first] = array[last];
		array[last] = temp;
		
		last--;
		first++;
	}
}

int main()
{
	char array[100];
	
	printf("Enter string: ");
	fgets(array, 100, stdin);
	
	array[strcspn(array,"\n")] = '\0';
	
	reverse(array);
	
	printf("Reversed strings: %s", array);


 	return 0;
}

