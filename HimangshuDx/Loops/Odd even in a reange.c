//Odd-even in a range

#include<stdio.h>

void even(int ses)
{
    printf("\nEven numbers in the range are: ");
    for(int i=0;i<=ses;i+=2)
            printf("%d, ",i);
}

void odd(int ses)
{
    printf("\nOdd numbers in the range are: ");
    for(int i=1;i<=ses;i+=2)
            printf("%d, ",i);
}

int main ()
{
    int ses;

    printf("\nEnter the last number of the series: ");
    scanf("%d",&ses);

    even(ses);
    odd(ses);

    return 0;
}