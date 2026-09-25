//count of even and odd in a range

#include<stdio.h>

void even_count(int ses)
{
    int sum=0;
    printf("\nThe EVEN Numbers in the given range from 1 to %d are: ", ses); 

    for(int i=0;i<=ses-2;i+=2)
    {
        printf("%d, ",i+2);
        sum+=1;
    }
    printf("\nThe Number Even Numbers in this range is: %d\n ", sum);
  
}

void odd_count(int ses)
{
    int sum=0;
    printf("\nThe ODD Numbers in the given range from 1 to %d are: ", ses); 

    for(int i=1;i<=ses;i+=2)
    {
        printf("%d, ",i);
        sum+=1;
    }
    printf("\nThe number of ODD Numbers in this range is: %d\n ", sum);
  
}

int main ()
{
    int ses;

    printf("\nEnter the last number of the series: ");
    scanf("%d",&ses);

    even_count(ses);
    odd_count(ses);

    return 0;
}
