//swap two numbers using third variable
#include <stdio.h>

int main() 
{
    int a = 10;
    int b = 20;
    int c;

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
