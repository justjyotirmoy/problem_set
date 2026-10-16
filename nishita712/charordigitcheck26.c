// Program to check whether the given character is a digit, character or special character
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:  \n");
    scanf("%c",&a);
    if(a>='0' && a<='9')
    {
        printf("%c is a digit\n",a);
    }
    else 
    if((a>= 'a' && a<='z') || (a>='A' && a<='Z'))//also we can use ascii values
    {
        printf("%c is a character\n",a);
    }
    else 
    {
        printf("%c is a special character\n",a);
    }
    return 0;
}