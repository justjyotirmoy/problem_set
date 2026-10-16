//Print ASCII values of digits 0 to 9

#include <stdio.h>

int main()
{
    int i;

    for(i= 48; i<= 57; i++)
    {
        printf("%3c : %3d\n", i, i);
    }

    return 0;
}