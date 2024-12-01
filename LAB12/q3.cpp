#include <stdio.h>

int length(char *a)
{
    int i = 0;
    while(!(*a)=='\0')
    {
        i++;
        a++;
    }
    printf("\nlength: %d \n",i);
    return i;
}

void reverse(char *a, char *b, int num, char *c)
{
    int n = num / 2;
    char var;
    
    for(int i = 0; i < n; i++)
    {
        var = *a;
        *a = *b;
        *b = var;
        a++;
        b--;
    }

    for(int j = 0; j < num; j++)
    {
        printf("%c", *c);
        c++;
    }
    
}

void concatenate(char *x, char *u)
{
    while (*x != '\0')
    {
        x++;
    }


    while (*u != '\0')  
    {
        *x = *u;
        x++;
        u++;
    }

    *x = '\0';
    while (!(*u) == '\0')
    {
        printf("%c", *u);
        u++;
    }
}

int main() 
{
    char str[] = "TSAF";

    char* z = str;
	char* y = str;
	char* x = str;
	char* w = str;
    
    char str2[] = "NUCES";
    char* u = str2;
    
    int ans = length(z);  
    reverse(y, y+(ans-1), ans, w);
   	printf("\n");
	concatenate(x, u);
	printf("%s", str);

	

    return 0;
}
