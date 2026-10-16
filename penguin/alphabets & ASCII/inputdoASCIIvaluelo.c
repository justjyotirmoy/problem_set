//program to input a character and print its ASCII value.

#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);   
    printf("ASCII value of %c is %d\n", ch, ch);
    return 0;
}   