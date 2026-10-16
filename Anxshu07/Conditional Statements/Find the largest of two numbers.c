#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter two numbers: ");

    if(scanf("%f",&num1)!=1)
    printf("Invalid number!");

    else if(scanf("%f",&num2)!=1)
    printf("Invalid number!");

    else if(num1>num2)
    printf("The largest is %.2f",num1);

    else 
    printf("The largest is %.2f",num2);

    return 0;

}