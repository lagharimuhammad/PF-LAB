#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    char name[50];
    int e_id;
    float salary;
} Employee;


typedef struct Department
{
    char d_name[50];
    int num_employees;
    Employee employees[5];
} Department;


float salary(Department dept) 
{
    float total_salary = 0;
    
    for (int i = 0; i < dept.num_employees; i++) 
	{
        total_salary += dept.employees[i].salary;
    }
    return total_salary;
}

int main() {

    Department dept;
    strcpy(dept.d_name, "Computer Science");
    dept.num_employees = 4;


    dept.employees[0] = (Employee){"Baqar", 21, 50000};
    dept.employees[1] = (Employee){"Kashif", 22, 55000};
    dept.employees[2] = (Employee){"Anwer", 23, 60000};
    dept.employees[3] = (Employee){"Omer", 24, 45000};

   
    printf("Department: %s\n\n", dept.d_name);
    
    printf("Employees:\n");
    
    for (int i = 0; i < dept.num_employees; i++) 
	{
		printf("Name: %s\n", dept.employees[i].name);
		printf("ID: %d\n", dept.employees[i].e_id);
		printf("Salary: %.2f\n", dept.employees[i].salary);
		printf("\n");
    }

    float total_salary = salary(dept);
    printf("\nTotal Salary for %s Department: %.2f\n",dept.d_name, total_salary);

    return 0;
}

