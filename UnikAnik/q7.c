//Write a C program to find the perimeter of a rectangle.
#include<stdio.h>
int main()
{
    float perimetre,l,b;
    printf("enter the dimensions of rectangle\n");
    scanf("%f %f",&l,&b);
    printf("the perimeter of rectangle is: %f",perimetre=2*(l+b));
    return 0;
}