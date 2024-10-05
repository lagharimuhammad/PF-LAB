
/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: You are tasked with developing an ATM PIN validation system. The system should allow a user to enter
	  their 4-digit PIN and validate it against a predefined correct PIN (5678). If the user enters the wrong PIN,
	  they should be prompted to try again. However, if the user enters the wrong PIN 3 consecutive times,
	  the system should block the card and display a message that the card is blocked. The user should no
	  longer be able to attempt to enter the PIN after the card is blocked.*/

#include<stdio.h>

int main()
{
	int pin, tries = 3;
	int predefined_code = 5678;
	
	// loop for entering pins
	for(int i = 1; i <= tries; i++)
	{ // loop starts
		printf("Enter your PIN: ");
		scanf("%d", &pin);
		
		// condition for correct pin
		if(pin == predefined_code)
		{ // if begins	
			printf("your PIN is correct");
			break;
		} // if ends
		
		// condition for incorrect pin
		else
		{ // else starts
			printf("your PIN is incorrect\n");	
		} // else ends
		
		// if all three tries are incorrect
		if(i == 3)
		{ // if begins
			printf("your card is blocked");	
		} // if ends
	} // loop ends
	
	return 0;
}
