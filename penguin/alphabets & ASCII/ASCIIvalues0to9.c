//program to print ASCII values of all characters from 0 to 9.

#include <stdio.h>
int main()
{
    char ch = '0';
    printf("\nASCII values from 0 to 9:\n");
    while (ch <= '9') {
        printf("ASCII value of %c is %d\n", ch, ch);
        ch++;
    }
    return 0;
}   