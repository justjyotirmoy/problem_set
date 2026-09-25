//Write a C program to print all odd numbers from 1 to n.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%2!=0)          //dont put !== its wrong
            printf("%d,",i);
    }
    if(n%2!=0)
        printf("%d",n);
    return 0;
}