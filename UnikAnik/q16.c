//Write a C program to swap two variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the values after interchnaged are:\na=%d\nb=%d",a,b);
    return 0;
}