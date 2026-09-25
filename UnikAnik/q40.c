//Write a C program to find the count of even and odd numbers between 1 and n.
#include<stdio.h>
int main()
{
    int i,n,count=0,odd=0;
    printf("enter a no:\n");      
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            count++;
        else
            odd++;
    }
    printf("the count of all even no from 1 to %d is:\n%d\nthe count of all odd no from 1 to %d is:\n%d",n,count,n,odd);
    return 0;
}