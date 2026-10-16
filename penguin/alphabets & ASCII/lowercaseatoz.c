//program to print all lowercase alphabets from a to z

#include <stdio.h>
int main()
{   
    char ch = 'a';
    printf("\nLowercase Alphabets from a to z:\n");
    while (ch <= 'z') {                                 
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    return 0;
}