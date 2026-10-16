#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("\"%c\" is lowercase",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("\"%c\" is uppercase",ch);
    }
    else
    {
        printf("Not an alphabet!",ch);
    }
    return 0;
}