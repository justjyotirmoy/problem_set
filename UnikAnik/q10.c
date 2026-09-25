//Write a C program to find the area and circumference of a circle.
#include <stdio.h>
int main()
{
    float pie=3.14,area,circum,r;
    printf("enter the radius of circle\n");
    scanf("%f",&r);
    printf("the area of circle is: %f",area=pie*r*r);
    printf("\nthe circumference of circle is: %f",circum=2*pie*r);
    return 0;
}