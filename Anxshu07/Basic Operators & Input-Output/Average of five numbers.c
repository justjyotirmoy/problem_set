#include<stdio.h>
int main()
{
    double num1,num2,num3,num4,num5,avg;
    printf("Enter five numbers: ");
    scanf("%lf%lf%lf%lf%lf",&num1,&num2,&num3,&num4,&num5);

    avg=(num1+num2+num3+num4+num5)/5;
    
    printf("Average: %.2lf",avg);

    return 0;
}