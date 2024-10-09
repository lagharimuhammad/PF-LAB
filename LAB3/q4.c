#include <stdio.h>

int main() {
    float fuel_avg, fuel1, fuel2, totalfuel, fuelcost1, fuelcost2, totalcost, distance1path, fuel1price, fuel2price;
    
    /* fuel_avg is the average fuel needed to be input by user
    	fuel1 is the fuel consumed in forward direction
    	fuel2 is the fuel consumed in backward direction
    	totalfuel is the fuel consumed in both directions
    	fuelcost1 is the cost of fuel consumed in forward direction
    	fuelcost2 is the cost of fuel consumed in backward direction
    	totalfuel is the cost of fuel consumed in both directions
    	distance1path is the distance car travelled in one direction
	*/
	
	//initialisation
	distance1path = 1207; 
	fuel1price = 118; 
	fuel2price = 123;
    	
	//input of fuel average
printf("enter the average fuel consumed: \n ");
scanf("%f",&fuel_avg);
if(fuel_avg>0)
{
	printf("your input is valid \n");
   }
else
{
	printf("please input a positive number: \n");
}
//end of fuel average input
   

    // calculate fuel consumed in travelling in forward path
    fuel1 = distance1path / fuel_avg;
    
    
    
    // calculate fuel consumed in backward path
    fuel2= distance1path / fuel_avg;
    
    
    

    // calculate fuel cost for one forward and backward
    fuelcost1 = fuel1 * fuel1price;
    fuelcost2 = fuel2 * fuel2price;
    
    

    // Calculate total fuel cost and fuel consumed
    totalcost = fuelcost1 + fuelcost2;
    totalfuel = fuel1 + fuel2;

    // Print results
    printf("Total fuel cost: %.2f\n", totalcost);
    printf("Total fuel consumed: %.2f liters\n", totalfuel);

    return 0;
}