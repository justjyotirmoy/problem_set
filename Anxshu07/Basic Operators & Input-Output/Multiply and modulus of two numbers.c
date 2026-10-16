#include<stdio.h>
int main()
{
    int num1,num2,mul,mod;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    mul=num1*num2;
    mod=num1%num2;
    
    printf("Multiplication: %d \nModulus: %d",mul,mod);

    return 0;
}