//vowels and consonents

#include <stdio.h>

int main(void)
{
    char alpha;

    printf("\nAll VOWELS from A to Z are: ");

    for (alpha = 'A'; alpha <= 'Z'; alpha++)
    {
        if (alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
            printf("%c, ", alpha);
        
    }

    printf("\n");

    printf("\nAll CONSONENTS from A to Z are: ");

   for (alpha = 'A'; alpha <= 'Z'; alpha++)
    {
        if (alpha != 'A' && alpha != 'E' && alpha != 'I' && alpha != 'O' && alpha != 'U')
            printf("%c, ", alpha);
        
    }

    return 0;
}

