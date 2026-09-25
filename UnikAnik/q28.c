//Write a C program to check whether a character is a vowel or consonant
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character to check:\n");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("the given character %c is an vowel",ch);
    else
        printf("the given character %c is a consonat",ch);
    return 0;
}