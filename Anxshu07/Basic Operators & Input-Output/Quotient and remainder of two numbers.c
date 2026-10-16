#include<stdio.h>
int main()
{
    float num1,num2,div;
    int mod;
    printf("Enter the two numbers: ");
    scanf("%f%f", &num1,&num2);

    div=num1/num2;
    mod= (int)num1 % (int)num2;

    printf("\n\nQuotient: %.2f \nRemainder: %d", div, mod);

    return 0;
}