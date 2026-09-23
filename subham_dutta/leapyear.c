#include <stdio.h>
int main()
{
    int a;
    printf("the year number:\n");
    scanf("%d",&a);
    if(a%4==0)
    printf("the given year is a leap year");
    else
    printf("the given year is not a leap year");
    return 0;
}