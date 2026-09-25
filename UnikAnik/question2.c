//Write a C program to perform addition, subtraction, and divsion of two numbers.
#include<stdio.h>
int main()
{
    int a,b,add,sub,div;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    add=a+b;
    printf("the addition of %d and %d is:\n %d",a,b,add);
    sub=a-b;
    printf("\nthe subtraction of %d and %d is:\n %d",a,b,sub);
    div=a/b;
    printf("\nthe division of %d and %d is:\n %d",a,b,div);
    return 0;
}
