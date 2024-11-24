#include <stdio.h>

#define m 1000


float conversion(float meters) 
{
    static int count = 0;  // Static variable to count function calls
    count++;  // Increment the call count each time the function is called

    printf("function called %d times\n", count);
    
    return meters / m;  // Convert meters to kilometers
}

int main() {
    float meter;

    while (1) 
    {
        printf("\nEnter distance in meters(-0 to exit): ");
        scanf("%f", &meter);

        if(meter == -0) break;

        float km = conversion(meter);

        // Display the result
        printf("%.2f meters is equal to %.2f kilometers.\n", meter, km);
    }

    return 0;
}

