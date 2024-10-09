#include<stdio.h>
int main()
{
int a, b, swap;

// asking user for input
printf("enter a number: ");
scanf("%d",&a);

printf("enter another number: ");
scanf("%d",&b);

//swapping values
swap=a;
a=b;
b=swap;

//printing output
printf("first number is now: %d\n",a);
printf("second number is now: %d\n",b);

return 0;
}