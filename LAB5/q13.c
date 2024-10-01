/* Name: Muhammad Baqar Laghari
   Roll no : 24k-0006
   Section: BAI-1A
   Q: Write a program that uses bitwise operators to perform encryption and decryption of a
   character. */

#include <stdio.h>

int main() {
    char ch, en_ch, de_ch;
    int key;

    printf("enter a character to encrypt: ");
    scanf(" %c", &ch);
    printf("enter a key character: ");
    scanf(" %d", &key);

    en_ch = ch + key;
    de_ch = en_ch - key;
    
    printf("encrypted character: %c\n", en_ch);
    printf("decrypted character: %c\n", de_ch);

    return 0;
}
