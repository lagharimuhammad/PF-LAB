#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int passenger_id;
    int p_class;
    char name[100];
    char gender[10];
    float age;
    int sibsp;
    int parch;
    char ticket[20];
    float amount;
    char cabinet[20];
    char embarked[5];
    int survived;
} Passenger;

int load_dataset(const char *file_name, Passenger passengers[], int max_passengers) 
{
    FILE *file = fopen(file_name, "r");
    if (!file) 
    {
        perror("Error");
        return -1;
    }
    
    char buffer[1024];
    int count = 0;
    
    fgets(buffer, sizeof(buffer), file);
    
    while (fgets(buffer, sizeof(buffer), file) && count < max_passengers) 
    {
        Passenger *p = &passengers[count];
        char *token = strtok(buffer, ",");
        
        p->passenger_id = atoi(token);
        token = strtok(NULL, ",");
        p->survived = atoi(token);
        token = strtok(NULL, ",");
        p->p_class = atoi(token);
        token = strtok(NULL, ",");
        strcpy(p->name, token);
        token = strtok(NULL, ",");
        strcpy(p->gender, token);
        token = strtok(NULL, ",");
        p->age = (strcmp(token, "") == 0) ? -1.0f : atof(token);
        token = strtok(NULL, ",");
        p->sibsp = atoi(token);
        token = strtok(NULL, ",");
        p->parch = atoi(token);
        token = strtok(NULL, ",");
        strcpy(p->ticket, token);
        token = strtok(NULL, ",");
        p->amount = atof(token);
        token = strtok(NULL, ",");
        strcpy(p->cabinet, token ? token : "");
        token = strtok(NULL, ",");
        strcpy(p->embarked, token ? token : "");
        
        count++;
    }
    
    fclose(file);
    return count;
}

float calculate_average_age(Passenger passengers[], int count) 
{
    float total_age = 0.0f;
    int valid_count = 0;
    
    for (int i = 0; i < count; i++) 
    {
        if (passengers[i].age >= 0) 
        {
            total_age += passengers[i].age;
            valid_count++;
        }
    }
    
    return valid_count > 0 ? total_age / valid_count : 0.0f;
}

void calculate_survival(Passenger passengers[], int count, float *male_rate, float *female_rate) 
{
    int male_survivors = 0, female_survivors = 0;
    int total_males = 0, total_females = 0;
    
    for (int i = 0; i < count; i++) {
        if (strcmp(passengers[i].gender, "male") == 0) 
        {
            total_males++;
            if (passengers[i].survived == 1) 
            {
                male_survivors++;
            }
        } else if (strcmp(passengers[i].gender, "female") == 0) 
        {
            total_females++;
            if (passengers[i].survived == 1) 
            {
                female_survivors++;
            }
        }
    }
    
    *male_rate = total_males > 0 ? (float)male_survivors / total_males : 0.0f;
    *female_rate = total_females > 0 ? (float)female_survivors / total_females : 0.0f;
}

void list_survivors(Passenger passengers[], int count) 
{
    for (int i = 0; i < count; i++) 
    {
        if (passengers[i].survived == 1) 
        {
            printf("name: %s",passengers[i].name);
            printf("age: %.1f", passengers[i].age >= 0 ? passengers[i].age : -1.0f);
            printf("class: %d\n", passengers[i].name);
        }
    }
}

void list_missing(Passenger passengers[], int count) 
{
    for (int i = 0; i < count; i++) 
    {
        if (strlen(passengers[i].cabinet) == 0 || strcmp(passengers[i].cabinet, "") == 0) 
        {
            printf("Passenger_id: %d", passengers[i].passenger_id);
            printf("name: %s\n", passengers[i].name);
        }
    }
}

int main()
{
    const char *file_name = "titanic.csv";
    const int max_passengers = 1000;
    Passenger passengers[max_passengers];
    
    int count = load_dataset(file_name, passengers, max_passengers);
    if (count == -1) 
    {
        printf("failed\n");
        return 1;
    }
    
    float average_age = calculate_average_age(passengers, count);
    printf("average age of passengers: %.2f\n", average_age);
    
    float male_survival, female_survival;
    calculate_survival(passengers, count, &male_survival, &female_survival);
    printf("survival rate (Male): %.2f%%\n", male_survival * 100);
    printf("survival rate (Female): %.2f%%\n", female_survival * 100);
    
    printf("\nlist of survivors:\n");
    list_survivors(passengers, count);
    
    printf("\nlist of passengers with missing cabin details:\n");
    list_missing(passengers, count);
    
    return 0;
}