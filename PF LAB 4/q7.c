#include<stdio.h>

int main()
{
	//initialisation
	float us, ba; // us stands for units used and ba stands for billing amount
	int id;
	char name[50];
	
	//input
	printf("enter your ID number: ");
	scanf("%d", &id);
	printf("\n");
	
	printf("enter your name: ");
	scanf("%s", name);
	printf("\n");
	
	printf("enter units consumed: ");
	scanf("%f", &us);
	
	//condition begins
	if(us <= 199)
	{
		ba = us * 16.20;
	}
	
	
	else if (us>=200 &&  us<=300)
	{
		ba = us * 20.10;
	}
	
	
	else if ( us>=300 && us<=500)
	{
		ba = us * 27.10;
	}
	
	
	else if (us>=500 )
	{
		ba = us * 35.90;
	}
	else 
	{
		ba = 0;
	}
	
	if(ba > 18000)
	{
		  ba += ba * 0.15;
	}
	//condition ends

	//display output
	printf("Customer ID: %d \n", id);
	printf("Customer Name: %s \n", name );
	printf("Units consumed: %f \n", us);
	printf("Amount of Bill: %f \n", ba);
	
	return 0;
}