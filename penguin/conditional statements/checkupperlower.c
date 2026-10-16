//program to check whether a character is uppercase or lowercase

#include <stdio.h>

int main() 
{
    char ch;

    printf("\nEnter a character (i said one dei) : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase character.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase character.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}