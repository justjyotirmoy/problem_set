//Write a C program to find whether a student has passed or failed based on marks
#include<stdio.h>
int main()
{
    float mark,p;
    printf("enter the marks o student:\n");
    scanf("%f",&mark);
    printf("enter the passing marks:\n");
    scanf("%f",&p);
    if(mark>=p)
        printf("Student have passed ");
    else
        printf("Better luck next time brothaa");
    return 0;
}