#include<stdio.h>
int main()
{
    float num1,num2,sum,sub,mul,div;
    printf("Enter the two numbers: ");
    scanf("%f%f", &num1,&num2);

    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;

    printf("\n\nAddition: %.2f \nSubstraction: %.2f \nMultiplication: %.2f \nDivision: %.2f", sum, sub, mul, div);

    return 0;
}