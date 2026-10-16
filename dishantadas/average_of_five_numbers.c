#include <stdio.h>
int main()
{
    float a,b,c,d,e,Avg;
    printf("Enter the numbers you wanna find the avg of\n");
    scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
    Avg=(a+b+c+d+e)/5;
    printf("The avg of the numbers is %f\n", Avg);
    return 0;
}