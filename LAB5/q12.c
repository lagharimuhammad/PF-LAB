/* Name: Muhammad Baqar Laghari
   roll no : 24k-0006
   Section: BAI-1A
   Q: Create a program that calculates the final grade of a student based on multiple criteria,
      including attendance, assignment scores, and exam results, using nested decision structures.*/
	  
#include<stdio.h>

int main()
{
	float assignment, quiz, attendence, exam;
	
	printf("Enter score you obtained out of 100 \n");
	
	printf("Enter your assignment score \n");
	scanf("%f", &assignment);
	
	printf("Enter your quiz score \n");
	scanf("%f", &quiz);
	
	printf("Enter your attendence score \n");
	scanf("%f", &attendence);
	
	printf("Enter your exam score \n");
	scanf("%f", &exam);
	
	if( attendence < 70)
	{
		printf("sorry, but due to lack of attendence, you have failed. ");
		return 1;
	}
	else
	{
		
		int grade = (assignment*0.2) + (quiz*0.2) + (attendence*0.1) + (exam*0.5);
		
		if(grade >= 90 && grade <= 100)
		{
			printf("you have obtained A+");
		}
		
		else if(grade >= 80 && grade <= 89)
		{
			printf("you have obtained A");
		}
		
		else if(grade >= 70 && grade <= 79)
		{
			printf("you have obtained B");
		}
		
		else if(grade >= 60 && grade <= 69)
		{
			printf("you have obtained C");
		}
		
		if(grade >= 50 && grade <= 59)
		{
			printf("you have obtained D");
		}
		
		else if(grade <= 49)
		{
			printf("you have failed");
		}
		
	}
	
	return 0;
	
}