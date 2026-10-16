//program to print alternate alphabets from a to z.
//mane eek to chorke dusre wala 

#include <stdio.h>
int main()
{
    char ch = 'a';
    printf("\nAlternate Alphabets from a to z:\n");
    while (ch <= 'z') {
        printf("%c ", ch);
        ch += 2;
    }
    printf("\n");
    return 0;
}   