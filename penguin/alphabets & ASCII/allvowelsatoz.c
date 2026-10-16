//program to print all vowels from a to z.

#include <stdio.h>
int main()
{
    char ch = 'a';          
    printf("\nVowels from a to z:\n");
    while (ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c ", ch);
        }
        ch++;
    }
    printf("\n");    
    return 0;
}