//circle ka area and circumference

#include <stdio.h>
#define PI 3.14159

int main() 
{
    int radius = 15;
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    printf("\ngiven radius is: %d\n", radius);
    printf("Radius: %d\n", radius);
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}
