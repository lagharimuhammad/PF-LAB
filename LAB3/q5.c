#include<stdio.h>
int main()
{
float principle, rate, time;
float interest;

//restrictions
printf("NOTE\n");
printf("Principle you input should not be less than 100 and greater than 1000000 \n");
printf("Rate of interest should be between 5 and 10 percent \n");
printf("Time period should be between 1 to 10 years\n");



//input of principle
printf("enter the principle: \n ");
scanf("%f",&principle);
if(principle<=1000000 || principle>=100)
{
	printf("your input is valid \n");
   }
else
{
	printf("please follow the instructions above\n");
}
//end of principle input


//rate input
printf("enter rate: \n");
scanf("%f", &rate);
if(rate<=10 || rate>=5)
{
	printf("your input is valid \n");
   }
else
{
	printf("please follow the instructions above\n");
}
//end of rate input 


//time input
printf("enter time period: \n");
scanf("%f", &time);
if(time<=10 || time>=1)
{
	printf("your input is valid \n");
   }
else
{
	printf("please follow the instructions above\n");
}
//end of time input

//calculation
interest = (time*rate*principle)/100;

printf("the simple interest is : %.2f", interest);


return 0; 
}