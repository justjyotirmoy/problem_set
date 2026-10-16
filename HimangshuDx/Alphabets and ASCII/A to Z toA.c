// a to z using a while loop and Z to a Also in upper case lower case 

#include<stdio.h>

int main()
{
    char alpha='a';
    printf("\nCharacters in Ascending order(Lower Case): ");
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

    char gama;
    printf("\nCharacters in Ascending order(Upper Case): ");
    for(gama='A'; gama<='Z'; gama++)
        printf("%c, ",gama);

    return 0;
}

