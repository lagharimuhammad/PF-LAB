#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int var; 

    printf("Enter size of array: ");
    scanf("%d", &var);

    int* ptr = (int*)malloc(var * sizeof(int));
    if (ptr == NULL) 
    {
        printf("failed\n");
        return 1;
    }
    
    int sum = 0;

    for (int i = 0; i < var; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }
    
    printf("sum: %d\n", sum);


    int* new_ptr = (int*)realloc(ptr, var * 2 * sizeof(int));
    
    if (new_ptr == NULL) 
    {
        printf("failed\n");
        free(ptr); 
        return 1;
    }
    ptr = new_ptr;
    
    for (int i = var; i < var * 2; i++) 
    {
        printf("enter element: ");
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    printf("sum: %d", sum);

    free(ptr);
    
    return 0;
}

