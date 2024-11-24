#include<stdio.h>
#include<string.h>

typedef struct Movie
{
    char title[20];
    char genre[20];
    char director[20];
    int year;
    float rating;
} Movie;

void display(Movie m[], int i)
{
    if(i == 0)
    {
        printf("No Movies");
        return;
    }

    for(int c = 0; c < i; c++)
    {
        printf("\nTitle: %s\n", m[c].title);
        printf("Genre: %s\n", m[c].genre);
        printf("Director: %s\n", m[c].director);
        printf("Release year: %d\n", m[c].year);
        printf("Rating: %.2f\n", m[c].rating);
    }
}

void add(Movie m[], int *count)
{
    if(*count > 4)
    {
        printf("Cannot add more movies");
        return;
    }

    Movie m1;

    printf("Add title: ");
    getchar();
    fgets(m1.title, 20, stdin);
    m1.title[strcspn(m1.title, "\n")] = '\0';

    printf("Add genre: ");
    fgets(m1.genre, 20, stdin);
    m1.genre[strcspn(m1.genre, "\n")] = '\0';

    printf("Add director: ");
    fgets(m1.director, 20, stdin);
    m1.director[strcspn(m1.director, "\n")] = '\0';

    printf("Add release year: ");
    scanf("%d", &m1.year);

    printf("Add rating: ");
    scanf("%f", &m1.rating);

    m[*count] = m1;
    (*count)++;
}

void search_genre(Movie m[], int count, char search[])
{
    int z = 0;
    for(int a = 0; a < count; a++)
    {
        if(strcmp(m[a].genre, search) == 0)
        {
            printf("Title: %s\n", m[a].title);
            z++;
            continue;
        }
    }

    if(z == 0)
    printf("No such genre movie exist");

}

int main() 
{
    Movie m[5];
    int option;
    int count = 0;
    char search[20];

   while(1)
   {
    printf("\n--Movie Management--\n");
    printf("1. Add Movie\n");
    printf("2. Search Movies by genre\n");
    printf("3. Display movies\n");
    printf("4. Exit\n");

    printf("Enter your option : ");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
        add(m, &count);
        break;

    case 2:
        printf("Enter genre: ");
        getchar();
        fgets(search, 20, stdin);
        search[strcspn(search,"\n")] = '\0';
        search_genre(m, count, search);
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
