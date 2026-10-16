#include <stdio.h>
int main()
{
    float a,b,c,Avg;
    printf("Enter the three numbers you wanna find the avg of\n");
    scanf("%f%f%f", &a,&b,&c);
    Avg=(a+b+c)/3;
    printf("The avg of the numbers is %f\n", Avg);
    return 0;
}