/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Write a program to swap two numbers using bitwise XOR.*/

#include <stdio.h>

int main() {
    int a, b;


    printf("Enter first numbers 'a':");
    scanf("%d", &a);
    printf("Enter first numbers 'b':");
    scanf("%d", &b);

    //swap values of a and b
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("after swapping a is %d and b is %d\n", a, b);

    return 0;
}
