//Write a C program to find the sum of numbers from 1 to n.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a no:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("the sum of no from 1 to %d is:\n%d",n,sum);
    return 0;
}