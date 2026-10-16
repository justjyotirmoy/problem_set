#include<stdio.h>
int main()
{
    float var1,var2,var3;
    printf("Enter two numbers: ");
    scanf("%f%f",&var1,&var2);
    printf("\nBefore swapping--- \nVariable 1: %f \nVariable 2: %f",var1,var2);

    var3=var1;
    var1=var2;
    var2=var3;

    printf("\n\nAfter swapping--- \nVariable 1: %f \nVariable 2: %f",var1,var2);

    return 0;
}