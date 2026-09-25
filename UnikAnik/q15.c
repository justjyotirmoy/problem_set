//Write a C program to swap two variables using a third variable
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the values after interchnaged are:\na=%d\nb=%d",a,b);
    return 0;
}