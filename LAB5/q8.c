/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Create a program that counts the number of 1s in the binary representation of a number.*/

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // condition for calculating no. of 1s in a program 
    while (n > 0) {
        int i = n % 2;
        count = count + i; 
        n = n/2;         
    }

    printf("Number of 1s is %d\n", count);

    return 0;
}
