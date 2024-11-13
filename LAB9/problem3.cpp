/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a program that takes a destination string and a source string as input. Then, take
	  an integer n as input and append only the first n characters of the source string to the
	  destination. Print the new concatenated string. */

#include<stdio.h>
#include<string.h>

int main()
{
	char dest[50], src[50];
	int num;
	
	printf("Enter destination string: ");
	fgets(dest, 50, stdin);
	dest[strcspn(dest, "\n")] = '\0';

	printf("Enter source string: ");
	fgets(src, 50, stdin);
	src[strcspn(src,"\n")] = '\0';
	
	printf("Enter number of characters to append: ");
	scanf("%d", &num);
	
	int size_src = strlen(src);
	
	if(num < size_src )
	{
		strncat(dest, src, num);
	}
	else
	{
		strncat(dest, src, size_src);
	}

	printf("Concatenated string: %s", dest);

 	return 0;
}

