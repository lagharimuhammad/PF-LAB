#include <stdio.h>

int sum(int num) {
    if (num == 0) 
    {
        return 0; 
    }
    return (num % 10) + sum(num/ 10); // Recursive case
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("sum of the digits is: %d\n", sum(num));

    return 0;
}