/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a program that initializes a 2D character array with a list of words. Then, take a
  	  word as input from the user and check if it exists in the array. Display "Found" if it’s there,
	  otherwise display "Not Found". */

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
	char list[5][20] = 
	{"programming", "calculus", "applied physics", "english", "ict" };
	
	char input[20];
	bool flag = false;
	
	printf("Enter a word: ");
	fgets(input, 20, stdin);
	input[strcspn(input, "\n")] = '\0';
	
	for (int i = 0; input[i] != '\0'; i++) 
	{
        input[i] = tolower(input[i]);
    }
	
	for(int j = 0; j < 5; j++)
	{
		if(strcmp(input, list[j]) == 0)
		{
			flag = true;
			break;
		}
	}

	if(flag == true)
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}

 	return 0;
}

