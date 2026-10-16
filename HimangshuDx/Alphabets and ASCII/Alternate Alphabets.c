//alternate alphabets from a to z

#include<stdio.h>

int main()
{
    char alpha;
    printf("\nPrinting alternate alphabets from a to z(Lower Case): ");

    for(alpha='a'; alpha<='z'; alpha+=2)
        printf("%c, ",alpha);


    return 1;
}