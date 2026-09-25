//Write a C program to find the largest of two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 no.\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("&d is larger no than %d",a,b);
    }
    else if(a==b)
    {
        printf("both numbers have equal value");
    }
    else
    {
        printf("%d is larger no than %d",b,a);
    }
    return 0;
}