//Write a C program to check whether a number is even or odd
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no. to check:\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("the given no is even");
    else
        printf("the given no is odd");
    return 0;
}