#include<stdio.h>
#include<string.h>

typedef struct Car
{
    char car_name[20];
    char car_make[20];
    char price[20];
    int year;
    float Mileage;
} Car;

void display(Car m[], int i)
{
    if(i == 0)
    {
        printf("No car");
        return;
    }

    for(int c = 0; c < i; c++)
    {
        printf("\n Car name: %s\n", m[c].car_name);
        printf("Car make: %s\n", m[c].car_make);
        printf("Price: %s\n", m[c].price);
        printf("Year: %d\n", m[c].year);
        printf("Mileage: %.2f\n", m[c].Mileage);
    }
}

void add(Car m[], int *count)
{
    if(*count > 4)
    {
        printf("Cannot add more Car");
        return;
    }

    Car m1;

    printf("Add car name: ");
    getchar();
    fgets(m1.car_name, 20, stdin);
    m1.car_name[strcspn(m1.car_name, "\n")] = '\0';

    printf("Add Car make: ");
    fgets(m1.car_make, 20, stdin);
    m1.car_make[strcspn(m1.car_make, "\n")] = '\0';

    printf("Add price: ");
    fgets(m1.price, 20, stdin);
    m1.price[strcspn(m1.price, "\n")] = '\0';

    printf("Add release year: ");
    scanf("%d", &m1.year);

    printf("Add Mileage: ");
    scanf("%f", &m1.Mileage);

    m[*count] = m1;
    (*count)++;
}

void search_car_make(Car m[], int count, char search[])
{
    int z = 0;
    for(int a = 0; a < count; a++)
    {
        if(strcmp(m[a].car_make, search) == 0)
        {
            printf("Car name: %s\n", m[a].car_name);
            z++;
            continue;
        }
    }

    if(z == 0)
    printf("No such Car exist here");

}

int main() 
{
    Car m[5];
    int option;
    int count = 0;
    char search[20];

   while(1)
   {
    printf("\n--Car Showroom--\n");
    printf("1. Add Cars\n");
    printf("2. Search Cars by Make\n");
    printf("3. Display Cars\n");
    printf("4. Exit\n");

    printf("Enter your option : ");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
        add(m, &count);
        break;

    case 2:
        printf("Enter Car make: ");
        getchar();
        fgets(search, 20, stdin);
        search[strcspn(search,"\n")] = '\0';
        search_car_make(m, count, search);
        break;

    case 3: 
        display(m, count);
        break;

    case 4:
        return 0;

    default:
        printf("Invalid input");
    }
   } 
    
    return 0;
}
