//program to print all alphabets from z to a using a while loop

#include <stdio.h>
int main()
{   
    char ch = 'z';
    printf("\nAlphabets from z to a:\n");
    while (ch >= 'a') {
        printf("%c ", ch);
        ch--;
    }
    printf("\n");
    return 0;
}