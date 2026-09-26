//Write a C program to find the area of a triangle

#include<stdio.h>
int main(){

    float a,b;
    printf("Enter The Base :");
    scanf("%f", &a);

    printf("Enter The Height :");
    scanf("%f", &b);

     
    printf("The Area Of Triangle :%.3f",0.5*a*b );

    return 0;
}