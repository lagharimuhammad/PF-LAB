/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
	  characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
	  Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
	  For example: "madam", "racecar", "level", "radar".*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool palindrome(char word[])
{
	int first_letter = 0;
	int last_letter = strlen(word) - 1;
	
	while( first_letter < last_letter)
	{
		if(word[first_letter] != word[last_letter])
		{
			return false;
		}
		first_letter++;
		last_letter--;
	}
	return true;
	
}

int main()
{
	char string[5][20];
	bool flag;
	
	for(int i = 0; i < 5; i++)
	{
		printf("Enter a word: ");
		fgets(string[i], 20, stdin);
		string[i][strcspn(string[i], "\n")] = '\0';
	}
	printf("\n");

	for(int j = 0; j < 5; j++)
	{
	flag = palindrome(string[j]);
	
		if(flag == true)
		{
			printf("Word \"%s\" is palindrome\n", string[j]);
		}
		else
		{
			printf("Word \"%s\" is not palindrome\n", string[j]);
		}
	
	}

 	return 0;
}

