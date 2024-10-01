/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult,
      and Senior, using nested if-else statements.*/ 


#include<stdio.h>

int main()
{

int age;

// input age
printf("Enter your age: ");
scanf("%d", &age);

// infancy condition
if( age >= 0 && age <= 2 )
{
	printf("INFANCY");	
}

// child condition
else if (age >= 3 && age <= 12)
{
	printf("CHILD");
}

// teenager condition
else if (age >= 13 && age <= 19)
{
	printf("TEENAGER");
}

// young adult condition
else if (age >= 20 && age <= 40)
{
	printf("YOUNG ADULT");
}

// adult condition
else if (age >= 41 && age <= 59 )
{
	printf("ADULT");
}

// senior condition
else if (age >= 60 )
{
	printf("SENIOR");
}

else{
	printf("Invalid age ");
}

return 0;
}