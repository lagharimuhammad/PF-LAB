#include<stdio.h>
int main()
{
float taxrate, tax, salary, newsalary;

// asking user for input
printf("enter tax rate: ");
scanf("%f",&taxrate);

printf("enter your salary: ");
scanf("%f",&salary);

//calculating tax
 tax = (salary*taxrate)/100;
 
 //calculating new salary
 newsalary= salary - tax;

//printing output
printf("tax that you have paid is: %.3f\n",tax);
printf("salary after tax reduction is: %.3f\n",newsalary);

return 0;
}