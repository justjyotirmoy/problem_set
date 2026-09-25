//Write a C program to find the average of three numbers using float.
#include<stdio.h>
int main()
{
    float average,a,b,c;
    printf("enter 3 numbers:\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("the average of 3 no. is: %f",average=(a+b+c)/3);
    return 0;
}