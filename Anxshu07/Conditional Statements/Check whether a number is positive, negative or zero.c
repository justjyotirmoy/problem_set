#include<stdio.h>
int main()
{
    float num;
    printf("Enter a number: ");

    if(scanf("%f",&num)!=1)
    printf("Invalid number!");

    else if(num==0)
    printf("The entered number is zero");

    else if(num>0)
    printf("The entered number is positive");

    else
    printf("The entered number is negative");

    

    return 0;

}