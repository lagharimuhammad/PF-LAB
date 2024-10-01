/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Create a program that checks if a person is eligible to vote based on their age and citizenship
status. */

#include <stdio.h>

int main() {
    int age, citizen;

//input for citizenship
    printf("Are you a citizen\n");
    printf("Type 1 for YES\n");
    printf("Type any other number for NO\n");
    scanf("%d", &citizen);
    
    // condition for eligiblity for voting
    if (citizen == 1 )
	{
    	printf("Enter your Age: ");
    	scanf("%d", &age);
    	
        	if (age >= 18) 
			{
            printf("You can vote now.\n");
			} 
			else 
			{
            printf("you can't vote because you are underage");
			}
			
    } 
    
	else 
	{
        printf("you can't vote because you are not a citizen");
    }

    return 0;
}