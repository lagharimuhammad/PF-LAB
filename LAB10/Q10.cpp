#include <stdio.h>
#include <string.h>
#include <stdbool.h>


typedef struct Package 
{
    int package_id;
    char package_name[20];
    char dest_city[20];
    int duration;
    int available_seats;
    float cost;
} Package;


void display(Package p[], int size) 
{
    printf("\n--Available Packages--\n");
    for (int i = 0; i < size; i++) 
	{
        printf("Package Id: %d\n", p[i].package_id);
        printf("Package Name: %s\n", p[i].package_name);
        printf("Destination City: %s\n", p[i].dest_city);
        printf("Duration: %d days\n", p[i].duration);
        printf("Available Seats: %d\n", p[i].available_seats);
        printf("Cost: %.2f RS\n\n", p[i].cost);
        }
}


void booking(int *available_seats) 
{
    if (*available_seats > 0) 
	{
        (*available_seats)--;
        printf("Seat booked successfully!\n");
        }
	 
	else 
        printf("Sorry! Seat not available.\n");
}

int main() 
{
    int option, id;
    bool flag;

    Package p[4] = 
	{
        {22, "Smart Start", "Islamabad", 7, 12, 2500.85},
        {23, "Tropical Product", "Lahore", 6, 4, 2000.15},
        {24, "Innovative", "Peshawar", 8, 21, 3000.50},
        {25, "Amaze", "Sukkur", 5, 2, 1300.25}
        };

    // Menu loop
    while (1) 
	{
        printf("\n--Package Transportation--\n");
        printf("1. Display Available Packages\n");
        printf("2. Book Package Seat\n");
        printf("3. Exit\n");
        printf("Enter your action: ");
        scanf("%d", &option);

        switch (option) 
		{
            case 1: 
                display(p, 4);
                break;

            case 2:
                printf("Enter Package Id: ");
                scanf("%d", &id);

                flag = false;
                int index = -1;


                for (int i = 0; i < 4; i++) 
		{
                    if (p[i].package_id == id) 
			{
                        index = i;
                        flag = true;
                        break;
                    	}
                }

                if (!flag) 
		printf("Invalid Package Id.\n");

                else
                booking(&p[index].available_seats);
                
                break;

            case 3: 
            return 0;

            default: 
            printf("Invalid input\n");
        }
    }

    return 0;
}
