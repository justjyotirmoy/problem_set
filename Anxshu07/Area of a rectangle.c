#include<stdio.h>
int main()
{
    float length,breadth,area;
    printf("Enter length of the rectangle: ");
    scanf("%f",&length);
    printf("Breadth: ");
    scanf("%f",&breadth);

    area=length*breadth;

    
    printf("Area of the rectangle: %.2f square units",area);

    return 0;
}