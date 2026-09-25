//5 numbers ka average

#include <stdio.h>

int main() 
{
    float num1 = 10.5;
    float num2 = 20.3;
    float num3 = 15.7;
    float num4 = 12.8;
    float num5 = 18.2;
    float average = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("\ngiven numbers are: %.1f, %.1f, %.1f, %.1f, %.1f\n", num1, num2, num3, num4, num5);
    printf("Average: %.2f\n", average);

    return 0;
}
