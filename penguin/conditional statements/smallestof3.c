//program to find the smallest of three numbers.

#include <stdio.h>

int main() 
{
    int num1;
    int num2; 
    int num3;

    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3) {
        printf("The smallest number is: %d\n", num1);
    } else if (num2 < num3) {
        printf("The smallest number is: %d\n", num2);
    } else {
        printf("The smallest number is: %d\n", num3);
    }

    return 0;
}