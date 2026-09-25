//Write a C program to check whether a number is divisible by both 3 and 5.
#include<stdio.h>
int main()
{
    int n;
    printf("entr the no. to check:\n");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
        printf("the given no %d is divisible by both 3 and 5",n);
    else
        printf("the given no %d is not divisible by both 3 and 5",n);
    return 0;
}