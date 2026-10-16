//program to find the largest of two numbers

#include <stdio.h>

int main() 
{
    int num1, num2;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("The largest number is %d.\n", num1);
    } else {
        printf("The largest number is %d.\n", num2);
    }

    return 0;
}