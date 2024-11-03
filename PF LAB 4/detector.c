#include<stdio.h>

int main()
{
char ch;

printf("input a character");
scanf("%c", &a);

if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
{
printf("its a vowel");
}
else
{
if( ch >= 0 || ch <= 9 )
{
printf("its a digit");
}
else
{
if(ch >= 'a' || ch <= 'z' || ch >= 'A' || ch <= 'Z')
{
printf("its a consonant");
}
else
{
printf("it is a special charcter ");
}

retrun 0;
} 
