//print all ASCII characters with their values

#include <stdio.h>

int ascii()
{   
    int i;

    for (i= 0; i<= 127; i++)
    {
        if (i>= 32 && i<= 126)
            printf("%3d : %c\n", i, i);
        else
            printf("%3d : non-printable control character\n", i);
    }
    return 0;
} 


int main()
{
    ascii();

    return 0;
}


