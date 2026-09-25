//Write a C program to find the quotient and remainder of two numbers.
#include<stdio.h>
int main()
{
    int a,b,div,remain;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    div=a/b;
    printf("\nthe quotient of %d and %d is:\n %d",a,b,div);
    remain=a-(b*div);
    printf("\nthe remainder of %d and %d is:\n %d",a,b,remain);
    return 0;
}
