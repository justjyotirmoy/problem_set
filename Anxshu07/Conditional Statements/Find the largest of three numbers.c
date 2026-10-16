#include<stdio.h>
int main()
{
    float num1,num2,num3;
    printf("Enter three numbers: ");

    if(scanf("%f%f%f",&num1,&num2,&num3)!=3)
    printf("Invalid number!");

    else if(num1>num2 && num1>num3)
    printf("The largest is %.2f",num1);

    else if(num2>num1 && num2>num3)
    printf("The largest is %.2f",num2);

    else
    printf("The largest is %.2f",num3);

    return 0;

}