/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a recursive function that takes a string as input and returns the reversed string.*/

#include<stdio.h>
#include<string.h>

void reversed_string(char string[], int first, int last)
{
	if(last <= first)
	{
		return ;
	}
	
	char temp = string[first];
	string[first] = string[last];
	string[last] = temp;
	
	reversed_string(string, first+1, last-1);
}

int main()
{
	char string[100];
	
	printf("Enter string: ");
	fgets(string, 100, stdin);
	string[strcspn(string,"\n")] = '\0';
	
	int length = strlen(string);
	
	reversed_string(string, 0, length-1);
	
	printf("Reversed string: %s", string);
	
 	return 0;
}

