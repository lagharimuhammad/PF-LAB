/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Develop a program that uses logical operators to determine if a person is eligible for a loan
     based on age, income, and credit score*/

#include <stdio.h>

int main() {
    int age, cs;
    float income;

    printf("enter your age: ");
    scanf("%d", &age);
    printf("enter your annual income: ");
    scanf("%f", &income);
    printf("enter your credit score: ");
    scanf("%d", &cs);
    // condition with logical operators
    if (age >= 18 && income >= 30000 && cs >= 650)
	{
        printf("you are eligible");
    } 
	else
	{
        printf("you are not eligible");
    }

    return 0;
}
