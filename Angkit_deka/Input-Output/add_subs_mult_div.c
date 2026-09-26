//2. Write a C program to perform addition, subtraction, multiplication and division of two numbers. 

#include<stdio.h>
int main(){

    float a,b;
    printf("Enter Two Numbers :");
    scanf("%f %f", &a,&b);

    printf("The Addition Of Two Numbers: %f\n", a+b);
    printf("The Substraction Of  Two Numbers : %f\n",a-b);
    printf("The Multiplication Of  Two Numbers : %f\n",a*b);
    printf("The Division Of Two Numbers : %f\n",a/b);
    return 0;
}