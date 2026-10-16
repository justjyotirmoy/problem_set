// Program to check whether the given character is uppercase or lowercase
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character to check uppercase or lowercase : \n");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        printf("It's an uppercase character.\n");
    }
    else
    {
        printf("It's a lowercase character.\n");
    }
    return 0;
}