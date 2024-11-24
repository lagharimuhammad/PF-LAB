#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Employee 
{
    char name[20];
    int id;
    float salary;
} Employee;

void add(FILE *file) 
{
    Employee e;
    printf("enter employee name: ");
    getchar();
    fgets(e.name, 20, stdin);
    e.name[strcspn(e.name,"\n")] = '\0';
    printf("enter id: ");
    scanf("%d", &e.id);
    printf("enter salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(Employee), 1, file);
    printf("mission successful\n");
}

void display(FILE *file) 
{
    Employee e;
    rewind(file);

    printf("\nEmployee Records:\n\n");
    
    while (fread(&e, sizeof(Employee), 1, file)) 
	{
        printf("Name: %s\n", e.name);
        printf("ID: %d\n", e.id);
        printf("Salary: %.2f\n", e.salary);
    }
}

void salary(FILE *file) {
    Employee e;
    float t_salary = 0;

    
    rewind(file);

    while (fread(&e, sizeof(Employee), 1, file)) 
	{
        t_salary += e.salary;
    }

    printf("\nTotal Salary Expense: %.2f\n", t_salary);
}

int main() 
{
    FILE *file = fopen("employees.bin", "wb+");
    if (!file) 
	{
        perror("Failed to open file");
        return 1;
    }

    int option;

    while (1) {
        printf("\n--Employee Salary Record--\n");
        printf("1. add employee details\n");
        printf("2. display employee details\n");
        printf("3. display total salary\n");
        printf("4. exit\n");
        
        printf("enter your action: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                add(file);
                break;
                
            case 2:
                display(file);
                break;
                
            case 3:
                salary(file);
                break;
                
            case 4:
                fclose(file);
                return 0;
                
            default:
                printf("Invalid choice\n");
        }
    }
}

