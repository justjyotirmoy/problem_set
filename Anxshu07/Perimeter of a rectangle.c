#include<stdio.h>
int main()
{
    float length,breadth,perimeter;
    printf("Enter length of the rectangle: ");
    scanf("%f",&length);
    printf("Breadth: ");
    scanf("%f",&breadth);

    perimeter=2*(length+breadth);

    
    printf("Perimeter of the rectangle: %.2f units",perimeter);

    return 0;
}