/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: You are tasked with developing a Messaging Streak Tracker for a social media app (similar to Snapchat
      streaks). The app tracks how many consecutive days two users send messages to each other.
      • Each day, the user must send a message to their friend to maintain the streak.
      • If the user fails to send a message on any day, the streak is reset to 0.
      • The system should track the streak and update it based on whether the user sent a message that
        day.*/

#include<stdio.h>

int main()
{
	int  streak = 0;
	char ans;
	
	// while which goes for infinite if condition is true
	while(1)
	{ // loop begins
	printf("have you uploaded a sanp today (Y/N): \n");
	scanf("  %c", &ans);
	
	if ( ans == 'Y' || ans == 'y')
	{ // if begins
		streak = streak +1;
		printf("your streak is: %d \n", streak);
	} // if ends
	
	else if(ans != 'Y' && ans != 'y') 
	{ // else if begins
		printf(" your streak has broke \n");
		break;
	} // else if ends

	
	} // loop ends
	printf(" your streak upto now is %d", streak);
	return 0;
}
