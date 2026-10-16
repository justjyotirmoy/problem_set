//program to print ASCII values of all uppercase alphabets.

#include <stdio.h>
int main()
{
    char ch = 'A';
    printf("\nASCII values from A to Z:\n");
    while (ch <= 'Z') {
        printf("ASCII value of %c is %d\n", ch, ch);
        ch++;
    }
    return 0;
}   