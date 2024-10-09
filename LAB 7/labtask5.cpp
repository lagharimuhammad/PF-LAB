/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A 
   Q: A weather station records temperature in an array over the course of a week (7 days). Write a program
that calculates the average temperature of the week and identifies if any days had extreme temperatures
(above 40°C or below 0°C).*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
	// initialise
	bool flag = false;
	float avg, sum = 0;
	float array[7];
	
	// enter temperature of every day
	for(int i = 0; i < 7; i++)
	{// loop starts
		printf("Enter temperature of Day %d:  ", i+1);
		scanf("%f", &array[i]);
		
		// taking sum
			sum = sum + array[i];
	}// loop end
	
	// taking average
	avg = sum / 7;
	
	//printing average
	printf("The average of Temperature from day 1 to day 7 is: %.2f\n", avg);
	
	
	//condition for days with extreme temperature
	for (int i = 0; i < 7; i++) 
    {
        if (array[i] < 0 || array[i] > 40) 
        {
            printf("day %d had an extreme temperature: %.2f\n", i + 1, array[i]);
            flag = true;
        }
    }
	
	// if no day has extreme temperarture
	if(flag == false)
	{
		printf("No day had extreme temperature.");
	}
	
	return 0;
}
