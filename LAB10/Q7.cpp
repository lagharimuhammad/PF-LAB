#include <stdio.h>

#define limit 30

void Temperature(float temp) {
    static int count = 0;
    if (temp > MAX_TEMP) 
    {
        count++;
        printf("temperature %.2f dgree celsius exceeds the maximum limit of %d degree celsius\n", temp, limit);
    }
    printf("Temperatures exceeded the limit %d time(s).\n", count);
}

int main() {
    float temp;

    // Input loop
    while (1) 
    {
        printf("\nenter temperature in celsius (enter -0 to quit): ");
        scanf("%f", &temp);

        if (temp == -0)
            break;

        Temperature(temp);
    }

    return 0;
}