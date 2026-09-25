//Write a C program to find the average of five numbers.
#include<stdio.h>
int main()
{
    float average,a,b,c,d,f;
    printf("enter 5 numbers:\n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&f);
    printf("the average of 5 no. is: %f",average=(a+b+c+d+f)/5);
    return 0;
}