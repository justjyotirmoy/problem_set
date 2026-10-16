#include<stdio.h>
int main()
{
    float side,perimeter;
    printf("Enter length of the sides of the square: ");
    scanf("%f",&side);
    perimeter=4*side;

    
    printf("Perimeter of the square: %.2f units",perimeter);

    return 0;
}