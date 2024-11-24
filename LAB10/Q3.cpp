#include<stdio.h>
#include<string.h>
#include<stdbool.h>


typedef struct Flight_ticket
{
	int flight_no;
	char dest_city[50];
	char depart_city[50];
	int available_seats;
	char date[11]; // (DD-MM-YYYY)
} Flight_ticket;

void display(Flight_ticket flight[], int size)
{
	for(int i = 0; i < size; i++)
	{
	printf("Flight Number: %d\n", flight[i].flight_no);
	printf("Destination city: %s\n", flight[i].dest_city);
	printf("Departure city: %s\n", flight[i].depart_city);
	printf("Available seats: %d\n", flight[i].available_seats);
	printf("Date: %s\n", flight[i].date);
	printf("\n");
	}
}

void booking(int *available_seats)
{
	if(*available_seats > 0)
		{
			(*available_seats)--;
			printf("Seat booked successfully!");
		}
	else if(*available_seats == 0)
		{
		printf("Sorry! Seat not available");	
		}
}

int main()
{
	int option;
	bool flag;
	
	Flight_ticket flight[4] = 
	{
	{21, "Islamabad", "Karachi", 12, "19/11/2024"},
	{22, "Lahore", "Karachi", 4, "19/11/2024"},
	{23, "Peshawar", "Karachi", 21, "18/11/2024"},
	{24, "Sukkur", "Karachi", 0, "20/11/2024"}
	};

	while(1)
	{
	printf("\n--Available Flights--\n\n");
	display(flight, 4);
	
	printf("Enter Flight Number(0 to exit): ");
	scanf("%d", &option);
	
	if(option == 0)
	break;
	
	flag = false;
	int index = 0;
	for (int i = 0; i < 4; i++) 
		{
        if (flight[i].flight_no == option)
	        {
	        	index = i;
	        	flag = true;
	        	break;
			}
		}
		
		if(flag == false)
		{
			printf("Invalid Flight Number\n");
			continue;
		}
		
		booking(&flight[index].available_seats);
	}
 	return 0;
}

