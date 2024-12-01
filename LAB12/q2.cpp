#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
    int id;
    char naam[50];
    float salary;
} Employee;

void sort(Employee* info, int n)
{
    Employee temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (info[j].salary > info[j + 1].salary) 
            {
                temp = info[j];
                info[j] = info[j + 1];
                info[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n = 3;
    Employee* info = (Employee*)calloc(n, sizeof(Employee));  
    if (info == NULL) 
    {
        printf("Failed");
        return 1;
    }
    
    for (int i = 0; i < n; i++)  
    {
        
        printf("Enter employee's ID: ");
        scanf("%d", &info[i].id);
        
        printf("Enter employee's name: ");
        scanf("%s", info[i].naam);  
        
        printf("Enter employee's salary: ");
        scanf("%f", &info[i].salary);
    } 
    
    sort(info, n);


    for (int i = 0; i < n; i++)
    {
        printf("employee id: %d\n", info[i].id);
        printf("employee name: %s\n", info[i].naam);
        printf("employee salary: %.2f\n", info[i].salary);
    }

    free(info);
    return 0;
}

