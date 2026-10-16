//program to print all uppercase alphabets from A to Z.

#include <stdio.h>
int main()
{   
    char ch = 'A';
    printf("\nUppercase Alphabets from A to Z:\n");
    while (ch <= 'Z') {                                 
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    return 0;
}