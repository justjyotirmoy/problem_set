//Write a C program to find the total amount using Simple Interest
#include<stdio.h>
int main()
{
    float si,p,r,t,total;
    printf("enter the values of principal,interest and time period:\n");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    total=si+p;
    printf("\nthe total amount is %f",total);
    return 0;
}