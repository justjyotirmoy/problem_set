//Write a C program to print all multiples of 3 between 1 and n.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no:\n");      
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%3==0)
        printf("%d,",i);  
    }
    if(n%3==0)
        printf("%d",n);
    return 0;
}