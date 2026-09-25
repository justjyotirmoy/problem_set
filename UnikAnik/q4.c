//Write a C program to find Simple Interest.
#include<stdio.h>
int main()
{
    float si,p,r,t;
    printf("enter the values of principal,interest and time period:\n");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("\nthe simple interest is %f",si);
    return 0;
}