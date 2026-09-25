//Write a C program to calculate total and average marks of five subjects.
#include<stdio.h>
int main()
{
    float toatal,average,a,b,c,d,f;
    printf("enter 5 subject marks:\n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&f);
    printf("the average marks is: %f",average=(a+b+c+d+f)/5);
    printf("\nthe toatl marks of 5 subject is: %f",toatal=a+b+c+d+f);
    return 0;
}