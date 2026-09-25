//swap three variables

#include <stdio.h>

int main() 
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d;

    printf("\nBefore swapping: a = %d, b = %d, c = %d\n", a, b, c);

    d = a;
    a = b;
    b = c;
    c = d;

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
