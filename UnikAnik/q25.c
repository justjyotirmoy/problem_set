//Write a C program to check whether a year is a leap year.
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year to check\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Year %d is a leap year",year);
    }
    else
        printf("Year %d is not a leap year",year);
    return 0;
}