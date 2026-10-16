//3 float numbers ka average

#include <stdio.h>

int main() 
{
    float num1 = 10.5;
    float num2 = 20.3;
    float num3 = 15.7;
    float average = (num1 + num2 + num3) / 3;

    printf("\ngiven numbers are: %.1f, %.1f, %.1f\n", num1, num2, num3);
    printf("Average: %.2f\n", average);

    return 0;
}
