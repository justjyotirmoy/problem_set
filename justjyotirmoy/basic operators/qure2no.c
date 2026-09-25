//program to find the quotient and remainder of two numbers.

#include <stdio.h>

int main() 
{
    int a = 10;
    int b = 5;
    int quotient = a / b;
    int remainder = a % b;

    printf("\ngiven numbers are: %d and %d\n", a, b);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
