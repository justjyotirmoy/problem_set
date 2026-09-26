//1. Write a C program to perform multiplication (*) and modulus (%) of two numbers.

#include<stdio.h>
int main(){
    float a,b;

    printf("Enter two numbers :\n");
    scanf("%f %f", &a,&b);
  
    int c = a;
    int d = b;
    printf("The Multiplication Of Numbers : %.3f\n",a*b);
    printf("The Modulus Of Numbers : %d", c%d);
    
return 0;
}