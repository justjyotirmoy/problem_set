//Write a C program to perform multiplication (*) and modulus (%) of two numbers.
#include<stdio.h>
int main()
{
    int a,b,mltiply,modulus;
    printf("Enter 2 numbers for multipliaction and modulus :\n");
    scanf("%d %d",&a,&b);
    mltiply=a*b;
    printf("the mutiplication of %d and %d is:\n %d",a,b,mltiply);
    modulus=a%b;
    printf("\nthe modulus of %d and %d is:\n %d",a,b,modulus);
    return 0;
} 