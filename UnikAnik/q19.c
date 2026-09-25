//Write a C program to check whether a number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no. to check:\n");
    scanf("%d",&n);
    if(n>0)
        printf("the given no. is positive");
    else if(n==0)
        printf("the given no. is zero");
    else
        printf("the given no. is negative");
    return 0;
}