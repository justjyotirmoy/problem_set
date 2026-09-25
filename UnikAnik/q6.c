//Write a C program to find the area of a rectangle
#include<stdio.h>
int main()
{
    float area,l,b;
    printf("enter the dimensions of rectangle\n");
    scanf("%f %f",&l,&b);
    printf("the area of rectangle is: %f",area=l*b);
    return 0;
}