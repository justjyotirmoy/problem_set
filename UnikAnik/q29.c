//Write a C program to check whether a number is divisible by 5 and 11.
#include<stdio.h>
int main()
{
    int n;
    printf("entr the no. to check:\n");
    scanf("%d",&n);
    if(n%5==0)
        printf("the given no %d is divisible by 5",n);
    else if(n%11==0)
        printf("the given no %d is divisible by 11",n);
    else
        printf("the given no %d is not divisible by both 11 and 5",n);
    return 0;
}