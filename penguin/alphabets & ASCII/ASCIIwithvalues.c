//program to print ASCII values of all characters from a to z.

#include <stdio.h>
int main()
{
    char ch = 'a';
    printf("\nASCII values from a to z:\n");
    while (ch <= 'z') {
        printf("ASCII value of %c is %d\n", ch, ch);
        ch++;
    }
    return 0;
}