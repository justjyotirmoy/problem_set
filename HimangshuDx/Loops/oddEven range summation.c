//sum of numbers in a range with odd even 

#include<stdio.h>

void sum(int ses)
{
    int sum=0;
    printf("\nThe Numbers in the given range from 1 to %d are: ", ses);
    
    for(int i=1;i<=ses;i++)
    {
        printf("%d, ",i);
        sum+=i;
    }
    printf("\nThe summation of these numbers is: %d\n ", sum);
  
}

void eve_sum(int ses)
{
    int sum=0;
    printf("\nThe EVEN Numbers in the given range from 1 to %d are: ", ses);
    
    for(int i=0;i<=ses-2;i+=2)
    {
        printf("%d, ",i+2);
        sum+=i;
    }
    printf("\nThe summation of these even numbers is: %d\n ", sum);
  
}

void odd_sum(int ses)
{
    int sum=0;
    printf("\nThe ODD Numbers in the given range from 1 to %d are: ", ses);
    
    for(int i=1;i<=ses;i+=2)
    {
        printf("%d, ",i);
        sum+=i;
    }
    printf("\nThe summation of these odd numbers is: %d \n", sum);
  
}


int main ()
{
    int ses;

    printf("\nEnter the last number of the series: ");
    scanf("%d",&ses);

    sum(ses);
    eve_sum(ses);
    odd_sum(ses);

    return 0;
}