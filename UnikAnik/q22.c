//Write a C program to find the largest of three numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 no.\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is larger no.",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d is larger no.",b);
    }
    else
    {
        printf("%d is larger no.",c);
    }
    return 0;
}