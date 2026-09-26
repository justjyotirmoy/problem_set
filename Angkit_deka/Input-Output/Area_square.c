//Write a C program to find the area of the square

#include<stdio.h>
int main(){

    float s;
    printf("Enter The Length Of Side:");
    scanf("%f", &s);
    printf("The Area Of Square :%.3f", s*s);

    return 0;
}