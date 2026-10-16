//program to input an ASCII value and print its corresponding character

#include <stdio.h>
int main()
{
    int ascii_value;
    printf("\nEnter an ASCII value: ");
    scanf("%d", &ascii_value);
    printf("Character corresponding to ASCII value %d is %c\n", ascii_value, ascii_value);
    return 0;
}                                 //do digit ka number print karna
