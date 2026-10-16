// count number of digits in a number

#include<stdio.h>

int digit(int n)
{
    int last, s = 0;

    while (n > 0)
    {
        last = n % 10;            // number tuk 10 di devide korile reminder t tar last digit tu thaki jai.
        n = n / 10;               // and number tuk 10 di devide korile answer t xei last dgit tu nuhua ke remaining agor digit khini pau. 
        printf("%d, ", last);
        s++;
    }

    return s;
}

int main()
{
    int n, sum;

    printf("\nEnter a Number: ");
    scanf("%d",&n);
    printf("\nYou have entered %d", n);

    printf("\nThe digits are: ");
    
    sum=digit(n);

    printf("\nThe number of digits in %d is: %d", n, sum); 

    return 0;
}