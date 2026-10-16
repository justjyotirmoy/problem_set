//program to print all consonants from a to z.

#include <stdio.h>
int main()
{
    char ch = 'a';
    printf("\nConsonants from a to z:\n");
    while (ch <= 'z') {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {       // != means not equal to
            printf("%c ", ch);
        }
        ch++;
    }
    printf("\n");
    return 0;
}