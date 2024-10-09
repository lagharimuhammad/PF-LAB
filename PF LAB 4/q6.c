#include<stdio.h>

int main()
{
	//initialisation
	float actualcost, discounted, saved;
	
	//input
	printf("Enter the actual price: ");
	scanf("%f", &actualcost);
	
	//condition
	if (actualcost<0)
	{
		printf("invalid input");
	}
	

	else if (actualcost < 2000)
	{
		saved = actualcost * 0.05;
		discounted = actualcost - saved;
	}
	
	
	else if (actualcost >= 2000 && actualcost < 4000)
	{
		saved = actualcost * 0.1;
		discounted = actualcost - saved;
	}
	
	
	else if (actualcost >= 4000 && actualcost <= 6000)
	{
		saved = actualcost * 0.2;
		discounted = actualcost - saved;
	}
	
	
	else if (actualcost < 6000)
	{
		saved = actualcost * 0.35;
		discounted = actualcost - saved;
	}
	
	// output display
	printf(" the actual price is: %f \n", actualcost);
	printf(" the saved price is: %f \n", saved);
	printf(" the price after discount is: %f \n", discounted);
	
	return 0;
}