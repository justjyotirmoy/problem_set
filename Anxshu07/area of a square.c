#include<stdio.h>
int main()
{
    float side,area;
    printf("Enter the length of the sides of the square: ");
    scanf("%f",&side);
    
    area=side*side;
    
    printf("Area of the square: %.2f square units",area);

    return 0;
}