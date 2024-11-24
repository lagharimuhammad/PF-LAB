#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Course 
{
    char name[20];
    char code[10];
    char instructor[20];
} Course;

typedef struct Student 
{
    char name[20];
    int roll_number;
    int num_courses;
    Course courses[5];
} Student;

void add(FILE *file) 
{
    Student s;

    printf("\nenter student name: ");
    getchar();
    fgets(s.name, 20, stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("how many courses to enroll (max 5): ");
    scanf("%d", &s.num_courses);

    if (s.num_courses > 5) 
	{
        printf("cannot pick more than 5 courses.\n");
        return;
    }

    for (int i = 0; i < s.num_courses; i++) 
	{
        getchar();
        printf("\n enter  course name: ");
        fgets(s.courses[i].name, 20, stdin);
        s.courses[i].name[strcspn(s.courses[i].name, "\n")] = '\0';

        printf("enter course code: ");
        scanf("%s", s.courses[i].code);

        getchar();
        printf("enter course instructor: ");
        fgets(s.courses[i].instructor, 20, stdin);
        s.courses[i].instructor[strcspn(s.courses[i].instructor, "\n")] = '\0';
    }

    fwrite(&s, sizeof(Student), 1, file);
    printf("mission successful.\n");
}

void display(FILE *file) 
{
    int roll_number;
    Student s;
    int found = 0;

    printf("\n enter roll number to search: ");
    scanf("%d", &roll_number);

    rewind(file);

    while (fread(&s, sizeof(Student), 1, file)) 
	{
        if (s.roll_number == roll_number) 
		{
            found = 1;
            printf("\nstudent name: %s\n", s.name);
            printf("roll number: %d\n", s.roll_number);
            printf("enrolled courses:\n");
            
            for (int i = 0; i < s.num_courses; i++) 
			{
                printf("course name: %s\n", s.courses[i].name);
                printf("course code: %s\n", s.courses[i].code);
                printf("instructor: %s\n", s.courses[i].instructor);
            }
            break;
        }
    }

    if (!found) 
    printf("No record found.\n");
    
}

void generate(FILE *file) 
{
    rewind(file);
    Student s;
    char courses[500][50]; // 500 bcz there are 100 students and each std can have 5 courses maximum
    int counts[500] = {0};
    int total_courses = 0;

    while (fread(&s, sizeof(Student), 1, file)) 
	{
        for (int i = 0; i < s.num_courses; i++) 
		{
            int found = 0;
            for (int j = 0; j < total_courses; j++) 
			{
                if (strcmp(courses[j], s.courses[i].name) == 0) 
				{
                    counts[j]++;
                    found = 1;
                    break;
                }
            }
            if (!found) 
			{
                strcpy(courses[total_courses], s.courses[i].name);
                counts[total_courses] = 1;
                total_courses++;
            }
        }
    }

    printf("course report:\n");
    for (int i = 0; i < total_courses; i++) {
        printf("course: %s \nno. of Students: %d\n", courses[i], counts[i]);
    }
}

void modify(FILE *file) 
{
    int roll_number;
    Student s;
    int found = 0;
    FILE *temp_file = fopen("temp.bin", "wb");

    if (!temp_file) 
	{
        printf("Failed");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &roll_number);

    rewind(file);

    while (fread(&s, sizeof(Student), 1, file)) 
	{
        if (s.roll_number == roll_number) 
		{
            found = 1;
            printf("\ncurrent enrollment for %s:\n", s.name);

            for (int i = 0; i < s.num_courses; i++) 
			{
                printf("course name: %s\n", s.courses[i].name);
                printf("course code: %s\n", s.courses[i].code);
                printf("instructor: %s\n", s.courses[i].instructor);
            }

            printf("\nenter number of courses to enroll (max 5): ");
            scanf("%d", &s.num_courses);

            if (s.num_courses > 5) 
			{
                printf("cannot pick more than 5 courses.\n");
                fwrite(&s, sizeof(Student), 1, temp_file);
                continue;
            }

            for (int i = 0; i < s.num_courses; i++) 
			{
                getchar();
                printf("\nenter course name: ");
                fgets(s.courses[i].name, 20, stdin);
                s.courses[i].name[strcspn(s.courses[i].name, "\n")] = '\0';

                printf("Enter Course Code: ");
                scanf("%s", s.courses[i].code);

                getchar();
                printf("enter course instructor: ");
                fgets(s.courses[i].instructor, 20, stdin);
                s.courses[i].instructor[strcspn(s.courses[i].instructor, "\n")] = '\0';
            }
        }
        fwrite(&s, sizeof(Student), 1, temp_file);
    }

    fclose(file);
    fclose(temp_file);

    remove("students.bin");
    rename("temp.bin", "students.bin");

    file = fopen("students.bin", "rb+");

    if (!found)
        printf("No record found.\n");
        
     else 
        printf("Mission successful.\n");
    
}

int main() {
    FILE *file = fopen("students.bin", "rb+");
    if (!file) 
	{
        file = fopen("students.bin", "wb+");
        if (!file) 
		{
            perror("Failed to open file");
            return 1;
        }
    }

    int option;

    while (1) 
	{
        printf("\n-- Course Enrollment System --\n");
        printf("1. Add student and courses\n");
        printf("2. Display courses\n");
        printf("3. Generate course report\n");
        printf("4. Modify student enrollment\n");
        printf("5. Exit\n");

        printf("Enter your action: ");
        scanf("%d", &option);

        switch (option) 
		{
            case 1:
                add(file);
                break;
                
            case 2:
                display(file);
                break;
                
            case 3:
                generate(file);
                break;
                
            case 4:
                modify(file);
                break;
                
            case 5:
                fclose(file);
                return 0;
                
            default:
                printf("Invalid action.\n");
        }
    }

    return 0;
}

