//exchanging two float-point variables

#include <stdio.h>

int main() 
{
    float a = 10.5;
    float b = 20.5;
    float c;

    printf("\nBefore swapping: a = %f, b = %f\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After swapping: a = %f, b = %f\n", a, b);

    return 0;
}
