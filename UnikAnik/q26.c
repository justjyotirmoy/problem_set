//Write a C program to check whether a character is an alphabet, digit or special character.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the varaiable to check\n");
    scanf("%c",&ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) // use '' this a to z
    {
        printf("Alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
return 0;
}