#include<stdio.h>
int main()
{
    float num1,num2,num3,avg;
    printf("Enter three numbers: ");
    scanf("%f%f%f",&num1,&num2,&num3);

    avg=(num1+num2+num3)/3;
    
    printf("Average: %.2f",avg);

    return 0;
}