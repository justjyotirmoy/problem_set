#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter the base of the triangle: ");
    scanf("%f",&base);
    printf("Height: ");
    scanf("%f",&height);

    area=0.5*base*height;

    
    printf("Area of the triangle: %.2f square units",area);

    return 0;
}