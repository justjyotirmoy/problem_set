//Write a C program to check whether a character is uppercase or lowercase
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character to check:\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("%c is a lower case character",ch);
    else
        printf("%c is a upper case charatcer",ch);
    return 0;
}
