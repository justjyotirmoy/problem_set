// a to z using a while loop and Z to a 

#include<stdio.h>

int main()
{
    char alpha='a';
    printf("\nCharacters in Ascending order: ");
    while(alpha<='z')
    {
        printf("%c, ", alpha);
        alpha++;
    }

    char beta='z';
    printf("\nCharacters in Descending order: ");
    while(beta>='a')
    {
        printf("%c, ", beta);
        beta--;
    }

    return 0;
}