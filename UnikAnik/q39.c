//Write a C program to find the sum of all odd numbers from 1 to n.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a no:\n");      
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
            sum=sum+i;
    }
    printf("the sum of all odd no from 1 to %d is:\n%d",n,sum);
    return 0;
}