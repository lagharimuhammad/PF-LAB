#include <stdio.h>

void reverse(int *ptr, int *ptr1) 
{
    int *first = ptr;
    int *last = ptr1;
    int temp;

    while   (first < last) 
    {
        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--;
    }
}

int main() 
{
    int n;

    printf("enter a size of your array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d number of eleements: ",n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    int* ptr = arr;
    int* ptr1 = arr + n -1;

    reverse(ptr, ptr1);

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
