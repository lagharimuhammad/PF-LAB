#include<stdio.h>

int main()
{
int a, b, c;
char operator;
printf("Case 1 will add");
printf("Case 2 will subtract");
printf("Case 3 will multiply");
printf("Case 4 will divide");


switch(operator)
{
	case 1:
		printf("enter a number: %d", a);
		printf("enter another number: %d", b);
		c = a + b;
		break;

	case 2:
		printf("enter a number: %d", a);
		printf("enter another number: %d", b);
		c = a - b;
		break;
	
	case 3:
		printf("enter a number: %d", a);
		printf("enter another number: %d", b);
		c = a * b;
		break;

	case 4:
		printf("enter a number: %d", a);
		printf("enter another number: %d", b);
		c = a / b;
		break;
	default:
		printf("Invalid choice");
}

return 0;
}