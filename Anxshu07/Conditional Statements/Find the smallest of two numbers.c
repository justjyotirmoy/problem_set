#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter two numbers: ");

    if(scanf("%f%f",&num1,&num2)!=2)
    printf("Invalid number!");

    else if(num1<num2)
    printf("The smallest is %.2f",num1);

    else 
    printf("The smallest is %.2f",num2);

    return 0;

}