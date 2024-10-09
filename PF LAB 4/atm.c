#include<stdio.h>

int main()
{
float balance = 55000, deposit, given, choice, withdraw, taken;

printf("Case 1 will show you balance");
printf("Case 2 will deposit given amount");
printf("Case 3 will withdraw required amount");
printf("Case 4 will exit prograam");


switch(choice)
{
	case 1:
		printf("your current balance is: %f", balance);
		break;

	case 2:
		printf("input deposit amount");
		scanf("%f", &given );
		deposit = balance + given;
		break;
	
	case 3:
		printf("input withdraw amount");
		scanf("%f", &taken );
		withdraw = balance - taken;
		break;

	case 4:
		break;
	default:
		printf("Invalid choice");
}

return 0;
}