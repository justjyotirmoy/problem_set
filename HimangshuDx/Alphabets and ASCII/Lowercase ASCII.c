//Print ASCII values of all Lowercase alphabets

#include <stdio.h>

int main()
{
    int i;

    for(i= 97; i<= 122; i++)
    {
        printf("%3c : %3d\n", i, i);
    }

    return 0;
}