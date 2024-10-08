/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: You are developing a user input validation system for a registration form. The form requires the
	  user to input their name, email, and phone number. Validate the inputs with rules mentioned in manual.*/ 

#include<stdio.h>
#include<string.h>

int main()
{
	
	// name
	char alphabets[100];
	printf("Enter your Name: \n");
	scanf(" %[A-Za-z ]", &alphabets);
	
	// email
	char email[100];
	printf("Enter your Email: \n");
	scanf(" %[A-Za-z0-9._-@]", &email);
	
	// phone number
	char phoneNumber(15);
	printf("Enter your Phone Number: \n");
	scanf(" %[0-9-+ ]");
	
	// strlen & strchr helps in string manipulation and help in taking inputs in string library
	
	// checking condition of name
	if (strlen(alphabets) == 0) 
	{
        printf("not a valid name: ");
    } 
	else 
	{
        printf("valid name: ");
    }

	// checking condition of email
    if (strchr(email, '@') == NULL || strlen(email) == 0) 
	{
        printf("not a valid email: ");
    }
	else 
	{
        printf("valid email: ");
    }

  // Validate Phone Number
    if (strlen(phoneNumber) == 0) 
	{
        printf("not a valid number: ");
    } 
	else 
	{
        printf("Valid number: ");
    }
	
	return 0;
}
