//Print ASCII values of all uppercase alphabets

#include <stdio.h>

int main()
{
    int i;

    for(i= 65; i<= 90; i++)
    {
        printf("%3c : %3d\n", i, i);
    }

    return 0;
}